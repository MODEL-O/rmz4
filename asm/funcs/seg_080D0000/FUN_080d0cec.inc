@ FUN_080d0cec  entry 0x080d0cec  size 202
.thumb
.org 0xd0cec
FUN_080d0cec:
	push {r4, r5, r6, r7, lr}	@ 000d0cec f0b5
.org 0xd0cee
	mov r7, r8	@ 000d0cee 4746
.org 0xd0cf0
	push {r7}	@ 000d0cf0 80b4
.org 0xd0cf2
	adds r5, r1, #0	@ 000d0cf2 0d1c
.org 0xd0cf4
	lsls r0, r0, #24	@ 000d0cf4 0006
.org 0xd0cf6
	lsrs r6, r0, #24	@ 000d0cf6 060e
.org 0xd0cf8
	lsls r2, r2, #24	@ 000d0cf8 1206
.org 0xd0cfa
	lsrs r7, r2, #24	@ 000d0cfa 170e
.org 0xd0cfc
	lsls r3, r3, #24	@ 000d0cfc 1b06
.org 0xd0cfe
	lsrs r3, r3, #24	@ 000d0cfe 1b0e
.org 0xd0d00
	mov r8, r3	@ 000d0d00 9846
.org 0xd0d02
	ldr r0, [pc, #84]	@ 000d0d02 1548
.org 0xd0d04
	ldr r0, [r0, #0]	@ 000d0d04 0068
.org 0xd0d06
	bl 0x5500	@ 000d0d06 34f7fbfb
.org 0xd0d0a
	adds r4, r0, #0	@ 000d0d0a 041c
.org 0xd0d0c
	cmp r4, #0	@ 000d0d0c 002c
.org 0xd0d0e
	beq.n 0xd0db8	@ 000d0d0e 53d0
.org 0xd0d10
	adds r2, r4, #0	@ 000d0d10 221c
.org 0xd0d12
	adds r2, #37	@ 000d0d12 2532
.org 0xd0d14
	movs r1, #0	@ 000d0d14 0021
.org 0xd0d16
	movs r0, #1	@ 000d0d16 0120
.org 0xd0d18
	strb r0, [r2, #0]	@ 000d0d18 1070
.org 0xd0d1a
	ldr r0, [pc, #64]	@ 000d0d1a 1048
.org 0xd0d1c
	strb r1, [r4, #9]	@ 000d0d1c 6172
.org 0xd0d1e
	ldr r0, [r0, #0]	@ 000d0d1e 0068
.org 0xd0d20
	ldr r0, [r0, #0]	@ 000d0d20 0068
.org 0xd0d22
	str r0, [r4, #20]	@ 000d0d22 6061
.org 0xd0d24
	movs r0, #0	@ 000d0d24 0020
.org 0xd0d26
	strh r1, [r4, #32]	@ 000d0d26 2184
.org 0xd0d28
	adds r1, r4, #0	@ 000d0d28 211c
.org 0xd0d2a
	adds r1, #34	@ 000d0d2a 2231
.org 0xd0d2c
	strb r0, [r1, #0]	@ 000d0d2c 0870
.org 0xd0d2e
	ldr r0, [r5, #0]	@ 000d0d2e 2868
.org 0xd0d30
	str r0, [r4, #84]	@ 000d0d30 6065
.org 0xd0d32
	ldr r0, [r5, #4]	@ 000d0d32 6868
.org 0xd0d34
	str r0, [r4, #88]	@ 000d0d34 a065
.org 0xd0d36
	adds r0, r4, #0	@ 000d0d36 201c
.org 0xd0d38
	bl 0x1cc9c	@ 000d0d38 4bf7b0ff
.org 0xd0d3c
	ldr r0, [pc, #32]	@ 000d0d3c 0848
.org 0xd0d3e
	adds r0, r6, r0	@ 000d0d3e 3018
.org 0xd0d40
	ldrb r1, [r0, #0]	@ 000d0d40 0178
.org 0xd0d42
	adds r0, r4, #0	@ 000d0d42 201c
.org 0xd0d44
	bl 0x1cf00	@ 000d0d44 4cf7dcf8
.org 0xd0d48
	adds r2, r7, #0	@ 000d0d48 3a1c
.org 0xd0d4a
	cmp r2, #0	@ 000d0d4a 002a
.org 0xd0d4c
	beq.n 0xd0d64	@ 000d0d4c 0ad0
.org 0xd0d4e
	ldrb r0, [r4, #10]	@ 000d0d4e a07a
.org 0xd0d50
	movs r1, #16	@ 000d0d50 1021
.org 0xd0d52
	orrs r0, r1	@ 000d0d52 0843
.org 0xd0d54
	b.n 0xd0d6a	@ 000d0d54 09e0
.org 0xd0d56
	.byte 0x00	@ 000d0d56 data
.org 0xd0d57
	.byte 0x00	@ 000d0d57 data
.org 0xd0d58
	.byte 0x9c,0xed,0x02,0x02	@ 000d0d58 data
.org 0xd0d5c
	.byte 0x64,0x6f,0x86,0x08	@ 000d0d5c data
.org 0xd0d60
	.byte 0xec,0x70,0x86,0x08	@ 000d0d60 data
.org 0xd0d64
	ldrb r1, [r4, #10]	@ 000d0d64 a17a
.org 0xd0d66
	movs r0, #239	@ 000d0d66 ef20
.org 0xd0d68
	ands r0, r1	@ 000d0d68 0840
.org 0xd0d6a
	strb r0, [r4, #10]	@ 000d0d6a a072
.org 0xd0d6c
	movs r1, #1	@ 000d0d6c 0121
.org 0xd0d6e
	ands r1, r2	@ 000d0d6e 1140
.org 0xd0d70
	adds r0, r4, #0	@ 000d0d70 201c
.org 0xd0d72
	adds r0, #76	@ 000d0d72 4c30
.org 0xd0d74
	strb r1, [r0, #0]	@ 000d0d74 0170
.org 0xd0d76
	adds r2, r4, #0	@ 000d0d76 221c
.org 0xd0d78
	adds r2, #74	@ 000d0d78 4a32
.org 0xd0d7a
	lsls r1, r1, #4	@ 000d0d7a 0901
.org 0xd0d7c
	ldrb r3, [r2, #0]	@ 000d0d7c 1378
.org 0xd0d7e
	movs r0, #17	@ 000d0d7e 1120
.org 0xd0d80
	negs r0, r0	@ 000d0d80 4042
.org 0xd0d82
	ands r0, r3	@ 000d0d82 1840
.org 0xd0d84
	orrs r0, r1	@ 000d0d84 0843
.org 0xd0d86
	strb r0, [r2, #0]	@ 000d0d86 1070
.org 0xd0d88
	mov r3, r8	@ 000d0d88 4346
.org 0xd0d8a
	adds r5, r2, #0	@ 000d0d8a 151c
.org 0xd0d8c
	cmp r3, #0	@ 000d0d8c 002b
.org 0xd0d8e
	beq.n 0xd0d98	@ 000d0d8e 03d0
.org 0xd0d90
	ldrb r0, [r4, #10]	@ 000d0d90 a07a
.org 0xd0d92
	movs r1, #32	@ 000d0d92 2021
.org 0xd0d94
	orrs r0, r1	@ 000d0d94 0843
.org 0xd0d96
	b.n 0xd0d9e	@ 000d0d96 02e0
.org 0xd0d98
	ldrb r1, [r4, #10]	@ 000d0d98 a17a
.org 0xd0d9a
	movs r0, #223	@ 000d0d9a df20
.org 0xd0d9c
	ands r0, r1	@ 000d0d9c 0840
.org 0xd0d9e
	strb r0, [r4, #10]	@ 000d0d9e a072
.org 0xd0da0
	movs r0, #1	@ 000d0da0 0120
.org 0xd0da2
	ands r0, r3	@ 000d0da2 1840
.org 0xd0da4
	adds r1, r4, #0	@ 000d0da4 211c
.org 0xd0da6
	adds r1, #77	@ 000d0da6 4d31
.org 0xd0da8
	strb r0, [r1, #0]	@ 000d0da8 0870
.org 0xd0daa
	lsls r0, r0, #5	@ 000d0daa 4001
.org 0xd0dac
	ldrb r2, [r5, #0]	@ 000d0dac 2a78
.org 0xd0dae
	movs r1, #33	@ 000d0dae 2121
.org 0xd0db0
	negs r1, r1	@ 000d0db0 4942
.org 0xd0db2
	ands r1, r2	@ 000d0db2 1140
.org 0xd0db4
	orrs r1, r0	@ 000d0db4 0143
