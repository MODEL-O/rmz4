@ FUN_08058e74  entry 0x08058e74  size 228
.thumb
.org 0x58e74
FUN_08058e74:
	push {r4, r5, r6, r7, lr}	@ 00058e74 f0b5
.org 0x58e76
	adds r5, r0, #0	@ 00058e76 051c
.org 0x58e78
	ldrb r0, [r5, #15]	@ 00058e78 e87b
.org 0x58e7a
	cmp r0, #0	@ 00058e7a 0028
.org 0x58e7c
	bne.n 0x58eb2	@ 00058e7c 19d1
.org 0x58e7e
	ldrb r1, [r5, #10]	@ 00058e7e a97a
.org 0x58e80
	movs r0, #1	@ 00058e80 0120
.org 0x58e82
	orrs r0, r1	@ 00058e82 0843
.org 0x58e84
	strb r0, [r5, #10]	@ 00058e84 a872
.org 0x58e86
	ldr r1, [pc, #28]	@ 00058e86 0749
.org 0x58e88
	adds r0, r5, #0	@ 00058e88 281c
.org 0x58e8a
	bl 0x1cf00	@ 00058e8a c4f739f8
.org 0x58e8e
	adds r0, r5, #0	@ 00058e8e 281c
.org 0x58e90
	adds r0, #188	@ 00058e90 bc30
.org 0x58e92
	adds r1, r5, #0	@ 00058e92 291c
.org 0x58e94
	adds r1, #184	@ 00058e94 b831
.org 0x58e96
	ldr r2, [r0, #0]	@ 00058e96 0268
.org 0x58e98
	ldr r0, [r1, #0]	@ 00058e98 0868
.org 0x58e9a
	cmp r2, r0	@ 00058e9a 8242
.org 0x58e9c
	bge.n 0x58ea8	@ 00058e9c 04da
.org 0x58e9e
	movs r0, #128	@ 00058e9e 8020
.org 0x58ea0
	lsls r0, r0, #2	@ 00058ea0 8000
.org 0x58ea2
	b.n 0x58eaa	@ 00058ea2 02e0
.org 0x58ea4
	.byte 0x06,0xa0,0x00,0x00	@ 00058ea4 data
.org 0x58ea8
	ldr r0, [pc, #176]	@ 00058ea8 2c48
.org 0x58eaa
	str r0, [r5, #96]	@ 00058eaa 2866
.org 0x58eac
	ldrb r0, [r5, #15]	@ 00058eac e87b
.org 0x58eae
	adds r0, #1	@ 00058eae 0130
.org 0x58eb0
	strb r0, [r5, #15]	@ 00058eb0 e873
.org 0x58eb2
	adds r0, r5, #0	@ 00058eb2 281c
.org 0x58eb4
	bl 0x1cff0	@ 00058eb4 c4f79cf8
.org 0x58eb8
	adds r0, r5, #0	@ 00058eb8 281c
.org 0x58eba
	adds r0, #116	@ 00058eba 7430
.org 0x58ebc
	ldr r3, [pc, #160]	@ 00058ebc 284b
.org 0x58ebe
	ldrb r1, [r5, #30]	@ 00058ebe a97f
.org 0x58ec0
	lsls r1, r1, #8	@ 00058ec0 0902
.org 0x58ec2
	adds r2, r5, #0	@ 00058ec2 2a1c
.org 0x58ec4
	adds r2, #112	@ 00058ec4 7032
.org 0x58ec6
	ldrb r2, [r2, #0]	@ 00058ec6 1278
.org 0x58ec8
	orrs r1, r2	@ 00058ec8 1143
.org 0x58eca
	ldr r2, [pc, #152]	@ 00058eca 264a
.org 0x58ecc
	adds r1, r1, r2	@ 00058ecc 8918
.org 0x58ece
	lsls r1, r1, #2	@ 00058ece 8900
.org 0x58ed0
	adds r1, r1, r3	@ 00058ed0 c918
.org 0x58ed2
	adds r2, r5, #0	@ 00058ed2 2a1c
.org 0x58ed4
	adds r2, #113	@ 00058ed4 7132
.org 0x58ed6
	ldrb r2, [r2, #0]	@ 00058ed6 1278
.org 0x58ed8
	lsls r2, r2, #24	@ 00058ed8 1206
.org 0x58eda
	asrs r2, r2, #24	@ 00058eda 1216
.org 0x58edc
	ldr r1, [r1, #0]	@ 00058edc 0968
.org 0x58ede
	lsls r2, r2, #2	@ 00058ede 9200
.org 0x58ee0
	adds r2, r2, r1	@ 00058ee0 5218
.org 0x58ee2
	ldr r1, [r2, #0]	@ 00058ee2 1168
.org 0x58ee4
	ldrb r2, [r1, #0]	@ 00058ee4 0a78
.org 0x58ee6
	lsls r1, r2, #1	@ 00058ee6 5100
.org 0x58ee8
	adds r1, r1, r2	@ 00058ee8 8918
.org 0x58eea
	lsls r1, r1, #3	@ 00058eea c900
.org 0x58eec
	ldr r2, [pc, #120]	@ 00058eec 1e4a
.org 0x58eee
	adds r1, r1, r2	@ 00058eee 8918
.org 0x58ef0
	bl 0x5784	@ 00058ef0 acf748fc
.org 0x58ef4
	adds r1, r5, #0	@ 00058ef4 291c
.org 0x58ef6
	adds r1, #188	@ 00058ef6 bc31
.org 0x58ef8
	ldr r6, [r1, #0]	@ 00058ef8 0e68
.org 0x58efa
	ldr r0, [r5, #96]	@ 00058efa 286e
.org 0x58efc
	adds r6, r6, r0	@ 00058efc 3618
.org 0x58efe
	str r6, [r1, #0]	@ 00058efe 0e60
.org 0x58f00
	adds r4, r5, #0	@ 00058f00 2c1c
.org 0x58f02
	adds r4, #84	@ 00058f02 5434
.org 0x58f04
	ldr r2, [pc, #100]	@ 00058f04 194a
.org 0x58f06
	adds r3, r5, #0	@ 00058f06 2b1c
.org 0x58f08
	adds r3, #181	@ 00058f08 b533
.org 0x58f0a
	ldrb r0, [r3, #0]	@ 00058f0a 1878
.org 0x58f0c
	lsls r0, r0, #1	@ 00058f0c 4000
.org 0x58f0e
	adds r0, r0, r2	@ 00058f0e 8018
.org 0x58f10
	movs r2, #0	@ 00058f10 0022
.org 0x58f12
	ldrsh r0, [r0, r2]	@ 00058f12 805e
.org 0x58f14
	lsls r0, r0, #1	@ 00058f14 4000
.org 0x58f16
	adds r0, r6, r0	@ 00058f16 3018
.org 0x58f18
	str r0, [r4, #4]	@ 00058f18 6060
.org 0x58f1a
	ldr r2, [r5, #96]	@ 00058f1a 2a6e
.org 0x58f1c
	adds r7, r1, #0	@ 00058f1c 0f1c
.org 0x58f1e
	cmp r2, #0	@ 00058f1e 002a
.org 0x58f20
	bge.n 0x58f2c	@ 00058f20 04da
.org 0x58f22
	adds r0, r5, #0	@ 00058f22 281c
.org 0x58f24
	adds r0, #184	@ 00058f24 b830
.org 0x58f26
	ldr r1, [r0, #0]	@ 00058f26 0168
.org 0x58f28
	cmp r6, r1	@ 00058f28 8e42
.org 0x58f2a
	ble.n 0x58f3a	@ 00058f2a 06dd
.org 0x58f2c
	cmp r2, #0	@ 00058f2c 002a
.org 0x58f2e
	ble.n 0x58f56	@ 00058f2e 12dd
.org 0x58f30
	adds r0, r5, #0	@ 00058f30 281c
.org 0x58f32
	adds r0, #184	@ 00058f32 b830
.org 0x58f34
	ldr r1, [r0, #0]	@ 00058f34 0168
.org 0x58f36
	cmp r6, r1	@ 00058f36 8e42
.org 0x58f38
	blt.n 0x58f56	@ 00058f38 0ddb
.org 0x58f3a
	ldr r1, [r0, #0]	@ 00058f3a 0168
.org 0x58f3c
	str r1, [r7, #0]	@ 00058f3c 3960
.org 0x58f3e
	ldr r2, [pc, #44]	@ 00058f3e 0b4a
.org 0x58f40
	ldrb r0, [r3, #0]	@ 00058f40 1878
.org 0x58f42
	lsls r0, r0, #1	@ 00058f42 4000
.org 0x58f44
	adds r0, r0, r2	@ 00058f44 8018
.org 0x58f46
	movs r2, #0	@ 00058f46 0022
.org 0x58f48
	ldrsh r0, [r0, r2]	@ 00058f48 805e
.org 0x58f4a
	lsls r0, r0, #1	@ 00058f4a 4000
.org 0x58f4c
	adds r1, r1, r0	@ 00058f4c 0918
.org 0x58f4e
	str r1, [r4, #4]	@ 00058f4e 6160
.org 0x58f50
	adds r0, r5, #0	@ 00058f50 281c
.org 0x58f52
	bl 0x59548	@ 00058f52 00f0f9fa
.org 0x58f56
	pop {r4, r5, r6, r7}	@ 00058f56 f0bc
