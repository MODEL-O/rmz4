@ FUN_080e3fc4  entry 0x080e3fc4  size 20
.thumb
.org 0xe3fc4
FUN_080e3fc4:
	push {lr}	@ 000e3fc4 00b5
.org 0xe3fc6
	ldr r2, [pc, #16]	@ 000e3fc6 044a
.org 0xe3fc8
	ldrb r1, [r0, #17]	@ 000e3fc8 417c
.org 0xe3fca
	lsls r1, r1, #2	@ 000e3fca 8900
.org 0xe3fcc
	adds r1, r1, r2	@ 000e3fcc 8918
.org 0xe3fce
	ldr r1, [r1, #0]	@ 000e3fce 0968
.org 0xe3fd0
	bl 0x128f80	@ 000e3fd0 44f0d6ff
.org 0xe3fd4
	pop {r0}	@ 000e3fd4 01bc
.org 0xe3fd6
	bx r0	@ 000e3fd6 0047
