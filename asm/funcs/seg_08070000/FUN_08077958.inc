@ FUN_08077958  entry 0x08077958  size 276
.thumb
.org 0x77958
FUN_08077958:
	push {r4, r5, r6, lr}	@ 00077958 70b5
.org 0x7795a
	adds r4, r0, #0	@ 0007795a 041c
.org 0x7795c
	ldrb r0, [r4, #15]	@ 0007795c e07b
.org 0x7795e
	cmp r0, #0	@ 0007795e 0028
.org 0x77960
	bne.n 0x779da	@ 00077960 3bd1
.org 0x77962
	adds r0, r4, #0	@ 00077962 201c
.org 0x77964
	movs r1, #0	@ 00077964 0021
.org 0x77966
	bl 0x78fdc	@ 00077966 01f039fb
.org 0x7796a
	adds r6, r4, #0	@ 0007796a 261c
.org 0x7796c
	adds r6, #197	@ 0007796c c536
.org 0x7796e
	ldrb r5, [r6, #0]	@ 0007796e 3578
.org 0x77970
	adds r0, r5, #1	@ 00077970 681c
.org 0x77972
	movs r1, #1	@ 00077972 0121
.org 0x77974
	ands r0, r1	@ 00077974 0840
.org 0x77976
	adds r5, r0, #0	@ 00077976 051c
.org 0x77978
	adds r0, r4, #0	@ 00077978 201c
.org 0x7797a
	adds r1, r5, #0	@ 0007797a 291c
.org 0x7797c
	bl 0x79048	@ 0007797c 01f064fb
.org 0x77980
	str r0, [r4, #92]	@ 00077980 e065
.org 0x77982
	adds r0, r4, #0	@ 00077982 201c
.org 0x77984
	adds r1, r5, #0	@ 00077984 291c
.org 0x77986
	bl 0x79078	@ 00077986 01f077fb
.org 0x7798a
	adds r2, r0, #0	@ 0007798a 021c
.org 0x7798c
	str r2, [r4, #96]	@ 0007798c 2266
.org 0x7798e
	ldr r1, [r4, #92]	@ 0007798e e16d
.org 0x77990
	ldr r0, [r4, #84]	@ 00077990 606d
.org 0x77992
	subs r1, r1, r0	@ 00077992 091a
.org 0x77994
	str r1, [r4, #100]	@ 00077994 6166
.org 0x77996
	ldr r0, [r4, #88]	@ 00077996 a06d
.org 0x77998
	subs r2, r2, r0	@ 00077998 121a
.org 0x7799a
	str r2, [r4, #104]	@ 0007799a a266
.org 0x7799c
	adds r0, r1, #0	@ 0007799c 081c
.org 0x7799e
	muls r0, r1	@ 0007799e 4843
.org 0x779a0
	adds r1, r2, #0	@ 000779a0 111c
.org 0x779a2
	muls r1, r2	@ 000779a2 5143
.org 0x779a4
	adds r0, r0, r1	@ 000779a4 4018
.org 0x779a6
	bl 0x128bf4	@ 000779a6 b1f025f9
.org 0x779aa
	ldr r2, [pc, #192]	@ 000779aa 304a
.org 0x779ac
	adds r1, r4, #0	@ 000779ac 211c
.org 0x779ae
	adds r1, #215	@ 000779ae d731
.org 0x779b0
	ldrb r1, [r1, #0]	@ 000779b0 0978
.org 0x779b2
	lsls r1, r1, #1	@ 000779b2 4900
.org 0x779b4
	adds r1, r1, r2	@ 000779b4 8918
.org 0x779b6
	lsls r0, r0, #16	@ 000779b6 0004
.org 0x779b8
	lsrs r0, r0, #16	@ 000779b8 000c
.org 0x779ba
	ldrh r1, [r1, #0]	@ 000779ba 0988
.org 0x779bc
	bl 0x129120	@ 000779bc b1f0b0fb
.org 0x779c0
	lsls r0, r0, #16	@ 000779c0 0004
.org 0x779c2
	lsrs r0, r0, #16	@ 000779c2 000c
.org 0x779c4
	strb r0, [r4, #19]	@ 000779c4 e074
.org 0x779c6
	strb r0, [r4, #18]	@ 000779c6 a074
.org 0x779c8
	lsls r0, r0, #24	@ 000779c8 0006
.org 0x779ca
	cmp r0, #0	@ 000779ca 0028
.org 0x779cc
	bne.n 0x779d2	@ 000779cc 01d1
.org 0x779ce
	movs r0, #1	@ 000779ce 0120
.org 0x779d0
	strb r0, [r4, #19]	@ 000779d0 e074
.org 0x779d2
	strb r5, [r6, #0]	@ 000779d2 3570
.org 0x779d4
	ldrb r0, [r4, #15]	@ 000779d4 e07b
.org 0x779d6
	adds r0, #1	@ 000779d6 0130
.org 0x779d8
	strb r0, [r4, #15]	@ 000779d8 e073
.org 0x779da
	adds r0, r4, #0	@ 000779da 201c
.org 0x779dc
	bl 0x1cff0	@ 000779dc a5f708fb
.org 0x779e0
	adds r0, r4, #0	@ 000779e0 201c
.org 0x779e2
	adds r0, #116	@ 000779e2 7430
.org 0x779e4
	ldr r3, [pc, #136]	@ 000779e4 224b
.org 0x779e6
	ldr r2, [pc, #140]	@ 000779e6 234a
.org 0x779e8
	adds r1, r4, #0	@ 000779e8 211c
.org 0x779ea
	adds r1, #196	@ 000779ea c431
.org 0x779ec
	ldrb r1, [r1, #0]	@ 000779ec 0978
.org 0x779ee
	lsls r1, r1, #1	@ 000779ee 4900
.org 0x779f0
	adds r1, r1, r2	@ 000779f0 8918
.org 0x779f2
	ldrh r2, [r1, #0]	@ 000779f2 0a88
.org 0x779f4
	lsls r2, r2, #2	@ 000779f4 9200
.org 0x779f6
	adds r2, r2, r3	@ 000779f6 d218
.org 0x779f8
	adds r1, r4, #0	@ 000779f8 211c
.org 0x779fa
	adds r1, #113	@ 000779fa 7131
.org 0x779fc
	ldrb r1, [r1, #0]	@ 000779fc 0978
.org 0x779fe
	lsls r1, r1, #24	@ 000779fe 0906
.org 0x77a00
	asrs r1, r1, #24	@ 00077a00 0916
.org 0x77a02
	ldr r2, [r2, #0]	@ 00077a02 1268
.org 0x77a04
	lsls r1, r1, #2	@ 00077a04 8900
.org 0x77a06
	adds r1, r1, r2	@ 00077a06 8918
.org 0x77a08
	ldr r1, [r1, #0]	@ 00077a08 0968
.org 0x77a0a
	bl 0x5784	@ 00077a0a 8df7bbfe
.org 0x77a0e
	adds r0, r4, #0	@ 00077a0e 201c
.org 0x77a10
	bl 0x78f64	@ 00077a10 01f0a8fa
.org 0x77a14
	ldrb r0, [r4, #18]	@ 00077a14 a07c
.org 0x77a16
	cmp r0, #0	@ 00077a16 0028
.org 0x77a18
	beq.n 0x77a1e	@ 00077a18 01d0
.org 0x77a1a
	subs r0, #1	@ 00077a1a 0138
.org 0x77a1c
	strb r0, [r4, #18]	@ 00077a1c a074
.org 0x77a1e
	ldrb r1, [r4, #18]	@ 00077a1e a17c
.org 0x77a20
	ldr r0, [r4, #100]	@ 00077a20 606e
.org 0x77a22
	muls r0, r1	@ 00077a22 4843
.org 0x77a24
	ldrb r1, [r4, #19]	@ 00077a24 e17c
.org 0x77a26
	bl 0x128fb8	@ 00077a26 b1f0c7fa
.org 0x77a2a
	ldr r1, [r4, #92]	@ 00077a2a e16d
.org 0x77a2c
	subs r1, r1, r0	@ 00077a2c 091a
.org 0x77a2e
	str r1, [r4, #84]	@ 00077a2e 6165
.org 0x77a30
	ldrb r1, [r4, #18]	@ 00077a30 a17c
.org 0x77a32
	ldr r0, [r4, #104]	@ 00077a32 a06e
.org 0x77a34
	muls r0, r1	@ 00077a34 4843
.org 0x77a36
	ldrb r1, [r4, #19]	@ 00077a36 e17c
.org 0x77a38
	bl 0x128fb8	@ 00077a38 b1f0befa
.org 0x77a3c
	ldr r1, [r4, #96]	@ 00077a3c 216e
.org 0x77a3e
	subs r1, r1, r0	@ 00077a3e 091a
.org 0x77a40
	str r1, [r4, #88]	@ 00077a40 a165
.org 0x77a42
	ldrb r2, [r4, #18]	@ 00077a42 a27c
.org 0x77a44
	cmp r2, #0	@ 00077a44 002a
.org 0x77a46
	bne.n 0x77a66	@ 00077a46 0ed1
.org 0x77a48
	adds r1, r4, #0	@ 00077a48 211c
.org 0x77a4a
	adds r1, #215	@ 00077a4a d731
.org 0x77a4c
	ldrb r0, [r1, #0]	@ 00077a4c 0878
.org 0x77a4e
	adds r0, #1	@ 00077a4e 0130
.org 0x77a50
	strb r0, [r1, #0]	@ 00077a50 0870
.org 0x77a52
	lsls r0, r0, #24	@ 00077a52 0006
.org 0x77a54
	lsrs r0, r0, #24	@ 00077a54 000e
.org 0x77a56
	cmp r0, #3	@ 00077a56 0328
.org 0x77a58
	bls.n 0x77a5e	@ 00077a58 01d9
.org 0x77a5a
	movs r0, #3	@ 00077a5a 0320
.org 0x77a5c
	strb r0, [r1, #0]	@ 00077a5c 0870
.org 0x77a5e
	ldrb r0, [r4, #14]	@ 00077a5e a07b
.org 0x77a60
	adds r0, #1	@ 00077a60 0130
.org 0x77a62
	strb r0, [r4, #14]	@ 00077a62 a073
.org 0x77a64
	strb r2, [r4, #15]	@ 00077a64 e273
.org 0x77a66
	pop {r4, r5, r6}	@ 00077a66 70bc
.org 0x77a68
	pop {r0}	@ 00077a68 01bc
.org 0x77a6a
	bx r0	@ 00077a6a 0047
