@ FUN_081240fc  entry 0x081240fc  size 210
.thumb
.org 0x1240fc
FUN_081240fc:
	push {r4, r5, r6, lr}	@ 001240fc 70b5
.org 0x1240fe
	adds r5, r0, #0	@ 001240fe 051c
.org 0x124100
	ldr r1, [pc, #48]	@ 00124100 0c49
.org 0x124102
	ldr r0, [pc, #52]	@ 00124102 0d48
.org 0x124104
	adds r4, r5, r0	@ 00124104 2c18
.org 0x124106
	ldrb r0, [r4, #24]	@ 00124106 207e
.org 0x124108
	lsls r0, r0, #2	@ 00124108 8000
.org 0x12410a
	adds r0, r0, r1	@ 0012410a 4018
.org 0x12410c
	ldr r1, [r0, #0]	@ 0012410c 0168
.org 0x12410e
	adds r0, r5, #0	@ 0012410e 281c
.org 0x124110
	bl 0x128f80	@ 00124110 04f036ff
.org 0x124114
	adds r6, r0, #0	@ 00124114 061c
.org 0x124116
	ldr r0, [r4, #0]	@ 00124116 2068
.org 0x124118
	adds r0, #164	@ 00124118 a430
.org 0x12411a
	movs r1, #16	@ 0012411a 1021
.org 0x12411c
	strh r1, [r0, #0]	@ 0012411c 0180
.org 0x12411e
	ldr r1, [r4, #12]	@ 0012411e e168
.org 0x124120
	ldr r2, [r4, #8]	@ 00124120 a268
.org 0x124122
	cmp r1, r2	@ 00124122 9142
.org 0x124124
	bge.n 0x124146	@ 00124124 0fda
.org 0x124126
	subs r0, r2, r1	@ 00124126 501a
.org 0x124128
	cmp r0, #9	@ 00124128 0928
.org 0x12412a
	bgt.n 0x12413c	@ 0012412a 07dc
.org 0x12412c
	adds r0, r1, #1	@ 0012412c 481c
.org 0x12412e
	str r0, [r4, #12]	@ 0012412e e060
.org 0x124130
	b.n 0x124146	@ 00124130 09e0
.org 0x124132
	.byte 0x00	@ 00124132 data
.org 0x124133
	.byte 0x00	@ 00124133 data
.org 0x124134
	.byte 0xd0,0x23,0x88,0x08	@ 00124134 data
.org 0x124138
	.byte 0xcc,0x0d,0x00,0x00	@ 00124138 data
.org 0x12413c
	adds r0, r1, #2	@ 0012413c 881c
.org 0x12413e
	str r0, [r4, #12]	@ 0012413e e060
.org 0x124140
	cmp r0, r2	@ 00124140 9042
.org 0x124142
	ble.n 0x124146	@ 00124142 00dd
.org 0x124144
	str r2, [r4, #12]	@ 00124144 e260
.org 0x124146
	ldr r0, [pc, #144]	@ 00124146 2448
.org 0x124148
	adds r4, r5, r0	@ 00124148 2c18
.org 0x12414a
	ldr r0, [r4, #16]	@ 0012414a 2069
.org 0x12414c
	ldr r1, [r4, #8]	@ 0012414c a168
.org 0x12414e
	cmp r0, r1	@ 0012414e 8842
.org 0x124150
	bge.n 0x124154	@ 00124150 00da
.org 0x124152
	str r1, [r4, #16]	@ 00124152 2161
.org 0x124154
	ldr r0, [pc, #132]	@ 00124154 2148
.org 0x124156
	movs r1, #1	@ 00124156 0121
.org 0x124158
	movs r2, #0	@ 00124158 0022
.org 0x12415a
	bl 0x10da2c	@ 0012415a e9f767fc
.org 0x12415e
	ldr r0, [r4, #12]	@ 0012415e e068
.org 0x124160
	movs r1, #11	@ 00124160 0b21
.org 0x124162
	movs r2, #0	@ 00124162 0022
.org 0x124164
	bl 0x10dae0	@ 00124164 e9f7bcfc
.org 0x124168
	ldr r0, [pc, #116]	@ 00124168 1d48
.org 0x12416a
	movs r1, #15	@ 0012416a 0f21
.org 0x12416c
	movs r2, #0	@ 0012416c 0022
.org 0x12416e
	bl 0x10da2c	@ 0012416e e9f75dfc
.org 0x124172
	ldr r0, [r4, #16]	@ 00124172 2069
.org 0x124174
	movs r1, #28	@ 00124174 1c21
.org 0x124176
	movs r2, #0	@ 00124176 0022
.org 0x124178
	bl 0x10dae0	@ 00124178 e9f7b2fc
.org 0x12417c
	ldr r0, [pc, #100]	@ 0012417c 1948
.org 0x12417e
	movs r1, #9	@ 0012417e 0921
.org 0x124180
	movs r2, #18	@ 00124180 1222
.org 0x124182
	bl 0x10da2c	@ 00124182 e9f753fc
.org 0x124186
	ldr r0, [r4, #20]	@ 00124186 6069
.org 0x124188
	movs r1, #60	@ 00124188 3c21
.org 0x12418a
	bl 0x128fb8	@ 0012418a 04f015ff
.org 0x12418e
	movs r1, #15	@ 0012418e 0f21
.org 0x124190
	movs r2, #18	@ 00124190 1222
.org 0x124192
	bl 0x10dae0	@ 00124192 e9f7a5fc
.org 0x124196
	ldr r0, [pc, #80]	@ 00124196 1448
.org 0x124198
	movs r1, #16	@ 00124198 1021
.org 0x12419a
	movs r2, #18	@ 0012419a 1222
.org 0x12419c
	bl 0x10da2c	@ 0012419c e9f746fc
.org 0x1241a0
	ldr r0, [r4, #20]	@ 001241a0 6069
.org 0x1241a2
	movs r1, #60	@ 001241a2 3c21
.org 0x1241a4
	bl 0x129050	@ 001241a4 04f054ff
.org 0x1241a8
	movs r1, #166	@ 001241a8 a621
.org 0x1241aa
	muls r0, r1	@ 001241aa 4843
.org 0x1241ac
	movs r1, #100	@ 001241ac 6421
.org 0x1241ae
	bl 0x128fb8	@ 001241ae 04f003ff
.org 0x1241b2
	adds r4, r0, #0	@ 001241b2 041c
.org 0x1241b4
	lsls r4, r4, #24	@ 001241b4 2406
.org 0x1241b6
	lsrs r4, r4, #24	@ 001241b6 240e
.org 0x1241b8
	adds r0, r4, #0	@ 001241b8 201c
.org 0x1241ba
	movs r1, #18	@ 001241ba 1221
.org 0x1241bc
	movs r2, #18	@ 001241bc 1222
.org 0x1241be
	bl 0x10dae0	@ 001241be e9f78ffc
.org 0x1241c2
	cmp r4, #9	@ 001241c2 092c
.org 0x1241c4
	bhi.n 0x1241d0	@ 001241c4 04d8
.org 0x1241c6
	movs r0, #0	@ 001241c6 0020
.org 0x1241c8
	movs r1, #17	@ 001241c8 1121
.org 0x1241ca
	movs r2, #18	@ 001241ca 1222
.org 0x1241cc
	bl 0x10dae0	@ 001241cc e9f788fc
