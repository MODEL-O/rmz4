@ FUN_080a7b2c  entry 0x080a7b2c  size 96
.thumb
.org 0xa7b2c
FUN_080a7b2c:
	push {r4, r5, r6, lr}	@ 000a7b2c 70b5
.org 0xa7b2e
	adds r4, r0, #0	@ 000a7b2e 041c
.org 0xa7b30
	lsls r1, r1, #24	@ 000a7b30 0906
.org 0xa7b32
	lsrs r6, r1, #24	@ 000a7b32 0e0e
.org 0xa7b34
	lsls r2, r2, #24	@ 000a7b34 1206
.org 0xa7b36
	lsrs r5, r2, #24	@ 000a7b36 150e
.org 0xa7b38
	ldr r0, [pc, #80]	@ 000a7b38 1448
.org 0xa7b3a
	ldr r0, [r0, #0]	@ 000a7b3a 0068
.org 0xa7b3c
	bl 0x5500	@ 000a7b3c 5df7e0fc
.org 0xa7b40
	adds r3, r0, #0	@ 000a7b40 031c
.org 0xa7b42
	cmp r3, #0	@ 000a7b42 002b
.org 0xa7b44
	beq.n 0xa7b84	@ 000a7b44 1ed0
.org 0xa7b46
	adds r1, r3, #0	@ 000a7b46 191c
.org 0xa7b48
	adds r1, #37	@ 000a7b48 2531
.org 0xa7b4a
	movs r2, #0	@ 000a7b4a 0022
.org 0xa7b4c
	movs r0, #24	@ 000a7b4c 1820
.org 0xa7b4e
	strb r0, [r1, #0]	@ 000a7b4e 0870
.org 0xa7b50
	ldr r0, [pc, #60]	@ 000a7b50 0f48
.org 0xa7b52
	movs r1, #66	@ 000a7b52 4221
.org 0xa7b54
	strb r1, [r3, #9]	@ 000a7b54 5972
.org 0xa7b56
	adds r1, #198	@ 000a7b56 c631
.org 0xa7b58
	adds r0, r0, r1	@ 000a7b58 4018
.org 0xa7b5a
	ldr r0, [r0, #0]	@ 000a7b5a 0068
.org 0xa7b5c
	ldr r0, [r0, #0]	@ 000a7b5c 0068
.org 0xa7b5e
	str r0, [r3, #20]	@ 000a7b5e 5861
.org 0xa7b60
	movs r0, #0	@ 000a7b60 0020
.org 0xa7b62
	strh r2, [r3, #32]	@ 000a7b62 1a84
.org 0xa7b64
	adds r1, r3, #0	@ 000a7b64 191c
.org 0xa7b66
	adds r1, #34	@ 000a7b66 2231
.org 0xa7b68
	strb r0, [r1, #0]	@ 000a7b68 0870
.org 0xa7b6a
	ldrb r1, [r3, #11]	@ 000a7b6a d97a
.org 0xa7b6c
	movs r0, #16	@ 000a7b6c 1020
.org 0xa7b6e
	orrs r0, r1	@ 000a7b6e 0843
.org 0xa7b70
	strb r0, [r3, #11]	@ 000a7b70 d872
.org 0xa7b72
	ldrb r0, [r3, #28]	@ 000a7b72 187f
.org 0xa7b74
	strb r0, [r3, #29]	@ 000a7b74 5877
.org 0xa7b76
	str r4, [r3, #40]	@ 000a7b76 9c62
.org 0xa7b78
	ldr r0, [r4, #84]	@ 000a7b78 606d
.org 0xa7b7a
	ldr r1, [r4, #88]	@ 000a7b7a a16d
.org 0xa7b7c
	str r0, [r3, #84]	@ 000a7b7c 5865
.org 0xa7b7e
	str r1, [r3, #88]	@ 000a7b7e 9965
.org 0xa7b80
	strb r6, [r3, #16]	@ 000a7b80 1e74
.org 0xa7b82
	strb r5, [r3, #17]	@ 000a7b82 5d74
.org 0xa7b84
	adds r0, r3, #0	@ 000a7b84 181c
.org 0xa7b86
	pop {r4, r5, r6}	@ 000a7b86 70bc
.org 0xa7b88
	pop {r1}	@ 000a7b88 02bc
.org 0xa7b8a
	bx r1	@ 000a7b8a 0847
