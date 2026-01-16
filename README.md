Note:  
1. tb_test of id is named as id_test here. 
2. In base_test.svh, reset occurs only once. Maybe more are needed.  
3. Clock Cannot be observed.

id_driver task order(wb first, then read)

When programming, you can also keep an eye on the whole structure (maybe you can find some bugs) ;

found bug in DUT:
1. B_TYPE instruction opcode: expected ALU_SUB , got ALU_ADD;
2. funct3, rs2_id, rs1_id are not used in every instructions (I_TYPE,U_TYPE,J_TYPE), but decoded anyway (in order to get the result, we modified our ref model to remove the mismatch error).

