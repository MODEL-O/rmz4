@ FUN_0803e35c  entry 0x0803e35c  size 256
.thumb
.org 0x3e35c
FUN_0803e35c:
	push {r4, r5, r6, r7, lr}	@ 0003e35c f0b5
.org 0x3e35e
	mov r7, r8	@ 0003e35e 4746
.org 0x3e360
	push {r7}	@ 0003e360 80b4
.org 0x3e362
	sub sp, #16	@ 0003e362 84b0
.org 0x3e364
	adds r6, r0, #0	@ 0003e364 061c
.org 0x3e366
	adds r0, #180	@ 0003e366 b430
.org 0x3e368
	ldr r7, [r0, #0]	@ 0003e368 0768
.org 0x3e36a
	ldrb r0, [r6, #13]	@ 0003e36a 707b
.org 0x3e36c
	cmp r0, #1	@ 0003e36c 0128
.org 0x3e36e
	beq.n 0x3e3fc	@ 0003e36e 45d0
.org 0x3e370
	cmp r0, #1	@ 0003e370 0128
.org 0x3e372
	bgt.n 0x3e37a	@ 0003e372 02dc
.org 0x3e374
	cmp r0, #0	@ 0003e374 0028
.org 0x3e376
	beq.n 0x3e384	@ 0003e376 05d0
.org 0x3e378
	b.n 0x3e454	@ 0003e378 6ce0
.org 0x3e37a
	cmp r0, #2	@ 0003e37a 0228
.org 0x3e37c
	beq.n 0x3e41c	@ 0003e37c 4ed0
.org 0x3e37e
	cmp r0, #3	@ 0003e37e 0328
.org 0x3e380
	beq.n 0x3e438	@ 0003e380 5ad0
.org 0x3e382
	b.n 0x3e454	@ 0003e382 67e0
.org 0x3e384
	ldr r1, [pc, #144]	@ 0003e384 2449
.org 0x3e386
	adds r0, r6, #0	@ 0003e386 301c
.org 0x3e388
	bl 0x1cf00	@ 0003e388 def7bafd
.org 0x3e38c
	adds r5, r7, #0	@ 0003e38c 3d1c
.org 0x3e38e
	adds r5, #180	@ 0003e38e b435
.org 0x3e390
	adds r2, r7, #0	@ 0003e390 3a1c
.org 0x3e392
	adds r2, #230	@ 0003e392 e632
.org 0x3e394
	ldrb r0, [r2, #0]	@ 0003e394 1078
.org 0x3e396
	adds r1, r0, #0	@ 0003e396 011c
.org 0x3e398
	cmp r1, #0	@ 0003e398 0029
.org 0x3e39a
	beq.n 0x3e3e8	@ 0003e39a 25d0
.org 0x3e39c
	cmp r1, #255	@ 0003e39c ff29
.org 0x3e39e
	beq.n 0x3e3a4	@ 0003e39e 01d0
.org 0x3e3a0
	subs r0, #1	@ 0003e3a0 0138
.org 0x3e3a2
	strb r0, [r2, #0]	@ 0003e3a2 1070
.org 0x3e3a4
	ldrb r3, [r5, #14]	@ 0003e3a4 ab7b
.org 0x3e3a6
	movs r0, #192	@ 0003e3a6 c020
.org 0x3e3a8
	lsls r0, r0, #3	@ 0003e3a8 c000
.org 0x3e3aa
	mov r8, r0	@ 0003e3aa 8046
.org 0x3e3ac
	str r0, [sp, #0]	@ 0003e3ac 0090
.org 0x3e3ae
	movs r0, #48	@ 0003e3ae 3020
.org 0x3e3b0
	str r0, [sp, #4]	@ 0003e3b0 0190
.org 0x3e3b2
	movs r4, #2	@ 0003e3b2 0224
.org 0x3e3b4
	str r4, [sp, #8]	@ 0003e3b4 0294
.org 0x3e3b6
	ldrb r0, [r6, #19]	@ 0003e3b6 f07c
.org 0x3e3b8
	str r0, [sp, #12]	@ 0003e3b8 0390
.org 0x3e3ba
	adds r0, r7, #0	@ 0003e3ba 381c
.org 0x3e3bc
	adds r1, r6, #0	@ 0003e3bc 311c
.org 0x3e3be
	movs r2, #0	@ 0003e3be 0022
.org 0x3e3c0
	bl 0x3f000	@ 0003e3c0 00f01efe
.org 0x3e3c4
	ldr r0, [r6, #96]	@ 0003e3c4 306e
.org 0x3e3c6
	movs r1, #176	@ 0003e3c6 b021
.org 0x3e3c8
	lsls r1, r1, #4	@ 0003e3c8 0901
.org 0x3e3ca
	adds r0, r0, r1	@ 0003e3ca 4018
.org 0x3e3cc
	str r0, [r6, #96]	@ 0003e3cc 3066
.org 0x3e3ce
	ldrb r3, [r5, #14]	@ 0003e3ce ab7b
.org 0x3e3d0
	mov r0, r8	@ 0003e3d0 4046
.org 0x3e3d2
	str r0, [sp, #0]	@ 0003e3d2 0090
.org 0x3e3d4
	movs r0, #80	@ 0003e3d4 5020
.org 0x3e3d6
	str r0, [sp, #4]	@ 0003e3d6 0190
.org 0x3e3d8
	str r4, [sp, #8]	@ 0003e3d8 0294
.org 0x3e3da
	ldrb r0, [r6, #19]	@ 0003e3da f07c
.org 0x3e3dc
	str r0, [sp, #12]	@ 0003e3dc 0390
.org 0x3e3de
	adds r0, r7, #0	@ 0003e3de 381c
.org 0x3e3e0
	adds r1, r6, #0	@ 0003e3e0 311c
.org 0x3e3e2
	movs r2, #0	@ 0003e3e2 0022
.org 0x3e3e4
	bl 0x3f000	@ 0003e3e4 00f00cfe
.org 0x3e3e8
	movs r0, #170	@ 0003e3e8 aa20
.org 0x3e3ea
	lsls r0, r0, #1	@ 0003e3ea 4000
.org 0x3e3ec
	adds r1, r7, r0	@ 0003e3ec 3918
.org 0x3e3ee
	movs r0, #0	@ 0003e3ee 0020
.org 0x3e3f0
	strb r0, [r1, #0]	@ 0003e3f0 0870
.org 0x3e3f2
	movs r0, #2	@ 0003e3f2 0220
.org 0x3e3f4
	strb r0, [r6, #18]	@ 0003e3f4 b074
.org 0x3e3f6
	ldrb r0, [r6, #13]	@ 0003e3f6 707b
.org 0x3e3f8
	adds r0, #1	@ 0003e3f8 0130
.org 0x3e3fa
	strb r0, [r6, #13]	@ 0003e3fa 7073
.org 0x3e3fc
	ldrb r0, [r6, #18]	@ 0003e3fc b07c
.org 0x3e3fe
	subs r0, #1	@ 0003e3fe 0138
.org 0x3e400
	strb r0, [r6, #18]	@ 0003e400 b074
.org 0x3e402
	lsls r0, r0, #24	@ 0003e402 0006
.org 0x3e404
	cmp r0, #0	@ 0003e404 0028
.org 0x3e406
	bne.n 0x3e454	@ 0003e406 25d1
.org 0x3e408
	movs r0, #170	@ 0003e408 aa20
.org 0x3e40a
	lsls r0, r0, #1	@ 0003e40a 4000
.org 0x3e40c
	adds r1, r7, r0	@ 0003e40c 3918
.org 0x3e40e
	movs r0, #1	@ 0003e40e 0120
.org 0x3e410
	strb r0, [r1, #0]	@ 0003e410 0870
.org 0x3e412
	movs r0, #4	@ 0003e412 0420
.org 0x3e414
	strb r0, [r6, #18]	@ 0003e414 b074
.org 0x3e416
	b.n 0x3e44e	@ 0003e416 1ae0
.org 0x3e418
	.byte 0x02,0x81,0x00,0x00	@ 0003e418 data
.org 0x3e41c
	ldrb r0, [r6, #18]	@ 0003e41c b07c
.org 0x3e41e
	subs r0, #1	@ 0003e41e 0138
.org 0x3e420
	strb r0, [r6, #18]	@ 0003e420 b074
.org 0x3e422
	lsls r0, r0, #24	@ 0003e422 0006
.org 0x3e424
	cmp r0, #0	@ 0003e424 0028
.org 0x3e426
	bne.n 0x3e454	@ 0003e426 15d1
.org 0x3e428
	movs r0, #170	@ 0003e428 aa20
.org 0x3e42a
	lsls r0, r0, #1	@ 0003e42a 4000
.org 0x3e42c
	adds r1, r7, r0	@ 0003e42c 3918
.org 0x3e42e
	movs r0, #3	@ 0003e42e 0320
.org 0x3e430
	strb r0, [r1, #0]	@ 0003e430 0870
.org 0x3e432
	movs r0, #16	@ 0003e432 1020
.org 0x3e434
	strb r0, [r6, #18]	@ 0003e434 b074
.org 0x3e436
	b.n 0x3e44e	@ 0003e436 0ae0
.org 0x3e438
	ldrb r0, [r6, #18]	@ 0003e438 b07c
.org 0x3e43a
	subs r0, #1	@ 0003e43a 0138
.org 0x3e43c
	strb r0, [r6, #18]	@ 0003e43c b074
.org 0x3e43e
	lsls r0, r0, #24	@ 0003e43e 0006
.org 0x3e440
	cmp r0, #0	@ 0003e440 0028
.org 0x3e442
	bne.n 0x3e454	@ 0003e442 07d1
.org 0x3e444
	movs r0, #170	@ 0003e444 aa20
.org 0x3e446
	lsls r0, r0, #1	@ 0003e446 4000
.org 0x3e448
	adds r1, r7, r0	@ 0003e448 3918
.org 0x3e44a
	movs r0, #4	@ 0003e44a 0420
.org 0x3e44c
	strb r0, [r1, #0]	@ 0003e44c 0870
.org 0x3e44e
	ldrb r0, [r6, #13]	@ 0003e44e 707b
.org 0x3e450
	adds r0, #1	@ 0003e450 0130
.org 0x3e452
	strb r0, [r6, #13]	@ 0003e452 7073
.org 0x3e454
	add sp, #16	@ 0003e454 04b0
.org 0x3e456
	pop {r3}	@ 0003e456 08bc
.org 0x3e458
	mov r8, r3	@ 0003e458 9846
.org 0x3e45a
	pop {r4, r5, r6, r7}	@ 0003e45a f0bc
