@ FUN_081103d0  entry 0x081103d0  size 220
.thumb
.org 0x1103d0
FUN_081103d0:
	push {r4, r5, r6, r7, lr}	@ 001103d0 f0b5
.org 0x1103d2
	mov r7, sl	@ 001103d2 5746
.org 0x1103d4
	mov r6, r9	@ 001103d4 4e46
.org 0x1103d6
	mov r5, r8	@ 001103d6 4546
.org 0x1103d8
	push {r5, r6, r7}	@ 001103d8 e0b4
.org 0x1103da
	sub sp, #12	@ 001103da 83b0
.org 0x1103dc
	adds r7, r0, #0	@ 001103dc 071c
.org 0x1103de
	movs r0, #20	@ 001103de 1420
.org 0x1103e0
	adds r0, r0, r7	@ 001103e0 c019
.org 0x1103e2
	mov r9, r0	@ 001103e2 8146
.org 0x1103e4
	movs r1, #136	@ 001103e4 8821
.org 0x1103e6
	lsls r1, r1, #2	@ 001103e6 8900
.org 0x1103e8
	adds r1, r1, r7	@ 001103e8 c919
.org 0x1103ea
	mov sl, r1	@ 001103ea 8a46
.org 0x1103ec
	movs r2, #139	@ 001103ec 8b22
.org 0x1103ee
	lsls r2, r2, #2	@ 001103ee 9200
.org 0x1103f0
	adds r2, r2, r7	@ 001103f0 d219
.org 0x1103f2
	mov r8, r2	@ 001103f2 9046
