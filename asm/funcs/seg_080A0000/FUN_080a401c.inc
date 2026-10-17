@ FUN_080a401c  entry 0x080a401c  size 404
.thumb
.org 0xa401c
FUN_080a401c:
	push {r4, r5, lr}	@ 000a401c 30b5
.org 0xa401e
	adds r3, r0, #0	@ 000a401e 031c
.org 0xa4020
	ldr r5, [r3, #40]	@ 000a4020 9d6a
.org 0xa4022
	ldrb r0, [r3, #14]	@ 000a4022 987b
.org 0xa4024
	adds r1, r0, #0	@ 000a4024 011c
.org 0xa4026
	cmp r1, #0	@ 000a4026 0029
.org 0xa4028
	bne.n 0xa4030	@ 000a4028 02d1
.org 0xa402a
	strb r1, [r3, #19]	@ 000a402a d974
.org 0xa402c
	adds r0, #1	@ 000a402c 0130
.org 0xa402e
	strb r0, [r3, #14]	@ 000a402e 9873
.org 0xa4030
	ldrb r0, [r3, #18]	@ 000a4030 987c
.org 0xa4032
	cmp r0, #0	@ 000a4032 0028
.org 0xa4034
	bne.n 0xa40cc	@ 000a4034 4ad1
.org 0xa4036
	ldr r0, [r3, #88]	@ 000a4036 986d
.org 0xa4038
	ldr r1, [r3, #96]	@ 000a4038 196e
.org 0xa403a
	adds r4, r0, r1	@ 000a403a 4418
.org 0xa403c
	str r4, [r3, #88]	@ 000a403c 9c65
.org 0xa403e
	adds r2, r1, #0	@ 000a403e 0a1c
.org 0xa4040
	cmp r2, #0	@ 000a4040 002a
.org 0xa4042
	ble.n 0xa408a	@ 000a4042 22dd
.org 0xa4044
	ldrb r0, [r3, #19]	@ 000a4044 d87c
.org 0xa4046
	cmp r0, #0	@ 000a4046 0028
.org 0xa4048
	beq.n 0xa4074	@ 000a4048 14d0
.org 0xa404a
	adds r0, r5, #0	@ 000a404a 281c
.org 0xa404c
	adds r0, #180	@ 000a404c b430
.org 0xa404e
	ldr r0, [r0, #0]	@ 000a404e 0068
.org 0xa4050
	cmp r0, #0	@ 000a4050 0028
.org 0xa4052
	bne.n 0xa4074	@ 000a4052 0fd1
.org 0xa4054
	adds r0, r3, #0	@ 000a4054 181c
.org 0xa4056
	adds r0, #184	@ 000a4056 b830
.org 0xa4058
	ldr r0, [r0, #0]	@ 000a4058 0068
.org 0xa405a
	ldr r1, [pc, #20]	@ 000a405a 0549
.org 0xa405c
	adds r0, r0, r1	@ 000a405c 4018
.org 0xa405e
	cmp r4, r0	@ 000a405e 8442
.org 0xa4060
	ble.n 0xa415c	@ 000a4060 7cdd
.org 0xa4062
	negs r0, r2	@ 000a4062 5042
.org 0xa4064
	str r0, [r3, #96]	@ 000a4064 1866
.org 0xa4066
	movs r0, #1	@ 000a4066 0120
.org 0xa4068
	strb r0, [r3, #18]	@ 000a4068 9874
.org 0xa406a
	movs r0, #3	@ 000a406a 0320
.org 0xa406c
	b.n 0xa415a	@ 000a406c 75e0
.org 0xa406e
	.byte 0x00	@ 000a406e data
.org 0xa406f
	.byte 0x00	@ 000a406f data
.org 0xa4070
	.byte 0x00,0xe8,0xff,0xff	@ 000a4070 data
.org 0xa4074
	adds r0, r3, #0	@ 000a4074 181c
.org 0xa4076
	adds r0, #184	@ 000a4076 b830
.org 0xa4078
	ldr r1, [r3, #88]	@ 000a4078 996d
.org 0xa407a
	ldr r0, [r0, #0]	@ 000a407a 0068
.org 0xa407c
	cmp r1, r0	@ 000a407c 8142
.org 0xa407e
	ble.n 0xa415c	@ 000a407e 6ddd
.org 0xa4080
	str r0, [r3, #88]	@ 000a4080 9865
.org 0xa4082
	negs r0, r2	@ 000a4082 5042
.org 0xa4084
	str r0, [r3, #96]	@ 000a4084 1866
.org 0xa4086
	movs r0, #1	@ 000a4086 0120
.org 0xa4088
	b.n 0xa4154	@ 000a4088 64e0
.org 0xa408a
	ldrb r0, [r3, #19]	@ 000a408a d87c
.org 0xa408c
	cmp r0, #0	@ 000a408c 0028
.org 0xa408e
	beq.n 0xa40b6	@ 000a408e 12d0
.org 0xa4090
	adds r0, r5, #0	@ 000a4090 281c
.org 0xa4092
	adds r0, #180	@ 000a4092 b430
.org 0xa4094
	ldr r0, [r0, #8]	@ 000a4094 8068
.org 0xa4096
	cmp r0, #0	@ 000a4096 0028
.org 0xa4098
	bne.n 0xa40b6	@ 000a4098 0dd1
.org 0xa409a
	adds r0, r3, #0	@ 000a409a 181c
.org 0xa409c
	adds r0, #184	@ 000a409c b830
.org 0xa409e
	ldr r0, [r0, #0]	@ 000a409e 0068
.org 0xa40a0
	movs r5, #192	@ 000a40a0 c025
.org 0xa40a2
	lsls r5, r5, #5	@ 000a40a2 6d01
.org 0xa40a4
	adds r0, r0, r5	@ 000a40a4 4019
.org 0xa40a6
	cmp r4, r0	@ 000a40a6 8442
.org 0xa40a8
	bge.n 0xa415c	@ 000a40a8 58da
.org 0xa40aa
	negs r0, r2	@ 000a40aa 5042
.org 0xa40ac
	str r0, [r3, #96]	@ 000a40ac 1866
.org 0xa40ae
	movs r0, #1	@ 000a40ae 0120
.org 0xa40b0
	strb r0, [r3, #18]	@ 000a40b0 9874
.org 0xa40b2
	movs r0, #3	@ 000a40b2 0320
.org 0xa40b4
	b.n 0xa415a	@ 000a40b4 51e0
.org 0xa40b6
	adds r0, r3, #0	@ 000a40b6 181c
.org 0xa40b8
	adds r0, #184	@ 000a40b8 b830
.org 0xa40ba
	ldr r1, [r3, #88]	@ 000a40ba 996d
.org 0xa40bc
	ldr r0, [r0, #0]	@ 000a40bc 0068
.org 0xa40be
	cmp r1, r0	@ 000a40be 8142
.org 0xa40c0
	bge.n 0xa415c	@ 000a40c0 4cda
.org 0xa40c2
	str r0, [r3, #88]	@ 000a40c2 9865
.org 0xa40c4
	negs r0, r2	@ 000a40c4 5042
.org 0xa40c6
	str r0, [r3, #96]	@ 000a40c6 1866
.org 0xa40c8
	movs r0, #1	@ 000a40c8 0120
.org 0xa40ca
	b.n 0xa4154	@ 000a40ca 43e0
.org 0xa40cc
	ldr r0, [r3, #84]	@ 000a40cc 586d
.org 0xa40ce
	ldr r1, [r3, #92]	@ 000a40ce d96d
.org 0xa40d0
	adds r4, r0, r1	@ 000a40d0 4418
.org 0xa40d2
	str r4, [r3, #84]	@ 000a40d2 5c65
.org 0xa40d4
	adds r2, r1, #0	@ 000a40d4 0a1c
.org 0xa40d6
	cmp r2, #0	@ 000a40d6 002a
.org 0xa40d8
	ble.n 0xa4116	@ 000a40d8 1ddd
.org 0xa40da
	ldrb r0, [r3, #19]	@ 000a40da d87c
.org 0xa40dc
	cmp r0, #0	@ 000a40dc 0028
.org 0xa40de
	beq.n 0xa4108	@ 000a40de 13d0
.org 0xa40e0
	adds r0, r5, #0	@ 000a40e0 281c
.org 0xa40e2
	adds r0, #180	@ 000a40e2 b430
.org 0xa40e4
	ldr r1, [r0, #4]	@ 000a40e4 4168
.org 0xa40e6
	cmp r1, #0	@ 000a40e6 0029
.org 0xa40e8
	bne.n 0xa4108	@ 000a40e8 0ed1
.org 0xa40ea
	adds r0, r3, #0	@ 000a40ea 181c
.org 0xa40ec
	adds r0, #180	@ 000a40ec b430
.org 0xa40ee
	ldr r0, [r0, #0]	@ 000a40ee 0068
.org 0xa40f0
	ldr r5, [pc, #16]	@ 000a40f0 044d
.org 0xa40f2
	adds r0, r0, r5	@ 000a40f2 4019
.org 0xa40f4
	cmp r4, r0	@ 000a40f4 8442
.org 0xa40f6
	ble.n 0xa415c	@ 000a40f6 31dd
.org 0xa40f8
	negs r0, r2	@ 000a40f8 5042
.org 0xa40fa
	str r0, [r3, #92]	@ 000a40fa d865
.org 0xa40fc
	strb r1, [r3, #18]	@ 000a40fc 9974
.org 0xa40fe
	movs r0, #3	@ 000a40fe 0320
.org 0xa4100
	b.n 0xa415a	@ 000a4100 2be0
.org 0xa4102
	.byte 0x00	@ 000a4102 data
.org 0xa4103
	.byte 0x00	@ 000a4103 data
.org 0xa4104
	.byte 0x00,0xe8,0xff,0xff	@ 000a4104 data
.org 0xa4108
	adds r0, r3, #0	@ 000a4108 181c
.org 0xa410a
	adds r0, #180	@ 000a410a b430
.org 0xa410c
	ldr r1, [r3, #84]	@ 000a410c 596d
.org 0xa410e
	ldr r0, [r0, #0]	@ 000a410e 0068
.org 0xa4110
	cmp r1, r0	@ 000a4110 8142
.org 0xa4112
	ble.n 0xa415c	@ 000a4112 23dd
.org 0xa4114
	b.n 0xa414c	@ 000a4114 1ae0
.org 0xa4116
	ldrb r0, [r3, #19]	@ 000a4116 d87c
.org 0xa4118
	cmp r0, #0	@ 000a4118 0028
.org 0xa411a
	beq.n 0xa4140	@ 000a411a 11d0
.org 0xa411c
	adds r0, r5, #0	@ 000a411c 281c
.org 0xa411e
	adds r0, #180	@ 000a411e b430
.org 0xa4120
	ldr r1, [r0, #12]	@ 000a4120 c168
.org 0xa4122
	cmp r1, #0	@ 000a4122 0029
.org 0xa4124
	bne.n 0xa4140	@ 000a4124 0cd1
.org 0xa4126
	adds r0, r3, #0	@ 000a4126 181c
.org 0xa4128
	adds r0, #180	@ 000a4128 b430
.org 0xa412a
	ldr r0, [r0, #0]	@ 000a412a 0068
.org 0xa412c
	movs r5, #192	@ 000a412c c025
.org 0xa412e
	lsls r5, r5, #5	@ 000a412e 6d01
.org 0xa4130
	adds r0, r0, r5	@ 000a4130 4019
.org 0xa4132
	cmp r4, r0	@ 000a4132 8442
.org 0xa4134
	bge.n 0xa415c	@ 000a4134 12da
.org 0xa4136
	negs r0, r2	@ 000a4136 5042
.org 0xa4138
	str r0, [r3, #92]	@ 000a4138 d865
.org 0xa413a
	strb r1, [r3, #18]	@ 000a413a 9974
.org 0xa413c
	movs r0, #3	@ 000a413c 0320
.org 0xa413e
	b.n 0xa415a	@ 000a413e 0ce0
.org 0xa4140
	adds r0, r3, #0	@ 000a4140 181c
.org 0xa4142
	adds r0, #180	@ 000a4142 b430
.org 0xa4144
	ldr r1, [r3, #84]	@ 000a4144 596d
.org 0xa4146
	ldr r0, [r0, #0]	@ 000a4146 0068
.org 0xa4148
	cmp r1, r0	@ 000a4148 8142
.org 0xa414a
	bge.n 0xa415c	@ 000a414a 07da
.org 0xa414c
	str r0, [r3, #84]	@ 000a414c 5865
.org 0xa414e
	negs r0, r2	@ 000a414e 5042
.org 0xa4150
	str r0, [r3, #92]	@ 000a4150 d865
.org 0xa4152
	movs r0, #0	@ 000a4152 0020
.org 0xa4154
	strb r0, [r3, #18]	@ 000a4154 9874
.org 0xa4156
	ldrb r0, [r3, #19]	@ 000a4156 d87c
.org 0xa4158
	adds r0, #1	@ 000a4158 0130
.org 0xa415a
	strb r0, [r3, #19]	@ 000a415a d874
.org 0xa415c
	ldrb r0, [r3, #19]	@ 000a415c d87c
.org 0xa415e
	cmp r0, #1	@ 000a415e 0128
.org 0xa4160
	bls.n 0xa41ba	@ 000a4160 2bd9
.org 0xa4162
	cmp r0, #2	@ 000a4162 0228
.org 0xa4164
	bls.n 0xa4184	@ 000a4164 0ed9
.org 0xa4166
	ldr r1, [pc, #24]	@ 000a4166 0649
.org 0xa4168
	ldrb r0, [r3, #9]	@ 000a4168 587a
.org 0xa416a
	lsls r0, r0, #2	@ 000a416a 8000
.org 0xa416c
	adds r0, r0, r1	@ 000a416c 4018
.org 0xa416e
	movs r1, #2	@ 000a416e 0221
.org 0xa4170
	str r1, [r3, #12]	@ 000a4170 d960
.org 0xa4172
	ldr r0, [r0, #0]	@ 000a4172 0068
.org 0xa4174
	ldr r0, [r0, #8]	@ 000a4174 8068
.org 0xa4176
	str r0, [r3, #20]	@ 000a4176 5861
.org 0xa4178
	adds r0, r3, #0	@ 000a4178 181c
.org 0xa417a
	bl 0xa3c94	@ 000a417a fff78bfd
.org 0xa417e
	b.n 0xa41ba	@ 000a417e 1ce0
.org 0xa4180
	.byte 0x40,0xdb,0x85,0x08	@ 000a4180 data
.org 0xa4184
	ldrb r1, [r3, #10]	@ 000a4184 997a
.org 0xa4186
	movs r0, #254	@ 000a4186 fe20
.org 0xa4188
	ands r0, r1	@ 000a4188 0840
.org 0xa418a
	movs r2, #0	@ 000a418a 0022
.org 0xa418c
	movs r1, #253	@ 000a418c fd21
.org 0xa418e
	ands r0, r1	@ 000a418e 0840
.org 0xa4190
	strb r0, [r3, #10]	@ 000a4190 9872
.org 0xa4192
	adds r0, r3, #0	@ 000a4192 181c
.org 0xa4194
	adds r0, #140	@ 000a4194 8c30
.org 0xa4196
	str r2, [r0, #0]	@ 000a4196 0260
.org 0xa4198
	adds r0, #4	@ 000a4198 0430
.org 0xa419a
	str r2, [r0, #0]	@ 000a419a 0260
.org 0xa419c
	adds r0, #4	@ 000a419c 0430
.org 0xa419e
	strb r2, [r0, #0]	@ 000a419e 0270
.org 0xa41a0
	ldrb r1, [r3, #10]	@ 000a41a0 997a
.org 0xa41a2
	movs r0, #251	@ 000a41a2 fb20
.org 0xa41a4
	ands r0, r1	@ 000a41a4 0840
.org 0xa41a6
	strb r0, [r3, #10]	@ 000a41a6 9872
.org 0xa41a8
	ldr r1, [pc, #20]	@ 000a41a8 0549
.org 0xa41aa
	ldrb r0, [r3, #9]	@ 000a41aa 587a
.org 0xa41ac
	lsls r0, r0, #2	@ 000a41ac 8000
.org 0xa41ae
	adds r0, r0, r1	@ 000a41ae 4018
