@ FUN_0805443c  entry 0x0805443c  size 94
.thumb
.org 0x5443c
FUN_0805443c:
	push {r4, lr}	@ 0005443c 10b5
.org 0x5443e
	adds r4, r0, #0	@ 0005443e 041c
.org 0x54440
	ldrb r0, [r4, #15]	@ 00054440 e07b
.org 0x54442
	cmp r0, #0	@ 00054442 0028
.org 0x54444
	bne.n 0x5446a	@ 00054444 11d1
.org 0x54446
	adds r2, r4, #0	@ 00054446 221c
.org 0x54448
	adds r2, #200	@ 00054448 c832
.org 0x5444a
	ldr r0, [r2, #0]	@ 0005444a 1068
.org 0x5444c
	adds r0, #184	@ 0005444c b830
.org 0x5444e
	movs r1, #3	@ 0005444e 0321
.org 0x54450
	strb r1, [r0, #0]	@ 00054450 0170
.org 0x54452
	ldr r0, [r2, #0]	@ 00054452 1068
.org 0x54454
	adds r0, #188	@ 00054454 bc30
.org 0x54456
	movs r1, #32	@ 00054456 2021
.org 0x54458
	strh r1, [r0, #0]	@ 00054458 0180
.org 0x5445a
	movs r1, #176	@ 0005445a b021
.org 0x5445c
	lsls r1, r1, #6	@ 0005445c 8901
.org 0x5445e
	adds r0, r4, #0	@ 0005445e 201c
.org 0x54460
	bl 0x1cf00	@ 00054460 c8f74efd
.org 0x54464
	ldrb r0, [r4, #15]	@ 00054464 e07b
.org 0x54466
	adds r0, #1	@ 00054466 0130
.org 0x54468
	strb r0, [r4, #15]	@ 00054468 e073
.org 0x5446a
	adds r0, r4, #0	@ 0005446a 201c
.org 0x5446c
	bl 0x1cff0	@ 0005446c c8f7c0fd
.org 0x54470
	adds r0, r4, #0	@ 00054470 201c
.org 0x54472
	bl 0x54fb0	@ 00054472 00f09dfd
.org 0x54476
	adds r0, r4, #0	@ 00054476 201c
.org 0x54478
	movs r1, #0	@ 00054478 0021
.org 0x5447a
	bl 0x55068	@ 0005447a 00f0f5fd
.org 0x5447e
	adds r0, r4, #0	@ 0005447e 201c
.org 0x54480
	adds r0, #200	@ 00054480 c830
.org 0x54482
	ldr r0, [r0, #0]	@ 00054482 0068
.org 0x54484
	adds r0, #188	@ 00054484 bc30
.org 0x54486
	movs r2, #0	@ 00054486 0022
.org 0x54488
	ldrsh r1, [r0, r2]	@ 00054488 815e
.org 0x5448a
	cmp r1, #0	@ 0005448a 0029
.org 0x5448c
	bne.n 0x54494	@ 0005448c 02d1
.org 0x5448e
	movs r0, #3	@ 0005448e 0320
.org 0x54490
	strb r0, [r4, #14]	@ 00054490 a073
.org 0x54492
	strb r1, [r4, #15]	@ 00054492 e173
.org 0x54494
	pop {r4}	@ 00054494 10bc
.org 0x54496
	pop {r0}	@ 00054496 01bc
.org 0x54498
	bx r0	@ 00054498 0047
