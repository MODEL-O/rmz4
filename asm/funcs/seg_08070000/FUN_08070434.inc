@ FUN_08070434  entry 0x08070434  size 58
.thumb
.org 0x70434
FUN_08070434:
	push {r4, r5, lr}	@ 00070434 30b5
.org 0x70436
	adds r4, r0, #0	@ 00070436 041c
.org 0x70438
	adds r0, #180	@ 00070438 b430
.org 0x7043a
	ldr r0, [r0, #0]	@ 0007043a 0068
.org 0x7043c
	adds r0, #180	@ 0007043c b430
.org 0x7043e
	movs r5, #0	@ 0007043e 0025
.org 0x70440
	movs r1, #1	@ 00070440 0121
.org 0x70442
	strb r1, [r0, #0]	@ 00070442 0170
.org 0x70444
	adds r0, r4, #0	@ 00070444 201c
.org 0x70446
	bl 0x73e00	@ 00070446 03f0dbfc
.org 0x7044a
	adds r1, r4, #0	@ 0007044a 211c
.org 0x7044c
	adds r1, #195	@ 0007044c c331
.org 0x7044e
	strb r0, [r1, #0]	@ 0007044e 0870
.org 0x70450
	ldrb r0, [r4, #14]	@ 00070450 a07b
.org 0x70452
	adds r0, #1	@ 00070452 0130
.org 0x70454
	strb r0, [r4, #14]	@ 00070454 a073
.org 0x70456
	strb r5, [r4, #15]	@ 00070456 e573
.org 0x70458
	ldr r1, [pc, #20]	@ 00070458 0549
.org 0x7045a
	ldrb r0, [r4, #13]	@ 0007045a 607b
.org 0x7045c
	lsls r0, r0, #2	@ 0007045c 8000
.org 0x7045e
	adds r0, r0, r1	@ 0007045e 4018
.org 0x70460
	ldr r1, [r0, #0]	@ 00070460 0168
.org 0x70462
	adds r0, r4, #0	@ 00070462 201c
.org 0x70464
	bl 0x128f80	@ 00070464 b8f08cfd
.org 0x70468
	pop {r4, r5}	@ 00070468 30bc
.org 0x7046a
	pop {r0}	@ 0007046a 01bc
.org 0x7046c
	bx r0	@ 0007046c 0047
