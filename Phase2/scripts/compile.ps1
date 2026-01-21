# ==============================================================================
# RISC-V CPU Offline Verification - Compilation Script (Phase2) - PowerShell Version
# ==============================================================================

param(
    [string]$TestName = "base_test",
    [string]$Verbosity = "UVM_MEDIUM",
    [int]$Coverage = 1,
    [string]$MemFile = "",
    [switch]$CompileOnly = $false,
    [switch]$RunSim = $true
)

# Directory structure
$ScriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$ProjectRoot = Split-Path -Parent $ScriptDir

$DutDir = Join-Path $ProjectRoot "dut"
$TbDir = Join-Path $ProjectRoot "tb"
$CpuUvcDir = Join-Path $ProjectRoot "cpu_uvc"
$InterfacesDir = Join-Path $ProjectRoot "interfaces"

# Output directories
$ParentDir = Split-Path -Parent (Split-Path -Parent $ProjectRoot)
$OutputRoot = Join-Path $ParentDir "sim_output\Phase2"

$WorkDir = Join-Path $OutputRoot "work"
$LogDir = Join-Path $OutputRoot "logs"
$CovDir = Join-Path $OutputRoot "coverage"
$WaveDir = Join-Path $OutputRoot "waves"
$ReportDir = Join-Path $OutputRoot "reports"

# Create output directories
New-Item -ItemType Directory -Force -Path $WorkDir | Out-Null
New-Item -ItemType Directory -Force -Path $LogDir | Out-Null
New-Item -ItemType Directory -Force -Path $CovDir | Out-Null
New-Item -ItemType Directory -Force -Path $WaveDir | Out-Null
New-Item -ItemType Directory -Force -Path $ReportDir | Out-Null

# Timestamps
$Timestamp = Get-Date -Format "yyyyMMdd_HHmmss"

# Log files
$CompileLog = Join-Path $LogDir "compile_$Timestamp.log"
$SimLog = Join-Path $LogDir "sim_${TestName}_$Timestamp.log"

Write-Host "========================================" -ForegroundColor Green
Write-Host "  RISC-V CPU Verification (Phase2)" -ForegroundColor Green
Write-Host "========================================" -ForegroundColor Green
Write-Host "Test Name:    $TestName" -ForegroundColor Cyan
Write-Host "Verbosity:    $Verbosity" -ForegroundColor Cyan
Write-Host "Coverage:     $(if($Coverage -eq 1){'Enabled'}else{'Disabled'})" -ForegroundColor Cyan
Write-Host "Output Dir:   $OutputRoot" -ForegroundColor Cyan
Write-Host "Work Lib:     $WorkDir" -ForegroundColor Cyan
Write-Host "Compile Log:  $CompileLog" -ForegroundColor Cyan
Write-Host "========================================" -ForegroundColor Green
Write-Host ""

# ==============================================================================
# Compilation
# ==============================================================================

Write-Host "[1/2] Compiling design and testbench..." -ForegroundColor Yellow

# Create work library
vlib $WorkDir
vmap work $WorkDir

# Build vlog command
$VlogCmd = @(
    "vlog",
    "-sv",
    "-timescale", "1ns/1ps",
    "+acc=pr",
    "-L", "mtiUvm",
    "-work", $WorkDir,
    "-l", $CompileLog,
    "+incdir+$DutDir",
    "+incdir+$TbDir",
    "+incdir+$CpuUvcDir",
    "+incdir+$InterfacesDir"
)

if ($Coverage -eq 1) {
    $VlogCmd += "+cover=bcesf"
}

# Add source files
Write-Host "Adding DUT files..." -ForegroundColor Cyan
$VlogCmd += Join-Path $DutDir "common.sv"
$VlogCmd += Join-Path $DutDir "ram2r1w.v"
$VlogCmd += Join-Path $DutDir "register_file.sv"
$VlogCmd += Join-Path $DutDir "control_unit.sv"
$VlogCmd += Join-Path $DutDir "alu.sv"
$VlogCmd += Join-Path $DutDir "bju.sv"
$VlogCmd += Join-Path $DutDir "multiplier.sv"
$VlogCmd += Join-Path $DutDir "divider.sv"
$VlogCmd += Join-Path $DutDir "mul_div.sv"
$VlogCmd += Join-Path $DutDir "lsu.sv"
$VlogCmd += Join-Path $DutDir "btb.sv"
$VlogCmd += Join-Path $DutDir "gshare.sv"
$VlogCmd += Join-Path $DutDir "decompress.sv"
$VlogCmd += Join-Path $DutDir "program_memory.sv"
$VlogCmd += Join-Path $DutDir "data_memory.sv"
$VlogCmd += Join-Path $DutDir "fwd_unit.sv"
$VlogCmd += Join-Path $DutDir "hazard_detect.sv"
$VlogCmd += Join-Path $DutDir "fetch_stage.sv"
$VlogCmd += Join-Path $DutDir "decode_stage.sv"
$VlogCmd += Join-Path $DutDir "execute_stage.sv"
$VlogCmd += Join-Path $DutDir "mem_stage.sv"
$VlogCmd += Join-Path $DutDir "cpu.sv"

