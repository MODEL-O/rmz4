@ FUN_0801f698  entry 0x0801f698  size 158
.thumb
.org 0x1f698
FUN_0801f698:
	push {r4, r5, r6, lr}	@ 0001f698 70b5
.org 0x1f69a
	ldr r5, [r0, #48]	@ 0001f69a 056b
.org 0x1f69c
	cmp r5, #0	@ 0001f69c 002d
.org 0x1f69e
	beq.n 0x1f730	@ 0001f69e 47d0
.org 0x1f6a0
	ldr r6, [pc, #148]	@ 0001f6a0 254e
.org 0x1f6a2
	ldrh r0, [r6, #0]	@ 0001f6a2 3088
.org 0x1f6a4
	cmp r0, #0	@ 0001f6a4 0028
.org 0x1f6a6
	beq.n 0x1f6ba	@ 0001f6a6 08d0
.org 0x1f6a8
	ldr r2, [pc, #144]	@ 0001f6a8 244a
.org 0x1f6aa
	ldrb r1, [r2, #8]	@ 0001f6aa 117a
.org 0x1f6ac
	movs r0, #127	@ 0001f6ac 7f20
.org 0x1f6ae
	ands r0, r1	@ 0001f6ae 0840
.org 0x1f6b0
	movs r4, #0	@ 0001f6b0 0024
.org 0x1f6b2
	strb r0, [r2, #8]	@ 0001f6b2 1072
.org 0x1f6b4
	bl 0x2a50	@ 0001f6b4 e3f7ccf9
.org 0x1f6b8
	strh r4, [r6, #0]	@ 0001f6b8 3480
.org 0x1f6ba
	ldr r2, [pc, #132]	@ 0001f6ba 214a
.org 0x1f6bc
	ldrh r1, [r2, #8]	@ 0001f6bc 1189
.org 0x1f6be
	movs r3, #1	@ 0001f6be 0123
.org 0x1f6c0
	adds r0, r3, #0	@ 0001f6c0 181c
.org 0x1f6c2
	ands r0, r1	@ 0001f6c2 0840
.org 0x1f6c4
	cmp r0, #0	@ 0001f6c4 0028
.org 0x1f6c6
	beq.n 0x1f730	@ 0001f6c6 33d0
.org 0x1f6c8
	ldrb r1, [r2, #18]	@ 0001f6c8 917c
.org 0x1f6ca
	adds r0, r3, #0	@ 0001f6ca 181c
.org 0x1f6cc
	ands r0, r1	@ 0001f6cc 0840
.org 0x1f6ce
	cmp r0, #0	@ 0001f6ce 0028
.org 0x1f6d0
	bne.n 0x1f730	@ 0001f6d0 2ed1
.org 0x1f6d2
	ldr r3, [pc, #104]	@ 0001f6d2 1a4b
.org 0x1f6d4
	ldrb r1, [r3, #8]	@ 0001f6d4 197a
.org 0x1f6d6
	movs r0, #64	@ 0001f6d6 4020
.org 0x1f6d8
	ands r0, r1	@ 0001f6d8 0840
.org 0x1f6da
	cmp r0, #0	@ 0001f6da 0028
.org 0x1f6dc
	beq.n 0x1f730	@ 0001f6dc 28d0
.org 0x1f6de
	movs r0, #8	@ 0001f6de 0820
.org 0x1f6e0
	ldrsb r0, [r5, r0]	@ 0001f6e0 2856
.org 0x1f6e2
	cmp r0, #2	@ 0001f6e2 0228
.org 0x1f6e4
	bne.n 0x1f730	@ 0001f6e4 24d1
.org 0x1f6e6
	ldrb r0, [r5, #9]	@ 0001f6e6 687a
.org 0x1f6e8
	cmp r0, #0	@ 0001f6e8 0028
.org 0x1f6ea
	beq.n 0x1f730	@ 0001f6ea 21d0
.org 0x1f6ec
	cmp r0, #4	@ 0001f6ec 0428
.org 0x1f6ee
	beq.n 0x1f730	@ 0001f6ee 1fd0
.org 0x1f6f0
	cmp r0, #9	@ 0001f6f0 0928
.org 0x1f6f2
	beq.n 0x1f730	@ 0001f6f2 1dd0
.org 0x1f6f4
	cmp r0, #12	@ 0001f6f4 0c28
.org 0x1f6f6
	beq.n 0x1f730	@ 0001f6f6 1bd0
.org 0x1f6f8
	cmp r0, #14	@ 0001f6f8 0e28
.org 0x1f6fa
	beq.n 0x1f730	@ 0001f6fa 19d0
.org 0x1f6fc
	cmp r0, #21	@ 0001f6fc 1528
.org 0x1f6fe
	beq.n 0x1f730	@ 0001f6fe 17d0
.org 0x1f700
	cmp r0, #23	@ 0001f700 1728
.org 0x1f702
	beq.n 0x1f730	@ 0001f702 15d0
.org 0x1f704
	cmp r0, #24	@ 0001f704 1828
.org 0x1f706
	beq.n 0x1f730	@ 0001f706 13d0
.org 0x1f708
	ldrb r1, [r5, #10]	@ 0001f708 a97a
.org 0x1f70a
	movs r0, #4	@ 0001f70a 0420
.org 0x1f70c
	ands r0, r1	@ 0001f70c 0840
.org 0x1f70e
	cmp r0, #0	@ 0001f70e 0028
.org 0x1f710
	beq.n 0x1f730	@ 0001f710 0ed0
.org 0x1f712
	adds r1, r5, #0	@ 0001f712 291c
.org 0x1f714
	adds r1, #164	@ 0001f714 a431
.org 0x1f716
	ldrh r0, [r1, #0]	@ 0001f716 0888
.org 0x1f718
	adds r0, #1	@ 0001f718 0130
.org 0x1f71a
	asrs r0, r0, #1	@ 0001f71a 4010
.org 0x1f71c
	strh r0, [r1, #0]	@ 0001f71c 0880
.org 0x1f71e
	ldrb r2, [r3, #8]	@ 0001f71e 1a7a
.org 0x1f720
	movs r1, #191	@ 0001f720 bf21
.org 0x1f722
	adds r0, r1, #0	@ 0001f722 081c
.org 0x1f724
	ands r0, r2	@ 0001f724 1040
.org 0x1f726
	strb r0, [r3, #8]	@ 0001f726 1872
.org 0x1f728
	ldr r2, [pc, #24]	@ 0001f728 064a
.org 0x1f72a
	ldrb r0, [r2, #4]	@ 0001f72a 1079
.org 0x1f72c
	ands r1, r0	@ 0001f72c 0140
.org 0x1f72e
	strb r1, [r2, #4]	@ 0001f72e 1171
.org 0x1f730
	pop {r4, r5, r6}	@ 0001f730 70bc
.org 0x1f732
	pop {r0}	@ 0001f732 01bc
.org 0x1f734
	bx r0	@ 0001f734 0047
