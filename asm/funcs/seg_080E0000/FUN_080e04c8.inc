@ FUN_080e04c8  entry 0x080e04c8  size 20
.thumb
.org 0xe04c8
FUN_080e04c8:
	push {lr}	@ 000e04c8 00b5
.org 0xe04ca
	ldr r2, [pc, #16]	@ 000e04ca 044a
.org 0xe04cc
	ldrb r1, [r0, #16]	@ 000e04cc 017c
.org 0xe04ce
	lsls r1, r1, #2	@ 000e04ce 8900
.org 0xe04d0
	adds r1, r1, r2	@ 000e04d0 8918
.org 0xe04d2
	ldr r1, [r1, #0]	@ 000e04d2 0968
.org 0xe04d4
	bl 0x128f80	@ 000e04d4 48f054fd
.org 0xe04d8
	pop {r0}	@ 000e04d8 01bc
.org 0xe04da
	bx r0	@ 000e04da 0047
