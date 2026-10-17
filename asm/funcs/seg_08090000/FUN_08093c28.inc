@ FUN_08093c28  entry 0x08093c28  size 146
.thumb
.org 0x93c28
FUN_08093c28:
	push {r4, r5, r6, r7, lr}	@ 00093c28 f0b5
.org 0x93c2a
	adds r5, r0, #0	@ 00093c2a 051c
.org 0x93c2c
	ldrb r6, [r5, #16]	@ 00093c2c 2e7c
.org 0x93c2e
	ldrb r7, [r5, #17]	@ 00093c2e 6f7c
.org 0x93c30
	ldrb r4, [r5, #15]	@ 00093c30 ec7b
.org 0x93c32
	cmp r4, #0	@ 00093c32 002c
.org 0x93c34
	bne.n 0x93c50	@ 00093c34 0cd1
.org 0x93c36
	adds r0, #116	@ 00093c36 7430
.org 0x93c38
	ldr r1, [pc, #112]	@ 00093c38 1c49
.org 0x93c3a
	bl 0x5784	@ 00093c3a 71f7a3fd
.org 0x93c3e
	movs r1, #128	@ 00093c3e 8021
.org 0x93c40
	lsls r1, r1, #7	@ 00093c40 c901
.org 0x93c42
	adds r0, r5, #0	@ 00093c42 281c
.org 0x93c44
	bl 0x1cf00	@ 00093c44 89f75cf9
.org 0x93c48
	str r4, [r5, #96]	@ 00093c48 2c66
.org 0x93c4a
	ldrb r0, [r5, #15]	@ 00093c4a e87b
.org 0x93c4c
	adds r0, #1	@ 00093c4c 0130
.org 0x93c4e
	strb r0, [r5, #15]	@ 00093c4e e873
.org 0x93c50
	adds r0, r5, #0	@ 00093c50 281c
.org 0x93c52
	bl 0x1cff0	@ 00093c52 89f7cdf9
.org 0x93c56
	ldr r0, [r5, #88]	@ 00093c56 a86d
.org 0x93c58
	ldr r1, [r5, #96]	@ 00093c58 296e
.org 0x93c5a
	adds r0, r0, r1	@ 00093c5a 4018
.org 0x93c5c
	str r0, [r5, #88]	@ 00093c5c a865
.org 0x93c5e
	adds r1, #64	@ 00093c5e 4031
.org 0x93c60
	str r1, [r5, #96]	@ 00093c60 2966
.org 0x93c62
	movs r0, #224	@ 00093c62 e020
.org 0x93c64
	lsls r0, r0, #3	@ 00093c64 c000
.org 0x93c66
	cmp r1, r0	@ 00093c66 8142
.org 0x93c68
	ble.n 0x93c6c	@ 00093c68 00dd
.org 0x93c6a
	str r0, [r5, #96]	@ 00093c6a 2866
.org 0x93c6c
	ldr r1, [r5, #84]	@ 00093c6c 696d
.org 0x93c6e
	ldr r2, [r5, #88]	@ 00093c6e aa6d
.org 0x93c70
	adds r0, r5, #0	@ 00093c70 281c
.org 0x93c72
	bl 0x947b4	@ 00093c72 00f09ffd
.org 0x93c76
	cmp r0, #0	@ 00093c76 0028
.org 0x93c78
	beq.n 0x93cc0	@ 00093c78 22d0
.org 0x93c7a
	adds r0, r5, #0	@ 00093c7a 281c
.org 0x93c7c
	bl 0x94a38	@ 00093c7c 00f0dcfe
.org 0x93c80
	cmp r6, #1	@ 00093c80 012e
.org 0x93c82
	bne.n 0x93cb8	@ 00093c82 19d1
.org 0x93c84
	ldr r0, [pc, #40]	@ 00093c84 0a48
.org 0x93c86
	ldr r1, [pc, #44]	@ 00093c86 0b49
.org 0x93c88
	adds r0, r0, r1	@ 00093c88 4018
.org 0x93c8a
	ldrb r4, [r0, #0]	@ 00093c8a 0478
.org 0x93c8c
	adds r0, r7, #0	@ 00093c8c 381c
.org 0x93c8e
	movs r1, #3	@ 00093c8e 0321
.org 0x93c90
	bl 0x129120	@ 00093c90 95f046fa
.org 0x93c94
	lsls r0, r0, #24	@ 00093c94 0006
.org 0x93c96
	lsrs r0, r0, #24	@ 00093c96 000e
.org 0x93c98
	asrs r4, r0	@ 00093c98 0441
.org 0x93c9a
	ands r4, r6	@ 00093c9a 3440
.org 0x93c9c
	cmp r4, #0	@ 00093c9c 002c
.org 0x93c9e
	beq.n 0x93cb8	@ 00093c9e 0bd0
.org 0x93ca0
	movs r1, #0	@ 00093ca0 0021
.org 0x93ca2
	movs r0, #10	@ 00093ca2 0a20
.org 0x93ca4
	strb r0, [r5, #13]	@ 00093ca4 6873
.org 0x93ca6
	strb r1, [r5, #14]	@ 00093ca6 a973
.org 0x93ca8
	strb r1, [r5, #15]	@ 00093ca8 e973
.org 0x93caa
	b.n 0x93cc0	@ 00093caa 09e0
.org 0x93cac
	.byte 0x94,0x05,0x86,0x08	@ 00093cac data
.org 0x93cb0
	.byte 0xb0,0x0a,0x00,0x02	@ 00093cb0 data
.org 0x93cb4
	.byte 0x3f,0xd0,0x02,0x00	@ 00093cb4 data
.org 0x93cb8
	movs r0, #0	@ 00093cb8 0020
