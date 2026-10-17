@ FUN_08071ebc  entry 0x08071ebc  size 28
.thumb
.org 0x71ebc
FUN_08071ebc:
	push {lr}	@ 00071ebc 00b5
.org 0x71ebe
	movs r2, #0	@ 00071ebe 0022
.org 0x71ec0
	movs r1, #25	@ 00071ec0 1921
.org 0x71ec2
	strb r1, [r0, #14]	@ 00071ec2 8173
.org 0x71ec4
	strb r2, [r0, #15]	@ 00071ec4 c273
.org 0x71ec6
	ldr r2, [pc, #16]	@ 00071ec6 044a
.org 0x71ec8
	ldrb r1, [r0, #13]	@ 00071ec8 417b
.org 0x71eca
	lsls r1, r1, #2	@ 00071eca 8900
.org 0x71ecc
	adds r1, r1, r2	@ 00071ecc 8918
.org 0x71ece
	ldr r1, [r1, #0]	@ 00071ece 0968
.org 0x71ed0
	bl 0x128f80	@ 00071ed0 b7f056f8
.org 0x71ed4
	pop {r0}	@ 00071ed4 01bc
.org 0x71ed6
	bx r0	@ 00071ed6 0047
