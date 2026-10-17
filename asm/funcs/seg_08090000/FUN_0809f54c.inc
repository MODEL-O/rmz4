@ FUN_0809f54c  entry 0x0809f54c  size 20
.thumb
.org 0x9f54c
FUN_0809f54c:
	push {lr}	@ 0009f54c 00b5
.org 0x9f54e
	ldr r2, [pc, #16]	@ 0009f54e 044a
.org 0x9f550
	ldrb r1, [r0, #16]	@ 0009f550 017c
.org 0x9f552
	lsls r1, r1, #2	@ 0009f552 8900
.org 0x9f554
	adds r1, r1, r2	@ 0009f554 8918
.org 0x9f556
	ldr r1, [r1, #0]	@ 0009f556 0968
.org 0x9f558
	bl 0x128f80	@ 0009f558 89f012fd
.org 0x9f55c
	pop {r0}	@ 0009f55c 01bc
.org 0x9f55e
	bx r0	@ 0009f55e 0047
