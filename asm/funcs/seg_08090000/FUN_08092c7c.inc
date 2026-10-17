@ FUN_08092c7c  entry 0x08092c7c  size 88
.thumb
.org 0x92c7c
FUN_08092c7c:
	push {r4, r5, r6, lr}	@ 00092c7c 70b5
.org 0x92c7e
	adds r6, r0, #0	@ 00092c7e 061c
.org 0x92c80
	lsls r1, r1, #24	@ 00092c80 0906
.org 0x92c82
	lsrs r5, r1, #24	@ 00092c82 0d0e
.org 0x92c84
	lsls r2, r2, #24	@ 00092c84 1206
.org 0x92c86
	lsrs r4, r2, #24	@ 00092c86 140e
.org 0x92c88
	ldr r0, [pc, #72]	@ 00092c88 1248
.org 0x92c8a
	ldr r0, [r0, #0]	@ 00092c8a 0068
.org 0x92c8c
	bl 0x5500	@ 00092c8c 72f738fc
.org 0x92c90
	adds r3, r0, #0	@ 00092c90 031c
.org 0x92c92
	cmp r3, #0	@ 00092c92 002b
.org 0x92c94
	beq.n 0x92ccc	@ 00092c94 1ad0
.org 0x92c96
	adds r1, r3, #0	@ 00092c96 191c
.org 0x92c98
	adds r1, #37	@ 00092c98 2531
.org 0x92c9a
	movs r2, #0	@ 00092c9a 0022
.org 0x92c9c
	movs r0, #24	@ 00092c9c 1820
.org 0x92c9e
	strb r0, [r1, #0]	@ 00092c9e 0870
.org 0x92ca0
	ldr r1, [pc, #52]	@ 00092ca0 0d49
.org 0x92ca2
	strb r0, [r3, #9]	@ 00092ca2 5872
.org 0x92ca4
	ldr r0, [r1, #96]	@ 00092ca4 086e
.org 0x92ca6
	ldr r0, [r0, #0]	@ 00092ca6 0068
.org 0x92ca8
	str r0, [r3, #20]	@ 00092ca8 5861
.org 0x92caa
	movs r0, #0	@ 00092caa 0020
.org 0x92cac
	strh r2, [r3, #32]	@ 00092cac 1a84
.org 0x92cae
	adds r1, r3, #0	@ 00092cae 191c
.org 0x92cb0
	adds r1, #34	@ 00092cb0 2231
.org 0x92cb2
	strb r0, [r1, #0]	@ 00092cb2 0870
.org 0x92cb4
	ldrb r1, [r3, #11]	@ 00092cb4 d97a
.org 0x92cb6
	movs r0, #16	@ 00092cb6 1020
.org 0x92cb8
	orrs r0, r1	@ 00092cb8 0843
.org 0x92cba
	strb r0, [r3, #11]	@ 00092cba d872
.org 0x92cbc
	ldrb r0, [r3, #28]	@ 00092cbc 187f
.org 0x92cbe
	strb r0, [r3, #29]	@ 00092cbe 5877
.org 0x92cc0
	ldr r0, [r6, #0]	@ 00092cc0 3068
.org 0x92cc2
	ldr r1, [r6, #4]	@ 00092cc2 7168
.org 0x92cc4
	str r0, [r3, #84]	@ 00092cc4 5865
.org 0x92cc6
	str r1, [r3, #88]	@ 00092cc6 9965
.org 0x92cc8
	strb r5, [r3, #16]	@ 00092cc8 1d74
.org 0x92cca
	strb r4, [r3, #17]	@ 00092cca 5c74
.org 0x92ccc
	adds r0, r3, #0	@ 00092ccc 181c
.org 0x92cce
	pop {r4, r5, r6}	@ 00092cce 70bc
.org 0x92cd0
	pop {r1}	@ 00092cd0 02bc
.org 0x92cd2
	bx r1	@ 00092cd2 0847
