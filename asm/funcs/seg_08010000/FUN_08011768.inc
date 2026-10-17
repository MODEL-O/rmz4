@ FUN_08011768  entry 0x08011768  size 124
.thumb
.org 0x11768
FUN_08011768:
	push {r4, lr}	@ 00011768 10b5
.org 0x1176a
	adds r3, r0, #0	@ 0001176a 031c
.org 0x1176c
	adds r2, r3, #0	@ 0001176c 1a1c
.org 0x1176e
	adds r2, #104	@ 0001176e 6832
.org 0x11770
	ldrh r0, [r2, #0]	@ 00011770 1088
.org 0x11772
	subs r0, #1	@ 00011772 0138
.org 0x11774
	strh r0, [r2, #0]	@ 00011774 1080
.org 0x11776
	lsls r0, r0, #16	@ 00011776 0004
.org 0x11778
	lsrs r0, r0, #16	@ 00011778 000c
.org 0x1177a
	cmp r0, #63	@ 0001177a 3f28
.org 0x1177c
	bhi.n 0x117a4	@ 0001177c 12d8
.org 0x1177e
	adds r1, r3, #0	@ 0001177e 191c
.org 0x11780
	adds r1, #106	@ 00011780 6a31
.org 0x11782
	ldrh r0, [r1, #0]	@ 00011782 0888
.org 0x11784
	adds r0, #4	@ 00011784 0430
.org 0x11786
	strh r0, [r1, #0]	@ 00011786 0880
.org 0x11788
	ldrh r0, [r2, #0]	@ 00011788 1088
.org 0x1178a
	cmp r0, #0	@ 0001178a 0028
.org 0x1178c
	bne.n 0x117b8	@ 0001178c 14d1
.org 0x1178e
	ldr r1, [pc, #12]	@ 0001178e 0349
.org 0x11790
	ldr r0, [pc, #12]	@ 00011790 0348
.org 0x11792
	adds r1, r1, r0	@ 00011792 0918
.org 0x11794
	ldrb r0, [r1, #0]	@ 00011794 0878
.org 0x11796
	adds r0, #1	@ 00011796 0130
.org 0x11798
	strb r0, [r1, #0]	@ 00011798 0870
.org 0x1179a
	b.n 0x117b8	@ 0001179a 0de0
.org 0x1179c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001179c data
.org 0x117a0
	.byte 0x24,0xd0,0x02,0x00	@ 000117a0 data
.org 0x117a4
	adds r2, r3, #0	@ 000117a4 1a1c
.org 0x117a6
	adds r2, #106	@ 000117a6 6a32
.org 0x117a8
	ldrh r4, [r2, #0]	@ 000117a8 1488
.org 0x117aa
	movs r0, #0	@ 000117aa 0020
.org 0x117ac
	ldrsh r1, [r2, r0]	@ 000117ac 115e
.org 0x117ae
	ldr r0, [pc, #24]	@ 000117ae 0648
.org 0x117b0
	cmp r1, r0	@ 000117b0 8142
.org 0x117b2
	ble.n 0x117b8	@ 000117b2 01dd
.org 0x117b4
	subs r0, r4, #4	@ 000117b4 201f
.org 0x117b6
	strh r0, [r2, #0]	@ 000117b6 1080
.org 0x117b8
	adds r0, r3, #0	@ 000117b8 181c
.org 0x117ba
	adds r0, #104	@ 000117ba 6830
.org 0x117bc
	ldrh r0, [r0, #0]	@ 000117bc 0088
.org 0x117be
	cmp r0, #3	@ 000117be 0328
.org 0x117c0
	bhi.n 0x117cc	@ 000117c0 04d8
.org 0x117c2
	ldrh r0, [r3, #18]	@ 000117c2 588a
.org 0x117c4
	subs r0, #1	@ 000117c4 0138
.org 0x117c6
	b.n 0x117d4	@ 000117c6 05e0
.org 0x117c8
	.byte 0x00,0xff,0xff,0xff	@ 000117c8 data
.org 0x117cc
	ldrh r0, [r3, #18]	@ 000117cc 588a
.org 0x117ce
	cmp r0, #7	@ 000117ce 0728
.org 0x117d0
	bhi.n 0x117ea	@ 000117d0 0bd8
.org 0x117d2
	adds r0, #1	@ 000117d2 0130
.org 0x117d4
	strh r0, [r3, #18]	@ 000117d4 5882
.org 0x117d6
	ldr r2, [pc, #24]	@ 000117d6 064a
.org 0x117d8
	lsls r0, r0, #16	@ 000117d8 0004
.org 0x117da
	lsrs r0, r0, #17	@ 000117da 400c
.org 0x117dc
	movs r1, #31	@ 000117dc 1f21
.org 0x117de
	ands r0, r1	@ 000117de 0840
.org 0x117e0
	movs r3, #128	@ 000117e0 8023
.org 0x117e2
	lsls r3, r3, #5	@ 000117e2 5b01
