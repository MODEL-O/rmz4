@ FUN_080c552c  entry 0x080c552c  size 66
.thumb
.org 0xc552c
FUN_080c552c:
	push {r4, lr}	@ 000c552c 10b5
.org 0xc552e
	adds r4, r0, #0	@ 000c552e 041c
.org 0xc5530
	ldr r1, [pc, #60]	@ 000c5530 0f49
.org 0xc5532
	ldrb r0, [r4, #9]	@ 000c5532 607a
.org 0xc5534
	lsls r0, r0, #2	@ 000c5534 8000
.org 0xc5536
	adds r0, r0, r1	@ 000c5536 4018
.org 0xc5538
	movs r1, #1	@ 000c5538 0121
.org 0xc553a
	str r1, [r4, #12]	@ 000c553a e160
.org 0xc553c
	ldr r0, [r0, #0]	@ 000c553c 0068
.org 0xc553e
	ldr r0, [r0, #4]	@ 000c553e 4068
.org 0xc5540
	str r0, [r4, #20]	@ 000c5540 6061
.org 0xc5542
	ldrb r1, [r4, #10]	@ 000c5542 a17a
.org 0xc5544
	movs r0, #254	@ 000c5544 fe20
.org 0xc5546
	ands r0, r1	@ 000c5546 0840
.org 0xc5548
	movs r2, #0	@ 000c5548 0022
.org 0xc554a
	movs r1, #2	@ 000c554a 0221
.org 0xc554c
	orrs r0, r1	@ 000c554c 0843
.org 0xc554e
	strb r0, [r4, #10]	@ 000c554e a072
.org 0xc5550
	adds r0, r4, #0	@ 000c5550 201c
.org 0xc5552
	adds r0, #180	@ 000c5552 b430
.org 0xc5554
	movs r1, #0	@ 000c5554 0021
.org 0xc5556
	strh r2, [r0, #0]	@ 000c5556 0280
.org 0xc5558
	adds r0, #4	@ 000c5558 0430
.org 0xc555a
	strb r1, [r0, #0]	@ 000c555a 0170
.org 0xc555c
	adds r0, r4, #0	@ 000c555c 201c
.org 0xc555e
	bl 0x1cc9c	@ 000c555e 57f79dfb
.org 0xc5562
	adds r0, r4, #0	@ 000c5562 201c
.org 0xc5564
	bl 0xc56d4	@ 000c5564 00f0b6f8
.org 0xc5568
	pop {r4}	@ 000c5568 10bc
.org 0xc556a
	pop {r0}	@ 000c556a 01bc
.org 0xc556c
	bx r0	@ 000c556c 0047
