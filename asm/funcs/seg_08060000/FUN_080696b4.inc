@ FUN_080696b4  entry 0x080696b4  size 184
.thumb
.org 0x696b4
FUN_080696b4:
	push {r4, r5, r6, r7, lr}	@ 000696b4 f0b5
.org 0x696b6
	mov r7, r9	@ 000696b6 4f46
.org 0x696b8
	mov r6, r8	@ 000696b8 4646
.org 0x696ba
	push {r6, r7}	@ 000696ba c0b4
.org 0x696bc
	adds r6, r0, #0	@ 000696bc 061c
.org 0x696be
	adds r0, #180	@ 000696be b430
.org 0x696c0
	ldr r0, [r0, #0]	@ 000696c0 0068
.org 0x696c2
	mov r8, r0	@ 000696c2 8046
.org 0x696c4
	adds r0, r6, #0	@ 000696c4 301c
.org 0x696c6
	adds r0, #184	@ 000696c6 b830
.org 0x696c8
	ldr r5, [r0, #0]	@ 000696c8 0568
.org 0x696ca
	adds r0, #4	@ 000696ca 0430
.org 0x696cc
	ldr r0, [r0, #0]	@ 000696cc 0068
.org 0x696ce
	mov r9, r0	@ 000696ce 8146
.org 0x696d0
	adds r0, r6, #0	@ 000696d0 301c
.org 0x696d2
	adds r0, #192	@ 000696d2 c030
.org 0x696d4
	ldr r2, [r0, #0]	@ 000696d4 0268
.org 0x696d6
	ldrb r0, [r6, #10]	@ 000696d6 b07a
.org 0x696d8
	lsrs r7, r0, #4	@ 000696d8 0709
.org 0x696da
	movs r0, #1	@ 000696da 0120
.org 0x696dc
	ands r7, r0	@ 000696dc 0740
.org 0x696de
	ldrb r0, [r6, #15]	@ 000696de f07b
.org 0x696e0
	cmp r0, #0	@ 000696e0 0028
.org 0x696e2
	bne.n 0x69740	@ 000696e2 2dd1
.org 0x696e4
	ldrb r1, [r2, #10]	@ 000696e4 917a
.org 0x696e6
	movs r0, #254	@ 000696e6 fe20
.org 0x696e8
	ands r0, r1	@ 000696e8 0840
.org 0x696ea
	strb r0, [r2, #10]	@ 000696ea 9072
.org 0x696ec
	ldr r4, [pc, #36]	@ 000696ec 094c
.org 0x696ee
	ldrh r1, [r4, #0]	@ 000696ee 2188
.org 0x696f0
	mov r0, r8	@ 000696f0 4046
.org 0x696f2
	bl 0x1cf00	@ 000696f2 b3f705fc
.org 0x696f6
	ldrh r1, [r4, #20]	@ 000696f6 a18a
.org 0x696f8
	adds r0, r5, #0	@ 000696f8 281c
.org 0x696fa
	bl 0x1cf00	@ 000696fa b3f701fc
.org 0x696fe
	ldrh r1, [r4, #24]	@ 000696fe 218b
.org 0x69700
	mov r0, r9	@ 00069700 4846
.org 0x69702
	bl 0x1cf00	@ 00069702 b3f7fdfb
.org 0x69706
	adds r2, r7, #0	@ 00069706 3a1c
.org 0x69708
	cmp r2, #0	@ 00069708 002a
.org 0x6970a
	beq.n 0x69718	@ 0006970a 05d0
.org 0x6970c
	ldrb r0, [r5, #10]	@ 0006970c a87a
.org 0x6970e
	movs r1, #16	@ 0006970e 1021
.org 0x69710
	orrs r0, r1	@ 00069710 0843
.org 0x69712
	b.n 0x6971e	@ 00069712 04e0
.org 0x69714
	.byte 0x58,0xb6,0x85,0x08	@ 00069714 data
.org 0x69718
	ldrb r1, [r5, #10]	@ 00069718 a97a
.org 0x6971a
	movs r0, #239	@ 0006971a ef20
.org 0x6971c
	ands r0, r1	@ 0006971c 0840
.org 0x6971e
	strb r0, [r5, #10]	@ 0006971e a872
.org 0x69720
	adds r1, r2, #0	@ 00069720 111c
.org 0x69722
	adds r0, r5, #0	@ 00069722 281c
.org 0x69724
	adds r0, #76	@ 00069724 4c30
.org 0x69726
	strb r1, [r0, #0]	@ 00069726 0170
.org 0x69728
	adds r3, r5, #0	@ 00069728 2b1c
.org 0x6972a
	adds r3, #74	@ 0006972a 4a33
.org 0x6972c
	lsls r1, r1, #4	@ 0006972c 0901
.org 0x6972e
	ldrb r2, [r3, #0]	@ 0006972e 1a78
.org 0x69730
	movs r0, #17	@ 00069730 1120
.org 0x69732
	negs r0, r0	@ 00069732 4042
.org 0x69734
	ands r0, r2	@ 00069734 1040
.org 0x69736
	orrs r0, r1	@ 00069736 0843
.org 0x69738
	strb r0, [r3, #0]	@ 00069738 1870
.org 0x6973a
	ldrb r0, [r6, #15]	@ 0006973a f07b
.org 0x6973c
	adds r0, #1	@ 0006973c 0130
.org 0x6973e
	strb r0, [r6, #15]	@ 0006973e f073
.org 0x69740
	mov r0, r8	@ 00069740 4046
.org 0x69742
	bl 0x1cff0	@ 00069742 b3f755fc
.org 0x69746
	adds r0, r5, #0	@ 00069746 281c
.org 0x69748
	bl 0x1cff0	@ 00069748 b3f752fc
.org 0x6974c
	mov r0, r9	@ 0006974c 4846
.org 0x6974e
	bl 0x1cff0	@ 0006974e b3f74ffc
.org 0x69752
	adds r0, r5, #0	@ 00069752 281c
.org 0x69754
	adds r0, #115	@ 00069754 7330
.org 0x69756
	ldrb r0, [r0, #0]	@ 00069756 0078
.org 0x69758
	cmp r0, #3	@ 00069758 0328
.org 0x6975a
	bne.n 0x69764	@ 0006975a 03d1
.org 0x6975c
	movs r1, #0	@ 0006975c 0021
.org 0x6975e
	movs r0, #2	@ 0006975e 0220
.org 0x69760
	strb r0, [r6, #14]	@ 00069760 b073
.org 0x69762
	strb r1, [r6, #15]	@ 00069762 f173
.org 0x69764
	pop {r3, r4}	@ 00069764 18bc
.org 0x69766
	mov r8, r3	@ 00069766 9846
.org 0x69768
	mov r9, r4	@ 00069768 a146
.org 0x6976a
	pop {r4, r5, r6, r7}	@ 0006976a f0bc
