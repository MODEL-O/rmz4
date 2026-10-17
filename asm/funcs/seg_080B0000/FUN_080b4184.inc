@ FUN_080b4184  entry 0x080b4184  size 202
.thumb
.org 0xb4184
FUN_080b4184:
	push {r4, r5, lr}	@ 000b4184 30b5
.org 0xb4186
	sub sp, #8	@ 000b4186 82b0
.org 0xb4188
	adds r4, r0, #0	@ 000b4188 041c
.org 0xb418a
	ldrb r0, [r4, #14]	@ 000b418a a07b
.org 0xb418c
	cmp r0, #0	@ 000b418c 0028
.org 0xb418e
	bne.n 0xb423a	@ 000b418e 54d1
.org 0xb4190
	adds r0, r4, #0	@ 000b4190 201c
.org 0xb4192
	adds r0, #184	@ 000b4192 b830
.org 0xb4194
	ldrb r0, [r0, #0]	@ 000b4194 0078
.org 0xb4196
	cmp r0, #0	@ 000b4196 0028
.org 0xb4198
	beq.n 0xb41ce	@ 000b4198 19d0
.org 0xb419a
	cmp r0, #3	@ 000b419a 0328
.org 0xb419c
	bne.n 0xb41b4	@ 000b419c 0ad1
.org 0xb419e
	adds r0, r4, #0	@ 000b419e 201c
.org 0xb41a0
	movs r1, #0	@ 000b41a0 0021
.org 0xb41a2
	movs r2, #0	@ 000b41a2 0022
.org 0xb41a4
	bl 0xcee84	@ 000b41a4 1af06efe
.org 0xb41a8
	adds r0, r4, #0	@ 000b41a8 201c
.org 0xb41aa
	movs r1, #0	@ 000b41aa 0021
.org 0xb41ac
	movs r2, #1	@ 000b41ac 0122
.org 0xb41ae
	bl 0xcee84	@ 000b41ae 1af069fe
.org 0xb41b2
	b.n 0xb41ce	@ 000b41b2 0ce0
.org 0xb41b4
	cmp r0, #1	@ 000b41b4 0128
.org 0xb41b6
	bne.n 0xb41c4	@ 000b41b6 05d1
.org 0xb41b8
	adds r0, r4, #0	@ 000b41b8 201c
.org 0xb41ba
	movs r1, #0	@ 000b41ba 0021
.org 0xb41bc
	movs r2, #0	@ 000b41bc 0022
.org 0xb41be
	bl 0xcee84	@ 000b41be 1af061fe
.org 0xb41c2
	b.n 0xb41ce	@ 000b41c2 04e0
.org 0xb41c4
	adds r0, r4, #0	@ 000b41c4 201c
.org 0xb41c6
	movs r1, #0	@ 000b41c6 0021
.org 0xb41c8
	movs r2, #1	@ 000b41c8 0122
.org 0xb41ca
	bl 0xcee84	@ 000b41ca 1af05bfe
.org 0xb41ce
	adds r0, r4, #0	@ 000b41ce 201c
.org 0xb41d0
	adds r0, #189	@ 000b41d0 bd30
.org 0xb41d2
	ldrb r0, [r0, #0]	@ 000b41d2 0078
.org 0xb41d4
	cmp r0, #0	@ 000b41d4 0028
.org 0xb41d6
	beq.n 0xb41e2	@ 000b41d6 04d0
.org 0xb41d8
	movs r0, #2	@ 000b41d8 0220
.org 0xb41da
	strb r0, [r4, #13]	@ 000b41da 6073
.org 0xb41dc
	adds r5, r4, #0	@ 000b41dc 251c
.org 0xb41de
	adds r5, #140	@ 000b41de 8c35
.org 0xb41e0
	b.n 0xb421e	@ 000b41e0 1de0
.org 0xb41e2
	adds r1, r4, #0	@ 000b41e2 211c
.org 0xb41e4
	adds r1, #140	@ 000b41e4 8c31
.org 0xb41e6
	ldr r2, [r1, #0]	@ 000b41e6 0a68
.org 0xb41e8
	movs r0, #128	@ 000b41e8 8020
.org 0xb41ea
	lsls r0, r0, #9	@ 000b41ea 4002
.org 0xb41ec
	ands r2, r0	@ 000b41ec 0240
.org 0xb41ee
	adds r5, r1, #0	@ 000b41ee 0d1c
.org 0xb41f0
	cmp r2, #0	@ 000b41f0 002a
.org 0xb41f2
	beq.n 0xb421c	@ 000b41f2 13d0
.org 0xb41f4
	ldr r0, [r4, #84]	@ 000b41f4 606d
.org 0xb41f6
	str r0, [sp, #0]	@ 000b41f6 0090
.org 0xb41f8
	ldr r0, [r4, #88]	@ 000b41f8 a06d
.org 0xb41fa
	ldr r1, [pc, #28]	@ 000b41fa 0749
.org 0xb41fc
	adds r0, r0, r1	@ 000b41fc 4018
.org 0xb41fe
	str r0, [sp, #4]	@ 000b41fe 0190
.org 0xb4200
	movs r2, #128	@ 000b4200 8022
.org 0xb4202
	lsls r2, r2, #2	@ 000b4202 9200
.org 0xb4204
	adds r0, r4, #0	@ 000b4204 201c
.org 0xb4206
	adds r0, #188	@ 000b4206 bc30
.org 0xb4208
	ldrb r3, [r0, #0]	@ 000b4208 0378
.org 0xb420a
	movs r0, #0	@ 000b420a 0020
.org 0xb420c
	mov r1, sp	@ 000b420c 6946
.org 0xb420e
	bl 0xd0dc4	@ 000b420e 1cf0d9fd
.org 0xb4212
	movs r0, #1	@ 000b4212 0120
.org 0xb4214
	strb r0, [r4, #13]	@ 000b4214 6073
.org 0xb4216
	b.n 0xb421e	@ 000b4216 02e0
.org 0xb4218
	.byte 0x00,0xf8,0xff,0xff	@ 000b4218 data
.org 0xb421c
	strb r2, [r4, #13]	@ 000b421c 6273
.org 0xb421e
	movs r1, #0	@ 000b421e 0021
.org 0xb4220
	str r1, [r5, #0]	@ 000b4220 2960
.org 0xb4222
	adds r0, r4, #0	@ 000b4222 201c
.org 0xb4224
	adds r0, #144	@ 000b4224 9030
.org 0xb4226
	str r1, [r0, #0]	@ 000b4226 0160
.org 0xb4228
	adds r0, #4	@ 000b4228 0430
.org 0xb422a
	strb r1, [r0, #0]	@ 000b422a 0170
.org 0xb422c
	ldrb r1, [r4, #10]	@ 000b422c a17a
.org 0xb422e
	movs r0, #251	@ 000b422e fb20
.org 0xb4230
	ands r0, r1	@ 000b4230 0840
.org 0xb4232
	strb r0, [r4, #10]	@ 000b4232 a072
.org 0xb4234
	ldrb r0, [r4, #14]	@ 000b4234 a07b
.org 0xb4236
	adds r0, #1	@ 000b4236 0130
.org 0xb4238
	strb r0, [r4, #14]	@ 000b4238 a073
.org 0xb423a
	ldr r0, [pc, #24]	@ 000b423a 0648
.org 0xb423c
	ldrb r1, [r4, #13]	@ 000b423c 617b
.org 0xb423e
	lsls r1, r1, #2	@ 000b423e 8900
.org 0xb4240
	adds r1, r1, r0	@ 000b4240 0918
.org 0xb4242
	ldr r1, [r1, #0]	@ 000b4242 0968
.org 0xb4244
	adds r0, r4, #0	@ 000b4244 201c
.org 0xb4246
	bl 0x128f80	@ 000b4246 74f09bfe
.org 0xb424a
	add sp, #8	@ 000b424a 02b0
.org 0xb424c
	pop {r4, r5}	@ 000b424c 30bc
