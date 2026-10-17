@ FUN_0809baa8  entry 0x0809baa8  size 104
.thumb
.org 0x9baa8
FUN_0809baa8:
	push {r4, r5, r6, r7, lr}	@ 0009baa8 f0b5
.org 0x9baaa
	adds r4, r0, #0	@ 0009baaa 041c
.org 0x9baac
	adds r5, r1, #0	@ 0009baac 0d1c
.org 0x9baae
	lsls r2, r2, #24	@ 0009baae 1206
.org 0x9bab0
	lsrs r6, r2, #24	@ 0009bab0 160e
.org 0x9bab2
	lsls r3, r3, #24	@ 0009bab2 1b06
.org 0x9bab4
	lsrs r7, r3, #24	@ 0009bab4 1f0e
.org 0x9bab6
	ldr r0, [pc, #88]	@ 0009bab6 1648
.org 0x9bab8
	ldr r0, [r0, #0]	@ 0009bab8 0068
.org 0x9baba
	bl 0x5500	@ 0009baba 69f721fd
.org 0x9babe
	adds r3, r0, #0	@ 0009babe 031c
.org 0x9bac0
	cmp r3, #0	@ 0009bac0 002b
.org 0x9bac2
	beq.n 0x9bb08	@ 0009bac2 21d0
.org 0x9bac4
	adds r1, r3, #0	@ 0009bac4 191c
.org 0x9bac6
	adds r1, #37	@ 0009bac6 2531
.org 0x9bac8
	movs r2, #0	@ 0009bac8 0022
.org 0x9baca
	movs r0, #24	@ 0009baca 1820
.org 0x9bacc
	strb r0, [r1, #0]	@ 0009bacc 0870
.org 0x9bace
	ldr r0, [pc, #68]	@ 0009bace 1148
.org 0x9bad0
	movs r1, #40	@ 0009bad0 2821
.org 0x9bad2
	strb r1, [r3, #9]	@ 0009bad2 5972
.org 0x9bad4
	adds r0, #160	@ 0009bad4 a030
.org 0x9bad6
	ldr r0, [r0, #0]	@ 0009bad6 0068
.org 0x9bad8
	ldr r0, [r0, #0]	@ 0009bad8 0068
.org 0x9bada
	str r0, [r3, #20]	@ 0009bada 5861
.org 0x9badc
	movs r0, #0	@ 0009badc 0020
.org 0x9bade
	strh r2, [r3, #32]	@ 0009bade 1a84
.org 0x9bae0
	adds r1, r3, #0	@ 0009bae0 191c
.org 0x9bae2
	adds r1, #34	@ 0009bae2 2231
.org 0x9bae4
	strb r0, [r1, #0]	@ 0009bae4 0870
.org 0x9bae6
	ldrb r1, [r3, #11]	@ 0009bae6 d97a
.org 0x9bae8
	movs r0, #16	@ 0009bae8 1020
.org 0x9baea
	orrs r0, r1	@ 0009baea 0843
.org 0x9baec
	strb r0, [r3, #11]	@ 0009baec d872
.org 0x9baee
	ldrb r0, [r3, #28]	@ 0009baee 187f
.org 0x9baf0
	strb r0, [r3, #29]	@ 0009baf0 5877
.org 0x9baf2
	str r4, [r3, #40]	@ 0009baf2 9c62
.org 0x9baf4
	ldr r0, [r5, #0]	@ 0009baf4 2868
.org 0x9baf6
	ldr r1, [r5, #4]	@ 0009baf6 6968
.org 0x9baf8
	str r0, [r3, #84]	@ 0009baf8 5865
.org 0x9bafa
	str r1, [r3, #88]	@ 0009bafa 9965
.org 0x9bafc
	movs r0, #1	@ 0009bafc 0120
.org 0x9bafe
	strb r0, [r3, #16]	@ 0009bafe 1874
.org 0x9bb00
	strb r6, [r3, #17]	@ 0009bb00 5e74
.org 0x9bb02
	adds r0, r3, #0	@ 0009bb02 181c
.org 0x9bb04
	adds r0, #181	@ 0009bb04 b530
.org 0x9bb06
	strb r7, [r0, #0]	@ 0009bb06 0770
.org 0x9bb08
	adds r0, r3, #0	@ 0009bb08 181c
.org 0x9bb0a
	pop {r4, r5, r6, r7}	@ 0009bb0a f0bc
.org 0x9bb0c
	pop {r1}	@ 0009bb0c 02bc
.org 0x9bb0e
	bx r1	@ 0009bb0e 0847
