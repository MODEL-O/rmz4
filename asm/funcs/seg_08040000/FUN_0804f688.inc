@ FUN_0804f688  entry 0x0804f688  size 134
.thumb
.org 0x4f688
FUN_0804f688:
	push {r4, r5, lr}	@ 0004f688 30b5
.org 0x4f68a
	adds r4, r0, #0	@ 0004f68a 041c
.org 0x4f68c
	lsls r1, r1, #24	@ 0004f68c 0906
.org 0x4f68e
	lsrs r5, r1, #24	@ 0004f68e 0d0e
.org 0x4f690
	ldr r0, [pc, #64]	@ 0004f690 1048
.org 0x4f692
	ldr r0, [r0, #0]	@ 0004f692 0068
.org 0x4f694
	bl 0x5500	@ 0004f694 b5f734ff
.org 0x4f698
	adds r2, r0, #0	@ 0004f698 021c
.org 0x4f69a
	cmp r2, #0	@ 0004f69a 002a
.org 0x4f69c
	beq.n 0x4f718	@ 0004f69c 3cd0
.org 0x4f69e
	adds r0, r4, #0	@ 0004f69e 201c
.org 0x4f6a0
	adds r0, #248	@ 0004f6a0 f830
.org 0x4f6a2
	ldrb r0, [r0, #0]	@ 0004f6a2 0078
.org 0x4f6a4
	cmp r0, #2	@ 0004f6a4 0228
.org 0x4f6a6
	bne.n 0x4f6e4	@ 0004f6a6 1dd1
.org 0x4f6a8
	ldr r0, [pc, #44]	@ 0004f6a8 0b48
.org 0x4f6aa
	movs r1, #57	@ 0004f6aa 3921
.org 0x4f6ac
	strb r1, [r2, #9]	@ 0004f6ac 5172
.org 0x4f6ae
	adds r0, #228	@ 0004f6ae e430
.org 0x4f6b0
	ldr r0, [r0, #0]	@ 0004f6b0 0068
.org 0x4f6b2
	ldr r0, [r0, #0]	@ 0004f6b2 0068
.org 0x4f6b4
	str r0, [r2, #20]	@ 0004f6b4 5061
.org 0x4f6b6
	ldrb r1, [r2, #11]	@ 0004f6b6 d17a
.org 0x4f6b8
	movs r0, #191	@ 0004f6b8 bf20
.org 0x4f6ba
	ands r0, r1	@ 0004f6ba 0840
.org 0x4f6bc
	strb r0, [r2, #11]	@ 0004f6bc d072
.org 0x4f6be
	adds r1, r2, #0	@ 0004f6be 111c
.org 0x4f6c0
	adds r1, #37	@ 0004f6c0 2531
.org 0x4f6c2
	movs r0, #16	@ 0004f6c2 1020
.org 0x4f6c4
	strb r0, [r1, #0]	@ 0004f6c4 0870
.org 0x4f6c6
	ldr r0, [pc, #20]	@ 0004f6c6 0548
.org 0x4f6c8
	ldrh r0, [r0, #0]	@ 0004f6c8 0088
.org 0x4f6ca
	strh r0, [r2, #32]	@ 0004f6ca 1084
.org 0x4f6cc
	ldr r0, [pc, #16]	@ 0004f6cc 0448
.org 0x4f6ce
	ldrb r0, [r0, #0]	@ 0004f6ce 0078
.org 0x4f6d0
	b.n 0x4f70c	@ 0004f6d0 1ce0
.org 0x4f6d2
	.byte 0x00	@ 0004f6d2 data
.org 0x4f6d3
	.byte 0x00	@ 0004f6d3 data
.org 0x4f6d4
	.byte 0x88,0xed,0x02,0x02	@ 0004f6d4 data
.org 0x4f6d8
	.byte 0xf8,0x39,0x85,0x08	@ 0004f6d8 data
.org 0x4f6dc
	.byte 0xfc,0x36,0x85,0x08	@ 0004f6dc data
.org 0x4f6e0
	.byte 0x04,0x37,0x85,0x08	@ 0004f6e0 data
.org 0x4f6e4
	ldr r0, [pc, #56]	@ 0004f6e4 0e48
.org 0x4f6e6
	movs r1, #57	@ 0004f6e6 3921
.org 0x4f6e8
	strb r1, [r2, #9]	@ 0004f6e8 5172
.org 0x4f6ea
	adds r0, #228	@ 0004f6ea e430
.org 0x4f6ec
	ldr r0, [r0, #0]	@ 0004f6ec 0068
.org 0x4f6ee
	ldr r0, [r0, #0]	@ 0004f6ee 0068
.org 0x4f6f0
	str r0, [r2, #20]	@ 0004f6f0 5061
.org 0x4f6f2
	ldrb r1, [r2, #11]	@ 0004f6f2 d17a
.org 0x4f6f4
	movs r0, #191	@ 0004f6f4 bf20
.org 0x4f6f6
	ands r0, r1	@ 0004f6f6 0840
.org 0x4f6f8
	strb r0, [r2, #11]	@ 0004f6f8 d072
.org 0x4f6fa
	adds r1, r2, #0	@ 0004f6fa 111c
.org 0x4f6fc
	adds r1, #37	@ 0004f6fc 2531
.org 0x4f6fe
	movs r0, #16	@ 0004f6fe 1020
.org 0x4f700
	strb r0, [r1, #0]	@ 0004f700 0870
.org 0x4f702
	ldr r0, [pc, #32]	@ 0004f702 0848
.org 0x4f704
	ldrh r0, [r0, #2]	@ 0004f704 4088
.org 0x4f706
	strh r0, [r2, #32]	@ 0004f706 1084
.org 0x4f708
	ldr r0, [pc, #28]	@ 0004f708 0748
.org 0x4f70a
	ldrb r0, [r0, #1]	@ 0004f70a 4078
.org 0x4f70c
	subs r1, #3	@ 0004f70c 0339
