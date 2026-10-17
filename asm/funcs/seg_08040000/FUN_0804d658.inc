@ FUN_0804d658  entry 0x0804d658  size 134
.thumb
.org 0x4d658
FUN_0804d658:
	push {r4, r5, lr}	@ 0004d658 30b5
.org 0x4d65a
	adds r4, r0, #0	@ 0004d65a 041c
.org 0x4d65c
	lsls r1, r1, #24	@ 0004d65c 0906
.org 0x4d65e
	lsrs r5, r1, #24	@ 0004d65e 0d0e
.org 0x4d660
	ldr r0, [pc, #64]	@ 0004d660 1048
.org 0x4d662
	ldr r0, [r0, #0]	@ 0004d662 0068
.org 0x4d664
	bl 0x5500	@ 0004d664 b7f74cff
.org 0x4d668
	adds r2, r0, #0	@ 0004d668 021c
.org 0x4d66a
	cmp r2, #0	@ 0004d66a 002a
.org 0x4d66c
	beq.n 0x4d6e8	@ 0004d66c 3cd0
.org 0x4d66e
	adds r0, r4, #0	@ 0004d66e 201c
.org 0x4d670
	adds r0, #248	@ 0004d670 f830
.org 0x4d672
	ldrb r0, [r0, #0]	@ 0004d672 0078
.org 0x4d674
	cmp r0, #2	@ 0004d674 0228
.org 0x4d676
	bne.n 0x4d6b4	@ 0004d676 1dd1
.org 0x4d678
	ldr r0, [pc, #44]	@ 0004d678 0b48
.org 0x4d67a
	movs r1, #49	@ 0004d67a 3121
.org 0x4d67c
	strb r1, [r2, #9]	@ 0004d67c 5172
.org 0x4d67e
	adds r0, #196	@ 0004d67e c430
.org 0x4d680
	ldr r0, [r0, #0]	@ 0004d680 0068
.org 0x4d682
	ldr r0, [r0, #0]	@ 0004d682 0068
.org 0x4d684
	str r0, [r2, #20]	@ 0004d684 5061
.org 0x4d686
	ldrb r1, [r2, #11]	@ 0004d686 d17a
.org 0x4d688
	movs r0, #191	@ 0004d688 bf20
.org 0x4d68a
	ands r0, r1	@ 0004d68a 0840
.org 0x4d68c
	strb r0, [r2, #11]	@ 0004d68c d072
.org 0x4d68e
	adds r1, r2, #0	@ 0004d68e 111c
.org 0x4d690
	adds r1, #37	@ 0004d690 2531
.org 0x4d692
	movs r0, #16	@ 0004d692 1020
.org 0x4d694
	strb r0, [r1, #0]	@ 0004d694 0870
.org 0x4d696
	ldr r0, [pc, #20]	@ 0004d696 0548
.org 0x4d698
	ldrh r0, [r0, #0]	@ 0004d698 0088
.org 0x4d69a
	strh r0, [r2, #32]	@ 0004d69a 1084
.org 0x4d69c
	ldr r0, [pc, #16]	@ 0004d69c 0448
.org 0x4d69e
	ldrb r0, [r0, #0]	@ 0004d69e 0078
.org 0x4d6a0
	b.n 0x4d6dc	@ 0004d6a0 1ce0
.org 0x4d6a2
	.byte 0x00	@ 0004d6a2 data
.org 0x4d6a3
	.byte 0x00	@ 0004d6a3 data
.org 0x4d6a4
	.byte 0x88,0xed,0x02,0x02	@ 0004d6a4 data
.org 0x4d6a8
	.byte 0xf8,0x39,0x85,0x08	@ 0004d6a8 data
.org 0x4d6ac
	.byte 0xfc,0x36,0x85,0x08	@ 0004d6ac data
.org 0x4d6b0
	.byte 0x04,0x37,0x85,0x08	@ 0004d6b0 data
.org 0x4d6b4
	ldr r0, [pc, #56]	@ 0004d6b4 0e48
.org 0x4d6b6
	movs r1, #49	@ 0004d6b6 3121
.org 0x4d6b8
	strb r1, [r2, #9]	@ 0004d6b8 5172
.org 0x4d6ba
	adds r0, #196	@ 0004d6ba c430
.org 0x4d6bc
	ldr r0, [r0, #0]	@ 0004d6bc 0068
.org 0x4d6be
	ldr r0, [r0, #0]	@ 0004d6be 0068
.org 0x4d6c0
	str r0, [r2, #20]	@ 0004d6c0 5061
.org 0x4d6c2
	ldrb r1, [r2, #11]	@ 0004d6c2 d17a
.org 0x4d6c4
	movs r0, #191	@ 0004d6c4 bf20
.org 0x4d6c6
	ands r0, r1	@ 0004d6c6 0840
.org 0x4d6c8
	strb r0, [r2, #11]	@ 0004d6c8 d072
.org 0x4d6ca
	adds r1, r2, #0	@ 0004d6ca 111c
.org 0x4d6cc
	adds r1, #37	@ 0004d6cc 2531
.org 0x4d6ce
	movs r0, #16	@ 0004d6ce 1020
.org 0x4d6d0
	strb r0, [r1, #0]	@ 0004d6d0 0870
.org 0x4d6d2
	ldr r0, [pc, #32]	@ 0004d6d2 0848
.org 0x4d6d4
	ldrh r0, [r0, #2]	@ 0004d6d4 4088
.org 0x4d6d6
	strh r0, [r2, #32]	@ 0004d6d6 1084
.org 0x4d6d8
	ldr r0, [pc, #28]	@ 0004d6d8 0748
.org 0x4d6da
	ldrb r0, [r0, #1]	@ 0004d6da 4078
.org 0x4d6dc
	subs r1, #3	@ 0004d6dc 0339
