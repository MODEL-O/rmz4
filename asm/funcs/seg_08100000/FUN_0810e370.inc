@ FUN_0810e370  entry 0x0810e370  size 252
.thumb
.org 0x10e370
FUN_0810e370:
	push {r4, r5, r6, r7, lr}	@ 0010e370 f0b5
.org 0x10e372
	mov r7, r9	@ 0010e372 4f46
.org 0x10e374
	mov r6, r8	@ 0010e374 4646
.org 0x10e376
	push {r6, r7}	@ 0010e376 c0b4
.org 0x10e378
	ldr r7, [r0, #0]	@ 0010e378 0768
.org 0x10e37a
	ldr r3, [pc, #240]	@ 0010e37a 3c4b
.org 0x10e37c
	ldrh r2, [r3, #0]	@ 0010e37c 1a88
.org 0x10e37e
	movs r4, #128	@ 0010e37e 8024
.org 0x10e380
	lsls r4, r4, #1	@ 0010e380 6400
.org 0x10e382
	adds r1, r4, #0	@ 0010e382 211c
.org 0x10e384
	orrs r1, r2	@ 0010e384 1143
.org 0x10e386
	strh r1, [r3, #0]	@ 0010e386 1980
.org 0x10e388
	ldr r0, [r0, #16]	@ 0010e388 0069
.org 0x10e38a
	ldr r0, [r0, #0]	@ 0010e38a 0068
.org 0x10e38c
	mov r8, r0	@ 0010e38c 8046
.org 0x10e38e
	movs r1, #150	@ 0010e38e 9621
.org 0x10e390
	lsls r1, r1, #2	@ 0010e390 8900
.org 0x10e392
	bl 0x128fb8	@ 0010e392 1af011fe
.org 0x10e396
	adds r2, r7, #0	@ 0010e396 3a1c
.org 0x10e398
	adds r2, #104	@ 0010e398 6832
.org 0x10e39a
	lsls r0, r0, #1	@ 0010e39a 4000
.org 0x10e39c
	movs r1, #156	@ 0010e39c 9c21
.org 0x10e39e
	lsls r1, r1, #5	@ 0010e39e 4901
.org 0x10e3a0
	adds r6, r1, #0	@ 0010e3a0 0e1c
.org 0x10e3a2
	adds r1, r0, r6	@ 0010e3a2 8119
.org 0x10e3a4
	strh r1, [r2, #0]	@ 0010e3a4 1180
.org 0x10e3a6
	adds r2, #2	@ 0010e3a6 0232
.org 0x10e3a8
	ldr r4, [pc, #196]	@ 0010e3a8 314c
.org 0x10e3aa
	adds r5, r4, #0	@ 0010e3aa 251c
.org 0x10e3ac
	adds r1, r0, r5	@ 0010e3ac 4119
.org 0x10e3ae
	strh r1, [r2, #0]	@ 0010e3ae 1180
.org 0x10e3b0
	adds r2, #62	@ 0010e3b0 3e32
.org 0x10e3b2
	ldr r1, [pc, #192]	@ 0010e3b2 3049
.org 0x10e3b4
	adds r4, r1, #0	@ 0010e3b4 0c1c
.org 0x10e3b6
	adds r1, r0, r4	@ 0010e3b6 0119
.org 0x10e3b8
	strh r1, [r2, #0]	@ 0010e3b8 1180
.org 0x10e3ba
	adds r1, r7, #0	@ 0010e3ba 391c
.org 0x10e3bc
	adds r1, #170	@ 0010e3bc aa31
.org 0x10e3be
	ldr r2, [pc, #184]	@ 0010e3be 2e4a
.org 0x10e3c0
	mov r9, r2	@ 0010e3c0 9146
.org 0x10e3c2
	add r0, r9	@ 0010e3c2 4844
.org 0x10e3c4
	strh r0, [r1, #0]	@ 0010e3c4 0880
.org 0x10e3c6
	mov r0, r8	@ 0010e3c6 4046
.org 0x10e3c8
	movs r1, #60	@ 0010e3c8 3c21
.org 0x10e3ca
	bl 0x128fb8	@ 0010e3ca 1af0f5fd
.org 0x10e3ce
	movs r1, #10	@ 0010e3ce 0a21
.org 0x10e3d0
	bl 0x129050	@ 0010e3d0 1af03efe
.org 0x10e3d4
	adds r2, r7, #0	@ 0010e3d4 3a1c
.org 0x10e3d6
	adds r2, #108	@ 0010e3d6 6c32
.org 0x10e3d8
	lsls r0, r0, #1	@ 0010e3d8 4000
.org 0x10e3da
	adds r1, r0, r6	@ 0010e3da 8119
.org 0x10e3dc
	strh r1, [r2, #0]	@ 0010e3dc 1180
.org 0x10e3de
	adds r2, #2	@ 0010e3de 0232
.org 0x10e3e0
	adds r1, r0, r5	@ 0010e3e0 4119
.org 0x10e3e2
	strh r1, [r2, #0]	@ 0010e3e2 1180
.org 0x10e3e4
	adds r2, #62	@ 0010e3e4 3e32
.org 0x10e3e6
	adds r1, r0, r4	@ 0010e3e6 0119
.org 0x10e3e8
	strh r1, [r2, #0]	@ 0010e3e8 1180
.org 0x10e3ea
	adds r1, r7, #0	@ 0010e3ea 391c
.org 0x10e3ec
	adds r1, #174	@ 0010e3ec ae31
.org 0x10e3ee
	add r0, r9	@ 0010e3ee 4844
.org 0x10e3f0
	strh r0, [r1, #0]	@ 0010e3f0 0880
.org 0x10e3f2
	subs r1, #62	@ 0010e3f2 3e39
.org 0x10e3f4
	ldr r2, [pc, #132]	@ 0010e3f4 214a
.org 0x10e3f6
	adds r0, r2, #0	@ 0010e3f6 101c
.org 0x10e3f8
	strh r0, [r1, #0]	@ 0010e3f8 0880
.org 0x10e3fa
	adds r1, #64	@ 0010e3fa 4031
.org 0x10e3fc
	adds r2, #21	@ 0010e3fc 1532
.org 0x10e3fe
	adds r0, r2, #0	@ 0010e3fe 101c
.org 0x10e400
	strh r0, [r1, #0]	@ 0010e400 0880
.org 0x10e402
	mov r0, r8	@ 0010e402 4046
.org 0x10e404
	movs r1, #60	@ 0010e404 3c21
.org 0x10e406
	bl 0x129050	@ 0010e406 1af023fe
.org 0x10e40a
	mov r8, r0	@ 0010e40a 8046
.org 0x10e40c
	movs r1, #6	@ 0010e40c 0621
.org 0x10e40e
	bl 0x128fb8	@ 0010e40e 1af0d3fd
.org 0x10e412
	adds r2, r7, #0	@ 0010e412 3a1c
.org 0x10e414
	adds r2, #114	@ 0010e414 7232
.org 0x10e416
	lsls r0, r0, #1	@ 0010e416 4000
.org 0x10e418
	adds r1, r0, r6	@ 0010e418 8119
.org 0x10e41a
	strh r1, [r2, #0]	@ 0010e41a 1180
.org 0x10e41c
	adds r2, #2	@ 0010e41c 0232
.org 0x10e41e
	adds r1, r0, r5	@ 0010e41e 4119
.org 0x10e420
	strh r1, [r2, #0]	@ 0010e420 1180
.org 0x10e422
	adds r2, #62	@ 0010e422 3e32
.org 0x10e424
	adds r1, r0, r4	@ 0010e424 0119
.org 0x10e426
	strh r1, [r2, #0]	@ 0010e426 1180
.org 0x10e428
	adds r1, r7, #0	@ 0010e428 391c
.org 0x10e42a
	adds r1, #180	@ 0010e42a b431
.org 0x10e42c
	add r0, r9	@ 0010e42c 4844
.org 0x10e42e
	strh r0, [r1, #0]	@ 0010e42e 0880
.org 0x10e430
	movs r0, #100	@ 0010e430 6420
.org 0x10e432
	mov r1, r8	@ 0010e432 4146
.org 0x10e434
	muls r1, r0	@ 0010e434 4143
.org 0x10e436
	adds r0, r1, #0	@ 0010e436 081c
.org 0x10e438
	movs r1, #60	@ 0010e438 3c21
.org 0x10e43a
	bl 0x128fb8	@ 0010e43a 1af0bdfd
.org 0x10e43e
	movs r1, #10	@ 0010e43e 0a21
.org 0x10e440
	bl 0x129050	@ 0010e440 1af006fe
.org 0x10e444
	adds r1, r7, #0	@ 0010e444 391c
.org 0x10e446
	adds r1, #118	@ 0010e446 7631
.org 0x10e448
	lsls r0, r0, #1	@ 0010e448 4000
.org 0x10e44a
	adds r6, r0, r6	@ 0010e44a 8619
.org 0x10e44c
	strh r6, [r1, #0]	@ 0010e44c 0e80
.org 0x10e44e
	adds r1, #2	@ 0010e44e 0231
.org 0x10e450
	adds r5, r0, r5	@ 0010e450 4519
.org 0x10e452
	strh r5, [r1, #0]	@ 0010e452 0d80
.org 0x10e454
	adds r1, #62	@ 0010e454 3e31
.org 0x10e456
	adds r4, r0, r4	@ 0010e456 0419
.org 0x10e458
	strh r4, [r1, #0]	@ 0010e458 0c80
.org 0x10e45a
	adds r1, #2	@ 0010e45a 0231
.org 0x10e45c
	add r0, r9	@ 0010e45c 4844
.org 0x10e45e
	strh r0, [r1, #0]	@ 0010e45e 0880
.org 0x10e460
	pop {r3, r4}	@ 0010e460 18bc
.org 0x10e462
	mov r8, r3	@ 0010e462 9846
.org 0x10e464
	mov r9, r4	@ 0010e464 a146
.org 0x10e466
	pop {r4, r5, r6, r7}	@ 0010e466 f0bc
.org 0x10e468
	pop {r0}	@ 0010e468 01bc
.org 0x10e46a
	bx r0	@ 0010e46a 0047
