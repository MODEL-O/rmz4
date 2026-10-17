@ FUN_080e9590  entry 0x080e9590  size 54
.thumb
.org 0xe9590
FUN_080e9590:
	push {r4, r5, r6, r7, lr}	@ 000e9590 f0b5
.org 0xe9592
	adds r6, r0, #0	@ 000e9592 061c
.org 0xe9594
	ldr r0, [pc, #48]	@ 000e9594 0c48
.org 0xe9596
	ldr r4, [r0, #0]	@ 000e9596 0468
.org 0xe9598
	ldr r7, [r4, #12]	@ 000e9598 e768
.org 0xe959a
	adds r0, r4, #0	@ 000e959a 201c
.org 0xe959c
	bl 0x54c4	@ 000e959c 1bf792ff
.org 0xe95a0
	ldr r0, [r4, #12]	@ 000e95a0 e068
.org 0xe95a2
	ldr r0, [r0, #4]	@ 000e95a2 4068
.org 0xe95a4
	str r0, [r4, #12]	@ 000e95a4 e060
.org 0xe95a6
	adds r1, r4, #0	@ 000e95a6 211c
.org 0xe95a8
	adds r1, #20	@ 000e95a8 1431
.org 0xe95aa
	cmp r0, r1	@ 000e95aa 8842
.org 0xe95ac
	beq.n 0xe95be	@ 000e95ac 07d0
.org 0xe95ae
	adds r5, r1, #0	@ 000e95ae 0d1c
.org 0xe95b0
	bl 0x128f94	@ 000e95b0 3ff0f0fc
.org 0xe95b4
	ldr r0, [r4, #12]	@ 000e95b4 e068
.org 0xe95b6
	ldr r0, [r0, #4]	@ 000e95b6 4068
.org 0xe95b8
	str r0, [r4, #12]	@ 000e95b8 e060
.org 0xe95ba
	cmp r0, r5	@ 000e95ba a842
.org 0xe95bc
	bne.n 0xe95b0	@ 000e95bc f8d1
.org 0xe95be
	str r7, [r4, #12]	@ 000e95be e760
.org 0xe95c0
	pop {r4, r5, r6, r7}	@ 000e95c0 f0bc
.org 0xe95c2
	pop {r0}	@ 000e95c2 01bc
.org 0xe95c4
	bx r0	@ 000e95c4 0047
