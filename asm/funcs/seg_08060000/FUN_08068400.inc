@ FUN_08068400  entry 0x08068400  size 82
.thumb
.org 0x68400
FUN_08068400:
	push {r4, r5, lr}	@ 00068400 30b5
.org 0x68402
	adds r4, r0, #0	@ 00068402 041c
.org 0x68404
	ldrb r5, [r4, #14]	@ 00068404 a57b
.org 0x68406
	cmp r5, #0	@ 00068406 002d
.org 0x68408
	bne.n 0x68430	@ 00068408 12d1
.org 0x6840a
	ldr r1, [pc, #72]	@ 0006840a 1249
.org 0x6840c
	bl 0x1cf00	@ 0006840c b4f778fd
.org 0x68410
	ldr r0, [r4, #88]	@ 00068410 a06d
.org 0x68412
	movs r1, #224	@ 00068412 e021
.org 0x68414
	lsls r1, r1, #5	@ 00068414 4901
.org 0x68416
	adds r0, r0, r1	@ 00068416 4018
.org 0x68418
	str r0, [r4, #88]	@ 00068418 a065
.org 0x6841a
	adds r0, r4, #0	@ 0006841a 201c
.org 0x6841c
	adds r0, #116	@ 0006841c 7430
.org 0x6841e
	ldr r1, [pc, #56]	@ 0006841e 0e49
.org 0x68420
	bl 0x5784	@ 00068420 9df7b0f9
.org 0x68424
	movs r0, #16	@ 00068424 1020
.org 0x68426
	strb r0, [r4, #18]	@ 00068426 a074
.org 0x68428
	strb r5, [r4, #15]	@ 00068428 e573
.org 0x6842a
	ldrb r0, [r4, #14]	@ 0006842a a07b
.org 0x6842c
	adds r0, #1	@ 0006842c 0130
.org 0x6842e
	strb r0, [r4, #14]	@ 0006842e a073
.org 0x68430
	adds r0, r4, #0	@ 00068430 201c
.org 0x68432
	bl 0x1cff0	@ 00068432 b4f7ddfd
.org 0x68436
	ldrb r0, [r4, #18]	@ 00068436 a07c
.org 0x68438
	subs r0, #1	@ 00068438 0138
.org 0x6843a
	strb r0, [r4, #18]	@ 0006843a a074
.org 0x6843c
	lsls r0, r0, #24	@ 0006843c 0006
.org 0x6843e
	lsrs r0, r0, #24	@ 0006843e 000e
.org 0x68440
	cmp r0, #255	@ 00068440 ff28
.org 0x68442
	bne.n 0x6844c	@ 00068442 03d1
.org 0x68444
	movs r0, #33	@ 00068444 2120
.org 0x68446
	strb r0, [r4, #13]	@ 00068446 6073
.org 0x68448
	movs r0, #0	@ 00068448 0020
.org 0x6844a
	strb r0, [r4, #14]	@ 0006844a a073
.org 0x6844c
	pop {r4, r5}	@ 0006844c 30bc
.org 0x6844e
	pop {r0}	@ 0006844e 01bc
.org 0x68450
	bx r0	@ 00068450 0047
