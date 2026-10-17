@ FUN_080c6530  entry 0x080c6530  size 20
.thumb
.org 0xc6530
FUN_080c6530:
	push {lr}	@ 000c6530 00b5
.org 0xc6532
	ldr r2, [pc, #16]	@ 000c6532 044a
.org 0xc6534
	ldrb r1, [r0, #16]	@ 000c6534 017c
.org 0xc6536
	lsls r1, r1, #2	@ 000c6536 8900
.org 0xc6538
	adds r1, r1, r2	@ 000c6538 8918
.org 0xc653a
	ldr r1, [r1, #0]	@ 000c653a 0968
.org 0xc653c
	bl 0x128f80	@ 000c653c 62f020fd
.org 0xc6540
	pop {r0}	@ 000c6540 01bc
.org 0xc6542
	bx r0	@ 000c6542 0047
