@ FUN_080f3ff4  entry 0x080f3ff4  size 222
.thumb
.org 0xf3ff4
FUN_080f3ff4:
	push {r4, lr}	@ 000f3ff4 10b5
.org 0xf3ff6
	adds r4, r0, #0	@ 000f3ff6 041c
.org 0xf3ff8
	ldrb r0, [r4, #13]	@ 000f3ff8 607b
.org 0xf3ffa
	cmp r0, #0	@ 000f3ffa 0028
.org 0xf3ffc
	bne.n 0xf4030	@ 000f3ffc 18d1
.org 0xf3ffe
	ldr r0, [pc, #76]	@ 000f3ffe 1348
.org 0xf4000
	ldr r1, [pc, #76]	@ 000f4000 1349
.org 0xf4002
	adds r0, r0, r1	@ 000f4002 4018
.org 0xf4004
	ldrb r0, [r0, #0]	@ 000f4004 0078
.org 0xf4006
	ldrb r2, [r4, #17]	@ 000f4006 627c
.org 0xf4008
	asrs r0, r2	@ 000f4008 1041
.org 0xf400a
	movs r1, #1	@ 000f400a 0121
.org 0xf400c
	ands r0, r1	@ 000f400c 0840
.org 0xf400e
	cmp r0, #0	@ 000f400e 0028
.org 0xf4010
	beq.n 0xf4030	@ 000f4010 0ed0
.org 0xf4012
	ldrb r0, [r4, #30]	@ 000f4012 a07f
.org 0xf4014
	lsls r0, r0, #8	@ 000f4014 0002
.org 0xf4016
	adds r1, r4, #0	@ 000f4016 211c
.org 0xf4018
	adds r1, #112	@ 000f4018 7031
.org 0xf401a
	ldrb r1, [r1, #0]	@ 000f401a 0978
.org 0xf401c
	orrs r1, r0	@ 000f401c 0143
.org 0xf401e
	adds r1, #1	@ 000f401e 0131
.org 0xf4020
	lsls r1, r1, #16	@ 000f4020 0904
.org 0xf4022
	lsrs r1, r1, #16	@ 000f4022 090c
.org 0xf4024
	adds r0, r4, #0	@ 000f4024 201c
.org 0xf4026
	bl 0x1cf00	@ 000f4026 28f76bff
.org 0xf402a
	ldrb r0, [r4, #13]	@ 000f402a 607b
.org 0xf402c
	adds r0, #1	@ 000f402c 0130
.org 0xf402e
	strb r0, [r4, #13]	@ 000f402e 6073
.org 0xf4030
	ldr r0, [pc, #24]	@ 000f4030 0648
.org 0xf4032
	ldr r1, [pc, #32]	@ 000f4032 0849
.org 0xf4034
	adds r0, r0, r1	@ 000f4034 4018
.org 0xf4036
	ldrb r0, [r0, #0]	@ 000f4036 0078
.org 0xf4038
	cmp r0, #64	@ 000f4038 4028
.org 0xf403a
	bne.n 0xf40ae	@ 000f403a 38d1
.org 0xf403c
	ldrb r0, [r4, #14]	@ 000f403c a07b
.org 0xf403e
	cmp r0, #1	@ 000f403e 0128
.org 0xf4040
	beq.n 0xf406c	@ 000f4040 14d0
.org 0xf4042
	cmp r0, #1	@ 000f4042 0128
.org 0xf4044
	bgt.n 0xf4058	@ 000f4044 08dc
.org 0xf4046
	cmp r0, #0	@ 000f4046 0028
.org 0xf4048
	beq.n 0xf405e	@ 000f4048 09d0
.org 0xf404a
	b.n 0xf40ae	@ 000f404a 30e0
.org 0xf404c
	.byte 0xb0,0x0a,0x00,0x02	@ 000f404c data
.org 0xf4050
	.byte 0x25,0xd0,0x02,0x00	@ 000f4050 data
.org 0xf4054
	.byte 0x24,0xd0,0x02,0x00	@ 000f4054 data
.org 0xf4058
	cmp r0, #2	@ 000f4058 0228
.org 0xf405a
	beq.n 0xf407e	@ 000f405a 10d0
.org 0xf405c
	b.n 0xf40ae	@ 000f405c 27e0
.org 0xf405e
	movs r0, #31	@ 000f405e 1f20
.org 0xf4060
	strb r0, [r4, #18]	@ 000f4060 a074
.org 0xf4062
	ldr r0, [r4, #88]	@ 000f4062 a06d
.org 0xf4064
	str r0, [r4, #92]	@ 000f4064 e065
.org 0xf4066
	ldrb r0, [r4, #14]	@ 000f4066 a07b
.org 0xf4068
	adds r0, #1	@ 000f4068 0130
.org 0xf406a
	strb r0, [r4, #14]	@ 000f406a a073
.org 0xf406c
	ldrb r0, [r4, #18]	@ 000f406c a07c
.org 0xf406e
	subs r0, #1	@ 000f406e 0138
.org 0xf4070
	strb r0, [r4, #18]	@ 000f4070 a074
.org 0xf4072
	lsls r0, r0, #24	@ 000f4072 0006
.org 0xf4074
	lsrs r0, r0, #24	@ 000f4074 000e
.org 0xf4076
	cmp r0, #0	@ 000f4076 0028
.org 0xf4078
	bne.n 0xf40ae	@ 000f4078 19d1
.org 0xf407a
	str r0, [r4, #96]	@ 000f407a 2066
.org 0xf407c
	b.n 0xf40a8	@ 000f407c 14e0
.org 0xf407e
	ldr r1, [r4, #96]	@ 000f407e 216e
.org 0xf4080
	ldr r0, [pc, #92]	@ 000f4080 1748
.org 0xf4082
	cmp r1, r0	@ 000f4082 8142
.org 0xf4084
	bgt.n 0xf408c	@ 000f4084 02dc
.org 0xf4086
	adds r0, r1, #0	@ 000f4086 081c
.org 0xf4088
	adds r0, #16	@ 000f4088 1030
.org 0xf408a
	str r0, [r4, #96]	@ 000f408a 2066
.org 0xf408c
	ldr r0, [r4, #96]	@ 000f408c 206e
.org 0xf408e
	movs r1, #255	@ 000f408e ff21
.org 0xf4090
	lsls r1, r1, #8	@ 000f4090 0902
.org 0xf4092
	ands r0, r1	@ 000f4092 0840
.org 0xf4094
	ldr r1, [r4, #88]	@ 000f4094 a16d
.org 0xf4096
	adds r1, r1, r0	@ 000f4096 0918
.org 0xf4098
	str r1, [r4, #88]	@ 000f4098 a165
.org 0xf409a
	ldr r0, [r4, #92]	@ 000f409a e06d
.org 0xf409c
	movs r2, #240	@ 000f409c f022
.org 0xf409e
	lsls r2, r2, #9	@ 000f409e 5202
.org 0xf40a0
	adds r0, r0, r2	@ 000f40a0 8018
.org 0xf40a2
	cmp r1, r0	@ 000f40a2 8142
.org 0xf40a4
	ble.n 0xf40ae	@ 000f40a4 03dd
.org 0xf40a6
	str r0, [r4, #88]	@ 000f40a6 a065
.org 0xf40a8
	ldrb r0, [r4, #14]	@ 000f40a8 a07b
.org 0xf40aa
	adds r0, #1	@ 000f40aa 0130
.org 0xf40ac
	strb r0, [r4, #14]	@ 000f40ac a073
.org 0xf40ae
	ldr r0, [pc, #52]	@ 000f40ae 0d48
.org 0xf40b0
	ldr r0, [r0, #0]	@ 000f40b0 0068
.org 0xf40b2
	ldr r1, [r0, #84]	@ 000f40b2 416d
.org 0xf40b4
	ldr r0, [pc, #48]	@ 000f40b4 0c48
.org 0xf40b6
	cmp r1, r0	@ 000f40b6 8142
.org 0xf40b8
	ble.n 0xf40d2	@ 000f40b8 0bdd
.org 0xf40ba
	ldr r1, [pc, #48]	@ 000f40ba 0c49
.org 0xf40bc
	ldrb r0, [r4, #9]	@ 000f40bc 607a
.org 0xf40be
	lsls r0, r0, #2	@ 000f40be 8000
.org 0xf40c0
	adds r0, r0, r1	@ 000f40c0 4018
.org 0xf40c2
	movs r1, #2	@ 000f40c2 0221
.org 0xf40c4
	str r1, [r4, #12]	@ 000f40c4 e160
.org 0xf40c6
	ldr r0, [r0, #0]	@ 000f40c6 0068
.org 0xf40c8
	ldr r0, [r0, #8]	@ 000f40c8 8068
.org 0xf40ca
	str r0, [r4, #20]	@ 000f40ca 6061
.org 0xf40cc
	adds r0, r4, #0	@ 000f40cc 201c
.org 0xf40ce
	bl 0xf3f1c	@ 000f40ce fff725ff
