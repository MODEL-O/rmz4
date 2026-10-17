@ FUN_080a9408  entry 0x080a9408  size 62
.thumb
.org 0xa9408
FUN_080a9408:
	push {r4, r5, lr}	@ 000a9408 30b5
.org 0xa940a
	adds r4, r0, #0	@ 000a940a 041c
.org 0xa940c
	ldr r5, [r4, #40]	@ 000a940c a56a
.org 0xa940e
	ldrb r0, [r4, #14]	@ 000a940e a07b
.org 0xa9410
	cmp r0, #0	@ 000a9410 0028
.org 0xa9412
	bne.n 0xa9422	@ 000a9412 06d1
.org 0xa9414
	ldr r1, [pc, #28]	@ 000a9414 0749
.org 0xa9416
	adds r0, r4, #0	@ 000a9416 201c
.org 0xa9418
	bl 0x1cf00	@ 000a9418 73f772fd
.org 0xa941c
	ldrb r0, [r4, #14]	@ 000a941c a07b
.org 0xa941e
	adds r0, #1	@ 000a941e 0130
.org 0xa9420
	strb r0, [r4, #14]	@ 000a9420 a073
.org 0xa9422
	adds r0, r4, #0	@ 000a9422 201c
.org 0xa9424
	bl 0x1cff0	@ 000a9424 73f7e4fd
.org 0xa9428
	ldrb r0, [r5, #13]	@ 000a9428 687b
.org 0xa942a
	cmp r0, #4	@ 000a942a 0428
.org 0xa942c
	bne.n 0xa9438	@ 000a942c 04d1
.org 0xa942e
	movs r1, #0	@ 000a942e 0021
.org 0xa9430
	movs r0, #1	@ 000a9430 0120
.org 0xa9432
	b.n 0xa9440	@ 000a9432 05e0
.org 0xa9434
	.byte 0x09,0x93,0x00,0x00	@ 000a9434 data
.org 0xa9438
	cmp r0, #5	@ 000a9438 0528
.org 0xa943a
	bne.n 0xa9444	@ 000a943a 03d1
.org 0xa943c
	movs r1, #0	@ 000a943c 0021
.org 0xa943e
	movs r0, #2	@ 000a943e 0220
.org 0xa9440
	strb r0, [r4, #13]	@ 000a9440 6073
.org 0xa9442
	strb r1, [r4, #14]	@ 000a9442 a173
.org 0xa9444
	pop {r4, r5}	@ 000a9444 30bc
