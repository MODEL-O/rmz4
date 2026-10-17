@ FUN_080f7d44  entry 0x080f7d44  size 90
.thumb
.org 0xf7d44
FUN_080f7d44:
	push {r4, r5, r6, lr}	@ 000f7d44 70b5
.org 0xf7d46
	adds r6, r0, #0	@ 000f7d46 061c
.org 0xf7d48
	lsls r1, r1, #24	@ 000f7d48 0906
.org 0xf7d4a
	lsrs r5, r1, #24	@ 000f7d4a 0d0e
.org 0xf7d4c
	lsls r2, r2, #24	@ 000f7d4c 1206
.org 0xf7d4e
	lsrs r4, r2, #24	@ 000f7d4e 140e
.org 0xf7d50
	ldr r0, [pc, #76]	@ 000f7d50 1348
.org 0xf7d52
	ldr r0, [r0, #0]	@ 000f7d52 0068
.org 0xf7d54
	bl 0x5500	@ 000f7d54 0df7d4fb
.org 0xf7d58
	adds r3, r0, #0	@ 000f7d58 031c
.org 0xf7d5a
	cmp r3, #0	@ 000f7d5a 002b
.org 0xf7d5c
	beq.n 0xf7d96	@ 000f7d5c 1bd0
.org 0xf7d5e
	adds r1, r3, #0	@ 000f7d5e 191c
.org 0xf7d60
	adds r1, #37	@ 000f7d60 2531
.org 0xf7d62
	movs r2, #0	@ 000f7d62 0022
.org 0xf7d64
	movs r0, #30	@ 000f7d64 1e20
.org 0xf7d66
	strb r0, [r1, #0]	@ 000f7d66 0870
.org 0xf7d68
	ldr r1, [pc, #56]	@ 000f7d68 0e49
.org 0xf7d6a
	movs r0, #28	@ 000f7d6a 1c20
.org 0xf7d6c
	strb r0, [r3, #9]	@ 000f7d6c 5872
.org 0xf7d6e
	ldr r0, [r1, #112]	@ 000f7d6e 086f
.org 0xf7d70
	ldr r0, [r0, #0]	@ 000f7d70 0068
.org 0xf7d72
	str r0, [r3, #20]	@ 000f7d72 5861
.org 0xf7d74
	movs r0, #0	@ 000f7d74 0020
.org 0xf7d76
	strh r2, [r3, #32]	@ 000f7d76 1a84
.org 0xf7d78
	adds r1, r3, #0	@ 000f7d78 191c
.org 0xf7d7a
	adds r1, #34	@ 000f7d7a 2231
.org 0xf7d7c
	strb r0, [r1, #0]	@ 000f7d7c 0870
.org 0xf7d7e
	ldrb r1, [r3, #11]	@ 000f7d7e d97a
.org 0xf7d80
	movs r0, #16	@ 000f7d80 1020
.org 0xf7d82
	orrs r0, r1	@ 000f7d82 0843
.org 0xf7d84
	strb r0, [r3, #11]	@ 000f7d84 d872
.org 0xf7d86
	ldrb r0, [r3, #28]	@ 000f7d86 187f
.org 0xf7d88
	strb r0, [r3, #29]	@ 000f7d88 5877
.org 0xf7d8a
	ldr r0, [r6, #0]	@ 000f7d8a 3068
.org 0xf7d8c
	ldr r1, [r6, #4]	@ 000f7d8c 7168
.org 0xf7d8e
	str r0, [r3, #84]	@ 000f7d8e 5865
.org 0xf7d90
	str r1, [r3, #88]	@ 000f7d90 9965
.org 0xf7d92
	strb r5, [r3, #16]	@ 000f7d92 1d74
.org 0xf7d94
	strb r4, [r3, #17]	@ 000f7d94 5c74
.org 0xf7d96
	adds r0, r3, #0	@ 000f7d96 181c
.org 0xf7d98
	pop {r4, r5, r6}	@ 000f7d98 70bc
.org 0xf7d9a
	pop {r1}	@ 000f7d9a 02bc
.org 0xf7d9c
	bx r1	@ 000f7d9c 0847
