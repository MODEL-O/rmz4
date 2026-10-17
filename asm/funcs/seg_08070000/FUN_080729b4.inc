@ FUN_080729b4  entry 0x080729b4  size 168
.thumb
.org 0x729b4
FUN_080729b4:
	push {r4, r5, r6, lr}	@ 000729b4 70b5
.org 0x729b6
	sub sp, #4	@ 000729b6 81b0
.org 0x729b8
	adds r6, r0, #0	@ 000729b8 061c
.org 0x729ba
	ldr r1, [pc, #160]	@ 000729ba 2849
.org 0x729bc
	mov r0, sp	@ 000729bc 6846
.org 0x729be
	movs r2, #3	@ 000729be 0322
.org 0x729c0
	bl 0x129258	@ 000729c0 b6f04afc
.org 0x729c4
	adds r0, r6, #0	@ 000729c4 301c
.org 0x729c6
	adds r0, #195	@ 000729c6 c330
.org 0x729c8
	ldrb r4, [r0, #0]	@ 000729c8 0478
.org 0x729ca
	ldrb r0, [r6, #15]	@ 000729ca f07b
.org 0x729cc
	cmp r0, #0	@ 000729cc 0028
.org 0x729ce
	bne.n 0x729e6	@ 000729ce 0ad1
.org 0x729d0
	adds r0, r6, #0	@ 000729d0 301c
.org 0x729d2
	movs r1, #0	@ 000729d2 0021
.org 0x729d4
	bl 0x736c4	@ 000729d4 00f076fe
.org 0x729d8
	mov r1, sp	@ 000729d8 6946
.org 0x729da
	adds r0, r1, r4	@ 000729da 0819
.org 0x729dc
	ldrb r0, [r0, #0]	@ 000729dc 0078
.org 0x729de
	strb r0, [r6, #18]	@ 000729de b074
.org 0x729e0
	ldrb r0, [r6, #15]	@ 000729e0 f07b
.org 0x729e2
	adds r0, #1	@ 000729e2 0130
.org 0x729e4
	strb r0, [r6, #15]	@ 000729e4 f073
.org 0x729e6
	adds r0, r6, #0	@ 000729e6 301c
.org 0x729e8
	bl 0x1cff0	@ 000729e8 aaf702fb
.org 0x729ec
	adds r0, r6, #0	@ 000729ec 301c
.org 0x729ee
	adds r0, #116	@ 000729ee 7430
.org 0x729f0
	ldr r4, [pc, #108]	@ 000729f0 1b4c
.org 0x729f2
	ldr r3, [pc, #112]	@ 000729f2 1c4b
.org 0x729f4
	adds r1, r6, #0	@ 000729f4 311c
.org 0x729f6
	adds r1, #184	@ 000729f6 b831
.org 0x729f8
	ldrb r2, [r1, #0]	@ 000729f8 0a78
.org 0x729fa
	lsls r1, r2, #1	@ 000729fa 5100
.org 0x729fc
	adds r1, r1, r3	@ 000729fc c918
.org 0x729fe
	ldrh r1, [r1, #0]	@ 000729fe 0988
.org 0x72a00
	lsls r1, r1, #2	@ 00072a00 8900
.org 0x72a02
	adds r1, r1, r4	@ 00072a02 0919
.org 0x72a04
	adds r3, r6, #0	@ 00072a04 331c
.org 0x72a06
	adds r3, #113	@ 00072a06 7133
.org 0x72a08
	movs r5, #0	@ 00072a08 0025
.org 0x72a0a
	ldrsb r5, [r3, r5]	@ 00072a0a 5d57
.org 0x72a0c
	ldr r1, [r1, #0]	@ 00072a0c 0968
.org 0x72a0e
	lsls r3, r5, #2	@ 00072a0e ab00
.org 0x72a10
	adds r3, r3, r1	@ 00072a10 5b18
.org 0x72a12
	ldr r4, [pc, #84]	@ 00072a12 154c
.org 0x72a14
	adds r1, r6, #0	@ 00072a14 311c
.org 0x72a16
	adds r1, #185	@ 00072a16 b931
.org 0x72a18
	ldrb r1, [r1, #0]	@ 00072a18 0978
.org 0x72a1a
	lsls r1, r1, #2	@ 00072a1a 8900
.org 0x72a1c
	adds r1, r1, r4	@ 00072a1c 0919
.org 0x72a1e
	ldr r1, [r1, #0]	@ 00072a1e 0968
.org 0x72a20
	lsls r2, r2, #2	@ 00072a20 9200
.org 0x72a22
	adds r2, r2, r1	@ 00072a22 5218
.org 0x72a24
	ldr r1, [r2, #0]	@ 00072a24 1168
.org 0x72a26
	adds r1, r1, r5	@ 00072a26 4919
.org 0x72a28
	ldrb r1, [r1, #0]	@ 00072a28 0978
.org 0x72a2a
	lsls r2, r1, #1	@ 00072a2a 4a00
.org 0x72a2c
	adds r2, r2, r1	@ 00072a2c 5218
.org 0x72a2e
	lsls r2, r2, #3	@ 00072a2e d200
.org 0x72a30
	ldr r1, [r3, #0]	@ 00072a30 1968
.org 0x72a32
	adds r1, r1, r2	@ 00072a32 8918
.org 0x72a34
	bl 0x5784	@ 00072a34 92f7a6fe
.org 0x72a38
	adds r0, r6, #0	@ 00072a38 301c
.org 0x72a3a
	bl 0x73a68	@ 00072a3a 01f015f8
.org 0x72a3e
	ldrb r0, [r6, #18]	@ 00072a3e b07c
.org 0x72a40
	subs r0, #1	@ 00072a40 0138
.org 0x72a42
	strb r0, [r6, #18]	@ 00072a42 b074
.org 0x72a44
	lsls r0, r0, #24	@ 00072a44 0006
.org 0x72a46
	lsrs r1, r0, #24	@ 00072a46 010e
.org 0x72a48
	cmp r1, #0	@ 00072a48 0029
.org 0x72a4a
	bne.n 0x72a54	@ 00072a4a 03d1
.org 0x72a4c
	ldrb r0, [r6, #14]	@ 00072a4c b07b
.org 0x72a4e
	adds r0, #1	@ 00072a4e 0130
.org 0x72a50
	strb r0, [r6, #14]	@ 00072a50 b073
.org 0x72a52
	strb r1, [r6, #15]	@ 00072a52 f173
.org 0x72a54
	add sp, #4	@ 00072a54 01b0
.org 0x72a56
	pop {r4, r5, r6}	@ 00072a56 70bc
.org 0x72a58
	pop {r0}	@ 00072a58 01bc
.org 0x72a5a
	bx r0	@ 00072a5a 0047
