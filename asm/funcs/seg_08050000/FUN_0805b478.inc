@ FUN_0805b478  entry 0x0805b478  size 72
.thumb
.org 0x5b478
FUN_0805b478:
	push {r4, lr}	@ 0005b478 10b5
.org 0x5b47a
	adds r4, r0, #0	@ 0005b47a 041c
.org 0x5b47c
	ldrb r0, [r4, #15]	@ 0005b47c e07b
.org 0x5b47e
	cmp r0, #0	@ 0005b47e 0028
.org 0x5b480
	bne.n 0x5b4a2	@ 0005b480 0fd1
.org 0x5b482
	adds r0, r4, #0	@ 0005b482 201c
.org 0x5b484
	adds r0, #116	@ 0005b484 7430
.org 0x5b486
	ldr r1, [pc, #56]	@ 0005b486 0e49
.org 0x5b488
	bl 0x5784	@ 0005b488 aaf77cf9
.org 0x5b48c
	ldr r1, [pc, #52]	@ 0005b48c 0d49
.org 0x5b48e
	adds r0, r4, #0	@ 0005b48e 201c
.org 0x5b490
	bl 0x1cf00	@ 0005b490 c1f736fd
.org 0x5b494
	adds r1, r4, #0	@ 0005b494 211c
.org 0x5b496
	adds r1, #189	@ 0005b496 bd31
.org 0x5b498
	movs r0, #1	@ 0005b498 0120
.org 0x5b49a
	strb r0, [r1, #0]	@ 0005b49a 0870
.org 0x5b49c
	ldrb r0, [r4, #15]	@ 0005b49c e07b
.org 0x5b49e
	adds r0, #1	@ 0005b49e 0130
.org 0x5b4a0
	strb r0, [r4, #15]	@ 0005b4a0 e073
.org 0x5b4a2
	adds r0, r4, #0	@ 0005b4a2 201c
.org 0x5b4a4
	bl 0x1cff0	@ 0005b4a4 c1f7a4fd
.org 0x5b4a8
	adds r0, r4, #0	@ 0005b4a8 201c
.org 0x5b4aa
	adds r0, #115	@ 0005b4aa 7330
.org 0x5b4ac
	ldrb r0, [r0, #0]	@ 0005b4ac 0078
.org 0x5b4ae
	cmp r0, #3	@ 0005b4ae 0328
.org 0x5b4b0
	bne.n 0x5b4ba	@ 0005b4b0 03d1
.org 0x5b4b2
	movs r1, #0	@ 0005b4b2 0021
.org 0x5b4b4
	movs r0, #4	@ 0005b4b4 0420
.org 0x5b4b6
	strb r0, [r4, #14]	@ 0005b4b6 a073
.org 0x5b4b8
	strb r1, [r4, #15]	@ 0005b4b8 e173
.org 0x5b4ba
	pop {r4}	@ 0005b4ba 10bc
.org 0x5b4bc
	pop {r0}	@ 0005b4bc 01bc
.org 0x5b4be
	bx r0	@ 0005b4be 0047
