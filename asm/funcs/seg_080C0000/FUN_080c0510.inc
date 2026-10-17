@ FUN_080c0510  entry 0x080c0510  size 116
.thumb
.org 0xc0510
FUN_080c0510:
	push {r4, r5, r6, lr}	@ 000c0510 70b5
.org 0xc0512
	adds r5, r0, #0	@ 000c0512 051c
.org 0xc0514
	ldr r0, [r5, #40]	@ 000c0514 a86a
.org 0xc0516
	ldrb r4, [r0, #10]	@ 000c0516 847a
.org 0xc0518
	lsrs r4, r4, #4	@ 000c0518 2409
.org 0xc051a
	movs r2, #1	@ 000c051a 0122
.org 0xc051c
	ands r4, r2	@ 000c051c 1440
.org 0xc051e
	ldr r1, [pc, #56]	@ 000c051e 0e49
.org 0xc0520
	ldrb r0, [r5, #9]	@ 000c0520 687a
.org 0xc0522
	lsls r0, r0, #2	@ 000c0522 8000
.org 0xc0524
	adds r0, r0, r1	@ 000c0524 4018
.org 0xc0526
	str r2, [r5, #12]	@ 000c0526 ea60
.org 0xc0528
	ldr r0, [r0, #0]	@ 000c0528 0068
.org 0xc052a
	ldr r0, [r0, #4]	@ 000c052a 4068
.org 0xc052c
	str r0, [r5, #20]	@ 000c052c 6861
.org 0xc052e
	movs r0, #0	@ 000c052e 0020
.org 0xc0530
	strb r0, [r5, #13]	@ 000c0530 6873
.org 0xc0532
	strb r0, [r5, #14]	@ 000c0532 a873
.org 0xc0534
	strb r0, [r5, #15]	@ 000c0534 e873
.org 0xc0536
	ldrb r0, [r5, #10]	@ 000c0536 a87a
.org 0xc0538
	movs r1, #1	@ 000c0538 0121
.org 0xc053a
	movs r6, #0	@ 000c053a 0026
.org 0xc053c
	orrs r0, r1	@ 000c053c 0843
.org 0xc053e
	movs r1, #2	@ 000c053e 0221
.org 0xc0540
	orrs r0, r1	@ 000c0540 0843
.org 0xc0542
	strb r0, [r5, #10]	@ 000c0542 a872
.org 0xc0544
	adds r0, r5, #0	@ 000c0544 281c
.org 0xc0546
	bl 0x1cc9c	@ 000c0546 5cf7a9fb
.org 0xc054a
	cmp r4, #0	@ 000c054a 002c
.org 0xc054c
	beq.n 0xc055c	@ 000c054c 06d0
.org 0xc054e
	ldrb r0, [r5, #10]	@ 000c054e a87a
.org 0xc0550
	movs r1, #16	@ 000c0550 1021
.org 0xc0552
	orrs r0, r1	@ 000c0552 0843
.org 0xc0554
	b.n 0xc0562	@ 000c0554 05e0
.org 0xc0556
	.byte 0x00	@ 000c0556 data
.org 0xc0557
	.byte 0x00	@ 000c0557 data
.org 0xc0558
	.byte 0xf4,0x49,0x86,0x08	@ 000c0558 data
.org 0xc055c
	ldrb r1, [r5, #10]	@ 000c055c a97a
.org 0xc055e
	movs r0, #239	@ 000c055e ef20
.org 0xc0560
	ands r0, r1	@ 000c0560 0840
.org 0xc0562
	strb r0, [r5, #10]	@ 000c0562 a872
.org 0xc0564
	adds r1, r4, #0	@ 000c0564 211c
.org 0xc0566
	adds r0, r5, #0	@ 000c0566 281c
.org 0xc0568
	adds r0, #76	@ 000c0568 4c30
.org 0xc056a
	strb r1, [r0, #0]	@ 000c056a 0170
.org 0xc056c
	adds r3, r5, #0	@ 000c056c 2b1c
.org 0xc056e
	adds r3, #74	@ 000c056e 4a33
.org 0xc0570
	lsls r1, r1, #4	@ 000c0570 0901
.org 0xc0572
	ldrb r2, [r3, #0]	@ 000c0572 1a78
.org 0xc0574
	movs r0, #17	@ 000c0574 1120
.org 0xc0576
	negs r0, r0	@ 000c0576 4042
.org 0xc0578
	ands r0, r2	@ 000c0578 1040
.org 0xc057a
	orrs r0, r1	@ 000c057a 0843
.org 0xc057c
	strb r0, [r3, #0]	@ 000c057c 1870
.org 0xc057e
	adds r0, r5, #0	@ 000c057e 281c
.org 0xc0580
	bl 0xc062c	@ 000c0580 00f054f8
