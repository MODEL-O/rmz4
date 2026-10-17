@ FUN_080d9530  entry 0x080d9530  size 72
.thumb
.org 0xd9530
FUN_080d9530:
	push {r4, lr}	@ 000d9530 10b5
.org 0xd9532
	adds r4, r0, #0	@ 000d9532 041c
.org 0xd9534
	ldr r1, [pc, #64]	@ 000d9534 1049
.org 0xd9536
	ldrb r0, [r4, #9]	@ 000d9536 607a
.org 0xd9538
	lsls r0, r0, #2	@ 000d9538 8000
.org 0xd953a
	adds r0, r0, r1	@ 000d953a 4018
.org 0xd953c
	movs r1, #1	@ 000d953c 0121
.org 0xd953e
	str r1, [r4, #12]	@ 000d953e e160
.org 0xd9540
	ldr r0, [r0, #0]	@ 000d9540 0068
.org 0xd9542
	ldr r0, [r0, #4]	@ 000d9542 4068
.org 0xd9544
	str r0, [r4, #20]	@ 000d9544 6061
.org 0xd9546
	adds r0, r4, #0	@ 000d9546 201c
.org 0xd9548
	bl 0x1cc9c	@ 000d9548 43f7a8fb
.org 0xd954c
	ldrb r1, [r4, #10]	@ 000d954c a17a
.org 0xd954e
	movs r0, #1	@ 000d954e 0120
.org 0xd9550
	orrs r0, r1	@ 000d9550 0843
.org 0xd9552
	movs r1, #2	@ 000d9552 0221
.org 0xd9554
	orrs r0, r1	@ 000d9554 0843
.org 0xd9556
	strb r0, [r4, #10]	@ 000d9556 a072
.org 0xd9558
	adds r0, r4, #0	@ 000d9558 201c
.org 0xd955a
	bl 0x1ceec	@ 000d955a 43f7c7fc
.org 0xd955e
	ldr r1, [pc, #28]	@ 000d955e 0749
.org 0xd9560
	adds r0, r4, #0	@ 000d9560 201c
.org 0xd9562
	bl 0x1cf00	@ 000d9562 43f7cdfc
.org 0xd9566
	adds r0, r4, #0	@ 000d9566 201c
.org 0xd9568
	bl 0x1cff0	@ 000d9568 43f742fd
.org 0xd956c
	adds r0, r4, #0	@ 000d956c 201c
.org 0xd956e
	bl 0xd94b0	@ 000d956e fff79fff
.org 0xd9572
	pop {r4}	@ 000d9572 10bc
.org 0xd9574
	pop {r0}	@ 000d9574 01bc
.org 0xd9576
	bx r0	@ 000d9576 0047
