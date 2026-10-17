@ FUN_080777a4  entry 0x080777a4  size 410
.thumb
.org 0x777a4
FUN_080777a4:
	push {r4, r5, r6, r7, lr}	@ 000777a4 f0b5
.org 0x777a6
	mov r7, sl	@ 000777a6 5746
.org 0x777a8
	mov r6, r9	@ 000777a8 4e46
.org 0x777aa
	mov r5, r8	@ 000777aa 4546
.org 0x777ac
	push {r5, r6, r7}	@ 000777ac e0b4
.org 0x777ae
	sub sp, #32	@ 000777ae 88b0
.org 0x777b0
	adds r5, r0, #0	@ 000777b0 051c
.org 0x777b2
	ldr r1, [pc, #376]	@ 000777b2 5e49
.org 0x777b4
	mov r0, sp	@ 000777b4 6846
.org 0x777b6
	movs r2, #9	@ 000777b6 0922
.org 0x777b8
	bl 0x129258	@ 000777b8 b1f04efd
.org 0x777bc
	add r4, sp, #12	@ 000777bc 03ac
.org 0x777be
	ldr r1, [pc, #368]	@ 000777be 5c49
.org 0x777c0
	adds r0, r4, #0	@ 000777c0 201c
.org 0x777c2
	movs r2, #9	@ 000777c2 0922
.org 0x777c4
	bl 0x129258	@ 000777c4 b1f048fd
.org 0x777c8
	mov r0, sp	@ 000777c8 6846
.org 0x777ca
	str r0, [sp, #24]	@ 000777ca 0690
.org 0x777cc
	add r0, sp, #24	@ 000777cc 06a8
.org 0x777ce
	str r4, [r0, #4]	@ 000777ce 4460
.org 0x777d0
	ldrb r4, [r5, #15]	@ 000777d0 ec7b
.org 0x777d2
	cmp r4, #0	@ 000777d2 002c
.org 0x777d4
	bne.n 0x777fc	@ 000777d4 12d1
.org 0x777d6
	adds r2, r5, #0	@ 000777d6 2a1c
.org 0x777d8
	adds r2, #200	@ 000777d8 c832
.org 0x777da
	ldr r0, [r2, #0]	@ 000777da 1068
.org 0x777dc
	adds r0, #181	@ 000777dc b530
.org 0x777de
	movs r1, #6	@ 000777de 0621
.org 0x777e0
	strb r1, [r0, #0]	@ 000777e0 0170
.org 0x777e2
	ldr r0, [r2, #0]	@ 000777e2 1068
.org 0x777e4
	adds r0, #182	@ 000777e4 b630
.org 0x777e6
	movs r1, #1	@ 000777e6 0121
.org 0x777e8
	strb r1, [r0, #0]	@ 000777e8 0170
.org 0x777ea
	adds r0, r5, #0	@ 000777ea 281c
.org 0x777ec
	movs r1, #0	@ 000777ec 0021
.org 0x777ee
	bl 0x78fdc	@ 000777ee 01f0f5fb
.org 0x777f2
	str r4, [r5, #92]	@ 000777f2 ec65
.org 0x777f4
	strb r4, [r5, #19]	@ 000777f4 ec74
.org 0x777f6
	ldrb r0, [r5, #15]	@ 000777f6 e87b
.org 0x777f8
	adds r0, #1	@ 000777f8 0130
.org 0x777fa
	strb r0, [r5, #15]	@ 000777fa e873
.org 0x777fc
	adds r0, r5, #0	@ 000777fc 281c
.org 0x777fe
	adds r0, #197	@ 000777fe c530
.org 0x77800
	ldrb r0, [r0, #0]	@ 00077800 0078
.org 0x77802
	mov sl, r0	@ 00077802 8246
.org 0x77804
	ldrb r1, [r5, #19]	@ 00077804 e97c
.org 0x77806
	mov r9, r1	@ 00077806 8946
.org 0x77808
	adds r1, r5, #0	@ 00077808 291c
.org 0x7780a
	adds r1, #184	@ 0007780a b831
.org 0x7780c
	ldr r3, [pc, #292]	@ 0007780c 494b
.org 0x7780e
	lsls r0, r0, #2	@ 0007780e 8000
.org 0x77810
	add r0, sp	@ 00077810 6844
.org 0x77812
	adds r0, #24	@ 00077812 1830
.org 0x77814
	ldr r0, [r0, #0]	@ 00077814 0068
.org 0x77816
	add r0, r9	@ 00077816 4844
.org 0x77818
	ldrb r2, [r0, #0]	@ 00077818 0278
.org 0x7781a
	lsls r2, r2, #3	@ 0007781a d200
.org 0x7781c
	adds r0, r2, r3	@ 0007781c d018
.org 0x7781e
	ldr r0, [r0, #0]	@ 0007781e 0068
.org 0x77820
	movs r4, #240	@ 00077820 f024
.org 0x77822
	lsls r4, r4, #7	@ 00077822 e401
.org 0x77824
	adds r0, r0, r4	@ 00077824 0019
.org 0x77826
	ldr r1, [r1, #0]	@ 00077826 0968
.org 0x77828
	adds r6, r1, r0	@ 00077828 0e18
.org 0x7782a
	adds r1, r5, #0	@ 0007782a 291c
.org 0x7782c
	adds r1, #188	@ 0007782c bc31
.org 0x7782e
	adds r3, #4	@ 0007782e 0433
.org 0x77830
	adds r2, r2, r3	@ 00077830 d218
.org 0x77832
	ldr r0, [r2, #0]	@ 00077832 1068
.org 0x77834
	movs r2, #160	@ 00077834 a022
.org 0x77836
	lsls r2, r2, #7	@ 00077836 d201
.org 0x77838
	adds r0, r0, r2	@ 00077838 8018
.org 0x7783a
	ldr r1, [r1, #0]	@ 0007783a 0968
.org 0x7783c
	adds r7, r1, r0	@ 0007783c 0f18
.org 0x7783e
	ldr r0, [r5, #92]	@ 0007783e e86d
.org 0x77840
	cmp r0, #0	@ 00077840 0028
.org 0x77842
	bne.n 0x77890	@ 00077842 25d1
.org 0x77844
	ldr r0, [r5, #84]	@ 00077844 686d
.org 0x77846
	subs r2, r6, r0	@ 00077846 321a
.org 0x77848
	ldr r1, [r5, #88]	@ 00077848 a96d
.org 0x7784a
	subs r1, r7, r1	@ 0007784a 791a
.org 0x7784c
	adds r0, r2, #0	@ 0007784c 101c
.org 0x7784e
	muls r0, r2	@ 0007784e 5043
.org 0x77850
	adds r4, r1, #0	@ 00077850 0c1c
.org 0x77852
	muls r4, r1	@ 00077852 4c43
.org 0x77854
	adds r1, r4, #0	@ 00077854 211c
.org 0x77856
	adds r0, r0, r1	@ 00077856 4018
.org 0x77858
	bl 0x128bf4	@ 00077858 b1f0ccf9
.org 0x7785c
	ldr r2, [pc, #216]	@ 0007785c 364a
.org 0x7785e
	adds r1, r5, #0	@ 0007785e 291c
.org 0x77860
	adds r1, #215	@ 00077860 d731
.org 0x77862
	ldrb r1, [r1, #0]	@ 00077862 0978
.org 0x77864
	lsls r1, r1, #1	@ 00077864 4900
.org 0x77866
	adds r1, r1, r2	@ 00077866 8918
.org 0x77868
	lsls r0, r0, #16	@ 00077868 0004
.org 0x7786a
	lsrs r0, r0, #16	@ 0007786a 000c
.org 0x7786c
	ldrh r1, [r1, #0]	@ 0007786c 0988
.org 0x7786e
	bl 0x129120	@ 0007786e b1f057fc
.org 0x77872
	lsls r0, r0, #16	@ 00077872 0004
.org 0x77874
	lsrs r2, r0, #16	@ 00077874 020c
.org 0x77876
	ldr r0, [r5, #84]	@ 00077876 686d
.org 0x77878
	subs r0, r6, r0	@ 00077878 301a
.org 0x7787a
	str r0, [r5, #100]	@ 0007787a 6866
.org 0x7787c
	ldr r0, [r5, #88]	@ 0007787c a86d
.org 0x7787e
	subs r0, r7, r0	@ 0007787e 381a
.org 0x77880
	str r0, [r5, #104]	@ 00077880 a866
.org 0x77882
	str r2, [r5, #96]	@ 00077882 2a66
.org 0x77884
	str r2, [r5, #92]	@ 00077884 ea65
.org 0x77886
	adds r0, r2, #0	@ 00077886 101c
.org 0x77888
	cmp r0, #0	@ 00077888 0028
.org 0x7788a
	bne.n 0x77890	@ 0007788a 01d1
.org 0x7788c
	movs r0, #1	@ 0007788c 0120
.org 0x7788e
	str r0, [r5, #96]	@ 0007788e 2866
.org 0x77890
	adds r0, r5, #0	@ 00077890 281c
.org 0x77892
	bl 0x1cff0	@ 00077892 a5f7adfb
.org 0x77896
	adds r0, r5, #0	@ 00077896 281c
.org 0x77898
	adds r0, #116	@ 00077898 7430
.org 0x7789a
	ldr r3, [pc, #160]	@ 0007789a 284b
.org 0x7789c
	ldr r2, [pc, #160]	@ 0007789c 284a
.org 0x7789e
	adds r1, r5, #0	@ 0007789e 291c
.org 0x778a0
	adds r1, #196	@ 000778a0 c431
.org 0x778a2
	ldrb r1, [r1, #0]	@ 000778a2 0978
.org 0x778a4
	lsls r1, r1, #1	@ 000778a4 4900
.org 0x778a6
	adds r1, r1, r2	@ 000778a6 8918
.org 0x778a8
	ldrh r2, [r1, #0]	@ 000778a8 0a88
.org 0x778aa
	lsls r2, r2, #2	@ 000778aa 9200
.org 0x778ac
	adds r2, r2, r3	@ 000778ac d218
.org 0x778ae
	adds r1, r5, #0	@ 000778ae 291c
.org 0x778b0
	adds r1, #113	@ 000778b0 7131
.org 0x778b2
	ldrb r1, [r1, #0]	@ 000778b2 0978
.org 0x778b4
	lsls r1, r1, #24	@ 000778b4 0906
.org 0x778b6
	asrs r1, r1, #24	@ 000778b6 0916
.org 0x778b8
	ldr r2, [r2, #0]	@ 000778b8 1268
.org 0x778ba
	lsls r1, r1, #2	@ 000778ba 8900
.org 0x778bc
	adds r1, r1, r2	@ 000778bc 8918
.org 0x778be
	ldr r1, [r1, #0]	@ 000778be 0968
.org 0x778c0
	bl 0x5784	@ 000778c0 8df760ff
.org 0x778c4
	adds r0, r5, #0	@ 000778c4 281c
.org 0x778c6
	bl 0x78f64	@ 000778c6 01f04dfb
.org 0x778ca
	ldr r0, [r5, #92]	@ 000778ca e86d
.org 0x778cc
	cmp r0, #0	@ 000778cc 0028
.org 0x778ce
	beq.n 0x778d4	@ 000778ce 01d0
.org 0x778d0
	subs r0, #1	@ 000778d0 0138
.org 0x778d2
	str r0, [r5, #92]	@ 000778d2 e865
.org 0x778d4
	ldr r0, [r5, #100]	@ 000778d4 686e
.org 0x778d6
	ldr r1, [r5, #92]	@ 000778d6 e96d
.org 0x778d8
	mov r8, r1	@ 000778d8 8846
.org 0x778da
	mov r2, r8	@ 000778da 4246
.org 0x778dc
	muls r2, r0	@ 000778dc 4243
.org 0x778de
	adds r0, r2, #0	@ 000778de 101c
.org 0x778e0
	ldr r4, [r5, #96]	@ 000778e0 2c6e
.org 0x778e2
	adds r1, r4, #0	@ 000778e2 211c
.org 0x778e4
	bl 0x128fb8	@ 000778e4 b1f068fb
.org 0x778e8
	subs r0, r6, r0	@ 000778e8 301a
.org 0x778ea
	str r0, [r5, #84]	@ 000778ea 6865
.org 0x778ec
	ldr r0, [r5, #104]	@ 000778ec a86e
.org 0x778ee
	mov r1, r8	@ 000778ee 4146
.org 0x778f0
	muls r1, r0	@ 000778f0 4143
.org 0x778f2
	adds r0, r1, #0	@ 000778f2 081c
.org 0x778f4
	adds r1, r4, #0	@ 000778f4 211c
.org 0x778f6
	bl 0x128fb8	@ 000778f6 b1f05ffb
.org 0x778fa
	subs r0, r7, r0	@ 000778fa 381a
.org 0x778fc
	str r0, [r5, #88]	@ 000778fc a865
.org 0x778fe
	mov r2, r8	@ 000778fe 4246
.org 0x77900
	cmp r2, #0	@ 00077900 002a
.org 0x77902
	bne.n 0x77948	@ 00077902 21d1
.org 0x77904
	mov r0, r9	@ 00077904 4846
.org 0x77906
	adds r0, #1	@ 00077906 0130
.org 0x77908
	lsls r0, r0, #24	@ 00077908 0006
.org 0x7790a
	lsrs r0, r0, #24	@ 0007790a 000e
.org 0x7790c
	mov r9, r0	@ 0007790c 8146
.org 0x7790e
	mov r4, sl	@ 0007790e 5446
.org 0x77910
	lsls r0, r4, #2	@ 00077910 a000
.org 0x77912
	add r0, sp	@ 00077912 6844
.org 0x77914
	adds r0, #24	@ 00077914 1830
.org 0x77916
	ldr r0, [r0, #0]	@ 00077916 0068
.org 0x77918
	add r0, r9	@ 00077918 4844
.org 0x7791a
	ldrb r0, [r0, #0]	@ 0007791a 0078
.org 0x7791c
	cmp r0, #255	@ 0007791c ff28
.org 0x7791e
	bne.n 0x77944	@ 0007791e 11d1
.org 0x77920
	ldrb r0, [r5, #14]	@ 00077920 a87b
.org 0x77922
	adds r0, #1	@ 00077922 0130
.org 0x77924
	strb r0, [r5, #14]	@ 00077924 a873
.org 0x77926
	strb r2, [r5, #15]	@ 00077926 ea73
.org 0x77928
	b.n 0x77948	@ 00077928 0ee0
.org 0x7792a
	.byte 0x00	@ 0007792a data
.org 0x7792b
	.byte 0x00	@ 0007792b data
.org 0x7792c
	.byte 0xcc,0x99,0x12,0x08	@ 0007792c data
.org 0x77930
	.byte 0xd5,0x99,0x12,0x08	@ 00077930 data
.org 0x77934
	.byte 0x08,0xd3,0x85,0x08	@ 00077934 data
.org 0x77938
	.byte 0x3c,0xd3,0x85,0x08	@ 00077938 data
.org 0x7793c
	.byte 0xe8,0xd2,0x85,0x08	@ 0007793c data
