@ FUN_0810e518  entry 0x0810e518  size 16
.thumb
.org 0x10e518
FUN_0810e518:
	push {lr}	@ 0010e518 00b5
.org 0x10e51a
	lsls r0, r0, #16	@ 0010e51a 0004
.org 0x10e51c
	lsrs r0, r0, #16	@ 0010e51c 000c
.org 0x10e51e
	movs r1, #0	@ 0010e51e 0021
.org 0x10e520
	bl 0x10e528	@ 0010e520 00f002f8
.org 0x10e524
	pop {r0}	@ 0010e524 01bc
.org 0x10e526
	bx r0	@ 0010e526 0047
