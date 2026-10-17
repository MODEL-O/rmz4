@ FUN_080b9328  entry 0x080b9328  size 66
.thumb
.org 0xb9328
FUN_080b9328:
	push {r4, lr}	@ 000b9328 10b5
.org 0xb932a
	adds r4, r0, #0	@ 000b932a 041c
.org 0xb932c
	ldrb r0, [r4, #15]	@ 000b932c e07b
.org 0xb932e
	cmp r0, #0	@ 000b932e 0028
.org 0xb9330
	bne.n 0xb934a	@ 000b9330 0bd1
.org 0xb9332
	adds r0, r4, #0	@ 000b9332 201c
.org 0xb9334
	adds r0, #116	@ 000b9334 7430
.org 0xb9336
	ldr r1, [pc, #52]	@ 000b9336 0d49
.org 0xb9338
	bl 0x5784	@ 000b9338 4cf724fa
.org 0xb933c
	ldr r1, [pc, #48]	@ 000b933c 0c49
.org 0xb933e
	adds r0, r4, #0	@ 000b933e 201c
.org 0xb9340
	bl 0x1cf00	@ 000b9340 63f7defd
.org 0xb9344
	ldrb r0, [r4, #15]	@ 000b9344 e07b
.org 0xb9346
	adds r0, #1	@ 000b9346 0130
.org 0xb9348
	strb r0, [r4, #15]	@ 000b9348 e073
.org 0xb934a
	adds r0, r4, #0	@ 000b934a 201c
.org 0xb934c
	bl 0x1cff0	@ 000b934c 63f750fe
.org 0xb9350
	adds r0, r4, #0	@ 000b9350 201c
.org 0xb9352
	adds r0, #115	@ 000b9352 7330
.org 0xb9354
	ldrb r0, [r0, #0]	@ 000b9354 0078
.org 0xb9356
	cmp r0, #3	@ 000b9356 0328
.org 0xb9358
	bne.n 0xb9364	@ 000b9358 04d1
.org 0xb935a
	movs r1, #0	@ 000b935a 0021
.org 0xb935c
	movs r0, #6	@ 000b935c 0620
.org 0xb935e
	strb r0, [r4, #13]	@ 000b935e 6073
.org 0xb9360
	strb r1, [r4, #14]	@ 000b9360 a173
.org 0xb9362
	strb r1, [r4, #15]	@ 000b9362 e173
.org 0xb9364
	pop {r4}	@ 000b9364 10bc
.org 0xb9366
	pop {r0}	@ 000b9366 01bc
.org 0xb9368
	bx r0	@ 000b9368 0047
