@ FUN_0805e3e4  entry 0x0805e3e4  size 136
.thumb
.org 0x5e3e4
FUN_0805e3e4:
	push {r4, r5, lr}	@ 0005e3e4 30b5
.org 0x5e3e6
	adds r5, r0, #0	@ 0005e3e6 051c
.org 0x5e3e8
	ldrb r0, [r5, #15]	@ 0005e3e8 e87b
.org 0x5e3ea
	cmp r0, #0	@ 0005e3ea 0028
.org 0x5e3ec
	bne.n 0x5e3fc	@ 0005e3ec 06d1
.org 0x5e3ee
	adds r0, r5, #0	@ 0005e3ee 281c
.org 0x5e3f0
	movs r1, #31	@ 0005e3f0 1f21
.org 0x5e3f2
	bl 0x5ee6c	@ 0005e3f2 00f03bfd
.org 0x5e3f6
	ldrb r0, [r5, #15]	@ 0005e3f6 e87b
.org 0x5e3f8
	adds r0, #1	@ 0005e3f8 0130
.org 0x5e3fa
	strb r0, [r5, #15]	@ 0005e3fa e873
.org 0x5e3fc
	adds r0, r5, #0	@ 0005e3fc 281c
.org 0x5e3fe
	bl 0x1cff0	@ 0005e3fe bef7f7fd
.org 0x5e402
	adds r0, r5, #0	@ 0005e402 281c
.org 0x5e404
	adds r0, #116	@ 0005e404 7430
.org 0x5e406
	ldr r4, [pc, #100]	@ 0005e406 194c
.org 0x5e408
	ldr r3, [pc, #100]	@ 0005e408 194b
.org 0x5e40a
	adds r1, r5, #0	@ 0005e40a 291c
.org 0x5e40c
	adds r1, #184	@ 0005e40c b831
.org 0x5e40e
	ldrb r2, [r1, #0]	@ 0005e40e 0a78
.org 0x5e410
	lsls r1, r2, #1	@ 0005e410 5100
.org 0x5e412
	adds r1, r1, r3	@ 0005e412 c918
.org 0x5e414
	ldrh r1, [r1, #0]	@ 0005e414 0988
.org 0x5e416
	lsls r1, r1, #2	@ 0005e416 8900
.org 0x5e418
	adds r1, r1, r4	@ 0005e418 0919
.org 0x5e41a
	adds r3, r5, #0	@ 0005e41a 2b1c
.org 0x5e41c
	adds r3, #113	@ 0005e41c 7133
.org 0x5e41e
	movs r4, #0	@ 0005e41e 0024
.org 0x5e420
	ldrsb r4, [r3, r4]	@ 0005e420 1c57
.org 0x5e422
	ldr r1, [r1, #0]	@ 0005e422 0968
.org 0x5e424
	lsls r3, r4, #2	@ 0005e424 a300
.org 0x5e426
	adds r3, r3, r1	@ 0005e426 5b18
.org 0x5e428
	ldr r1, [pc, #72]	@ 0005e428 1249
.org 0x5e42a
	lsls r2, r2, #2	@ 0005e42a 9200
.org 0x5e42c
	adds r2, r2, r1	@ 0005e42c 5218
.org 0x5e42e
	ldr r1, [r2, #0]	@ 0005e42e 1168
.org 0x5e430
	adds r1, r1, r4	@ 0005e430 0919
.org 0x5e432
	ldrb r1, [r1, #0]	@ 0005e432 0978
.org 0x5e434
	lsls r2, r1, #1	@ 0005e434 4a00
.org 0x5e436
	adds r2, r2, r1	@ 0005e436 5218
.org 0x5e438
	lsls r2, r2, #3	@ 0005e438 d200
.org 0x5e43a
	ldr r1, [r3, #0]	@ 0005e43a 1968
.org 0x5e43c
	adds r1, r1, r2	@ 0005e43c 8918
.org 0x5e43e
	bl 0x5784	@ 0005e43e a7f7a1f9
.org 0x5e442
	adds r1, r5, #0	@ 0005e442 291c
.org 0x5e444
	adds r1, #204	@ 0005e444 cc31
.org 0x5e446
	ldr r0, [r1, #0]	@ 0005e446 0868
.org 0x5e448
	cmp r0, #0	@ 0005e448 0028
.org 0x5e44a
	beq.n 0x5e456	@ 0005e44a 04d0
.org 0x5e44c
	ldrb r0, [r0, #12]	@ 0005e44c 007b
.org 0x5e44e
	cmp r0, #1	@ 0005e44e 0128
.org 0x5e450
	bls.n 0x5e456	@ 0005e450 01d9
.org 0x5e452
	movs r0, #0	@ 0005e452 0020
.org 0x5e454
	str r0, [r1, #0]	@ 0005e454 0860
.org 0x5e456
	adds r0, r5, #0	@ 0005e456 281c
.org 0x5e458
	adds r0, #115	@ 0005e458 7330
.org 0x5e45a
	ldrb r1, [r0, #0]	@ 0005e45a 0178
.org 0x5e45c
	cmp r1, #3	@ 0005e45c 0329
.org 0x5e45e
	bne.n 0x5e466	@ 0005e45e 02d1
.org 0x5e460
	movs r0, #0	@ 0005e460 0020
.org 0x5e462
	strb r1, [r5, #14]	@ 0005e462 a973
.org 0x5e464
	strb r0, [r5, #15]	@ 0005e464 e873
.org 0x5e466
	pop {r4, r5}	@ 0005e466 30bc
.org 0x5e468
	pop {r0}	@ 0005e468 01bc
.org 0x5e46a
	bx r0	@ 0005e46a 0047
