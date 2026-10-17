@ FUN_080d5a0c  entry 0x080d5a0c  size 136
.thumb
.org 0xd5a0c
FUN_080d5a0c:
	push {r4, r5, r6, lr}	@ 000d5a0c 70b5
.org 0xd5a0e
	adds r4, r0, #0	@ 000d5a0e 041c
.org 0xd5a10
	lsls r1, r1, #24	@ 000d5a10 0906
.org 0xd5a12
	lsrs r6, r1, #24	@ 000d5a12 0e0e
.org 0xd5a14
	lsls r2, r2, #24	@ 000d5a14 1206
.org 0xd5a16
	lsrs r5, r2, #24	@ 000d5a16 150e
.org 0xd5a18
	ldr r0, [pc, #120]	@ 000d5a18 1e48
.org 0xd5a1a
	ldr r0, [r0, #0]	@ 000d5a1a 0068
.org 0xd5a1c
	bl 0x5500	@ 000d5a1c 2ff770fd
.org 0xd5a20
	adds r3, r0, #0	@ 000d5a20 031c
.org 0xd5a22
	cmp r3, #0	@ 000d5a22 002b
.org 0xd5a24
	beq.n 0xd5a8c	@ 000d5a24 32d0
.org 0xd5a26
	adds r1, r3, #0	@ 000d5a26 191c
.org 0xd5a28
	adds r1, #37	@ 000d5a28 2531
.org 0xd5a2a
	movs r2, #0	@ 000d5a2a 0022
.org 0xd5a2c
	movs r0, #1	@ 000d5a2c 0120
.org 0xd5a2e
	strb r0, [r1, #0]	@ 000d5a2e 0870
.org 0xd5a30
	ldr r1, [pc, #100]	@ 000d5a30 1949
.org 0xd5a32
	movs r0, #19	@ 000d5a32 1320
.org 0xd5a34
	strb r0, [r3, #9]	@ 000d5a34 5872
.org 0xd5a36
	ldr r0, [r1, #76]	@ 000d5a36 c86c
.org 0xd5a38
	ldr r0, [r0, #0]	@ 000d5a38 0068
.org 0xd5a3a
	str r0, [r3, #20]	@ 000d5a3a 5861
.org 0xd5a3c
	movs r0, #0	@ 000d5a3c 0020
.org 0xd5a3e
	strh r2, [r3, #32]	@ 000d5a3e 1a84
.org 0xd5a40
	adds r1, r3, #0	@ 000d5a40 191c
.org 0xd5a42
	adds r1, #34	@ 000d5a42 2231
.org 0xd5a44
	strb r0, [r1, #0]	@ 000d5a44 0870
.org 0xd5a46
	ldr r0, [r4, #0]	@ 000d5a46 2068
.org 0xd5a48
	str r0, [r3, #84]	@ 000d5a48 5865
.org 0xd5a4a
	ldr r0, [r4, #4]	@ 000d5a4a 6068
.org 0xd5a4c
	ldr r1, [pc, #76]	@ 000d5a4c 1349
.org 0xd5a4e
	adds r0, r0, r1	@ 000d5a4e 4018
.org 0xd5a50
	str r0, [r3, #88]	@ 000d5a50 9865
.org 0xd5a52
	ldr r0, [r4, #0]	@ 000d5a52 2068
.org 0xd5a54
	ldr r1, [pc, #72]	@ 000d5a54 1249
.org 0xd5a56
	adds r0, r0, r1	@ 000d5a56 4018
.org 0xd5a58
	str r0, [r3, #100]	@ 000d5a58 5866
.org 0xd5a5a
	ldr r0, [r4, #4]	@ 000d5a5a 6068
.org 0xd5a5c
	movs r1, #192	@ 000d5a5c c021
.org 0xd5a5e
	lsls r1, r1, #4	@ 000d5a5e 0901
.org 0xd5a60
	adds r0, r0, r1	@ 000d5a60 4018
.org 0xd5a62
	str r0, [r3, #104]	@ 000d5a62 9866
.org 0xd5a64
	ldr r0, [r4, #0]	@ 000d5a64 2068
.org 0xd5a66
	adds r0, r0, r1	@ 000d5a66 4018
.org 0xd5a68
	str r0, [r3, #92]	@ 000d5a68 d865
.org 0xd5a6a
	ldr r0, [r4, #4]	@ 000d5a6a 6068
.org 0xd5a6c
	adds r0, r0, r1	@ 000d5a6c 4018
.org 0xd5a6e
	str r0, [r3, #96]	@ 000d5a6e 1866
.org 0xd5a70
	ldr r0, [r4, #0]	@ 000d5a70 2068
.org 0xd5a72
	str r0, [r3, #124]	@ 000d5a72 d867
.org 0xd5a74
	adds r1, r3, #0	@ 000d5a74 191c
.org 0xd5a76
	adds r1, #128	@ 000d5a76 8031
.org 0xd5a78
	ldr r0, [r4, #4]	@ 000d5a78 6068
.org 0xd5a7a
	str r0, [r1, #0]	@ 000d5a7a 0860
.org 0xd5a7c
	strb r6, [r3, #16]	@ 000d5a7c 1e74
.org 0xd5a7e
	strb r5, [r3, #17]	@ 000d5a7e 5d74
.org 0xd5a80
	subs r1, #8	@ 000d5a80 0839
.org 0xd5a82
	movs r0, #49	@ 000d5a82 3120
.org 0xd5a84
	strb r0, [r1, #0]	@ 000d5a84 0870
.org 0xd5a86
	adds r1, #1	@ 000d5a86 0131
.org 0xd5a88
	movs r0, #14	@ 000d5a88 0e20
.org 0xd5a8a
	strb r0, [r1, #0]	@ 000d5a8a 0870
.org 0xd5a8c
	adds r0, r3, #0	@ 000d5a8c 181c
.org 0xd5a8e
	pop {r4, r5, r6}	@ 000d5a8e 70bc
.org 0xd5a90
	pop {r1}	@ 000d5a90 02bc
.org 0xd5a92
	bx r1	@ 000d5a92 0847
