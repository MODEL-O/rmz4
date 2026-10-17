@ FUN_08091324  entry 0x08091324  size 138
.thumb
.org 0x91324
FUN_08091324:
	push {r4, lr}	@ 00091324 10b5
.org 0x91326
	adds r4, r0, #0	@ 00091326 041c
.org 0x91328
	ldr r3, [r4, #40]	@ 00091328 a36a
.org 0x9132a
	ldrb r0, [r3, #12]	@ 0009132a 187b
.org 0x9132c
	cmp r0, #1	@ 0009132c 0128
.org 0x9132e
	bls.n 0x91350	@ 0009132e 0fd9
.org 0x91330
	ldr r1, [pc, #24]	@ 00091330 0649
.org 0x91332
	ldrb r0, [r4, #9]	@ 00091332 607a
.org 0x91334
	lsls r0, r0, #2	@ 00091334 8000
.org 0x91336
	adds r0, r0, r1	@ 00091336 4018
.org 0x91338
	movs r1, #2	@ 00091338 0221
.org 0x9133a
	str r1, [r4, #12]	@ 0009133a e160
.org 0x9133c
	ldr r0, [r0, #0]	@ 0009133c 0068
.org 0x9133e
	ldr r0, [r0, #8]	@ 0009133e 8068
.org 0x91340
	str r0, [r4, #20]	@ 00091340 6061
.org 0x91342
	adds r0, r4, #0	@ 00091342 201c
.org 0x91344
	bl 0x90f70	@ 00091344 fff714fe
.org 0x91348
	b.n 0x913b4	@ 00091348 34e0
.org 0x9134a
	.byte 0x00	@ 0009134a data
.org 0x9134b
	.byte 0x00	@ 0009134b data
.org 0x9134c
	.byte 0x40,0xdb,0x85,0x08	@ 0009134c data
.org 0x91350
	ldr r0, [r3, #84]	@ 00091350 586d
.org 0x91352
	ldr r1, [r3, #88]	@ 00091352 996d
.org 0x91354
	str r0, [r4, #84]	@ 00091354 6065
.org 0x91356
	str r1, [r4, #88]	@ 00091356 a165
.org 0x91358
	ldrb r0, [r3, #30]	@ 00091358 987f
.org 0x9135a
	lsls r0, r0, #8	@ 0009135a 0002
.org 0x9135c
	adds r1, r3, #0	@ 0009135c 191c
.org 0x9135e
	adds r1, #112	@ 0009135e 7031
.org 0x91360
	ldrb r1, [r1, #0]	@ 00091360 0978
.org 0x91362
	orrs r0, r1	@ 00091362 0843
.org 0x91364
	ldr r1, [pc, #36]	@ 00091364 0949
.org 0x91366
	cmp r0, r1	@ 00091366 8842
.org 0x91368
	bne.n 0x91390	@ 00091368 12d1
.org 0x9136a
	adds r1, #1	@ 0009136a 0131
.org 0x9136c
	adds r0, r3, #0	@ 0009136c 181c
.org 0x9136e
	adds r0, #113	@ 0009136e 7130
.org 0x91370
	movs r2, #0	@ 00091370 0022
.org 0x91372
	ldrsb r2, [r0, r2]	@ 00091372 8256
.org 0x91374
	lsls r2, r2, #16	@ 00091374 1204
.org 0x91376
	lsrs r2, r2, #16	@ 00091376 120c
.org 0x91378
	adds r0, #1	@ 00091378 0130
.org 0x9137a
	movs r3, #0	@ 0009137a 0023
.org 0x9137c
	ldrsb r3, [r0, r3]	@ 0009137c c356
.org 0x9137e
	lsls r3, r3, #16	@ 0009137e 1b04
.org 0x91380
	lsrs r3, r3, #16	@ 00091380 1b0c
.org 0x91382
	adds r0, r4, #0	@ 00091382 201c
.org 0x91384
	bl 0x1cfc8	@ 00091384 8bf720fe
.org 0x91388
	b.n 0x913ae	@ 00091388 11e0
.org 0x9138a
	.byte 0x00	@ 0009138a data
.org 0x9138b
	.byte 0x00	@ 0009138b data
.org 0x9138c
	.byte 0x07,0x3c,0x00,0x00	@ 0009138c data
.org 0x91390
	ldr r1, [pc, #40]	@ 00091390 0a49
.org 0x91392
	adds r0, r3, #0	@ 00091392 181c
.org 0x91394
	adds r0, #113	@ 00091394 7130
.org 0x91396
	movs r2, #0	@ 00091396 0022
.org 0x91398
	ldrsb r2, [r0, r2]	@ 00091398 8256
.org 0x9139a
	lsls r2, r2, #16	@ 0009139a 1204
.org 0x9139c
	lsrs r2, r2, #16	@ 0009139c 120c
.org 0x9139e
	adds r0, #1	@ 0009139e 0130
.org 0x913a0
	movs r3, #0	@ 000913a0 0023
.org 0x913a2
	ldrsb r3, [r0, r3]	@ 000913a2 c356
.org 0x913a4
	lsls r3, r3, #16	@ 000913a4 1b04
.org 0x913a6
	lsrs r3, r3, #16	@ 000913a6 1b0c
.org 0x913a8
	adds r0, r4, #0	@ 000913a8 201c
.org 0x913aa
	bl 0x1cfc8	@ 000913aa 8bf70dfe
