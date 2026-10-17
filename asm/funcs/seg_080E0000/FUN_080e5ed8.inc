@ FUN_080e5ed8  entry 0x080e5ed8  size 318
.thumb
.org 0xe5ed8
FUN_080e5ed8:
	push {r4, r5, r6, r7, lr}	@ 000e5ed8 f0b5
.org 0xe5eda
	mov r7, r9	@ 000e5eda 4f46
.org 0xe5edc
	mov r6, r8	@ 000e5edc 4646
.org 0xe5ede
	push {r6, r7}	@ 000e5ede c0b4
.org 0xe5ee0
	sub sp, #8	@ 000e5ee0 82b0
.org 0xe5ee2
	adds r6, r0, #0	@ 000e5ee2 061c
.org 0xe5ee4
	ldrb r0, [r6, #17]	@ 000e5ee4 707c
.org 0xe5ee6
	cmp r0, #0	@ 000e5ee6 0028
.org 0xe5ee8
	bne.n 0xe5f3c	@ 000e5ee8 28d1
.org 0xe5eea
	ldr r0, [r6, #84]	@ 000e5eea 706d
.org 0xe5eec
	str r0, [sp, #0]	@ 000e5eec 0090
.org 0xe5eee
	ldr r0, [r6, #88]	@ 000e5eee b06d
.org 0xe5ef0
	movs r1, #224	@ 000e5ef0 e021
.org 0xe5ef2
	lsls r1, r1, #5	@ 000e5ef2 4901
.org 0xe5ef4
	adds r0, r0, r1	@ 000e5ef4 4018
.org 0xe5ef6
	str r0, [sp, #4]	@ 000e5ef6 0190
.org 0xe5ef8
	movs r0, #1	@ 000e5ef8 0120
.org 0xe5efa
	mov r1, sp	@ 000e5efa 6946
.org 0xe5efc
	bl 0xd0c88	@ 000e5efc eaf7c4fe
.org 0xe5f00
	movs r0, #42	@ 000e5f00 2a20
.org 0xe5f02
	bl 0x2b10	@ 000e5f02 1cf705fe
.org 0xe5f06
	movs r4, #1	@ 000e5f06 0124
.org 0xe5f08
	strb r4, [r6, #17]	@ 000e5f08 7474
.org 0xe5f0a
	adds r5, r6, #0	@ 000e5f0a 351c
.org 0xe5f0c
	adds r5, #84	@ 000e5f0c 5435
.org 0xe5f0e
	movs r1, #129	@ 000e5f0e 8121
.org 0xe5f10
	lsls r1, r1, #1	@ 000e5f10 4900
.org 0xe5f12
	ldrb r2, [r6, #10]	@ 000e5f12 b27a
.org 0xe5f14
	lsrs r2, r2, #4	@ 000e5f14 1209
.org 0xe5f16
	ands r2, r4	@ 000e5f16 2240
.org 0xe5f18
	adds r0, r5, #0	@ 000e5f18 281c
.org 0xe5f1a
	bl 0xe5d34	@ 000e5f1a fff70bff
.org 0xe5f1e
	ldr r1, [pc, #176]	@ 000e5f1e 2c49
.org 0xe5f20
	ldrb r2, [r6, #10]	@ 000e5f20 b27a
.org 0xe5f22
	lsrs r2, r2, #4	@ 000e5f22 1209
.org 0xe5f24
	ands r2, r4	@ 000e5f24 2240
.org 0xe5f26
	adds r0, r5, #0	@ 000e5f26 281c
.org 0xe5f28
	bl 0xe5d34	@ 000e5f28 fff704ff
.org 0xe5f2c
	movs r1, #130	@ 000e5f2c 8221
.org 0xe5f2e
	lsls r1, r1, #1	@ 000e5f2e 4900
.org 0xe5f30
	ldrb r2, [r6, #10]	@ 000e5f30 b27a
.org 0xe5f32
	lsrs r2, r2, #4	@ 000e5f32 1209
.org 0xe5f34
	ands r2, r4	@ 000e5f34 2240
.org 0xe5f36
	adds r0, r5, #0	@ 000e5f36 281c
.org 0xe5f38
	bl 0xe5d34	@ 000e5f38 fff7fcfe
.org 0xe5f3c
	ldr r0, [pc, #148]	@ 000e5f3c 2548
.org 0xe5f3e
	ldrb r2, [r6, #17]	@ 000e5f3e 727c
.org 0xe5f40
	subs r2, #1	@ 000e5f40 013a
.org 0xe5f42
	lsls r2, r2, #2	@ 000e5f42 9200
.org 0xe5f44
	adds r2, r2, r0	@ 000e5f44 1218
.org 0xe5f46
	ldr r4, [pc, #144]	@ 000e5f46 244c
.org 0xe5f48
	ldr r0, [r4, #0]	@ 000e5f48 2068
.org 0xe5f4a
	ldr r1, [pc, #144]	@ 000e5f4a 2449
.org 0xe5f4c
	mov r9, r1	@ 000e5f4c 8946
.org 0xe5f4e
	mov r1, r9	@ 000e5f4e 4946
.org 0xe5f50
	muls r1, r0	@ 000e5f50 4143
.org 0xe5f52
	adds r0, r1, #0	@ 000e5f52 081c
.org 0xe5f54
	ldr r1, [pc, #136]	@ 000e5f54 2249
.org 0xe5f56
	mov r8, r1	@ 000e5f56 8846
.org 0xe5f58
	add r0, r8	@ 000e5f58 4044
.org 0xe5f5a
	lsls r0, r0, #1	@ 000e5f5a 4000
.org 0xe5f5c
	lsrs r3, r0, #1	@ 000e5f5c 4308
.org 0xe5f5e
	str r3, [r4, #0]	@ 000e5f5e 2360
.org 0xe5f60
	lsrs r0, r0, #17	@ 000e5f60 400c
.org 0xe5f62
	movs r1, #255	@ 000e5f62 ff21
.org 0xe5f64
	mov ip, r1	@ 000e5f64 8c46
.org 0xe5f66
	ands r0, r1	@ 000e5f66 0840
.org 0xe5f68
	adds r1, #1	@ 000e5f68 0131
.org 0xe5f6a
	adds r0, r0, r1	@ 000e5f6a 4018
.org 0xe5f6c
	ldr r1, [r2, #0]	@ 000e5f6c 1168
.org 0xe5f6e
	muls r0, r1	@ 000e5f6e 4843
.org 0xe5f70
	ldrb r5, [r6, #17]	@ 000e5f70 757c
.org 0xe5f72
	cmp r0, #0	@ 000e5f72 0028
.org 0xe5f74
	bge.n 0xe5f78	@ 000e5f74 00da
.org 0xe5f76
	adds r0, #255	@ 000e5f76 ff30
.org 0xe5f78
	asrs r7, r0, #8	@ 000e5f78 0712
.org 0xe5f7a
	str r7, [r6, #92]	@ 000e5f7a f765
.org 0xe5f7c
	mov r0, r9	@ 000e5f7c 4846
.org 0xe5f7e
	muls r0, r3	@ 000e5f7e 5843
.org 0xe5f80
	add r0, r8	@ 000e5f80 4044
.org 0xe5f82
	lsls r0, r0, #1	@ 000e5f82 4000
.org 0xe5f84
	lsrs r1, r0, #1	@ 000e5f84 4108
.org 0xe5f86
	str r1, [r4, #0]	@ 000e5f86 2160
.org 0xe5f88
	lsrs r0, r0, #17	@ 000e5f88 400c
.org 0xe5f8a
	mov r1, ip	@ 000e5f8a 6146
.org 0xe5f8c
	ands r0, r1	@ 000e5f8c 0840
.org 0xe5f8e
	movs r1, #192	@ 000e5f8e c021
.org 0xe5f90
	lsls r1, r1, #1	@ 000e5f90 4900
.org 0xe5f92
	adds r0, r0, r1	@ 000e5f92 4018
.org 0xe5f94
	lsls r0, r0, #8	@ 000e5f94 0002
.org 0xe5f96
	negs r0, r0	@ 000e5f96 4042
.org 0xe5f98
	cmp r0, #0	@ 000e5f98 0028
.org 0xe5f9a
	bge.n 0xe5f9e	@ 000e5f9a 00da
.org 0xe5f9c
	adds r0, #255	@ 000e5f9c ff30
.org 0xe5f9e
	asrs r0, r0, #8	@ 000e5f9e 0012
.org 0xe5fa0
	str r0, [r6, #96]	@ 000e5fa0 3066
.org 0xe5fa2
	ldrb r1, [r6, #10]	@ 000e5fa2 b17a
.org 0xe5fa4
	movs r0, #16	@ 000e5fa4 1020
.org 0xe5fa6
	ands r0, r1	@ 000e5fa6 0840
.org 0xe5fa8
	cmp r0, #0	@ 000e5fa8 0028
.org 0xe5faa
	beq.n 0xe5fe8	@ 000e5faa 1dd0
.org 0xe5fac
	ldr r2, [pc, #52]	@ 000e5fac 0d4a
.org 0xe5fae
	subs r0, r5, #1	@ 000e5fae 681e
.org 0xe5fb0
	lsls r0, r0, #3	@ 000e5fb0 c000
.org 0xe5fb2
	adds r0, r0, r2	@ 000e5fb2 8018
.org 0xe5fb4
	ldr r1, [r0, #0]	@ 000e5fb4 0168
.org 0xe5fb6
	lsls r1, r1, #8	@ 000e5fb6 0902
.org 0xe5fb8
	ldr r0, [r6, #84]	@ 000e5fb8 706d
.org 0xe5fba
	subs r0, r0, r1	@ 000e5fba 401a
.org 0xe5fbc
	str r0, [r6, #84]	@ 000e5fbc 7065
.org 0xe5fbe
	lsls r0, r7, #8	@ 000e5fbe 3802
.org 0xe5fc0
	negs r0, r0	@ 000e5fc0 4042
.org 0xe5fc2
	cmp r0, #0	@ 000e5fc2 0028
.org 0xe5fc4
	bge.n 0xe5fc8	@ 000e5fc4 00da
.org 0xe5fc6
	adds r0, #255	@ 000e5fc6 ff30
.org 0xe5fc8
	asrs r0, r0, #8	@ 000e5fc8 0012
.org 0xe5fca
	str r0, [r6, #92]	@ 000e5fca f065
.org 0xe5fcc
	b.n 0xe5ffa	@ 000e5fcc 15e0
.org 0xe5fce
	.byte 0x00	@ 000e5fce data
.org 0xe5fcf
	.byte 0x00	@ 000e5fcf data
.org 0xe5fd0
	.byte 0x03,0x01,0x00,0x00	@ 000e5fd0 data
.org 0xe5fd4
	.byte 0x28,0x8f,0x86,0x08	@ 000e5fd4 data
.org 0xe5fd8
	.byte 0x38,0xdc,0x02,0x02	@ 000e5fd8 data
.org 0xe5fdc
	.byte 0xfd,0x43,0x03,0x00	@ 000e5fdc data
.org 0xe5fe0
	.byte 0xc3,0x9e,0x26,0x00	@ 000e5fe0 data
.org 0xe5fe4
	.byte 0x08,0x8f,0x86,0x08	@ 000e5fe4 data
.org 0xe5fe8
	ldr r2, [pc, #68]	@ 000e5fe8 114a
.org 0xe5fea
	subs r0, r5, #1	@ 000e5fea 681e
.org 0xe5fec
	lsls r0, r0, #3	@ 000e5fec c000
.org 0xe5fee
	adds r0, r0, r2	@ 000e5fee 8018
.org 0xe5ff0
	ldr r1, [r0, #0]	@ 000e5ff0 0168
.org 0xe5ff2
	lsls r1, r1, #8	@ 000e5ff2 0902
.org 0xe5ff4
	ldr r0, [r6, #84]	@ 000e5ff4 706d
.org 0xe5ff6
	adds r0, r0, r1	@ 000e5ff6 4018
.org 0xe5ff8
	str r0, [r6, #84]	@ 000e5ff8 7065
.org 0xe5ffa
	subs r0, r5, #1	@ 000e5ffa 681e
.org 0xe5ffc
	lsls r0, r0, #3	@ 000e5ffc c000
.org 0xe5ffe
	adds r1, r2, #4	@ 000e5ffe 111d
.org 0xe6000
	adds r0, r0, r1	@ 000e6000 4018
.org 0xe6002
	ldr r1, [r0, #0]	@ 000e6002 0168
.org 0xe6004
	lsls r1, r1, #8	@ 000e6004 0902
.org 0xe6006
	ldr r0, [r6, #88]	@ 000e6006 b06d
.org 0xe6008
	adds r0, r0, r1	@ 000e6008 4018
.org 0xe600a
	str r0, [r6, #88]	@ 000e600a b065
.org 0xe600c
	ldr r1, [pc, #36]	@ 000e600c 0949
.org 0xe600e
	ldrb r0, [r6, #17]	@ 000e600e 707c
.org 0xe6010
	subs r0, #1	@ 000e6010 0138
.org 0xe6012
	lsls r0, r0, #1	@ 000e6012 4000
.org 0xe6014
	adds r0, r0, r1	@ 000e6014 4018
