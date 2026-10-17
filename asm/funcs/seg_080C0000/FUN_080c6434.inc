@ FUN_080c6434  entry 0x080c6434  size 68
.thumb
.org 0xc6434
FUN_080c6434:
	push {r4, r5, lr}	@ 000c6434 30b5
.org 0xc6436
	adds r4, r0, #0	@ 000c6436 041c
.org 0xc6438
	lsls r1, r1, #24	@ 000c6438 0906
.org 0xc643a
	lsrs r5, r1, #24	@ 000c643a 0d0e
.org 0xc643c
	ldr r0, [pc, #56]	@ 000c643c 0e48
.org 0xc643e
	ldr r0, [r0, #0]	@ 000c643e 0068
.org 0xc6440
	bl 0x5500	@ 000c6440 3ff75ef8
.org 0xc6444
	adds r3, r0, #0	@ 000c6444 031c
.org 0xc6446
	cmp r3, #0	@ 000c6446 002b
.org 0xc6448
	beq.n 0xc6472	@ 000c6448 13d0
.org 0xc644a
	adds r1, r3, #0	@ 000c644a 191c
.org 0xc644c
	adds r1, #37	@ 000c644c 2531
.org 0xc644e
	movs r2, #0	@ 000c644e 0022
.org 0xc6450
	movs r0, #8	@ 000c6450 0820
.org 0xc6452
	strb r0, [r1, #0]	@ 000c6452 0870
.org 0xc6454
	ldr r1, [pc, #36]	@ 000c6454 0949
.org 0xc6456
	movs r0, #26	@ 000c6456 1a20
.org 0xc6458
	strb r0, [r3, #9]	@ 000c6458 5872
.org 0xc645a
	ldr r0, [r1, #104]	@ 000c645a 886e
.org 0xc645c
	ldr r0, [r0, #0]	@ 000c645c 0068
.org 0xc645e
	str r0, [r3, #20]	@ 000c645e 5861
.org 0xc6460
	movs r0, #0	@ 000c6460 0020
.org 0xc6462
	strh r2, [r3, #32]	@ 000c6462 1a84
.org 0xc6464
	adds r1, r3, #0	@ 000c6464 191c
.org 0xc6466
	adds r1, #34	@ 000c6466 2231
.org 0xc6468
	strb r0, [r1, #0]	@ 000c6468 0870
.org 0xc646a
	str r4, [r3, #40]	@ 000c646a 9c62
.org 0xc646c
	movs r0, #5	@ 000c646c 0520
.org 0xc646e
	strb r0, [r3, #16]	@ 000c646e 1874
.org 0xc6470
	strb r5, [r3, #17]	@ 000c6470 5d74
.org 0xc6472
	pop {r4, r5}	@ 000c6472 30bc
.org 0xc6474
	pop {r0}	@ 000c6474 01bc
.org 0xc6476
	bx r0	@ 000c6476 0047
