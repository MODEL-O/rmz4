@ FUN_080e1484  entry 0x080e1484  size 58
.thumb
.org 0xe1484
FUN_080e1484:
	push {r4, r5, r6, lr}	@ 000e1484 70b5
.org 0xe1486
	adds r5, r0, #0	@ 000e1486 051c
.org 0xe1488
	movs r3, #1	@ 000e1488 0123
.org 0xe148a
	movs r4, #0	@ 000e148a 0024
.org 0xe148c
	adds r6, r5, #0	@ 000e148c 2e1c
.org 0xe148e
	adds r6, #120	@ 000e148e 7836
.org 0xe1490
	ldr r2, [r5, #116]	@ 000e1490 6a6f
.org 0xe1492
	ldrb r1, [r2, #0]	@ 000e1492 1178
.org 0xe1494
	adds r0, r3, #0	@ 000e1494 181c
.org 0xe1496
	ands r0, r1	@ 000e1496 0840
.org 0xe1498
	cmp r0, #0	@ 000e1498 0028
.org 0xe149a
	bne.n 0xe14a8	@ 000e149a 05d1
.org 0xe149c
	adds r0, r3, #0	@ 000e149c 181c
.org 0xe149e
	orrs r0, r1	@ 000e149e 0843
.org 0xe14a0
	strb r0, [r2, #0]	@ 000e14a0 1070
.org 0xe14a2
	strb r3, [r6, #0]	@ 000e14a2 3370
.org 0xe14a4
	adds r0, r4, #0	@ 000e14a4 201c
.org 0xe14a6
	b.n 0xe14b8	@ 000e14a6 07e0
.org 0xe14a8
	lsls r0, r3, #25	@ 000e14a8 5806
.org 0xe14aa
	lsrs r3, r0, #24	@ 000e14aa 030e
.org 0xe14ac
	adds r0, r4, #1	@ 000e14ac 601c
.org 0xe14ae
	lsls r0, r0, #24	@ 000e14ae 0006
.org 0xe14b0
	lsrs r4, r0, #24	@ 000e14b0 040e
.org 0xe14b2
	cmp r4, #7	@ 000e14b2 072c
.org 0xe14b4
	bls.n 0xe1490	@ 000e14b4 ecd9
.org 0xe14b6
	movs r0, #255	@ 000e14b6 ff20
.org 0xe14b8
	pop {r4, r5, r6}	@ 000e14b8 70bc
.org 0xe14ba
	pop {r1}	@ 000e14ba 02bc
.org 0xe14bc
	bx r1	@ 000e14bc 0847
