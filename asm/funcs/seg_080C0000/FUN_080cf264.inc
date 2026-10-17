@ FUN_080cf264  entry 0x080cf264  size 140
.thumb
.org 0xcf264
FUN_080cf264:
	push {r4, r5, r6, lr}	@ 000cf264 70b5
.org 0xcf266
	adds r6, r0, #0	@ 000cf266 061c
.org 0xcf268
	bl 0x1cc9c	@ 000cf268 4df718fd
.org 0xcf26c
	ldrb r0, [r6, #10]	@ 000cf26c b07a
.org 0xcf26e
	movs r2, #1	@ 000cf26e 0122
.org 0xcf270
	movs r1, #0	@ 000cf270 0021
.org 0xcf272
	movs r5, #0	@ 000cf272 0025
.org 0xcf274
	orrs r2, r0	@ 000cf274 0243
.org 0xcf276
	movs r0, #2	@ 000cf276 0220
.org 0xcf278
	orrs r2, r0	@ 000cf278 0243
.org 0xcf27a
	orrs r2, r1	@ 000cf27a 0a43
.org 0xcf27c
	strb r2, [r6, #10]	@ 000cf27c b272
.org 0xcf27e
	ldr r1, [pc, #112]	@ 000cf27e 1c49
.org 0xcf280
	ldrb r0, [r6, #9]	@ 000cf280 707a
.org 0xcf282
	lsls r0, r0, #2	@ 000cf282 8000
.org 0xcf284
	adds r0, r0, r1	@ 000cf284 4018
.org 0xcf286
	movs r1, #1	@ 000cf286 0121
.org 0xcf288
	str r1, [r6, #12]	@ 000cf288 f160
.org 0xcf28a
	ldr r0, [r0, #0]	@ 000cf28a 0068
.org 0xcf28c
	ldr r0, [r0, #4]	@ 000cf28c 4068
.org 0xcf28e
	str r0, [r6, #20]	@ 000cf28e 7061
.org 0xcf290
	movs r0, #4	@ 000cf290 0420
.org 0xcf292
	orrs r2, r0	@ 000cf292 0243
.org 0xcf294
	strb r2, [r6, #10]	@ 000cf294 b272
.org 0xcf296
	adds r4, r6, #0	@ 000cf296 341c
.org 0xcf298
	adds r4, #116	@ 000cf298 7434
.org 0xcf29a
	ldr r1, [pc, #88]	@ 000cf29a 1649
.org 0xcf29c
	adds r2, r6, #0	@ 000cf29c 321c
.org 0xcf29e
	adds r2, #84	@ 000cf29e 5432
.org 0xcf2a0
	adds r0, r4, #0	@ 000cf2a0 201c
.org 0xcf2a2
	movs r3, #255	@ 000cf2a2 ff23
.org 0xcf2a4
	bl 0x5760	@ 000cf2a4 36f75cfa
.org 0xcf2a8
	str r6, [r4, #44]	@ 000cf2a8 e662
.org 0xcf2aa
	str r5, [r4, #36]	@ 000cf2aa 6562
.org 0xcf2ac
	ldr r1, [pc, #72]	@ 000cf2ac 1249
.org 0xcf2ae
	ldrb r0, [r6, #17]	@ 000cf2ae 707c
.org 0xcf2b0
	lsls r0, r0, #1	@ 000cf2b0 4000
.org 0xcf2b2
	adds r0, r0, r1	@ 000cf2b2 4018
.org 0xcf2b4
	ldrh r1, [r0, #0]	@ 000cf2b4 0188
.org 0xcf2b6
	adds r0, r6, #0	@ 000cf2b6 301c
.org 0xcf2b8
	bl 0x1cf00	@ 000cf2b8 4df722fe
.org 0xcf2bc
	ldr r1, [pc, #60]	@ 000cf2bc 0f49
.org 0xcf2be
	ldrb r0, [r6, #17]	@ 000cf2be 707c
.org 0xcf2c0
	lsls r0, r0, #2	@ 000cf2c0 8000
.org 0xcf2c2
	adds r0, r0, r1	@ 000cf2c2 4018
.org 0xcf2c4
	ldr r2, [r0, #0]	@ 000cf2c4 0268
.org 0xcf2c6
	str r2, [r6, #92]	@ 000cf2c6 f265
.org 0xcf2c8
	ldr r0, [pc, #52]	@ 000cf2c8 0d48
.org 0xcf2ca
	str r0, [r6, #96]	@ 000cf2ca 3066
.org 0xcf2cc
	ldrb r1, [r6, #10]	@ 000cf2cc b17a
.org 0xcf2ce
	movs r0, #16	@ 000cf2ce 1020
.org 0xcf2d0
	ands r0, r1	@ 000cf2d0 0840
.org 0xcf2d2
	cmp r0, #0	@ 000cf2d2 0028
.org 0xcf2d4
	beq.n 0xcf2e4	@ 000cf2d4 06d0
.org 0xcf2d6
	lsls r0, r2, #8	@ 000cf2d6 1002
.org 0xcf2d8
	negs r0, r0	@ 000cf2d8 4042
.org 0xcf2da
	cmp r0, #0	@ 000cf2da 0028
.org 0xcf2dc
	bge.n 0xcf2e0	@ 000cf2dc 00da
.org 0xcf2de
	adds r0, #255	@ 000cf2de ff30
.org 0xcf2e0
	asrs r0, r0, #8	@ 000cf2e0 0012
.org 0xcf2e2
	str r0, [r6, #92]	@ 000cf2e2 f065
.org 0xcf2e4
	adds r0, r6, #0	@ 000cf2e4 301c
.org 0xcf2e6
	bl 0xcf304	@ 000cf2e6 00f00df8
.org 0xcf2ea
	pop {r4, r5, r6}	@ 000cf2ea 70bc
.org 0xcf2ec
	pop {r0}	@ 000cf2ec 01bc
.org 0xcf2ee
	bx r0	@ 000cf2ee 0047
