@ FUN_0807d464  entry 0x0807d464  size 128
.thumb
.org 0x7d464
FUN_0807d464:
	push {r4, r5, lr}	@ 0007d464 30b5
.org 0x7d466
	adds r4, r0, #0	@ 0007d466 041c
.org 0x7d468
	ldrb r0, [r4, #15]	@ 0007d468 e07b
.org 0x7d46a
	cmp r0, #0	@ 0007d46a 0028
.org 0x7d46c
	bne.n 0x7d480	@ 0007d46c 08d1
.org 0x7d46e
	adds r0, r4, #0	@ 0007d46e 201c
.org 0x7d470
	movs r1, #15	@ 0007d470 0f21
.org 0x7d472
	bl 0x7e8c8	@ 0007d472 01f029fa
.org 0x7d476
	movs r0, #24	@ 0007d476 1820
.org 0x7d478
	strb r0, [r4, #18]	@ 0007d478 a074
.org 0x7d47a
	ldrb r0, [r4, #15]	@ 0007d47a e07b
.org 0x7d47c
	adds r0, #1	@ 0007d47c 0130
.org 0x7d47e
	strb r0, [r4, #15]	@ 0007d47e e073
.org 0x7d480
	adds r5, r4, #0	@ 0007d480 251c
.org 0x7d482
	adds r5, #188	@ 0007d482 bc35
.org 0x7d484
	ldrb r0, [r5, #0]	@ 0007d484 2878
.org 0x7d486
	cmp r0, #0	@ 0007d486 0028
.org 0x7d488
	beq.n 0x7d490	@ 0007d488 02d0
.org 0x7d48a
	adds r0, r4, #0	@ 0007d48a 201c
.org 0x7d48c
	bl 0x1cff0	@ 0007d48c 9ff7b0fd
.org 0x7d490
	adds r0, r4, #0	@ 0007d490 201c
.org 0x7d492
	adds r0, #116	@ 0007d492 7430
.org 0x7d494
	ldr r3, [pc, #76]	@ 0007d494 134b
.org 0x7d496
	ldr r2, [pc, #80]	@ 0007d496 144a
.org 0x7d498
	ldrb r1, [r5, #0]	@ 0007d498 2978
.org 0x7d49a
	lsls r1, r1, #1	@ 0007d49a 4900
.org 0x7d49c
	adds r1, r1, r2	@ 0007d49c 8918
.org 0x7d49e
	ldrh r2, [r1, #0]	@ 0007d49e 0a88
.org 0x7d4a0
	lsls r2, r2, #2	@ 0007d4a0 9200
.org 0x7d4a2
	adds r2, r2, r3	@ 0007d4a2 d218
.org 0x7d4a4
	adds r1, r4, #0	@ 0007d4a4 211c
.org 0x7d4a6
	adds r1, #113	@ 0007d4a6 7131
.org 0x7d4a8
	ldrb r1, [r1, #0]	@ 0007d4a8 0978
.org 0x7d4aa
	lsls r1, r1, #24	@ 0007d4aa 0906
.org 0x7d4ac
	asrs r1, r1, #24	@ 0007d4ac 0916
.org 0x7d4ae
	ldr r2, [r2, #0]	@ 0007d4ae 1268
.org 0x7d4b0
	lsls r1, r1, #2	@ 0007d4b0 8900
.org 0x7d4b2
	adds r1, r1, r2	@ 0007d4b2 8918
.org 0x7d4b4
	ldr r1, [r1, #0]	@ 0007d4b4 0968
.org 0x7d4b6
	bl 0x5784	@ 0007d4b6 88f765f9
.org 0x7d4ba
	ldrb r0, [r4, #18]	@ 0007d4ba a07c
.org 0x7d4bc
	cmp r0, #0	@ 0007d4bc 0028
.org 0x7d4be
	beq.n 0x7d4ca	@ 0007d4be 04d0
.org 0x7d4c0
	subs r0, #1	@ 0007d4c0 0138
.org 0x7d4c2
	strb r0, [r4, #18]	@ 0007d4c2 a074
.org 0x7d4c4
	lsls r0, r0, #24	@ 0007d4c4 0006
.org 0x7d4c6
	cmp r0, #0	@ 0007d4c6 0028
.org 0x7d4c8
	bne.n 0x7d4de	@ 0007d4c8 09d1
.org 0x7d4ca
	adds r0, r4, #0	@ 0007d4ca 201c
.org 0x7d4cc
	adds r0, #115	@ 0007d4cc 7330
.org 0x7d4ce
	ldrb r0, [r0, #0]	@ 0007d4ce 0078
.org 0x7d4d0
	cmp r0, #3	@ 0007d4d0 0328
.org 0x7d4d2
	bne.n 0x7d4de	@ 0007d4d2 04d1
.org 0x7d4d4
	ldrb r0, [r4, #14]	@ 0007d4d4 a07b
.org 0x7d4d6
	adds r0, #1	@ 0007d4d6 0130
.org 0x7d4d8
	movs r1, #0	@ 0007d4d8 0021
.org 0x7d4da
	strb r0, [r4, #14]	@ 0007d4da a073
.org 0x7d4dc
	strb r1, [r4, #15]	@ 0007d4dc e173
.org 0x7d4de
	pop {r4, r5}	@ 0007d4de 30bc
.org 0x7d4e0
	pop {r0}	@ 0007d4e0 01bc
.org 0x7d4e2
	bx r0	@ 0007d4e2 0047
