@ FUN_08107938  entry 0x08107938  size 334
.thumb
.org 0x107938
FUN_08107938:
	push {r4, r5, r6, lr}	@ 00107938 70b5
.org 0x10793a
	adds r5, r0, #0	@ 0010793a 051c
.org 0x10793c
	bl 0x1cc9c	@ 0010793c 15f7aef9
.org 0x107940
	ldrb r1, [r5, #10]	@ 00107940 a97a
.org 0x107942
	movs r0, #1	@ 00107942 0120
.org 0x107944
	orrs r0, r1	@ 00107944 0843
.org 0x107946
	movs r1, #2	@ 00107946 0221
.org 0x107948
	orrs r0, r1	@ 00107948 0843
.org 0x10794a
	movs r4, #0	@ 0010794a 0024
.org 0x10794c
	movs r2, #0	@ 0010794c 0022
.org 0x10794e
	movs r1, #239	@ 0010794e ef21
.org 0x107950
	ands r0, r1	@ 00107950 0840
.org 0x107952
	strb r0, [r5, #10]	@ 00107952 a872
.org 0x107954
	movs r3, #1	@ 00107954 0123
.org 0x107956
	adds r0, r5, #0	@ 00107956 281c
.org 0x107958
	adds r0, #76	@ 00107958 4c30
.org 0x10795a
	strb r2, [r0, #0]	@ 0010795a 0270
.org 0x10795c
	adds r2, r5, #0	@ 0010795c 2a1c
.org 0x10795e
	adds r2, #74	@ 0010795e 4a32
.org 0x107960
	ldrb r1, [r2, #0]	@ 00107960 1178
.org 0x107962
	movs r0, #17	@ 00107962 1120
.org 0x107964
	negs r0, r0	@ 00107964 4042
.org 0x107966
	ands r0, r1	@ 00107966 0840
.org 0x107968
	strb r0, [r2, #0]	@ 00107968 1070
.org 0x10796a
	ldr r1, [pc, #72]	@ 0010796a 1249
.org 0x10796c
	ldrb r0, [r5, #9]	@ 0010796c 687a
.org 0x10796e
	lsls r0, r0, #2	@ 0010796e 8000
.org 0x107970
	adds r0, r0, r1	@ 00107970 4018
.org 0x107972
	str r3, [r5, #12]	@ 00107972 eb60
.org 0x107974
	ldr r0, [r0, #0]	@ 00107974 0068
.org 0x107976
	ldr r0, [r0, #4]	@ 00107976 4068
.org 0x107978
	str r0, [r5, #20]	@ 00107978 6861
.org 0x10797a
	ldrb r0, [r5, #16]	@ 0010797a 287c
.org 0x10797c
	cmp r0, #2	@ 0010797c 0228
.org 0x10797e
	beq.n 0x107a6a	@ 0010797e 74d0
.org 0x107980
	ldrb r0, [r5, #17]	@ 00107980 687c
.org 0x107982
	adds r1, r5, #0	@ 00107982 291c
.org 0x107984
	adds r1, #34	@ 00107984 2231
.org 0x107986
	strb r0, [r1, #0]	@ 00107986 0870
.org 0x107988
	ldrb r0, [r5, #10]	@ 00107988 a87a
.org 0x10798a
	movs r1, #4	@ 0010798a 0421
.org 0x10798c
	orrs r0, r1	@ 0010798c 0843
.org 0x10798e
	strb r0, [r5, #10]	@ 0010798e a872
.org 0x107990
	adds r4, r5, #0	@ 00107990 2c1c
.org 0x107992
	adds r4, #116	@ 00107992 7434
.org 0x107994
	ldr r1, [pc, #32]	@ 00107994 0849
.org 0x107996
	adds r2, #10	@ 00107996 0a32
.org 0x107998
	adds r0, r4, #0	@ 00107998 201c
.org 0x10799a
	movs r3, #128	@ 0010799a 8023
.org 0x10799c
	bl 0x5760	@ 0010799c fdf6e0fe
.org 0x1079a0
	str r5, [r4, #44]	@ 001079a0 e562
.org 0x1079a2
	ldr r0, [pc, #24]	@ 001079a2 0648
.org 0x1079a4
	str r0, [r4, #36]	@ 001079a4 6062
.org 0x1079a6
	ldrb r0, [r5, #16]	@ 001079a6 287c
.org 0x1079a8
	cmp r0, #0	@ 001079a8 0028
.org 0x1079aa
	bne.n 0x1079c4	@ 001079aa 0bd1
.org 0x1079ac
	ldr r0, [r5, #84]	@ 001079ac 686d
.org 0x1079ae
	ldr r1, [pc, #16]	@ 001079ae 0449
.org 0x1079b0
	adds r0, r0, r1	@ 001079b0 4018
.org 0x1079b2
	b.n 0x1079cc	@ 001079b2 0be0
.org 0x1079b4
	.byte 0xfc,0x92,0x86,0x08	@ 001079b4 data
.org 0x1079b8
	.byte 0x24,0xc4,0x86,0x08	@ 001079b8 data
.org 0x1079bc
	.byte 0x0d,0x7d,0x10,0x08	@ 001079bc data
.org 0x1079c0
	.byte 0x00,0xd0,0xff,0xff	@ 001079c0 data
.org 0x1079c4
	ldr r0, [r5, #84]	@ 001079c4 686d
.org 0x1079c6
	movs r2, #192	@ 001079c6 c022
.org 0x1079c8
	lsls r2, r2, #6	@ 001079c8 9201
.org 0x1079ca
	adds r0, r0, r2	@ 001079ca 8018
.org 0x1079cc
	str r0, [r5, #84]	@ 001079cc 6865
.org 0x1079ce
	ldr r0, [r5, #40]	@ 001079ce a86a
.org 0x1079d0
	cmp r0, #0	@ 001079d0 0028
.org 0x1079d2
	beq.n 0x107a06	@ 001079d2 18d0
.org 0x1079d4
	adds r0, #181	@ 001079d4 b530
.org 0x1079d6
	ldrb r0, [r0, #0]	@ 001079d6 0078
.org 0x1079d8
	adds r0, #1	@ 001079d8 0130
.org 0x1079da
	adds r4, r5, #0	@ 001079da 2c1c
.org 0x1079dc
	adds r4, #181	@ 001079dc b534
.org 0x1079de
	strb r0, [r4, #0]	@ 001079de 2070
.org 0x1079e0
	movs r1, #246	@ 001079e0 f621
.org 0x1079e2
	lsls r1, r1, #8	@ 001079e2 0902
.org 0x1079e4
	ldr r0, [r5, #40]	@ 001079e4 a86a
.org 0x1079e6
	adds r2, r0, #0	@ 001079e6 021c
.org 0x1079e8
	adds r2, #113	@ 001079e8 7132
.org 0x1079ea
	ldrb r2, [r2, #0]	@ 001079ea 1278
.org 0x1079ec
	lsls r2, r2, #24	@ 001079ec 1206
.org 0x1079ee
	asrs r2, r2, #24	@ 001079ee 1216
.org 0x1079f0
	lsls r2, r2, #16	@ 001079f0 1204
.org 0x1079f2
	lsrs r2, r2, #16	@ 001079f2 120c
.org 0x1079f4
	adds r0, #114	@ 001079f4 7230
.org 0x1079f6
	movs r3, #0	@ 001079f6 0023
.org 0x1079f8
	ldrsb r3, [r0, r3]	@ 001079f8 c356
.org 0x1079fa
	lsls r3, r3, #16	@ 001079fa 1b04
.org 0x1079fc
	lsrs r3, r3, #16	@ 001079fc 1b0c
.org 0x1079fe
	adds r0, r5, #0	@ 001079fe 281c
.org 0x107a00
	bl 0x1cfc8	@ 00107a00 15f7e2fa
.org 0x107a04
	b.n 0x107a16	@ 00107a04 07e0
.org 0x107a06
	adds r4, r5, #0	@ 00107a06 2c1c
.org 0x107a08
	adds r4, #181	@ 00107a08 b534
.org 0x107a0a
	strb r0, [r4, #0]	@ 00107a0a 2070
.org 0x107a0c
	movs r1, #246	@ 00107a0c f621
.org 0x107a0e
	lsls r1, r1, #8	@ 00107a0e 0902
.org 0x107a10
	adds r0, r5, #0	@ 00107a10 281c
.org 0x107a12
	bl 0x1cf00	@ 00107a12 15f775fa
.org 0x107a16
	adds r6, r4, #0	@ 00107a16 261c
.org 0x107a18
	ldr r1, [r5, #44]	@ 00107a18 e96a
.org 0x107a1a
	ldr r2, [pc, #44]	@ 00107a1a 0b4a
.org 0x107a1c
	adds r0, r1, r2	@ 00107a1c 8818
.org 0x107a1e
	ldr r4, [r0, #60]	@ 00107a1e c46b
.org 0x107a20
	cmp r4, #0	@ 00107a20 002c
.org 0x107a22
	bne.n 0x107a50	@ 00107a22 15d1
.org 0x107a24
	ldr r0, [r5, #84]	@ 00107a24 686d
.org 0x107a26
	subs r2, #8	@ 00107a26 083a
.org 0x107a28
	adds r1, r1, r2	@ 00107a28 8918
.org 0x107a2a
	ldr r1, [r1, #4]	@ 00107a2a 4968
.org 0x107a2c
	bl 0x8534	@ 00107a2c 00f782fd
.org 0x107a30
	ldrb r2, [r6, #0]	@ 00107a30 3278
.org 0x107a32
	lsls r1, r2, #1	@ 00107a32 5100
.org 0x107a34
	adds r1, r1, r2	@ 00107a34 8918
.org 0x107a36
	lsls r1, r1, #11	@ 00107a36 c902
.org 0x107a38
	subs r0, r0, r1	@ 00107a38 401a
.org 0x107a3a
	ldr r1, [pc, #16]	@ 00107a3a 0449
.org 0x107a3c
	adds r0, r0, r1	@ 00107a3c 4018
.org 0x107a3e
	str r0, [r5, #88]	@ 00107a3e a865
.org 0x107a40
	strb r4, [r5, #13]	@ 00107a40 6c73
.org 0x107a42
	strb r4, [r5, #14]	@ 00107a42 ac73
.org 0x107a44
	b.n 0x107a58	@ 00107a44 08e0
.org 0x107a46
	.byte 0x00	@ 00107a46 data
.org 0x107a47
	.byte 0x00	@ 00107a47 data
.org 0x107a48
	.byte 0xcc,0x0d,0x00,0x00	@ 00107a48 data
.org 0x107a4c
	.byte 0x00,0xf4,0xff,0xff	@ 00107a4c data
.org 0x107a50
	movs r1, #0	@ 00107a50 0021
.org 0x107a52
	movs r0, #1	@ 00107a52 0120
.org 0x107a54
	strb r0, [r5, #13]	@ 00107a54 6873
.org 0x107a56
	strb r1, [r5, #14]	@ 00107a56 a973
.org 0x107a58
	adds r0, r5, #0	@ 00107a58 281c
.org 0x107a5a
	adds r0, #180	@ 00107a5a b430
.org 0x107a5c
	movs r1, #0	@ 00107a5c 0021
.org 0x107a5e
	strb r1, [r0, #0]	@ 00107a5e 0170
.org 0x107a60
	adds r0, #2	@ 00107a60 0230
.org 0x107a62
	strb r1, [r0, #0]	@ 00107a62 0170
.org 0x107a64
	adds r0, #1	@ 00107a64 0130
.org 0x107a66
	strb r1, [r0, #0]	@ 00107a66 0170
.org 0x107a68
	b.n 0x107a9a	@ 00107a68 17e0
.org 0x107a6a
	movs r1, #246	@ 00107a6a f621
.org 0x107a6c
	lsls r1, r1, #8	@ 00107a6c 0902
.org 0x107a6e
	adds r0, r5, #0	@ 00107a6e 281c
.org 0x107a70
	bl 0x1cf00	@ 00107a70 15f746fa
.org 0x107a74
	ldr r0, [r5, #88]	@ 00107a74 a86d
.org 0x107a76
	ldr r2, [pc, #40]	@ 00107a76 0a4a
.org 0x107a78
	adds r0, r0, r2	@ 00107a78 8018
.org 0x107a7a
	str r0, [r5, #88]	@ 00107a7a a865
.org 0x107a7c
	ldr r0, [r5, #84]	@ 00107a7c 686d
.org 0x107a7e
	movs r1, #180	@ 00107a7e b421
.org 0x107a80
	lsls r1, r1, #7	@ 00107a80 c901
.org 0x107a82
	adds r0, r0, r1	@ 00107a82 4018
.org 0x107a84
	str r0, [r5, #84]	@ 00107a84 6865
