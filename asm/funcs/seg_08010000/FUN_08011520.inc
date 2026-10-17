@ FUN_08011520  entry 0x08011520  size 106
.thumb
.org 0x11520
FUN_08011520:
	push {r4, r5, r6, lr}	@ 00011520 70b5
.org 0x11522
	adds r6, r0, #0	@ 00011522 061c
.org 0x11524
	ldr r2, [pc, #36]	@ 00011524 094a
.org 0x11526
	ldr r1, [pc, #40]	@ 00011526 0a49
.org 0x11528
	adds r0, r2, r1	@ 00011528 5018
.org 0x1152a
	ldrb r1, [r0, #0]	@ 0001152a 0178
.org 0x1152c
	movs r0, #15	@ 0001152c 0f20
.org 0x1152e
	ands r0, r1	@ 0001152e 0840
.org 0x11530
	cmp r0, #3	@ 00011530 0328
.org 0x11532
	bne.n 0x11592	@ 00011532 2ed1
.org 0x11534
	ldr r0, [r6, #92]	@ 00011534 f06d
.org 0x11536
	lsls r0, r0, #16	@ 00011536 0004
.org 0x11538
	lsrs r3, r0, #16	@ 00011538 030c
.org 0x1153a
	ldr r1, [pc, #24]	@ 0001153a 0649
.org 0x1153c
	adds r0, r2, r1	@ 0001153c 5018
.org 0x1153e
	ldrb r0, [r0, #0]	@ 0001153e 0078
.org 0x11540
	cmp r0, #7	@ 00011540 0728
.org 0x11542
	bne.n 0x11558	@ 00011542 09d1
.org 0x11544
	ldr r0, [r6, #76]	@ 00011544 f06c
.org 0x11546
	adds r0, #2	@ 00011546 0230
.org 0x11548
	b.n 0x11564	@ 00011548 0ce0
.org 0x1154a
	.byte 0x00	@ 0001154a data
.org 0x1154b
	.byte 0x00	@ 0001154b data
.org 0x1154c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001154c data
.org 0x11550
	.byte 0x10,0xc0,0x02,0x00	@ 00011550 data
.org 0x11554
	.byte 0x24,0xd0,0x02,0x00	@ 00011554 data
.org 0x11558
	cmp r0, #11	@ 00011558 0b28
.org 0x1155a
	bne.n 0x11562	@ 0001155a 02d1
.org 0x1155c
	ldr r0, [r6, #76]	@ 0001155c f06c
.org 0x1155e
	subs r0, #2	@ 0001155e 0238
.org 0x11560
	b.n 0x11564	@ 00011560 00e0
.org 0x11562
	movs r0, #0	@ 00011562 0020
.org 0x11564
	str r0, [r6, #76]	@ 00011564 f064
.org 0x11566
	ldr r4, [r6, #80]	@ 00011566 346d
.org 0x11568
	subs r4, #2	@ 00011568 023c
.org 0x1156a
	str r4, [r6, #80]	@ 0001156a 3465
.org 0x1156c
	lsrs r3, r3, #4	@ 0001156c 1b09
.org 0x1156e
	lsls r3, r3, #2	@ 0001156e 9b00
.org 0x11570
	ldr r2, [pc, #36]	@ 00011570 094a
.org 0x11572
	adds r5, r3, r2	@ 00011572 9d18
.org 0x11574
	ldr r1, [r6, #52]	@ 00011574 716b
.org 0x11576
	ldr r0, [r6, #68]	@ 00011576 706c
.org 0x11578
	muls r1, r0	@ 00011578 4143
.org 0x1157a
	asrs r1, r1, #8	@ 0001157a 0912
.org 0x1157c
	ldr r0, [r6, #76]	@ 0001157c f06c
.org 0x1157e
	adds r0, r0, r1	@ 0001157e 4018
.org 0x11580
	strh r0, [r5, #0]	@ 00011580 2880
.org 0x11582
	adds r2, #2	@ 00011582 0232
.org 0x11584
	adds r3, r3, r2	@ 00011584 9b18
.org 0x11586
	ldr r1, [r6, #56]	@ 00011586 b16b
.org 0x11588
	ldr r0, [r6, #72]	@ 00011588 b06c
