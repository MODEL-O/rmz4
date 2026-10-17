@ FUN_080c8328  entry 0x080c8328  size 88
.thumb
.org 0xc8328
FUN_080c8328:
	push {r4, lr}	@ 000c8328 10b5
.org 0xc832a
	adds r4, r0, #0	@ 000c832a 041c
.org 0xc832c
	ldr r0, [r4, #40]	@ 000c832c a06a
.org 0xc832e
	ldrb r1, [r4, #17]	@ 000c832e 617c
.org 0xc8330
	adds r0, #180	@ 000c8330 b430
.org 0xc8332
	ldrb r0, [r0, #0]	@ 000c8332 0078
.org 0xc8334
	adds r1, #1	@ 000c8334 0131
.org 0xc8336
	cmp r0, r1	@ 000c8336 8842
.org 0xc8338
	bne.n 0xc8340	@ 000c8338 02d1
.org 0xc833a
	movs r0, #63	@ 000c833a 3f20
.org 0xc833c
	bl 0x2b10	@ 000c833c 3af7e8fb
.org 0xc8340
	adds r0, r4, #0	@ 000c8340 201c
.org 0xc8342
	adds r0, #84	@ 000c8342 5430
.org 0xc8344
	movs r1, #0	@ 000c8344 0021
.org 0xc8346
	movs r2, #0	@ 000c8346 0022
.org 0xc8348
	bl 0xde82c	@ 000c8348 16f070fa
.org 0xc834c
	adds r0, r4, #0	@ 000c834c 201c
.org 0xc834e
	adds r0, #140	@ 000c834e 8c30
.org 0xc8350
	movs r1, #0	@ 000c8350 0021
.org 0xc8352
	str r1, [r0, #0]	@ 000c8352 0160
.org 0xc8354
	adds r0, #4	@ 000c8354 0430
.org 0xc8356
	str r1, [r0, #0]	@ 000c8356 0160
.org 0xc8358
	adds r0, #4	@ 000c8358 0430
.org 0xc835a
	strb r1, [r0, #0]	@ 000c835a 0170
.org 0xc835c
	ldrb r1, [r4, #10]	@ 000c835c a17a
.org 0xc835e
	movs r0, #251	@ 000c835e fb20
.org 0xc8360
	ands r0, r1	@ 000c8360 0840
.org 0xc8362
	movs r1, #254	@ 000c8362 fe21
.org 0xc8364
	ands r0, r1	@ 000c8364 0840
.org 0xc8366
	strb r0, [r4, #10]	@ 000c8366 a072
.org 0xc8368
	ldr r1, [pc, #20]	@ 000c8368 0549
.org 0xc836a
	ldrb r0, [r4, #9]	@ 000c836a 607a
.org 0xc836c
	lsls r0, r0, #2	@ 000c836c 8000
.org 0xc836e
	adds r0, r0, r1	@ 000c836e 4018
.org 0xc8370
	movs r1, #4	@ 000c8370 0421
.org 0xc8372
	str r1, [r4, #12]	@ 000c8372 e160
.org 0xc8374
	ldr r0, [r0, #0]	@ 000c8374 0068
.org 0xc8376
	ldr r0, [r0, #16]	@ 000c8376 0069
.org 0xc8378
	str r0, [r4, #20]	@ 000c8378 6061
.org 0xc837a
	pop {r4}	@ 000c837a 10bc
.org 0xc837c
	pop {r0}	@ 000c837c 01bc
.org 0xc837e
	bx r0	@ 000c837e 0047
