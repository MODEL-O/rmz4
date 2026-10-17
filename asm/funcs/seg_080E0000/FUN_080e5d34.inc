@ FUN_080e5d34  entry 0x080e5d34  size 130
.thumb
.org 0xe5d34
FUN_080e5d34:
	push {r4, r5, r6, r7, lr}	@ 000e5d34 f0b5
.org 0xe5d36
	adds r6, r0, #0	@ 000e5d36 061c
.org 0xe5d38
	lsls r4, r1, #16	@ 000e5d38 0c04
.org 0xe5d3a
	lsrs r7, r4, #16	@ 000e5d3a 270c
.org 0xe5d3c
	lsls r2, r2, #24	@ 000e5d3c 1206
.org 0xe5d3e
	lsrs r5, r2, #24	@ 000e5d3e 150e
.org 0xe5d40
	ldr r0, [pc, #76]	@ 000e5d40 1348
.org 0xe5d42
	ldr r0, [r0, #0]	@ 000e5d42 0068
.org 0xe5d44
	bl 0x5500	@ 000e5d44 1ff7dcfb
.org 0xe5d48
	adds r3, r0, #0	@ 000e5d48 031c
.org 0xe5d4a
	cmp r3, #0	@ 000e5d4a 002b
.org 0xe5d4c
	beq.n 0xe5dba	@ 000e5d4c 35d0
.org 0xe5d4e
	adds r1, r3, #0	@ 000e5d4e 191c
.org 0xe5d50
	adds r1, #37	@ 000e5d50 2531
.org 0xe5d52
	movs r2, #0	@ 000e5d52 0022
.org 0xe5d54
	movs r0, #1	@ 000e5d54 0120
.org 0xe5d56
	strb r0, [r1, #0]	@ 000e5d56 0870
.org 0xe5d58
	ldr r0, [pc, #56]	@ 000e5d58 0e48
.org 0xe5d5a
	movs r1, #79	@ 000e5d5a 4f21
.org 0xe5d5c
	strb r1, [r3, #9]	@ 000e5d5c 5972
.org 0xe5d5e
	adds r1, #237	@ 000e5d5e ed31
.org 0xe5d60
	adds r0, r0, r1	@ 000e5d60 4018
.org 0xe5d62
	ldr r0, [r0, #0]	@ 000e5d62 0068
.org 0xe5d64
	ldr r0, [r0, #0]	@ 000e5d64 0068
.org 0xe5d66
	str r0, [r3, #20]	@ 000e5d66 5861
.org 0xe5d68
	movs r0, #0	@ 000e5d68 0020
.org 0xe5d6a
	strh r2, [r3, #32]	@ 000e5d6a 1a84
.org 0xe5d6c
	adds r1, r3, #0	@ 000e5d6c 191c
.org 0xe5d6e
	adds r1, #34	@ 000e5d6e 2231
.org 0xe5d70
	strb r0, [r1, #0]	@ 000e5d70 0870
.org 0xe5d72
	ldr r0, [r6, #0]	@ 000e5d72 3068
.org 0xe5d74
	ldr r1, [r6, #4]	@ 000e5d74 7168
.org 0xe5d76
	str r0, [r3, #84]	@ 000e5d76 5865
.org 0xe5d78
	str r1, [r3, #88]	@ 000e5d78 9965
.org 0xe5d7a
	lsrs r0, r4, #24	@ 000e5d7a 200e
.org 0xe5d7c
	strb r0, [r3, #16]	@ 000e5d7c 1874
.org 0xe5d7e
	strb r7, [r3, #17]	@ 000e5d7e 5f74
.org 0xe5d80
	adds r2, r5, #0	@ 000e5d80 2a1c
.org 0xe5d82
	cmp r2, #0	@ 000e5d82 002a
.org 0xe5d84
	beq.n 0xe5d98	@ 000e5d84 08d0
.org 0xe5d86
	ldrb r0, [r3, #10]	@ 000e5d86 987a
.org 0xe5d88
	movs r1, #16	@ 000e5d88 1021
.org 0xe5d8a
	orrs r0, r1	@ 000e5d8a 0843
.org 0xe5d8c
	b.n 0xe5d9e	@ 000e5d8c 07e0
.org 0xe5d8e
	.byte 0x00	@ 000e5d8e data
.org 0xe5d8f
	.byte 0x00	@ 000e5d8f data
.org 0xe5d90
	.byte 0x9c,0xed,0x02,0x02	@ 000e5d90 data
.org 0xe5d94
	.byte 0x64,0x6f,0x86,0x08	@ 000e5d94 data
.org 0xe5d98
	ldrb r1, [r3, #10]	@ 000e5d98 997a
.org 0xe5d9a
	movs r0, #239	@ 000e5d9a ef20
.org 0xe5d9c
	ands r0, r1	@ 000e5d9c 0840
.org 0xe5d9e
	strb r0, [r3, #10]	@ 000e5d9e 9872
.org 0xe5da0
	movs r1, #1	@ 000e5da0 0121
.org 0xe5da2
	ands r1, r2	@ 000e5da2 1140
.org 0xe5da4
	adds r0, r3, #0	@ 000e5da4 181c
.org 0xe5da6
	adds r0, #76	@ 000e5da6 4c30
.org 0xe5da8
	strb r1, [r0, #0]	@ 000e5da8 0170
.org 0xe5daa
	adds r3, #74	@ 000e5daa 4a33
.org 0xe5dac
	lsls r1, r1, #4	@ 000e5dac 0901
.org 0xe5dae
	ldrb r2, [r3, #0]	@ 000e5dae 1a78
.org 0xe5db0
	movs r0, #17	@ 000e5db0 1120
.org 0xe5db2
	negs r0, r0	@ 000e5db2 4042
.org 0xe5db4
	ands r0, r2	@ 000e5db4 1040
