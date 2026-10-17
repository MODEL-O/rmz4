@ FUN_0808a64c  entry 0x0808a64c  size 244
.thumb
.org 0x8a64c
FUN_0808a64c:
	push {r4, r5, lr}	@ 0008a64c 30b5
.org 0x8a64e
	adds r4, r0, #0	@ 0008a64e 041c
.org 0x8a650
	ldrb r5, [r4, #14]	@ 0008a650 a57b
.org 0x8a652
	cmp r5, #0	@ 0008a652 002d
.org 0x8a654
	beq.n 0x8a65c	@ 0008a654 02d0
.org 0x8a656
	cmp r5, #1	@ 0008a656 012d
.org 0x8a658
	beq.n 0x8a69a	@ 0008a658 1fd0
.org 0x8a65a
	b.n 0x8a754	@ 0008a65a 7be0
.org 0x8a65c
	ldr r1, [pc, #176]	@ 0008a65c 2c49
.org 0x8a65e
	adds r0, r4, #0	@ 0008a65e 201c
.org 0x8a660
	bl 0x1cf00	@ 0008a660 92f74efc
.org 0x8a664
	adds r0, r4, #0	@ 0008a664 201c
.org 0x8a666
	adds r0, #116	@ 0008a666 7430
.org 0x8a668
	ldr r1, [pc, #168]	@ 0008a668 2a49
.org 0x8a66a
	ldrb r2, [r1, #1]	@ 0008a66a 4a78
.org 0x8a66c
	lsls r1, r2, #1	@ 0008a66c 5100
.org 0x8a66e
	adds r1, r1, r2	@ 0008a66e 8918
.org 0x8a670
	lsls r1, r1, #3	@ 0008a670 c900
.org 0x8a672
	ldr r2, [pc, #164]	@ 0008a672 294a
.org 0x8a674
	adds r1, r1, r2	@ 0008a674 8918
.org 0x8a676
	bl 0x5784	@ 0008a676 7bf785f8
.org 0x8a67a
	ldrb r1, [r4, #10]	@ 0008a67a a17a
.org 0x8a67c
	movs r0, #16	@ 0008a67c 1020
.org 0x8a67e
	ands r0, r1	@ 0008a67e 0840
.org 0x8a680
	ldr r1, [pc, #152]	@ 0008a680 2649
.org 0x8a682
	cmp r0, #0	@ 0008a682 0028
.org 0x8a684
	beq.n 0x8a68a	@ 0008a684 01d0
.org 0x8a686
	movs r1, #128	@ 0008a686 8021
.org 0x8a688
	lsls r1, r1, #1	@ 0008a688 4900
.org 0x8a68a
	str r1, [r4, #92]	@ 0008a68a e165
.org 0x8a68c
	str r5, [r4, #96]	@ 0008a68c 2566
.org 0x8a68e
	adds r0, r4, #0	@ 0008a68e 201c
.org 0x8a690
	adds r0, #181	@ 0008a690 b530
.org 0x8a692
	strb r5, [r0, #0]	@ 0008a692 0570
.org 0x8a694
	ldrb r0, [r4, #14]	@ 0008a694 a07b
.org 0x8a696
	adds r0, #1	@ 0008a696 0130
.org 0x8a698
	strb r0, [r4, #14]	@ 0008a698 a073
.org 0x8a69a
	adds r0, r4, #0	@ 0008a69a 201c
.org 0x8a69c
	movs r1, #15	@ 0008a69c 0f21
.org 0x8a69e
	bl 0x8b210	@ 0008a69e 00f0b7fd
.org 0x8a6a2
	adds r0, r4, #0	@ 0008a6a2 201c
.org 0x8a6a4
	bl 0x1cff0	@ 0008a6a4 92f7a4fc
.org 0x8a6a8
	ldr r0, [r4, #84]	@ 0008a6a8 606d
.org 0x8a6aa
	ldr r1, [r4, #92]	@ 0008a6aa e16d
.org 0x8a6ac
	adds r0, r0, r1	@ 0008a6ac 4018
.org 0x8a6ae
	str r0, [r4, #84]	@ 0008a6ae 6065
.org 0x8a6b0
	adds r0, r4, #0	@ 0008a6b0 201c
.org 0x8a6b2
	bl 0x8b1dc	@ 0008a6b2 00f093fd
.org 0x8a6b6
	adds r0, r4, #0	@ 0008a6b6 201c
.org 0x8a6b8
	adds r0, #193	@ 0008a6b8 c130
.org 0x8a6ba
	ldrb r5, [r0, #0]	@ 0008a6ba 0578
.org 0x8a6bc
	cmp r5, #0	@ 0008a6bc 002d
.org 0x8a6be
	beq.n 0x8a728	@ 0008a6be 33d0
.org 0x8a6c0
	ldr r1, [pc, #92]	@ 0008a6c0 1749
.org 0x8a6c2
	ldr r0, [r4, #84]	@ 0008a6c2 606d
.org 0x8a6c4
	movs r2, #240	@ 0008a6c4 f022
.org 0x8a6c6
	lsls r2, r2, #7	@ 0008a6c6 d201
.org 0x8a6c8
	adds r0, r0, r2	@ 0008a6c8 8018
.org 0x8a6ca
	ldr r1, [r1, #56]	@ 0008a6ca 896b
.org 0x8a6cc
	subs r1, r1, r0	@ 0008a6cc 091a
.org 0x8a6ce
	movs r0, #128	@ 0008a6ce 8020
.org 0x8a6d0
	lsls r0, r0, #6	@ 0008a6d0 8001
.org 0x8a6d2
	cmp r1, r0	@ 0008a6d2 8142
.org 0x8a6d4
	ble.n 0x8a754	@ 0008a6d4 3edd
.org 0x8a6d6
	ldrb r1, [r4, #10]	@ 0008a6d6 a17a
.org 0x8a6d8
	movs r0, #254	@ 0008a6d8 fe20
.org 0x8a6da
	ands r0, r1	@ 0008a6da 0840
.org 0x8a6dc
	movs r2, #0	@ 0008a6dc 0022
.org 0x8a6de
	movs r1, #253	@ 0008a6de fd21
.org 0x8a6e0
	ands r0, r1	@ 0008a6e0 0840
.org 0x8a6e2
	strb r0, [r4, #10]	@ 0008a6e2 a072
.org 0x8a6e4
	adds r0, r4, #0	@ 0008a6e4 201c
.org 0x8a6e6
	adds r0, #140	@ 0008a6e6 8c30
.org 0x8a6e8
	str r2, [r0, #0]	@ 0008a6e8 0260
.org 0x8a6ea
	adds r0, #4	@ 0008a6ea 0430
.org 0x8a6ec
	str r2, [r0, #0]	@ 0008a6ec 0260
.org 0x8a6ee
	adds r0, #4	@ 0008a6ee 0430
.org 0x8a6f0
	strb r2, [r0, #0]	@ 0008a6f0 0270
.org 0x8a6f2
	ldrb r1, [r4, #10]	@ 0008a6f2 a17a
.org 0x8a6f4
	movs r0, #251	@ 0008a6f4 fb20
.org 0x8a6f6
	ands r0, r1	@ 0008a6f6 0840
.org 0x8a6f8
	strb r0, [r4, #10]	@ 0008a6f8 a072
.org 0x8a6fa
	ldr r1, [pc, #40]	@ 0008a6fa 0a49
.org 0x8a6fc
	ldrb r0, [r4, #9]	@ 0008a6fc 607a
.org 0x8a6fe
	lsls r0, r0, #2	@ 0008a6fe 8000
.org 0x8a700
	adds r0, r0, r1	@ 0008a700 4018
.org 0x8a702
	movs r1, #3	@ 0008a702 0321
.org 0x8a704
	str r1, [r4, #12]	@ 0008a704 e160
.org 0x8a706
	ldr r0, [r0, #0]	@ 0008a706 0068
.org 0x8a708
	ldr r0, [r0, #12]	@ 0008a708 c068
.org 0x8a70a
	str r0, [r4, #20]	@ 0008a70a 6061
.org 0x8a70c
	b.n 0x8a754	@ 0008a70c 22e0
.org 0x8a70e
	.byte 0x00	@ 0008a70e data
.org 0x8a70f
	.byte 0x00	@ 0008a70f data
.org 0x8a710
	.byte 0x07,0x20,0x00,0x00	@ 0008a710 data
.org 0x8a714
	.byte 0x1c,0xf5,0x85,0x08	@ 0008a714 data
.org 0x8a718
	.byte 0xcc,0xf3,0x85,0x08	@ 0008a718 data
.org 0x8a71c
	.byte 0x00,0xff,0xff,0xff	@ 0008a71c data
.org 0x8a720
	.byte 0xf8,0xe9,0x02,0x02	@ 0008a720 data
.org 0x8a724
	.byte 0x40,0xdb,0x85,0x08	@ 0008a724 data
.org 0x8a728
	ldr r2, [pc, #48]	@ 0008a728 0c4a
.org 0x8a72a
	ldrb r1, [r4, #10]	@ 0008a72a a17a
.org 0x8a72c
	movs r0, #16	@ 0008a72c 1020
.org 0x8a72e
	ands r0, r1	@ 0008a72e 0840
.org 0x8a730
	cmp r0, #0	@ 0008a730 0028
.org 0x8a732
	beq.n 0x8a738	@ 0008a732 01d0
.org 0x8a734
	movs r2, #128	@ 0008a734 8022
.org 0x8a736
	lsls r2, r2, #5	@ 0008a736 5201
.org 0x8a738
	ldr r1, [r4, #88]	@ 0008a738 a16d
.org 0x8a73a
	movs r0, #128	@ 0008a73a 8020
.org 0x8a73c
	lsls r0, r0, #4	@ 0008a73c 0001
.org 0x8a73e
	adds r1, r1, r0	@ 0008a73e 0918
