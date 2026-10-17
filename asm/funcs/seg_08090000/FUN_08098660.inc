@ FUN_08098660  entry 0x08098660  size 106
.thumb
.org 0x98660
FUN_08098660:
	push {r4, r5, r6, lr}	@ 00098660 70b5
.org 0x98662
	adds r4, r0, #0	@ 00098662 041c
.org 0x98664
	bl 0x1cc9c	@ 00098664 84f71afb
.org 0x98668
	ldrb r1, [r4, #10]	@ 00098668 a17a
.org 0x9866a
	movs r0, #1	@ 0009866a 0120
.org 0x9866c
	movs r6, #0	@ 0009866c 0026
.org 0x9866e
	orrs r0, r1	@ 0009866e 0843
.org 0x98670
	movs r1, #2	@ 00098670 0221
.org 0x98672
	orrs r0, r1	@ 00098672 0843
.org 0x98674
	strb r0, [r4, #10]	@ 00098674 a072
.org 0x98676
	ldr r1, [pc, #84]	@ 00098676 1549
.org 0x98678
	adds r0, r4, #0	@ 00098678 201c
.org 0x9867a
	bl 0x1cf00	@ 0009867a 84f741fc
.org 0x9867e
	adds r0, r4, #0	@ 0009867e 201c
.org 0x98680
	bl 0x1cff0	@ 00098680 84f7b6fc
.org 0x98684
	adds r1, r4, #0	@ 00098684 211c
.org 0x98686
	adds r1, #37	@ 00098686 2531
.org 0x98688
	movs r0, #25	@ 00098688 1920
.org 0x9868a
	strb r0, [r1, #0]	@ 0009868a 0870
.org 0x9868c
	ldrb r1, [r4, #10]	@ 0009868c a17a
.org 0x9868e
	movs r0, #4	@ 0009868e 0420
.org 0x98690
	orrs r0, r1	@ 00098690 0843
.org 0x98692
	strb r0, [r4, #10]	@ 00098692 a072
.org 0x98694
	adds r5, r4, #0	@ 00098694 251c
.org 0x98696
	adds r5, #116	@ 00098696 7435
.org 0x98698
	ldr r1, [pc, #52]	@ 00098698 0d49
.org 0x9869a
	adds r2, r4, #0	@ 0009869a 221c
.org 0x9869c
	adds r2, #84	@ 0009869c 5432
.org 0x9869e
	adds r0, r5, #0	@ 0009869e 281c
.org 0x986a0
	movs r3, #5	@ 000986a0 0523
.org 0x986a2
	bl 0x5760	@ 000986a2 6df75df8
.org 0x986a6
	str r4, [r5, #44]	@ 000986a6 ec62
.org 0x986a8
	str r6, [r5, #36]	@ 000986a8 6e62
.org 0x986aa
	str r6, [r4, #96]	@ 000986aa 2666
.org 0x986ac
	ldr r1, [pc, #36]	@ 000986ac 0949
.org 0x986ae
	ldrb r0, [r4, #9]	@ 000986ae 607a
.org 0x986b0
	lsls r0, r0, #2	@ 000986b0 8000
.org 0x986b2
	adds r0, r0, r1	@ 000986b2 4018
.org 0x986b4
	movs r1, #1	@ 000986b4 0121
.org 0x986b6
	str r1, [r4, #12]	@ 000986b6 e160
.org 0x986b8
	ldr r0, [r0, #0]	@ 000986b8 0068
.org 0x986ba
	ldr r0, [r0, #4]	@ 000986ba 4068
.org 0x986bc
	str r0, [r4, #20]	@ 000986bc 6061
.org 0x986be
	adds r0, r4, #0	@ 000986be 201c
.org 0x986c0
	bl 0x986d8	@ 000986c0 00f00af8
.org 0x986c4
	pop {r4, r5, r6}	@ 000986c4 70bc
.org 0x986c6
	pop {r0}	@ 000986c6 01bc
.org 0x986c8
	bx r0	@ 000986c8 0047
