@ FUN_080b5e88  entry 0x080b5e88  size 202
.thumb
.org 0xb5e88
FUN_080b5e88:
	push {r4, r5, r6, lr}	@ 000b5e88 70b5
.org 0xb5e8a
	adds r6, r0, #0	@ 000b5e8a 061c
.org 0xb5e8c
	ldr r5, [r6, #40]	@ 000b5e8c b56a
.org 0xb5e8e
	ldrb r0, [r6, #10]	@ 000b5e8e b07a
.org 0xb5e90
	lsrs r4, r0, #4	@ 000b5e90 0409
.org 0xb5e92
	movs r0, #1	@ 000b5e92 0120
.org 0xb5e94
	ands r4, r0	@ 000b5e94 0440
.org 0xb5e96
	ldrb r0, [r6, #15]	@ 000b5e96 f07b
.org 0xb5e98
	cmp r0, #0	@ 000b5e98 0028
.org 0xb5e9a
	bne.n 0xb5f08	@ 000b5e9a 35d1
.org 0xb5e9c
	adds r0, r6, #0	@ 000b5e9c 301c
.org 0xb5e9e
	adds r0, #116	@ 000b5e9e 7430
.org 0xb5ea0
	ldr r1, [pc, #176]	@ 000b5ea0 2c49
.org 0xb5ea2
	bl 0x5784	@ 000b5ea2 4ff76ffc
.org 0xb5ea6
	lsls r1, r4, #1	@ 000b5ea6 6100
.org 0xb5ea8
	subs r1, #1	@ 000b5ea8 0139
.org 0xb5eaa
	lsls r0, r1, #3	@ 000b5eaa c800
.org 0xb5eac
	subs r0, r0, r1	@ 000b5eac 401a
.org 0xb5eae
	lsls r0, r0, #2	@ 000b5eae 8000
.org 0xb5eb0
	adds r0, r0, r1	@ 000b5eb0 4018
.org 0xb5eb2
	lsls r0, r0, #8	@ 000b5eb2 0002
.org 0xb5eb4
	ldr r2, [r5, #84]	@ 000b5eb4 6a6d
.org 0xb5eb6
	adds r2, r2, r0	@ 000b5eb6 1218
.org 0xb5eb8
	str r2, [r6, #100]	@ 000b5eb8 7266
.org 0xb5eba
	ldr r1, [r5, #88]	@ 000b5eba a96d
.org 0xb5ebc
	movs r0, #144	@ 000b5ebc 9020
.org 0xb5ebe
	lsls r0, r0, #4	@ 000b5ebe 0001
.org 0xb5ec0
	adds r1, r1, r0	@ 000b5ec0 0918
.org 0xb5ec2
	str r1, [r6, #104]	@ 000b5ec2 b166
.org 0xb5ec4
	ldr r0, [r6, #84]	@ 000b5ec4 706d
.org 0xb5ec6
	subs r2, r2, r0	@ 000b5ec6 121a
.org 0xb5ec8
	ldr r0, [r6, #88]	@ 000b5ec8 b06d
.org 0xb5eca
	subs r3, r1, r0	@ 000b5eca 0b1a
.org 0xb5ecc
	str r2, [r6, #92]	@ 000b5ecc f265
.org 0xb5ece
	str r3, [r6, #96]	@ 000b5ece 3366
.org 0xb5ed0
	adds r0, r2, #0	@ 000b5ed0 101c
.org 0xb5ed2
	muls r0, r2	@ 000b5ed2 5043
.org 0xb5ed4
	adds r1, r3, #0	@ 000b5ed4 191c
.org 0xb5ed6
	muls r1, r3	@ 000b5ed6 5943
.org 0xb5ed8
	adds r0, r0, r1	@ 000b5ed8 4018
.org 0xb5eda
	bl 0x128bf4	@ 000b5eda 72f08bfe
.org 0xb5ede
	lsls r0, r0, #16	@ 000b5ede 0004
.org 0xb5ee0
	lsrs r2, r0, #16	@ 000b5ee0 020c
.org 0xb5ee2
	adds r1, r2, #0	@ 000b5ee2 111c
.org 0xb5ee4
	asrs r3, r1, #9	@ 000b5ee4 4b12
.org 0xb5ee6
	ldr r0, [pc, #112]	@ 000b5ee6 1c48
.org 0xb5ee8
	ands r2, r0	@ 000b5ee8 0240
.org 0xb5eea
	cmp r2, #0	@ 000b5eea 002a
.org 0xb5eec
	beq.n 0xb5ef0	@ 000b5eec 00d0
.org 0xb5eee
	adds r3, #1	@ 000b5eee 0133
.org 0xb5ef0
	cmp r3, #0	@ 000b5ef0 002b
.org 0xb5ef2
	bgt.n 0xb5ef6	@ 000b5ef2 00dc
.org 0xb5ef4
	movs r3, #1	@ 000b5ef4 0123
.org 0xb5ef6
	adds r1, r6, #0	@ 000b5ef6 311c
.org 0xb5ef8
	adds r1, #180	@ 000b5ef8 b431
.org 0xb5efa
	adds r0, r6, #0	@ 000b5efa 301c
.org 0xb5efc
	adds r0, #184	@ 000b5efc b830
.org 0xb5efe
	str r3, [r0, #0]	@ 000b5efe 0360
.org 0xb5f00
	str r3, [r1, #0]	@ 000b5f00 0b60
.org 0xb5f02
	ldrb r0, [r6, #15]	@ 000b5f02 f07b
.org 0xb5f04
	adds r0, #1	@ 000b5f04 0130
.org 0xb5f06
	strb r0, [r6, #15]	@ 000b5f06 f073
.org 0xb5f08
	adds r0, r6, #0	@ 000b5f08 301c
.org 0xb5f0a
	bl 0x1cff0	@ 000b5f0a 67f771f8
.org 0xb5f0e
	adds r4, r6, #0	@ 000b5f0e 341c
.org 0xb5f10
	adds r4, #180	@ 000b5f10 b434
.org 0xb5f12
	ldr r0, [r4, #0]	@ 000b5f12 2068
.org 0xb5f14
	subs r0, #1	@ 000b5f14 0138
.org 0xb5f16
	str r0, [r4, #0]	@ 000b5f16 2060
.org 0xb5f18
	ldr r1, [r6, #92]	@ 000b5f18 f16d
.org 0xb5f1a
	muls r0, r1	@ 000b5f1a 4843
.org 0xb5f1c
	adds r5, r6, #0	@ 000b5f1c 351c
.org 0xb5f1e
	adds r5, #184	@ 000b5f1e b835
.org 0xb5f20
	ldr r1, [r5, #0]	@ 000b5f20 2968
.org 0xb5f22
	bl 0x128fb8	@ 000b5f22 73f049f8
.org 0xb5f26
	ldr r1, [r6, #100]	@ 000b5f26 716e
.org 0xb5f28
	subs r1, r1, r0	@ 000b5f28 091a
.org 0xb5f2a
	str r1, [r6, #84]	@ 000b5f2a 7165
.org 0xb5f2c
	ldr r1, [r6, #96]	@ 000b5f2c 316e
.org 0xb5f2e
	ldr r0, [r4, #0]	@ 000b5f2e 2068
.org 0xb5f30
	muls r0, r1	@ 000b5f30 4843
.org 0xb5f32
	ldr r1, [r5, #0]	@ 000b5f32 2968
.org 0xb5f34
	bl 0x128fb8	@ 000b5f34 73f040f8
.org 0xb5f38
	ldr r1, [r6, #104]	@ 000b5f38 b16e
.org 0xb5f3a
	subs r1, r1, r0	@ 000b5f3a 091a
.org 0xb5f3c
	str r1, [r6, #88]	@ 000b5f3c b165
.org 0xb5f3e
	ldr r4, [r4, #0]	@ 000b5f3e 2468
.org 0xb5f40
	cmp r4, #0	@ 000b5f40 002c
.org 0xb5f42
	bne.n 0xb5f4c	@ 000b5f42 03d1
.org 0xb5f44
	movs r0, #2	@ 000b5f44 0220
.org 0xb5f46
	strb r0, [r6, #13]	@ 000b5f46 7073
.org 0xb5f48
	strb r4, [r6, #14]	@ 000b5f48 b473
.org 0xb5f4a
	strb r4, [r6, #15]	@ 000b5f4a f473
.org 0xb5f4c
	pop {r4, r5, r6}	@ 000b5f4c 70bc
.org 0xb5f4e
	pop {r0}	@ 000b5f4e 01bc
.org 0xb5f50
	bx r0	@ 000b5f50 0047