Write-Host "Adding UVC files..." -ForegroundColor Cyan
# Note: cpu_if_helper.svh is included in cpu_if.sv, don't compile it separately
$VlogCmd += Join-Path $CpuUvcDir "cpu_if.sv"

Write-Host "Adding UVC package..." -ForegroundColor Cyan
$VlogCmd += Join-Path $TbDir "cpu_uvc_pkg.sv"

Write-Host "Adding Testbench files..." -ForegroundColor Cyan
$VlogCmd += Join-Path $TbDir "tb_top.sv"

# Execute compilation
Write-Host "Executing vlog..." -ForegroundColor Cyan
& $VlogCmd[0] $VlogCmd[1..($VlogCmd.Length-1)]

if ($LASTEXITCODE -ne 0) {
    Write-Host "[ERROR] Compilation failed! Check log: $CompileLog" -ForegroundColor Red
    exit 1
}

Write-Host "Compilation successful" -ForegroundColor Green
Write-Host "Compile log saved to: $CompileLog" -ForegroundColor Cyan
Write-Host ""

Write-Host "========================================" -ForegroundColor Green
Write-Host "Compilation completed successfully!" -ForegroundColor Green
Write-Host "========================================" -ForegroundColor Green

# ==============================================================================
# Simulation
# ==============================================================================

if ($CompileOnly) {
    Write-Host ""
    Write-Host "Compile-only mode, skipping simulation." -ForegroundColor Yellow
    exit 0
}

if (-not $RunSim) {
    exit 0
}

Write-Host ""
Write-Host "[2/2] Running simulation..." -ForegroundColor Yellow

# Prepare vsim command
$VsimCmd = @(
    "vsim",
    "-c",  # Command line mode
    "-L", "mtiUvm",
    "-l", $SimLog
)

# Add coverage if enabled  
if ($Coverage -eq 1) {
    $CovFile = Join-Path $CovDir "coverage_${TestName}_$Timestamp.ucdb"
    $VsimCmd += "-coverage"
    $VsimCmd += "-coverstore"
    $VsimCmd += $CovDir
    Write-Host "Coverage file: $CovFile" -ForegroundColor Cyan
}

# Add plusargs
$PlusArgs = @()
$PlusArgs += "+UVM_TESTNAME=$TestName"
$PlusArgs += "+UVM_VERBOSITY=$Verbosity"

# Add trace log path (use sim_output logs directory)
$TraceLog = Join-Path $LogDir "dut_trace_$Timestamp.log"
$PlusArgs += "+TRACE_LOG=$TraceLog"
Write-Host "Trace log: $TraceLog" -ForegroundColor Cyan

# Add mem file if specified
if ($MemFile -ne "") {
    $MemFileAbs = Resolve-Path $MemFile -ErrorAction SilentlyContinue
    if ($MemFileAbs) {
        Write-Host "Memory file: $MemFileAbs" -ForegroundColor Cyan
        $PlusArgs += "+MEM_FILE=$MemFileAbs"
    } else {
        Write-Host "[WARNING] Memory file not found: $MemFile" -ForegroundColor Yellow
    }
}

# Add top module with work library (use work.tb_top since work is already mapped)
$VsimCmd += "work.tb_top"

# Add plusargs as separate parameters
$VsimCmd += $PlusArgs

# Add run commands
$VsimCmd += "-do"
$VsimCmd += "run -all; quit -f"

# Execute simulation
Write-Host "Executing vsim..." -ForegroundColor Cyan
Write-Host "Command: vsim $($VsimCmd[1..$($VsimCmd.Length-1)] -join ' ')" -ForegroundColor DarkGray
Write-Host ""

& $VsimCmd[0] $VsimCmd[1..($VsimCmd.Length-1)]

if ($LASTEXITCODE -ne 0) {
    Write-Host ""
    Write-Host "[ERROR] Simulation failed! Check log: $SimLog" -ForegroundColor Red
    exit 1
}

Write-Host ""
Write-Host "========================================" -ForegroundColor Green
Write-Host "Simulation completed!" -ForegroundColor Green
Write-Host "========================================" -ForegroundColor Green
Write-Host "Simulation log: $SimLog" -ForegroundColor Cyan
if ($Coverage -eq 1) {
    Write-Host "Coverage data:  $CovDir" -ForegroundColor Cyan
}
Write-Host ""
