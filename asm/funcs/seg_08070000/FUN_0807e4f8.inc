@ FUN_0807e4f8  entry 0x0807e4f8  size 86
.thumb
.org 0x7e4f8
FUN_0807e4f8:
	push {r4, lr}	@ 0007e4f8 10b5
.org 0x7e4fa
	adds r3, r0, #0	@ 0007e4fa 031c
.org 0x7e4fc
	adds r0, #184	@ 0007e4fc b830
.org 0x7e4fe
	ldr r0, [r0, #0]	@ 0007e4fe 0068
.org 0x7e500
	movs r1, #224	@ 0007e500 e021
.org 0x7e502
	lsls r1, r1, #6	@ 0007e502 8901
.org 0x7e504
	adds r0, r0, r1	@ 0007e504 4018
.org 0x7e506
	str r0, [r3, #88]	@ 0007e506 9865
.org 0x7e508
	adds r2, r3, #0	@ 0007e508 1a1c
.org 0x7e50a
	adds r2, #200	@ 0007e50a c832
.org 0x7e50c
	adds r1, r3, #0	@ 0007e50c 191c
.org 0x7e50e
	adds r1, #180	@ 0007e50e b431
.org 0x7e510
	ldr r0, [pc, #60]	@ 0007e510 0f48
.org 0x7e512
	ldr r0, [r0, #8]	@ 0007e512 8068
.org 0x7e514
	movs r4, #240	@ 0007e514 f024
.org 0x7e516
	lsls r4, r4, #7	@ 0007e516 e401
.org 0x7e518
	adds r0, r0, r4	@ 0007e518 0019
.org 0x7e51a
	ldr r1, [r1, #0]	@ 0007e51a 0968
.org 0x7e51c
	adds r1, r1, r0	@ 0007e51c 0918
.org 0x7e51e
	str r1, [r2, #0]	@ 0007e51e 1160
.org 0x7e520
	movs r2, #0	@ 0007e520 0022
.org 0x7e522
	ldr r0, [pc, #48]	@ 0007e522 0c48
.org 0x7e524
	ldr r0, [r0, #0]	@ 0007e524 0068
.org 0x7e526
	ldr r0, [r0, #84]	@ 0007e526 406d
.org 0x7e528
	cmp r1, r0	@ 0007e528 8142
.org 0x7e52a
	bge.n 0x7e52e	@ 0007e52a 00da
.org 0x7e52c
	movs r2, #1	@ 0007e52c 0122
.org 0x7e52e
	adds r0, r3, #0	@ 0007e52e 181c
.org 0x7e530
	adds r0, #190	@ 0007e530 be30
.org 0x7e532
	movs r1, #0	@ 0007e532 0021
.org 0x7e534
	strb r2, [r0, #0]	@ 0007e534 0270
.org 0x7e536
	movs r0, #12	@ 0007e536 0c20
.org 0x7e538
	strb r0, [r3, #13]	@ 0007e538 5873
.org 0x7e53a
	strb r1, [r3, #14]	@ 0007e53a 9973
.org 0x7e53c
	strb r1, [r3, #15]	@ 0007e53c d973
.org 0x7e53e
	ldr r0, [pc, #24]	@ 0007e53e 0648
.org 0x7e540
	ldr r1, [r0, #48]	@ 0007e540 016b
.org 0x7e542
	adds r0, r3, #0	@ 0007e542 181c
.org 0x7e544
	bl 0x128f80	@ 0007e544 aaf01cfd
.org 0x7e548
	pop {r4}	@ 0007e548 10bc
.org 0x7e54a
	pop {r0}	@ 0007e54a 01bc
.org 0x7e54c
	bx r0	@ 0007e54c 0047
