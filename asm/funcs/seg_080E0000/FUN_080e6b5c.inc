@ FUN_080e6b5c  entry 0x080e6b5c  size 130
.thumb
.org 0xe6b5c
FUN_080e6b5c:
	push {r4, r5, r6, r7, lr}	@ 000e6b5c f0b5
.org 0xe6b5e
	adds r6, r0, #0	@ 000e6b5e 061c
.org 0xe6b60
	lsls r4, r1, #16	@ 000e6b60 0c04
.org 0xe6b62
	lsrs r7, r4, #16	@ 000e6b62 270c
.org 0xe6b64
	lsls r2, r2, #24	@ 000e6b64 1206
.org 0xe6b66
	lsrs r5, r2, #24	@ 000e6b66 150e
.org 0xe6b68
	ldr r0, [pc, #76]	@ 000e6b68 1348
.org 0xe6b6a
	ldr r0, [r0, #0]	@ 000e6b6a 0068
.org 0xe6b6c
	bl 0x5500	@ 000e6b6c 1ef7c8fc
.org 0xe6b70
	adds r3, r0, #0	@ 000e6b70 031c
.org 0xe6b72
	cmp r3, #0	@ 000e6b72 002b
.org 0xe6b74
	beq.n 0xe6be2	@ 000e6b74 35d0
.org 0xe6b76
	adds r1, r3, #0	@ 000e6b76 191c
.org 0xe6b78
	adds r1, #37	@ 000e6b78 2531
.org 0xe6b7a
	movs r2, #0	@ 000e6b7a 0022
.org 0xe6b7c
	movs r0, #1	@ 000e6b7c 0120
.org 0xe6b7e
	strb r0, [r1, #0]	@ 000e6b7e 0870
.org 0xe6b80
	ldr r0, [pc, #56]	@ 000e6b80 0e48
.org 0xe6b82
	movs r1, #82	@ 000e6b82 5221
.org 0xe6b84
	strb r1, [r3, #9]	@ 000e6b84 5972
.org 0xe6b86
	adds r1, #246	@ 000e6b86 f631
.org 0xe6b88
	adds r0, r0, r1	@ 000e6b88 4018
.org 0xe6b8a
	ldr r0, [r0, #0]	@ 000e6b8a 0068
.org 0xe6b8c
	ldr r0, [r0, #0]	@ 000e6b8c 0068
.org 0xe6b8e
	str r0, [r3, #20]	@ 000e6b8e 5861
.org 0xe6b90
	movs r0, #0	@ 000e6b90 0020
.org 0xe6b92
	strh r2, [r3, #32]	@ 000e6b92 1a84
.org 0xe6b94
	adds r1, r3, #0	@ 000e6b94 191c
.org 0xe6b96
	adds r1, #34	@ 000e6b96 2231
.org 0xe6b98
	strb r0, [r1, #0]	@ 000e6b98 0870
.org 0xe6b9a
	ldr r0, [r6, #0]	@ 000e6b9a 3068
.org 0xe6b9c
	ldr r1, [r6, #4]	@ 000e6b9c 7168
.org 0xe6b9e
	str r0, [r3, #84]	@ 000e6b9e 5865
.org 0xe6ba0
	str r1, [r3, #88]	@ 000e6ba0 9965
.org 0xe6ba2
	lsrs r0, r4, #24	@ 000e6ba2 200e
.org 0xe6ba4
	strb r0, [r3, #16]	@ 000e6ba4 1874
.org 0xe6ba6
	strb r7, [r3, #17]	@ 000e6ba6 5f74
.org 0xe6ba8
	adds r2, r5, #0	@ 000e6ba8 2a1c
.org 0xe6baa
	cmp r2, #0	@ 000e6baa 002a
.org 0xe6bac
	beq.n 0xe6bc0	@ 000e6bac 08d0
.org 0xe6bae
	ldrb r0, [r3, #10]	@ 000e6bae 987a
.org 0xe6bb0
	movs r1, #16	@ 000e6bb0 1021
.org 0xe6bb2
	orrs r0, r1	@ 000e6bb2 0843
.org 0xe6bb4
	b.n 0xe6bc6	@ 000e6bb4 07e0
.org 0xe6bb6
	.byte 0x00	@ 000e6bb6 data
.org 0xe6bb7
	.byte 0x00	@ 000e6bb7 data
.org 0xe6bb8
	.byte 0x9c,0xed,0x02,0x02	@ 000e6bb8 data
.org 0xe6bbc
	.byte 0x64,0x6f,0x86,0x08	@ 000e6bbc data
.org 0xe6bc0
	ldrb r1, [r3, #10]	@ 000e6bc0 997a
.org 0xe6bc2
	movs r0, #239	@ 000e6bc2 ef20
.org 0xe6bc4
	ands r0, r1	@ 000e6bc4 0840
.org 0xe6bc6
	strb r0, [r3, #10]	@ 000e6bc6 9872
.org 0xe6bc8
	movs r1, #1	@ 000e6bc8 0121
.org 0xe6bca
	ands r1, r2	@ 000e6bca 1140
.org 0xe6bcc
	adds r0, r3, #0	@ 000e6bcc 181c
.org 0xe6bce
	adds r0, #76	@ 000e6bce 4c30
.org 0xe6bd0
	strb r1, [r0, #0]	@ 000e6bd0 0170
.org 0xe6bd2
	adds r3, #74	@ 000e6bd2 4a33
.org 0xe6bd4
	lsls r1, r1, #4	@ 000e6bd4 0901
.org 0xe6bd6
	ldrb r2, [r3, #0]	@ 000e6bd6 1a78
.org 0xe6bd8
	movs r0, #17	@ 000e6bd8 1120
.org 0xe6bda
	negs r0, r0	@ 000e6bda 4042
.org 0xe6bdc
	ands r0, r2	@ 000e6bdc 1040
