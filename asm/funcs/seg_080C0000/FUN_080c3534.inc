@ FUN_080c3534  entry 0x080c3534  size 20
.thumb
.org 0xc3534
FUN_080c3534:
	push {lr}	@ 000c3534 00b5
.org 0xc3536
	ldr r2, [pc, #16]	@ 000c3536 044a
.org 0xc3538
	ldrb r1, [r0, #16]	@ 000c3538 017c
.org 0xc353a
	lsls r1, r1, #2	@ 000c353a 8900
.org 0xc353c
	adds r1, r1, r2	@ 000c353c 8918
.org 0xc353e
	ldr r1, [r1, #0]	@ 000c353e 0968
.org 0xc3540
	bl 0x128f80	@ 000c3540 65f01efd
.org 0xc3544
	pop {r0}	@ 000c3544 01bc
.org 0xc3546
	bx r0	@ 000c3546 0047
