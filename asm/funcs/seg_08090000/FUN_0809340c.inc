@ FUN_0809340c  entry 0x0809340c  size 80
.thumb
.org 0x9340c
FUN_0809340c:
	push {r4, lr}	@ 0009340c 10b5
.org 0x9340e
	adds r4, r0, #0	@ 0009340e 041c
.org 0x93410
	ldrb r0, [r4, #15]	@ 00093410 e07b
.org 0x93412
	cmp r0, #0	@ 00093412 0028
.org 0x93414
	bne.n 0x93434	@ 00093414 0ed1
.org 0x93416
	adds r0, r4, #0	@ 00093416 201c
.org 0x93418
	adds r0, #116	@ 00093418 7430
.org 0x9341a
	ldr r1, [pc, #64]	@ 0009341a 1049
.org 0x9341c
	bl 0x5784	@ 0009341c 72f7b2f9
.org 0x93420
	movs r1, #128	@ 00093420 8021
.org 0x93422
	lsls r1, r1, #7	@ 00093422 c901
.org 0x93424
	adds r0, r4, #0	@ 00093424 201c
.org 0x93426
	bl 0x1cf00	@ 00093426 89f76bfd
.org 0x9342a
	movs r0, #64	@ 0009342a 4020
.org 0x9342c
	strb r0, [r4, #18]	@ 0009342c a074
.org 0x9342e
	ldrb r0, [r4, #15]	@ 0009342e e07b
.org 0x93430
	adds r0, #1	@ 00093430 0130
.org 0x93432
	strb r0, [r4, #15]	@ 00093432 e073
.org 0x93434
	adds r0, r4, #0	@ 00093434 201c
.org 0x93436
	bl 0x1cff0	@ 00093436 89f7dbfd
.org 0x9343a
	adds r0, r4, #0	@ 0009343a 201c
.org 0x9343c
	bl 0x94a38	@ 0009343c 01f0fcfa
.org 0x93440
	ldrb r0, [r4, #18]	@ 00093440 a07c
.org 0x93442
	subs r0, #1	@ 00093442 0138
.org 0x93444
	strb r0, [r4, #18]	@ 00093444 a074
.org 0x93446
	lsls r0, r0, #24	@ 00093446 0006
.org 0x93448
	lsrs r1, r0, #24	@ 00093448 010e
.org 0x9344a
	cmp r1, #0	@ 0009344a 0029
.org 0x9344c
	bne.n 0x93456	@ 0009344c 03d1
.org 0x9344e
	movs r0, #1	@ 0009344e 0120
.org 0x93450
	strb r0, [r4, #13]	@ 00093450 6073
.org 0x93452
	strb r1, [r4, #14]	@ 00093452 a173
.org 0x93454
	strb r1, [r4, #15]	@ 00093454 e173
.org 0x93456
	pop {r4}	@ 00093456 10bc
.org 0x93458
	pop {r0}	@ 00093458 01bc
.org 0x9345a
	bx r0	@ 0009345a 0047
