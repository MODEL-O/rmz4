@ FUN_0802b400  entry 0x0802b400  size 106
.thumb
.org 0x2b400
FUN_0802b400:
	push {r4, r5, r6, r7, lr}	@ 0002b400 f0b5
.org 0x2b402
	mov r7, r8	@ 0002b402 4746
.org 0x2b404
	push {r7}	@ 0002b404 80b4
.org 0x2b406
	sub sp, #4	@ 0002b406 81b0
.org 0x2b408
	adds r7, r0, #0	@ 0002b408 071c
.org 0x2b40a
	adds r5, r1, #0	@ 0002b40a 0d1c
.org 0x2b40c
	lsls r2, r2, #16	@ 0002b40c 1204
.org 0x2b40e
	movs r3, #180	@ 0002b40e b423
.org 0x2b410
	lsls r3, r3, #2	@ 0002b410 9b00
.org 0x2b412
	lsrs r0, r2, #16	@ 0002b412 100c
.org 0x2b414
	mov r8, r0	@ 0002b414 8046
.org 0x2b416
	asrs r4, r2, #16	@ 0002b416 1414
.org 0x2b418
	str r4, [sp, #0]	@ 0002b418 0094
.org 0x2b41a
	adds r0, r7, #0	@ 0002b41a 381c
.org 0x2b41c
	movs r1, #0	@ 0002b41c 0021
.org 0x2b41e
	adds r2, r5, #0	@ 0002b41e 2a1c
.org 0x2b420
	bl 0x5440	@ 0002b420 daf70ef8
.org 0x2b424
	movs r3, #0	@ 0002b424 0023
.org 0x2b426
	cmp r3, r4	@ 0002b426 a342
.org 0x2b428
	bge.n 0x2b44e	@ 0002b428 11da
.org 0x2b42a
	ldr r6, [pc, #64]	@ 0002b42a 104e
.org 0x2b42c
	lsls r2, r3, #16	@ 0002b42c 1a04
.org 0x2b42e
	asrs r2, r2, #16	@ 0002b42e 1214
.org 0x2b430
	lsls r0, r2, #1	@ 0002b430 5000
.org 0x2b432
	adds r0, r0, r2	@ 0002b432 8018
.org 0x2b434
	lsls r1, r0, #4	@ 0002b434 0101
.org 0x2b436
	subs r1, r1, r0	@ 0002b436 091a
.org 0x2b438
	lsls r1, r1, #4	@ 0002b438 0901
.org 0x2b43a
	adds r1, r1, r5	@ 0002b43a 4919
.org 0x2b43c
	ldrb r0, [r6, #0]	@ 0002b43c 3078
.org 0x2b43e
	adds r0, r0, r3	@ 0002b43e c018
.org 0x2b440
	strb r0, [r1, #28]	@ 0002b440 0877
.org 0x2b442
	adds r2, #1	@ 0002b442 0132
.org 0x2b444
	lsls r2, r2, #16	@ 0002b444 1204
.org 0x2b446
	lsrs r3, r2, #16	@ 0002b446 130c
.org 0x2b448
	asrs r2, r2, #16	@ 0002b448 1214
.org 0x2b44a
	cmp r2, r4	@ 0002b44a a242
.org 0x2b44c
	blt.n 0x2b42c	@ 0002b44c eedb
.org 0x2b44e
	ldr r1, [pc, #28]	@ 0002b44e 0749
.org 0x2b450
	ldrb r0, [r1, #0]	@ 0002b450 0878
.org 0x2b452
	add r0, r8	@ 0002b452 4044
.org 0x2b454
	strb r0, [r1, #0]	@ 0002b454 0870
.org 0x2b456
	ldr r0, [pc, #24]	@ 0002b456 0648
.org 0x2b458
	str r7, [r0, #0]	@ 0002b458 0760
.org 0x2b45a
	ldr r0, [pc, #24]	@ 0002b45a 0648
.org 0x2b45c
	str r5, [r0, #0]	@ 0002b45c 0560
.org 0x2b45e
	add sp, #4	@ 0002b45e 01b0
.org 0x2b460
	pop {r3}	@ 0002b460 08bc
.org 0x2b462
	mov r8, r3	@ 0002b462 9846
.org 0x2b464
	pop {r4, r5, r6, r7}	@ 0002b464 f0bc
.org 0x2b466
	pop {r0}	@ 0002b466 01bc
.org 0x2b468
	bx r0	@ 0002b468 0047
