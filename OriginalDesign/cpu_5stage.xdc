set_property PACKAGE_PIN E3 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]
create_clock -period 20.000 -name clk -waveform {0.000 10.000} -add [get_ports clk]
set_property PACKAGE_PIN T8 [get_ports {led[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[0]}]
##Bank = 34, Pin name = IO_L21N_T3_DQS_34,					Sch name = LED1
set_property PACKAGE_PIN V9 [get_ports {led[1]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[1]}]
##Bank = 34, Pin name = IO_L24P_T3_34,						Sch name = LED2
set_property PACKAGE_PIN R8 [get_ports {led[2]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[2]}]
##Bank = 34, Pin name = IO_L23N_T3_34,						Sch name = LED3
set_property PACKAGE_PIN T6 [get_ports {led[3]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[3]}]
##Bank = 34, Pin name = IO_L12P_T1_MRCC_34,					Sch name = LED4
set_property PACKAGE_PIN T5 [get_ports {led[4]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[4]}]
##Bank = 34, Pin name = IO_L12N_T1_MRCC_34,					Sch	name = LED5
set_property PACKAGE_PIN T4 [get_ports {led[5]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[5]}]
##Bank = 34, Pin name = IO_L22P_T3_34,						Sch name = LED6
set_property PACKAGE_PIN U7 [get_ports {led[6]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[6]}]
##Bank = 34, Pin name = IO_L22N_T3_34,						Sch name = LED7
set_property PACKAGE_PIN U6 [get_ports {led[7]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[7]}]
##Bank = 34, Pin name = IO_L10N_T1_34,

set_property PACKAGE_PIN V4 [get_ports debug_flush]
set_property IOSTANDARD LVCMOS33 [get_ports debug_flush]

set_property PACKAGE_PIN U3 [get_ports debug_is_bj]
set_property IOSTANDARD LVCMOS33 [get_ports debug_is_bj]

set_property PACKAGE_PIN P2 [get_ports debug_exception]
set_property IOSTANDARD LVCMOS33 [get_ports debug_exception]

set_property PACKAGE_PIN C4 [get_ports io_rx]
set_property IOSTANDARD LVCMOS33 [get_ports io_rx]

set_property PACKAGE_PIN U8 [get_ports rstn_cpu]
set_property IOSTANDARD LVCMOS33 [get_ports rstn_cpu]
set_property PACKAGE_PIN U9 [get_ports rstn_uart]
set_property IOSTANDARD LVCMOS33 [get_ports rstn_uart]



