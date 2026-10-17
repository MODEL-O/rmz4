@ FUN_08044ebc  entry 0x08044ebc  size 220
.thumb
.org 0x44ebc
FUN_08044ebc:
	push {r4, r5, lr}	@ 00044ebc 30b5
.org 0x44ebe
	adds r5, r0, #0	@ 00044ebe 051c
.org 0x44ec0
	adds r4, r1, #0	@ 00044ec0 0c1c
.org 0x44ec2
	ldr r0, [pc, #64]	@ 00044ec2 1048
.org 0x44ec4
	ldr r0, [r0, #0]	@ 00044ec4 0068
.org 0x44ec6
	bl 0x5500	@ 00044ec6 c0f71bfb
.org 0x44eca
	adds r3, r0, #0	@ 00044eca 031c
.org 0x44ecc
	cmp r3, #0	@ 00044ecc 002b
.org 0x44ece
	beq.n 0x44fb0	@ 00044ece 6fd0
.org 0x44ed0
	adds r0, r5, #0	@ 00044ed0 281c
.org 0x44ed2
	adds r0, #248	@ 00044ed2 f830
.org 0x44ed4
	ldrb r0, [r0, #0]	@ 00044ed4 0078
.org 0x44ed6
	cmp r0, #2	@ 00044ed6 0228
.org 0x44ed8
	bne.n 0x44f14	@ 00044ed8 1cd1
.org 0x44eda
	ldr r1, [pc, #44]	@ 00044eda 0b49
.org 0x44edc
	movs r0, #22	@ 00044edc 1620
.org 0x44ede
	strb r0, [r3, #9]	@ 00044ede 5872
.org 0x44ee0
	ldr r0, [r1, #88]	@ 00044ee0 886d
.org 0x44ee2
	ldr r0, [r0, #0]	@ 00044ee2 0068
.org 0x44ee4
	str r0, [r3, #20]	@ 00044ee4 5861
.org 0x44ee6
	ldrb r1, [r3, #11]	@ 00044ee6 d97a
.org 0x44ee8
	movs r0, #191	@ 00044ee8 bf20
.org 0x44eea
	ands r0, r1	@ 00044eea 0840
.org 0x44eec
	strb r0, [r3, #11]	@ 00044eec d872
.org 0x44eee
	adds r1, r3, #0	@ 00044eee 191c
.org 0x44ef0
	adds r1, #37	@ 00044ef0 2531
.org 0x44ef2
	movs r0, #16	@ 00044ef2 1020
.org 0x44ef4
	strb r0, [r1, #0]	@ 00044ef4 0870
.org 0x44ef6
	ldr r0, [pc, #20]	@ 00044ef6 0548
.org 0x44ef8
	ldrh r0, [r0, #0]	@ 00044ef8 0088
.org 0x44efa
	strh r0, [r3, #32]	@ 00044efa 1884
.org 0x44efc
	ldr r0, [pc, #16]	@ 00044efc 0448
.org 0x44efe
	ldrb r0, [r0, #0]	@ 00044efe 0078
.org 0x44f00
	b.n 0x44f3a	@ 00044f00 1be0
.org 0x44f02
	.byte 0x00	@ 00044f02 data
.org 0x44f03
	.byte 0x00	@ 00044f03 data
.org 0x44f04
	.byte 0x88,0xed,0x02,0x02	@ 00044f04 data
.org 0x44f08
	.byte 0xf8,0x39,0x85,0x08	@ 00044f08 data
.org 0x44f0c
	.byte 0xfc,0x36,0x85,0x08	@ 00044f0c data
.org 0x44f10
	.byte 0x04,0x37,0x85,0x08	@ 00044f10 data
.org 0x44f14
	ldr r1, [pc, #68]	@ 00044f14 1149
.org 0x44f16
	movs r0, #22	@ 00044f16 1620
.org 0x44f18
	strb r0, [r3, #9]	@ 00044f18 5872
.org 0x44f1a
	ldr r0, [r1, #88]	@ 00044f1a 886d
.org 0x44f1c
	ldr r0, [r0, #0]	@ 00044f1c 0068
.org 0x44f1e
	str r0, [r3, #20]	@ 00044f1e 5861
.org 0x44f20
	ldrb r1, [r3, #11]	@ 00044f20 d97a
.org 0x44f22
	movs r0, #191	@ 00044f22 bf20
.org 0x44f24
	ands r0, r1	@ 00044f24 0840
.org 0x44f26
	strb r0, [r3, #11]	@ 00044f26 d872
.org 0x44f28
	adds r1, r3, #0	@ 00044f28 191c
.org 0x44f2a
	adds r1, #37	@ 00044f2a 2531
.org 0x44f2c
	movs r0, #16	@ 00044f2c 1020
.org 0x44f2e
	strb r0, [r1, #0]	@ 00044f2e 0870
.org 0x44f30
	ldr r0, [pc, #44]	@ 00044f30 0b48
.org 0x44f32
	ldrh r0, [r0, #2]	@ 00044f32 4088
.org 0x44f34
	strh r0, [r3, #32]	@ 00044f34 1884
.org 0x44f36
	ldr r0, [pc, #44]	@ 00044f36 0b48
.org 0x44f38
	ldrb r0, [r0, #1]	@ 00044f38 4078
.org 0x44f3a
	subs r1, #3	@ 00044f3a 0339
.org 0x44f3c
	strb r0, [r1, #0]	@ 00044f3c 0870
.org 0x44f3e
	str r4, [r3, #40]	@ 00044f3e 9c62
.org 0x44f40
	str r5, [r3, #44]	@ 00044f40 dd62
.org 0x44f42
	movs r0, #0	@ 00044f42 0020
.org 0x44f44
	strb r0, [r3, #16]	@ 00044f44 1874
.org 0x44f46
	strb r0, [r3, #17]	@ 00044f46 5874
.org 0x44f48
	ldrb r0, [r4, #10]	@ 00044f48 a07a
.org 0x44f4a
	lsrs r2, r0, #4	@ 00044f4a 0209
.org 0x44f4c
	movs r0, #1	@ 00044f4c 0120
.org 0x44f4e
	ands r2, r0	@ 00044f4e 0240
.org 0x44f50
	cmp r2, #0	@ 00044f50 002a
.org 0x44f52
	beq.n 0x44f68	@ 00044f52 09d0
.org 0x44f54
	ldrb r0, [r3, #10]	@ 00044f54 987a
.org 0x44f56
	movs r1, #16	@ 00044f56 1021
.org 0x44f58
	orrs r0, r1	@ 00044f58 0843
.org 0x44f5a
	b.n 0x44f6e	@ 00044f5a 08e0
.org 0x44f5c
	.byte 0xf8,0x39,0x85,0x08	@ 00044f5c data
.org 0x44f60
	.byte 0xfc,0x36,0x85,0x08	@ 00044f60 data
.org 0x44f64
	.byte 0x04,0x37,0x85,0x08	@ 00044f64 data
.org 0x44f68
	ldrb r1, [r3, #10]	@ 00044f68 997a
.org 0x44f6a
	movs r0, #239	@ 00044f6a ef20
.org 0x44f6c
	ands r0, r1	@ 00044f6c 0840
.org 0x44f6e
	strb r0, [r3, #10]	@ 00044f6e 9872
.org 0x44f70
	adds r1, r2, #0	@ 00044f70 111c
.org 0x44f72
	adds r0, r3, #0	@ 00044f72 181c
.org 0x44f74
	adds r0, #76	@ 00044f74 4c30
.org 0x44f76
	strb r1, [r0, #0]	@ 00044f76 0170
.org 0x44f78
	movs r0, #74	@ 00044f78 4a20
.org 0x44f7a
	adds r0, r0, r3	@ 00044f7a c018
.org 0x44f7c
	mov ip, r0	@ 00044f7c 8446
.org 0x44f7e
	lsls r1, r1, #4	@ 00044f7e 0901
.org 0x44f80
	ldrb r2, [r0, #0]	@ 00044f80 0278
.org 0x44f82
	movs r0, #17	@ 00044f82 1120
.org 0x44f84
	negs r0, r0	@ 00044f84 4042
.org 0x44f86
	ands r0, r2	@ 00044f86 1040
.org 0x44f88
	orrs r0, r1	@ 00044f88 0843
.org 0x44f8a
	mov r1, ip	@ 00044f8a 6146
.org 0x44f8c
	strb r0, [r1, #0]	@ 00044f8c 0870
.org 0x44f8e
	ldrb r1, [r3, #10]	@ 00044f8e 997a
.org 0x44f90
	movs r0, #16	@ 00044f90 1020
.org 0x44f92
	ands r0, r1	@ 00044f92 0840
.org 0x44f94
	cmp r0, #0	@ 00044f94 0028
.org 0x44f96
	beq.n 0x44fa0	@ 00044f96 03d0
