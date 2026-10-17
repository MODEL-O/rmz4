@ FUN_0809e2bc  entry 0x0809e2bc  size 20
.thumb
.org 0x9e2bc
FUN_0809e2bc:
	push {lr}	@ 0009e2bc 00b5
.org 0x9e2be
	ldr r2, [pc, #16]	@ 0009e2be 044a
.org 0x9e2c0
	ldrb r1, [r0, #13]	@ 0009e2c0 417b
.org 0x9e2c2
	lsls r1, r1, #2	@ 0009e2c2 8900
.org 0x9e2c4
	adds r1, r1, r2	@ 0009e2c4 8918
.org 0x9e2c6
	ldr r1, [r1, #0]	@ 0009e2c6 0968
.org 0x9e2c8
	bl 0x128f80	@ 0009e2c8 8af05afe
.org 0x9e2cc
	pop {r0}	@ 0009e2cc 01bc
.org 0x9e2ce
	bx r0	@ 0009e2ce 0047
