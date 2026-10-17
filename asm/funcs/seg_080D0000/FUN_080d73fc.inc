@ FUN_080d73fc  entry 0x080d73fc  size 130
.thumb
.org 0xd73fc
FUN_080d73fc:
	push {r4, r5, r6, r7, lr}	@ 000d73fc f0b5
.org 0xd73fe
	mov r7, sl	@ 000d73fe 5746
.org 0xd7400
	mov r6, r9	@ 000d7400 4e46
.org 0xd7402
	mov r5, r8	@ 000d7402 4546
.org 0xd7404
	push {r5, r6, r7}	@ 000d7404 e0b4
.org 0xd7406
	sub sp, #4	@ 000d7406 81b0
.org 0xd7408
	mov r9, r0	@ 000d7408 8146
.org 0xd740a
	adds r5, r1, #0	@ 000d740a 0d1c
.org 0xd740c
	mov r8, r2	@ 000d740c 9046
.org 0xd740e
	lsls r3, r3, #24	@ 000d740e 1b06
.org 0xd7410
	lsrs r7, r3, #24	@ 000d7410 1f0e
.org 0xd7412
	movs r4, #0	@ 000d7412 0024
.org 0xd7414
	cmp r4, r7	@ 000d7414 bc42
.org 0xd7416
	bge.n 0xd746e	@ 000d7416 2ada
.org 0xd7418
	movs r2, #0	@ 000d7418 0022
.org 0xd741a
	movs r6, #1	@ 000d741a 0126
.org 0xd741c
	ldr r0, [pc, #96]	@ 000d741c 1848
.org 0xd741e
	mov sl, r0	@ 000d741e 8246
.org 0xd7420
	ldr r0, [pc, #96]	@ 000d7420 1848
.org 0xd7422
	ldr r0, [r0, #0]	@ 000d7422 0068
.org 0xd7424
	str r2, [sp, #0]	@ 000d7424 0092
.org 0xd7426
	bl 0x5500	@ 000d7426 2ef76bf8
.org 0xd742a
	adds r1, r0, #0	@ 000d742a 011c
.org 0xd742c
	ldr r2, [sp, #0]	@ 000d742c 009a
.org 0xd742e
	cmp r1, #0	@ 000d742e 0029
.org 0xd7430
	beq.n 0xd7468	@ 000d7430 1ad0
.org 0xd7432
	adds r0, #37	@ 000d7432 2530
.org 0xd7434
	strb r6, [r0, #0]	@ 000d7434 0670
.org 0xd7436
	movs r0, #23	@ 000d7436 1720
.org 0xd7438
	strb r0, [r1, #9]	@ 000d7438 4872
.org 0xd743a
	mov r3, sl	@ 000d743a 5346
.org 0xd743c
	ldr r0, [r3, #92]	@ 000d743c d86d
.org 0xd743e
	ldr r0, [r0, #0]	@ 000d743e 0068
.org 0xd7440
	str r0, [r1, #20]	@ 000d7440 4861
.org 0xd7442
	strh r2, [r1, #32]	@ 000d7442 0a84
.org 0xd7444
	adds r0, r1, #0	@ 000d7444 081c
.org 0xd7446
	adds r0, #34	@ 000d7446 2230
.org 0xd7448
	strb r2, [r0, #0]	@ 000d7448 0270
.org 0xd744a
	strb r6, [r1, #16]	@ 000d744a 0e74
.org 0xd744c
	strb r4, [r1, #17]	@ 000d744c 4c74
.org 0xd744e
	mov r0, r9	@ 000d744e 4846
.org 0xd7450
	str r0, [r1, #40]	@ 000d7450 8862
.org 0xd7452
	mov r3, r8	@ 000d7452 4346
.org 0xd7454
	str r3, [r1, #116]	@ 000d7454 4b67
.org 0xd7456
	ldr r0, [r5, #0]	@ 000d7456 2868
.org 0xd7458
	str r0, [r1, #84]	@ 000d7458 4865
.org 0xd745a
	ldr r0, [r5, #4]	@ 000d745a 6868
.org 0xd745c
	str r0, [r1, #88]	@ 000d745c 8865
.org 0xd745e
	adds r0, r1, #0	@ 000d745e 081c
.org 0xd7460
	adds r0, #120	@ 000d7460 7830
.org 0xd7462
	strb r6, [r0, #0]	@ 000d7462 0670
.org 0xd7464
	adds r0, #1	@ 000d7464 0130
.org 0xd7466
	strb r2, [r0, #0]	@ 000d7466 0270
.org 0xd7468
	adds r4, #1	@ 000d7468 0134
.org 0xd746a
	cmp r4, r7	@ 000d746a bc42
.org 0xd746c
	blt.n 0xd7420	@ 000d746c d8db
.org 0xd746e
	add sp, #4	@ 000d746e 01b0
.org 0xd7470
	pop {r3, r4, r5}	@ 000d7470 38bc
.org 0xd7472
	mov r8, r3	@ 000d7472 9846
.org 0xd7474
	mov r9, r4	@ 000d7474 a146
.org 0xd7476
	mov sl, r5	@ 000d7476 aa46
.org 0xd7478
	pop {r4, r5, r6, r7}	@ 000d7478 f0bc
.org 0xd747a
	pop {r0}	@ 000d747a 01bc
.org 0xd747c
	bx r0	@ 000d747c 0047
