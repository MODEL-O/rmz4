@ FUN_080a0588  entry 0x080a0588  size 336
.thumb
.org 0xa0588
FUN_080a0588:
	push {r4, r5, r6, r7, lr}	@ 000a0588 f0b5
.org 0xa058a
	sub sp, #8	@ 000a058a 82b0
.org 0xa058c
	adds r4, r0, #0	@ 000a058c 041c
.org 0xa058e
	ldrb r0, [r4, #10]	@ 000a058e a07a
.org 0xa0590
	lsrs r6, r0, #4	@ 000a0590 0609
.org 0xa0592
	movs r0, #1	@ 000a0592 0120
.org 0xa0594
	ands r6, r0	@ 000a0594 0640
.org 0xa0596
	adds r7, r6, #0	@ 000a0596 371c
.org 0xa0598
	ldrb r5, [r4, #15]	@ 000a0598 e57b
.org 0xa059a
	cmp r5, #0	@ 000a059a 002d
.org 0xa059c
	bne.n 0xa0620	@ 000a059c 40d1
.org 0xa059e
	adds r1, r4, #0	@ 000a059e 211c
.org 0xa05a0
	adds r1, #37	@ 000a05a0 2531
.org 0xa05a2
	movs r0, #24	@ 000a05a2 1820
.org 0xa05a4
	strb r0, [r1, #0]	@ 000a05a4 0870
.org 0xa05a6
	ldr r0, [r4, #84]	@ 000a05a6 606d
.org 0xa05a8
	str r0, [sp, #0]	@ 000a05a8 0090
.org 0xa05aa
	ldr r0, [r4, #88]	@ 000a05aa a06d
.org 0xa05ac
	str r0, [sp, #4]	@ 000a05ac 0190
.org 0xa05ae
	movs r2, #128	@ 000a05ae 8022
.org 0xa05b0
	lsls r2, r2, #2	@ 000a05b0 9200
.org 0xa05b2
	adds r0, r4, #0	@ 000a05b2 201c
.org 0xa05b4
	adds r0, #184	@ 000a05b4 b830
.org 0xa05b6
	ldrb r3, [r0, #0]	@ 000a05b6 0378
.org 0xa05b8
	movs r0, #0	@ 000a05b8 0020
.org 0xa05ba
	mov r1, sp	@ 000a05ba 6946
.org 0xa05bc
	bl 0xd0dc4	@ 000a05bc 30f002fc
.org 0xa05c0
	adds r0, r4, #0	@ 000a05c0 201c
.org 0xa05c2
	adds r0, #84	@ 000a05c2 5430
.org 0xa05c4
	ldrb r1, [r4, #16]	@ 000a05c4 217c
.org 0xa05c6
	adds r2, r6, #0	@ 000a05c6 321c
.org 0xa05c8
	bl 0xe0dc0	@ 000a05c8 40f0fafb
.org 0xa05cc
	ldrb r1, [r4, #10]	@ 000a05cc a17a
.org 0xa05ce
	movs r0, #1	@ 000a05ce 0120
.org 0xa05d0
	orrs r0, r1	@ 000a05d0 0843
.org 0xa05d2
	strb r0, [r4, #10]	@ 000a05d2 a072
.org 0xa05d4
	adds r0, r4, #0	@ 000a05d4 201c
.org 0xa05d6
	adds r0, #140	@ 000a05d6 8c30
.org 0xa05d8
	str r5, [r0, #0]	@ 000a05d8 0560
.org 0xa05da
	adds r0, #4	@ 000a05da 0430
.org 0xa05dc
	str r5, [r0, #0]	@ 000a05dc 0560
.org 0xa05de
	adds r0, #4	@ 000a05de 0430
.org 0xa05e0
	strb r5, [r0, #0]	@ 000a05e0 0570
.org 0xa05e2
	ldrb r1, [r4, #10]	@ 000a05e2 a17a
.org 0xa05e4
	movs r0, #251	@ 000a05e4 fb20
.org 0xa05e6
	ands r0, r1	@ 000a05e6 0840
.org 0xa05e8
	strb r0, [r4, #10]	@ 000a05e8 a072
.org 0xa05ea
	ldr r1, [pc, #204]	@ 000a05ea 3349
.org 0xa05ec
	adds r0, r4, #0	@ 000a05ec 201c
.org 0xa05ee
	bl 0x1cf00	@ 000a05ee 7cf787fc
.org 0xa05f2
	lsls r0, r6, #1	@ 000a05f2 7000
.org 0xa05f4
	subs r0, #1	@ 000a05f4 0138
.org 0xa05f6
	lsls r0, r0, #7	@ 000a05f6 c001
.org 0xa05f8
	str r0, [r4, #92]	@ 000a05f8 e065
.org 0xa05fa
	ldr r0, [pc, #192]	@ 000a05fa 3048
.org 0xa05fc
	str r0, [r4, #96]	@ 000a05fc 2066
.org 0xa05fe
	ldr r2, [pc, #192]	@ 000a05fe 304a
.org 0xa0600
	ldr r1, [r2, #0]	@ 000a0600 1168
.org 0xa0602
	ldr r0, [pc, #192]	@ 000a0602 3048
.org 0xa0604
	muls r0, r1	@ 000a0604 4843
.org 0xa0606
	ldr r1, [pc, #192]	@ 000a0606 3049
.org 0xa0608
	adds r0, r0, r1	@ 000a0608 4018
.org 0xa060a
	lsls r0, r0, #1	@ 000a060a 4000
.org 0xa060c
	lsrs r1, r0, #1	@ 000a060c 4108
.org 0xa060e
	str r1, [r2, #0]	@ 000a060e 1160
.org 0xa0610
	lsrs r0, r0, #17	@ 000a0610 400c
.org 0xa0612
	movs r1, #3	@ 000a0612 0321
.org 0xa0614
	ands r0, r1	@ 000a0614 0840
.org 0xa0616
	adds r0, #16	@ 000a0616 1030
.org 0xa0618
	strb r0, [r4, #18]	@ 000a0618 a074
.org 0xa061a
	ldrb r0, [r4, #15]	@ 000a061a e07b
.org 0xa061c
	adds r0, #1	@ 000a061c 0130
.org 0xa061e
	strb r0, [r4, #15]	@ 000a061e e073
.org 0xa0620
	adds r0, r4, #0	@ 000a0620 201c
.org 0xa0622
	bl 0x1cff0	@ 000a0622 7cf7e5fc
.org 0xa0626
	ldr r0, [r4, #84]	@ 000a0626 606d
.org 0xa0628
	ldr r1, [r4, #88]	@ 000a0628 a16d
.org 0xa062a
	str r0, [sp, #0]	@ 000a062a 0090
.org 0xa062c
	str r1, [sp, #4]	@ 000a062c 0191
.org 0xa062e
	ldr r2, [sp, #0]	@ 000a062e 009a
.org 0xa0630
	ldr r0, [r4, #92]	@ 000a0630 e06d
.org 0xa0632
	adds r2, r2, r0	@ 000a0632 1218
.org 0xa0634
	str r2, [sp, #0]	@ 000a0634 0092
.org 0xa0636
	ldr r1, [sp, #4]	@ 000a0636 0199
.org 0xa0638
	ldr r0, [r4, #96]	@ 000a0638 206e
.org 0xa063a
	adds r3, r1, r0	@ 000a063a 0b18
.org 0xa063c
	str r3, [sp, #4]	@ 000a063c 0193
.org 0xa063e
	lsls r1, r7, #1	@ 000a063e 7900
.org 0xa0640
	subs r1, #1	@ 000a0640 0139
.org 0xa0642
	lsls r0, r1, #1	@ 000a0642 4800
.org 0xa0644
	adds r0, r0, r1	@ 000a0644 4018
.org 0xa0646
	lsls r0, r0, #10	@ 000a0646 8002
.org 0xa0648
	adds r1, r2, r0	@ 000a0648 1118
.org 0xa064a
	ldrb r0, [r4, #18]	@ 000a064a a07c
.org 0xa064c
	subs r0, #1	@ 000a064c 0138
.org 0xa064e
	movs r6, #0	@ 000a064e 0026
.org 0xa0650
	strb r0, [r4, #18]	@ 000a0650 a074
.org 0xa0652
	lsls r0, r0, #24	@ 000a0652 0006
.org 0xa0654
	cmp r0, #0	@ 000a0654 0028
.org 0xa0656
	beq.n 0xa0666	@ 000a0656 06d0
.org 0xa0658
	adds r0, r1, #0	@ 000a0658 081c
.org 0xa065a
	adds r1, r3, #0	@ 000a065a 191c
.org 0xa065c
	bl 0x7c7c	@ 000a065c 67f70efb
.org 0xa0660
	lsls r0, r0, #16	@ 000a0660 0004
.org 0xa0662
	cmp r0, #0	@ 000a0662 0028
.org 0xa0664
	beq.n 0xa06d4	@ 000a0664 36d0
.org 0xa0666
	movs r0, #42	@ 000a0666 2a20
.org 0xa0668
	bl 0x2b10	@ 000a0668 62f752fa
.org 0xa066c
	ldr r0, [r4, #84]	@ 000a066c 606d
.org 0xa066e
	str r0, [sp, #0]	@ 000a066e 0090
.org 0xa0670
	ldr r0, [r4, #88]	@ 000a0670 a06d
.org 0xa0672
	str r0, [sp, #4]	@ 000a0672 0190
.org 0xa0674
	movs r0, #1	@ 000a0674 0120
.org 0xa0676
	mov r1, sp	@ 000a0676 6946
.org 0xa0678
	bl 0xd0c88	@ 000a0678 30f006fb
.org 0xa067c
	adds r0, r4, #0	@ 000a067c 201c
.org 0xa067e
	bl 0xa0c58	@ 000a067e 00f0ebfa
.org 0xa0682
	adds r5, r4, #0	@ 000a0682 251c
.org 0xa0684
	adds r5, #84	@ 000a0684 5435
.org 0xa0686
	movs r0, #4	@ 000a0686 0420
.org 0xa0688
	movs r1, #35	@ 000a0688 2321
.org 0xa068a
	adds r2, r5, #0	@ 000a068a 2a1c
.org 0xa068c
	bl 0x2ab88	@ 000a068c 8af77cfa
.org 0xa0690
	ldrb r1, [r4, #10]	@ 000a0690 a17a
.org 0xa0692
	movs r0, #254	@ 000a0692 fe20
.org 0xa0694
	ands r0, r1	@ 000a0694 0840
.org 0xa0696
	strb r0, [r4, #10]	@ 000a0696 a072
.org 0xa0698
	ldr r2, [pc, #48]	@ 000a0698 0c4a
.org 0xa069a
	ldrh r1, [r2, #12]	@ 000a069a 9189
.org 0xa069c
	ldr r0, [pc, #48]	@ 000a069c 0c48
.org 0xa069e
	cmp r1, r0	@ 000a069e 8142
.org 0xa06a0
	bhi.n 0xa06a6	@ 000a06a0 01d8
.org 0xa06a2
	adds r0, r1, #1	@ 000a06a2 481c
.org 0xa06a4
	strh r0, [r2, #12]	@ 000a06a4 9081
.org 0xa06a6
	adds r0, r4, #0	@ 000a06a6 201c
.org 0xa06a8
	adds r1, r5, #0	@ 000a06a8 291c
.org 0xa06aa
	bl 0x2abe0	@ 000a06aa 8af799fa
.org 0xa06ae
	movs r0, #4	@ 000a06ae 0420
.org 0xa06b0
	strb r0, [r4, #13]	@ 000a06b0 6073
.org 0xa06b2
	strb r6, [r4, #14]	@ 000a06b2 a673
.org 0xa06b4
	strb r6, [r4, #15]	@ 000a06b4 e673
.org 0xa06b6
	b.n 0xa06ec	@ 000a06b6 19e0
.org 0xa06b8
	.byte 0x06,0x82,0x00,0x00	@ 000a06b8 data
.org 0xa06bc
	.byte 0x80,0xfe,0xff,0xff	@ 000a06bc data
.org 0xa06c0
	.byte 0x38,0xdc,0x02,0x02	@ 000a06c0 data
.org 0xa06c4
	.byte 0xfd,0x43,0x03,0x00	@ 000a06c4 data
.org 0xa06c8
	.byte 0xc3,0x9e,0x26,0x00	@ 000a06c8 data
.org 0xa06cc
	.byte 0xe0,0xe8,0x02,0x02	@ 000a06cc data
.org 0xa06d0
	.byte 0x0e,0x27,0x00,0x00	@ 000a06d0 data
.org 0xa06d4
	ldr r0, [sp, #0]	@ 000a06d4 0098
.org 0xa06d6
	ldr r1, [sp, #4]	@ 000a06d6 0199
