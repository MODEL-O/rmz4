@ FUN_0807e470  entry 0x0807e470  size 126
.thumb
.org 0x7e470
FUN_0807e470:
	push {r4, r5, lr}	@ 0007e470 30b5
.org 0x7e472
	adds r4, r0, #0	@ 0007e472 041c
.org 0x7e474
	ldrb r3, [r4, #15]	@ 0007e474 e37b
.org 0x7e476
	cmp r3, #0	@ 0007e476 002b
.org 0x7e478
	bne.n 0x7e49a	@ 0007e478 0fd1
.org 0x7e47a
	adds r2, r4, #0	@ 0007e47a 221c
.org 0x7e47c
	adds r2, #216	@ 0007e47c d832
.org 0x7e47e
	ldr r1, [r2, #0]	@ 0007e47e 1168
.org 0x7e480
	cmp r1, #0	@ 0007e480 0029
.org 0x7e482
	beq.n 0x7e48c	@ 0007e482 03d0
.org 0x7e484
	adds r1, #180	@ 0007e484 b431
.org 0x7e486
	movs r0, #1	@ 0007e486 0120
.org 0x7e488
	strb r0, [r1, #0]	@ 0007e488 0870
.org 0x7e48a
	str r3, [r2, #0]	@ 0007e48a 1360
.org 0x7e48c
	adds r0, r4, #0	@ 0007e48c 201c
.org 0x7e48e
	movs r1, #0	@ 0007e48e 0021
.org 0x7e490
	bl 0x7e8c8	@ 0007e490 00f01afa
.org 0x7e494
	ldrb r0, [r4, #15]	@ 0007e494 e07b
.org 0x7e496
	adds r0, #1	@ 0007e496 0130
.org 0x7e498
	strb r0, [r4, #15]	@ 0007e498 e073
.org 0x7e49a
	adds r5, r4, #0	@ 0007e49a 251c
.org 0x7e49c
	adds r5, #188	@ 0007e49c bc35
.org 0x7e49e
	ldrb r0, [r5, #0]	@ 0007e49e 2878
.org 0x7e4a0
	cmp r0, #0	@ 0007e4a0 0028
.org 0x7e4a2
	beq.n 0x7e4aa	@ 0007e4a2 02d0
.org 0x7e4a4
	adds r0, r4, #0	@ 0007e4a4 201c
.org 0x7e4a6
	bl 0x1cff0	@ 0007e4a6 9ef7a3fd
.org 0x7e4aa
	adds r0, r4, #0	@ 0007e4aa 201c
.org 0x7e4ac
	adds r0, #116	@ 0007e4ac 7430
.org 0x7e4ae
	ldr r3, [pc, #64]	@ 0007e4ae 104b
.org 0x7e4b0
	ldr r2, [pc, #64]	@ 0007e4b0 104a
.org 0x7e4b2
	ldrb r1, [r5, #0]	@ 0007e4b2 2978
.org 0x7e4b4
	lsls r1, r1, #1	@ 0007e4b4 4900
.org 0x7e4b6
	adds r1, r1, r2	@ 0007e4b6 8918
.org 0x7e4b8
	ldrh r2, [r1, #0]	@ 0007e4b8 0a88
.org 0x7e4ba
	lsls r2, r2, #2	@ 0007e4ba 9200
.org 0x7e4bc
	adds r2, r2, r3	@ 0007e4bc d218
.org 0x7e4be
	adds r1, r4, #0	@ 0007e4be 211c
.org 0x7e4c0
	adds r1, #113	@ 0007e4c0 7131
.org 0x7e4c2
	ldrb r1, [r1, #0]	@ 0007e4c2 0978
.org 0x7e4c4
	lsls r1, r1, #24	@ 0007e4c4 0906
.org 0x7e4c6
	asrs r1, r1, #24	@ 0007e4c6 0916
.org 0x7e4c8
	ldr r2, [r2, #0]	@ 0007e4c8 1268
.org 0x7e4ca
	lsls r1, r1, #2	@ 0007e4ca 8900
.org 0x7e4cc
	adds r1, r1, r2	@ 0007e4cc 8918
.org 0x7e4ce
	ldr r1, [r1, #0]	@ 0007e4ce 0968
.org 0x7e4d0
	bl 0x5784	@ 0007e4d0 87f758f9
.org 0x7e4d4
	adds r0, r4, #0	@ 0007e4d4 201c
.org 0x7e4d6
	adds r0, #204	@ 0007e4d6 cc30
.org 0x7e4d8
	movs r2, #0	@ 0007e4d8 0022
.org 0x7e4da
	ldrsh r1, [r0, r2]	@ 0007e4da 815e
.org 0x7e4dc
	cmp r1, #0	@ 0007e4dc 0029
.org 0x7e4de
	bne.n 0x7e4e8	@ 0007e4de 03d1
.org 0x7e4e0
	ldrb r0, [r4, #14]	@ 0007e4e0 a07b
.org 0x7e4e2
	adds r0, #1	@ 0007e4e2 0130
.org 0x7e4e4
	strb r0, [r4, #14]	@ 0007e4e4 a073
.org 0x7e4e6
	strb r1, [r4, #15]	@ 0007e4e6 e173
.org 0x7e4e8
	pop {r4, r5}	@ 0007e4e8 30bc
.org 0x7e4ea
	pop {r0}	@ 0007e4ea 01bc
.org 0x7e4ec
	bx r0	@ 0007e4ec 0047
