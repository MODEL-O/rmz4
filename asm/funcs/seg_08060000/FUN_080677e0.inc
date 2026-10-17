@ FUN_080677e0  entry 0x080677e0  size 166
.thumb
.org 0x677e0
FUN_080677e0:
	push {r4, lr}	@ 000677e0 10b5
.org 0x677e2
	adds r4, r0, #0	@ 000677e2 041c
.org 0x677e4
	ldrb r0, [r4, #14]	@ 000677e4 a07b
.org 0x677e6
	cmp r0, #0	@ 000677e6 0028
.org 0x677e8
	bne.n 0x677fe	@ 000677e8 09d1
.org 0x677ea
	ldr r1, [pc, #64]	@ 000677ea 1049
.org 0x677ec
	adds r0, r4, #0	@ 000677ec 201c
.org 0x677ee
	bl 0x1cf00	@ 000677ee b5f787fb
.org 0x677f2
	ldr r0, [r4, #100]	@ 000677f2 606e
.org 0x677f4
	lsls r0, r0, #2	@ 000677f4 8000
.org 0x677f6
	str r0, [r4, #100]	@ 000677f6 6066
.org 0x677f8
	ldrb r0, [r4, #14]	@ 000677f8 a07b
.org 0x677fa
	adds r0, #1	@ 000677fa 0130
.org 0x677fc
	strb r0, [r4, #14]	@ 000677fc a073
.org 0x677fe
	adds r0, r4, #0	@ 000677fe 201c
.org 0x67800
	bl 0x1cff0	@ 00067800 b5f7f6fb
.org 0x67804
	ldr r1, [r4, #92]	@ 00067804 e16d
.org 0x67806
	cmp r1, #0	@ 00067806 0029
.org 0x67808
	beq.n 0x67836	@ 00067808 15d0
.org 0x6780a
	ldr r0, [r4, #84]	@ 0006780a 606d
.org 0x6780c
	adds r0, r0, r1	@ 0006780c 4018
.org 0x6780e
	str r0, [r4, #84]	@ 0006780e 6065
.org 0x67810
	ldr r0, [r4, #100]	@ 00067810 606e
.org 0x67812
	adds r2, r1, r0	@ 00067812 0a18
.org 0x67814
	str r2, [r4, #92]	@ 00067814 e265
.org 0x67816
	ldrb r1, [r4, #10]	@ 00067816 a17a
.org 0x67818
	movs r0, #16	@ 00067818 1020
.org 0x6781a
	ands r0, r1	@ 0006781a 0840
.org 0x6781c
	lsls r0, r0, #24	@ 0006781c 0006
.org 0x6781e
	lsrs r0, r0, #24	@ 0006781e 000e
.org 0x67820
	cmp r0, #0	@ 00067820 0028
.org 0x67822
	beq.n 0x67830	@ 00067822 05d0
.org 0x67824
	cmp r2, #0	@ 00067824 002a
.org 0x67826
	ble.n 0x67836	@ 00067826 06dd
.org 0x67828
	movs r0, #0	@ 00067828 0020
.org 0x6782a
	b.n 0x67834	@ 0006782a 03e0
.org 0x6782c
	.byte 0x10,0xa9,0x00,0x00	@ 0006782c data
.org 0x67830
	cmp r2, #0	@ 00067830 002a
.org 0x67832
	bge.n 0x67836	@ 00067832 00da
.org 0x67834
	str r0, [r4, #92]	@ 00067834 e065
.org 0x67836
	ldrb r0, [r4, #15]	@ 00067836 e07b
.org 0x67838
	cmp r0, #0	@ 00067838 0028
.org 0x6783a
	bne.n 0x67858	@ 0006783a 0dd1
.org 0x6783c
	adds r0, r4, #0	@ 0006783c 201c
.org 0x6783e
	adds r0, #113	@ 0006783e 7130
.org 0x67840
	ldrb r0, [r0, #0]	@ 00067840 0078
.org 0x67842
	lsls r0, r0, #24	@ 00067842 0006
.org 0x67844
	asrs r0, r0, #24	@ 00067844 0016
.org 0x67846
	cmp r0, #1	@ 00067846 0128
.org 0x67848
	ble.n 0x6787a	@ 00067848 17dd
.org 0x6784a
	adds r0, r4, #0	@ 0006784a 201c
.org 0x6784c
	adds r0, #116	@ 0006784c 7430
.org 0x6784e
	ldr r1, [pc, #4]	@ 0006784e 0149
.org 0x67850
	b.n 0x67870	@ 00067850 0ee0
.org 0x67852
	.byte 0x00	@ 00067852 data
.org 0x67853
	.byte 0x00	@ 00067853 data
.org 0x67854
	.byte 0xd4,0xb2,0x85,0x08	@ 00067854 data
.org 0x67858
	cmp r0, #1	@ 00067858 0128
.org 0x6785a
	bne.n 0x6787a	@ 0006785a 0ed1
.org 0x6785c
	adds r0, r4, #0	@ 0006785c 201c
.org 0x6785e
	adds r0, #113	@ 0006785e 7130
.org 0x67860
	ldrb r0, [r0, #0]	@ 00067860 0078
.org 0x67862
	lsls r0, r0, #24	@ 00067862 0006
.org 0x67864
	asrs r0, r0, #24	@ 00067864 0016
.org 0x67866
	cmp r0, #3	@ 00067866 0328
.org 0x67868
	ble.n 0x6787a	@ 00067868 07dd
.org 0x6786a
	adds r0, r4, #0	@ 0006786a 201c
.org 0x6786c
	adds r0, #116	@ 0006786c 7430
.org 0x6786e
	ldr r1, [pc, #32]	@ 0006786e 0849
.org 0x67870
	bl 0x5784	@ 00067870 9df788ff
.org 0x67874
	ldrb r0, [r4, #15]	@ 00067874 e07b
.org 0x67876
	adds r0, #1	@ 00067876 0130
.org 0x67878
	strb r0, [r4, #15]	@ 00067878 e073
.org 0x6787a
	adds r0, r4, #0	@ 0006787a 201c
.org 0x6787c
	adds r0, #115	@ 0006787c 7330
.org 0x6787e
	ldrb r1, [r0, #0]	@ 0006787e 0178
.org 0x67880
	cmp r1, #3	@ 00067880 0329
.org 0x67882
	bne.n 0x6788a	@ 00067882 02d1
.org 0x67884
	movs r0, #0	@ 00067884 0020
