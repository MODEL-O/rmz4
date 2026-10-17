@ FUN_08095e60  entry 0x08095e60  size 98
.thumb
.org 0x95e60
FUN_08095e60:
	push {r4, r5, r6, r7, lr}	@ 00095e60 f0b5
.org 0x95e62
	adds r5, r0, #0	@ 00095e62 051c
.org 0x95e64
	adds r6, r1, #0	@ 00095e64 0e1c
.org 0x95e66
	lsls r2, r2, #24	@ 00095e66 1206
.org 0x95e68
	lsrs r7, r2, #24	@ 00095e68 170e
.org 0x95e6a
	ldr r0, [pc, #88]	@ 00095e6a 1648
.org 0x95e6c
	ldr r0, [r0, #0]	@ 00095e6c 0068
.org 0x95e6e
	bl 0x5500	@ 00095e6e 6ff747fb
.org 0x95e72
	adds r4, r0, #0	@ 00095e72 041c
.org 0x95e74
	cmp r4, #0	@ 00095e74 002c
.org 0x95e76
	beq.n 0x95eba	@ 00095e76 20d0
.org 0x95e78
	adds r1, r4, #0	@ 00095e78 211c
.org 0x95e7a
	adds r1, #37	@ 00095e7a 2531
.org 0x95e7c
	movs r2, #0	@ 00095e7c 0022
.org 0x95e7e
	movs r0, #24	@ 00095e7e 1820
.org 0x95e80
	strb r0, [r1, #0]	@ 00095e80 0870
.org 0x95e82
	ldr r1, [pc, #68]	@ 00095e82 1149
.org 0x95e84
	movs r0, #27	@ 00095e84 1b20
.org 0x95e86
	strb r0, [r4, #9]	@ 00095e86 6072
.org 0x95e88
	ldr r0, [r1, #108]	@ 00095e88 c86e
.org 0x95e8a
	ldr r0, [r0, #0]	@ 00095e8a 0068
.org 0x95e8c
	str r0, [r4, #20]	@ 00095e8c 6061
.org 0x95e8e
	movs r3, #0	@ 00095e8e 0023
.org 0x95e90
	strh r2, [r4, #32]	@ 00095e90 2284
.org 0x95e92
	adds r0, r4, #0	@ 00095e92 201c
.org 0x95e94
	adds r0, #34	@ 00095e94 2230
.org 0x95e96
	strb r3, [r0, #0]	@ 00095e96 0370
.org 0x95e98
	ldrb r1, [r4, #11]	@ 00095e98 e17a
.org 0x95e9a
	movs r0, #16	@ 00095e9a 1020
.org 0x95e9c
	orrs r0, r1	@ 00095e9c 0843
.org 0x95e9e
	strb r0, [r4, #11]	@ 00095e9e e072
.org 0x95ea0
	ldrb r0, [r4, #28]	@ 00095ea0 207f
.org 0x95ea2
	strb r0, [r4, #29]	@ 00095ea2 6077
.org 0x95ea4
	str r5, [r4, #40]	@ 00095ea4 a562
.org 0x95ea6
	ldr r0, [r6, #0]	@ 00095ea6 3068
.org 0x95ea8
	ldr r1, [r6, #4]	@ 00095ea8 7168
.org 0x95eaa
	str r0, [r4, #84]	@ 00095eaa 6065
.org 0x95eac
	str r1, [r4, #88]	@ 00095eac a165
.org 0x95eae
	movs r0, #1	@ 00095eae 0120
.org 0x95eb0
	strb r0, [r4, #16]	@ 00095eb0 2074
.org 0x95eb2
	strb r7, [r4, #17]	@ 00095eb2 6774
.org 0x95eb4
	adds r0, r4, #0	@ 00095eb4 201c
.org 0x95eb6
	adds r0, #180	@ 00095eb6 b430
.org 0x95eb8
	strb r3, [r0, #0]	@ 00095eb8 0370
.org 0x95eba
	adds r0, r4, #0	@ 00095eba 201c
.org 0x95ebc
	pop {r4, r5, r6, r7}	@ 00095ebc f0bc
.org 0x95ebe
	pop {r1}	@ 00095ebe 02bc
.org 0x95ec0
	bx r1	@ 00095ec0 0847