.org 0x1103f4
	ldr r0, [pc, #180]	@ 001103f4 2d48
.org 0x1103f6
	ldr r5, [pc, #184]	@ 001103f6 2e4d
.org 0x1103f8
	ldrh r2, [r5, #0]	@ 001103f8 2a88
.org 0x1103fa
	movs r4, #248	@ 001103fa f824
.org 0x1103fc
	lsls r4, r4, #5	@ 001103fc 6401
.org 0x1103fe
	adds r1, r4, #0	@ 001103fe 211c
.org 0x110400
	ands r1, r2	@ 00110400 1140
.org 0x110402
	lsls r1, r1, #3	@ 00110402 c900
.org 0x110404
	movs r2, #176	@ 00110404 b022
.org 0x110406
	lsls r2, r2, #3	@ 00110406 d200
.org 0x110408
	movs r3, #240	@ 00110408 f023
.org 0x11040a
	lsls r3, r3, #2	@ 0011040a 9b00
.org 0x11040c
	bl 0x1fd4	@ 0011040c f1f6e2fd
.org 0x110410
	ldr r0, [pc, #160]	@ 00110410 2848
.org 0x110412
	movs r6, #0	@ 00110412 0026
.org 0x110414
	strh r6, [r0, #0]	@ 00110414 0680
.org 0x110416
	subs r5, #4	@ 00110416 043d
.org 0x110418
	ldrh r1, [r5, #0]	@ 00110418 2988
.org 0x11041a
	ldr r0, [pc, #156]	@ 0011041a 2748
.org 0x11041c
	ands r0, r1	@ 0011041c 0840
.org 0x11041e
	ldr r1, [pc, #156]	@ 0011041e 2749
.org 0x110420
	ands r0, r1	@ 00110420 0840
.org 0x110422
	movs r3, #144	@ 00110422 9023
.org 0x110424
	lsls r3, r3, #5	@ 00110424 5b01
.org 0x110426
	adds r1, r3, #0	@ 00110426 191c
.org 0x110428
	movs r3, #0	@ 00110428 0023
.org 0x11042a
	mov r2, sp	@ 0011042a 6a46
.org 0x11042c
	strh r3, [r2, #8]	@ 0011042c 1381
.org 0x11042e
	orrs r0, r1	@ 0011042e 0843
.org 0x110430
	strh r0, [r5, #0]	@ 00110430 2880
.org 0x110432
	ldr r1, [pc, #140]	@ 00110432 2349
.org 0x110434
	adds r0, r1, #0	@ 00110434 081c
.org 0x110436
	strh r0, [r5, #6]	@ 00110436 e880
.org 0x110438
	ands r4, r0	@ 00110438 0440
.org 0x11043a
	lsls r1, r4, #3	@ 0011043a e100
.org 0x11043c
	movs r0, #192	@ 0011043c c020
.org 0x11043e
	lsls r0, r0, #19	@ 0011043e c004
.org 0x110440
	adds r1, r1, r0	@ 00110440 0918
.org 0x110442
	str r6, [sp, #0]	@ 00110442 0096
.org 0x110444
	movs r2, #128	@ 00110444 8022
.org 0x110446
	lsls r2, r2, #17	@ 00110446 5204
.org 0x110448
	orrs r2, r4	@ 00110448 2243
.org 0x11044a
	mov r0, sp	@ 0011044a 6846
.org 0x11044c
	bl 0x128be0	@ 0011044c 18f0c8fb
.org 0x110450
	str r6, [r5, #16]	@ 00110450 2e61
.org 0x110452
	mov r0, r9	@ 00110452 4846
.org 0x110454
	bl 0x3384	@ 00110454 f2f696ff
.org 0x110458
	mov r0, sl	@ 00110458 5046
.org 0x11045a
	mov r1, r8	@ 0011045a 4146
.org 0x11045c
	movs r2, #0	@ 0011045c 0022
.org 0x11045e
	movs r3, #0	@ 0011045e 0023
.org 0x110460
	bl 0x2c0c	@ 00110460 f2f6d4fb
.org 0x110464
	mov r0, r9	@ 00110464 4846
.org 0x110466
	mov r1, sl	@ 00110466 5146
.org 0x110468
	bl 0x33bc	@ 00110468 f2f6a8ff
.org 0x11046c
	movs r0, #240	@ 0011046c f020
.org 0x11046e
	lsls r0, r0, #7	@ 0011046e c001
.org 0x110470
	mov r2, r8	@ 00110470 4246
.org 0x110472
	str r0, [r2, #0]	@ 00110472 1060
.org 0x110474
	movs r0, #160	@ 00110474 a020
.org 0x110476
	lsls r0, r0, #7	@ 00110476 c001
.org 0x110478
	str r0, [r2, #4]	@ 00110478 5060
.org 0x11047a
	bl 0x1c734	@ 0011047a 0cf75bf9
.org 0x11047e
	ldr r0, [pc, #68]	@ 0011047e 1148
.org 0x110480
	str r6, [r0, #0]	@ 00110480 0660
.org 0x110482
	movs r0, #1	@ 00110482 0120
.org 0x110484
	strb r0, [r7, #6]	@ 00110484 b871
.org 0x110486
	mov r3, sp	@ 00110486 6b46
.org 0x110488
	ldrb r3, [r3, #8]	@ 00110488 1b7a
.org 0x11048a
	strb r3, [r7, #7]	@ 0011048a fb71
.org 0x11048c
	ldr r1, [pc, #56]	@ 0011048c 0e49
.org 0x11048e
	ldrb r0, [r7, #5]	@ 0011048e 7879
.org 0x110490
	lsls r0, r0, #2	@ 00110490 8000
.org 0x110492
	adds r0, r0, r1	@ 00110492 4018
.org 0x110494
	ldr r1, [r0, #0]	@ 00110494 0168
.org 0x110496
	adds r0, r7, #0	@ 00110496 381c
.org 0x110498
	bl 0x128f80	@ 00110498 18f072fd
.org 0x11049c
	add sp, #12	@ 0011049c 03b0
.org 0x11049e
	pop {r3, r4, r5}	@ 0011049e 38bc
.org 0x1104a0
	mov r8, r3	@ 001104a0 9846
.org 0x1104a2
	mov r9, r4	@ 001104a2 a146
.org 0x1104a4
	mov sl, r5	@ 001104a4 aa46
.org 0x1104a6
	pop {r4, r5, r6, r7}	@ 001104a6 f0bc
.org 0x1104a8
	pop {r0}	@ 001104a8 01bc
.org 0x1104aa
	bx r0	@ 001104aa 0047
