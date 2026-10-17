@ FUN_080a51a0  entry 0x080a51a0  size 20
.thumb
.org 0xa51a0
FUN_080a51a0:
	push {lr}	@ 000a51a0 00b5
.org 0xa51a2
	ldr r2, [pc, #16]	@ 000a51a2 044a
.org 0xa51a4
	ldrb r1, [r0, #13]	@ 000a51a4 417b
.org 0xa51a6
	lsls r1, r1, #2	@ 000a51a6 8900
.org 0xa51a8
	adds r1, r1, r2	@ 000a51a8 8918
.org 0xa51aa
	ldr r1, [r1, #0]	@ 000a51aa 0968
.org 0xa51ac
	bl 0x128f80	@ 000a51ac 83f0e8fe
.org 0xa51b0
	pop {r0}	@ 000a51b0 01bc
.org 0xa51b2
	bx r0	@ 000a51b2 0047
