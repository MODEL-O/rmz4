@ FUN_080543bc  entry 0x080543bc  size 126
.thumb
.org 0x543bc
FUN_080543bc:
	push {r4, lr}	@ 000543bc 10b5
.org 0x543be
	adds r4, r0, #0	@ 000543be 041c
.org 0x543c0
	ldrb r0, [r4, #15]	@ 000543c0 e07b
.org 0x543c2
	cmp r0, #0	@ 000543c2 0028
.org 0x543c4
	bne.n 0x543fa	@ 000543c4 19d1
.org 0x543c6
	adds r2, r4, #0	@ 000543c6 221c
.org 0x543c8
	adds r2, #196	@ 000543c8 c432
.org 0x543ca
	ldr r0, [r2, #0]	@ 000543ca 1068
.org 0x543cc
	adds r0, #184	@ 000543cc b830
.org 0x543ce
	movs r1, #6	@ 000543ce 0621
.org 0x543d0
	strb r1, [r0, #0]	@ 000543d0 0170
.org 0x543d2
	ldr r0, [r2, #0]	@ 000543d2 1068
.org 0x543d4
	adds r0, #188	@ 000543d4 bc30
.org 0x543d6
	movs r3, #40	@ 000543d6 2823
.org 0x543d8
	strh r3, [r0, #0]	@ 000543d8 0380
.org 0x543da
	adds r2, #4	@ 000543da 0432
.org 0x543dc
	ldr r0, [r2, #0]	@ 000543dc 1068
.org 0x543de
	adds r0, #184	@ 000543de b830
.org 0x543e0
	movs r1, #2	@ 000543e0 0221
.org 0x543e2
	strb r1, [r0, #0]	@ 000543e2 0170
.org 0x543e4
	ldr r0, [r2, #0]	@ 000543e4 1068
.org 0x543e6
	adds r0, #188	@ 000543e6 bc30
.org 0x543e8
	strh r3, [r0, #0]	@ 000543e8 0380
.org 0x543ea
	movs r1, #176	@ 000543ea b021
.org 0x543ec
	lsls r1, r1, #6	@ 000543ec 8901
.org 0x543ee
	adds r0, r4, #0	@ 000543ee 201c
.org 0x543f0
	bl 0x1cf00	@ 000543f0 c8f786fd
.org 0x543f4
	ldrb r0, [r4, #15]	@ 000543f4 e07b
.org 0x543f6
	adds r0, #1	@ 000543f6 0130
.org 0x543f8
	strb r0, [r4, #15]	@ 000543f8 e073
.org 0x543fa
	adds r0, r4, #0	@ 000543fa 201c
.org 0x543fc
	bl 0x1cff0	@ 000543fc c8f7f8fd
.org 0x54400
	adds r0, r4, #0	@ 00054400 201c
.org 0x54402
	bl 0x54fb0	@ 00054402 00f0d5fd
.org 0x54406
	adds r0, r4, #0	@ 00054406 201c
.org 0x54408
	movs r1, #0	@ 00054408 0021
.org 0x5440a
	bl 0x55068	@ 0005440a 00f02dfe
.org 0x5440e
	adds r0, r4, #0	@ 0005440e 201c
.org 0x54410
	adds r0, #196	@ 00054410 c430
.org 0x54412
	ldr r0, [r0, #0]	@ 00054412 0068
.org 0x54414
	adds r0, #188	@ 00054414 bc30
.org 0x54416
	movs r1, #0	@ 00054416 0021
.org 0x54418
	ldrsh r0, [r0, r1]	@ 00054418 405e
.org 0x5441a
	cmp r0, #0	@ 0005441a 0028
.org 0x5441c
	bne.n 0x54434	@ 0005441c 0ad1
.org 0x5441e
	adds r0, r4, #0	@ 0005441e 201c
.org 0x54420
	adds r0, #200	@ 00054420 c830
.org 0x54422
	ldr r0, [r0, #0]	@ 00054422 0068
.org 0x54424
	adds r0, #188	@ 00054424 bc30
.org 0x54426
	movs r2, #0	@ 00054426 0022
.org 0x54428
	ldrsh r1, [r0, r2]	@ 00054428 815e
.org 0x5442a
	cmp r1, #0	@ 0005442a 0029
.org 0x5442c
	bne.n 0x54434	@ 0005442c 02d1
.org 0x5442e
	movs r0, #2	@ 0005442e 0220
.org 0x54430
	strb r0, [r4, #14]	@ 00054430 a073
.org 0x54432
	strb r1, [r4, #15]	@ 00054432 e173
.org 0x54434
	pop {r4}	@ 00054434 10bc
.org 0x54436
	pop {r0}	@ 00054436 01bc
.org 0x54438
	bx r0	@ 00054438 0047
