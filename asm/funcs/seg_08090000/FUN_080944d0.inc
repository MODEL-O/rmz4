@ FUN_080944d0  entry 0x080944d0  size 150
.thumb
.org 0x944d0
FUN_080944d0:
	push {r4, r5, r6, r7, lr}	@ 000944d0 f0b5
.org 0x944d2
	sub sp, #8	@ 000944d2 82b0
.org 0x944d4
	adds r7, r0, #0	@ 000944d4 071c
.org 0x944d6
	movs r0, #42	@ 000944d6 2a20
.org 0x944d8
	bl 0x2b10	@ 000944d8 6ef71afb
.org 0x944dc
	ldrb r1, [r7, #10]	@ 000944dc b97a
.org 0x944de
	movs r0, #254	@ 000944de fe20
.org 0x944e0
	ands r0, r1	@ 000944e0 0840
.org 0x944e2
	strb r0, [r7, #10]	@ 000944e2 b872
.org 0x944e4
	ldr r6, [pc, #128]	@ 000944e4 204e
.org 0x944e6
	ldr r0, [r6, #0]	@ 000944e6 3068
.org 0x944e8
	ldr r5, [pc, #128]	@ 000944e8 204d
.org 0x944ea
	muls r0, r5	@ 000944ea 6843
.org 0x944ec
	ldr r2, [pc, #128]	@ 000944ec 204a
.org 0x944ee
	adds r0, r0, r2	@ 000944ee 8018
.org 0x944f0
	lsls r0, r0, #1	@ 000944f0 4000
.org 0x944f2
	lsrs r4, r0, #1	@ 000944f2 4408
.org 0x944f4
	lsrs r0, r0, #17	@ 000944f4 400c
.org 0x944f6
	movs r3, #7	@ 000944f6 0723
.org 0x944f8
	ands r0, r3	@ 000944f8 1840
.org 0x944fa
	subs r0, #3	@ 000944fa 0338
.org 0x944fc
	lsls r0, r0, #8	@ 000944fc 0002
.org 0x944fe
	ldr r1, [r7, #84]	@ 000944fe 796d
.org 0x94500
	adds r1, r1, r0	@ 00094500 0918
.org 0x94502
	str r1, [sp, #0]	@ 00094502 0091
.org 0x94504
	adds r0, r4, #0	@ 00094504 201c
.org 0x94506
	muls r0, r5	@ 00094506 6843
.org 0x94508
	adds r0, r0, r2	@ 00094508 8018
.org 0x9450a
	lsls r0, r0, #1	@ 0009450a 4000
.org 0x9450c
	lsrs r1, r0, #1	@ 0009450c 4108
.org 0x9450e
	str r1, [r6, #0]	@ 0009450e 3160
.org 0x94510
	lsrs r0, r0, #17	@ 00094510 400c
.org 0x94512
	ands r0, r3	@ 00094512 1840
.org 0x94514
	lsls r0, r0, #8	@ 00094514 0002
.org 0x94516
	ldr r1, [pc, #92]	@ 00094516 1749
.org 0x94518
	adds r0, r0, r1	@ 00094518 4018
.org 0x9451a
	ldr r1, [r7, #88]	@ 0009451a b96d
.org 0x9451c
	adds r1, r1, r0	@ 0009451c 0918
.org 0x9451e
	str r1, [sp, #4]	@ 0009451e 0191
.org 0x94520
	movs r0, #1	@ 00094520 0120
.org 0x94522
	mov r1, sp	@ 00094522 6946
.org 0x94524
	bl 0xd0c88	@ 00094524 3cf0b0fb
.org 0x94528
	adds r0, r7, #0	@ 00094528 381c
.org 0x9452a
	bl 0x94e38	@ 0009452a 00f085fc
.org 0x9452e
	adds r0, r7, #0	@ 0009452e 381c
.org 0x94530
	bl 0x94f00	@ 00094530 00f0e6fc
.org 0x94534
	ldr r2, [pc, #64]	@ 00094534 104a
.org 0x94536
	ldrh r1, [r2, #12]	@ 00094536 9189
.org 0x94538
	ldr r0, [pc, #64]	@ 00094538 1048
.org 0x9453a
	cmp r1, r0	@ 0009453a 8142
.org 0x9453c
	bhi.n 0x94542	@ 0009453c 01d8
.org 0x9453e
	adds r0, r1, #1	@ 0009453e 481c
.org 0x94540
	strh r0, [r2, #12]	@ 00094540 9081
.org 0x94542
	adds r1, r7, #0	@ 00094542 391c
.org 0x94544
	adds r1, #84	@ 00094544 5431
.org 0x94546
	adds r0, r7, #0	@ 00094546 381c
.org 0x94548
	bl 0x2abe0	@ 00094548 96f74afb
.org 0x9454c
	ldr r1, [pc, #48]	@ 0009454c 0c49
.org 0x9454e
	ldrb r0, [r7, #9]	@ 0009454e 787a
.org 0x94550
	lsls r0, r0, #2	@ 00094550 8000
.org 0x94552
	adds r0, r0, r1	@ 00094552 4018
.org 0x94554
	movs r1, #4	@ 00094554 0421
.org 0x94556
	str r1, [r7, #12]	@ 00094556 f960
.org 0x94558
	ldr r0, [r0, #0]	@ 00094558 0068
.org 0x9455a
	ldr r0, [r0, #16]	@ 0009455a 0069
.org 0x9455c
	str r0, [r7, #20]	@ 0009455c 7861
.org 0x9455e
	add sp, #8	@ 0009455e 02b0
.org 0x94560
	pop {r4, r5, r6, r7}	@ 00094560 f0bc
.org 0x94562
	pop {r0}	@ 00094562 01bc
.org 0x94564
	bx r0	@ 00094564 0047
