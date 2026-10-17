@ FUN_080da7e4  entry 0x080da7e4  size 248
.thumb
.org 0xda7e4
FUN_080da7e4:
	push {r4, r5, r6, r7, lr}	@ 000da7e4 f0b5
.org 0xda7e6
	mov r7, sl	@ 000da7e6 5746
.org 0xda7e8
	mov r6, r9	@ 000da7e8 4e46
.org 0xda7ea
	mov r5, r8	@ 000da7ea 4546
.org 0xda7ec
	push {r5, r6, r7}	@ 000da7ec e0b4
.org 0xda7ee
	sub sp, #8	@ 000da7ee 82b0
.org 0xda7f0
	adds r3, r0, #0	@ 000da7f0 031c
.org 0xda7f2
	ldr r5, [r3, #40]	@ 000da7f2 9d6a
.org 0xda7f4
	ldrb r2, [r3, #17]	@ 000da7f4 5a7c
.org 0xda7f6
	ldrb r0, [r5, #12]	@ 000da7f6 287b
.org 0xda7f8
	cmp r0, #1	@ 000da7f8 0128
.org 0xda7fa
	bls.n 0xda81c	@ 000da7fa 0fd9
.org 0xda7fc
	ldr r1, [pc, #24]	@ 000da7fc 0649
.org 0xda7fe
	ldrb r0, [r3, #9]	@ 000da7fe 587a
.org 0xda800
	lsls r0, r0, #2	@ 000da800 8000
.org 0xda802
	adds r0, r0, r1	@ 000da802 4018
.org 0xda804
	movs r1, #2	@ 000da804 0221
.org 0xda806
	str r1, [r3, #12]	@ 000da806 d960
.org 0xda808
	ldr r0, [r0, #0]	@ 000da808 0068
.org 0xda80a
	ldr r0, [r0, #8]	@ 000da80a 8068
.org 0xda80c
	str r0, [r3, #20]	@ 000da80c 5861
.org 0xda80e
	adds r0, r3, #0	@ 000da80e 181c
.org 0xda810
	bl 0xda93c	@ 000da810 00f094f8
.org 0xda814
	b.n 0xda8dc	@ 000da814 62e0
.org 0xda816
	.byte 0x00	@ 000da816 data
.org 0xda817
	.byte 0x00	@ 000da817 data
.org 0xda818
	.byte 0x64,0x6f,0x86,0x08	@ 000da818 data
.org 0xda81c
	ldrb r0, [r3, #18]	@ 000da81c 987c
.org 0xda81e
	adds r6, r0, #1	@ 000da81e 461c
.org 0xda820
	strb r6, [r3, #18]	@ 000da820 9e74
.org 0xda822
	adds r0, r5, #0	@ 000da822 281c
.org 0xda824
	adds r0, #182	@ 000da824 b630
.org 0xda826
	ldrb r1, [r0, #0]	@ 000da826 0178
.org 0xda828
	movs r0, #2	@ 000da828 0220
.org 0xda82a
	ands r0, r1	@ 000da82a 0840
.org 0xda82c
	cmp r0, #0	@ 000da82c 0028
.org 0xda82e
	beq.n 0xda8dc	@ 000da82e 55d0
.org 0xda830
	ldr r4, [r5, #88]	@ 000da830 ac6d
.org 0xda832
	movs r0, #168	@ 000da832 a820
.org 0xda834
	lsls r0, r0, #8	@ 000da834 0002
.org 0xda836
	adds r1, r4, r0	@ 000da836 2118
.org 0xda838
	movs r7, #188	@ 000da838 bc27
.org 0xda83a
	adds r7, r7, r5	@ 000da83a 7f19
.org 0xda83c
	mov r8, r7	@ 000da83c b846
.org 0xda83e
	ldr r0, [r7, #0]	@ 000da83e 3868
.org 0xda840
	ldr r7, [pc, #112]	@ 000da840 1c4f
.org 0xda842
	adds r0, r0, r7	@ 000da842 c019
.org 0xda844
	cmp r1, r0	@ 000da844 8142
.org 0xda846
	bge.n 0xda8dc	@ 000da846 49da
.org 0xda848
	adds r7, r5, #0	@ 000da848 2f1c
.org 0xda84a
	adds r7, #184	@ 000da84a b837
.org 0xda84c
	ldr r0, [r7, #0]	@ 000da84c 3868
.org 0xda84e
	ldr r1, [pc, #104]	@ 000da84e 1a49
.org 0xda850
	mov sl, r1	@ 000da850 8a46
.org 0xda852
	add r0, sl	@ 000da852 5044
.org 0xda854
	cmp r4, r0	@ 000da854 8442
.org 0xda856
	blt.n 0xda8dc	@ 000da856 41db
.org 0xda858
	lsls r2, r2, #1	@ 000da858 5200
.org 0xda85a
	subs r1, r2, #1	@ 000da85a 511e
.org 0xda85c
	lsls r0, r1, #1	@ 000da85c 4800
.org 0xda85e
	adds r0, r0, r1	@ 000da85e 4018
.org 0xda860
	lsls r0, r0, #2	@ 000da860 8000
.org 0xda862
	adds r0, r0, r1	@ 000da862 4018
.org 0xda864
	lsls r0, r0, #10	@ 000da864 8002
.org 0xda866
	ldr r1, [r5, #84]	@ 000da866 696d
.org 0xda868
	adds r4, r1, r0	@ 000da868 0c18
.org 0xda86a
	str r4, [r3, #84]	@ 000da86a 5c65
.org 0xda86c
	movs r0, #7	@ 000da86c 0720
.org 0xda86e
	ands r0, r6	@ 000da86e 3040
.org 0xda870
	mov r9, r2	@ 000da870 9146
.org 0xda872
	cmp r0, #0	@ 000da872 0028
.org 0xda874
	bne.n 0xda8dc	@ 000da874 32d1
.org 0xda876
	lsls r0, r6, #24	@ 000da876 3006
.org 0xda878
	lsrs r0, r0, #27	@ 000da878 c00e
.org 0xda87a
	movs r1, #1	@ 000da87a 0121
.org 0xda87c
	ands r0, r1	@ 000da87c 0840
.org 0xda87e
	adds r0, r6, r0	@ 000da87e 3018
.org 0xda880
	lsls r0, r0, #24	@ 000da880 0006
.org 0xda882
	lsrs r6, r0, #24	@ 000da882 060e
.org 0xda884
	str r4, [sp, #0]	@ 000da884 0094
.org 0xda886
	ldr r1, [r3, #88]	@ 000da886 996d
.org 0xda888
	adds r0, r4, #0	@ 000da888 201c
.org 0xda88a
	bl 0x8534	@ 000da88a 2df753fe
.org 0xda88e
	adds r2, r0, #0	@ 000da88e 021c
.org 0xda890
	str r2, [sp, #4]	@ 000da890 0192
.org 0xda892
	ldr r0, [r7, #0]	@ 000da892 3868
.org 0xda894
	add r0, sl	@ 000da894 5044
.org 0xda896
	mov r3, r8	@ 000da896 4346
.org 0xda898
	ldr r1, [r3, #0]	@ 000da898 1968
.org 0xda89a
	ldr r7, [pc, #24]	@ 000da89a 064f
.org 0xda89c
	adds r1, r1, r7	@ 000da89c c919
.org 0xda89e
	subs r1, r1, r0	@ 000da89e 091a
.org 0xda8a0
	cmp r1, #0	@ 000da8a0 0029
.org 0xda8a2
	bgt.n 0xda8a6	@ 000da8a2 00dc
.org 0xda8a4
	movs r1, #1	@ 000da8a4 0121
.org 0xda8a6
	ldr r0, [r5, #88]	@ 000da8a6 a86d
.org 0xda8a8
	subs r0, r2, r0	@ 000da8a8 101a
.org 0xda8aa
	cmp r0, #0	@ 000da8aa 0028
.org 0xda8ac
	bge.n 0xda8bc	@ 000da8ac 06da
.org 0xda8ae
	movs r0, #0	@ 000da8ae 0020
.org 0xda8b0
	b.n 0xda8c2	@ 000da8b0 07e0
.org 0xda8b2
	.byte 0x00	@ 000da8b2 data
.org 0xda8b3
	.byte 0x00	@ 000da8b3 data
.org 0xda8b4
	.byte 0xff,0x3f,0x01,0x00	@ 000da8b4 data
.org 0xda8b8
	.byte 0x00,0xf0,0xff,0xff	@ 000da8b8 data
.org 0xda8bc
	cmp r0, r1	@ 000da8bc 8842
.org 0xda8be
	ble.n 0xda8c2	@ 000da8be 00dd
.org 0xda8c0
	adds r0, r1, #0	@ 000da8c0 081c
.org 0xda8c2
	lsls r0, r0, #9	@ 000da8c2 4002
.org 0xda8c4
	bl 0x128fb8	@ 000da8c4 4ef078fb
.org 0xda8c8
	movs r1, #192	@ 000da8c8 c021
.org 0xda8ca
	lsls r1, r1, #2	@ 000da8ca 8900
.org 0xda8cc
	subs r1, r1, r0	@ 000da8cc 091a
.org 0xda8ce
	mov r0, r9	@ 000da8ce 4846
.org 0xda8d0
	subs r0, #1	@ 000da8d0 0138
.org 0xda8d2
	muls r1, r0	@ 000da8d2 4143
.org 0xda8d4
	mov r0, sp	@ 000da8d4 6846
.org 0xda8d6
	adds r2, r6, #0	@ 000da8d6 321c
.org 0xda8d8
	bl 0xda994	@ 000da8d8 00f05cf8
