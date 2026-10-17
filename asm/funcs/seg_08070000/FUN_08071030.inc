@ FUN_08071030  entry 0x08071030  size 454
.thumb
.org 0x71030
FUN_08071030:
	push {r4, r5, r6, r7, lr}	@ 00071030 f0b5
.org 0x71032
	mov r7, r8	@ 00071032 4746
.org 0x71034
	push {r7}	@ 00071034 80b4
.org 0x71036
	sub sp, #24	@ 00071036 86b0
.org 0x71038
	adds r6, r0, #0	@ 00071038 061c
.org 0x7103a
	ldr r1, [pc, #248]	@ 0007103a 3e49
.org 0x7103c
	mov r0, sp	@ 0007103c 6846
.org 0x7103e
	movs r2, #6	@ 0007103e 0622
.org 0x71040
	bl 0x129258	@ 00071040 b8f00af9
.org 0x71044
	add r0, sp, #8	@ 00071044 02a8
.org 0x71046
	mov r8, r0	@ 00071046 8046
.org 0x71048
	ldr r1, [pc, #236]	@ 00071048 3b49
.org 0x7104a
	movs r2, #6	@ 0007104a 0622
.org 0x7104c
	bl 0x129258	@ 0007104c b8f004f9
.org 0x71050
	add r5, sp, #16	@ 00071050 04ad
.org 0x71052
	ldr r1, [pc, #232]	@ 00071052 3a49
.org 0x71054
	adds r0, r5, #0	@ 00071054 281c
.org 0x71056
	movs r2, #6	@ 00071056 0622
.org 0x71058
	bl 0x129258	@ 00071058 b8f0fef8
.org 0x7105c
	ldrb r0, [r6, #10]	@ 0007105c b07a
.org 0x7105e
	lsrs r7, r0, #4	@ 0007105e 0709
.org 0x71060
	movs r0, #1	@ 00071060 0120
.org 0x71062
	ands r7, r0	@ 00071062 0740
.org 0x71064
	adds r0, r6, #0	@ 00071064 301c
.org 0x71066
	adds r0, #195	@ 00071066 c330
.org 0x71068
	ldrb r4, [r0, #0]	@ 00071068 0478
.org 0x7106a
	ldrb r0, [r6, #15]	@ 0007106a f07b
.org 0x7106c
	cmp r0, #0	@ 0007106c 0028
.org 0x7106e
	bne.n 0x710a4	@ 0007106e 19d1
.org 0x71070
	adds r0, r6, #0	@ 00071070 301c
.org 0x71072
	movs r1, #5	@ 00071072 0521
.org 0x71074
	bl 0x736c4	@ 00071074 02f026fb
.org 0x71078
	lsls r1, r4, #1	@ 00071078 6100
.org 0x7107a
	mov r2, sp	@ 0007107a 6a46
.org 0x7107c
	adds r0, r2, r1	@ 0007107c 5018
.org 0x7107e
	movs r3, #0	@ 0007107e 0023
.org 0x71080
	ldrsh r2, [r0, r3]	@ 00071080 c25e
.org 0x71082
	lsls r0, r7, #1	@ 00071082 7800
.org 0x71084
	subs r0, #1	@ 00071084 0138
.org 0x71086
	muls r0, r2	@ 00071086 5043
.org 0x71088
	str r0, [r6, #92]	@ 00071088 f065
.org 0x7108a
	mov r2, r8	@ 0007108a 4246
.org 0x7108c
	adds r0, r2, r1	@ 0007108c 5018
.org 0x7108e
	movs r3, #0	@ 0007108e 0023
.org 0x71090
	ldrsh r0, [r0, r3]	@ 00071090 c05e
.org 0x71092
	negs r0, r0	@ 00071092 4042
.org 0x71094
	str r0, [r6, #96]	@ 00071094 3066
.org 0x71096
	adds r1, r5, r1	@ 00071096 6918
.org 0x71098
	movs r2, #0	@ 00071098 0022
.org 0x7109a
	ldrsh r0, [r1, r2]	@ 0007109a 885e
.org 0x7109c
	str r0, [r6, #104]	@ 0007109c b066
.org 0x7109e
	ldrb r0, [r6, #15]	@ 0007109e f07b
.org 0x710a0
	adds r0, #1	@ 000710a0 0130
.org 0x710a2
	strb r0, [r6, #15]	@ 000710a2 f073
.org 0x710a4
	adds r0, r6, #0	@ 000710a4 301c
.org 0x710a6
	bl 0x1cff0	@ 000710a6 abf7a3ff
.org 0x710aa
	adds r0, r6, #0	@ 000710aa 301c
.org 0x710ac
	adds r0, #116	@ 000710ac 7430
.org 0x710ae
	ldr r4, [pc, #144]	@ 000710ae 244c
.org 0x710b0
	ldr r3, [pc, #144]	@ 000710b0 244b
.org 0x710b2
	adds r1, r6, #0	@ 000710b2 311c
.org 0x710b4
	adds r1, #184	@ 000710b4 b831
.org 0x710b6
	ldrb r2, [r1, #0]	@ 000710b6 0a78
.org 0x710b8
	lsls r1, r2, #1	@ 000710b8 5100
.org 0x710ba
	adds r1, r1, r3	@ 000710ba c918
.org 0x710bc
	ldrh r1, [r1, #0]	@ 000710bc 0988
.org 0x710be
	lsls r1, r1, #2	@ 000710be 8900
.org 0x710c0
	adds r1, r1, r4	@ 000710c0 0919
.org 0x710c2
	adds r3, r6, #0	@ 000710c2 331c
.org 0x710c4
	adds r3, #113	@ 000710c4 7133
.org 0x710c6
	movs r5, #0	@ 000710c6 0025
.org 0x710c8
	ldrsb r5, [r3, r5]	@ 000710c8 5d57
.org 0x710ca
	ldr r1, [r1, #0]	@ 000710ca 0968
.org 0x710cc
	lsls r3, r5, #2	@ 000710cc ab00
.org 0x710ce
	adds r3, r3, r1	@ 000710ce 5b18
.org 0x710d0
	ldr r4, [pc, #116]	@ 000710d0 1d4c
.org 0x710d2
	adds r1, r6, #0	@ 000710d2 311c
.org 0x710d4
	adds r1, #185	@ 000710d4 b931
.org 0x710d6
	ldrb r1, [r1, #0]	@ 000710d6 0978
.org 0x710d8
	lsls r1, r1, #2	@ 000710d8 8900
.org 0x710da
	adds r1, r1, r4	@ 000710da 0919
.org 0x710dc
	ldr r1, [r1, #0]	@ 000710dc 0968
.org 0x710de
	lsls r2, r2, #2	@ 000710de 9200
.org 0x710e0
	adds r2, r2, r1	@ 000710e0 5218
.org 0x710e2
	ldr r1, [r2, #0]	@ 000710e2 1168
.org 0x710e4
	adds r1, r1, r5	@ 000710e4 4919
.org 0x710e6
	ldrb r1, [r1, #0]	@ 000710e6 0978
.org 0x710e8
	lsls r2, r1, #1	@ 000710e8 4a00
.org 0x710ea
	adds r2, r2, r1	@ 000710ea 5218
.org 0x710ec
	lsls r2, r2, #3	@ 000710ec d200
.org 0x710ee
	ldr r1, [r3, #0]	@ 000710ee 1968
.org 0x710f0
	adds r1, r1, r2	@ 000710f0 8918
.org 0x710f2
	bl 0x5784	@ 000710f2 94f747fb
.org 0x710f6
	adds r0, r6, #0	@ 000710f6 301c
.org 0x710f8
	adds r0, #115	@ 000710f8 7330
.org 0x710fa
	ldrb r0, [r0, #0]	@ 000710fa 0078
.org 0x710fc
	cmp r0, #3	@ 000710fc 0328
.org 0x710fe
	bne.n 0x711ee	@ 000710fe 76d1
.org 0x71100
	ldrb r0, [r6, #15]	@ 00071100 f07b
.org 0x71102
	cmp r0, #1	@ 00071102 0128
.org 0x71104
	bne.n 0x71114	@ 00071104 06d1
.org 0x71106
	movs r0, #147	@ 00071106 9320
.org 0x71108
	lsls r0, r0, #1	@ 00071108 4000
.org 0x7110a
	bl 0x2b10	@ 0007110a 91f701fd
.org 0x7110e
	ldrb r0, [r6, #15]	@ 0007110e f07b
.org 0x71110
	adds r0, #1	@ 00071110 0130
.org 0x71112
	strb r0, [r6, #15]	@ 00071112 f073
.org 0x71114
	ldr r0, [r6, #88]	@ 00071114 b06d
.org 0x71116
	ldr r1, [r6, #96]	@ 00071116 316e
.org 0x71118
	adds r0, r0, r1	@ 00071118 4018
.org 0x7111a
	str r0, [r6, #88]	@ 0007111a b065
.org 0x7111c
	adds r0, r6, #0	@ 0007111c 301c
.org 0x7111e
	bl 0x737e8	@ 0007111e 02f063fb
.org 0x71122
	cmp r0, #0	@ 00071122 0028
.org 0x71124
	beq.n 0x7114c	@ 00071124 12d0
.org 0x71126
	adds r0, r6, #0	@ 00071126 301c
.org 0x71128
	bl 0x739cc	@ 00071128 02f050fc
.org 0x7112c
	movs r0, #0	@ 0007112c 0020
.org 0x7112e
	str r0, [r6, #96]	@ 0007112e 3066
.org 0x71130
	b.n 0x7115e	@ 00071130 15e0
.org 0x71132
	.byte 0x00	@ 00071132 data
.org 0x71133
	.byte 0x00	@ 00071133 data
.org 0x71134
	.byte 0x50,0x99,0x12,0x08	@ 00071134 data
.org 0x71138
	.byte 0x56,0x99,0x12,0x08	@ 00071138 data
.org 0x7113c
	.byte 0x5c,0x99,0x12,0x08	@ 0007113c data
.org 0x71140
	.byte 0x08,0xcb,0x85,0x08	@ 00071140 data
.org 0x71144
	.byte 0x04,0xcc,0x85,0x08	@ 00071144 data
.org 0x71148
	.byte 0xfc,0xcb,0x85,0x08	@ 00071148 data
.org 0x7114c
	ldr r0, [r6, #96]	@ 0007114c 306e
.org 0x7114e
	ldr r1, [r6, #104]	@ 0007114e b16e
.org 0x71150
	adds r0, r0, r1	@ 00071150 4018
.org 0x71152
	str r0, [r6, #96]	@ 00071152 3066
.org 0x71154
	movs r1, #224	@ 00071154 e021
.org 0x71156
	lsls r1, r1, #3	@ 00071156 c900
.org 0x71158
	cmp r0, r1	@ 00071158 8842
.org 0x7115a
	ble.n 0x7115e	@ 0007115a 00dd
.org 0x7115c
	str r1, [r6, #96]	@ 0007115c 3166
.org 0x7115e
	ldr r0, [r6, #84]	@ 0007115e 706d
.org 0x71160
	ldr r1, [r6, #92]	@ 00071160 f16d
.org 0x71162
	adds r0, r0, r1	@ 00071162 4018
.org 0x71164
	str r0, [r6, #84]	@ 00071164 7065
.org 0x71166
	cmp r7, #0	@ 00071166 002f
.org 0x71168
	bne.n 0x7119c	@ 00071168 18d1
.org 0x7116a
	adds r0, r6, #0	@ 0007116a 301c
.org 0x7116c
	bl 0x7371c	@ 0007116c 02f0d6fa
.org 0x71170
	cmp r0, #0	@ 00071170 0028
.org 0x71172
	beq.n 0x711f4	@ 00071172 3fd0
.org 0x71174
	adds r0, r6, #0	@ 00071174 301c
.org 0x71176
	bl 0x738b4	@ 00071176 02f09dfb
.org 0x7117a
	movs r7, #1	@ 0007117a 0127
.org 0x7117c
	adds r0, r6, #0	@ 0007117c 301c
.org 0x7117e
	adds r0, #76	@ 0007117e 4c30
.org 0x71180
	strb r7, [r0, #0]	@ 00071180 0770
.org 0x71182
	adds r2, r6, #0	@ 00071182 321c
.org 0x71184
	adds r2, #74	@ 00071184 4a32
.org 0x71186
	ldrb r1, [r2, #0]	@ 00071186 1178
.org 0x71188
	movs r0, #17	@ 00071188 1120
.org 0x7118a
	negs r0, r0	@ 0007118a 4042
.org 0x7118c
	ands r0, r1	@ 0007118c 0840
.org 0x7118e
	movs r1, #16	@ 0007118e 1021
.org 0x71190
	orrs r0, r1	@ 00071190 0843
.org 0x71192
	strb r0, [r2, #0]	@ 00071192 1070
.org 0x71194
	ldrb r0, [r6, #10]	@ 00071194 b07a
.org 0x71196
	orrs r1, r0	@ 00071196 0143
.org 0x71198
	strb r1, [r6, #10]	@ 00071198 b172
.org 0x7119a
	b.n 0x711e6	@ 0007119a 24e0
.org 0x7119c
	adds r0, r6, #0	@ 0007119c 301c
.org 0x7119e
	bl 0x73784	@ 0007119e 02f0f1fa
.org 0x711a2
	cmp r0, #0	@ 000711a2 0028
.org 0x711a4
	beq.n 0x711f4	@ 000711a4 26d0
.org 0x711a6
	adds r0, r6, #0	@ 000711a6 301c
.org 0x711a8
	bl 0x73940	@ 000711a8 02f0cafb
.org 0x711ac
	adds r7, #1	@ 000711ac 0137
.org 0x711ae
	movs r0, #1	@ 000711ae 0120
.org 0x711b0
	ands r7, r0	@ 000711b0 0740
.org 0x711b2
	movs r3, #1	@ 000711b2 0123
.org 0x711b4
	adds r1, r7, #0	@ 000711b4 391c
.org 0x711b6
	ands r1, r3	@ 000711b6 1940
.org 0x711b8
	adds r0, r6, #0	@ 000711b8 301c
.org 0x711ba
	adds r0, #76	@ 000711ba 4c30
.org 0x711bc
	strb r1, [r0, #0]	@ 000711bc 0170
.org 0x711be
	adds r4, r6, #0	@ 000711be 341c
.org 0x711c0
	adds r4, #74	@ 000711c0 4a34
.org 0x711c2
	lsls r1, r1, #4	@ 000711c2 0901
.org 0x711c4
	ldrb r2, [r4, #0]	@ 000711c4 2278
.org 0x711c6
	movs r0, #17	@ 000711c6 1120
.org 0x711c8
	negs r0, r0	@ 000711c8 4042
.org 0x711ca
	ands r0, r2	@ 000711ca 1040
.org 0x711cc
	orrs r0, r1	@ 000711cc 0843
.org 0x711ce
	strb r0, [r4, #0]	@ 000711ce 2070
.org 0x711d0
	ands r7, r3	@ 000711d0 1f40
.org 0x711d2
	cmp r7, #0	@ 000711d2 002f
.org 0x711d4
	beq.n 0x711de	@ 000711d4 03d0
.org 0x711d6
	ldrb r0, [r6, #10]	@ 000711d6 b07a
.org 0x711d8
	movs r1, #16	@ 000711d8 1021
.org 0x711da
	orrs r0, r1	@ 000711da 0843
.org 0x711dc
	b.n 0x711e4	@ 000711dc 02e0
.org 0x711de
	ldrb r1, [r6, #10]	@ 000711de b17a
.org 0x711e0
	movs r0, #239	@ 000711e0 ef20
.org 0x711e2
	ands r0, r1	@ 000711e2 0840
.org 0x711e4
	strb r0, [r6, #10]	@ 000711e4 b072
.org 0x711e6
	ldr r0, [r6, #92]	@ 000711e6 f06d
.org 0x711e8
	negs r0, r0	@ 000711e8 4042
.org 0x711ea
	str r0, [r6, #92]	@ 000711ea f065
.org 0x711ec
	b.n 0x711f4	@ 000711ec 02e0
.org 0x711ee
	adds r0, r6, #0	@ 000711ee 301c
.org 0x711f0
	bl 0x73a68	@ 000711f0 02f03afc
.org 0x711f4
	ldr r0, [r6, #96]	@ 000711f4 306e
