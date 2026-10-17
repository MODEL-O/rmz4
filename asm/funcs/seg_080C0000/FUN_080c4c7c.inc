@ FUN_080c4c7c  entry 0x080c4c7c  size 80
.thumb
.org 0xc4c7c
FUN_080c4c7c:
	push {r4, r5, r6, lr}	@ 000c4c7c 70b5
.org 0xc4c7e
	adds r4, r0, #0	@ 000c4c7e 041c
.org 0xc4c80
	adds r5, r1, #0	@ 000c4c80 0d1c
.org 0xc4c82
	lsls r2, r2, #24	@ 000c4c82 1206
.org 0xc4c84
	lsrs r6, r2, #24	@ 000c4c84 160e
.org 0xc4c86
	ldr r0, [pc, #68]	@ 000c4c86 1148
.org 0xc4c88
	ldr r0, [r0, #0]	@ 000c4c88 0068
.org 0xc4c8a
	bl 0x5500	@ 000c4c8a 40f739fc
.org 0xc4c8e
	adds r3, r0, #0	@ 000c4c8e 031c
.org 0xc4c90
	cmp r3, #0	@ 000c4c90 002b
.org 0xc4c92
	beq.n 0xc4cc4	@ 000c4c92 17d0
.org 0xc4c94
	adds r1, r3, #0	@ 000c4c94 191c
.org 0xc4c96
	adds r1, #37	@ 000c4c96 2531
.org 0xc4c98
	movs r2, #0	@ 000c4c98 0022
.org 0xc4c9a
	movs r0, #8	@ 000c4c9a 0820
.org 0xc4c9c
	strb r0, [r1, #0]	@ 000c4c9c 0870
.org 0xc4c9e
	ldr r1, [pc, #48]	@ 000c4c9e 0c49
.org 0xc4ca0
	movs r0, #23	@ 000c4ca0 1720
.org 0xc4ca2
	strb r0, [r3, #9]	@ 000c4ca2 5872
.org 0xc4ca4
	ldr r0, [r1, #92]	@ 000c4ca4 c86d
.org 0xc4ca6
	ldr r0, [r0, #0]	@ 000c4ca6 0068
.org 0xc4ca8
	str r0, [r3, #20]	@ 000c4ca8 5861
.org 0xc4caa
	movs r0, #0	@ 000c4caa 0020
.org 0xc4cac
	strh r2, [r3, #32]	@ 000c4cac 1a84
.org 0xc4cae
	adds r1, r3, #0	@ 000c4cae 191c
.org 0xc4cb0
	adds r1, #34	@ 000c4cb0 2231
.org 0xc4cb2
	strb r0, [r1, #0]	@ 000c4cb2 0870
.org 0xc4cb4
	str r4, [r3, #40]	@ 000c4cb4 9c62
.org 0xc4cb6
	ldr r0, [r5, #0]	@ 000c4cb6 2868
.org 0xc4cb8
	ldr r1, [r5, #4]	@ 000c4cb8 6968
.org 0xc4cba
	str r0, [r3, #84]	@ 000c4cba 5865
.org 0xc4cbc
	str r1, [r3, #88]	@ 000c4cbc 9965
.org 0xc4cbe
	movs r0, #2	@ 000c4cbe 0220
.org 0xc4cc0
	strb r0, [r3, #16]	@ 000c4cc0 1874
.org 0xc4cc2
	strb r6, [r3, #17]	@ 000c4cc2 5e74
.org 0xc4cc4
	adds r0, r3, #0	@ 000c4cc4 181c
.org 0xc4cc6
	pop {r4, r5, r6}	@ 000c4cc6 70bc
.org 0xc4cc8
	pop {r1}	@ 000c4cc8 02bc
.org 0xc4cca
	bx r1	@ 000c4cca 0847
