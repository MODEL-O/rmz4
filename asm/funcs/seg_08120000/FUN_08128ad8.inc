@ FUN_08128ad8  entry 0x08128ad8  size 14
.thumb
.org 0x128ad8
FUN_08128ad8:
	push {lr}	@ 00128ad8 00b5
.org 0x128ada
	ldr r2, [pc, #12]	@ 00128ada 034a
.org 0x128adc
	ldr r2, [r2, #0]	@ 00128adc 1268
.org 0x128ade
	bl 0x128f84	@ 00128ade 00f051fa
.org 0x128ae2
	pop {r0}	@ 00128ae2 01bc
.org 0x128ae4
	bx r0	@ 00128ae4 0047
