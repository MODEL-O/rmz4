@ FUN_0803268c  entry 0x0803268c  size 134
.thumb
.org 0x3268c
FUN_0803268c:
	push {r4, r5, r6, lr}	@ 0003268c 70b5
.org 0x3268e
	adds r5, r0, #0	@ 0003268e 051c
.org 0x32690
	ldr r1, [pc, #20]	@ 00032690 0549
.org 0x32692
	adds r0, r5, r1	@ 00032692 6818
.org 0x32694
	ldrb r6, [r0, #0]	@ 00032694 0678
.org 0x32696
	cmp r6, #0	@ 00032696 002e
.org 0x32698
	beq.n 0x326ac	@ 00032698 08d0
.org 0x3269a
	adds r0, r5, #0	@ 0003269a 281c
.org 0x3269c
	bl 0x327c0	@ 0003269c 00f090f8
.org 0x326a0
	movs r0, #3	@ 000326a0 0320
.org 0x326a2
	strb r0, [r5, #15]	@ 000326a2 e873
.org 0x326a4
	b.n 0x3271c	@ 000326a4 3ae0
.org 0x326a6
	.byte 0x00	@ 000326a6 data
.org 0x326a7
	.byte 0x00	@ 000326a7 data
.org 0x326a8
	.byte 0x73,0x01,0x00,0x00	@ 000326a8 data
.org 0x326ac
	movs r4, #1	@ 000326ac 0124
.org 0x326ae
	strb r4, [r0, #0]	@ 000326ae 0470
.org 0x326b0
	ldr r2, [pc, #76]	@ 000326b0 134a
.org 0x326b2
	ldrh r1, [r2, #8]	@ 000326b2 1189
.org 0x326b4
	ldr r0, [pc, #76]	@ 000326b4 1348
.org 0x326b6
	ands r0, r1	@ 000326b6 0840
.org 0x326b8
	movs r3, #0	@ 000326b8 0023
.org 0x326ba
	movs r1, #8	@ 000326ba 0821
.org 0x326bc
	orrs r0, r1	@ 000326bc 0843
.org 0x326be
	strh r0, [r2, #8]	@ 000326be 1081
.org 0x326c0
	adds r0, r5, #0	@ 000326c0 281c
.org 0x326c2
	adds r0, #140	@ 000326c2 8c30
.org 0x326c4
	str r6, [r0, #0]	@ 000326c4 0660
.org 0x326c6
	adds r0, #4	@ 000326c6 0430
.org 0x326c8
	str r6, [r0, #0]	@ 000326c8 0660
.org 0x326ca
	adds r0, #4	@ 000326ca 0430
.org 0x326cc
	strb r3, [r0, #0]	@ 000326cc 0370
.org 0x326ce
	ldrb r1, [r5, #10]	@ 000326ce a97a
.org 0x326d0
	movs r0, #251	@ 000326d0 fb20
.org 0x326d2
	ands r0, r1	@ 000326d2 0840
.org 0x326d4
	strb r0, [r5, #10]	@ 000326d4 a872
.org 0x326d6
	movs r0, #10	@ 000326d6 0a20
.org 0x326d8
	bl 0x2b10	@ 000326d8 d0f71afa
.org 0x326dc
	ldrb r1, [r5, #10]	@ 000326dc a97a
.org 0x326de
	lsrs r1, r1, #4	@ 000326de 0909
.org 0x326e0
	ands r1, r4	@ 000326e0 2140
.org 0x326e2
	movs r2, #161	@ 000326e2 a122
.org 0x326e4
	lsls r2, r2, #1	@ 000326e4 5200
.org 0x326e6
	adds r0, r5, r2	@ 000326e6 a818
.org 0x326e8
	ldrb r0, [r0, #0]	@ 000326e8 0078
.org 0x326ea
	lsls r0, r0, #31	@ 000326ea c007
.org 0x326ec
	lsrs r0, r0, #31	@ 000326ec c00f
.org 0x326ee
	cmp r1, r0	@ 000326ee 8142
.org 0x326f0
	beq.n 0x32708	@ 000326f0 0ad0
.org 0x326f2
	movs r1, #150	@ 000326f2 9621
.org 0x326f4
	lsls r1, r1, #7	@ 000326f4 c901
.org 0x326f6
	adds r0, r5, #0	@ 000326f6 281c
.org 0x326f8
	bl 0x1cf00	@ 000326f8 eaf702fc
.org 0x326fc
	b.n 0x32712	@ 000326fc 09e0
.org 0x326fe
	.byte 0x00	@ 000326fe data
.org 0x326ff
	.byte 0x00	@ 000326ff data
.org 0x32700
	.byte 0x10,0xe9,0x02,0x02	@ 00032700 data
.org 0x32704
	.byte 0xfe,0xff,0x00,0x00	@ 00032704 data
.org 0x32708
	movs r1, #148	@ 00032708 9421
.org 0x3270a
	lsls r1, r1, #7	@ 0003270a c901
.org 0x3270c
	adds r0, r5, #0	@ 0003270c 281c
.org 0x3270e
	bl 0x1cf00	@ 0003270e eaf7f7fb
