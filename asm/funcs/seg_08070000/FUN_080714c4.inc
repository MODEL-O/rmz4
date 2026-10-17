@ FUN_080714c4  entry 0x080714c4  size 168
.thumb
.org 0x714c4
FUN_080714c4:
	push {r4, r5, r6, lr}	@ 000714c4 70b5
.org 0x714c6
	sub sp, #4	@ 000714c6 81b0
.org 0x714c8
	adds r6, r0, #0	@ 000714c8 061c
.org 0x714ca
	ldr r1, [pc, #160]	@ 000714ca 2849
.org 0x714cc
	mov r0, sp	@ 000714cc 6846
.org 0x714ce
	movs r2, #3	@ 000714ce 0322
.org 0x714d0
	bl 0x129258	@ 000714d0 b7f0c2fe
.org 0x714d4
	adds r0, r6, #0	@ 000714d4 301c
.org 0x714d6
	adds r0, #195	@ 000714d6 c330
.org 0x714d8
	ldrb r4, [r0, #0]	@ 000714d8 0478
.org 0x714da
	ldrb r0, [r6, #15]	@ 000714da f07b
.org 0x714dc
	cmp r0, #0	@ 000714dc 0028
.org 0x714de
	bne.n 0x714f6	@ 000714de 0ad1
.org 0x714e0
	adds r0, r6, #0	@ 000714e0 301c
.org 0x714e2
	movs r1, #0	@ 000714e2 0021
.org 0x714e4
	bl 0x736c4	@ 000714e4 02f0eef8
.org 0x714e8
	mov r1, sp	@ 000714e8 6946
.org 0x714ea
	adds r0, r1, r4	@ 000714ea 0819
.org 0x714ec
	ldrb r0, [r0, #0]	@ 000714ec 0078
.org 0x714ee
	strb r0, [r6, #18]	@ 000714ee b074
.org 0x714f0
	ldrb r0, [r6, #15]	@ 000714f0 f07b
.org 0x714f2
	adds r0, #1	@ 000714f2 0130
.org 0x714f4
	strb r0, [r6, #15]	@ 000714f4 f073
.org 0x714f6
	adds r0, r6, #0	@ 000714f6 301c
.org 0x714f8
	bl 0x1cff0	@ 000714f8 abf77afd
.org 0x714fc
	adds r0, r6, #0	@ 000714fc 301c
.org 0x714fe
	adds r0, #116	@ 000714fe 7430
.org 0x71500
	ldr r4, [pc, #108]	@ 00071500 1b4c
.org 0x71502
	ldr r3, [pc, #112]	@ 00071502 1c4b
.org 0x71504
	adds r1, r6, #0	@ 00071504 311c
.org 0x71506
	adds r1, #184	@ 00071506 b831
.org 0x71508
	ldrb r2, [r1, #0]	@ 00071508 0a78
.org 0x7150a
	lsls r1, r2, #1	@ 0007150a 5100
.org 0x7150c
	adds r1, r1, r3	@ 0007150c c918
.org 0x7150e
	ldrh r1, [r1, #0]	@ 0007150e 0988
.org 0x71510
	lsls r1, r1, #2	@ 00071510 8900
.org 0x71512
	adds r1, r1, r4	@ 00071512 0919
.org 0x71514
	adds r3, r6, #0	@ 00071514 331c
.org 0x71516
	adds r3, #113	@ 00071516 7133
.org 0x71518
	movs r5, #0	@ 00071518 0025
.org 0x7151a
	ldrsb r5, [r3, r5]	@ 0007151a 5d57
.org 0x7151c
	ldr r1, [r1, #0]	@ 0007151c 0968
.org 0x7151e
	lsls r3, r5, #2	@ 0007151e ab00
.org 0x71520
	adds r3, r3, r1	@ 00071520 5b18
.org 0x71522
	ldr r4, [pc, #84]	@ 00071522 154c
.org 0x71524
	adds r1, r6, #0	@ 00071524 311c
.org 0x71526
	adds r1, #185	@ 00071526 b931
.org 0x71528
	ldrb r1, [r1, #0]	@ 00071528 0978
.org 0x7152a
	lsls r1, r1, #2	@ 0007152a 8900
.org 0x7152c
	adds r1, r1, r4	@ 0007152c 0919
.org 0x7152e
	ldr r1, [r1, #0]	@ 0007152e 0968
.org 0x71530
	lsls r2, r2, #2	@ 00071530 9200
.org 0x71532
	adds r2, r2, r1	@ 00071532 5218
.org 0x71534
	ldr r1, [r2, #0]	@ 00071534 1168
.org 0x71536
	adds r1, r1, r5	@ 00071536 4919
.org 0x71538
	ldrb r1, [r1, #0]	@ 00071538 0978
.org 0x7153a
	lsls r2, r1, #1	@ 0007153a 4a00
.org 0x7153c
	adds r2, r2, r1	@ 0007153c 5218
.org 0x7153e
	lsls r2, r2, #3	@ 0007153e d200
.org 0x71540
	ldr r1, [r3, #0]	@ 00071540 1968
.org 0x71542
	adds r1, r1, r2	@ 00071542 8918
.org 0x71544
	bl 0x5784	@ 00071544 94f71ef9
.org 0x71548
	adds r0, r6, #0	@ 00071548 301c
.org 0x7154a
	bl 0x73a68	@ 0007154a 02f08dfa
.org 0x7154e
	ldrb r0, [r6, #18]	@ 0007154e b07c
.org 0x71550
	subs r0, #1	@ 00071550 0138
.org 0x71552
	strb r0, [r6, #18]	@ 00071552 b074
.org 0x71554
	lsls r0, r0, #24	@ 00071554 0006
.org 0x71556
	lsrs r1, r0, #24	@ 00071556 010e
.org 0x71558
	cmp r1, #0	@ 00071558 0029
.org 0x7155a
	bne.n 0x71564	@ 0007155a 03d1
.org 0x7155c
	ldrb r0, [r6, #14]	@ 0007155c b07b
.org 0x7155e
	adds r0, #1	@ 0007155e 0130
.org 0x71560
	strb r0, [r6, #14]	@ 00071560 b073
.org 0x71562
	strb r1, [r6, #15]	@ 00071562 f173
.org 0x71564
	add sp, #4	@ 00071564 01b0
.org 0x71566
	pop {r4, r5, r6}	@ 00071566 70bc
.org 0x71568
	pop {r0}	@ 00071568 01bc
.org 0x7156a
	bx r0	@ 0007156a 0047
