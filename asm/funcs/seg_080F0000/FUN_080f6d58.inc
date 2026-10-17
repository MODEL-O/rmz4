@ FUN_080f6d58  entry 0x080f6d58  size 86
.thumb
.org 0xf6d58
FUN_080f6d58:
	push {r4, r5, r6, lr}	@ 000f6d58 70b5
.org 0xf6d5a
	adds r6, r0, #0	@ 000f6d5a 061c
.org 0xf6d5c
	lsls r1, r1, #24	@ 000f6d5c 0906
.org 0xf6d5e
	lsrs r5, r1, #24	@ 000f6d5e 0d0e
.org 0xf6d60
	ldr r0, [pc, #76]	@ 000f6d60 1348
.org 0xf6d62
	ldr r0, [r0, #0]	@ 000f6d62 0068
.org 0xf6d64
	bl 0x5500	@ 000f6d64 0ef7ccfb
.org 0xf6d68
	adds r4, r0, #0	@ 000f6d68 041c
.org 0xf6d6a
	cmp r4, #0	@ 000f6d6a 002c
.org 0xf6d6c
	beq.n 0xf6da6	@ 000f6d6c 1bd0
.org 0xf6d6e
	adds r1, r4, #0	@ 000f6d6e 211c
.org 0xf6d70
	adds r1, #37	@ 000f6d70 2531
.org 0xf6d72
	movs r3, #0	@ 000f6d72 0023
.org 0xf6d74
	movs r0, #30	@ 000f6d74 1e20
.org 0xf6d76
	strb r0, [r1, #0]	@ 000f6d76 0870
.org 0xf6d78
	ldr r1, [pc, #56]	@ 000f6d78 0e49
.org 0xf6d7a
	movs r0, #26	@ 000f6d7a 1a20
.org 0xf6d7c
	strb r0, [r4, #9]	@ 000f6d7c 6072
.org 0xf6d7e
	ldr r0, [r1, #104]	@ 000f6d7e 886e
.org 0xf6d80
	ldr r0, [r0, #0]	@ 000f6d80 0068
.org 0xf6d82
	str r0, [r4, #20]	@ 000f6d82 6061
.org 0xf6d84
	movs r2, #0	@ 000f6d84 0022
.org 0xf6d86
	strh r3, [r4, #32]	@ 000f6d86 2384
.org 0xf6d88
	adds r0, r4, #0	@ 000f6d88 201c
.org 0xf6d8a
	adds r0, #34	@ 000f6d8a 2230
.org 0xf6d8c
	strb r2, [r0, #0]	@ 000f6d8c 0270
.org 0xf6d8e
	ldrb r1, [r4, #11]	@ 000f6d8e e17a
.org 0xf6d90
	movs r0, #16	@ 000f6d90 1020
.org 0xf6d92
	orrs r0, r1	@ 000f6d92 0843
.org 0xf6d94
	strb r0, [r4, #11]	@ 000f6d94 e072
.org 0xf6d96
	ldrb r0, [r4, #28]	@ 000f6d96 207f
.org 0xf6d98
	strb r0, [r4, #29]	@ 000f6d98 6077
.org 0xf6d9a
	str r6, [r4, #40]	@ 000f6d9a a662
.org 0xf6d9c
	strb r2, [r4, #16]	@ 000f6d9c 2274
.org 0xf6d9e
	strb r5, [r4, #17]	@ 000f6d9e 6574
.org 0xf6da0
	adds r0, r4, #0	@ 000f6da0 201c
.org 0xf6da2
	adds r0, #180	@ 000f6da2 b430
.org 0xf6da4
	strb r2, [r0, #0]	@ 000f6da4 0270
.org 0xf6da6
	adds r0, r4, #0	@ 000f6da6 201c
.org 0xf6da8
	pop {r4, r5, r6}	@ 000f6da8 70bc
.org 0xf6daa
	pop {r1}	@ 000f6daa 02bc
.org 0xf6dac
	bx r1	@ 000f6dac 0847
