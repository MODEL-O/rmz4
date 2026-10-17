@ FUN_08063430  entry 0x08063430  size 142
.thumb
.org 0x63430
FUN_08063430:
	push {r4, r5, r6, lr}	@ 00063430 70b5
.org 0x63432
	adds r6, r0, #0	@ 00063432 061c
.org 0x63434
	ldrb r0, [r6, #15]	@ 00063434 f07b
.org 0x63436
	cmp r0, #0	@ 00063436 0028
.org 0x63438
	bne.n 0x63454	@ 00063438 0cd1
.org 0x6343a
	adds r0, r6, #0	@ 0006343a 301c
.org 0x6343c
	adds r0, #84	@ 0006343c 5430
.org 0x6343e
	movs r1, #1	@ 0006343e 0121
.org 0x63440
	movs r2, #1	@ 00063440 0122
.org 0x63442
	bl 0x664bc	@ 00063442 03f03bf8
.org 0x63446
	adds r0, r6, #0	@ 00063446 301c
.org 0x63448
	movs r1, #10	@ 00063448 0a21
.org 0x6344a
	bl 0x65a94	@ 0006344a 02f023fb
.org 0x6344e
	ldrb r0, [r6, #15]	@ 0006344e f07b
.org 0x63450
	adds r0, #1	@ 00063450 0130
.org 0x63452
	strb r0, [r6, #15]	@ 00063452 f073
.org 0x63454
	adds r0, r6, #0	@ 00063454 301c
.org 0x63456
	bl 0x1cff0	@ 00063456 b9f7cbfd
.org 0x6345a
	adds r0, r6, #0	@ 0006345a 301c
.org 0x6345c
	adds r0, #116	@ 0006345c 7430
.org 0x6345e
	ldr r4, [pc, #96]	@ 0006345e 184c
.org 0x63460
	ldr r3, [pc, #96]	@ 00063460 184b
.org 0x63462
	adds r1, r6, #0	@ 00063462 311c
.org 0x63464
	adds r1, #180	@ 00063464 b431
.org 0x63466
	ldrb r2, [r1, #0]	@ 00063466 0a78
.org 0x63468
	lsls r1, r2, #1	@ 00063468 5100
.org 0x6346a
	adds r1, r1, r3	@ 0006346a c918
.org 0x6346c
	ldrh r1, [r1, #0]	@ 0006346c 0988
.org 0x6346e
	lsls r1, r1, #2	@ 0006346e 8900
.org 0x63470
	adds r1, r1, r4	@ 00063470 0919
.org 0x63472
	adds r3, r6, #0	@ 00063472 331c
.org 0x63474
	adds r3, #113	@ 00063474 7133
.org 0x63476
	movs r5, #0	@ 00063476 0025
.org 0x63478
	ldrsb r5, [r3, r5]	@ 00063478 5d57
.org 0x6347a
	ldr r1, [r1, #0]	@ 0006347a 0968
.org 0x6347c
	lsls r3, r5, #2	@ 0006347c ab00
.org 0x6347e
	adds r3, r3, r1	@ 0006347e 5b18
.org 0x63480
	ldr r4, [pc, #68]	@ 00063480 114c
.org 0x63482
	adds r1, r6, #0	@ 00063482 311c
.org 0x63484
	adds r1, #181	@ 00063484 b531
.org 0x63486
	ldrb r1, [r1, #0]	@ 00063486 0978
.org 0x63488
	lsls r1, r1, #2	@ 00063488 8900
.org 0x6348a
	adds r1, r1, r4	@ 0006348a 0919
.org 0x6348c
	ldr r1, [r1, #0]	@ 0006348c 0968
.org 0x6348e
	lsls r2, r2, #2	@ 0006348e 9200
.org 0x63490
	adds r2, r2, r1	@ 00063490 5218
.org 0x63492
	ldr r1, [r2, #0]	@ 00063492 1168
.org 0x63494
	adds r1, r1, r5	@ 00063494 4919
.org 0x63496
	ldrb r1, [r1, #0]	@ 00063496 0978
.org 0x63498
	lsls r2, r1, #1	@ 00063498 4a00
.org 0x6349a
	adds r2, r2, r1	@ 0006349a 5218
.org 0x6349c
	lsls r2, r2, #3	@ 0006349c d200
.org 0x6349e
	ldr r1, [r3, #0]	@ 0006349e 1968
.org 0x634a0
	adds r1, r1, r2	@ 000634a0 8918
.org 0x634a2
	bl 0x5784	@ 000634a2 a2f76ff9
.org 0x634a6
	adds r0, r6, #0	@ 000634a6 301c
.org 0x634a8
	adds r0, #115	@ 000634a8 7330
.org 0x634aa
	ldrb r0, [r0, #0]	@ 000634aa 0078
.org 0x634ac
	cmp r0, #3	@ 000634ac 0328
.org 0x634ae
	bne.n 0x634b8	@ 000634ae 03d1
.org 0x634b0
	movs r1, #0	@ 000634b0 0021
.org 0x634b2
	movs r0, #4	@ 000634b2 0420
.org 0x634b4
	strb r0, [r6, #14]	@ 000634b4 b073
.org 0x634b6
	strb r1, [r6, #15]	@ 000634b6 f173
.org 0x634b8
	pop {r4, r5, r6}	@ 000634b8 70bc
.org 0x634ba
	pop {r0}	@ 000634ba 01bc
.org 0x634bc
	bx r0	@ 000634bc 0047
