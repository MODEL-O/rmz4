@ FUN_080d0eac  entry 0x080d0eac  size 198
.thumb
.org 0xd0eac
FUN_080d0eac:
	push {r4, r5, r6, r7, lr}	@ 000d0eac f0b5
.org 0xd0eae
	mov r7, r8	@ 000d0eae 4746
.org 0xd0eb0
	push {r7}	@ 000d0eb0 80b4
.org 0xd0eb2
	adds r5, r1, #0	@ 000d0eb2 0d1c
.org 0xd0eb4
	lsls r0, r0, #16	@ 000d0eb4 0004
.org 0xd0eb6
	lsrs r6, r0, #16	@ 000d0eb6 060c
.org 0xd0eb8
	lsls r2, r2, #24	@ 000d0eb8 1206
.org 0xd0eba
	lsrs r7, r2, #24	@ 000d0eba 170e
.org 0xd0ebc
	lsls r3, r3, #24	@ 000d0ebc 1b06
.org 0xd0ebe
	lsrs r3, r3, #24	@ 000d0ebe 1b0e
.org 0xd0ec0
	mov r8, r3	@ 000d0ec0 9846
.org 0xd0ec2
	ldr r0, [pc, #80]	@ 000d0ec2 1448
.org 0xd0ec4
	ldr r0, [r0, #0]	@ 000d0ec4 0068
.org 0xd0ec6
	bl 0x5500	@ 000d0ec6 34f71bfb
.org 0xd0eca
	adds r4, r0, #0	@ 000d0eca 041c
.org 0xd0ecc
	cmp r4, #0	@ 000d0ecc 002c
.org 0xd0ece
	beq.n 0xd0f70	@ 000d0ece 4fd0
.org 0xd0ed0
	adds r2, r4, #0	@ 000d0ed0 221c
.org 0xd0ed2
	adds r2, #37	@ 000d0ed2 2532
.org 0xd0ed4
	movs r1, #0	@ 000d0ed4 0021
.org 0xd0ed6
	movs r0, #1	@ 000d0ed6 0120
.org 0xd0ed8
	strb r0, [r2, #0]	@ 000d0ed8 1070
.org 0xd0eda
	ldr r0, [pc, #60]	@ 000d0eda 0f48
.org 0xd0edc
	strb r1, [r4, #9]	@ 000d0edc 6172
.org 0xd0ede
	ldr r0, [r0, #0]	@ 000d0ede 0068
.org 0xd0ee0
	ldr r0, [r0, #0]	@ 000d0ee0 0068
.org 0xd0ee2
	str r0, [r4, #20]	@ 000d0ee2 6061
.org 0xd0ee4
	movs r0, #0	@ 000d0ee4 0020
.org 0xd0ee6
	strh r1, [r4, #32]	@ 000d0ee6 2184
.org 0xd0ee8
	adds r1, r4, #0	@ 000d0ee8 211c
.org 0xd0eea
	adds r1, #34	@ 000d0eea 2231
.org 0xd0eec
	strb r0, [r1, #0]	@ 000d0eec 0870
.org 0xd0eee
	ldr r0, [r5, #0]	@ 000d0eee 2868
.org 0xd0ef0
	str r0, [r4, #84]	@ 000d0ef0 6065
.org 0xd0ef2
	ldr r0, [r5, #4]	@ 000d0ef2 6868
.org 0xd0ef4
	str r0, [r4, #88]	@ 000d0ef4 a065
.org 0xd0ef6
	adds r0, r4, #0	@ 000d0ef6 201c
.org 0xd0ef8
	bl 0x1cc9c	@ 000d0ef8 4bf7d0fe
.org 0xd0efc
	adds r0, r4, #0	@ 000d0efc 201c
.org 0xd0efe
	adds r1, r6, #0	@ 000d0efe 311c
.org 0xd0f00
	bl 0x1cf00	@ 000d0f00 4bf7feff
.org 0xd0f04
	adds r2, r7, #0	@ 000d0f04 3a1c
.org 0xd0f06
	cmp r2, #0	@ 000d0f06 002a
.org 0xd0f08
	beq.n 0xd0f1c	@ 000d0f08 08d0
.org 0xd0f0a
	ldrb r0, [r4, #10]	@ 000d0f0a a07a
.org 0xd0f0c
	movs r1, #16	@ 000d0f0c 1021
.org 0xd0f0e
	orrs r0, r1	@ 000d0f0e 0843
.org 0xd0f10
	b.n 0xd0f22	@ 000d0f10 07e0
.org 0xd0f12
	.byte 0x00	@ 000d0f12 data
.org 0xd0f13
	.byte 0x00	@ 000d0f13 data
.org 0xd0f14
	.byte 0x9c,0xed,0x02,0x02	@ 000d0f14 data
.org 0xd0f18
	.byte 0x64,0x6f,0x86,0x08	@ 000d0f18 data
.org 0xd0f1c
	ldrb r1, [r4, #10]	@ 000d0f1c a17a
.org 0xd0f1e
	movs r0, #239	@ 000d0f1e ef20
.org 0xd0f20
	ands r0, r1	@ 000d0f20 0840
.org 0xd0f22
	strb r0, [r4, #10]	@ 000d0f22 a072
.org 0xd0f24
	movs r1, #1	@ 000d0f24 0121
.org 0xd0f26
	ands r1, r2	@ 000d0f26 1140
.org 0xd0f28
	adds r0, r4, #0	@ 000d0f28 201c
.org 0xd0f2a
	adds r0, #76	@ 000d0f2a 4c30
.org 0xd0f2c
	strb r1, [r0, #0]	@ 000d0f2c 0170
.org 0xd0f2e
	adds r2, r4, #0	@ 000d0f2e 221c
.org 0xd0f30
	adds r2, #74	@ 000d0f30 4a32
.org 0xd0f32
	lsls r1, r1, #4	@ 000d0f32 0901
.org 0xd0f34
	ldrb r3, [r2, #0]	@ 000d0f34 1378
.org 0xd0f36
	movs r0, #17	@ 000d0f36 1120
.org 0xd0f38
	negs r0, r0	@ 000d0f38 4042
.org 0xd0f3a
	ands r0, r3	@ 000d0f3a 1840
.org 0xd0f3c
	orrs r0, r1	@ 000d0f3c 0843
.org 0xd0f3e
	strb r0, [r2, #0]	@ 000d0f3e 1070
.org 0xd0f40
	mov r3, r8	@ 000d0f40 4346
.org 0xd0f42
	adds r5, r2, #0	@ 000d0f42 151c
.org 0xd0f44
	cmp r3, #0	@ 000d0f44 002b
.org 0xd0f46
	beq.n 0xd0f50	@ 000d0f46 03d0
.org 0xd0f48
	ldrb r0, [r4, #10]	@ 000d0f48 a07a
.org 0xd0f4a
	movs r1, #32	@ 000d0f4a 2021
.org 0xd0f4c
	orrs r0, r1	@ 000d0f4c 0843
.org 0xd0f4e
	b.n 0xd0f56	@ 000d0f4e 02e0
.org 0xd0f50
	ldrb r1, [r4, #10]	@ 000d0f50 a17a
.org 0xd0f52
	movs r0, #223	@ 000d0f52 df20
.org 0xd0f54
	ands r0, r1	@ 000d0f54 0840
.org 0xd0f56
	strb r0, [r4, #10]	@ 000d0f56 a072
.org 0xd0f58
	movs r0, #1	@ 000d0f58 0120
.org 0xd0f5a
	ands r0, r3	@ 000d0f5a 1840
.org 0xd0f5c
	adds r1, r4, #0	@ 000d0f5c 211c
.org 0xd0f5e
	adds r1, #77	@ 000d0f5e 4d31
.org 0xd0f60
	strb r0, [r1, #0]	@ 000d0f60 0870
.org 0xd0f62
	lsls r0, r0, #5	@ 000d0f62 4001
.org 0xd0f64
	ldrb r2, [r5, #0]	@ 000d0f64 2a78
.org 0xd0f66
	movs r1, #33	@ 000d0f66 2121
.org 0xd0f68
	negs r1, r1	@ 000d0f68 4942
.org 0xd0f6a
	ands r1, r2	@ 000d0f6a 1140
.org 0xd0f6c
	orrs r1, r0	@ 000d0f6c 0143
.org 0xd0f6e
	strb r1, [r5, #0]	@ 000d0f6e 2970
.org 0xd0f70
	adds r0, r4, #0	@ 000d0f70 201c
