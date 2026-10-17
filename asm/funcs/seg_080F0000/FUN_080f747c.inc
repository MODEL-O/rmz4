@ FUN_080f747c  entry 0x080f747c  size 20
.thumb
.org 0xf747c
FUN_080f747c:
	push {lr}	@ 000f747c 00b5
.org 0xf747e
	ldr r2, [pc, #16]	@ 000f747e 044a
.org 0xf7480
	ldrb r1, [r0, #16]	@ 000f7480 017c
.org 0xf7482
	lsls r1, r1, #2	@ 000f7482 8900
.org 0xf7484
	adds r1, r1, r2	@ 000f7484 8918
.org 0xf7486
	ldr r1, [r1, #0]	@ 000f7486 0968
.org 0xf7488
	bl 0x128f80	@ 000f7488 31f07afd
.org 0xf748c
	pop {r0}	@ 000f748c 01bc
.org 0xf748e
	bx r0	@ 000f748e 0047
