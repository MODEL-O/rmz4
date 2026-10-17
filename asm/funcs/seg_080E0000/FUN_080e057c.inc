@ FUN_080e057c  entry 0x080e057c  size 80
.thumb
.org 0xe057c
FUN_080e057c:
	push {r4, r5, r6, lr}	@ 000e057c 70b5
.org 0xe057e
	adds r6, r0, #0	@ 000e057e 061c
.org 0xe0580
	lsls r1, r1, #24	@ 000e0580 0906
.org 0xe0582
	lsrs r5, r1, #24	@ 000e0582 0d0e
.org 0xe0584
	lsls r2, r2, #24	@ 000e0584 1206
.org 0xe0586
	lsrs r4, r2, #24	@ 000e0586 140e
.org 0xe0588
	ldr r0, [pc, #64]	@ 000e0588 1048
.org 0xe058a
	ldr r0, [r0, #0]	@ 000e058a 0068
.org 0xe058c
	bl 0x5500	@ 000e058c 24f7b8ff
.org 0xe0590
	adds r3, r0, #0	@ 000e0590 031c
.org 0xe0592
	cmp r3, #0	@ 000e0592 002b
.org 0xe0594
	beq.n 0xe05c4	@ 000e0594 16d0
.org 0xe0596
	adds r1, r3, #0	@ 000e0596 191c
.org 0xe0598
	adds r1, #37	@ 000e0598 2531
.org 0xe059a
	movs r2, #0	@ 000e059a 0022
.org 0xe059c
	movs r0, #1	@ 000e059c 0120
.org 0xe059e
	strb r0, [r1, #0]	@ 000e059e 0870
.org 0xe05a0
	ldr r0, [pc, #44]	@ 000e05a0 0b48
.org 0xe05a2
	movs r1, #56	@ 000e05a2 3821
.org 0xe05a4
	strb r1, [r3, #9]	@ 000e05a4 5972
.org 0xe05a6
	adds r0, #224	@ 000e05a6 e030
.org 0xe05a8
	ldr r0, [r0, #0]	@ 000e05a8 0068
.org 0xe05aa
	ldr r0, [r0, #0]	@ 000e05aa 0068
.org 0xe05ac
	str r0, [r3, #20]	@ 000e05ac 5861
.org 0xe05ae
	movs r0, #0	@ 000e05ae 0020
.org 0xe05b0
	strh r2, [r3, #32]	@ 000e05b0 1a84
.org 0xe05b2
	adds r1, r3, #0	@ 000e05b2 191c
.org 0xe05b4
	adds r1, #34	@ 000e05b4 2231
.org 0xe05b6
	strb r0, [r1, #0]	@ 000e05b6 0870
.org 0xe05b8
	ldr r0, [r6, #0]	@ 000e05b8 3068
.org 0xe05ba
	ldr r1, [r6, #4]	@ 000e05ba 7168
.org 0xe05bc
	str r0, [r3, #84]	@ 000e05bc 5865
.org 0xe05be
	str r1, [r3, #88]	@ 000e05be 9965
.org 0xe05c0
	strb r5, [r3, #16]	@ 000e05c0 1d74
.org 0xe05c2
	strb r4, [r3, #17]	@ 000e05c2 5c74
.org 0xe05c4
	adds r0, r3, #0	@ 000e05c4 181c
.org 0xe05c6
	pop {r4, r5, r6}	@ 000e05c6 70bc
.org 0xe05c8
	pop {r1}	@ 000e05c8 02bc
.org 0xe05ca
	bx r1	@ 000e05ca 0847
