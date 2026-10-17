@ FUN_08090e64  entry 0x08090e64  size 78
.thumb
.org 0x90e64
FUN_08090e64:
	push {r4, r5, lr}	@ 00090e64 30b5
.org 0x90e66
	adds r5, r0, #0	@ 00090e66 051c
.org 0x90e68
	ldr r0, [pc, #72]	@ 00090e68 1248
.org 0x90e6a
	ldr r0, [r0, #0]	@ 00090e6a 0068
.org 0x90e6c
	bl 0x5500	@ 00090e6c 74f748fb
.org 0x90e70
	adds r4, r0, #0	@ 00090e70 041c
.org 0x90e72
	cmp r4, #0	@ 00090e72 002c
.org 0x90e74
	beq.n 0x90eaa	@ 00090e74 19d0
.org 0x90e76
	adds r1, r4, #0	@ 00090e76 211c
.org 0x90e78
	adds r1, #37	@ 00090e78 2531
.org 0x90e7a
	movs r3, #0	@ 00090e7a 0023
.org 0x90e7c
	movs r0, #24	@ 00090e7c 1820
.org 0x90e7e
	strb r0, [r1, #0]	@ 00090e7e 0870
.org 0x90e80
	ldr r1, [pc, #52]	@ 00090e80 0d49
.org 0x90e82
	movs r0, #22	@ 00090e82 1620
.org 0x90e84
	strb r0, [r4, #9]	@ 00090e84 6072
.org 0x90e86
	ldr r0, [r1, #88]	@ 00090e86 886d
.org 0x90e88
	ldr r0, [r0, #0]	@ 00090e88 0068
.org 0x90e8a
	str r0, [r4, #20]	@ 00090e8a 6061
.org 0x90e8c
	movs r2, #0	@ 00090e8c 0022
.org 0x90e8e
	strh r3, [r4, #32]	@ 00090e8e 2384
.org 0x90e90
	adds r0, r4, #0	@ 00090e90 201c
.org 0x90e92
	adds r0, #34	@ 00090e92 2230
.org 0x90e94
	strb r2, [r0, #0]	@ 00090e94 0270
.org 0x90e96
	ldrb r1, [r4, #11]	@ 00090e96 e17a
.org 0x90e98
	movs r0, #16	@ 00090e98 1020
.org 0x90e9a
	orrs r0, r1	@ 00090e9a 0843
.org 0x90e9c
	strb r0, [r4, #11]	@ 00090e9c e072
.org 0x90e9e
	ldrb r0, [r4, #28]	@ 00090e9e 207f
.org 0x90ea0
	strb r0, [r4, #29]	@ 00090ea0 6077
.org 0x90ea2
	str r5, [r4, #40]	@ 00090ea2 a562
.org 0x90ea4
	movs r0, #2	@ 00090ea4 0220
.org 0x90ea6
	strb r0, [r4, #16]	@ 00090ea6 2074
.org 0x90ea8
	strb r2, [r4, #17]	@ 00090ea8 6274
.org 0x90eaa
	adds r0, r4, #0	@ 00090eaa 201c
.org 0x90eac
	pop {r4, r5}	@ 00090eac 30bc
.org 0x90eae
	pop {r1}	@ 00090eae 02bc
.org 0x90eb0
	bx r1	@ 00090eb0 0847
