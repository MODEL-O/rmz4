@ FUN_080e5450  entry 0x080e5450  size 238
.thumb
.org 0xe5450
FUN_080e5450:
	push {r4, r5, r6, r7, lr}	@ 000e5450 f0b5
.org 0xe5452
	sub sp, #8	@ 000e5452 82b0
.org 0xe5454
	adds r5, r0, #0	@ 000e5454 051c
.org 0xe5456
	ldrb r0, [r5, #17]	@ 000e5456 687c
.org 0xe5458
	cmp r0, #0	@ 000e5458 0028
.org 0xe545a
	bne.n 0xe549c	@ 000e545a 1fd1
.org 0xe545c
	ldr r0, [r5, #84]	@ 000e545c 686d
.org 0xe545e
	str r0, [sp, #0]	@ 000e545e 0090
.org 0xe5460
	ldr r0, [r5, #88]	@ 000e5460 a86d
.org 0xe5462
	ldr r1, [pc, #220]	@ 000e5462 3749
.org 0xe5464
	adds r0, r0, r1	@ 000e5464 4018
.org 0xe5466
	str r0, [sp, #4]	@ 000e5466 0190
.org 0xe5468
	movs r0, #1	@ 000e5468 0120
.org 0xe546a
	mov r1, sp	@ 000e546a 6946
.org 0xe546c
	bl 0xd0c88	@ 000e546c ebf70cfc
.org 0xe5470
	movs r0, #42	@ 000e5470 2a20
.org 0xe5472
	bl 0x2b10	@ 000e5472 1df74dfb
.org 0xe5476
	movs r0, #1	@ 000e5476 0120
.org 0xe5478
	strb r0, [r5, #17]	@ 000e5478 6874
.org 0xe547a
	adds r4, r5, #0	@ 000e547a 2c1c
.org 0xe547c
	adds r4, #84	@ 000e547c 5434
.org 0xe547e
	adds r0, r4, #0	@ 000e547e 201c
.org 0xe5480
	movs r1, #1	@ 000e5480 0121
.org 0xe5482
	movs r2, #2	@ 000e5482 0222
.org 0xe5484
	bl 0xe52b4	@ 000e5484 fff716ff
.org 0xe5488
	adds r0, r4, #0	@ 000e5488 201c
.org 0xe548a
	movs r1, #1	@ 000e548a 0121
.org 0xe548c
	movs r2, #3	@ 000e548c 0322
.org 0xe548e
	bl 0xe52b4	@ 000e548e fff711ff
.org 0xe5492
	adds r0, r4, #0	@ 000e5492 201c
.org 0xe5494
	movs r1, #1	@ 000e5494 0121
.org 0xe5496
	movs r2, #4	@ 000e5496 0422
.org 0xe5498
	bl 0xe52b4	@ 000e5498 fff70cff
.org 0xe549c
	ldr r0, [pc, #164]	@ 000e549c 2948
.org 0xe549e
	ldrb r1, [r5, #17]	@ 000e549e 697c
.org 0xe54a0
	subs r1, #1	@ 000e54a0 0139
.org 0xe54a2
	lsls r1, r1, #2	@ 000e54a2 8900
.org 0xe54a4
	adds r1, r1, r0	@ 000e54a4 0918
.org 0xe54a6
	ldr r3, [pc, #160]	@ 000e54a6 284b
.org 0xe54a8
	ldr r0, [r3, #0]	@ 000e54a8 1868
.org 0xe54aa
	ldr r2, [pc, #160]	@ 000e54aa 284a
.org 0xe54ac
	mov ip, r2	@ 000e54ac 9446
.org 0xe54ae
	mov r2, ip	@ 000e54ae 6246
.org 0xe54b0
	muls r2, r0	@ 000e54b0 4243
.org 0xe54b2
	adds r0, r2, #0	@ 000e54b2 101c
.org 0xe54b4
	ldr r7, [pc, #152]	@ 000e54b4 264f
.org 0xe54b6
	adds r0, r0, r7	@ 000e54b6 c019
.org 0xe54b8
	lsls r0, r0, #1	@ 000e54b8 4000
.org 0xe54ba
	lsrs r2, r0, #1	@ 000e54ba 4208
.org 0xe54bc
	str r2, [r3, #0]	@ 000e54bc 1a60
.org 0xe54be
	lsrs r0, r0, #17	@ 000e54be 400c
.org 0xe54c0
	movs r4, #255	@ 000e54c0 ff24
.org 0xe54c2
	ands r0, r4	@ 000e54c2 2040
.org 0xe54c4
	adds r0, #128	@ 000e54c4 8030
.org 0xe54c6
	ldr r1, [r1, #0]	@ 000e54c6 0968
.org 0xe54c8
	muls r0, r1	@ 000e54c8 4843
.org 0xe54ca
	ldrb r6, [r5, #17]	@ 000e54ca 6e7c
.org 0xe54cc
	cmp r0, #0	@ 000e54cc 0028
.org 0xe54ce
	bge.n 0xe54d2	@ 000e54ce 00da
.org 0xe54d0
	adds r0, #255	@ 000e54d0 ff30
.org 0xe54d2
	asrs r0, r0, #8	@ 000e54d2 0012
.org 0xe54d4
	str r0, [r5, #92]	@ 000e54d4 e865
.org 0xe54d6
	mov r0, ip	@ 000e54d6 6046
.org 0xe54d8
	muls r0, r2	@ 000e54d8 5043
.org 0xe54da
	adds r0, r0, r7	@ 000e54da c019
.org 0xe54dc
	lsls r0, r0, #1	@ 000e54dc 4000
.org 0xe54de
	lsrs r1, r0, #1	@ 000e54de 4108
.org 0xe54e0
	str r1, [r3, #0]	@ 000e54e0 1960
.org 0xe54e2
	lsrs r0, r0, #17	@ 000e54e2 400c
.org 0xe54e4
	ands r0, r4	@ 000e54e4 2040
.org 0xe54e6
	movs r1, #128	@ 000e54e6 8021
.org 0xe54e8
	lsls r1, r1, #2	@ 000e54e8 8900
.org 0xe54ea
	adds r0, r0, r1	@ 000e54ea 4018
.org 0xe54ec
	lsls r0, r0, #8	@ 000e54ec 0002
.org 0xe54ee
	negs r0, r0	@ 000e54ee 4042
.org 0xe54f0
	cmp r0, #0	@ 000e54f0 0028
.org 0xe54f2
	bge.n 0xe54f6	@ 000e54f2 00da
.org 0xe54f4
	adds r0, #255	@ 000e54f4 ff30
.org 0xe54f6
	asrs r0, r0, #8	@ 000e54f6 0012
.org 0xe54f8
	str r0, [r5, #96]	@ 000e54f8 2866
.org 0xe54fa
	ldr r2, [pc, #88]	@ 000e54fa 164a
.org 0xe54fc
	subs r0, r6, #1	@ 000e54fc 701e
.org 0xe54fe
	lsls r0, r0, #3	@ 000e54fe c000
.org 0xe5500
	adds r0, r0, r2	@ 000e5500 8018
.org 0xe5502
	ldr r1, [r0, #0]	@ 000e5502 0168
.org 0xe5504
	lsls r1, r1, #8	@ 000e5504 0902
.org 0xe5506
	ldr r0, [r5, #84]	@ 000e5506 686d
.org 0xe5508
	adds r0, r0, r1	@ 000e5508 4018
.org 0xe550a
	str r0, [r5, #84]	@ 000e550a 6865
.org 0xe550c
	ldrb r0, [r5, #17]	@ 000e550c 687c
.org 0xe550e
	subs r0, #1	@ 000e550e 0138
.org 0xe5510
	lsls r0, r0, #3	@ 000e5510 c000
.org 0xe5512
	adds r2, #4	@ 000e5512 0432
.org 0xe5514
	adds r0, r0, r2	@ 000e5514 8018
.org 0xe5516
	ldr r1, [r0, #0]	@ 000e5516 0168
.org 0xe5518
	lsls r1, r1, #8	@ 000e5518 0902
.org 0xe551a
	ldr r0, [r5, #88]	@ 000e551a a86d
.org 0xe551c
	adds r0, r0, r1	@ 000e551c 4018
.org 0xe551e
	str r0, [r5, #88]	@ 000e551e a865
.org 0xe5520
	ldr r1, [pc, #52]	@ 000e5520 0d49
.org 0xe5522
	ldrb r0, [r5, #17]	@ 000e5522 687c
.org 0xe5524
	subs r0, #1	@ 000e5524 0138
.org 0xe5526
	lsls r0, r0, #1	@ 000e5526 4000
.org 0xe5528
	adds r0, r0, r1	@ 000e5528 4018
.org 0xe552a
	ldrh r1, [r0, #0]	@ 000e552a 0188
.org 0xe552c
	adds r0, r5, #0	@ 000e552c 281c
.org 0xe552e
	bl 0x1cf00	@ 000e552e 37f7e7fc
.org 0xe5532
	movs r0, #1	@ 000e5532 0120
.org 0xe5534
	strb r0, [r5, #13]	@ 000e5534 6873
.org 0xe5536
	add sp, #8	@ 000e5536 02b0
.org 0xe5538
	pop {r4, r5, r6, r7}	@ 000e5538 f0bc
.org 0xe553a
	pop {r0}	@ 000e553a 01bc
.org 0xe553c
	bx r0	@ 000e553c 0047
