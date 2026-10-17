@ FUN_080b5948  entry 0x080b5948  size 170
.thumb
.org 0xb5948
FUN_080b5948:
	push {r4, r5, r6, r7, lr}	@ 000b5948 f0b5
.org 0xb594a
	adds r4, r0, #0	@ 000b594a 041c
.org 0xb594c
	ldrb r0, [r4, #15]	@ 000b594c e07b
.org 0xb594e
	cmp r0, #0	@ 000b594e 0028
.org 0xb5950
	bne.n 0xb595e	@ 000b5950 05d1
.org 0xb5952
	ldr r0, [pc, #80]	@ 000b5952 1448
.org 0xb5954
	bl 0x2b10	@ 000b5954 4df7dcf8
.org 0xb5958
	ldrb r0, [r4, #15]	@ 000b5958 e07b
.org 0xb595a
	adds r0, #1	@ 000b595a 0130
.org 0xb595c
	strb r0, [r4, #15]	@ 000b595c e073
.org 0xb595e
	adds r0, r4, #0	@ 000b595e 201c
.org 0xb5960
	bl 0x1cff0	@ 000b5960 67f746fb
.org 0xb5964
	ldr r0, [r4, #84]	@ 000b5964 606d
.org 0xb5966
	ldr r1, [r4, #88]	@ 000b5966 a16d
.org 0xb5968
	ldr r2, [r4, #92]	@ 000b5968 e26d
.org 0xb596a
	adds r5, r2, r0	@ 000b596a 1518
.org 0xb596c
	ldr r2, [r4, #96]	@ 000b596c 226e
.org 0xb596e
	adds r7, r2, r1	@ 000b596e 5718
.org 0xb5970
	adds r0, r5, #0	@ 000b5970 281c
.org 0xb5972
	adds r1, r7, #0	@ 000b5972 391c
.org 0xb5974
	bl 0x7c7c	@ 000b5974 52f782f9
.org 0xb5978
	lsls r0, r0, #16	@ 000b5978 0004
.org 0xb597a
	lsrs r6, r0, #16	@ 000b597a 060c
.org 0xb597c
	cmp r6, #0	@ 000b597c 002e
.org 0xb597e
	beq.n 0xb59ac	@ 000b597e 15d0
.org 0xb5980
	ldr r1, [pc, #36]	@ 000b5980 0949
.org 0xb5982
	ldrb r0, [r4, #9]	@ 000b5982 607a
.org 0xb5984
	lsls r0, r0, #2	@ 000b5984 8000
.org 0xb5986
	adds r0, r0, r1	@ 000b5986 4018
.org 0xb5988
	movs r1, #2	@ 000b5988 0221
.org 0xb598a
	str r1, [r4, #12]	@ 000b598a e160
.org 0xb598c
	ldr r0, [r0, #0]	@ 000b598c 0068
.org 0xb598e
	ldr r0, [r0, #8]	@ 000b598e 8068
.org 0xb5990
	str r0, [r4, #20]	@ 000b5990 6061
.org 0xb5992
	movs r0, #0	@ 000b5992 0020
.org 0xb5994
	strb r0, [r4, #13]	@ 000b5994 6073
.org 0xb5996
	strb r0, [r4, #14]	@ 000b5996 a073
.org 0xb5998
	strb r0, [r4, #15]	@ 000b5998 e073
.org 0xb599a
	adds r0, r4, #0	@ 000b599a 201c
.org 0xb599c
	bl 0xb5ad4	@ 000b599c 00f09af8
.org 0xb59a0
	b.n 0xb59f6	@ 000b59a0 29e0
.org 0xb59a2
	.byte 0x00	@ 000b59a2 data
.org 0xb59a3
	.byte 0x00	@ 000b59a3 data
.org 0xb59a4
	.byte 0x9b,0x01,0x00,0x00	@ 000b59a4 data
.org 0xb59a8
	.byte 0x40,0xdb,0x85,0x08	@ 000b59a8 data
.org 0xb59ac
	str r5, [r4, #84]	@ 000b59ac 6565
.org 0xb59ae
	str r7, [r4, #88]	@ 000b59ae a765
.org 0xb59b0
	ldr r0, [pc, #72]	@ 000b59b0 1248
.org 0xb59b2
	adds r1, r4, #0	@ 000b59b2 211c
.org 0xb59b4
	adds r1, #84	@ 000b59b4 5431
.org 0xb59b6
	bl 0x1fb14	@ 000b59b6 6af7adf8
.org 0xb59ba
	movs r1, #128	@ 000b59ba 8021
.org 0xb59bc
	lsls r1, r1, #5	@ 000b59bc 4901
.org 0xb59be
	cmp r0, r1	@ 000b59be 8842
.org 0xb59c0
	bls.n 0xb59f6	@ 000b59c0 19d9
.org 0xb59c2
	ldrb r1, [r4, #10]	@ 000b59c2 a17a
.org 0xb59c4
	movs r0, #254	@ 000b59c4 fe20
.org 0xb59c6
	ands r0, r1	@ 000b59c6 0840
.org 0xb59c8
	movs r1, #253	@ 000b59c8 fd21
.org 0xb59ca
	ands r0, r1	@ 000b59ca 0840
.org 0xb59cc
	strb r0, [r4, #10]	@ 000b59cc a072
.org 0xb59ce
	adds r0, r4, #0	@ 000b59ce 201c
.org 0xb59d0
	adds r0, #140	@ 000b59d0 8c30
.org 0xb59d2
	str r6, [r0, #0]	@ 000b59d2 0660
.org 0xb59d4
	adds r0, #4	@ 000b59d4 0430
.org 0xb59d6
	str r6, [r0, #0]	@ 000b59d6 0660
.org 0xb59d8
	adds r0, #4	@ 000b59d8 0430
.org 0xb59da
	strb r6, [r0, #0]	@ 000b59da 0670
.org 0xb59dc
	ldrb r1, [r4, #10]	@ 000b59dc a17a
.org 0xb59de
	movs r0, #251	@ 000b59de fb20
.org 0xb59e0
	ands r0, r1	@ 000b59e0 0840
.org 0xb59e2
	strb r0, [r4, #10]	@ 000b59e2 a072
.org 0xb59e4
	ldr r1, [pc, #24]	@ 000b59e4 0649
.org 0xb59e6
	ldrb r0, [r4, #9]	@ 000b59e6 607a
.org 0xb59e8
	lsls r0, r0, #2	@ 000b59e8 8000
.org 0xb59ea
	adds r0, r0, r1	@ 000b59ea 4018
.org 0xb59ec
	movs r1, #3	@ 000b59ec 0321
.org 0xb59ee
	str r1, [r4, #12]	@ 000b59ee e160
.org 0xb59f0
	ldr r0, [r0, #0]	@ 000b59f0 0068
