@ FUN_080b1e38  entry 0x080b1e38  size 202
.thumb
.org 0xb1e38
FUN_080b1e38:
	push {r4, lr}	@ 000b1e38 10b5
.org 0xb1e3a
	adds r4, r0, #0	@ 000b1e3a 041c
.org 0xb1e3c
	ldrb r0, [r4, #14]	@ 000b1e3c a07b
.org 0xb1e3e
	cmp r0, #0	@ 000b1e3e 0028
.org 0xb1e40
	bne.n 0xb1e8a	@ 000b1e40 23d1
.org 0xb1e42
	ldrb r2, [r4, #10]	@ 000b1e42 a27a
.org 0xb1e44
	lsrs r0, r2, #4	@ 000b1e44 1009
.org 0xb1e46
	movs r1, #1	@ 000b1e46 0121
.org 0xb1e48
	bics r1, r0	@ 000b1e48 8143
.org 0xb1e4a
	cmp r1, #0	@ 000b1e4a 0029
.org 0xb1e4c
	beq.n 0xb1e54	@ 000b1e4c 02d0
.org 0xb1e4e
	movs r0, #16	@ 000b1e4e 1020
.org 0xb1e50
	orrs r0, r2	@ 000b1e50 1043
.org 0xb1e52
	b.n 0xb1e58	@ 000b1e52 01e0
.org 0xb1e54
	movs r0, #239	@ 000b1e54 ef20
.org 0xb1e56
	ands r0, r2	@ 000b1e56 1040
.org 0xb1e58
	strb r0, [r4, #10]	@ 000b1e58 a072
.org 0xb1e5a
	adds r0, r4, #0	@ 000b1e5a 201c
.org 0xb1e5c
	adds r0, #76	@ 000b1e5c 4c30
.org 0xb1e5e
	strb r1, [r0, #0]	@ 000b1e5e 0170
.org 0xb1e60
	adds r3, r4, #0	@ 000b1e60 231c
.org 0xb1e62
	adds r3, #74	@ 000b1e62 4a33
.org 0xb1e64
	lsls r1, r1, #4	@ 000b1e64 0901
.org 0xb1e66
	ldrb r2, [r3, #0]	@ 000b1e66 1a78
.org 0xb1e68
	movs r0, #17	@ 000b1e68 1120
.org 0xb1e6a
	negs r0, r0	@ 000b1e6a 4042
.org 0xb1e6c
	ands r0, r2	@ 000b1e6c 1040
.org 0xb1e6e
	orrs r0, r1	@ 000b1e6e 0843
.org 0xb1e70
	strb r0, [r3, #0]	@ 000b1e70 1870
.org 0xb1e72
	movs r1, #194	@ 000b1e72 c221
.org 0xb1e74
	lsls r1, r1, #8	@ 000b1e74 0902
.org 0xb1e76
	adds r0, r4, #0	@ 000b1e76 201c
.org 0xb1e78
	bl 0x1cf00	@ 000b1e78 6bf742f8
.org 0xb1e7c
	ldrb r0, [r4, #18]	@ 000b1e7c a07c
.org 0xb1e7e
	strb r0, [r4, #19]	@ 000b1e7e e074
.org 0xb1e80
	movs r0, #8	@ 000b1e80 0820
.org 0xb1e82
	strb r0, [r4, #18]	@ 000b1e82 a074
.org 0xb1e84
	ldrb r0, [r4, #14]	@ 000b1e84 a07b
.org 0xb1e86
	adds r0, #1	@ 000b1e86 0130
.org 0xb1e88
	strb r0, [r4, #14]	@ 000b1e88 a073
.org 0xb1e8a
	adds r0, r4, #0	@ 000b1e8a 201c
.org 0xb1e8c
	bl 0xb2158	@ 000b1e8c 00f064f9
.org 0xb1e90
	lsls r0, r0, #24	@ 000b1e90 0006
.org 0xb1e92
	cmp r0, #0	@ 000b1e92 0028
.org 0xb1e94
	beq.n 0xb1f00	@ 000b1e94 34d0
.org 0xb1e96
	ldrb r0, [r4, #14]	@ 000b1e96 a07b
.org 0xb1e98
	cmp r0, #1	@ 000b1e98 0128
.org 0xb1e9a
	bne.n 0xb1ea4	@ 000b1e9a 03d1
.org 0xb1e9c
	ldr r1, [pc, #0]	@ 000b1e9c 0049
.org 0xb1e9e
	b.n 0xb1ee2	@ 000b1e9e 20e0
.org 0xb1ea0
	.byte 0x06,0xc2,0x00,0x00	@ 000b1ea0 data
.org 0xb1ea4
	cmp r0, #2	@ 000b1ea4 0228
.org 0xb1ea6
	bne.n 0xb1eda	@ 000b1ea6 18d1
.org 0xb1ea8
	ldrb r2, [r4, #10]	@ 000b1ea8 a27a
.org 0xb1eaa
	lsrs r0, r2, #4	@ 000b1eaa 1009
.org 0xb1eac
	movs r1, #1	@ 000b1eac 0121
.org 0xb1eae
	bics r1, r0	@ 000b1eae 8143
.org 0xb1eb0
	cmp r1, #0	@ 000b1eb0 0029
.org 0xb1eb2
	beq.n 0xb1eba	@ 000b1eb2 02d0
.org 0xb1eb4
	movs r0, #16	@ 000b1eb4 1020
.org 0xb1eb6
	orrs r0, r2	@ 000b1eb6 1043
.org 0xb1eb8
	b.n 0xb1ebe	@ 000b1eb8 01e0
.org 0xb1eba
	movs r0, #239	@ 000b1eba ef20
.org 0xb1ebc
	ands r0, r2	@ 000b1ebc 1040
.org 0xb1ebe
	strb r0, [r4, #10]	@ 000b1ebe a072
.org 0xb1ec0
	adds r0, r4, #0	@ 000b1ec0 201c
.org 0xb1ec2
	adds r0, #76	@ 000b1ec2 4c30
.org 0xb1ec4
	strb r1, [r0, #0]	@ 000b1ec4 0170
.org 0xb1ec6
	adds r3, r4, #0	@ 000b1ec6 231c
.org 0xb1ec8
	adds r3, #74	@ 000b1ec8 4a33
.org 0xb1eca
	lsls r1, r1, #4	@ 000b1eca 0901
.org 0xb1ecc
	ldrb r2, [r3, #0]	@ 000b1ecc 1a78
.org 0xb1ece
	movs r0, #17	@ 000b1ece 1120
.org 0xb1ed0
	negs r0, r0	@ 000b1ed0 4042
.org 0xb1ed2
	ands r0, r2	@ 000b1ed2 1040
.org 0xb1ed4
	orrs r0, r1	@ 000b1ed4 0843
.org 0xb1ed6
	strb r0, [r3, #0]	@ 000b1ed6 1870
.org 0xb1ed8
	b.n 0xb1ef6	@ 000b1ed8 0de0
.org 0xb1eda
	cmp r0, #3	@ 000b1eda 0328
.org 0xb1edc
	bne.n 0xb1eea	@ 000b1edc 05d1
.org 0xb1ede
	movs r1, #194	@ 000b1ede c221
.org 0xb1ee0
	lsls r1, r1, #8	@ 000b1ee0 0902
.org 0xb1ee2
	adds r0, r4, #0	@ 000b1ee2 201c
.org 0xb1ee4
	bl 0x1cf00	@ 000b1ee4 6bf70cf8
.org 0xb1ee8
	b.n 0xb1ef6	@ 000b1ee8 05e0
.org 0xb1eea
	movs r0, #0	@ 000b1eea 0020
.org 0xb1eec
	strb r0, [r4, #13]	@ 000b1eec 6073
.org 0xb1eee
	strb r0, [r4, #14]	@ 000b1eee a073
.org 0xb1ef0
	ldrb r0, [r4, #19]	@ 000b1ef0 e07c
.org 0xb1ef2
	strb r0, [r4, #18]	@ 000b1ef2 a074
.org 0xb1ef4
	b.n 0xb1f00	@ 000b1ef4 04e0
.org 0xb1ef6
	movs r0, #8	@ 000b1ef6 0820
.org 0xb1ef8
	strb r0, [r4, #18]	@ 000b1ef8 a074
.org 0xb1efa
	ldrb r0, [r4, #14]	@ 000b1efa a07b
.org 0xb1efc
	adds r0, #1	@ 000b1efc 0130
.org 0xb1efe
	strb r0, [r4, #14]	@ 000b1efe a073
.org 0xb1f00
	pop {r4}	@ 000b1f00 10bc
