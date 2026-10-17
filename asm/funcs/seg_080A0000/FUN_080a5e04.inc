@ FUN_080a5e04  entry 0x080a5e04  size 194
.thumb
.org 0xa5e04
FUN_080a5e04:
	push {r4, r5, r6, r7, lr}	@ 000a5e04 f0b5
.org 0xa5e06
	adds r6, r0, #0	@ 000a5e06 061c
.org 0xa5e08
	ldrb r0, [r6, #15]	@ 000a5e08 f07b
.org 0xa5e0a
	cmp r0, #1	@ 000a5e0a 0128
.org 0xa5e0c
	beq.n 0xa5e46	@ 000a5e0c 1bd0
.org 0xa5e0e
	cmp r0, #1	@ 000a5e0e 0128
.org 0xa5e10
	bgt.n 0xa5e18	@ 000a5e10 02dc
.org 0xa5e12
	cmp r0, #0	@ 000a5e12 0028
.org 0xa5e14
	beq.n 0xa5e22	@ 000a5e14 05d0
.org 0xa5e16
	b.n 0xa5ec8	@ 000a5e16 57e0
.org 0xa5e18
	cmp r0, #2	@ 000a5e18 0228
.org 0xa5e1a
	beq.n 0xa5e68	@ 000a5e1a 25d0
.org 0xa5e1c
	cmp r0, #3	@ 000a5e1c 0328
.org 0xa5e1e
	beq.n 0xa5eac	@ 000a5e1e 45d0
.org 0xa5e20
	b.n 0xa5ec8	@ 000a5e20 52e0
.org 0xa5e22
	adds r0, r6, #0	@ 000a5e22 301c
.org 0xa5e24
	adds r0, #116	@ 000a5e24 7430
.org 0xa5e26
	ldr r1, [pc, #56]	@ 000a5e26 0e49
.org 0xa5e28
	bl 0x5784	@ 000a5e28 5ff7acfc
.org 0xa5e2c
	ldr r1, [pc, #52]	@ 000a5e2c 0d49
.org 0xa5e2e
	adds r0, r6, #0	@ 000a5e2e 301c
.org 0xa5e30
	bl 0x1cf00	@ 000a5e30 77f766f8
.org 0xa5e34
	adds r0, r6, #0	@ 000a5e34 301c
.org 0xa5e36
	movs r1, #5	@ 000a5e36 0521
.org 0xa5e38
	bl 0x1d3d0	@ 000a5e38 77f7cafa
.org 0xa5e3c
	movs r0, #32	@ 000a5e3c 2020
.org 0xa5e3e
	strb r0, [r6, #18]	@ 000a5e3e b074
.org 0xa5e40
	ldrb r0, [r6, #15]	@ 000a5e40 f07b
.org 0xa5e42
	adds r0, #1	@ 000a5e42 0130
.org 0xa5e44
	strb r0, [r6, #15]	@ 000a5e44 f073
.org 0xa5e46
	adds r0, r6, #0	@ 000a5e46 301c
.org 0xa5e48
	bl 0x1cff0	@ 000a5e48 77f7d2f8
.org 0xa5e4c
	ldrb r0, [r6, #18]	@ 000a5e4c b07c
.org 0xa5e4e
	subs r0, #1	@ 000a5e4e 0138
.org 0xa5e50
	strb r0, [r6, #18]	@ 000a5e50 b074
.org 0xa5e52
	lsls r0, r0, #24	@ 000a5e52 0006
.org 0xa5e54
	cmp r0, #0	@ 000a5e54 0028
.org 0xa5e56
	bne.n 0xa5ec8	@ 000a5e56 37d1
.org 0xa5e58
	ldrb r0, [r6, #15]	@ 000a5e58 f07b
.org 0xa5e5a
	adds r0, #1	@ 000a5e5a 0130
.org 0xa5e5c
	strb r0, [r6, #15]	@ 000a5e5c f073
.org 0xa5e5e
	b.n 0xa5ec8	@ 000a5e5e 33e0
.org 0xa5e60
	.byte 0x54,0x24,0x86,0x08	@ 000a5e60 data
.org 0xa5e64
	.byte 0x07,0x88,0x00,0x00	@ 000a5e64 data
.org 0xa5e68
	movs r0, #44	@ 000a5e68 2c20
.org 0xa5e6a
	bl 0x2b10	@ 000a5e6a 5cf751fe
.org 0xa5e6e
	ldr r1, [pc, #96]	@ 000a5e6e 1849
.org 0xa5e70
	adds r0, r6, #0	@ 000a5e70 301c
.org 0xa5e72
	bl 0x1cf00	@ 000a5e72 77f745f8
.org 0xa5e76
	adds r4, r6, #0	@ 000a5e76 341c
.org 0xa5e78
	adds r4, #84	@ 000a5e78 5434
.org 0xa5e7a
	movs r5, #160	@ 000a5e7a a025
.org 0xa5e7c
	lsls r5, r5, #2	@ 000a5e7c ad00
.org 0xa5e7e
	ldr r0, [r6, #84]	@ 000a5e7e 706d
.org 0xa5e80
	ldr r1, [r6, #88]	@ 000a5e80 b16d
.org 0xa5e82
	ldr r2, [pc, #80]	@ 000a5e82 144a
.org 0xa5e84
	ldr r3, [r2, #0]	@ 000a5e84 1368
.org 0xa5e86
	ldr r2, [r3, #84]	@ 000a5e86 5a6d
.org 0xa5e88
	ldr r3, [r3, #88]	@ 000a5e88 9b6d
.org 0xa5e8a
	ldr r7, [pc, #76]	@ 000a5e8a 134f
.org 0xa5e8c
	adds r3, r3, r7	@ 000a5e8c db19
.org 0xa5e8e
	bl 0x10d398	@ 000a5e8e 67f083fa
.org 0xa5e92
	adds r2, r0, #0	@ 000a5e92 021c
.org 0xa5e94
	adds r2, #128	@ 000a5e94 8032
.org 0xa5e96
	lsls r2, r2, #24	@ 000a5e96 1206
.org 0xa5e98
	lsrs r2, r2, #24	@ 000a5e98 120e
.org 0xa5e9a
	adds r0, r4, #0	@ 000a5e9a 201c
.org 0xa5e9c
	adds r1, r5, #0	@ 000a5e9c 291c
.org 0xa5e9e
	bl 0xbd4d4	@ 000a5e9e 17f019fb
.org 0xa5ea2
	movs r0, #24	@ 000a5ea2 1820
.org 0xa5ea4
	strb r0, [r6, #18]	@ 000a5ea4 b074
.org 0xa5ea6
	ldrb r0, [r6, #15]	@ 000a5ea6 f07b
.org 0xa5ea8
	adds r0, #1	@ 000a5ea8 0130
.org 0xa5eaa
	strb r0, [r6, #15]	@ 000a5eaa f073
.org 0xa5eac
	adds r0, r6, #0	@ 000a5eac 301c
.org 0xa5eae
	bl 0x1cff0	@ 000a5eae 77f79ff8
.org 0xa5eb2
	ldrb r0, [r6, #18]	@ 000a5eb2 b07c
.org 0xa5eb4
	subs r0, #1	@ 000a5eb4 0138
.org 0xa5eb6
	strb r0, [r6, #18]	@ 000a5eb6 b074
.org 0xa5eb8
	lsls r0, r0, #24	@ 000a5eb8 0006
.org 0xa5eba
	lsrs r1, r0, #24	@ 000a5eba 010e
.org 0xa5ebc
	cmp r1, #0	@ 000a5ebc 0029
.org 0xa5ebe
	bne.n 0xa5ec8	@ 000a5ebe 03d1
.org 0xa5ec0
	movs r0, #3	@ 000a5ec0 0320
.org 0xa5ec2
	strb r0, [r6, #13]	@ 000a5ec2 7073
.org 0xa5ec4
	strb r1, [r6, #14]	@ 000a5ec4 b173
