@ FUN_080f4134  entry 0x080f4134  size 92
.thumb
.org 0xf4134
FUN_080f4134:
	push {r4, r5, r6, lr}	@ 000f4134 70b5
.org 0xf4136
	adds r6, r0, #0	@ 000f4136 061c
.org 0xf4138
	bl 0x1cd28	@ 000f4138 28f7f6fd
.org 0xf413c
	ldrb r1, [r6, #10]	@ 000f413c b17a
.org 0xf413e
	movs r0, #4	@ 000f413e 0420
.org 0xf4140
	movs r5, #0	@ 000f4140 0025
.org 0xf4142
	orrs r0, r1	@ 000f4142 0843
.org 0xf4144
	strb r0, [r6, #10]	@ 000f4144 b072
.org 0xf4146
	adds r4, r6, #0	@ 000f4146 341c
.org 0xf4148
	adds r4, #116	@ 000f4148 7434
.org 0xf414a
	ldr r1, [pc, #68]	@ 000f414a 1149
.org 0xf414c
	adds r2, r6, #0	@ 000f414c 321c
.org 0xf414e
	adds r2, #84	@ 000f414e 5432
.org 0xf4150
	adds r0, r4, #0	@ 000f4150 201c
.org 0xf4152
	movs r3, #28	@ 000f4152 1c23
.org 0xf4154
	bl 0x5760	@ 000f4154 11f704fb
.org 0xf4158
	str r6, [r4, #44]	@ 000f4158 e662
.org 0xf415a
	ldr r0, [pc, #56]	@ 000f415a 0e48
.org 0xf415c
	str r0, [r4, #36]	@ 000f415c 6062
.org 0xf415e
	ldr r1, [pc, #56]	@ 000f415e 0e49
.org 0xf4160
	adds r0, r6, #0	@ 000f4160 301c
.org 0xf4162
	bl 0x1cf00	@ 000f4162 28f7cdfe
.org 0xf4166
	adds r1, r6, #0	@ 000f4166 311c
.org 0xf4168
	adds r1, #37	@ 000f4168 2531
.org 0xf416a
	movs r0, #15	@ 000f416a 0f20
.org 0xf416c
	strb r0, [r1, #0]	@ 000f416c 0870
.org 0xf416e
	adds r1, #144	@ 000f416e 9031
.org 0xf4170
	strb r5, [r1, #0]	@ 000f4170 0d70
.org 0xf4172
	adds r0, r6, #0	@ 000f4172 301c
.org 0xf4174
	adds r0, #182	@ 000f4174 b630
.org 0xf4176
	strb r5, [r0, #0]	@ 000f4176 0570
.org 0xf4178
	ldrb r1, [r1, #0]	@ 000f4178 0978
.org 0xf417a
	subs r0, #146	@ 000f417a 9238
.org 0xf417c
	strb r1, [r0, #0]	@ 000f417c 0170
.org 0xf417e
	ldrb r0, [r6, #10]	@ 000f417e b07a
.org 0xf4180
	movs r1, #1	@ 000f4180 0121
.org 0xf4182
	orrs r0, r1	@ 000f4182 0843
.org 0xf4184
	movs r1, #2	@ 000f4184 0221
.org 0xf4186
	orrs r0, r1	@ 000f4186 0843
.org 0xf4188
	strb r0, [r6, #10]	@ 000f4188 b072
.org 0xf418a
	pop {r4, r5, r6}	@ 000f418a 70bc
.org 0xf418c
	pop {r0}	@ 000f418c 01bc
.org 0xf418e
	bx r0	@ 000f418e 0047
