@ FUN_080aa25c  entry 0x080aa25c  size 164
.thumb
.org 0xaa25c
FUN_080aa25c:
	push {r4, lr}	@ 000aa25c 10b5
.org 0xaa25e
	adds r4, r0, #0	@ 000aa25e 041c
.org 0xaa260
	ldrb r0, [r4, #14]	@ 000aa260 a07b
.org 0xaa262
	cmp r0, #0	@ 000aa262 0028
.org 0xaa264
	bne.n 0xaa294	@ 000aa264 16d1
.org 0xaa266
	str r0, [r4, #92]	@ 000aa266 e065
.org 0xaa268
	str r0, [r4, #96]	@ 000aa268 2066
.org 0xaa26a
	str r0, [r4, #104]	@ 000aa26a a066
.org 0xaa26c
	movs r0, #180	@ 000aa26c b420
.org 0xaa26e
	strb r0, [r4, #18]	@ 000aa26e a074
.org 0xaa270
	ldr r1, [pc, #140]	@ 000aa270 2349
.org 0xaa272
	adds r0, r4, #0	@ 000aa272 201c
.org 0xaa274
	bl 0x1cf00	@ 000aa274 72f744fe
.org 0xaa278
	adds r0, r4, #0	@ 000aa278 201c
.org 0xaa27a
	adds r0, #116	@ 000aa27a 7430
.org 0xaa27c
	ldr r1, [pc, #132]	@ 000aa27c 2149
.org 0xaa27e
	bl 0x5784	@ 000aa27e 5bf781fa
.org 0xaa282
	adds r0, r4, #0	@ 000aa282 201c
.org 0xaa284
	bl 0xa9ba4	@ 000aa284 fff78efc
.org 0xaa288
	ldr r0, [pc, #124]	@ 000aa288 1f48
.org 0xaa28a
	bl 0x2b10	@ 000aa28a 58f741fc
.org 0xaa28e
	ldrb r0, [r4, #14]	@ 000aa28e a07b
.org 0xaa290
	adds r0, #1	@ 000aa290 0130
.org 0xaa292
	strb r0, [r4, #14]	@ 000aa292 a073
.org 0xaa294
	ldr r0, [r4, #88]	@ 000aa294 a06d
.org 0xaa296
	ldr r1, [r4, #96]	@ 000aa296 216e
.org 0xaa298
	adds r0, r0, r1	@ 000aa298 4018
.org 0xaa29a
	str r0, [r4, #88]	@ 000aa29a a065
.org 0xaa29c
	ldr r0, [r4, #104]	@ 000aa29c a06e
.org 0xaa29e
	adds r1, r1, r0	@ 000aa29e 0918
.org 0xaa2a0
	str r1, [r4, #96]	@ 000aa2a0 2166
.org 0xaa2a2
	adds r0, r4, #0	@ 000aa2a2 201c
.org 0xaa2a4
	bl 0xa9cac	@ 000aa2a4 fff702fd
.org 0xaa2a8
	lsls r0, r0, #24	@ 000aa2a8 0006
.org 0xaa2aa
	cmp r0, #0	@ 000aa2aa 0028
.org 0xaa2ac
	beq.n 0xaa2d6	@ 000aa2ac 13d0
.org 0xaa2ae
	movs r0, #64	@ 000aa2ae 4020
.org 0xaa2b0
	str r0, [r4, #104]	@ 000aa2b0 a066
.org 0xaa2b2
	adds r0, r4, #0	@ 000aa2b2 201c
.org 0xaa2b4
	adds r0, #188	@ 000aa2b4 bc30
.org 0xaa2b6
	ldr r2, [pc, #84]	@ 000aa2b6 154a
.org 0xaa2b8
	adds r1, r2, #0	@ 000aa2b8 111c
.org 0xaa2ba
	ldrb r0, [r0, #0]	@ 000aa2ba 0078
.org 0xaa2bc
	adds r1, r1, r0	@ 000aa2bc 0918
.org 0xaa2be
	lsls r1, r1, #16	@ 000aa2be 0904
.org 0xaa2c0
	lsrs r1, r1, #16	@ 000aa2c0 090c
.org 0xaa2c2
	adds r0, r4, #0	@ 000aa2c2 201c
.org 0xaa2c4
	bl 0x1cf00	@ 000aa2c4 72f71cfe
.org 0xaa2c8
	adds r0, r4, #0	@ 000aa2c8 201c
.org 0xaa2ca
	adds r0, #116	@ 000aa2ca 7430
.org 0xaa2cc
	ldr r1, [pc, #64]	@ 000aa2cc 1049
.org 0xaa2ce
	bl 0x5784	@ 000aa2ce 5bf759fa
.org 0xaa2d2
	movs r0, #255	@ 000aa2d2 ff20
.org 0xaa2d4
	strb r0, [r4, #18]	@ 000aa2d4 a074
.org 0xaa2d6
	adds r0, r4, #0	@ 000aa2d6 201c
.org 0xaa2d8
	bl 0xa9a70	@ 000aa2d8 fff7cafb
.org 0xaa2dc
	lsls r0, r0, #24	@ 000aa2dc 0006
.org 0xaa2de
	cmp r0, #0	@ 000aa2de 0028
.org 0xaa2e0
	beq.n 0xaa2fa	@ 000aa2e0 0bd0
.org 0xaa2e2
	adds r0, r4, #0	@ 000aa2e2 201c
.org 0xaa2e4
	adds r0, #116	@ 000aa2e4 7430
.org 0xaa2e6
	ldr r1, [pc, #44]	@ 000aa2e6 0b49
.org 0xaa2e8
	bl 0x5784	@ 000aa2e8 5bf74cfa
.org 0xaa2ec
	adds r0, r4, #0	@ 000aa2ec 201c
.org 0xaa2ee
	adds r0, #183	@ 000aa2ee b730
.org 0xaa2f0
	movs r1, #0	@ 000aa2f0 0021
.org 0xaa2f2
	strb r1, [r0, #0]	@ 000aa2f2 0170
.org 0xaa2f4
	movs r0, #4	@ 000aa2f4 0420
.org 0xaa2f6
	strb r0, [r4, #13]	@ 000aa2f6 6073
.org 0xaa2f8
	strb r1, [r4, #14]	@ 000aa2f8 a173
.org 0xaa2fa
	pop {r4}	@ 000aa2fa 10bc
.org 0xaa2fc
	pop {r0}	@ 000aa2fc 01bc
.org 0xaa2fe
	bx r0	@ 000aa2fe 0047
