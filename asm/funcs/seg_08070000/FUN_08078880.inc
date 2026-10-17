@ FUN_08078880  entry 0x08078880  size 424
.thumb
.org 0x78880
FUN_08078880:
	push {r4, r5, r6, r7, lr}	@ 00078880 f0b5
.org 0x78882
	mov r7, sl	@ 00078882 5746
.org 0x78884
	mov r6, r9	@ 00078884 4e46
.org 0x78886
	mov r5, r8	@ 00078886 4546
.org 0x78888
	push {r5, r6, r7}	@ 00078888 e0b4
.org 0x7888a
	sub sp, #16	@ 0007888a 84b0
.org 0x7888c
	adds r4, r0, #0	@ 0007888c 041c
.org 0x7888e
	adds r0, #197	@ 0007888e c530
.org 0x78890
	ldrb r6, [r0, #0]	@ 00078890 0678
.org 0x78892
	adds r0, r6, #1	@ 00078892 701c
.org 0x78894
	mov r8, r0	@ 00078894 8046
.org 0x78896
	movs r0, #1	@ 00078896 0120
.org 0x78898
	mov r1, r8	@ 00078898 4146
.org 0x7889a
	ands r1, r0	@ 0007889a 0140
.org 0x7889c
	mov r8, r1	@ 0007889c 8846
.org 0x7889e
	ldrb r5, [r4, #15]	@ 0007889e e57b
.org 0x788a0
	cmp r5, #0	@ 000788a0 002d
.org 0x788a2
	bne.n 0x788c2	@ 000788a2 0ed1
.org 0x788a4
	adds r0, r4, #0	@ 000788a4 201c
.org 0x788a6
	movs r1, #0	@ 000788a6 0021
.org 0x788a8
	bl 0x78fdc	@ 000788a8 00f098fb
.org 0x788ac
	movs r0, #200	@ 000788ac c820
.org 0x788ae
	lsls r0, r0, #1	@ 000788ae 4000
.org 0x788b0
	str r0, [r4, #100]	@ 000788b0 6066
.org 0x788b2
	str r5, [r4, #104]	@ 000788b2 a566
.org 0x788b4
	movs r0, #8	@ 000788b4 0820
.org 0x788b6
	strb r0, [r4, #18]	@ 000788b6 a074
.org 0x788b8
	movs r0, #255	@ 000788b8 ff20
.org 0x788ba
	strb r0, [r4, #19]	@ 000788ba e074
.org 0x788bc
	ldrb r0, [r4, #15]	@ 000788bc e07b
.org 0x788be
	adds r0, #1	@ 000788be 0130
.org 0x788c0
	strb r0, [r4, #15]	@ 000788c0 e073
.org 0x788c2
	adds r0, r4, #0	@ 000788c2 201c
.org 0x788c4
	bl 0x1cff0	@ 000788c4 a4f794fb
.org 0x788c8
	adds r0, r4, #0	@ 000788c8 201c
.org 0x788ca
	adds r0, #116	@ 000788ca 7430
.org 0x788cc
	ldr r3, [pc, #228]	@ 000788cc 394b
.org 0x788ce
	ldr r2, [pc, #232]	@ 000788ce 3a4a
.org 0x788d0
	adds r1, r4, #0	@ 000788d0 211c
.org 0x788d2
	adds r1, #196	@ 000788d2 c431
.org 0x788d4
	ldrb r1, [r1, #0]	@ 000788d4 0978
.org 0x788d6
	lsls r1, r1, #1	@ 000788d6 4900
.org 0x788d8
	adds r1, r1, r2	@ 000788d8 8918
.org 0x788da
	ldrh r2, [r1, #0]	@ 000788da 0a88
.org 0x788dc
	lsls r2, r2, #2	@ 000788dc 9200
.org 0x788de
	adds r2, r2, r3	@ 000788de d218
.org 0x788e0
	adds r1, r4, #0	@ 000788e0 211c
.org 0x788e2
	adds r1, #113	@ 000788e2 7131
.org 0x788e4
	ldrb r1, [r1, #0]	@ 000788e4 0978
.org 0x788e6
	lsls r1, r1, #24	@ 000788e6 0906
.org 0x788e8
	asrs r1, r1, #24	@ 000788e8 0916
.org 0x788ea
	ldr r2, [r2, #0]	@ 000788ea 1268
.org 0x788ec
	lsls r1, r1, #2	@ 000788ec 8900
.org 0x788ee
	adds r1, r1, r2	@ 000788ee 8918
.org 0x788f0
	ldr r1, [r1, #0]	@ 000788f0 0968
.org 0x788f2
	bl 0x5784	@ 000788f2 8cf747ff
.org 0x788f6
	adds r0, r4, #0	@ 000788f6 201c
.org 0x788f8
	bl 0x78f28	@ 000788f8 00f016fb
.org 0x788fc
	ldr r0, [r4, #100]	@ 000788fc 606e
.org 0x788fe
	cmp r0, #0	@ 000788fe 0028
.org 0x78900
	beq.n 0x78906	@ 00078900 01d0
.org 0x78902
	subs r0, #1	@ 00078902 0138
.org 0x78904
	str r0, [r4, #100]	@ 00078904 6066
.org 0x78906
	movs r0, #132	@ 00078906 8420
.org 0x78908
	bl 0x25d8	@ 00078908 89f766fe
.org 0x7890c
	ldrb r0, [r4, #18]	@ 0007890c a07c
.org 0x7890e
	cmp r0, #0	@ 0007890e 0028
.org 0x78910
	beq.n 0x789f2	@ 00078910 6fd0
.org 0x78912
	ldr r0, [r4, #100]	@ 00078912 606e
.org 0x78914
	movs r1, #48	@ 00078914 3021
.org 0x78916
	bl 0x129050	@ 00078916 b0f09bfb
.org 0x7891a
	cmp r0, #0	@ 0007891a 0028
.org 0x7891c
	bne.n 0x789f2	@ 0007891c 69d1
.org 0x7891e
	ldr r1, [pc, #156]	@ 0007891e 2749
.org 0x78920
	mov r0, sp	@ 00078920 6846
.org 0x78922
	movs r2, #3	@ 00078922 0322
.org 0x78924
	bl 0x129258	@ 00078924 b0f098fc
.org 0x78928
	movs r3, #0	@ 00078928 0023
.org 0x7892a
	movs r2, #204	@ 0007892a cc22
.org 0x7892c
	adds r2, r2, r4	@ 0007892c 1219
.org 0x7892e
	mov r9, r2	@ 0007892e 9146
.org 0x78930
	lsls r6, r6, #1	@ 00078930 7600
.org 0x78932
	ldr r0, [r2, #0]	@ 00078932 1068
.org 0x78934
	ldr r7, [pc, #136]	@ 00078934 224f
.org 0x78936
	mov sl, r7	@ 00078936 ba46
.org 0x78938
	movs r5, #1	@ 00078938 0125
.org 0x7893a
	movs r1, #181	@ 0007893a b521
.org 0x7893c
	adds r1, r1, r0	@ 0007893c 0918
.org 0x7893e
	mov ip, r1	@ 0007893e 8c46
.org 0x78940
	adds r0, #180	@ 00078940 b430
.org 0x78942
	str r0, [sp, #12]	@ 00078942 0390
.org 0x78944
	ldr r2, [sp, #12]	@ 00078944 039a
.org 0x78946
	ldrb r1, [r2, #0]	@ 00078946 1178
.org 0x78948
	adds r0, r3, r6	@ 00078948 9819
.org 0x7894a
	add r0, sl	@ 0007894a 5044
.org 0x7894c
	ldrb r2, [r0, #0]	@ 0007894c 0278
.org 0x7894e
	adds r0, r1, #0	@ 0007894e 081c
.org 0x78950
	asrs r0, r2	@ 00078950 1041
.org 0x78952
	ands r0, r5	@ 00078952 2840
.org 0x78954
	cmp r0, #0	@ 00078954 0028
.org 0x78956
	beq.n 0x78966	@ 00078956 06d0
.org 0x78958
	mov r7, ip	@ 00078958 6746
.org 0x7895a
	ldrb r0, [r7, #0]	@ 0007895a 3878
.org 0x7895c
	ands r1, r0	@ 0007895c 0140
.org 0x7895e
	asrs r1, r2	@ 0007895e 1141
.org 0x78960
	ands r1, r5	@ 00078960 2940
.org 0x78962
	cmp r1, #0	@ 00078962 0029
.org 0x78964
	beq.n 0x7896e	@ 00078964 03d0
.org 0x78966
	mov r0, sp	@ 00078966 6846
.org 0x78968
	adds r1, r0, r3	@ 00078968 c118
.org 0x7896a
	movs r0, #0	@ 0007896a 0020
.org 0x7896c
	strb r0, [r1, #0]	@ 0007896c 0870
.org 0x7896e
	adds r3, #1	@ 0007896e 0133
.org 0x78970
	cmp r3, #1	@ 00078970 012b
.org 0x78972
	ble.n 0x78944	@ 00078972 e7dd
.org 0x78974
	ldrb r0, [r4, #19]	@ 00078974 e07c
.org 0x78976
	cmp r0, #255	@ 00078976 ff28
.org 0x78978
	beq.n 0x78982	@ 00078978 03d0
.org 0x7897a
	mov r2, sp	@ 0007897a 6a46
.org 0x7897c
	adds r1, r2, r0	@ 0007897c 1118
.org 0x7897e
	movs r0, #0	@ 0007897e 0020
.org 0x78980
	strb r0, [r1, #0]	@ 00078980 0870
.org 0x78982
	mov r0, sp	@ 00078982 6846
.org 0x78984
	movs r1, #3	@ 00078984 0321
.org 0x78986
	bl 0x792a0	@ 00078986 00f08bfc
.org 0x7898a
	adds r5, r0, #0	@ 0007898a 051c
.org 0x7898c
	movs r0, #1	@ 0007898c 0120
.org 0x7898e
	negs r0, r0	@ 0007898e 4042
.org 0x78990
	cmp r5, r0	@ 00078990 8542
.org 0x78992
	bne.n 0x78996	@ 00078992 00d1
.org 0x78994
	movs r5, #2	@ 00078994 0225
.org 0x78996
	cmp r5, #1	@ 00078996 012d
.org 0x78998
	bgt.n 0x789c4	@ 00078998 14dc
.org 0x7899a
	mov r7, r9	@ 0007899a 4f46
.org 0x7899c
	ldr r2, [r7, #0]	@ 0007899c 3a68
.org 0x7899e
	adds r2, #187	@ 0007899e bb32
.org 0x789a0
	ldr r0, [pc, #28]	@ 000789a0 0748
.org 0x789a2
	adds r1, r5, r6	@ 000789a2 a919
.org 0x789a4
	adds r1, r1, r0	@ 000789a4 0918
.org 0x789a6
	movs r0, #1	@ 000789a6 0120
.org 0x789a8
	ldrb r1, [r1, #0]	@ 000789a8 0978
.org 0x789aa
	lsls r0, r1	@ 000789aa 8840
.org 0x789ac
	ldrb r1, [r2, #0]	@ 000789ac 1178
.org 0x789ae
	orrs r0, r1	@ 000789ae 0843
.org 0x789b0
	strb r0, [r2, #0]	@ 000789b0 1070
.org 0x789b2
	b.n 0x789ea	@ 000789b2 1ae0
.org 0x789b4
	.byte 0xe8,0xd2,0x85,0x08	@ 000789b4 data
.org 0x789b8
	.byte 0xf0,0xd2,0x85,0x08	@ 000789b8 data
.org 0x789bc
	.byte 0xe1,0x99,0x12,0x08	@ 000789bc data
.org 0x789c0
	.byte 0x38,0xd3,0x85,0x08	@ 000789c0 data
.org 0x789c4
	mov r1, r8	@ 000789c4 4146
.org 0x789c6
	lsls r0, r1, #1	@ 000789c6 4800
.org 0x789c8
	subs r0, #1	@ 000789c8 0138
.org 0x789ca
	lsls r1, r0, #2	@ 000789ca 8100
.org 0x789cc
	adds r1, r1, r0	@ 000789cc 0918
.org 0x789ce
	lsls r1, r1, #10	@ 000789ce 8902
.org 0x789d0
	ldr r0, [r4, #84]	@ 000789d0 606d
.org 0x789d2
	adds r0, r0, r1	@ 000789d2 4018
.org 0x789d4
	str r0, [sp, #4]	@ 000789d4 0190
.org 0x789d6
	ldr r0, [r4, #88]	@ 000789d6 a06d
.org 0x789d8
	add r1, sp, #4	@ 000789d8 01a9
.org 0x789da
	str r0, [r1, #4]	@ 000789da 4860
.org 0x789dc
	adds r0, r4, #0	@ 000789dc 201c
.org 0x789de
	movs r2, #0	@ 000789de 0022
.org 0x789e0
	mov r3, r8	@ 000789e0 4346
.org 0x789e2
	bl 0xe8b0c	@ 000789e2 70f093f8
.org 0x789e6
	movs r0, #16	@ 000789e6 1020
.org 0x789e8
	str r0, [r4, #104]	@ 000789e8 a066
.org 0x789ea
	ldrb r0, [r4, #18]	@ 000789ea a07c
.org 0x789ec
	subs r0, #1	@ 000789ec 0138
.org 0x789ee
	strb r0, [r4, #18]	@ 000789ee a074
.org 0x789f0
	strb r5, [r4, #19]	@ 000789f0 e574
.org 0x789f2
	ldr r0, [r4, #104]	@ 000789f2 a06e
.org 0x789f4
	cmp r0, #0	@ 000789f4 0028
.org 0x789f6
	beq.n 0x78a1a	@ 000789f6 10d0
.org 0x789f8
	subs r0, #1	@ 000789f8 0138
.org 0x789fa
	str r0, [r4, #104]	@ 000789fa a066
.org 0x789fc
	cmp r0, #0	@ 000789fc 0028
.org 0x789fe
	bne.n 0x78a1a	@ 000789fe 0cd1
.org 0x78a00
	mov r2, r8	@ 00078a00 4246
.org 0x78a02
	lsls r1, r2, #1	@ 00078a02 5100
.org 0x78a04
	subs r1, #1	@ 00078a04 0139
.org 0x78a06
	lsls r1, r1, #11	@ 00078a06 c902
.org 0x78a08
	ldr r0, [r4, #84]	@ 00078a08 606d
.org 0x78a0a
	adds r0, r0, r1	@ 00078a0a 4018
.org 0x78a0c
	str r0, [sp, #4]	@ 00078a0c 0190
.org 0x78a0e
	add r0, sp, #4	@ 00078a0e 01a8
.org 0x78a10
	ldr r1, [r4, #88]	@ 00078a10 a16d
.org 0x78a12
	str r1, [r0, #4]	@ 00078a12 4160
.org 0x78a14
	movs r1, #0	@ 00078a14 0021
.org 0x78a16
	bl 0xcd2dc	@ 00078a16 54f061fc
.org 0x78a1a
	ldr r1, [r4, #100]	@ 00078a1a 616e
.org 0x78a1c
	cmp r1, #0	@ 00078a1c 0029
.org 0x78a1e
	bne.n 0x78a28	@ 00078a1e 03d1
.org 0x78a20
	ldrb r0, [r4, #14]	@ 00078a20 a07b
.org 0x78a22
	adds r0, #1	@ 00078a22 0130
.org 0x78a24
	strb r0, [r4, #14]	@ 00078a24 a073
.org 0x78a26
	strb r1, [r4, #15]	@ 00078a26 e173
