@ FUN_080c1288  entry 0x080c1288  size 126
.thumb
.org 0xc1288
FUN_080c1288:
	push {r4, r5, r6, lr}	@ 000c1288 70b5
.org 0xc128a
	adds r4, r0, #0	@ 000c128a 041c
.org 0xc128c
	ldr r5, [r4, #40]	@ 000c128c a56a
.org 0xc128e
	ldrb r6, [r4, #17]	@ 000c128e 667c
.org 0xc1290
	ldrb r0, [r4, #15]	@ 000c1290 e07b
.org 0xc1292
	cmp r0, #0	@ 000c1292 0028
.org 0xc1294
	bne.n 0xc12ae	@ 000c1294 0bd1
.org 0xc1296
	adds r0, r4, #0	@ 000c1296 201c
.org 0xc1298
	adds r0, #116	@ 000c1298 7430
.org 0xc129a
	ldr r1, [pc, #108]	@ 000c129a 1b49
.org 0xc129c
	bl 0x5784	@ 000c129c 44f772fa
.org 0xc12a0
	ldr r1, [pc, #104]	@ 000c12a0 1a49
.org 0xc12a2
	adds r0, r4, #0	@ 000c12a2 201c
.org 0xc12a4
	bl 0x1cf00	@ 000c12a4 5bf72cfe
.org 0xc12a8
	ldrb r0, [r4, #15]	@ 000c12a8 e07b
.org 0xc12aa
	adds r0, #1	@ 000c12aa 0130
.org 0xc12ac
	strb r0, [r4, #15]	@ 000c12ac e073
.org 0xc12ae
	adds r0, r4, #0	@ 000c12ae 201c
.org 0xc12b0
	bl 0x1cff0	@ 000c12b0 5bf79efe
.org 0xc12b4
	adds r0, r5, #0	@ 000c12b4 281c
.org 0xc12b6
	adds r0, #184	@ 000c12b6 b830
.org 0xc12b8
	ldr r0, [r0, #0]	@ 000c12b8 0068
.org 0xc12ba
	ldr r1, [r5, #84]	@ 000c12ba 696d
.org 0xc12bc
	subs r0, r0, r1	@ 000c12bc 401a
.org 0xc12be
	adds r2, r6, #1	@ 000c12be 721c
.org 0xc12c0
	muls r0, r2	@ 000c12c0 5043
.org 0xc12c2
	cmp r0, #0	@ 000c12c2 0028
.org 0xc12c4
	bge.n 0xc12c8	@ 000c12c4 00da
.org 0xc12c6
	adds r0, #3	@ 000c12c6 0330
.org 0xc12c8
	asrs r0, r0, #2	@ 000c12c8 8010
.org 0xc12ca
	adds r0, r1, r0	@ 000c12ca 0818
.org 0xc12cc
	str r0, [r4, #84]	@ 000c12cc 6065
.org 0xc12ce
	adds r0, r5, #0	@ 000c12ce 281c
.org 0xc12d0
	adds r0, #188	@ 000c12d0 bc30
.org 0xc12d2
	ldr r0, [r0, #0]	@ 000c12d2 0068
.org 0xc12d4
	movs r1, #192	@ 000c12d4 c021
.org 0xc12d6
	lsls r1, r1, #5	@ 000c12d6 4901
.org 0xc12d8
	adds r0, r0, r1	@ 000c12d8 4018
.org 0xc12da
	ldr r1, [r5, #88]	@ 000c12da a96d
.org 0xc12dc
	subs r0, r0, r1	@ 000c12dc 401a
.org 0xc12de
	muls r0, r2	@ 000c12de 5043
.org 0xc12e0
	cmp r0, #0	@ 000c12e0 0028
.org 0xc12e2
	bge.n 0xc12e6	@ 000c12e2 00da
.org 0xc12e4
	adds r0, #3	@ 000c12e4 0330
.org 0xc12e6
	asrs r0, r0, #2	@ 000c12e6 8010
.org 0xc12e8
	ldr r2, [pc, #36]	@ 000c12e8 094a
.org 0xc12ea
	adds r0, r0, r2	@ 000c12ea 8018
.org 0xc12ec
	adds r0, r1, r0	@ 000c12ec 0818
.org 0xc12ee
	str r0, [r4, #88]	@ 000c12ee a065
.org 0xc12f0
	ldrb r0, [r5, #12]	@ 000c12f0 287b
.org 0xc12f2
	cmp r0, #1	@ 000c12f2 0128
.org 0xc12f4
	bls.n 0xc1300	@ 000c12f4 04d9
.org 0xc12f6
	movs r1, #0	@ 000c12f6 0021
.org 0xc12f8
	movs r0, #1	@ 000c12f8 0120
.org 0xc12fa
	strb r0, [r4, #13]	@ 000c12fa 6073
.org 0xc12fc
	strb r1, [r4, #14]	@ 000c12fc a173
.org 0xc12fe
	strb r1, [r4, #15]	@ 000c12fe e173
.org 0xc1300
	pop {r4, r5, r6}	@ 000c1300 70bc
.org 0xc1302
	pop {r0}	@ 000c1302 01bc
.org 0xc1304
	bx r0	@ 000c1304 0047
