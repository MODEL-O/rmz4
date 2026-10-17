@ FUN_080c6f50  entry 0x080c6f50  size 266
.thumb
.org 0xc6f50
FUN_080c6f50:
	push {r4, r5, lr}	@ 000c6f50 30b5
.org 0xc6f52
	adds r4, r0, #0	@ 000c6f52 041c
.org 0xc6f54
	ldr r5, [r4, #40]	@ 000c6f54 a56a
.org 0xc6f56
	bl 0x1cff0	@ 000c6f56 56f74bf8
.org 0xc6f5a
	ldrb r0, [r5, #13]	@ 000c6f5a 687b
.org 0xc6f5c
	cmp r0, #34	@ 000c6f5c 2228
.org 0xc6f5e
	beq.n 0xc6f9c	@ 000c6f5e 1dd0
.org 0xc6f60
	ldrb r1, [r4, #10]	@ 000c6f60 a17a
.org 0xc6f62
	movs r0, #254	@ 000c6f62 fe20
.org 0xc6f64
	ands r0, r1	@ 000c6f64 0840
.org 0xc6f66
	movs r2, #0	@ 000c6f66 0022
.org 0xc6f68
	movs r1, #253	@ 000c6f68 fd21
.org 0xc6f6a
	ands r0, r1	@ 000c6f6a 0840
.org 0xc6f6c
	strb r0, [r4, #10]	@ 000c6f6c a072
.org 0xc6f6e
	adds r0, r4, #0	@ 000c6f6e 201c
.org 0xc6f70
	adds r0, #140	@ 000c6f70 8c30
.org 0xc6f72
	str r2, [r0, #0]	@ 000c6f72 0260
.org 0xc6f74
	adds r0, #4	@ 000c6f74 0430
.org 0xc6f76
	str r2, [r0, #0]	@ 000c6f76 0260
.org 0xc6f78
	adds r0, #4	@ 000c6f78 0430
.org 0xc6f7a
	strb r2, [r0, #0]	@ 000c6f7a 0270
.org 0xc6f7c
	ldrb r1, [r4, #10]	@ 000c6f7c a17a
.org 0xc6f7e
	movs r0, #251	@ 000c6f7e fb20
.org 0xc6f80
	ands r0, r1	@ 000c6f80 0840
.org 0xc6f82
	strb r0, [r4, #10]	@ 000c6f82 a072
.org 0xc6f84
	ldr r1, [pc, #16]	@ 000c6f84 0449
.org 0xc6f86
	ldrb r0, [r4, #9]	@ 000c6f86 607a
.org 0xc6f88
	lsls r0, r0, #2	@ 000c6f88 8000
.org 0xc6f8a
	adds r0, r0, r1	@ 000c6f8a 4018
.org 0xc6f8c
	movs r1, #3	@ 000c6f8c 0321
.org 0xc6f8e
	str r1, [r4, #12]	@ 000c6f8e e160
.org 0xc6f90
	ldr r0, [r0, #0]	@ 000c6f90 0068
.org 0xc6f92
	ldr r0, [r0, #12]	@ 000c6f92 c068
.org 0xc6f94
	b.n 0xc7072	@ 000c6f94 6de0
.org 0xc6f96
	.byte 0x00	@ 000c6f96 data
.org 0xc6f97
	.byte 0x00	@ 000c6f97 data
.org 0xc6f98
	.byte 0xf4,0x49,0x86,0x08	@ 000c6f98 data
.org 0xc6f9c
	ldrb r0, [r5, #10]	@ 000c6f9c a87a
.org 0xc6f9e
	lsrs r2, r0, #4	@ 000c6f9e 0209
.org 0xc6fa0
	movs r0, #1	@ 000c6fa0 0120
.org 0xc6fa2
	ands r2, r0	@ 000c6fa2 0240
.org 0xc6fa4
	cmp r2, #0	@ 000c6fa4 002a
.org 0xc6fa6
	beq.n 0xc6fb0	@ 000c6fa6 03d0
.org 0xc6fa8
	ldrb r1, [r4, #10]	@ 000c6fa8 a17a
.org 0xc6faa
	movs r0, #16	@ 000c6faa 1020
.org 0xc6fac
	orrs r0, r1	@ 000c6fac 0843
.org 0xc6fae
	b.n 0xc6fb6	@ 000c6fae 02e0
.org 0xc6fb0
	ldrb r1, [r4, #10]	@ 000c6fb0 a17a
.org 0xc6fb2
	movs r0, #239	@ 000c6fb2 ef20
.org 0xc6fb4
	ands r0, r1	@ 000c6fb4 0840
.org 0xc6fb6
	strb r0, [r4, #10]	@ 000c6fb6 a072
.org 0xc6fb8
	adds r1, r2, #0	@ 000c6fb8 111c
.org 0xc6fba
	adds r0, r4, #0	@ 000c6fba 201c
.org 0xc6fbc
	adds r0, #76	@ 000c6fbc 4c30
.org 0xc6fbe
	strb r1, [r0, #0]	@ 000c6fbe 0170
.org 0xc6fc0
	adds r3, r4, #0	@ 000c6fc0 231c
.org 0xc6fc2
	adds r3, #74	@ 000c6fc2 4a33
.org 0xc6fc4
	lsls r1, r1, #4	@ 000c6fc4 0901
.org 0xc6fc6
	ldrb r2, [r3, #0]	@ 000c6fc6 1a78
.org 0xc6fc8
	movs r0, #17	@ 000c6fc8 1120
.org 0xc6fca
	negs r0, r0	@ 000c6fca 4042
.org 0xc6fcc
	ands r0, r2	@ 000c6fcc 1040
.org 0xc6fce
	orrs r0, r1	@ 000c6fce 0843
.org 0xc6fd0
	strb r0, [r3, #0]	@ 000c6fd0 1870
.org 0xc6fd2
	ldrb r1, [r4, #10]	@ 000c6fd2 a17a
.org 0xc6fd4
	movs r0, #16	@ 000c6fd4 1020
.org 0xc6fd6
	ands r0, r1	@ 000c6fd6 0840
.org 0xc6fd8
	cmp r0, #0	@ 000c6fd8 0028
.org 0xc6fda
	beq.n 0xc6fe8	@ 000c6fda 05d0
.org 0xc6fdc
	ldr r0, [r5, #84]	@ 000c6fdc 686d
.org 0xc6fde
	ldr r1, [pc, #4]	@ 000c6fde 0149
.org 0xc6fe0
	b.n 0xc6fee	@ 000c6fe0 05e0
.org 0xc6fe2
	.byte 0x00	@ 000c6fe2 data
.org 0xc6fe3
	.byte 0x00	@ 000c6fe3 data
.org 0xc6fe4
	.byte 0x00,0xfb,0xff,0xff	@ 000c6fe4 data
.org 0xc6fe8
	ldr r0, [r5, #84]	@ 000c6fe8 686d
.org 0xc6fea
	movs r1, #160	@ 000c6fea a021
.org 0xc6fec
	lsls r1, r1, #3	@ 000c6fec c900
.org 0xc6fee
	adds r0, r0, r1	@ 000c6fee 4018
.org 0xc6ff0
	str r0, [r4, #84]	@ 000c6ff0 6065
.org 0xc6ff2
	ldr r0, [r5, #88]	@ 000c6ff2 a86d
.org 0xc6ff4
	movs r1, #128	@ 000c6ff4 8021
.org 0xc6ff6
	lsls r1, r1, #5	@ 000c6ff6 4901
.org 0xc6ff8
	adds r0, r0, r1	@ 000c6ff8 4018
.org 0xc6ffa
	str r0, [r4, #88]	@ 000c6ffa a065
.org 0xc6ffc
	ldr r0, [r5, #104]	@ 000c6ffc a86e
.org 0xc6ffe
	cmp r0, #15	@ 000c6ffe 0f28
.org 0xc7000
	ble.n 0xc7014	@ 000c7000 08dd
.org 0xc7002
	adds r0, r4, #0	@ 000c7002 201c
.org 0xc7004
	adds r0, #116	@ 000c7004 7430
.org 0xc7006
	ldr r1, [pc, #8]	@ 000c7006 0249
.org 0xc7008
	bl 0x5784	@ 000c7008 3ef7bcfb
.org 0xc700c
	b.n 0xc7032	@ 000c700c 11e0
.org 0xc700e
	.byte 0x00	@ 000c700e data
.org 0xc700f
	.byte 0x00	@ 000c700f data
.org 0xc7010
	.byte 0xc8,0x5d,0x86,0x08	@ 000c7010 data
.org 0xc7014
	cmp r0, #8	@ 000c7014 0828
.org 0xc7016
	ble.n 0xc7028	@ 000c7016 07dd
.org 0xc7018
	adds r0, r4, #0	@ 000c7018 201c
.org 0xc701a
	adds r0, #116	@ 000c701a 7430
.org 0xc701c
	ldr r1, [pc, #4]	@ 000c701c 0149
.org 0xc701e
	bl 0x5784	@ 000c701e 3ef7b1fb
.org 0xc7022
	b.n 0xc7032	@ 000c7022 06e0
.org 0xc7024
	.byte 0xb0,0x5d,0x86,0x08	@ 000c7024 data
.org 0xc7028
	adds r0, r4, #0	@ 000c7028 201c
.org 0xc702a
	adds r0, #116	@ 000c702a 7430
.org 0xc702c
	ldr r1, [pc, #32]	@ 000c702c 0849
.org 0xc702e
	bl 0x5784	@ 000c702e 3ef7a9fb
.org 0xc7032
	ldrb r0, [r4, #13]	@ 000c7032 607b
.org 0xc7034
	cmp r0, #0	@ 000c7034 0028
.org 0xc7036
	bne.n 0xc7058	@ 000c7036 0fd1
.org 0xc7038
	ldrb r0, [r5, #15]	@ 000c7038 e87b
.org 0xc703a
	cmp r0, #3	@ 000c703a 0328
.org 0xc703c
	bne.n 0xc7074	@ 000c703c 1ad1
.org 0xc703e
	ldr r1, [pc, #20]	@ 000c703e 0549
.org 0xc7040
	adds r0, r4, #0	@ 000c7040 201c
.org 0xc7042
	bl 0x1cf00	@ 000c7042 55f75dff
.org 0xc7046
	ldrb r0, [r4, #13]	@ 000c7046 607b
.org 0xc7048
	adds r0, #1	@ 000c7048 0130
.org 0xc704a
	strb r0, [r4, #13]	@ 000c704a 6073
.org 0xc704c
	b.n 0xc7074	@ 000c704c 12e0
.org 0xc704e
	.byte 0x00	@ 000c704e data
.org 0xc704f
	.byte 0x00	@ 000c704f data
.org 0xc7050
	.byte 0x98,0x5d,0x86,0x08	@ 000c7050 data
.org 0xc7054
	.byte 0x05,0xa6,0x00,0x00	@ 000c7054 data
.org 0xc7058
	adds r0, r4, #0	@ 000c7058 201c
