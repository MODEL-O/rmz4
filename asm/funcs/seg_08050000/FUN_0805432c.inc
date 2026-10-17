@ FUN_0805432c  entry 0x0805432c  size 142
.thumb
.org 0x5432c
FUN_0805432c:
	push {r4, lr}	@ 0005432c 10b5
.org 0x5432e
	adds r4, r0, #0	@ 0005432e 041c
.org 0x54330
	ldrb r0, [r4, #15]	@ 00054330 e07b
.org 0x54332
	cmp r0, #0	@ 00054332 0028
.org 0x54334
	bne.n 0x5437a	@ 00054334 21d1
.org 0x54336
	movs r0, #89	@ 00054336 5920
.org 0x54338
	bl 0x2b10	@ 00054338 aef7eafb
.org 0x5433c
	adds r2, r4, #0	@ 0005433c 221c
.org 0x5433e
	adds r2, #196	@ 0005433e c432
.org 0x54340
	ldr r0, [r2, #0]	@ 00054340 1068
.org 0x54342
	adds r0, #184	@ 00054342 b830
.org 0x54344
	movs r1, #5	@ 00054344 0521
.org 0x54346
	strb r1, [r0, #0]	@ 00054346 0170
.org 0x54348
	ldr r0, [r2, #0]	@ 00054348 1068
.org 0x5434a
	adds r0, #188	@ 0005434a bc30
.org 0x5434c
	movs r3, #32	@ 0005434c 2023
.org 0x5434e
	strh r3, [r0, #0]	@ 0005434e 0380
.org 0x54350
	adds r2, #4	@ 00054350 0432
.org 0x54352
	ldr r0, [r2, #0]	@ 00054352 1068
.org 0x54354
	adds r0, #184	@ 00054354 b830
.org 0x54356
	movs r1, #1	@ 00054356 0121
.org 0x54358
	strb r1, [r0, #0]	@ 00054358 0170
.org 0x5435a
	ldr r0, [r2, #0]	@ 0005435a 1068
.org 0x5435c
	adds r0, #188	@ 0005435c bc30
.org 0x5435e
	strh r3, [r0, #0]	@ 0005435e 0380
.org 0x54360
	subs r2, #18	@ 00054360 123a
.org 0x54362
	ldrb r1, [r2, #0]	@ 00054362 1178
.org 0x54364
	movs r0, #4	@ 00054364 0420
.org 0x54366
	orrs r0, r1	@ 00054366 0843
.org 0x54368
	strb r0, [r2, #0]	@ 00054368 1070
.org 0x5436a
	movs r1, #176	@ 0005436a b021
.org 0x5436c
	lsls r1, r1, #6	@ 0005436c 8901
.org 0x5436e
	adds r0, r4, #0	@ 0005436e 201c
.org 0x54370
	bl 0x1cf00	@ 00054370 c8f7c6fd
.org 0x54374
	ldrb r0, [r4, #15]	@ 00054374 e07b
.org 0x54376
	adds r0, #1	@ 00054376 0130
.org 0x54378
	strb r0, [r4, #15]	@ 00054378 e073
.org 0x5437a
	adds r0, r4, #0	@ 0005437a 201c
.org 0x5437c
	bl 0x1cff0	@ 0005437c c8f738fe
.org 0x54380
	adds r0, r4, #0	@ 00054380 201c
.org 0x54382
	bl 0x54fb0	@ 00054382 00f015fe
.org 0x54386
	adds r0, r4, #0	@ 00054386 201c
.org 0x54388
	movs r1, #0	@ 00054388 0021
.org 0x5438a
	bl 0x55068	@ 0005438a 00f06dfe
.org 0x5438e
	adds r0, r4, #0	@ 0005438e 201c
.org 0x54390
	adds r0, #196	@ 00054390 c430
.org 0x54392
	ldr r0, [r0, #0]	@ 00054392 0068
.org 0x54394
	adds r0, #188	@ 00054394 bc30
.org 0x54396
	movs r1, #0	@ 00054396 0021
.org 0x54398
	ldrsh r0, [r0, r1]	@ 00054398 405e
.org 0x5439a
	cmp r0, #0	@ 0005439a 0028
.org 0x5439c
	bne.n 0x543b4	@ 0005439c 0ad1
.org 0x5439e
	adds r0, r4, #0	@ 0005439e 201c
.org 0x543a0
	adds r0, #200	@ 000543a0 c830
.org 0x543a2
	ldr r0, [r0, #0]	@ 000543a2 0068
.org 0x543a4
	adds r0, #188	@ 000543a4 bc30
.org 0x543a6
	movs r2, #0	@ 000543a6 0022
.org 0x543a8
	ldrsh r1, [r0, r2]	@ 000543a8 815e
.org 0x543aa
	cmp r1, #0	@ 000543aa 0029
.org 0x543ac
	bne.n 0x543b4	@ 000543ac 02d1
.org 0x543ae
	movs r0, #1	@ 000543ae 0120
.org 0x543b0
	strb r0, [r4, #14]	@ 000543b0 a073
.org 0x543b2
	strb r1, [r4, #15]	@ 000543b2 e173
.org 0x543b4
	pop {r4}	@ 000543b4 10bc
.org 0x543b6
	pop {r0}	@ 000543b6 01bc
.org 0x543b8
	bx r0	@ 000543b8 0047
