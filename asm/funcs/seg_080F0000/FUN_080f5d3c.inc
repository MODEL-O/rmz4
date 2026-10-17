@ FUN_080f5d3c  entry 0x080f5d3c  size 90
.thumb
.org 0xf5d3c
FUN_080f5d3c:
	push {r4, r5, r6, lr}	@ 000f5d3c 70b5
.org 0xf5d3e
	adds r6, r0, #0	@ 000f5d3e 061c
.org 0xf5d40
	lsls r1, r1, #24	@ 000f5d40 0906
.org 0xf5d42
	lsrs r5, r1, #24	@ 000f5d42 0d0e
.org 0xf5d44
	lsls r2, r2, #24	@ 000f5d44 1206
.org 0xf5d46
	lsrs r4, r2, #24	@ 000f5d46 140e
.org 0xf5d48
	ldr r0, [pc, #76]	@ 000f5d48 1348
.org 0xf5d4a
	ldr r0, [r0, #0]	@ 000f5d4a 0068
.org 0xf5d4c
	bl 0x5500	@ 000f5d4c 0ff7d8fb
.org 0xf5d50
	adds r3, r0, #0	@ 000f5d50 031c
.org 0xf5d52
	cmp r3, #0	@ 000f5d52 002b
.org 0xf5d54
	beq.n 0xf5d8e	@ 000f5d54 1bd0
.org 0xf5d56
	adds r1, r3, #0	@ 000f5d56 191c
.org 0xf5d58
	adds r1, #37	@ 000f5d58 2531
.org 0xf5d5a
	movs r2, #0	@ 000f5d5a 0022
.org 0xf5d5c
	movs r0, #30	@ 000f5d5c 1e20
.org 0xf5d5e
	strb r0, [r1, #0]	@ 000f5d5e 0870
.org 0xf5d60
	ldr r1, [pc, #56]	@ 000f5d60 0e49
.org 0xf5d62
	movs r0, #22	@ 000f5d62 1620
.org 0xf5d64
	strb r0, [r3, #9]	@ 000f5d64 5872
.org 0xf5d66
	ldr r0, [r1, #88]	@ 000f5d66 886d
.org 0xf5d68
	ldr r0, [r0, #0]	@ 000f5d68 0068
.org 0xf5d6a
	str r0, [r3, #20]	@ 000f5d6a 5861
.org 0xf5d6c
	movs r0, #0	@ 000f5d6c 0020
.org 0xf5d6e
	strh r2, [r3, #32]	@ 000f5d6e 1a84
.org 0xf5d70
	adds r1, r3, #0	@ 000f5d70 191c
.org 0xf5d72
	adds r1, #34	@ 000f5d72 2231
.org 0xf5d74
	strb r0, [r1, #0]	@ 000f5d74 0870
.org 0xf5d76
	ldrb r1, [r3, #11]	@ 000f5d76 d97a
.org 0xf5d78
	movs r0, #16	@ 000f5d78 1020
.org 0xf5d7a
	orrs r0, r1	@ 000f5d7a 0843
.org 0xf5d7c
	strb r0, [r3, #11]	@ 000f5d7c d872
.org 0xf5d7e
	ldrb r0, [r3, #28]	@ 000f5d7e 187f
.org 0xf5d80
	strb r0, [r3, #29]	@ 000f5d80 5877
.org 0xf5d82
	ldr r0, [r6, #0]	@ 000f5d82 3068
.org 0xf5d84
	ldr r1, [r6, #4]	@ 000f5d84 7168
.org 0xf5d86
	str r0, [r3, #84]	@ 000f5d86 5865
.org 0xf5d88
	str r1, [r3, #88]	@ 000f5d88 9965
.org 0xf5d8a
	strb r5, [r3, #16]	@ 000f5d8a 1d74
.org 0xf5d8c
	strb r4, [r3, #17]	@ 000f5d8c 5c74
.org 0xf5d8e
	adds r0, r3, #0	@ 000f5d8e 181c
.org 0xf5d90
	pop {r4, r5, r6}	@ 000f5d90 70bc
.org 0xf5d92
	pop {r1}	@ 000f5d92 02bc
.org 0xf5d94
	bx r1	@ 000f5d94 0847
