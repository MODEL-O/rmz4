@ FUN_08117e60  entry 0x08117e60  size 270
.thumb
.org 0x117e60
FUN_08117e60:
	push {r4, r5, r6, r7, lr}	@ 00117e60 f0b5
.org 0x117e62
	mov r7, r8	@ 00117e62 4746
.org 0x117e64
	push {r7}	@ 00117e64 80b4
.org 0x117e66
	adds r6, r0, #0	@ 00117e66 061c
.org 0x117e68
	ldr r1, [pc, #216]	@ 00117e68 3649
.org 0x117e6a
	adds r0, r6, r1	@ 00117e6a 7018
.org 0x117e6c
	ldr r5, [r0, #0]	@ 00117e6c 0568
.org 0x117e6e
	movs r0, #18	@ 00117e6e 1220
.org 0x117e70
	bl 0x2624	@ 00117e70 eaf6d8fb
.org 0x117e74
	ldr r2, [pc, #208]	@ 00117e74 344a
.org 0x117e76
	adds r0, r6, r2	@ 00117e76 b018
.org 0x117e78
	ldr r0, [r0, #32]	@ 00117e78 006a
.org 0x117e7a
	adds r0, #124	@ 00117e7a 7c30
.org 0x117e7c
	movs r1, #1	@ 00117e7c 0121
.org 0x117e7e
	strb r1, [r0, #0]	@ 00117e7e 0170
.org 0x117e80
	adds r7, r5, #0	@ 00117e80 2f1c
.org 0x117e82
	adds r7, #164	@ 00117e82 a437
.org 0x117e84
	movs r3, #0	@ 00117e84 0023
.org 0x117e86
	ldrsh r4, [r7, r3]	@ 00117e86 fc5e
.org 0x117e88
	adds r0, r5, #0	@ 00117e88 281c
.org 0x117e8a
	bl 0x2b61c	@ 00117e8a 13f7c7fb
.org 0x117e8e
	lsls r0, r0, #24	@ 00117e8e 0006
.org 0x117e90
	lsrs r0, r0, #24	@ 00117e90 000e
.org 0x117e92
	cmp r4, r0	@ 00117e92 8442
.org 0x117e94
	ble.n 0x117ea2	@ 00117e94 05dd
.org 0x117e96
	adds r0, r5, #0	@ 00117e96 281c
.org 0x117e98
	bl 0x2b61c	@ 00117e98 13f7c0fb
.org 0x117e9c
	lsls r0, r0, #24	@ 00117e9c 0006
.org 0x117e9e
	lsrs r0, r0, #24	@ 00117e9e 000e
.org 0x117ea0
	strh r0, [r7, #0]	@ 00117ea0 3880
.org 0x117ea2
	adds r0, r6, #0	@ 00117ea2 301c
.org 0x117ea4
	bl 0x118048	@ 00117ea4 00f0d0f8
.org 0x117ea8
	adds r4, r5, #0	@ 00117ea8 2c1c
.org 0x117eaa
	adds r4, #180	@ 00117eaa b434
.org 0x117eac
	adds r1, r5, #0	@ 00117eac 291c
.org 0x117eae
	adds r1, #248	@ 00117eae f831
.org 0x117eb0
	ldrb r0, [r1, #0]	@ 00117eb0 0878
.org 0x117eb2
	cmp r0, #2	@ 00117eb2 0228
.org 0x117eb4
	bls.n 0x117eba	@ 00117eb4 01d9
.org 0x117eb6
	movs r0, #2	@ 00117eb6 0220
.org 0x117eb8
	strb r0, [r1, #0]	@ 00117eb8 0870
.org 0x117eba
	adds r1, r5, #0	@ 00117eba 291c
.org 0x117ebc
	adds r1, #249	@ 00117ebc f931
.org 0x117ebe
	ldrb r0, [r1, #0]	@ 00117ebe 0878
.org 0x117ec0
	cmp r0, #2	@ 00117ec0 0228
.org 0x117ec2
	bls.n 0x117ec8	@ 00117ec2 01d9
.org 0x117ec4
	movs r0, #2	@ 00117ec4 0220
.org 0x117ec6
	strb r0, [r1, #0]	@ 00117ec6 0870
.org 0x117ec8
	adds r0, r6, #0	@ 00117ec8 301c
.org 0x117eca
	bl 0x1180f8	@ 00117eca 00f015f9
.org 0x117ece
	ldr r1, [pc, #124]	@ 00117ece 1f49
.org 0x117ed0
	adds r0, r6, r1	@ 00117ed0 7018
.org 0x117ed2
	ldrb r0, [r0, #0]	@ 00117ed2 0078
.org 0x117ed4
	ldrb r2, [r4, #14]	@ 00117ed4 a27b
.org 0x117ed6
	cmp r0, r2	@ 00117ed6 9042
.org 0x117ed8
	beq.n 0x117ee0	@ 00117ed8 02d0
.org 0x117eda
	ldrb r0, [r4, #14]	@ 00117eda a07b
.org 0x117edc
	bl 0x2ad9c	@ 00117edc 12f75eff
.org 0x117ee0
	ldr r1, [pc, #108]	@ 00117ee0 1b49
.org 0x117ee2
	ldr r3, [pc, #112]	@ 00117ee2 1c4b
.org 0x117ee4
	adds r0, r6, r3	@ 00117ee4 f018
.org 0x117ee6
	ldrb r0, [r0, #0]	@ 00117ee6 0078
.org 0x117ee8
	lsls r0, r0, #2	@ 00117ee8 8000
.org 0x117eea
	adds r0, r0, r1	@ 00117eea 4018
.org 0x117eec
	ldr r1, [r0, #0]	@ 00117eec 0168
.org 0x117eee
	adds r0, r6, #0	@ 00117eee 301c
.org 0x117ef0
	bl 0x128f80	@ 00117ef0 11f046f8
.org 0x117ef4
	ldr r1, [pc, #96]	@ 00117ef4 1849
.org 0x117ef6
	adds r0, r6, r1	@ 00117ef6 7018
.org 0x117ef8
	ldrb r2, [r0, #0]	@ 00117ef8 0278
.org 0x117efa
	movs r3, #241	@ 00117efa f123
.org 0x117efc
	adds r3, r3, r5	@ 00117efc 5b19
.org 0x117efe
	mov r8, r3	@ 00117efe 9846
.org 0x117f00
	ldrb r0, [r3, #0]	@ 00117f00 1878
.org 0x117f02
	adds r7, r5, #0	@ 00117f02 2f1c
.org 0x117f04
	adds r7, #242	@ 00117f04 f237
.org 0x117f06
	ldrb r1, [r7, #0]	@ 00117f06 3978
.org 0x117f08
	adds r4, r5, #0	@ 00117f08 2c1c
.org 0x117f0a
	adds r4, #243	@ 00117f0a f334
.org 0x117f0c
	adds r0, r0, r1	@ 00117f0c 4018
.org 0x117f0e
	ldrb r3, [r4, #0]	@ 00117f0e 2378
.org 0x117f10
	adds r1, r0, r3	@ 00117f10 c118
.org 0x117f12
	cmp r2, r1	@ 00117f12 8a42
.org 0x117f14
	bge.n 0x117f1a	@ 00117f14 01da
.org 0x117f16
	ldr r0, [pc, #68]	@ 00117f16 1148
.org 0x117f18
	strb r1, [r0, #16]	@ 00117f18 0174
.org 0x117f1a
	ldr r0, [pc, #68]	@ 00117f1a 1148
.org 0x117f1c
	bl 0x3a964	@ 00117f1c 22f722fd
.org 0x117f20
	mov r1, r8	@ 00117f20 4146
.org 0x117f22
	ldrb r0, [r1, #0]	@ 00117f22 0878
.org 0x117f24
	ldrb r1, [r7, #0]	@ 00117f24 3978
.org 0x117f26
	adds r0, r0, r1	@ 00117f26 4018
.org 0x117f28
	ldrb r4, [r4, #0]	@ 00117f28 2478
.org 0x117f2a
	adds r0, r0, r4	@ 00117f2a 0019
.org 0x117f2c
	cmp r0, #0	@ 00117f2c 0028
.org 0x117f2e
	beq.n 0x117f68	@ 00117f2e 1bd0
.org 0x117f30
	ldr r2, [pc, #48]	@ 00117f30 0c4a
.org 0x117f32
	adds r0, r6, r2	@ 00117f32 b018
.org 0x117f34
	ldrb r0, [r0, #0]	@ 00117f34 0078
.org 0x117f36
	cmp r0, #0	@ 00117f36 0028
.org 0x117f38
	bne.n 0x117f6e	@ 00117f38 19d1
.org 0x117f3a
	adds r0, r5, #0	@ 00117f3a 281c
.org 0x117f3c
	bl 0x109320	@ 00117f3c f1f7f0f9
.org 0x117f40
	b.n 0x117f6e	@ 00117f40 15e0
.org 0x117f42
	.byte 0x00	@ 00117f42 data
.org 0x117f43
	.byte 0x00	@ 00117f43 data
.org 0x117f44
	.byte 0xa8,0x63,0x00,0x00	@ 00117f44 data
.org 0x117f48
	.byte 0xcc,0x0d,0x00,0x00	@ 00117f48 data
.org 0x117f4c
	.byte 0xf4,0x0d,0x00,0x00	@ 00117f4c data
.org 0x117f50
	.byte 0xdc,0x1b,0x88,0x08	@ 00117f50 data
.org 0x117f54
	.byte 0xf8,0x0d,0x00,0x00	@ 00117f54 data
.org 0x117f58
	.byte 0x06,0x0e,0x00,0x00	@ 00117f58 data
.org 0x117f5c
	.byte 0xe0,0xe8,0x02,0x02	@ 00117f5c data
.org 0x117f60
	.byte 0xad,0x83,0x11,0x08	@ 00117f60 data
.org 0x117f64
	.byte 0xf6,0x0d,0x00,0x00	@ 00117f64 data
.org 0x117f68
	ldr r0, [pc, #40]	@ 00117f68 0a48
.org 0x117f6a
	bl 0x1091c8	@ 00117f6a f1f72df9
