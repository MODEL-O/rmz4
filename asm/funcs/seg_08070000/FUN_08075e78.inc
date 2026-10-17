@ FUN_08075e78  entry 0x08075e78  size 328
.thumb
.org 0x75e78
FUN_08075e78:
	push {r4, r5, r6, lr}	@ 00075e78 70b5
.org 0x75e7a
	sub sp, #8	@ 00075e7a 82b0
.org 0x75e7c
	adds r4, r0, #0	@ 00075e7c 041c
.org 0x75e7e
	ldrb r0, [r4, #14]	@ 00075e7e a07b
.org 0x75e80
	cmp r0, #0	@ 00075e80 0028
.org 0x75e82
	bne.n 0x75ecc	@ 00075e82 23d1
.org 0x75e84
	ldr r0, [pc, #12]	@ 00075e84 0348
.org 0x75e86
	ldr r0, [r0, #0]	@ 00075e86 0068
.org 0x75e88
	ldr r1, [r4, #84]	@ 00075e88 616d
.org 0x75e8a
	ldr r0, [r0, #84]	@ 00075e8a 406d
.org 0x75e8c
	cmp r1, r0	@ 00075e8c 8142
.org 0x75e8e
	bge.n 0x75e98	@ 00075e8e 03da
.org 0x75e90
	movs r0, #248	@ 00075e90 f820
.org 0x75e92
	b.n 0x75e9a	@ 00075e92 02e0
.org 0x75e94
	.byte 0xf0,0xdb,0x02,0x02	@ 00075e94 data
.org 0x75e98
	movs r0, #136	@ 00075e98 8820
.org 0x75e9a
	strb r0, [r4, #18]	@ 00075e9a a074
.org 0x75e9c
	movs r0, #0	@ 00075e9c 0020
.org 0x75e9e
	strb r0, [r4, #19]	@ 00075e9e e074
.org 0x75ea0
	adds r0, r4, #0	@ 00075ea0 201c
.org 0x75ea2
	adds r0, #164	@ 00075ea2 a430
.org 0x75ea4
	movs r1, #0	@ 00075ea4 0021
.org 0x75ea6
	ldrsh r0, [r0, r1]	@ 00075ea6 405e
.org 0x75ea8
	cmp r0, #15	@ 00075ea8 0f28
.org 0x75eaa
	bgt.n 0x75eb2	@ 00075eaa 02dc
.org 0x75eac
	movs r0, #192	@ 00075eac c020
.org 0x75eae
	lsls r0, r0, #2	@ 00075eae 8000
.org 0x75eb0
	b.n 0x75ec0	@ 00075eb0 06e0
.org 0x75eb2
	cmp r0, #31	@ 00075eb2 1f28
.org 0x75eb4
	bgt.n 0x75ebc	@ 00075eb4 02dc
.org 0x75eb6
	movs r0, #160	@ 00075eb6 a020
.org 0x75eb8
	lsls r0, r0, #2	@ 00075eb8 8000
.org 0x75eba
	b.n 0x75ec0	@ 00075eba 01e0
.org 0x75ebc
	movs r0, #128	@ 00075ebc 8020
.org 0x75ebe
	lsls r0, r0, #2	@ 00075ebe 8000
.org 0x75ec0
	str r0, [r4, #96]	@ 00075ec0 2066
.org 0x75ec2
	movs r0, #0	@ 00075ec2 0020
.org 0x75ec4
	strb r0, [r4, #15]	@ 00075ec4 e073
.org 0x75ec6
	ldrb r0, [r4, #14]	@ 00075ec6 a07b
.org 0x75ec8
	adds r0, #1	@ 00075ec8 0130
.org 0x75eca
	strb r0, [r4, #14]	@ 00075eca a073
.org 0x75ecc
	adds r0, r4, #0	@ 00075ecc 201c
.org 0x75ece
	bl 0x1cff0	@ 00075ece a7f78ff8
.org 0x75ed2
	ldr r0, [r4, #96]	@ 00075ed2 206e
.org 0x75ed4
	adds r0, #16	@ 00075ed4 1030
.org 0x75ed6
	str r0, [r4, #96]	@ 00075ed6 2066
.org 0x75ed8
	movs r1, #224	@ 00075ed8 e021
.org 0x75eda
	lsls r1, r1, #3	@ 00075eda c900
.org 0x75edc
	cmp r0, r1	@ 00075edc 8842
.org 0x75ede
	ble.n 0x75ee2	@ 00075ede 00dd
.org 0x75ee0
	str r1, [r4, #96]	@ 00075ee0 2166
.org 0x75ee2
	ldr r3, [pc, #120]	@ 00075ee2 1e4b
.org 0x75ee4
	ldrb r0, [r4, #18]	@ 00075ee4 a07c
.org 0x75ee6
	adds r0, #64	@ 00075ee6 4030
.org 0x75ee8
	lsls r0, r0, #24	@ 00075ee8 0006
.org 0x75eea
	lsrs r0, r0, #23	@ 00075eea c00d
.org 0x75eec
	adds r0, r0, r3	@ 00075eec c018
.org 0x75eee
	movs r2, #0	@ 00075eee 0022
.org 0x75ef0
	ldrsh r0, [r0, r2]	@ 00075ef0 805e
.org 0x75ef2
	ldr r1, [r4, #96]	@ 00075ef2 216e
.org 0x75ef4
	adds r2, r0, #0	@ 00075ef4 021c
.org 0x75ef6
	muls r2, r1	@ 00075ef6 4a43
.org 0x75ef8
	asrs r2, r2, #8	@ 00075ef8 1212
.org 0x75efa
	str r2, [r4, #92]	@ 00075efa e265
.org 0x75efc
	ldr r0, [r4, #84]	@ 00075efc 606d
.org 0x75efe
	adds r5, r0, r2	@ 00075efe 8518
.org 0x75f00
	str r5, [r4, #84]	@ 00075f00 6565
.org 0x75f02
	ldrb r0, [r4, #18]	@ 00075f02 a07c
.org 0x75f04
	lsls r0, r0, #1	@ 00075f04 4000
.org 0x75f06
	adds r0, r0, r3	@ 00075f06 c018
.org 0x75f08
	movs r3, #0	@ 00075f08 0023
.org 0x75f0a
	ldrsh r0, [r0, r3]	@ 00075f0a c05e
.org 0x75f0c
	muls r1, r0	@ 00075f0c 4143
.org 0x75f0e
	asrs r1, r1, #8	@ 00075f0e 0912
.org 0x75f10
	ldr r0, [r4, #88]	@ 00075f10 a06d
.org 0x75f12
	adds r0, r0, r1	@ 00075f12 4018
.org 0x75f14
	str r0, [r4, #88]	@ 00075f14 a065
.org 0x75f16
	cmp r2, #0	@ 00075f16 002a
.org 0x75f18
	ble.n 0x75f68	@ 00075f18 26dd
.org 0x75f1a
	adds r1, r4, #0	@ 00075f1a 211c
.org 0x75f1c
	adds r1, #180	@ 00075f1c b431
.org 0x75f1e
	ldr r0, [r1, #20]	@ 00075f1e 4869
.org 0x75f20
	ldr r2, [pc, #60]	@ 00075f20 0f4a
.org 0x75f22
	adds r0, r0, r2	@ 00075f22 8018
.org 0x75f24
	adds r6, r1, #0	@ 00075f24 0e1c
.org 0x75f26
	cmp r5, r0	@ 00075f26 8542
.org 0x75f28
	ble.n 0x75fb4	@ 00075f28 44dd
.org 0x75f2a
	movs r0, #56	@ 00075f2a 3820
.org 0x75f2c
	bl 0x2b10	@ 00075f2c 8cf7f0fd
.org 0x75f30
	ldr r0, [r6, #20]	@ 00075f30 7069
.org 0x75f32
	str r0, [sp, #0]	@ 00075f32 0090
.org 0x75f34
	ldr r0, [r4, #88]	@ 00075f34 a06d
.org 0x75f36
	ldr r3, [pc, #44]	@ 00075f36 0b4b
.org 0x75f38
	adds r0, r0, r3	@ 00075f38 c018
.org 0x75f3a
	str r0, [sp, #4]	@ 00075f3a 0190
.org 0x75f3c
	mov r0, sp	@ 00075f3c 6846
.org 0x75f3e
	movs r1, #1	@ 00075f3e 0121
.org 0x75f40
	movs r2, #1	@ 00075f40 0122
.org 0x75f42
	bl 0xe2e8c	@ 00075f42 6cf0a3ff
.org 0x75f46
	ldr r0, [r6, #20]	@ 00075f46 7069
.org 0x75f48
	ldr r1, [pc, #20]	@ 00075f48 0549
.org 0x75f4a
	adds r0, r0, r1	@ 00075f4a 4018
.org 0x75f4c
	str r0, [r4, #84]	@ 00075f4c 6065
.org 0x75f4e
	ldrb r0, [r4, #19]	@ 00075f4e e07c
.org 0x75f50
	adds r0, #1	@ 00075f50 0130
.org 0x75f52
	strb r0, [r4, #19]	@ 00075f52 e074
.org 0x75f54
	ldrb r0, [r4, #19]	@ 00075f54 e07c
.org 0x75f56
	lsls r0, r0, #2	@ 00075f56 8000
.org 0x75f58
	subs r0, #120	@ 00075f58 7838
.org 0x75f5a
	b.n 0x75fb2	@ 00075f5a 2ae0
.org 0x75f5c
	.byte 0x0c,0x93,0x12,0x08	@ 00075f5c data
.org 0x75f60
	.byte 0x00,0xc2,0xff,0xff	@ 00075f60 data
.org 0x75f64
	.byte 0x00,0xee,0xff,0xff	@ 00075f64 data
.org 0x75f68
	adds r1, r4, #0	@ 00075f68 211c
.org 0x75f6a
	adds r1, #180	@ 00075f6a b431
.org 0x75f6c
	ldr r0, [r1, #16]	@ 00075f6c 0869
.org 0x75f6e
	movs r2, #248	@ 00075f6e f822
.org 0x75f70
	lsls r2, r2, #6	@ 00075f70 9201
.org 0x75f72
	adds r0, r0, r2	@ 00075f72 8018
.org 0x75f74
	adds r6, r1, #0	@ 00075f74 0e1c
.org 0x75f76
	cmp r5, r0	@ 00075f76 8542
.org 0x75f78
	bge.n 0x75fb4	@ 00075f78 1cda
.org 0x75f7a
	movs r0, #56	@ 00075f7a 3820
.org 0x75f7c
	bl 0x2b10	@ 00075f7c 8cf7c8fd
.org 0x75f80
	ldr r0, [r6, #16]	@ 00075f80 3069
.org 0x75f82
	str r0, [sp, #0]	@ 00075f82 0090
.org 0x75f84
	ldr r0, [r4, #88]	@ 00075f84 a06d
.org 0x75f86
	ldr r3, [pc, #72]	@ 00075f86 124b
.org 0x75f88
	adds r0, r0, r3	@ 00075f88 c018
.org 0x75f8a
	str r0, [sp, #4]	@ 00075f8a 0190
.org 0x75f8c
	mov r0, sp	@ 00075f8c 6846
.org 0x75f8e
	movs r1, #1	@ 00075f8e 0121
.org 0x75f90
	movs r2, #0	@ 00075f90 0022
.org 0x75f92
	bl 0xe2e8c	@ 00075f92 6cf07bff
.org 0x75f96
	ldr r0, [r6, #16]	@ 00075f96 3069
.org 0x75f98
	movs r1, #248	@ 00075f98 f821
.org 0x75f9a
	lsls r1, r1, #6	@ 00075f9a 8901
.org 0x75f9c
	adds r0, r0, r1	@ 00075f9c 4018
.org 0x75f9e
	str r0, [r4, #84]	@ 00075f9e 6065
.org 0x75fa0
	ldrb r0, [r4, #19]	@ 00075fa0 e07c
.org 0x75fa2
	adds r0, #1	@ 00075fa2 0130
.org 0x75fa4
	strb r0, [r4, #19]	@ 00075fa4 e074
.org 0x75fa6
	ldrb r1, [r4, #19]	@ 00075fa6 e17c
.org 0x75fa8
	lsls r1, r1, #2	@ 00075fa8 8900
.org 0x75faa
	movs r2, #8	@ 00075faa 0822
.org 0x75fac
	negs r2, r2	@ 00075fac 5242
.org 0x75fae
	adds r0, r2, #0	@ 00075fae 101c
.org 0x75fb0
	subs r0, r0, r1	@ 00075fb0 401a
.org 0x75fb2
	strb r0, [r4, #18]	@ 00075fb2 a074
.org 0x75fb4
	ldr r0, [r6, #4]	@ 00075fb4 7068
.org 0x75fb6
	ldr r3, [pc, #28]	@ 00075fb6 074b
.org 0x75fb8
	adds r0, r0, r3	@ 00075fb8 c018
.org 0x75fba
	ldr r1, [r4, #88]	@ 00075fba a16d
.org 0x75fbc
	cmp r1, r0	@ 00075fbc 8142
.org 0x75fbe
	bge.n 0x75fc8	@ 00075fbe 03da
