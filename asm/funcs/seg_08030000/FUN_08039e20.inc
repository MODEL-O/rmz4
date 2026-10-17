@ FUN_08039e20  entry 0x08039e20  size 312
.thumb
.org 0x39e20
FUN_08039e20:
	push {r4, r5, lr}	@ 00039e20 30b5
.org 0x39e22
	adds r1, r0, #0	@ 00039e22 011c
.org 0x39e24
	ldr r0, [pc, #16]	@ 00039e24 0448
.org 0x39e26
	adds r3, r1, r0	@ 00039e26 0b18
.org 0x39e28
	ldrb r2, [r3, #0]	@ 00039e28 1a78
.org 0x39e2a
	cmp r2, #1	@ 00039e2a 012a
.org 0x39e2c
	beq.n 0x39ea8	@ 00039e2c 3cd0
.org 0x39e2e
	cmp r2, #1	@ 00039e2e 012a
.org 0x39e30
	bgt.n 0x39e3c	@ 00039e30 04dc
.org 0x39e32
	cmp r2, #0	@ 00039e32 002a
.org 0x39e34
	beq.n 0x39e48	@ 00039e34 08d0
.org 0x39e36
	b.n 0x39f6e	@ 00039e36 9ae0
.org 0x39e38
	.byte 0x75,0x02,0x00,0x00	@ 00039e38 data
.org 0x39e3c
	cmp r2, #2	@ 00039e3c 022a
.org 0x39e3e
	beq.n 0x39f00	@ 00039e3e 5fd0
.org 0x39e40
	cmp r2, #3	@ 00039e40 032a
.org 0x39e42
	bne.n 0x39e46	@ 00039e42 00d1
.org 0x39e44
	b.n 0x39f50	@ 00039e44 84e0
.org 0x39e46
	b.n 0x39f6e	@ 00039e46 92e0
.org 0x39e48
	movs r4, #157	@ 00039e48 9d24
.org 0x39e4a
	lsls r4, r4, #2	@ 00039e4a a400
.org 0x39e4c
	adds r5, r1, r4	@ 00039e4c 0d19
.org 0x39e4e
	ldrb r0, [r5, #0]	@ 00039e4e 2878
.org 0x39e50
	subs r0, #1	@ 00039e50 0138
.org 0x39e52
	strb r0, [r5, #0]	@ 00039e52 2870
.org 0x39e54
	lsls r0, r0, #24	@ 00039e54 0006
.org 0x39e56
	lsrs r0, r0, #24	@ 00039e56 000e
.org 0x39e58
	cmp r0, #255	@ 00039e58 ff28
.org 0x39e5a
	bne.n 0x39e5e	@ 00039e5a 00d1
.org 0x39e5c
	strb r2, [r3, #0]	@ 00039e5c 1a70
.org 0x39e5e
	ldr r2, [pc, #40]	@ 00039e5e 0a4a
.org 0x39e60
	adds r0, r1, r2	@ 00039e60 8818
.org 0x39e62
	ldrh r2, [r0, #0]	@ 00039e62 0288
.org 0x39e64
	movs r0, #64	@ 00039e64 4020
.org 0x39e66
	ands r0, r2	@ 00039e66 1040
.org 0x39e68
	cmp r0, #0	@ 00039e68 0028
.org 0x39e6a
	bne.n 0x39e6e	@ 00039e6a 00d1
.org 0x39e6c
	b.n 0x39f76	@ 00039e6c 83e0
.org 0x39e6e
	movs r0, #16	@ 00039e6e 1020
.org 0x39e70
	ands r0, r2	@ 00039e70 1040
.org 0x39e72
	lsls r0, r0, #16	@ 00039e72 0004
.org 0x39e74
	lsrs r4, r0, #16	@ 00039e74 040c
.org 0x39e76
	cmp r4, #0	@ 00039e76 002c
.org 0x39e78
	beq.n 0x39e90	@ 00039e78 0ad0
.org 0x39e7a
	ldr r4, [pc, #16]	@ 00039e7a 044c
.org 0x39e7c
	adds r1, r1, r4	@ 00039e7c 0919
.org 0x39e7e
	movs r0, #1	@ 00039e7e 0120
.org 0x39e80
	strb r0, [r1, #0]	@ 00039e80 0870
.org 0x39e82
	movs r0, #10	@ 00039e82 0a20
.org 0x39e84
	strb r0, [r5, #0]	@ 00039e84 2870
.org 0x39e86
	b.n 0x39f48	@ 00039e86 5fe0
.org 0x39e88
	.byte 0x52,0x02,0x00,0x00	@ 00039e88 data
.org 0x39e8c
	.byte 0x76,0x02,0x00,0x00	@ 00039e8c data
.org 0x39e90
	movs r0, #32	@ 00039e90 2020
.org 0x39e92
	ands r0, r2	@ 00039e92 1040
.org 0x39e94
	cmp r0, #0	@ 00039e94 0028
.org 0x39e96
	beq.n 0x39f76	@ 00039e96 6ed0
.org 0x39e98
	ldr r2, [pc, #8]	@ 00039e98 024a
.org 0x39e9a
	adds r0, r1, r2	@ 00039e9a 8818
.org 0x39e9c
	strb r4, [r0, #0]	@ 00039e9c 0470
.org 0x39e9e
	movs r0, #10	@ 00039e9e 0a20
.org 0x39ea0
	strb r0, [r5, #0]	@ 00039ea0 2870
.org 0x39ea2
	b.n 0x39f48	@ 00039ea2 51e0
.org 0x39ea4
	.byte 0x76,0x02,0x00,0x00	@ 00039ea4 data
.org 0x39ea8
	movs r4, #157	@ 00039ea8 9d24
.org 0x39eaa
	lsls r4, r4, #2	@ 00039eaa a400
.org 0x39eac
	adds r2, r1, r4	@ 00039eac 0a19
.org 0x39eae
	ldrb r0, [r2, #0]	@ 00039eae 1078
.org 0x39eb0
	subs r0, #1	@ 00039eb0 0138
.org 0x39eb2
	strb r0, [r2, #0]	@ 00039eb2 1070
.org 0x39eb4
	lsls r0, r0, #24	@ 00039eb4 0006
.org 0x39eb6
	lsrs r0, r0, #24	@ 00039eb6 000e
.org 0x39eb8
	cmp r0, #255	@ 00039eb8 ff28
.org 0x39eba
	bne.n 0x39ec0	@ 00039eba 01d1
.org 0x39ebc
	movs r0, #0	@ 00039ebc 0020
.org 0x39ebe
	strb r0, [r3, #0]	@ 00039ebe 1870
.org 0x39ec0
	ldr r5, [pc, #28]	@ 00039ec0 074d
.org 0x39ec2
	adds r0, r1, r5	@ 00039ec2 4819
.org 0x39ec4
	ldrb r0, [r0, #0]	@ 00039ec4 0078
.org 0x39ec6
	cmp r0, #1	@ 00039ec6 0128
.org 0x39ec8
	bne.n 0x39ee8	@ 00039ec8 0ed1
.org 0x39eca
	ldr r4, [pc, #24]	@ 00039eca 064c
.org 0x39ecc
	adds r0, r1, r4	@ 00039ecc 0819
.org 0x39ece
	ldrh r1, [r0, #0]	@ 00039ece 0188
.org 0x39ed0
	movs r0, #16	@ 00039ed0 1020
.org 0x39ed2
	ands r0, r1	@ 00039ed2 0840
.org 0x39ed4
	cmp r0, #0	@ 00039ed4 0028
.org 0x39ed6
	beq.n 0x39f76	@ 00039ed6 4ed0
.org 0x39ed8
	movs r0, #10	@ 00039ed8 0a20
.org 0x39eda
	strb r0, [r2, #0]	@ 00039eda 1070
.org 0x39edc
	b.n 0x39f48	@ 00039edc 34e0
.org 0x39ede
	.byte 0x00	@ 00039ede data
.org 0x39edf
	.byte 0x00	@ 00039edf data
.org 0x39ee0
	.byte 0x76,0x02,0x00,0x00	@ 00039ee0 data
.org 0x39ee4
	.byte 0x52,0x02,0x00,0x00	@ 00039ee4 data
.org 0x39ee8
	ldr r5, [pc, #16]	@ 00039ee8 044d
.org 0x39eea
	adds r0, r1, r5	@ 00039eea 4819
.org 0x39eec
	ldrh r1, [r0, #0]	@ 00039eec 0188
.org 0x39eee
	movs r0, #32	@ 00039eee 2020
.org 0x39ef0
	ands r0, r1	@ 00039ef0 0840
.org 0x39ef2
	cmp r0, #0	@ 00039ef2 0028
.org 0x39ef4
	beq.n 0x39f76	@ 00039ef4 3fd0
.org 0x39ef6
	movs r0, #10	@ 00039ef6 0a20
.org 0x39ef8
	strb r0, [r2, #0]	@ 00039ef8 1070
.org 0x39efa
	b.n 0x39f48	@ 00039efa 25e0
.org 0x39efc
	.byte 0x52,0x02,0x00,0x00	@ 00039efc data
.org 0x39f00
	movs r0, #157	@ 00039f00 9d20
.org 0x39f02
	lsls r0, r0, #2	@ 00039f02 8000
.org 0x39f04
	adds r4, r1, r0	@ 00039f04 0c18
.org 0x39f06
	ldrb r0, [r4, #0]	@ 00039f06 2078
.org 0x39f08
	subs r0, #1	@ 00039f08 0138
.org 0x39f0a
	strb r0, [r4, #0]	@ 00039f0a 2070
.org 0x39f0c
	lsls r0, r0, #24	@ 00039f0c 0006
.org 0x39f0e
	lsrs r0, r0, #24	@ 00039f0e 000e
.org 0x39f10
	cmp r0, #255	@ 00039f10 ff28
.org 0x39f12
	bne.n 0x39f18	@ 00039f12 01d1
.org 0x39f14
	movs r0, #0	@ 00039f14 0020
.org 0x39f16
	strb r0, [r3, #0]	@ 00039f16 1870
.org 0x39f18
	ldr r2, [pc, #24]	@ 00039f18 064a
.org 0x39f1a
	adds r0, r1, r2	@ 00039f1a 8818
.org 0x39f1c
	ldrh r2, [r0, #0]	@ 00039f1c 0288
.org 0x39f1e
	movs r0, #128	@ 00039f1e 8020
.org 0x39f20
	ands r0, r2	@ 00039f20 1040
.org 0x39f22
	cmp r0, #0	@ 00039f22 0028
.org 0x39f24
	bne.n 0x39f76	@ 00039f24 27d1
.org 0x39f26
	ldr r5, [pc, #16]	@ 00039f26 044d
.org 0x39f28
	adds r0, r1, r5	@ 00039f28 4819
.org 0x39f2a
	ldrb r0, [r0, #0]	@ 00039f2a 0078
.org 0x39f2c
	cmp r0, #1	@ 00039f2c 0128
.org 0x39f2e
	bne.n 0x39f3c	@ 00039f2e 05d1
.org 0x39f30
	movs r0, #16	@ 00039f30 1020
.org 0x39f32
	b.n 0x39f3e	@ 00039f32 04e0
.org 0x39f34
	.byte 0x52,0x02,0x00,0x00	@ 00039f34 data
.org 0x39f38
	.byte 0x76,0x02,0x00,0x00	@ 00039f38 data
.org 0x39f3c
	movs r0, #32	@ 00039f3c 2020
.org 0x39f3e
	ands r0, r2	@ 00039f3e 1040
.org 0x39f40
	cmp r0, #0	@ 00039f40 0028
.org 0x39f42
	beq.n 0x39f76	@ 00039f42 18d0
.org 0x39f44
	movs r0, #10	@ 00039f44 0a20
.org 0x39f46
	strb r0, [r4, #0]	@ 00039f46 2070
.org 0x39f48
	ldrb r0, [r3, #0]	@ 00039f48 1878
.org 0x39f4a
	adds r0, #1	@ 00039f4a 0130
.org 0x39f4c
	strb r0, [r3, #0]	@ 00039f4c 1870
.org 0x39f4e
	b.n 0x39f76	@ 00039f4e 12e0
.org 0x39f50
	movs r0, #157	@ 00039f50 9d20
.org 0x39f52
	lsls r0, r0, #2	@ 00039f52 8000
.org 0x39f54
	adds r1, r1, r0	@ 00039f54 0918
.org 0x39f56
	ldrb r0, [r1, #0]	@ 00039f56 0878
