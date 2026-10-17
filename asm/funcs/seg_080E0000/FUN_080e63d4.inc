@ FUN_080e63d4  entry 0x080e63d4  size 158
.thumb
.org 0xe63d4
FUN_080e63d4:
	push {r4, r5, r6, lr}	@ 000e63d4 70b5
.org 0xe63d6
	sub sp, #8	@ 000e63d6 82b0
.org 0xe63d8
	adds r5, r0, #0	@ 000e63d8 051c
.org 0xe63da
	ldrb r6, [r5, #17]	@ 000e63da 6e7c
.org 0xe63dc
	cmp r6, #0	@ 000e63dc 002e
.org 0xe63de
	bne.n 0xe6438	@ 000e63de 2bd1
.org 0xe63e0
	adds r0, #84	@ 000e63e0 5430
.org 0xe63e2
	ldrb r2, [r5, #10]	@ 000e63e2 aa7a
.org 0xe63e4
	lsrs r2, r2, #4	@ 000e63e4 1209
.org 0xe63e6
	movs r4, #1	@ 000e63e6 0124
.org 0xe63e8
	ands r2, r4	@ 000e63e8 2240
.org 0xe63ea
	movs r1, #1	@ 000e63ea 0121
.org 0xe63ec
	bl 0xe6270	@ 000e63ec fff740ff
.org 0xe63f0
	ldr r0, [r5, #84]	@ 000e63f0 686d
.org 0xe63f2
	str r0, [sp, #0]	@ 000e63f2 0090
.org 0xe63f4
	ldr r0, [r5, #88]	@ 000e63f4 a86d
.org 0xe63f6
	ldr r1, [pc, #56]	@ 000e63f6 0e49
.org 0xe63f8
	adds r0, r0, r1	@ 000e63f8 4018
.org 0xe63fa
	str r0, [sp, #4]	@ 000e63fa 0190
.org 0xe63fc
	movs r2, #128	@ 000e63fc 8022
.org 0xe63fe
	lsls r2, r2, #2	@ 000e63fe 9200
.org 0xe6400
	ldrb r3, [r5, #10]	@ 000e6400 ab7a
.org 0xe6402
	lsrs r3, r3, #4	@ 000e6402 1b09
.org 0xe6404
	ands r3, r4	@ 000e6404 2340
.org 0xe6406
	movs r0, #0	@ 000e6406 0020
.org 0xe6408
	mov r1, sp	@ 000e6408 6946
.org 0xe640a
	bl 0xd0dc4	@ 000e640a eaf7dbfc
.org 0xe640e
	ldr r0, [r5, #88]	@ 000e640e a86d
.org 0xe6410
	ldr r1, [pc, #32]	@ 000e6410 0849
.org 0xe6412
	adds r0, r0, r1	@ 000e6412 4018
.org 0xe6414
	str r0, [sp, #4]	@ 000e6414 0190
.org 0xe6416
	movs r0, #2	@ 000e6416 0220
.org 0xe6418
	mov r1, sp	@ 000e6418 6946
.org 0xe641a
	bl 0xd0c88	@ 000e641a eaf735fc
.org 0xe641e
	str r6, [r5, #92]	@ 000e641e ee65
.org 0xe6420
	str r6, [r5, #96]	@ 000e6420 2e66
.org 0xe6422
	movs r0, #20	@ 000e6422 1420
.org 0xe6424
	strb r0, [r5, #18]	@ 000e6424 a874
.org 0xe6426
	adds r1, r5, #0	@ 000e6426 291c
.org 0xe6428
	adds r1, #37	@ 000e6428 2531
.org 0xe642a
	movs r0, #24	@ 000e642a 1820
.org 0xe642c
	strb r0, [r1, #0]	@ 000e642c 0870
.org 0xe642e
	b.n 0xe645e	@ 000e642e 16e0
.org 0xe6430
	.byte 0x00,0xf4,0xff,0xff	@ 000e6430 data
.org 0xe6434
	.byte 0x00,0xe3,0xff,0xff	@ 000e6434 data
.org 0xe6438
	movs r0, #0	@ 000e6438 0020
.org 0xe643a
	str r0, [r5, #92]	@ 000e643a e865
.org 0xe643c
	str r0, [r5, #96]	@ 000e643c 2866
.org 0xe643e
	movs r2, #15	@ 000e643e 0f22
.org 0xe6440
	str r2, [r5, #100]	@ 000e6440 6a66
.org 0xe6442
	str r0, [r5, #104]	@ 000e6442 a866
.org 0xe6444
	str r0, [r5, #120]	@ 000e6444 a867
.org 0xe6446
	ldrb r1, [r5, #10]	@ 000e6446 a97a
.org 0xe6448
	movs r0, #16	@ 000e6448 1020
.org 0xe644a
	ands r0, r1	@ 000e644a 0840
.org 0xe644c
	cmp r0, #0	@ 000e644c 0028
.org 0xe644e
	beq.n 0xe645a	@ 000e644e 04d0
.org 0xe6450
	lsls r0, r2, #8	@ 000e6450 1002
.org 0xe6452
	negs r0, r0	@ 000e6452 4042
.org 0xe6454
	adds r0, #255	@ 000e6454 ff30
.org 0xe6456
	asrs r0, r0, #8	@ 000e6456 0012
.org 0xe6458
	str r0, [r5, #100]	@ 000e6458 6866
.org 0xe645a
	movs r0, #255	@ 000e645a ff20
.org 0xe645c
	strb r0, [r5, #18]	@ 000e645c a874
.org 0xe645e
	ldr r1, [pc, #28]	@ 000e645e 0749
.org 0xe6460
	ldrb r0, [r5, #17]	@ 000e6460 687c
.org 0xe6462
	lsls r0, r0, #1	@ 000e6462 4000
.org 0xe6464
	adds r0, r0, r1	@ 000e6464 4018
.org 0xe6466
	ldrh r1, [r0, #0]	@ 000e6466 0188
.org 0xe6468
	adds r0, r5, #0	@ 000e6468 281c
.org 0xe646a
	bl 0x1cf00	@ 000e646a 36f749fd
.org 0xe646e
	movs r0, #0	@ 000e646e 0020
.org 0xe6470
	strb r0, [r5, #13]	@ 000e6470 6873
