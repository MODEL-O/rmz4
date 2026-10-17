@ FUN_08001b38  entry 0x08001b38  size 112
.thumb
.org 0x1b38
FUN_08001b38:
	push {r4, r5, r6, r7, lr}	@ 00001b38 f0b5
.org 0x1b3a
	mov r7, r9	@ 00001b3a 4f46
.org 0x1b3c
	mov r6, r8	@ 00001b3c 4646
.org 0x1b3e
	push {r6, r7}	@ 00001b3e c0b4
.org 0x1b40
	adds r7, r1, #0	@ 00001b40 0f1c
.org 0x1b42
	lsls r0, r0, #16	@ 00001b42 0004
.org 0x1b44
	lsrs r5, r0, #16	@ 00001b44 050c
.org 0x1b46
	lsls r2, r2, #16	@ 00001b46 1204
.org 0x1b48
	movs r6, #1	@ 00001b48 0126
.org 0x1b4a
	lsrs r0, r2, #16	@ 00001b4a 100c
.org 0x1b4c
	mov r8, r0	@ 00001b4c 8046
.org 0x1b4e
	cmp r2, #0	@ 00001b4e 002a
.org 0x1b50
	ble.n 0x1b98	@ 00001b50 22dd
.org 0x1b52
	ldr r1, [pc, #84]	@ 00001b52 1549
.org 0x1b54
	mov r9, r1	@ 00001b54 8946
.org 0x1b56
	movs r4, #3	@ 00001b56 0324
.org 0x1b58
	adds r0, r5, #0	@ 00001b58 281c
.org 0x1b5a
	mov r1, r9	@ 00001b5a 4946
.org 0x1b5c
	bl 0x128cc0	@ 00001b5c 27f1b0f8
.org 0x1b60
	lsls r0, r0, #16	@ 00001b60 0004
.org 0x1b62
	lsrs r6, r0, #16	@ 00001b62 060c
.org 0x1b64
	subs r0, r4, #1	@ 00001b64 601e
.org 0x1b66
	lsls r0, r0, #16	@ 00001b66 0004
.org 0x1b68
	lsrs r4, r0, #16	@ 00001b68 040c
.org 0x1b6a
	cmp r4, #0	@ 00001b6a 002c
.org 0x1b6c
	beq.n 0x1b72	@ 00001b6c 01d0
.org 0x1b6e
	cmp r6, #0	@ 00001b6e 002e
.org 0x1b70
	bne.n 0x1b58	@ 00001b70 f2d1
.org 0x1b72
	cmp r6, #0	@ 00001b72 002e
.org 0x1b74
	bne.n 0x1b98	@ 00001b74 10d1
.org 0x1b76
	mov r0, r9	@ 00001b76 4846
.org 0x1b78
	adds r1, r7, #0	@ 00001b78 391c
.org 0x1b7a
	movs r2, #8	@ 00001b7a 0822
.org 0x1b7c
	bl 0xb30	@ 00001b7c fef7d8ff
.org 0x1b80
	adds r0, r5, #1	@ 00001b80 681c
.org 0x1b82
	lsls r0, r0, #16	@ 00001b82 0004
.org 0x1b84
	lsrs r5, r0, #16	@ 00001b84 050c
.org 0x1b86
	adds r7, #8	@ 00001b86 0837
.org 0x1b88
	mov r1, r8	@ 00001b88 4146
.org 0x1b8a
	lsls r0, r1, #16	@ 00001b8a 0804
.org 0x1b8c
	ldr r1, [pc, #28]	@ 00001b8c 0749
.org 0x1b8e
	adds r0, r0, r1	@ 00001b8e 4018
.org 0x1b90
	lsrs r1, r0, #16	@ 00001b90 010c
.org 0x1b92
	mov r8, r1	@ 00001b92 8846
.org 0x1b94
	cmp r0, #0	@ 00001b94 0028
.org 0x1b96
	bgt.n 0x1b56	@ 00001b96 dedc
.org 0x1b98
	lsls r0, r6, #16	@ 00001b98 3004
.org 0x1b9a
	asrs r0, r0, #16	@ 00001b9a 0014
.org 0x1b9c
	pop {r3, r4}	@ 00001b9c 18bc
.org 0x1b9e
	mov r8, r3	@ 00001b9e 9846
.org 0x1ba0
	mov r9, r4	@ 00001ba0 a146
.org 0x1ba2
	pop {r4, r5, r6, r7}	@ 00001ba2 f0bc
.org 0x1ba4
	pop {r1}	@ 00001ba4 02bc
.org 0x1ba6
	bx r1	@ 00001ba6 0847
