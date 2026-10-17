@ FUN_080d3fa4  entry 0x080d3fa4  size 216
.thumb
.org 0xd3fa4
FUN_080d3fa4:
	push {r4, r5, lr}	@ 000d3fa4 30b5
.org 0xd3fa6
	adds r4, r0, #0	@ 000d3fa6 041c
.org 0xd3fa8
	ldrb r0, [r4, #14]	@ 000d3fa8 a07b
.org 0xd3faa
	cmp r0, #1	@ 000d3faa 0128
.org 0xd3fac
	beq.n 0xd3fe8	@ 000d3fac 1cd0
.org 0xd3fae
	cmp r0, #1	@ 000d3fae 0128
.org 0xd3fb0
	bgt.n 0xd3fb8	@ 000d3fb0 02dc
.org 0xd3fb2
	cmp r0, #0	@ 000d3fb2 0028
.org 0xd3fb4
	beq.n 0xd3fc2	@ 000d3fb4 05d0
.org 0xd3fb6
	b.n 0xd4088	@ 000d3fb6 67e0
.org 0xd3fb8
	cmp r0, #2	@ 000d3fb8 0228
.org 0xd3fba
	beq.n 0xd4020	@ 000d3fba 31d0
.org 0xd3fbc
	cmp r0, #3	@ 000d3fbc 0328
.org 0xd3fbe
	beq.n 0xd404c	@ 000d3fbe 45d0
.org 0xd3fc0
	b.n 0xd4088	@ 000d3fc0 62e0
.org 0xd3fc2
	ldrb r0, [r4, #18]	@ 000d3fc2 a07c
.org 0xd3fc4
	adds r0, #1	@ 000d3fc4 0130
.org 0xd3fc6
	strb r0, [r4, #18]	@ 000d3fc6 a074
.org 0xd3fc8
	lsls r0, r0, #24	@ 000d3fc8 0006
.org 0xd3fca
	lsrs r0, r0, #24	@ 000d3fca 000e
.org 0xd3fcc
	cmp r0, #39	@ 000d3fcc 2728
.org 0xd3fce
	bne.n 0xd4088	@ 000d3fce 5bd1
.org 0xd3fd0
	ldr r1, [pc, #16]	@ 000d3fd0 0449
.org 0xd3fd2
	ldrb r0, [r4, #16]	@ 000d3fd2 207c
.org 0xd3fd4
	adds r0, r0, r1	@ 000d3fd4 4018
.org 0xd3fd6
	ldrb r0, [r0, #0]	@ 000d3fd6 0078
.org 0xd3fd8
	movs r1, #32	@ 000d3fd8 2021
.org 0xd3fda
	bl 0x249c	@ 000d3fda 2ef75ffa
.org 0xd3fde
	movs r0, #38	@ 000d3fde 2620
.org 0xd3fe0
	b.n 0xd4010	@ 000d3fe0 16e0
.org 0xd3fe2
	.byte 0x00	@ 000d3fe2 data
.org 0xd3fe3
	.byte 0x00	@ 000d3fe3 data
.org 0xd3fe4
	.byte 0x50,0x7e,0x86,0x08	@ 000d3fe4 data
.org 0xd3fe8
	ldr r1, [pc, #48]	@ 000d3fe8 0c49
.org 0xd3fea
	ldrb r0, [r4, #16]	@ 000d3fea 207c
.org 0xd3fec
	adds r0, r0, r1	@ 000d3fec 4018
.org 0xd3fee
	ldrb r0, [r0, #0]	@ 000d3fee 0078
.org 0xd3ff0
	bl 0x25d8	@ 000d3ff0 2ef7f2fa
.org 0xd3ff4
	ldrb r0, [r4, #18]	@ 000d3ff4 a07c
.org 0xd3ff6
	subs r0, #1	@ 000d3ff6 0138
.org 0xd3ff8
	strb r0, [r4, #18]	@ 000d3ff8 a074
.org 0xd3ffa
	lsls r0, r0, #24	@ 000d3ffa 0006
.org 0xd3ffc
	lsrs r0, r0, #24	@ 000d3ffc 000e
.org 0xd3ffe
	cmp r0, #255	@ 000d3ffe ff28
.org 0xd4000
	bne.n 0xd4088	@ 000d4000 42d1
.org 0xd4002
	ldrb r0, [r4, #16]	@ 000d4002 207c
.org 0xd4004
	cmp r0, #0	@ 000d4004 0028
.org 0xd4006
	beq.n 0xd400e	@ 000d4006 02d0
.org 0xd4008
	movs r0, #0	@ 000d4008 0020
.org 0xd400a
	bl 0x2b10	@ 000d400a 2ef781fd
.org 0xd400e
	movs r0, #24	@ 000d400e 1820
.org 0xd4010
	strb r0, [r4, #18]	@ 000d4010 a074
.org 0xd4012
	ldrb r0, [r4, #14]	@ 000d4012 a07b
.org 0xd4014
	adds r0, #1	@ 000d4014 0130
.org 0xd4016
	strb r0, [r4, #14]	@ 000d4016 a073
.org 0xd4018
	b.n 0xd4088	@ 000d4018 36e0
.org 0xd401a
	.byte 0x00	@ 000d401a data
.org 0xd401b
	.byte 0x00	@ 000d401b data
.org 0xd401c
	.byte 0x50,0x7e,0x86,0x08	@ 000d401c data
.org 0xd4020
	ldr r1, [pc, #36]	@ 000d4020 0949
.org 0xd4022
	ldrb r0, [r4, #16]	@ 000d4022 207c
.org 0xd4024
	adds r0, r0, r1	@ 000d4024 4018
.org 0xd4026
	ldrb r0, [r0, #0]	@ 000d4026 0078
.org 0xd4028
	bl 0x25d8	@ 000d4028 2ef7d6fa
.org 0xd402c
	ldrb r0, [r4, #18]	@ 000d402c a07c
.org 0xd402e
	subs r0, #1	@ 000d402e 0138
.org 0xd4030
	strb r0, [r4, #18]	@ 000d4030 a074
.org 0xd4032
	lsls r0, r0, #24	@ 000d4032 0006
.org 0xd4034
	lsrs r0, r0, #24	@ 000d4034 000e
.org 0xd4036
	cmp r0, #255	@ 000d4036 ff28
.org 0xd4038
	bne.n 0xd4088	@ 000d4038 26d1
.org 0xd403a
	ldrb r0, [r4, #14]	@ 000d403a a07b
.org 0xd403c
	adds r0, #1	@ 000d403c 0130
.org 0xd403e
	strb r0, [r4, #14]	@ 000d403e a073
.org 0xd4040
	movs r0, #0	@ 000d4040 0020
.org 0xd4042
	strb r0, [r4, #18]	@ 000d4042 a074
.org 0xd4044
	b.n 0xd4088	@ 000d4044 20e0
.org 0xd4046
	.byte 0x00	@ 000d4046 data
.org 0xd4047
	.byte 0x00	@ 000d4047 data
.org 0xd4048
	.byte 0x50,0x7e,0x86,0x08	@ 000d4048 data
.org 0xd404c
	ldr r5, [pc, #64]	@ 000d404c 104d
.org 0xd404e
	ldrb r0, [r4, #16]	@ 000d404e 207c
.org 0xd4050
	adds r0, r0, r5	@ 000d4050 4019
.org 0xd4052
	ldrb r0, [r0, #0]	@ 000d4052 0078
.org 0xd4054
	bl 0x25d8	@ 000d4054 2ef7c0fa
.org 0xd4058
	ldrb r0, [r4, #18]	@ 000d4058 a07c
.org 0xd405a
	adds r0, #1	@ 000d405a 0130
.org 0xd405c
	strb r0, [r4, #18]	@ 000d405c a074
.org 0xd405e
	lsls r0, r0, #24	@ 000d405e 0006
.org 0xd4060
	lsrs r0, r0, #24	@ 000d4060 000e
.org 0xd4062
	cmp r0, #33	@ 000d4062 2128
.org 0xd4064
	bne.n 0xd4088	@ 000d4064 10d1
.org 0xd4066
	ldrb r0, [r4, #16]	@ 000d4066 207c
.org 0xd4068
	adds r0, r0, r5	@ 000d4068 4019
.org 0xd406a
	ldrb r0, [r0, #0]	@ 000d406a 0078
.org 0xd406c
	bl 0x2624	@ 000d406c 2ef7dafa
.org 0xd4070
	ldr r1, [pc, #32]	@ 000d4070 0849
.org 0xd4072
	ldrb r0, [r4, #9]	@ 000d4072 607a
.org 0xd4074
	lsls r0, r0, #2	@ 000d4074 8000
.org 0xd4076
	adds r0, r0, r1	@ 000d4076 4018
.org 0xd4078
	movs r1, #2	@ 000d4078 0221
.org 0xd407a
	str r1, [r4, #12]	@ 000d407a e160
