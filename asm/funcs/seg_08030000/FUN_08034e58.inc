@ FUN_08034e58  entry 0x08034e58  size 122
.thumb
.org 0x34e58
FUN_08034e58:
	push {r4, lr}	@ 00034e58 10b5
.org 0x34e5a
	adds r4, r0, #0	@ 00034e5a 041c
.org 0x34e5c
	adds r0, #180	@ 00034e5c b430
.org 0x34e5e
	ldrb r0, [r0, #12]	@ 00034e5e 007b
.org 0x34e60
	cmp r0, #1	@ 00034e60 0128
.org 0x34e62
	bne.n 0x34e6a	@ 00034e62 02d1
.org 0x34e64
	adds r0, r4, #0	@ 00034e64 201c
.org 0x34e66
	movs r1, #0	@ 00034e66 0021
.org 0x34e68
	b.n 0x34e6e	@ 00034e68 01e0
.org 0x34e6a
	adds r0, r4, #0	@ 00034e6a 201c
.org 0x34e6c
	movs r1, #1	@ 00034e6c 0121
.org 0x34e6e
	bl 0x3a428	@ 00034e6e 05f0dbfa
.org 0x34e72
	lsls r0, r0, #24	@ 00034e72 0006
.org 0x34e74
	lsrs r1, r0, #24	@ 00034e74 010e
.org 0x34e76
	ldr r2, [pc, #60]	@ 00034e76 0f4a
.org 0x34e78
	adds r0, r4, r2	@ 00034e78 a018
.org 0x34e7a
	ldrb r0, [r0, #0]	@ 00034e7a 0078
.org 0x34e7c
	cmp r0, #3	@ 00034e7c 0328
.org 0x34e7e
	bne.n 0x34e82	@ 00034e7e 00d1
.org 0x34e80
	movs r1, #2	@ 00034e80 0221
.org 0x34e82
	cmp r1, #2	@ 00034e82 0229
.org 0x34e84
	bne.n 0x34ec0	@ 00034e84 1cd1
.org 0x34e86
	ldr r0, [pc, #48]	@ 00034e86 0c48
.org 0x34e88
	adds r2, r4, r0	@ 00034e88 2218
.org 0x34e8a
	ldrb r0, [r2, #0]	@ 00034e8a 1078
.org 0x34e8c
	movs r1, #2	@ 00034e8c 0221
.org 0x34e8e
	orrs r0, r1	@ 00034e8e 0843
.org 0x34e90
	movs r1, #8	@ 00034e90 0821
.org 0x34e92
	orrs r0, r1	@ 00034e92 0843
.org 0x34e94
	strb r0, [r2, #0]	@ 00034e94 1070
.org 0x34e96
	movs r1, #0	@ 00034e96 0021
.org 0x34e98
	strb r1, [r4, #14]	@ 00034e98 a173
.org 0x34e9a
	strb r1, [r4, #15]	@ 00034e9a e173
.org 0x34e9c
	ldr r0, [pc, #28]	@ 00034e9c 0748
.org 0x34e9e
	adds r2, r4, r0	@ 00034e9e 2218
.org 0x34ea0
	movs r0, #4	@ 00034ea0 0420
.org 0x34ea2
	strb r0, [r2, #0]	@ 00034ea2 1070
.org 0x34ea4
	movs r2, #129	@ 00034ea4 8122
.org 0x34ea6
	lsls r2, r2, #1	@ 00034ea6 5200
.org 0x34ea8
	adds r0, r4, r2	@ 00034ea8 a018
.org 0x34eaa
	strb r1, [r0, #0]	@ 00034eaa 0170
.org 0x34eac
	adds r0, r4, #0	@ 00034eac 201c
.org 0x34eae
	bl 0x33b8c	@ 00034eae fef76dfe
.org 0x34eb2
	b.n 0x34ed8	@ 00034eb2 11e0
.org 0x34eb4
	.byte 0x6f,0x02,0x00,0x00	@ 00034eb4 data
.org 0x34eb8
	.byte 0x53,0x01,0x00,0x00	@ 00034eb8 data
.org 0x34ebc
	.byte 0x01,0x01,0x00,0x00	@ 00034ebc data
.org 0x34ec0
	ldr r0, [pc, #28]	@ 00034ec0 0748
.org 0x34ec2
	adds r2, r4, r0	@ 00034ec2 2218
.org 0x34ec4
	movs r1, #0	@ 00034ec4 0021
.org 0x34ec6
	movs r0, #1	@ 00034ec6 0120
.org 0x34ec8
	strb r0, [r2, #0]	@ 00034ec8 1070
.org 0x34eca
	movs r2, #129	@ 00034eca 8122
.org 0x34ecc
	lsls r2, r2, #1	@ 00034ecc 5200
.org 0x34ece
	adds r0, r4, r2	@ 00034ece a018
.org 0x34ed0
	strb r1, [r0, #0]	@ 00034ed0 0170
