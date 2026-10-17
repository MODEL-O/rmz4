@ FUN_080ac6b4  entry 0x080ac6b4  size 118
.thumb
.org 0xac6b4
FUN_080ac6b4:
	push {r4, r5, r6, lr}	@ 000ac6b4 70b5
.org 0xac6b6
	adds r4, r0, #0	@ 000ac6b6 041c
.org 0xac6b8
	ldr r6, [r4, #40]	@ 000ac6b8 a66a
.org 0xac6ba
	movs r5, #0	@ 000ac6ba 0025
.org 0xac6bc
	ldr r1, [pc, #108]	@ 000ac6bc 1b49
.org 0xac6be
	ldrb r0, [r4, #9]	@ 000ac6be 607a
.org 0xac6c0
	lsls r0, r0, #2	@ 000ac6c0 8000
.org 0xac6c2
	adds r0, r0, r1	@ 000ac6c2 4018
.org 0xac6c4
	movs r1, #1	@ 000ac6c4 0121
.org 0xac6c6
	str r1, [r4, #12]	@ 000ac6c6 e160
.org 0xac6c8
	ldr r0, [r0, #0]	@ 000ac6c8 0068
.org 0xac6ca
	ldr r0, [r0, #4]	@ 000ac6ca 4068
.org 0xac6cc
	str r0, [r4, #20]	@ 000ac6cc 6061
.org 0xac6ce
	strb r5, [r4, #13]	@ 000ac6ce 6573
.org 0xac6d0
	strb r5, [r4, #14]	@ 000ac6d0 a573
.org 0xac6d2
	strb r5, [r4, #15]	@ 000ac6d2 e573
.org 0xac6d4
	ldrb r1, [r4, #10]	@ 000ac6d4 a17a
.org 0xac6d6
	movs r0, #254	@ 000ac6d6 fe20
.org 0xac6d8
	ands r0, r1	@ 000ac6d8 0840
.org 0xac6da
	movs r1, #2	@ 000ac6da 0221
.org 0xac6dc
	orrs r0, r1	@ 000ac6dc 0843
.org 0xac6de
	strb r0, [r4, #10]	@ 000ac6de a072
.org 0xac6e0
	adds r0, r4, #0	@ 000ac6e0 201c
.org 0xac6e2
	adds r0, #183	@ 000ac6e2 b730
.org 0xac6e4
	strb r5, [r0, #0]	@ 000ac6e4 0570
.org 0xac6e6
	adds r0, #1	@ 000ac6e6 0130
.org 0xac6e8
	strb r5, [r0, #0]	@ 000ac6e8 0570
.org 0xac6ea
	adds r0, r4, #0	@ 000ac6ea 201c
.org 0xac6ec
	bl 0x1cc9c	@ 000ac6ec 70f7d6fa
.org 0xac6f0
	adds r0, r4, #0	@ 000ac6f0 201c
.org 0xac6f2
	bl 0x1ceec	@ 000ac6f2 70f7fbfb
.org 0xac6f6
	ldrb r1, [r4, #10]	@ 000ac6f6 a17a
.org 0xac6f8
	movs r0, #239	@ 000ac6f8 ef20
.org 0xac6fa
	ands r0, r1	@ 000ac6fa 0840
.org 0xac6fc
	strb r0, [r4, #10]	@ 000ac6fc a072
.org 0xac6fe
	adds r0, r4, #0	@ 000ac6fe 201c
.org 0xac700
	adds r0, #76	@ 000ac700 4c30
.org 0xac702
	strb r5, [r0, #0]	@ 000ac702 0570
.org 0xac704
	adds r2, r4, #0	@ 000ac704 221c
.org 0xac706
	adds r2, #74	@ 000ac706 4a32
.org 0xac708
	ldrb r1, [r2, #0]	@ 000ac708 1178
.org 0xac70a
	movs r0, #17	@ 000ac70a 1120
.org 0xac70c
	negs r0, r0	@ 000ac70c 4042
.org 0xac70e
	ands r0, r1	@ 000ac70e 0840
.org 0xac710
	strb r0, [r2, #0]	@ 000ac710 1070
.org 0xac712
	ldrb r1, [r4, #11]	@ 000ac712 e17a
.org 0xac714
	movs r0, #16	@ 000ac714 1020
.org 0xac716
	orrs r0, r1	@ 000ac716 0843
.org 0xac718
	strb r0, [r4, #11]	@ 000ac718 e072
.org 0xac71a
	ldrb r0, [r6, #28]	@ 000ac71a 307f
.org 0xac71c
	strb r0, [r4, #29]	@ 000ac71c 6077
.org 0xac71e
	adds r0, r4, #0	@ 000ac71e 201c
.org 0xac720
	bl 0xac730	@ 000ac720 00f006f8
.org 0xac724
	pop {r4, r5, r6}	@ 000ac724 70bc
.org 0xac726
	pop {r0}	@ 000ac726 01bc
.org 0xac728
	bx r0	@ 000ac728 0047
