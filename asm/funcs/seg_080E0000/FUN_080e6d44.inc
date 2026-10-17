@ FUN_080e6d44  entry 0x080e6d44  size 338
.thumb
.org 0xe6d44
FUN_080e6d44:
	push {r4, r5, r6, r7, lr}	@ 000e6d44 f0b5
.org 0xe6d46
	mov r7, r8	@ 000e6d46 4746
.org 0xe6d48
	push {r7}	@ 000e6d48 80b4
.org 0xe6d4a
	sub sp, #8	@ 000e6d4a 82b0
.org 0xe6d4c
	adds r6, r0, #0	@ 000e6d4c 061c
.org 0xe6d4e
	ldrb r0, [r6, #17]	@ 000e6d4e 707c
.org 0xe6d50
	cmp r0, #0	@ 000e6d50 0028
.org 0xe6d52
	bne.n 0xe6dc2	@ 000e6d52 36d1
.org 0xe6d54
	ldr r0, [r6, #84]	@ 000e6d54 706d
.org 0xe6d56
	str r0, [sp, #0]	@ 000e6d56 0090
.org 0xe6d58
	ldr r0, [r6, #88]	@ 000e6d58 b06d
.org 0xe6d5a
	ldr r1, [pc, #244]	@ 000e6d5a 3d49
.org 0xe6d5c
	adds r0, r0, r1	@ 000e6d5c 4018
.org 0xe6d5e
	str r0, [sp, #4]	@ 000e6d5e 0190
.org 0xe6d60
	movs r0, #1	@ 000e6d60 0120
.org 0xe6d62
	mov r1, sp	@ 000e6d62 6946
.org 0xe6d64
	bl 0xd0c88	@ 000e6d64 e9f790ff
.org 0xe6d68
	movs r0, #167	@ 000e6d68 a720
.org 0xe6d6a
	bl 0x2b10	@ 000e6d6a 1bf7d1fe
.org 0xe6d6e
	movs r4, #1	@ 000e6d6e 0124
.org 0xe6d70
	strb r4, [r6, #17]	@ 000e6d70 7474
.org 0xe6d72
	adds r5, r6, #0	@ 000e6d72 351c
.org 0xe6d74
	adds r5, #84	@ 000e6d74 5435
.org 0xe6d76
	movs r1, #129	@ 000e6d76 8121
.org 0xe6d78
	lsls r1, r1, #1	@ 000e6d78 4900
.org 0xe6d7a
	ldrb r2, [r6, #10]	@ 000e6d7a b27a
.org 0xe6d7c
	lsrs r2, r2, #4	@ 000e6d7c 1209
.org 0xe6d7e
	ands r2, r4	@ 000e6d7e 2240
.org 0xe6d80
	adds r0, r5, #0	@ 000e6d80 281c
.org 0xe6d82
	bl 0xe6b5c	@ 000e6d82 fff7ebfe
.org 0xe6d86
	ldr r1, [pc, #204]	@ 000e6d86 3349
.org 0xe6d88
	ldrb r2, [r6, #10]	@ 000e6d88 b27a
.org 0xe6d8a
	lsrs r2, r2, #4	@ 000e6d8a 1209
.org 0xe6d8c
	ands r2, r4	@ 000e6d8c 2240
.org 0xe6d8e
	adds r0, r5, #0	@ 000e6d8e 281c
.org 0xe6d90
	bl 0xe6b5c	@ 000e6d90 fff7e4fe
.org 0xe6d94
	movs r1, #130	@ 000e6d94 8221
.org 0xe6d96
	lsls r1, r1, #1	@ 000e6d96 4900
.org 0xe6d98
	ldrb r2, [r6, #10]	@ 000e6d98 b27a
.org 0xe6d9a
	lsrs r2, r2, #4	@ 000e6d9a 1209
.org 0xe6d9c
	ands r2, r4	@ 000e6d9c 2240
.org 0xe6d9e
	adds r0, r5, #0	@ 000e6d9e 281c
.org 0xe6da0
	bl 0xe6b5c	@ 000e6da0 fff7dcfe
.org 0xe6da4
	ldr r1, [pc, #176]	@ 000e6da4 2c49
.org 0xe6da6
	ldrb r2, [r6, #10]	@ 000e6da6 b27a
.org 0xe6da8
	lsrs r2, r2, #4	@ 000e6da8 1209
.org 0xe6daa
	ands r2, r4	@ 000e6daa 2240
.org 0xe6dac
	adds r0, r5, #0	@ 000e6dac 281c
.org 0xe6dae
	bl 0xe6b5c	@ 000e6dae fff7d5fe
.org 0xe6db2
	movs r1, #131	@ 000e6db2 8321
.org 0xe6db4
	lsls r1, r1, #1	@ 000e6db4 4900
.org 0xe6db6
	ldrb r2, [r6, #10]	@ 000e6db6 b27a
.org 0xe6db8
	lsrs r2, r2, #4	@ 000e6db8 1209
.org 0xe6dba
	ands r2, r4	@ 000e6dba 2240
.org 0xe6dbc
	adds r0, r5, #0	@ 000e6dbc 281c
.org 0xe6dbe
	bl 0xe6b5c	@ 000e6dbe fff7cdfe
.org 0xe6dc2
	ldr r0, [pc, #152]	@ 000e6dc2 2648
.org 0xe6dc4
	ldrb r2, [r6, #17]	@ 000e6dc4 727c
.org 0xe6dc6
	subs r2, #1	@ 000e6dc6 013a
.org 0xe6dc8
	lsls r2, r2, #2	@ 000e6dc8 9200
.org 0xe6dca
	adds r2, r2, r0	@ 000e6dca 1218
.org 0xe6dcc
	ldr r4, [pc, #144]	@ 000e6dcc 244c
.org 0xe6dce
	ldr r0, [r4, #0]	@ 000e6dce 2068
.org 0xe6dd0
	ldr r1, [pc, #144]	@ 000e6dd0 2449
.org 0xe6dd2
	mov r8, r1	@ 000e6dd2 8846
.org 0xe6dd4
	mov r1, r8	@ 000e6dd4 4146
.org 0xe6dd6
	muls r1, r0	@ 000e6dd6 4143
.org 0xe6dd8
	adds r0, r1, #0	@ 000e6dd8 081c
.org 0xe6dda
	ldr r1, [pc, #140]	@ 000e6dda 2349
.org 0xe6ddc
	mov ip, r1	@ 000e6ddc 8c46
.org 0xe6dde
	add r0, ip	@ 000e6dde 6044
.org 0xe6de0
	lsls r0, r0, #1	@ 000e6de0 4000
.org 0xe6de2
	lsrs r3, r0, #1	@ 000e6de2 4308
.org 0xe6de4
	str r3, [r4, #0]	@ 000e6de4 2360
.org 0xe6de6
	lsrs r0, r0, #17	@ 000e6de6 400c
.org 0xe6de8
	movs r1, #255	@ 000e6de8 ff21
.org 0xe6dea
	ands r0, r1	@ 000e6dea 0840
.org 0xe6dec
	adds r1, #1	@ 000e6dec 0131
.org 0xe6dee
	adds r0, r0, r1	@ 000e6dee 4018
.org 0xe6df0
	ldr r1, [r2, #0]	@ 000e6df0 1168
.org 0xe6df2
	muls r0, r1	@ 000e6df2 4843
.org 0xe6df4
	ldrb r5, [r6, #17]	@ 000e6df4 757c
.org 0xe6df6
	cmp r0, #0	@ 000e6df6 0028
.org 0xe6df8
	bge.n 0xe6dfc	@ 000e6df8 00da
.org 0xe6dfa
	adds r0, #255	@ 000e6dfa ff30
.org 0xe6dfc
	asrs r7, r0, #8	@ 000e6dfc 0712
.org 0xe6dfe
	str r7, [r6, #92]	@ 000e6dfe f765
.org 0xe6e00
	mov r0, r8	@ 000e6e00 4046
.org 0xe6e02
	muls r0, r3	@ 000e6e02 5843
.org 0xe6e04
	add r0, ip	@ 000e6e04 6044
.org 0xe6e06
	lsls r0, r0, #1	@ 000e6e06 4000
.org 0xe6e08
	lsrs r1, r0, #1	@ 000e6e08 4108
.org 0xe6e0a
	str r1, [r4, #0]	@ 000e6e0a 2160
.org 0xe6e0c
	lsls r0, r0, #6	@ 000e6e0c 8001
.org 0xe6e0e
	lsrs r0, r0, #23	@ 000e6e0e c00d
.org 0xe6e10
	movs r1, #192	@ 000e6e10 c021
.org 0xe6e12
	lsls r1, r1, #1	@ 000e6e12 4900
.org 0xe6e14
	adds r0, r0, r1	@ 000e6e14 4018
.org 0xe6e16
	lsls r0, r0, #8	@ 000e6e16 0002
.org 0xe6e18
	negs r0, r0	@ 000e6e18 4042
.org 0xe6e1a
	cmp r0, #0	@ 000e6e1a 0028
.org 0xe6e1c
	bge.n 0xe6e20	@ 000e6e1c 00da
.org 0xe6e1e
	adds r0, #255	@ 000e6e1e ff30
.org 0xe6e20
	asrs r0, r0, #8	@ 000e6e20 0012
.org 0xe6e22
	str r0, [r6, #96]	@ 000e6e22 3066
.org 0xe6e24
	ldrb r1, [r6, #10]	@ 000e6e24 b17a
.org 0xe6e26
	movs r0, #16	@ 000e6e26 1020
.org 0xe6e28
	ands r0, r1	@ 000e6e28 0840
.org 0xe6e2a
	cmp r0, #0	@ 000e6e2a 0028
.org 0xe6e2c
	beq.n 0xe6e70	@ 000e6e2c 20d0
.org 0xe6e2e
	ldr r2, [pc, #60]	@ 000e6e2e 0f4a
.org 0xe6e30
	subs r0, r5, #1	@ 000e6e30 681e
.org 0xe6e32
	lsls r0, r0, #3	@ 000e6e32 c000
.org 0xe6e34
	adds r0, r0, r2	@ 000e6e34 8018
.org 0xe6e36
	ldr r1, [r0, #0]	@ 000e6e36 0168
.org 0xe6e38
	lsls r1, r1, #8	@ 000e6e38 0902
.org 0xe6e3a
	ldr r0, [r6, #84]	@ 000e6e3a 706d
.org 0xe6e3c
	subs r0, r0, r1	@ 000e6e3c 401a
.org 0xe6e3e
	str r0, [r6, #84]	@ 000e6e3e 7065
.org 0xe6e40
	lsls r0, r7, #8	@ 000e6e40 3802
.org 0xe6e42
	negs r0, r0	@ 000e6e42 4042
.org 0xe6e44
	cmp r0, #0	@ 000e6e44 0028
.org 0xe6e46
	bge.n 0xe6e4a	@ 000e6e46 00da
.org 0xe6e48
	adds r0, #255	@ 000e6e48 ff30
.org 0xe6e4a
	asrs r0, r0, #8	@ 000e6e4a 0012
.org 0xe6e4c
	str r0, [r6, #92]	@ 000e6e4c f065
.org 0xe6e4e
	b.n 0xe6e82	@ 000e6e4e 18e0
.org 0xe6e50
	.byte 0x00,0xf1,0xff,0xff	@ 000e6e50 data
.org 0xe6e54
	.byte 0x03,0x01,0x00,0x00	@ 000e6e54 data
.org 0xe6e58
	.byte 0x05,0x01,0x00,0x00	@ 000e6e58 data
.org 0xe6e5c
	.byte 0x18,0x90,0x86,0x08	@ 000e6e5c data
.org 0xe6e60
	.byte 0x38,0xdc,0x02,0x02	@ 000e6e60 data
.org 0xe6e64
	.byte 0xfd,0x43,0x03,0x00	@ 000e6e64 data
.org 0xe6e68
	.byte 0xc3,0x9e,0x26,0x00	@ 000e6e68 data
.org 0xe6e6c
	.byte 0xe8,0x8f,0x86,0x08	@ 000e6e6c data
.org 0xe6e70
	ldr r2, [pc, #68]	@ 000e6e70 114a
.org 0xe6e72
	subs r0, r5, #1	@ 000e6e72 681e
.org 0xe6e74
	lsls r0, r0, #3	@ 000e6e74 c000
.org 0xe6e76
	adds r0, r0, r2	@ 000e6e76 8018
.org 0xe6e78
	ldr r1, [r0, #0]	@ 000e6e78 0168
.org 0xe6e7a
	lsls r1, r1, #8	@ 000e6e7a 0902
.org 0xe6e7c
	ldr r0, [r6, #84]	@ 000e6e7c 706d
.org 0xe6e7e
	adds r0, r0, r1	@ 000e6e7e 4018
.org 0xe6e80
	str r0, [r6, #84]	@ 000e6e80 7065
.org 0xe6e82
	subs r0, r5, #1	@ 000e6e82 681e
.org 0xe6e84
	lsls r0, r0, #3	@ 000e6e84 c000
.org 0xe6e86
	adds r1, r2, #4	@ 000e6e86 111d
.org 0xe6e88
	adds r0, r0, r1	@ 000e6e88 4018
.org 0xe6e8a
	ldr r1, [r0, #0]	@ 000e6e8a 0168
.org 0xe6e8c
	lsls r1, r1, #8	@ 000e6e8c 0902
.org 0xe6e8e
	ldr r0, [r6, #88]	@ 000e6e8e b06d
.org 0xe6e90
	adds r0, r0, r1	@ 000e6e90 4018
.org 0xe6e92
	str r0, [r6, #88]	@ 000e6e92 b065
.org 0xe6e94
	ldr r1, [pc, #36]	@ 000e6e94 0949
