@ FUN_08038988  entry 0x08038988  size 190
.thumb
.org 0x38988
FUN_08038988:
	push {r4, lr}	@ 00038988 10b5
.org 0x3898a
	adds r4, r0, #0	@ 0003898a 041c
.org 0x3898c
	adds r0, #140	@ 0003898c 8c30
.org 0x3898e
	ldr r2, [r0, #0]	@ 0003898e 0268
.org 0x38990
	movs r0, #128	@ 00038990 8020
.org 0x38992
	lsls r0, r0, #2	@ 00038992 8000
.org 0x38994
	ands r2, r0	@ 00038994 0240
.org 0x38996
	cmp r2, #0	@ 00038996 002a
.org 0x38998
	bne.n 0x38a40	@ 00038998 52d1
.org 0x3899a
	adds r3, r4, #0	@ 0003899a 231c
.org 0x3899c
	adds r3, #164	@ 0003899c a433
.org 0x3899e
	movs r1, #0	@ 0003899e 0021
.org 0x389a0
	ldrsh r0, [r3, r1]	@ 000389a0 585e
.org 0x389a2
	cmp r0, #0	@ 000389a2 0028
.org 0x389a4
	beq.n 0x38a40	@ 000389a4 4cd0
.org 0x389a6
	adds r0, r4, #0	@ 000389a6 201c
.org 0x389a8
	adds r0, #148	@ 000389a8 9430
.org 0x389aa
	ldrb r0, [r0, #0]	@ 000389aa 0078
.org 0x389ac
	cmp r0, #0	@ 000389ac 0028
.org 0x389ae
	beq.n 0x389bc	@ 000389ae 05d0
.org 0x389b0
	movs r1, #187	@ 000389b0 bb21
.org 0x389b2
	lsls r1, r1, #1	@ 000389b2 4900
.org 0x389b4
	adds r0, r4, r1	@ 000389b4 6018
.org 0x389b6
	ldrb r0, [r0, #0]	@ 000389b6 0078
.org 0x389b8
	cmp r0, #0	@ 000389b8 0028
.org 0x389ba
	beq.n 0x38a40	@ 000389ba 41d0
.org 0x389bc
	adds r1, r4, #0	@ 000389bc 211c
.org 0x389be
	adds r1, #180	@ 000389be b431
.org 0x389c0
	ldrb r0, [r1, #19]	@ 000389c0 c87c
.org 0x389c2
	cmp r0, #3	@ 000389c2 0328
.org 0x389c4
	bne.n 0x389d8	@ 000389c4 08d1
.org 0x389c6
	movs r0, #4	@ 000389c6 0420
.org 0x389c8
	bl 0x1ebd0	@ 000389c8 e6f702f9
.org 0x389cc
	adds r0, r4, #0	@ 000389cc 201c
.org 0x389ce
	adds r0, #116	@ 000389ce 7430
.org 0x389d0
	movs r1, #4	@ 000389d0 0421
.org 0x389d2
	bl 0x61ec	@ 000389d2 cdf70bfc
.org 0x389d6
	b.n 0x38a1e	@ 000389d6 22e0
.org 0x389d8
	ldrb r0, [r1, #17]	@ 000389d8 487c
.org 0x389da
	cmp r0, #13	@ 000389da 0d28
.org 0x389dc
	bne.n 0x389f0	@ 000389dc 08d1
.org 0x389de
	movs r0, #10	@ 000389de 0a20
.org 0x389e0
	bl 0x1ebd0	@ 000389e0 e6f7f6f8
.org 0x389e4
	adds r0, r4, #0	@ 000389e4 201c
.org 0x389e6
	adds r0, #116	@ 000389e6 7430
.org 0x389e8
	movs r1, #10	@ 000389e8 0a21
.org 0x389ea
	bl 0x61ec	@ 000389ea cdf7fffb
.org 0x389ee
	b.n 0x38a1e	@ 000389ee 16e0
.org 0x389f0
	cmp r0, #14	@ 000389f0 0e28
.org 0x389f2
	bne.n 0x38a06	@ 000389f2 08d1
.org 0x389f4
	movs r0, #8	@ 000389f4 0820
.org 0x389f6
	bl 0x1ebd0	@ 000389f6 e6f7ebf8
.org 0x389fa
	adds r0, r4, #0	@ 000389fa 201c
.org 0x389fc
	adds r0, #116	@ 000389fc 7430
.org 0x389fe
	movs r1, #8	@ 000389fe 0821
.org 0x38a00
	bl 0x61ec	@ 00038a00 cdf7f4fb
.org 0x38a04
	b.n 0x38a1e	@ 00038a04 0be0
.org 0x38a06
	cmp r0, #15	@ 00038a06 0f28
.org 0x38a08
	bne.n 0x38a1c	@ 00038a08 08d1
.org 0x38a0a
	movs r0, #6	@ 00038a0a 0620
.org 0x38a0c
	bl 0x1ebd0	@ 00038a0c e6f7e0f8
.org 0x38a10
	adds r0, r4, #0	@ 00038a10 201c
.org 0x38a12
	adds r0, #116	@ 00038a12 7430
.org 0x38a14
	movs r1, #6	@ 00038a14 0621
.org 0x38a16
	bl 0x61ec	@ 00038a16 cdf7e9fb
.org 0x38a1a
	b.n 0x38a1e	@ 00038a1a 00e0
.org 0x38a1c
	strh r2, [r3, #0]	@ 00038a1c 1a80
.org 0x38a1e
	ldrb r1, [r4, #10]	@ 00038a1e a17a
.org 0x38a20
	lsrs r1, r1, #4	@ 00038a20 0909
.org 0x38a22
	movs r0, #1	@ 00038a22 0120
.org 0x38a24
	ands r1, r0	@ 00038a24 0140
.org 0x38a26
	movs r0, #161	@ 00038a26 a120
.org 0x38a28
	lsls r0, r0, #1	@ 00038a28 4000
.org 0x38a2a
	adds r3, r4, r0	@ 00038a2a 2318
.org 0x38a2c
	ldrb r2, [r3, #0]	@ 00038a2c 1a78
.org 0x38a2e
	movs r0, #2	@ 00038a2e 0220
.org 0x38a30
	negs r0, r0	@ 00038a30 4042
.org 0x38a32
	ands r0, r2	@ 00038a32 1040
.org 0x38a34
	orrs r0, r1	@ 00038a34 0843
.org 0x38a36
	strb r0, [r3, #0]	@ 00038a36 1870
.org 0x38a38
	movs r1, #0	@ 00038a38 0021
.org 0x38a3a
	movs r0, #4	@ 00038a3a 0420
.org 0x38a3c
	strb r0, [r4, #13]	@ 00038a3c 6073
.org 0x38a3e
	strb r1, [r4, #14]	@ 00038a3e a173
.org 0x38a40
	pop {r4}	@ 00038a40 10bc
.org 0x38a42
	pop {r0}	@ 00038a42 01bc
.org 0x38a44
	bx r0	@ 00038a44 0047
