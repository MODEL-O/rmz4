@ FUN_080d0dc4  entry 0x080d0dc4  size 218
.thumb
.org 0xd0dc4
FUN_080d0dc4:
	push {r4, r5, r6, r7, lr}	@ 000d0dc4 f0b5
.org 0xd0dc6
	mov r7, r8	@ 000d0dc6 4746
.org 0xd0dc8
	push {r7}	@ 000d0dc8 80b4
.org 0xd0dca
	adds r5, r1, #0	@ 000d0dca 0d1c
.org 0xd0dcc
	lsls r0, r0, #24	@ 000d0dcc 0006
.org 0xd0dce
	lsrs r7, r0, #24	@ 000d0dce 070e
.org 0xd0dd0
	lsls r2, r2, #16	@ 000d0dd0 1204
.org 0xd0dd2
	lsrs r6, r2, #16	@ 000d0dd2 160c
.org 0xd0dd4
	lsls r3, r3, #16	@ 000d0dd4 1b04
.org 0xd0dd6
	lsrs r3, r3, #16	@ 000d0dd6 1b0c
.org 0xd0dd8
	mov r8, r3	@ 000d0dd8 9846
.org 0xd0dda
	ldr r0, [pc, #96]	@ 000d0dda 1848
.org 0xd0ddc
	ldr r0, [r0, #0]	@ 000d0ddc 0068
.org 0xd0dde
	bl 0x5500	@ 000d0dde 34f78ffb
.org 0xd0de2
	adds r4, r0, #0	@ 000d0de2 041c
.org 0xd0de4
	cmp r4, #0	@ 000d0de4 002c
.org 0xd0de6
	beq.n 0xd0e9e	@ 000d0de6 5ad0
.org 0xd0de8
	adds r2, r4, #0	@ 000d0de8 221c
.org 0xd0dea
	adds r2, #37	@ 000d0dea 2532
.org 0xd0dec
	movs r1, #0	@ 000d0dec 0021
.org 0xd0dee
	movs r0, #1	@ 000d0dee 0120
.org 0xd0df0
	strb r0, [r2, #0]	@ 000d0df0 1070
.org 0xd0df2
	ldr r0, [pc, #76]	@ 000d0df2 1348
.org 0xd0df4
	strb r1, [r4, #9]	@ 000d0df4 6172
.org 0xd0df6
	ldr r0, [r0, #0]	@ 000d0df6 0068
.org 0xd0df8
	ldr r0, [r0, #0]	@ 000d0df8 0068
.org 0xd0dfa
	str r0, [r4, #20]	@ 000d0dfa 6061
.org 0xd0dfc
	movs r0, #0	@ 000d0dfc 0020
.org 0xd0dfe
	strh r1, [r4, #32]	@ 000d0dfe 2184
.org 0xd0e00
	adds r1, r4, #0	@ 000d0e00 211c
.org 0xd0e02
	adds r1, #34	@ 000d0e02 2231
.org 0xd0e04
	strb r0, [r1, #0]	@ 000d0e04 0870
.org 0xd0e06
	ldr r0, [r5, #0]	@ 000d0e06 2868
.org 0xd0e08
	str r0, [r4, #84]	@ 000d0e08 6065
.org 0xd0e0a
	ldr r0, [r5, #4]	@ 000d0e0a 6868
.org 0xd0e0c
	str r0, [r4, #88]	@ 000d0e0c a065
.org 0xd0e0e
	adds r0, r4, #0	@ 000d0e0e 201c
.org 0xd0e10
	bl 0x1cdbc	@ 000d0e10 4bf7d4ff
.org 0xd0e14
	ldr r0, [pc, #44]	@ 000d0e14 0b48
.org 0xd0e16
	adds r0, r7, r0	@ 000d0e16 3818
.org 0xd0e18
	ldrb r1, [r0, #0]	@ 000d0e18 0178
.org 0xd0e1a
	adds r0, r4, #0	@ 000d0e1a 201c
.org 0xd0e1c
	bl 0x1cf00	@ 000d0e1c 4cf770f8
.org 0xd0e20
	adds r0, r4, #0	@ 000d0e20 201c
.org 0xd0e22
	adds r0, #80	@ 000d0e22 5030
.org 0xd0e24
	strh r6, [r0, #0]	@ 000d0e24 0680
.org 0xd0e26
	adds r0, #2	@ 000d0e26 0230
.org 0xd0e28
	strh r6, [r0, #0]	@ 000d0e28 0680
.org 0xd0e2a
	mov r1, r8	@ 000d0e2a 4146
.org 0xd0e2c
	lsls r0, r1, #24	@ 000d0e2c 0806
.org 0xd0e2e
	lsrs r2, r0, #24	@ 000d0e2e 020e
.org 0xd0e30
	cmp r2, #0	@ 000d0e30 002a
.org 0xd0e32
	beq.n 0xd0e48	@ 000d0e32 09d0
.org 0xd0e34
	ldrb r0, [r4, #10]	@ 000d0e34 a07a
.org 0xd0e36
	movs r1, #16	@ 000d0e36 1021
.org 0xd0e38
	orrs r0, r1	@ 000d0e38 0843
.org 0xd0e3a
	b.n 0xd0e4e	@ 000d0e3a 08e0
.org 0xd0e3c
	.byte 0x9c,0xed,0x02,0x02	@ 000d0e3c data
.org 0xd0e40
	.byte 0x64,0x6f,0x86,0x08	@ 000d0e40 data
.org 0xd0e44
	.byte 0xec,0x70,0x86,0x08	@ 000d0e44 data
.org 0xd0e48
	ldrb r1, [r4, #10]	@ 000d0e48 a17a
.org 0xd0e4a
	movs r0, #239	@ 000d0e4a ef20
.org 0xd0e4c
	ands r0, r1	@ 000d0e4c 0840
.org 0xd0e4e
	strb r0, [r4, #10]	@ 000d0e4e a072
.org 0xd0e50
	movs r1, #1	@ 000d0e50 0121
.org 0xd0e52
	ands r1, r2	@ 000d0e52 1140
.org 0xd0e54
	adds r0, r4, #0	@ 000d0e54 201c
.org 0xd0e56
	adds r0, #76	@ 000d0e56 4c30
.org 0xd0e58
	strb r1, [r0, #0]	@ 000d0e58 0170
.org 0xd0e5a
	adds r2, r4, #0	@ 000d0e5a 221c
.org 0xd0e5c
	adds r2, #74	@ 000d0e5c 4a32
.org 0xd0e5e
	lsls r1, r1, #4	@ 000d0e5e 0901
.org 0xd0e60
	ldrb r3, [r2, #0]	@ 000d0e60 1378
.org 0xd0e62
	movs r0, #17	@ 000d0e62 1120
.org 0xd0e64
	negs r0, r0	@ 000d0e64 4042
.org 0xd0e66
	ands r0, r3	@ 000d0e66 1840
.org 0xd0e68
	orrs r0, r1	@ 000d0e68 0843
.org 0xd0e6a
	strb r0, [r2, #0]	@ 000d0e6a 1070
.org 0xd0e6c
	mov r0, r8	@ 000d0e6c 4046
.org 0xd0e6e
	lsrs r3, r0, #8	@ 000d0e6e 030a
.org 0xd0e70
	adds r5, r2, #0	@ 000d0e70 151c
.org 0xd0e72
	cmp r3, #0	@ 000d0e72 002b
.org 0xd0e74
	beq.n 0xd0e7e	@ 000d0e74 03d0
.org 0xd0e76
	ldrb r0, [r4, #10]	@ 000d0e76 a07a
.org 0xd0e78
	movs r1, #32	@ 000d0e78 2021
.org 0xd0e7a
	orrs r0, r1	@ 000d0e7a 0843
.org 0xd0e7c
	b.n 0xd0e84	@ 000d0e7c 02e0
.org 0xd0e7e
	ldrb r1, [r4, #10]	@ 000d0e7e a17a
.org 0xd0e80
	movs r0, #223	@ 000d0e80 df20
.org 0xd0e82
	ands r0, r1	@ 000d0e82 0840
.org 0xd0e84
	strb r0, [r4, #10]	@ 000d0e84 a072
.org 0xd0e86
	movs r0, #1	@ 000d0e86 0120
.org 0xd0e88
	ands r0, r3	@ 000d0e88 1840
.org 0xd0e8a
	adds r1, r4, #0	@ 000d0e8a 211c
.org 0xd0e8c
	adds r1, #77	@ 000d0e8c 4d31
.org 0xd0e8e
	strb r0, [r1, #0]	@ 000d0e8e 0870
.org 0xd0e90
	lsls r0, r0, #5	@ 000d0e90 4001
.org 0xd0e92
	ldrb r2, [r5, #0]	@ 000d0e92 2a78
.org 0xd0e94
	movs r1, #33	@ 000d0e94 2121
.org 0xd0e96
	negs r1, r1	@ 000d0e96 4942
.org 0xd0e98
	ands r1, r2	@ 000d0e98 1140
.org 0xd0e9a
	orrs r1, r0	@ 000d0e9a 0143
.org 0xd0e9c
	strb r1, [r5, #0]	@ 000d0e9c 2970
