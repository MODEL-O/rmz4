@ FUN_080a4f00  entry 0x080a4f00  size 138
.thumb
.org 0xa4f00
FUN_080a4f00:
	push {r4, r5, r6, lr}	@ 000a4f00 70b5
.org 0xa4f02
	adds r4, r0, #0	@ 000a4f02 041c
.org 0xa4f04
	adds r6, r4, #0	@ 000a4f04 261c
.org 0xa4f06
	adds r6, #140	@ 000a4f06 8c36
.org 0xa4f08
	ldr r5, [r6, #0]	@ 000a4f08 3568
.org 0xa4f0a
	movs r0, #128	@ 000a4f0a 8020
.org 0xa4f0c
	lsls r0, r0, #2	@ 000a4f0c 8000
.org 0xa4f0e
	ands r5, r0	@ 000a4f0e 0540
.org 0xa4f10
	cmp r5, #0	@ 000a4f10 002d
.org 0xa4f12
	beq.n 0xa4f34	@ 000a4f12 0fd0
.org 0xa4f14
	ldr r1, [pc, #24]	@ 000a4f14 0649
.org 0xa4f16
	ldrb r0, [r4, #9]	@ 000a4f16 607a
.org 0xa4f18
	lsls r0, r0, #2	@ 000a4f18 8000
.org 0xa4f1a
	adds r0, r0, r1	@ 000a4f1a 4018
.org 0xa4f1c
	movs r1, #2	@ 000a4f1c 0221
.org 0xa4f1e
	str r1, [r4, #12]	@ 000a4f1e e160
.org 0xa4f20
	ldr r0, [r0, #0]	@ 000a4f20 0068
.org 0xa4f22
	ldr r0, [r0, #8]	@ 000a4f22 8068
.org 0xa4f24
	str r0, [r4, #20]	@ 000a4f24 6061
.org 0xa4f26
	adds r0, r4, #0	@ 000a4f26 201c
.org 0xa4f28
	bl 0xa5188	@ 000a4f28 00f02ef9
.org 0xa4f2c
	b.n 0xa4f94	@ 000a4f2c 32e0
.org 0xa4f2e
	.byte 0x00	@ 000a4f2e data
.org 0xa4f2f
	.byte 0x00	@ 000a4f2f data
.org 0xa4f30
	.byte 0x40,0xdb,0x85,0x08	@ 000a4f30 data
.org 0xa4f34
	ldr r0, [pc, #68]	@ 000a4f34 1148
.org 0xa4f36
	adds r1, r4, #0	@ 000a4f36 211c
.org 0xa4f38
	adds r1, #84	@ 000a4f38 5431
.org 0xa4f3a
	bl 0x1fb14	@ 000a4f3a 7af7ebfd
.org 0xa4f3e
	movs r1, #240	@ 000a4f3e f021
.org 0xa4f40
	lsls r1, r1, #7	@ 000a4f40 c901
.org 0xa4f42
	cmp r0, r1	@ 000a4f42 8842
.org 0xa4f44
	bls.n 0xa4f84	@ 000a4f44 1ed9
.org 0xa4f46
	ldrb r1, [r4, #10]	@ 000a4f46 a17a
.org 0xa4f48
	movs r0, #254	@ 000a4f48 fe20
.org 0xa4f4a
	ands r0, r1	@ 000a4f4a 0840
.org 0xa4f4c
	movs r1, #253	@ 000a4f4c fd21
.org 0xa4f4e
	ands r0, r1	@ 000a4f4e 0840
.org 0xa4f50
	strb r0, [r4, #10]	@ 000a4f50 a072
.org 0xa4f52
	str r5, [r6, #0]	@ 000a4f52 3560
.org 0xa4f54
	adds r0, r4, #0	@ 000a4f54 201c
.org 0xa4f56
	adds r0, #144	@ 000a4f56 9030
.org 0xa4f58
	str r5, [r0, #0]	@ 000a4f58 0560
.org 0xa4f5a
	adds r0, #4	@ 000a4f5a 0430
.org 0xa4f5c
	strb r5, [r0, #0]	@ 000a4f5c 0570
.org 0xa4f5e
	ldrb r1, [r4, #10]	@ 000a4f5e a17a
.org 0xa4f60
	movs r0, #251	@ 000a4f60 fb20
.org 0xa4f62
	ands r0, r1	@ 000a4f62 0840
.org 0xa4f64
	strb r0, [r4, #10]	@ 000a4f64 a072
.org 0xa4f66
	ldr r1, [pc, #24]	@ 000a4f66 0649
.org 0xa4f68
	ldrb r0, [r4, #9]	@ 000a4f68 607a
.org 0xa4f6a
	lsls r0, r0, #2	@ 000a4f6a 8000
.org 0xa4f6c
	adds r0, r0, r1	@ 000a4f6c 4018
.org 0xa4f6e
	movs r1, #3	@ 000a4f6e 0321
.org 0xa4f70
	str r1, [r4, #12]	@ 000a4f70 e160
.org 0xa4f72
	ldr r0, [r0, #0]	@ 000a4f72 0068
.org 0xa4f74
	ldr r0, [r0, #12]	@ 000a4f74 c068
.org 0xa4f76
	str r0, [r4, #20]	@ 000a4f76 6061
.org 0xa4f78
	b.n 0xa4f94	@ 000a4f78 0ce0
.org 0xa4f7a
	.byte 0x00	@ 000a4f7a data
.org 0xa4f7b
	.byte 0x00	@ 000a4f7b data
.org 0xa4f7c
	.byte 0xf8,0xe9,0x02,0x02	@ 000a4f7c data
.org 0xa4f80
	.byte 0x40,0xdb,0x85,0x08	@ 000a4f80 data
.org 0xa4f84
	ldr r0, [pc, #20]	@ 000a4f84 0548
.org 0xa4f86
	ldrb r1, [r4, #13]	@ 000a4f86 617b
.org 0xa4f88
	lsls r1, r1, #2	@ 000a4f88 8900
