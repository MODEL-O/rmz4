@ FUN_080b7a44  entry 0x080b7a44  size 94
.thumb
.org 0xb7a44
FUN_080b7a44:
	push {r4, r5, r6, lr}	@ 000b7a44 70b5
.org 0xb7a46
	adds r6, r0, #0	@ 000b7a46 061c
.org 0xb7a48
	lsls r1, r1, #24	@ 000b7a48 0906
.org 0xb7a4a
	lsrs r5, r1, #24	@ 000b7a4a 0d0e
.org 0xb7a4c
	lsls r2, r2, #24	@ 000b7a4c 1206
.org 0xb7a4e
	lsrs r4, r2, #24	@ 000b7a4e 140e
.org 0xb7a50
	ldr r0, [pc, #80]	@ 000b7a50 1448
.org 0xb7a52
	ldr r0, [r0, #0]	@ 000b7a52 0068
.org 0xb7a54
	bl 0x5500	@ 000b7a54 4df754fd
.org 0xb7a58
	adds r3, r0, #0	@ 000b7a58 031c
.org 0xb7a5a
	cmp r3, #0	@ 000b7a5a 002b
.org 0xb7a5c
	beq.n 0xb7a9c	@ 000b7a5c 1ed0
.org 0xb7a5e
	adds r1, r3, #0	@ 000b7a5e 191c
.org 0xb7a60
	adds r1, #37	@ 000b7a60 2531
.org 0xb7a62
	movs r2, #0	@ 000b7a62 0022
.org 0xb7a64
	movs r0, #24	@ 000b7a64 1820
.org 0xb7a66
	strb r0, [r1, #0]	@ 000b7a66 0870
.org 0xb7a68
	ldr r0, [pc, #60]	@ 000b7a68 0f48
.org 0xb7a6a
	movs r1, #102	@ 000b7a6a 6621
.org 0xb7a6c
	strb r1, [r3, #9]	@ 000b7a6c 5972
.org 0xb7a6e
	movs r1, #204	@ 000b7a6e cc21
.org 0xb7a70
	lsls r1, r1, #1	@ 000b7a70 4900
.org 0xb7a72
	adds r0, r0, r1	@ 000b7a72 4018
.org 0xb7a74
	ldr r0, [r0, #0]	@ 000b7a74 0068
.org 0xb7a76
	ldr r0, [r0, #0]	@ 000b7a76 0068
.org 0xb7a78
	str r0, [r3, #20]	@ 000b7a78 5861
.org 0xb7a7a
	movs r0, #0	@ 000b7a7a 0020
.org 0xb7a7c
	strh r2, [r3, #32]	@ 000b7a7c 1a84
.org 0xb7a7e
	adds r1, r3, #0	@ 000b7a7e 191c
.org 0xb7a80
	adds r1, #34	@ 000b7a80 2231
.org 0xb7a82
	strb r0, [r1, #0]	@ 000b7a82 0870
.org 0xb7a84
	ldrb r1, [r3, #11]	@ 000b7a84 d97a
.org 0xb7a86
	movs r0, #16	@ 000b7a86 1020
.org 0xb7a88
	orrs r0, r1	@ 000b7a88 0843
.org 0xb7a8a
	strb r0, [r3, #11]	@ 000b7a8a d872
.org 0xb7a8c
	ldrb r0, [r3, #28]	@ 000b7a8c 187f
.org 0xb7a8e
	strb r0, [r3, #29]	@ 000b7a8e 5877
.org 0xb7a90
	ldr r0, [r6, #0]	@ 000b7a90 3068
.org 0xb7a92
	ldr r1, [r6, #4]	@ 000b7a92 7168
.org 0xb7a94
	str r0, [r3, #84]	@ 000b7a94 5865
.org 0xb7a96
	str r1, [r3, #88]	@ 000b7a96 9965
.org 0xb7a98
	strb r5, [r3, #16]	@ 000b7a98 1d74
.org 0xb7a9a
	strb r4, [r3, #17]	@ 000b7a9a 5c74
.org 0xb7a9c
	pop {r4, r5, r6}	@ 000b7a9c 70bc
.org 0xb7a9e
	pop {r0}	@ 000b7a9e 01bc
.org 0xb7aa0
	bx r0	@ 000b7aa0 0047
