@ FUN_0807c2b8  entry 0x0807c2b8  size 30
.thumb
.org 0x7c2b8
FUN_0807c2b8:
	push {lr}	@ 0007c2b8 00b5
.org 0x7c2ba
	ldrb r1, [r0, #14]	@ 0007c2ba 817b
.org 0x7c2bc
	adds r1, #1	@ 0007c2bc 0131
.org 0x7c2be
	movs r2, #0	@ 0007c2be 0022
.org 0x7c2c0
	strb r1, [r0, #14]	@ 0007c2c0 8173
.org 0x7c2c2
	strb r2, [r0, #15]	@ 0007c2c2 c273
.org 0x7c2c4
	ldr r2, [pc, #16]	@ 0007c2c4 044a
.org 0x7c2c6
	ldrb r1, [r0, #13]	@ 0007c2c6 417b
.org 0x7c2c8
	lsls r1, r1, #2	@ 0007c2c8 8900
.org 0x7c2ca
	adds r1, r1, r2	@ 0007c2ca 8918
.org 0x7c2cc
	ldr r1, [r1, #0]	@ 0007c2cc 0968
.org 0x7c2ce
	bl 0x128f80	@ 0007c2ce acf057fe
.org 0x7c2d2
	pop {r0}	@ 0007c2d2 01bc
.org 0x7c2d4
	bx r0	@ 0007c2d4 0047
