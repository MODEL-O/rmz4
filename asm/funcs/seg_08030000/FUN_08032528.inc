@ FUN_08032528  entry 0x08032528  size 110
.thumb
.org 0x32528
FUN_08032528:
	push {r4, r5, r6, lr}	@ 00032528 70b5
.org 0x3252a
	adds r6, r0, #0	@ 0003252a 061c
.org 0x3252c
	adds r1, r6, #0	@ 0003252c 311c
.org 0x3252e
	adds r1, #180	@ 0003252e b431
.org 0x32530
	movs r0, #0	@ 00032530 0020
.org 0x32532
	str r0, [r1, #104]	@ 00032532 8866
.org 0x32534
	str r0, [r6, #96]	@ 00032534 3066
.org 0x32536
	ldr r0, [pc, #96]	@ 00032536 1848
.org 0x32538
	adds r1, r6, r0	@ 00032538 3118
.org 0x3253a
	movs r0, #1	@ 0003253a 0120
.org 0x3253c
	strb r0, [r1, #0]	@ 0003253c 0870
.org 0x3253e
	ldr r0, [r6, #84]	@ 0003253e 706d
.org 0x32540
	ldr r1, [r6, #92]	@ 00032540 f16d
.org 0x32542
	adds r0, r0, r1	@ 00032542 4018
.org 0x32544
	str r0, [r6, #84]	@ 00032544 7065
.org 0x32546
	movs r0, #186	@ 00032546 ba20
.org 0x32548
	lsls r0, r0, #1	@ 00032548 4000
.org 0x3254a
	adds r5, r6, r0	@ 0003254a 3518
.org 0x3254c
	ldrb r1, [r5, #0]	@ 0003254c 2978
.org 0x3254e
	lsls r1, r1, #3	@ 0003254e c900
.org 0x32550
	ldr r4, [pc, #72]	@ 00032550 124c
.org 0x32552
	adds r1, r1, r4	@ 00032552 0919
.org 0x32554
	adds r0, r6, #0	@ 00032554 301c
.org 0x32556
	movs r2, #0	@ 00032556 0022
.org 0x32558
	bl 0x2b7f0	@ 00032558 f9f74af9
.org 0x3255c
	ldrb r1, [r5, #0]	@ 0003255c 2978
.org 0x3255e
	lsls r1, r1, #3	@ 0003255e c900
.org 0x32560
	adds r1, r1, r4	@ 00032560 0919
.org 0x32562
	adds r0, r6, #0	@ 00032562 301c
.org 0x32564
	movs r2, #1	@ 00032564 0122
.org 0x32566
	bl 0x2b7f0	@ 00032566 f9f743f9
.org 0x3256a
	ldrb r1, [r5, #0]	@ 0003256a 2978
.org 0x3256c
	lsls r1, r1, #3	@ 0003256c c900
.org 0x3256e
	adds r1, r1, r4	@ 0003256e 0919
.org 0x32570
	adds r0, r6, #0	@ 00032570 301c
.org 0x32572
	movs r2, #0	@ 00032572 0022
.org 0x32574
	bl 0x2baf0	@ 00032574 f9f7bcfa
.org 0x32578
	ldrb r1, [r5, #0]	@ 00032578 2978
.org 0x3257a
	lsls r1, r1, #3	@ 0003257a c900
.org 0x3257c
	adds r1, r1, r4	@ 0003257c 0919
.org 0x3257e
	adds r0, r6, #0	@ 0003257e 301c
.org 0x32580
	movs r2, #0	@ 00032580 0022
.org 0x32582
	bl 0x2c2d4	@ 00032582 f9f7a7fe
.org 0x32586
	lsls r0, r0, #16	@ 00032586 0004
.org 0x32588
	cmp r0, #0	@ 00032588 0028
.org 0x3258a
	bne.n 0x32590	@ 0003258a 01d1
.org 0x3258c
	movs r0, #2	@ 0003258c 0220
.org 0x3258e
	strb r0, [r6, #15]	@ 0003258e f073
.org 0x32590
	pop {r4, r5, r6}	@ 00032590 70bc
.org 0x32592
	pop {r0}	@ 00032592 01bc
.org 0x32594
	bx r0	@ 00032594 0047
