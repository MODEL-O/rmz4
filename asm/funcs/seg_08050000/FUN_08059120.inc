@ FUN_08059120  entry 0x08059120  size 162
.thumb
.org 0x59120
FUN_08059120:
	push {r4, r5, lr}	@ 00059120 30b5
.org 0x59122
	adds r4, r0, #0	@ 00059122 041c
.org 0x59124
	ldrb r0, [r4, #10]	@ 00059124 a07a
.org 0x59126
	lsrs r5, r0, #4	@ 00059126 0509
.org 0x59128
	movs r0, #1	@ 00059128 0120
.org 0x5912a
	ands r5, r0	@ 0005912a 0540
.org 0x5912c
	ldrb r0, [r4, #15]	@ 0005912c e07b
.org 0x5912e
	cmp r0, #0	@ 0005912e 0028
.org 0x59130
	bne.n 0x59158	@ 00059130 12d1
.org 0x59132
	ldr r1, [pc, #144]	@ 00059132 2449
.org 0x59134
	adds r0, r4, #0	@ 00059134 201c
.org 0x59136
	bl 0x1cf00	@ 00059136 c3f7e3fe
.org 0x5913a
	adds r0, r4, #0	@ 0005913a 201c
.org 0x5913c
	bl 0x5977c	@ 0005913c 00f01efb
.org 0x59140
	adds r2, r0, #0	@ 00059140 021c
.org 0x59142
	ldr r1, [pc, #132]	@ 00059142 2149
.org 0x59144
	lsls r0, r2, #1	@ 00059144 5000
.org 0x59146
	adds r0, r0, r1	@ 00059146 4018
.org 0x59148
	ldrh r1, [r0, #0]	@ 00059148 0188
.org 0x5914a
	lsls r0, r5, #1	@ 0005914a 6800
.org 0x5914c
	subs r0, #1	@ 0005914c 0138
.org 0x5914e
	muls r0, r1	@ 0005914e 4843
.org 0x59150
	str r0, [r4, #92]	@ 00059150 e065
.org 0x59152
	ldrb r0, [r4, #15]	@ 00059152 e07b
.org 0x59154
	adds r0, #1	@ 00059154 0130
.org 0x59156
	strb r0, [r4, #15]	@ 00059156 e073
.org 0x59158
	adds r0, r4, #0	@ 00059158 201c
.org 0x5915a
	bl 0x1cff0	@ 0005915a c3f749ff
.org 0x5915e
	adds r0, r4, #0	@ 0005915e 201c
.org 0x59160
	adds r0, #116	@ 00059160 7430
.org 0x59162
	ldr r3, [pc, #104]	@ 00059162 1a4b
.org 0x59164
	ldrb r1, [r4, #30]	@ 00059164 a17f
.org 0x59166
	lsls r1, r1, #8	@ 00059166 0902
.org 0x59168
	adds r2, r4, #0	@ 00059168 221c
.org 0x5916a
	adds r2, #112	@ 0005916a 7032
.org 0x5916c
	ldrb r2, [r2, #0]	@ 0005916c 1278
.org 0x5916e
	orrs r1, r2	@ 0005916e 1143
.org 0x59170
	ldr r2, [pc, #92]	@ 00059170 174a
.org 0x59172
	adds r1, r1, r2	@ 00059172 8918
.org 0x59174
	lsls r1, r1, #2	@ 00059174 8900
.org 0x59176
	adds r1, r1, r3	@ 00059176 c918
.org 0x59178
	adds r2, r4, #0	@ 00059178 221c
.org 0x5917a
	adds r2, #113	@ 0005917a 7132
.org 0x5917c
	ldrb r2, [r2, #0]	@ 0005917c 1278
.org 0x5917e
	lsls r2, r2, #24	@ 0005917e 1206
.org 0x59180
	asrs r2, r2, #24	@ 00059180 1216
.org 0x59182
	ldr r1, [r1, #0]	@ 00059182 0968
.org 0x59184
	lsls r2, r2, #2	@ 00059184 9200
.org 0x59186
	adds r2, r2, r1	@ 00059186 5218
.org 0x59188
	ldr r1, [r2, #0]	@ 00059188 1168
.org 0x5918a
	ldrb r2, [r1, #0]	@ 0005918a 0a78
.org 0x5918c
	lsls r1, r2, #1	@ 0005918c 5100
.org 0x5918e
	adds r1, r1, r2	@ 0005918e 8918
.org 0x59190
	lsls r1, r1, #3	@ 00059190 c900
.org 0x59192
	ldr r2, [pc, #64]	@ 00059192 104a
.org 0x59194
	adds r1, r1, r2	@ 00059194 8918
.org 0x59196
	bl 0x5784	@ 00059196 acf7f5fa
.org 0x5919a
	ldr r2, [r4, #84]	@ 0005919a 626d
.org 0x5919c
	ldr r0, [r4, #92]	@ 0005919c e06d
.org 0x5919e
	adds r2, r2, r0	@ 0005919e 1218
.org 0x591a0
	str r2, [r4, #84]	@ 000591a0 6265
.org 0x591a2
	adds r0, r4, #0	@ 000591a2 201c
.org 0x591a4
	adds r0, #204	@ 000591a4 cc30
.org 0x591a6
	ldr r0, [r0, #0]	@ 000591a6 0068
.org 0x591a8
	subs r0, r2, r0	@ 000591a8 101a
.org 0x591aa
	ldr r1, [pc, #44]	@ 000591aa 0b49
.org 0x591ac
	adds r0, r0, r1	@ 000591ac 4018
.org 0x591ae
	movs r1, #200	@ 000591ae c821
.org 0x591b0
	lsls r1, r1, #9	@ 000591b0 4902
.org 0x591b2
	cmp r0, r1	@ 000591b2 8842
.org 0x591b4
	bhi.n 0x591bc	@ 000591b4 02d8
.org 0x591b6
	adds r0, r4, #0	@ 000591b6 201c
.org 0x591b8
	bl 0x59548	@ 000591b8 00f0c6f9
.org 0x591bc
	pop {r4, r5}	@ 000591bc 30bc
.org 0x591be
	pop {r0}	@ 000591be 01bc
.org 0x591c0
	bx r0	@ 000591c0 0047
