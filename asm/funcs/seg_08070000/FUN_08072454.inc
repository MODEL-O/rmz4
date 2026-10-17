@ FUN_08072454  entry 0x08072454  size 202
.thumb
.org 0x72454
FUN_08072454:
	push {r4, r5, r6, r7, lr}	@ 00072454 f0b5
.org 0x72456
	sub sp, #8	@ 00072456 82b0
.org 0x72458
	adds r6, r0, #0	@ 00072458 061c
.org 0x7245a
	ldrb r0, [r6, #10]	@ 0007245a b07a
.org 0x7245c
	lsrs r7, r0, #4	@ 0007245c 0709
.org 0x7245e
	movs r0, #1	@ 0007245e 0120
.org 0x72460
	ands r7, r0	@ 00072460 0740
.org 0x72462
	ldrb r0, [r6, #15]	@ 00072462 f07b
.org 0x72464
	cmp r0, #0	@ 00072464 0028
.org 0x72466
	bne.n 0x72480	@ 00072466 0bd1
.org 0x72468
	ldr r0, [pc, #180]	@ 00072468 2d48
.org 0x7246a
	bl 0x2b10	@ 0007246a 90f751fb
.org 0x7246e
	adds r0, r6, #0	@ 0007246e 301c
.org 0x72470
	movs r1, #17	@ 00072470 1121
.org 0x72472
	bl 0x736c4	@ 00072472 01f027f9
.org 0x72476
	movs r0, #48	@ 00072476 3020
.org 0x72478
	strb r0, [r6, #18]	@ 00072478 b074
.org 0x7247a
	ldrb r0, [r6, #15]	@ 0007247a f07b
.org 0x7247c
	adds r0, #1	@ 0007247c 0130
.org 0x7247e
	strb r0, [r6, #15]	@ 0007247e f073
.org 0x72480
	adds r0, r6, #0	@ 00072480 301c
.org 0x72482
	bl 0x1cff0	@ 00072482 aaf7b5fd
.org 0x72486
	adds r0, r6, #0	@ 00072486 301c
.org 0x72488
	adds r0, #116	@ 00072488 7430
.org 0x7248a
	ldr r4, [pc, #152]	@ 0007248a 264c
.org 0x7248c
	ldr r3, [pc, #152]	@ 0007248c 264b
.org 0x7248e
	adds r1, r6, #0	@ 0007248e 311c
.org 0x72490
	adds r1, #184	@ 00072490 b831
.org 0x72492
	ldrb r2, [r1, #0]	@ 00072492 0a78
.org 0x72494
	lsls r1, r2, #1	@ 00072494 5100
.org 0x72496
	adds r1, r1, r3	@ 00072496 c918
.org 0x72498
	ldrh r1, [r1, #0]	@ 00072498 0988
.org 0x7249a
	lsls r1, r1, #2	@ 0007249a 8900
.org 0x7249c
	adds r1, r1, r4	@ 0007249c 0919
.org 0x7249e
	adds r3, r6, #0	@ 0007249e 331c
.org 0x724a0
	adds r3, #113	@ 000724a0 7133
.org 0x724a2
	movs r5, #0	@ 000724a2 0025
.org 0x724a4
	ldrsb r5, [r3, r5]	@ 000724a4 5d57
.org 0x724a6
	ldr r1, [r1, #0]	@ 000724a6 0968
.org 0x724a8
	lsls r3, r5, #2	@ 000724a8 ab00
.org 0x724aa
	adds r3, r3, r1	@ 000724aa 5b18
.org 0x724ac
	ldr r4, [pc, #124]	@ 000724ac 1f4c
.org 0x724ae
	adds r1, r6, #0	@ 000724ae 311c
.org 0x724b0
	adds r1, #185	@ 000724b0 b931
.org 0x724b2
	ldrb r1, [r1, #0]	@ 000724b2 0978
.org 0x724b4
	lsls r1, r1, #2	@ 000724b4 8900
.org 0x724b6
	adds r1, r1, r4	@ 000724b6 0919
.org 0x724b8
	ldr r1, [r1, #0]	@ 000724b8 0968
.org 0x724ba
	lsls r2, r2, #2	@ 000724ba 9200
.org 0x724bc
	adds r2, r2, r1	@ 000724bc 5218
.org 0x724be
	ldr r1, [r2, #0]	@ 000724be 1168
.org 0x724c0
	adds r1, r1, r5	@ 000724c0 4919
.org 0x724c2
	ldrb r1, [r1, #0]	@ 000724c2 0978
.org 0x724c4
	lsls r2, r1, #1	@ 000724c4 4a00
.org 0x724c6
	adds r2, r2, r1	@ 000724c6 5218
.org 0x724c8
	lsls r2, r2, #3	@ 000724c8 d200
.org 0x724ca
	ldr r1, [r3, #0]	@ 000724ca 1968
.org 0x724cc
	adds r1, r1, r2	@ 000724cc 8918
.org 0x724ce
	bl 0x5784	@ 000724ce 93f759f9
.org 0x724d2
	ldrb r0, [r6, #18]	@ 000724d2 b07c
.org 0x724d4
	cmp r0, #0	@ 000724d4 0028
.org 0x724d6
	beq.n 0x724dc	@ 000724d6 01d0
.org 0x724d8
	subs r0, #1	@ 000724d8 0138
.org 0x724da
	strb r0, [r6, #18]	@ 000724da b074
.org 0x724dc
	adds r0, r6, #0	@ 000724dc 301c
.org 0x724de
	bl 0x73a68	@ 000724de 01f0c3fa
.org 0x724e2
	ldrb r0, [r6, #18]	@ 000724e2 b07c
.org 0x724e4
	cmp r0, #8	@ 000724e4 0828
.org 0x724e6
	bne.n 0x72508	@ 000724e6 0fd1
.org 0x724e8
	lsls r0, r7, #1	@ 000724e8 7800
.org 0x724ea
	subs r0, #1	@ 000724ea 0138
.org 0x724ec
	lsls r0, r0, #12	@ 000724ec 0003
.org 0x724ee
	ldr r1, [r6, #84]	@ 000724ee 716d
.org 0x724f0
	subs r1, r1, r0	@ 000724f0 091a
.org 0x724f2
	str r1, [sp, #0]	@ 000724f2 0091
.org 0x724f4
	ldr r0, [r6, #88]	@ 000724f4 b06d
.org 0x724f6
	ldr r1, [pc, #56]	@ 000724f6 0e49
.org 0x724f8
	adds r0, r0, r1	@ 000724f8 4018
.org 0x724fa
	str r0, [sp, #4]	@ 000724fa 0190
.org 0x724fc
	adds r0, r6, #0	@ 000724fc 301c
.org 0x724fe
	mov r1, sp	@ 000724fe 6946
.org 0x72500
	movs r2, #0	@ 00072500 0022
.org 0x72502
	adds r3, r7, #0	@ 00072502 3b1c
.org 0x72504
	bl 0xaab48	@ 00072504 38f020fb
.org 0x72508
	ldrb r1, [r6, #18]	@ 00072508 b17c
.org 0x7250a
	cmp r1, #0	@ 0007250a 0029
.org 0x7250c
	bne.n 0x72516	@ 0007250c 03d1
.org 0x7250e
	ldrb r0, [r6, #14]	@ 0007250e b07b
.org 0x72510
	adds r0, #1	@ 00072510 0130
.org 0x72512
	strb r0, [r6, #14]	@ 00072512 b073
.org 0x72514
	strb r1, [r6, #15]	@ 00072514 f173
.org 0x72516
	add sp, #8	@ 00072516 02b0
.org 0x72518
	pop {r4, r5, r6, r7}	@ 00072518 f0bc
.org 0x7251a
	pop {r0}	@ 0007251a 01bc
.org 0x7251c
	bx r0	@ 0007251c 0047
