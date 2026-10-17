@ FUN_08038354  entry 0x08038354  size 80
.thumb
.org 0x38354
FUN_08038354:
	push {lr}	@ 00038354 00b5
.org 0x38356
	adds r3, r0, #0	@ 00038356 031c
.org 0x38358
	ldrb r0, [r3, #19]	@ 00038358 d87c
.org 0x3835a
	cmp r0, #3	@ 0003835a 0328
.org 0x3835c
	bne.n 0x38386	@ 0003835c 13d1
.org 0x3835e
	ldrb r0, [r3, #8]	@ 0003835e 187a
.org 0x38360
	cmp r0, #255	@ 00038360 ff28
.org 0x38362
	beq.n 0x38368	@ 00038362 01d0
.org 0x38364
	movs r0, #32	@ 00038364 2020
.org 0x38366
	strb r0, [r3, #8]	@ 00038366 1872
.org 0x38368
	ldrb r0, [r3, #9]	@ 00038368 587a
.org 0x3836a
	cmp r0, #255	@ 0003836a ff28
.org 0x3836c
	beq.n 0x38372	@ 0003836c 01d0
.org 0x3836e
	movs r0, #32	@ 0003836e 2020
.org 0x38370
	strb r0, [r3, #9]	@ 00038370 5872
.org 0x38372
	ldrb r0, [r3, #10]	@ 00038372 987a
.org 0x38374
	cmp r0, #255	@ 00038374 ff28
.org 0x38376
	beq.n 0x3837c	@ 00038376 01d0
.org 0x38378
	movs r0, #32	@ 00038378 2020
.org 0x3837a
	strb r0, [r3, #10]	@ 0003837a 9872
.org 0x3837c
	ldrb r0, [r3, #11]	@ 0003837c d87a
.org 0x3837e
	cmp r0, #255	@ 0003837e ff28
.org 0x38380
	beq.n 0x38386	@ 00038380 01d0
.org 0x38382
	movs r0, #32	@ 00038382 2020
.org 0x38384
	strb r0, [r3, #11]	@ 00038384 d872
.org 0x38386
	adds r2, r3, #0	@ 00038386 1a1c
.org 0x38388
	adds r2, #52	@ 00038388 3432
.org 0x3838a
	movs r1, #0	@ 0003838a 0021
.org 0x3838c
	movs r0, #64	@ 0003838c 4020
.org 0x3838e
	strb r0, [r2, #0]	@ 0003838e 1070
.org 0x38390
	adds r0, r3, #0	@ 00038390 181c
.org 0x38392
	adds r0, #53	@ 00038392 3530
.org 0x38394
	strb r1, [r0, #0]	@ 00038394 0170
.org 0x38396
	subs r0, #5	@ 00038396 0538
.org 0x38398
	strb r1, [r0, #0]	@ 00038398 0170
.org 0x3839a
	adds r0, #1	@ 0003839a 0130
.org 0x3839c
	strb r1, [r0, #0]	@ 0003839c 0170
.org 0x3839e
	str r1, [r3, #56]	@ 0003839e 9963
.org 0x383a0
	pop {r0}	@ 000383a0 01bc
.org 0x383a2
	bx r0	@ 000383a2 0047
