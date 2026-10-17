@ FUN_08017a10  entry 0x08017a10  size 140
.thumb
.org 0x17a10
FUN_08017a10:
	push {r4, r5, r6, r7, lr}	@ 00017a10 f0b5
.org 0x17a12
	mov r7, r8	@ 00017a12 4746
.org 0x17a14
	push {r7}	@ 00017a14 80b4
.org 0x17a16
	sub sp, #8	@ 00017a16 82b0
.org 0x17a18
	adds r7, r0, #0	@ 00017a18 071c
.org 0x17a1a
	ldr r0, [r7, #92]	@ 00017a1a f86d
.org 0x17a1c
	lsls r0, r0, #16	@ 00017a1c 0004
.org 0x17a1e
	mov r8, r0	@ 00017a1e 8046
.org 0x17a20
	ldr r0, [pc, #120]	@ 00017a20 1e48
.org 0x17a22
	ldr r1, [pc, #124]	@ 00017a22 1f49
.org 0x17a24
	adds r0, r0, r1	@ 00017a24 4018
.org 0x17a26
	ldrh r0, [r0, #0]	@ 00017a26 0088
.org 0x17a28
	cmp r0, #0	@ 00017a28 0028
.org 0x17a2a
	beq.n 0x17a76	@ 00017a2a 24d0
.org 0x17a2c
	ldr r0, [pc, #116]	@ 00017a2c 1d48
.org 0x17a2e
	ldr r0, [r0, #0]	@ 00017a2e 0068
.org 0x17a30
	ldr r1, [pc, #116]	@ 00017a30 1d49
.org 0x17a32
	adds r0, r0, r1	@ 00017a32 4018
.org 0x17a34
	mov r1, r8	@ 00017a34 4146
.org 0x17a36
	lsrs r5, r1, #20	@ 00017a36 0d0d
.org 0x17a38
	lsls r5, r5, #1	@ 00017a38 6d00
.org 0x17a3a
	ldr r1, [pc, #112]	@ 00017a3a 1c49
.org 0x17a3c
	adds r5, r5, r1	@ 00017a3c 6d18
.org 0x17a3e
	ldrh r2, [r5, #0]	@ 00017a3e 2a88
.org 0x17a40
	movs r4, #248	@ 00017a40 f824
.org 0x17a42
	lsls r4, r4, #5	@ 00017a42 6401
.org 0x17a44
	adds r1, r4, #0	@ 00017a44 211c
.org 0x17a46
	ands r1, r2	@ 00017a46 1140
.org 0x17a48
	lsls r1, r1, #3	@ 00017a48 c900
.org 0x17a4a
	movs r2, #192	@ 00017a4a c022
.org 0x17a4c
	lsls r2, r2, #19	@ 00017a4c d204
.org 0x17a4e
	adds r1, r1, r2	@ 00017a4e 8918
.org 0x17a50
	movs r6, #128	@ 00017a50 8026
.org 0x17a52
	lsls r6, r6, #2	@ 00017a52 b600
.org 0x17a54
	adds r2, r6, #0	@ 00017a54 321c
.org 0x17a56
	bl 0x128be0	@ 00017a56 11f1c3f8
.org 0x17a5a
	movs r1, #0	@ 00017a5a 0021
.org 0x17a5c
	ldrh r0, [r5, #0]	@ 00017a5c 2888
.org 0x17a5e
	ands r4, r0	@ 00017a5e 0440
.org 0x17a60
	lsls r4, r4, #3	@ 00017a60 e400
.org 0x17a62
	ldr r0, [pc, #76]	@ 00017a62 1348
.org 0x17a64
	adds r4, r4, r0	@ 00017a64 2418
.org 0x17a66
	str r1, [sp, #0]	@ 00017a66 0091
.org 0x17a68
	movs r2, #128	@ 00017a68 8022
.org 0x17a6a
	lsls r2, r2, #17	@ 00017a6a 5204
.org 0x17a6c
	orrs r2, r6	@ 00017a6c 3243
.org 0x17a6e
	mov r0, sp	@ 00017a6e 6846
.org 0x17a70
	adds r1, r4, #0	@ 00017a70 211c
.org 0x17a72
	bl 0x128be0	@ 00017a72 11f1b5f8
.org 0x17a76
	mov r1, r8	@ 00017a76 4146
.org 0x17a78
	lsrs r2, r1, #20	@ 00017a78 0a0d
.org 0x17a7a
	lsls r2, r2, #2	@ 00017a7a 9200
.org 0x17a7c
	ldr r0, [pc, #52]	@ 00017a7c 0d48
.org 0x17a7e
	adds r3, r2, r0	@ 00017a7e 1318
.org 0x17a80
	ldr r1, [r7, #52]	@ 00017a80 796b
.org 0x17a82
	strh r1, [r3, #0]	@ 00017a82 1980
.org 0x17a84
	adds r0, #2	@ 00017a84 0230
.org 0x17a86
	adds r2, r2, r0	@ 00017a86 1218
.org 0x17a88
	ldr r0, [r7, #56]	@ 00017a88 b86b
.org 0x17a8a
	ldr r1, [pc, #44]	@ 00017a8a 0b49
.org 0x17a8c
	adds r0, r0, r1	@ 00017a8c 4018
.org 0x17a8e
	strh r0, [r2, #0]	@ 00017a8e 1080
.org 0x17a90
	add sp, #8	@ 00017a90 02b0
.org 0x17a92
	pop {r3}	@ 00017a92 08bc
.org 0x17a94
	mov r8, r3	@ 00017a94 9846
.org 0x17a96
	pop {r4, r5, r6, r7}	@ 00017a96 f0bc
.org 0x17a98
	pop {r0}	@ 00017a98 01bc
.org 0x17a9a
	bx r0	@ 00017a9a 0047
