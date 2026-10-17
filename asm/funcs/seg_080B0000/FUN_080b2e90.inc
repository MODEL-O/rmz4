@ FUN_080b2e90  entry 0x080b2e90  size 214
.thumb
.org 0xb2e90
FUN_080b2e90:
	push {r4, r5, r6, r7, lr}	@ 000b2e90 f0b5
.org 0xb2e92
	mov r7, r8	@ 000b2e92 4746
.org 0xb2e94
	push {r7}	@ 000b2e94 80b4
.org 0xb2e96
	adds r6, r0, #0	@ 000b2e96 061c
.org 0xb2e98
	bl 0x1cc9c	@ 000b2e98 69f700ff
.org 0xb2e9c
	ldrb r0, [r6, #10]	@ 000b2e9c b07a
.org 0xb2e9e
	movs r1, #254	@ 000b2e9e fe21
.org 0xb2ea0
	ands r1, r0	@ 000b2ea0 0140
.org 0xb2ea2
	movs r0, #0	@ 000b2ea2 0020
.org 0xb2ea4
	mov r8, r0	@ 000b2ea4 8046
.org 0xb2ea6
	movs r7, #0	@ 000b2ea6 0027
.org 0xb2ea8
	movs r0, #2	@ 000b2ea8 0220
.org 0xb2eaa
	orrs r1, r0	@ 000b2eaa 0143
.org 0xb2eac
	mov r2, r8	@ 000b2eac 4246
.org 0xb2eae
	orrs r1, r2	@ 000b2eae 1143
.org 0xb2eb0
	strb r1, [r6, #10]	@ 000b2eb0 b172
.org 0xb2eb2
	ldr r2, [pc, #136]	@ 000b2eb2 224a
.org 0xb2eb4
	ldrb r0, [r6, #9]	@ 000b2eb4 707a
.org 0xb2eb6
	lsls r0, r0, #2	@ 000b2eb6 8000
.org 0xb2eb8
	adds r0, r0, r2	@ 000b2eb8 8018
.org 0xb2eba
	movs r2, #1	@ 000b2eba 0122
.org 0xb2ebc
	str r2, [r6, #12]	@ 000b2ebc f260
.org 0xb2ebe
	ldr r0, [r0, #0]	@ 000b2ebe 0068
.org 0xb2ec0
	ldr r0, [r0, #4]	@ 000b2ec0 4068
.org 0xb2ec2
	str r0, [r6, #20]	@ 000b2ec2 7061
.org 0xb2ec4
	movs r0, #4	@ 000b2ec4 0420
.org 0xb2ec6
	orrs r1, r0	@ 000b2ec6 0143
.org 0xb2ec8
	strb r1, [r6, #10]	@ 000b2ec8 b172
.org 0xb2eca
	adds r4, r6, #0	@ 000b2eca 341c
.org 0xb2ecc
	adds r4, #116	@ 000b2ecc 7434
.org 0xb2ece
	ldr r1, [pc, #112]	@ 000b2ece 1c49
.org 0xb2ed0
	adds r5, r6, #0	@ 000b2ed0 351c
.org 0xb2ed2
	adds r5, #84	@ 000b2ed2 5435
.org 0xb2ed4
	adds r0, r4, #0	@ 000b2ed4 201c
.org 0xb2ed6
	adds r2, r5, #0	@ 000b2ed6 2a1c
.org 0xb2ed8
	movs r3, #5	@ 000b2ed8 0523
.org 0xb2eda
	bl 0x5760	@ 000b2eda 52f741fc
.org 0xb2ede
	str r6, [r4, #44]	@ 000b2ede e662
.org 0xb2ee0
	ldr r0, [pc, #96]	@ 000b2ee0 1848
.org 0xb2ee2
	str r0, [r4, #36]	@ 000b2ee2 6062
.org 0xb2ee4
	movs r1, #198	@ 000b2ee4 c621
.org 0xb2ee6
	lsls r1, r1, #8	@ 000b2ee6 0902
.org 0xb2ee8
	adds r0, r6, #0	@ 000b2ee8 301c
.org 0xb2eea
	bl 0x1cf00	@ 000b2eea 6af709f8
.org 0xb2eee
	adds r0, r6, #0	@ 000b2eee 301c
.org 0xb2ef0
	adds r0, #181	@ 000b2ef0 b530
.org 0xb2ef2
	movs r1, #1	@ 000b2ef2 0121
.org 0xb2ef4
	strb r1, [r0, #0]	@ 000b2ef4 0170
.org 0xb2ef6
	adds r0, #2	@ 000b2ef6 0230
.org 0xb2ef8
	strb r7, [r0, #0]	@ 000b2ef8 0770
.org 0xb2efa
	subs r0, #1	@ 000b2efa 0138
.org 0xb2efc
	strb r7, [r0, #0]	@ 000b2efc 0770
.org 0xb2efe
	subs r0, #2	@ 000b2efe 0238
.org 0xb2f00
	strb r7, [r0, #0]	@ 000b2f00 0770
.org 0xb2f02
	str r7, [r6, #40]	@ 000b2f02 b762
.org 0xb2f04
	str r7, [r6, #44]	@ 000b2f04 f762
.org 0xb2f06
	strb r7, [r6, #18]	@ 000b2f06 b774
.org 0xb2f08
	strb r7, [r6, #17]	@ 000b2f08 7774
.org 0xb2f0a
	strb r7, [r6, #15]	@ 000b2f0a f773
.org 0xb2f0c
	ldr r0, [r6, #84]	@ 000b2f0c 706d
.org 0xb2f0e
	movs r2, #128	@ 000b2f0e 8022
.org 0xb2f10
	lsls r2, r2, #4	@ 000b2f10 1201
.org 0xb2f12
	adds r0, r0, r2	@ 000b2f12 8018
.org 0xb2f14
	str r0, [r6, #84]	@ 000b2f14 7065
.org 0xb2f16
	ldr r0, [pc, #48]	@ 000b2f16 0c48
.org 0xb2f18
	ldr r1, [pc, #48]	@ 000b2f18 0c49
.org 0xb2f1a
	adds r0, r0, r1	@ 000b2f1a 4018
.org 0xb2f1c
	ldrb r0, [r0, #0]	@ 000b2f1c 0078
.org 0xb2f1e
	ldrb r2, [r6, #16]	@ 000b2f1e 327c
.org 0xb2f20
	asrs r0, r2	@ 000b2f20 1041
.org 0xb2f22
	movs r1, #1	@ 000b2f22 0121
.org 0xb2f24
	ands r0, r1	@ 000b2f24 0840
.org 0xb2f26
	cmp r0, #0	@ 000b2f26 0028
.org 0xb2f28
	bne.n 0xb2f50	@ 000b2f28 12d1
.org 0xb2f2a
	adds r0, r5, #0	@ 000b2f2a 281c
.org 0xb2f2c
	movs r1, #0	@ 000b2f2c 0021
.org 0xb2f2e
	movs r2, #0	@ 000b2f2e 0022
.org 0xb2f30
	bl 0x1012e4	@ 000b2f30 4ef0d8f9
.org 0xb2f34
	str r0, [r6, #44]	@ 000b2f34 f062
.org 0xb2f36
	movs r0, #4	@ 000b2f36 0420
.org 0xb2f38
	strb r0, [r6, #13]	@ 000b2f38 7073
.org 0xb2f3a
	b.n 0xb2f5a	@ 000b2f3a 0ee0
.org 0xb2f3c
	.byte 0x40,0xdb,0x85,0x08	@ 000b2f3c data
.org 0xb2f40
	.byte 0xfc,0x36,0x86,0x08	@ 000b2f40 data
.org 0xb2f44
	.byte 0x69,0x31,0x0b,0x08	@ 000b2f44 data
.org 0xb2f48
	.byte 0xb0,0x0a,0x00,0x02	@ 000b2f48 data
.org 0xb2f4c
	.byte 0x2a,0xd0,0x02,0x00	@ 000b2f4c data
.org 0xb2f50
	ldrb r0, [r6, #10]	@ 000b2f50 b07a
.org 0xb2f52
	movs r1, #1	@ 000b2f52 0121
.org 0xb2f54
	orrs r0, r1	@ 000b2f54 0843
.org 0xb2f56
	strb r0, [r6, #10]	@ 000b2f56 b072
.org 0xb2f58
	strb r7, [r6, #13]	@ 000b2f58 7773
.org 0xb2f5a
	strb r7, [r6, #14]	@ 000b2f5a b773
.org 0xb2f5c
	ldr r0, [r6, #84]	@ 000b2f5c 706d
.org 0xb2f5e
	ldr r1, [r6, #88]	@ 000b2f5e b16d
.org 0xb2f60
	bl 0x8534	@ 000b2f60 55f7e8fa
.org 0xb2f64
	ldr r2, [pc, #20]	@ 000b2f64 054a
