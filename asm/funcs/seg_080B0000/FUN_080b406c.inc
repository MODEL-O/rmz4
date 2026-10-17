@ FUN_080b406c  entry 0x080b406c  size 252
.thumb
.org 0xb406c
FUN_080b406c:
	push {r4, r5, r6, lr}	@ 000b406c 70b5
.org 0xb406e
	adds r4, r0, #0	@ 000b406e 041c
.org 0xb4070
	adds r2, r4, #0	@ 000b4070 221c
.org 0xb4072
	adds r2, #140	@ 000b4072 8c32
.org 0xb4074
	ldr r0, [r2, #0]	@ 000b4074 1068
.org 0xb4076
	movs r1, #128	@ 000b4076 8021
.org 0xb4078
	lsls r1, r1, #2	@ 000b4078 8900
.org 0xb407a
	ands r0, r1	@ 000b407a 0840
.org 0xb407c
	cmp r0, #0	@ 000b407c 0028
.org 0xb407e
	bne.n 0xb409c	@ 000b407e 0dd1
.org 0xb4080
	adds r1, r4, #0	@ 000b4080 211c
.org 0xb4082
	adds r1, #190	@ 000b4082 be31
.org 0xb4084
	ldrh r0, [r1, #0]	@ 000b4084 0888
.org 0xb4086
	subs r0, #1	@ 000b4086 0138
.org 0xb4088
	strh r0, [r1, #0]	@ 000b4088 0880
.org 0xb408a
	lsls r0, r0, #16	@ 000b408a 0004
.org 0xb408c
	ldr r1, [pc, #40]	@ 000b408c 0a49
.org 0xb408e
	cmp r0, r1	@ 000b408e 8842
.org 0xb4090
	beq.n 0xb409c	@ 000b4090 04d0
.org 0xb4092
	adds r0, r4, #0	@ 000b4092 201c
.org 0xb4094
	adds r0, #184	@ 000b4094 b830
.org 0xb4096
	ldrb r0, [r0, #0]	@ 000b4096 0078
.org 0xb4098
	cmp r0, #0	@ 000b4098 0028
.org 0xb409a
	beq.n 0xb40c0	@ 000b409a 11d0
.org 0xb409c
	ldr r1, [pc, #28]	@ 000b409c 0749
.org 0xb409e
	ldrb r0, [r4, #9]	@ 000b409e 607a
.org 0xb40a0
	lsls r0, r0, #2	@ 000b40a0 8000
.org 0xb40a2
	adds r0, r0, r1	@ 000b40a2 4018
.org 0xb40a4
	movs r1, #2	@ 000b40a4 0221
.org 0xb40a6
	str r1, [r4, #12]	@ 000b40a6 e160
.org 0xb40a8
	ldr r0, [r0, #0]	@ 000b40a8 0068
.org 0xb40aa
	ldr r0, [r0, #8]	@ 000b40aa 8068
.org 0xb40ac
	str r0, [r4, #20]	@ 000b40ac 6061
.org 0xb40ae
	adds r0, r4, #0	@ 000b40ae 201c
.org 0xb40b0
	bl 0xb4184	@ 000b40b0 00f068f8
.org 0xb40b4
	b.n 0xb4176	@ 000b40b4 5fe0
.org 0xb40b6
	.byte 0x00	@ 000b40b6 data
.org 0xb40b7
	.byte 0x00	@ 000b40b7 data
.org 0xb40b8
	.byte 0x00,0x00,0xff,0xff	@ 000b40b8 data
.org 0xb40bc
	.byte 0x40,0xdb,0x85,0x08	@ 000b40bc data
.org 0xb40c0
	adds r0, r4, #0	@ 000b40c0 201c
.org 0xb40c2
	adds r0, #192	@ 000b40c2 c030
.org 0xb40c4
	ldr r6, [r0, #0]	@ 000b40c4 0668
.org 0xb40c6
	adds r5, r0, #0	@ 000b40c6 051c
.org 0xb40c8
	cmp r6, #0	@ 000b40c8 002e
.org 0xb40ca
	bne.n 0xb40f8	@ 000b40ca 15d1
.org 0xb40cc
	ldr r0, [r2, #0]	@ 000b40cc 1068
.org 0xb40ce
	movs r1, #1	@ 000b40ce 0121
.org 0xb40d0
	ands r0, r1	@ 000b40d0 0840
.org 0xb40d2
	cmp r0, #0	@ 000b40d2 0028
.org 0xb40d4
	beq.n 0xb40f2	@ 000b40d4 0dd0
.org 0xb40d6
	ldr r2, [pc, #120]	@ 000b40d6 1e4a
.org 0xb40d8
	movs r0, #0	@ 000b40d8 0020
.org 0xb40da
	adds r1, r4, #0	@ 000b40da 211c
.org 0xb40dc
	bl 0x2adac	@ 000b40dc 76f766fe
.org 0xb40e0
	str r0, [r5, #0]	@ 000b40e0 2860
.org 0xb40e2
	cmp r0, #0	@ 000b40e2 0028
.org 0xb40e4
	beq.n 0xb4166	@ 000b40e4 3fd0
.org 0xb40e6
	adds r0, r4, #0	@ 000b40e6 201c
.org 0xb40e8
	adds r0, #116	@ 000b40e8 7430
.org 0xb40ea
	ldr r1, [pc, #104]	@ 000b40ea 1a49
.org 0xb40ec
	bl 0x5784	@ 000b40ec 51f74afb
.org 0xb40f0
	str r6, [r4, #96]	@ 000b40f0 2666
.org 0xb40f2
	ldr r0, [r5, #0]	@ 000b40f2 2868
.org 0xb40f4
	cmp r0, #0	@ 000b40f4 0028
.org 0xb40f6
	beq.n 0xb4166	@ 000b40f6 36d0
.org 0xb40f8
	ldr r1, [r4, #88]	@ 000b40f8 a16d
.org 0xb40fa
	ldr r0, [r4, #96]	@ 000b40fa 206e
.org 0xb40fc
	adds r1, r1, r0	@ 000b40fc 0918
.org 0xb40fe
	str r1, [r4, #88]	@ 000b40fe a165
.org 0xb4100
	adds r0, #64	@ 000b4100 4030
.org 0xb4102
	str r0, [r4, #96]	@ 000b4102 2066
.org 0xb4104
	ldr r0, [r4, #84]	@ 000b4104 606d
.org 0xb4106
	bl 0x8534	@ 000b4106 54f715fa
.org 0xb410a
	adds r1, r0, #0	@ 000b410a 011c
.org 0xb410c
	ldr r0, [r4, #88]	@ 000b410c a06d
.org 0xb410e
	cmp r0, r1	@ 000b410e 8842
.org 0xb4110
	ble.n 0xb4118	@ 000b4110 02dd
.org 0xb4112
	str r1, [r4, #88]	@ 000b4112 a165
.org 0xb4114
	movs r0, #0	@ 000b4114 0020
.org 0xb4116
	str r0, [r4, #96]	@ 000b4116 2066
.org 0xb4118
	ldr r0, [r5, #0]	@ 000b4118 2868
.org 0xb411a
	bl 0x2b3e4	@ 000b411a 77f763f9
.org 0xb411e
	cmp r0, #0	@ 000b411e 0028
.org 0xb4120
	bne.n 0xb4158	@ 000b4120 1ad1
.org 0xb4122
	ldrb r0, [r4, #30]	@ 000b4122 a07f
.org 0xb4124
	lsls r0, r0, #8	@ 000b4124 0002
.org 0xb4126
	adds r1, r4, #0	@ 000b4126 211c
.org 0xb4128
	adds r1, #112	@ 000b4128 7031
.org 0xb412a
	ldrb r1, [r1, #0]	@ 000b412a 0978
.org 0xb412c
	orrs r1, r0	@ 000b412c 0143
.org 0xb412e
	adds r0, r4, #0	@ 000b412e 201c
.org 0xb4130
	adds r0, #113	@ 000b4130 7130
.org 0xb4132
	movs r2, #0	@ 000b4132 0022
.org 0xb4134
	ldrsb r2, [r0, r2]	@ 000b4134 8256
.org 0xb4136
	lsls r2, r2, #16	@ 000b4136 1204
.org 0xb4138
	lsrs r2, r2, #16	@ 000b4138 120c
.org 0xb413a
	adds r3, r1, #1	@ 000b413a 4b1c
.org 0xb413c
	lsls r3, r3, #16	@ 000b413c 1b04
.org 0xb413e
	lsrs r3, r3, #16	@ 000b413e 1b0c
.org 0xb4140
	adds r0, r4, #0	@ 000b4140 201c
.org 0xb4142
	bl 0x1cfc8	@ 000b4142 68f741ff
.org 0xb4146
	adds r0, r4, #0	@ 000b4146 201c
.org 0xb4148
	bl 0x1cff0	@ 000b4148 68f752ff
.org 0xb414c
	b.n 0xb4176	@ 000b414c 13e0
.org 0xb414e
	.byte 0x00	@ 000b414e data
.org 0xb414f
	.byte 0x00	@ 000b414f data
.org 0xb4150
	.byte 0x44,0x39,0x86,0x08	@ 000b4150 data
.org 0xb4154
	.byte 0xa0,0x38,0x86,0x08	@ 000b4154 data
.org 0xb4158
	adds r0, r4, #0	@ 000b4158 201c
.org 0xb415a
	adds r0, #116	@ 000b415a 7430
.org 0xb415c
	ldr r1, [pc, #28]	@ 000b415c 0749
.org 0xb415e
	bl 0x5784	@ 000b415e 51f711fb
.org 0xb4162
	movs r0, #0	@ 000b4162 0020
.org 0xb4164
	str r0, [r5, #0]	@ 000b4164 2860
.org 0xb4166
	ldr r0, [pc, #24]	@ 000b4166 0648
