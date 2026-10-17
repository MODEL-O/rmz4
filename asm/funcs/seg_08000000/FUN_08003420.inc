@ FUN_08003420  entry 0x08003420  size 80
.thumb
.org 0x3420
FUN_08003420:
	push {r4, r5, r6, lr}	@ 00003420 70b5
.org 0x3422
	sub sp, #24	@ 00003422 86b0
.org 0x3424
	adds r4, r0, #0	@ 00003424 041c
.org 0x3426
	movs r1, #129	@ 00003426 8121
.org 0x3428
	lsls r1, r1, #2	@ 00003428 8900
.org 0x342a
	adds r0, r4, r1	@ 0000342a 6018
.org 0x342c
	ldr r1, [r0, #0]	@ 0000342c 0168
.org 0x342e
	cmp r1, #0	@ 0000342e 0029
.org 0x3430
	beq.n 0x3468	@ 00003430 1ad0
.org 0x3432
	movs r2, #130	@ 00003432 8222
.org 0x3434
	lsls r2, r2, #2	@ 00003434 9200
.org 0x3436
	adds r0, r4, r2	@ 00003436 a018
.org 0x3438
	ldr r2, [r0, #0]	@ 00003438 0268
.org 0x343a
	mov r0, sp	@ 0000343a 6846
.org 0x343c
	bl 0x2c40	@ 0000343c fff700fc
.org 0x3440
	movs r1, #128	@ 00003440 8021
.org 0x3442
	lsls r1, r1, #2	@ 00003442 8900
.org 0x3444
	adds r0, r4, r1	@ 00003444 6018
.org 0x3446
	ldr r6, [r0, #0]	@ 00003446 0668
.org 0x3448
	movs r0, #0	@ 00003448 0020
.org 0x344a
	ldmia r6!, {r4}	@ 0000344a 10ce
.org 0x344c
	adds r5, r0, #1	@ 0000344c 451c
.org 0x344e
	cmp r4, #0	@ 0000344e 002c
.org 0x3450
	beq.n 0x3462	@ 00003450 07d0
.org 0x3452
	ldr r2, [r4, #4]	@ 00003452 6268
.org 0x3454
	adds r0, r4, #0	@ 00003454 201c
.org 0x3456
	mov r1, sp	@ 00003456 6946
.org 0x3458
	bl 0x128f84	@ 00003458 25f194fd
.org 0x345c
	ldr r4, [r4, #0]	@ 0000345c 2468
.org 0x345e
	cmp r4, #0	@ 0000345e 002c
.org 0x3460
	bne.n 0x3452	@ 00003460 f7d1
.org 0x3462
	adds r0, r5, #0	@ 00003462 281c
.org 0x3464
	cmp r0, #127	@ 00003464 7f28
.org 0x3466
	ble.n 0x344a	@ 00003466 f0dd
.org 0x3468
	add sp, #24	@ 00003468 06b0
.org 0x346a
	pop {r4, r5, r6}	@ 0000346a 70bc
.org 0x346c
	pop {r0}	@ 0000346c 01bc
.org 0x346e
	bx r0	@ 0000346e 0047
