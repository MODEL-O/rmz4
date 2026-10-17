@ FUN_080d1eb4  entry 0x080d1eb4  size 196
.thumb
.org 0xd1eb4
FUN_080d1eb4:
	push {r4, r5, lr}	@ 000d1eb4 30b5
.org 0xd1eb6
	adds r5, r0, #0	@ 000d1eb6 051c
.org 0xd1eb8
	ldrb r1, [r5, #10]	@ 000d1eb8 a97a
.org 0xd1eba
	movs r0, #16	@ 000d1eba 1020
.org 0xd1ebc
	ands r0, r1	@ 000d1ebc 0840
.org 0xd1ebe
	cmp r0, #0	@ 000d1ebe 0028
.org 0xd1ec0
	beq.n 0xd1eca	@ 000d1ec0 03d0
.org 0xd1ec2
	ldr r0, [r5, #84]	@ 000d1ec2 686d
.org 0xd1ec4
	movs r1, #240	@ 000d1ec4 f021
.org 0xd1ec6
	lsls r1, r1, #4	@ 000d1ec6 0901
.org 0xd1ec8
	b.n 0xd1ece	@ 000d1ec8 01e0
.org 0xd1eca
	ldr r0, [r5, #84]	@ 000d1eca 686d
.org 0xd1ecc
	ldr r1, [pc, #76]	@ 000d1ecc 1349
.org 0xd1ece
	adds r0, r0, r1	@ 000d1ece 4018
.org 0xd1ed0
	str r0, [r5, #84]	@ 000d1ed0 6865
.org 0xd1ed2
	ldr r0, [r5, #84]	@ 000d1ed2 686d
.org 0xd1ed4
	ldr r1, [r5, #88]	@ 000d1ed4 a96d
.org 0xd1ed6
	bl 0x7c7c	@ 000d1ed6 35f7d1fe
.org 0xd1eda
	movs r4, #15	@ 000d1eda 0f24
.org 0xd1edc
	adds r1, r4, #0	@ 000d1edc 211c
.org 0xd1ede
	ands r1, r0	@ 000d1ede 0140
.org 0xd1ee0
	cmp r1, #0	@ 000d1ee0 0029
.org 0xd1ee2
	bne.n 0xd1f28	@ 000d1ee2 21d1
.org 0xd1ee4
	ldr r1, [r5, #88]	@ 000d1ee4 a96d
.org 0xd1ee6
	ldr r0, [pc, #56]	@ 000d1ee6 0e48
.org 0xd1ee8
	adds r1, r1, r0	@ 000d1ee8 0918
.org 0xd1eea
	str r1, [r5, #88]	@ 000d1eea a965
.org 0xd1eec
	ldr r0, [r5, #84]	@ 000d1eec 686d
.org 0xd1eee
	bl 0x7c7c	@ 000d1eee 35f7c5fe
.org 0xd1ef2
	adds r1, r4, #0	@ 000d1ef2 211c
.org 0xd1ef4
	ands r1, r0	@ 000d1ef4 0140
.org 0xd1ef6
	cmp r1, #0	@ 000d1ef6 0029
.org 0xd1ef8
	bne.n 0xd1f28	@ 000d1ef8 16d1
.org 0xd1efa
	ldrb r1, [r5, #10]	@ 000d1efa a97a
.org 0xd1efc
	movs r0, #254	@ 000d1efc fe20
.org 0xd1efe
	ands r0, r1	@ 000d1efe 0840
.org 0xd1f00
	movs r1, #253	@ 000d1f00 fd21
.org 0xd1f02
	ands r0, r1	@ 000d1f02 0840
.org 0xd1f04
	strb r0, [r5, #10]	@ 000d1f04 a872
.org 0xd1f06
	ldr r1, [pc, #28]	@ 000d1f06 0749
.org 0xd1f08
	ldrb r0, [r5, #9]	@ 000d1f08 687a
.org 0xd1f0a
	lsls r0, r0, #2	@ 000d1f0a 8000
.org 0xd1f0c
	adds r0, r0, r1	@ 000d1f0c 4018
.org 0xd1f0e
	movs r1, #3	@ 000d1f0e 0321
.org 0xd1f10
	str r1, [r5, #12]	@ 000d1f10 e960
.org 0xd1f12
	ldr r0, [r0, #0]	@ 000d1f12 0068
.org 0xd1f14
	ldr r0, [r0, #12]	@ 000d1f14 c068
.org 0xd1f16
	str r0, [r5, #20]	@ 000d1f16 6861
.org 0xd1f18
	b.n 0xd1f80	@ 000d1f18 32e0
.org 0xd1f1a
	.byte 0x00	@ 000d1f1a data
.org 0xd1f1b
	.byte 0x00	@ 000d1f1b data
.org 0xd1f1c
	.byte 0x00,0xf1,0xff,0xff	@ 000d1f1c data
.org 0xd1f20
	.byte 0x00,0xee,0xff,0xff	@ 000d1f20 data
.org 0xd1f24
	.byte 0x64,0x6f,0x86,0x08	@ 000d1f24 data
.org 0xd1f28
	ldr r2, [pc, #92]	@ 000d1f28 174a
.org 0xd1f2a
	ldr r1, [r2, #0]	@ 000d1f2a 1168
.org 0xd1f2c
	ldr r0, [pc, #92]	@ 000d1f2c 1748
.org 0xd1f2e
	muls r0, r1	@ 000d1f2e 4843
.org 0xd1f30
	ldr r1, [pc, #92]	@ 000d1f30 1749
.org 0xd1f32
	adds r0, r0, r1	@ 000d1f32 4018
.org 0xd1f34
	lsls r0, r0, #1	@ 000d1f34 4000
.org 0xd1f36
	lsrs r1, r0, #1	@ 000d1f36 4108
.org 0xd1f38
	str r1, [r2, #0]	@ 000d1f38 1160
.org 0xd1f3a
	lsrs r0, r0, #17	@ 000d1f3a 400c
.org 0xd1f3c
	movs r1, #4	@ 000d1f3c 0421
.org 0xd1f3e
	ands r0, r1	@ 000d1f3e 0840
.org 0xd1f40
	subs r0, #2	@ 000d1f40 0238
.org 0xd1f42
	lsls r0, r0, #8	@ 000d1f42 0002
.org 0xd1f44
	ldr r1, [r5, #84]	@ 000d1f44 696d
.org 0xd1f46
	adds r1, r1, r0	@ 000d1f46 0918
.org 0xd1f48
	str r1, [r5, #84]	@ 000d1f48 6965
.org 0xd1f4a
	adds r0, r5, #0	@ 000d1f4a 281c
.org 0xd1f4c
	bl 0x1cc9c	@ 000d1f4c 4af7a6fe
.org 0xd1f50
	ldrb r1, [r5, #10]	@ 000d1f50 a97a
.org 0xd1f52
	movs r0, #1	@ 000d1f52 0120
.org 0xd1f54
	movs r4, #0	@ 000d1f54 0024
.org 0xd1f56
	orrs r0, r1	@ 000d1f56 0843
.org 0xd1f58
	movs r1, #2	@ 000d1f58 0221
.org 0xd1f5a
	orrs r0, r1	@ 000d1f5a 0843
.org 0xd1f5c
	strb r0, [r5, #10]	@ 000d1f5c a872
.org 0xd1f5e
	adds r0, r5, #0	@ 000d1f5e 281c
.org 0xd1f60
	movs r1, #17	@ 000d1f60 1121
.org 0xd1f62
	bl 0x1cf00	@ 000d1f62 4af7cdff
.org 0xd1f66
	strb r4, [r5, #18]	@ 000d1f66 ac74
.org 0xd1f68
	ldr r1, [pc, #40]	@ 000d1f68 0a49
.org 0xd1f6a
	ldrb r0, [r5, #9]	@ 000d1f6a 687a
.org 0xd1f6c
	lsls r0, r0, #2	@ 000d1f6c 8000
.org 0xd1f6e
	adds r0, r0, r1	@ 000d1f6e 4018
.org 0xd1f70
	movs r1, #1	@ 000d1f70 0121
.org 0xd1f72
	str r1, [r5, #12]	@ 000d1f72 e960
.org 0xd1f74
	ldr r0, [r0, #0]	@ 000d1f74 0068
.org 0xd1f76
	ldr r0, [r0, #4]	@ 000d1f76 4068
