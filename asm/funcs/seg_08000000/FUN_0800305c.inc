@ FUN_0800305c  entry 0x0800305c  size 454
.thumb
.org 0x305c
FUN_0800305c:
	push {r4, r5, r6, r7, lr}	@ 0000305c f0b5
.org 0x305e
	mov r7, sl	@ 0000305e 5746
.org 0x3060
	mov r6, r9	@ 00003060 4e46
.org 0x3062
	mov r5, r8	@ 00003062 4546
.org 0x3064
	push {r5, r6, r7}	@ 00003064 e0b4
.org 0x3066
	sub sp, #28	@ 00003066 87b0
.org 0x3068
	str r1, [sp, #0]	@ 00003068 0091
.org 0x306a
	adds r7, r0, #0	@ 0000306a 071c
.org 0x306c
	ldrb r1, [r7, #26]	@ 0000306c b97e
.org 0x306e
	lsls r1, r1, #2	@ 0000306e 8900
.org 0x3070
	ldr r2, [r7, #8]	@ 00003070 ba68
.org 0x3072
	adds r1, r2, r1	@ 00003072 5118
.org 0x3074
	ldrh r0, [r1, #0]	@ 00003074 0888
.org 0x3076
	adds r2, r2, r0	@ 00003076 1218
.org 0x3078
	str r2, [sp, #4]	@ 00003078 0192
.org 0x307a
	ldr r2, [pc, #424]	@ 0000307a 6a4a
.org 0x307c
	movs r3, #128	@ 0000307c 8023
.org 0x307e
	lsls r3, r3, #3	@ 0000307e db00
.org 0x3080
	adds r0, r2, r3	@ 00003080 d018
.org 0x3082
	ldr r4, [r0, #0]	@ 00003082 0468
.org 0x3084
	str r4, [sp, #8]	@ 00003084 0294
.org 0x3086
	subs r0, r0, r4	@ 00003086 001b
.org 0x3088
	lsrs r0, r0, #3	@ 00003088 c008
.org 0x308a
	ldrb r1, [r1, #2]	@ 0000308a 8978
.org 0x308c
	cmp r0, r1	@ 0000308c 8842
.org 0x308e
	bcs.n 0x3092	@ 0000308e 00d2
.org 0x3090
	b.n 0x3212	@ 00003090 bfe0
.org 0x3092
	str r1, [sp, #12]	@ 00003092 0391
.org 0x3094
	cmp r1, #0	@ 00003094 0029
.org 0x3096
	bne.n 0x309a	@ 00003096 00d1
.org 0x3098
	b.n 0x3206	@ 00003098 b5e0
.org 0x309a
	ldr r0, [r7, #12]	@ 0000309a f868
.org 0x309c
	str r0, [sp, #24]	@ 0000309c 0690
.org 0x309e
	ldrb r1, [r7, #24]	@ 0000309e 397e
.org 0x30a0
	ldrb r0, [r7, #25]	@ 000030a0 787e
.org 0x30a2
	eors r1, r0	@ 000030a2 4140
.org 0x30a4
	lsls r2, r1, #8	@ 000030a4 0a02
.org 0x30a6
	subs r2, r2, r1	@ 000030a6 521a
.org 0x30a8
	ldrb r0, [r7, #27]	@ 000030a8 f87e
.org 0x30aa
	eors r2, r0	@ 000030aa 4240
.org 0x30ac
	adds r2, r2, r1	@ 000030ac 5218
.org 0x30ae
	lsls r2, r2, #24	@ 000030ae 1206
.org 0x30b0
	lsrs r2, r2, #24	@ 000030b0 120e
.org 0x30b2
	ldr r1, [sp, #4]	@ 000030b2 0199
.org 0x30b4
	ldr r0, [r1, #0]	@ 000030b4 0868
.org 0x30b6
	lsls r1, r0, #16	@ 000030b6 0104
.org 0x30b8
	lsrs r1, r1, #30	@ 000030b8 890f
.org 0x30ba
	lsls r1, r1, #2	@ 000030ba 8900
.org 0x30bc
	lsls r0, r0, #18	@ 000030bc 8004
.org 0x30be
	lsrs r0, r0, #30	@ 000030be 800f
.org 0x30c0
	orrs r1, r0	@ 000030c0 0143
.org 0x30c2
	ldr r3, [sp, #4]	@ 000030c2 019b
.org 0x30c4
	movs r0, #2	@ 000030c4 0220
.org 0x30c6
	ldrsb r0, [r3, r0]	@ 000030c6 1856
.org 0x30c8
	lsls r0, r0, #8	@ 000030c8 0002
.org 0x30ca
	str r0, [sp, #16]	@ 000030ca 0490
.org 0x30cc
	lsls r1, r1, #1	@ 000030cc 4900
.org 0x30ce
	ldr r4, [pc, #344]	@ 000030ce 564c
.org 0x30d0
	adds r0, r1, r4	@ 000030d0 0819
.org 0x30d2
	movs r3, #0	@ 000030d2 0023
.org 0x30d4
	ldrsh r0, [r0, r3]	@ 000030d4 c05e
.org 0x30d6
	ldr r4, [sp, #16]	@ 000030d6 049c
.org 0x30d8
	adds r4, r4, r0	@ 000030d8 2418
.org 0x30da
	mov r9, r4	@ 000030da a146
.org 0x30dc
	ldr r0, [sp, #4]	@ 000030dc 0198
.org 0x30de
	movs r3, #3	@ 000030de 0323
.org 0x30e0
	ldrsb r3, [r0, r3]	@ 000030e0 c356
.org 0x30e2
	lsls r3, r3, #8	@ 000030e2 1b02
.org 0x30e4
	ldr r4, [pc, #324]	@ 000030e4 514c
.org 0x30e6
	adds r1, r1, r4	@ 000030e6 0919
.org 0x30e8
	movs r4, #0	@ 000030e8 0024
.org 0x30ea
	ldrsh r0, [r1, r4]	@ 000030ea 085f
.org 0x30ec
	adds r0, r0, r3	@ 000030ec c018
.org 0x30ee
	mov ip, r0	@ 000030ee 8446
.org 0x30f0
	ldrb r6, [r7, #24]	@ 000030f0 3e7e
.org 0x30f2
	lsls r5, r6, #31	@ 000030f2 f507
.org 0x30f4
	asrs r5, r5, #31	@ 000030f4 ed17
.org 0x30f6
	mov r0, r9	@ 000030f6 4846
.org 0x30f8
	eors r5, r0	@ 000030f8 4540
.org 0x30fa
	adds r5, r5, r6	@ 000030fa ad19
.org 0x30fc
	lsls r0, r2, #1	@ 000030fc 5000
.org 0x30fe
	ldr r1, [pc, #304]	@ 000030fe 4c49
.org 0x3100
	adds r0, r0, r1	@ 00003100 4018
.org 0x3102
	movs r1, #0	@ 00003102 0021
.org 0x3104
	ldrsh r4, [r0, r1]	@ 00003104 445e
.org 0x3106
	str r4, [sp, #20]	@ 00003106 0594
.org 0x3108
	muls r5, r4	@ 00003108 6543
.org 0x310a
	ldrh r4, [r7, #28]	@ 0000310a bc8b
.org 0x310c
	mov sl, r4	@ 0000310c a246
.org 0x310e
	mov r0, sl	@ 0000310e 5046
.org 0x3110
	muls r0, r5	@ 00003110 6843
.org 0x3112
	adds r5, r0, #0	@ 00003112 051c
.org 0x3114
	asrs r5, r5, #8	@ 00003114 2d12
.org 0x3116
	ldrb r1, [r7, #25]	@ 00003116 797e
.org 0x3118
	lsls r4, r1, #31	@ 00003118 cc07
.org 0x311a
	asrs r4, r4, #31	@ 0000311a e417
.org 0x311c
	mov r0, ip	@ 0000311c 6046
.org 0x311e
	eors r4, r0	@ 0000311e 4440
.org 0x3120
	adds r4, r4, r1	@ 00003120 6418
.org 0x3122
	adds r2, #64	@ 00003122 4032
.org 0x3124
	lsls r2, r2, #24	@ 00003124 1206
.org 0x3126
	lsrs r2, r2, #23	@ 00003126 d20d
.org 0x3128
	ldr r0, [pc, #260]	@ 00003128 4148
.org 0x312a
	adds r2, r2, r0	@ 0000312a 1218
.org 0x312c
	movs r0, #0	@ 0000312c 0020
.org 0x312e
	ldrsh r2, [r2, r0]	@ 0000312e 125e
.org 0x3130
	muls r4, r2	@ 00003130 5443
.org 0x3132
	ldrh r0, [r7, #30]	@ 00003132 f88b
.org 0x3134
	mov r8, r0	@ 00003134 8046
.org 0x3136
	mov r0, r8	@ 00003136 4046
.org 0x3138
	muls r0, r4	@ 00003138 6043
.org 0x313a
	adds r4, r0, #0	@ 0000313a 041c
.org 0x313c
	asrs r4, r4, #8	@ 0000313c 2412
.org 0x313e
	adds r5, r5, r4	@ 0000313e 2d19
.org 0x3140
	asrs r5, r5, #8	@ 00003140 2d12
.org 0x3142
	mov r4, ip	@ 00003142 6446
.org 0x3144
	subs r3, r3, r4	@ 00003144 1b1b
.org 0x3146
	adds r5, r5, r3	@ 00003146 ed18
.org 0x3148
	ldr r3, [sp, #24]	@ 00003148 069b
.org 0x314a
	ldr r0, [r3, #4]	@ 0000314a 5868
.org 0x314c
	adds r5, r5, r0	@ 0000314c 2d18
.org 0x314e
	ldr r4, [sp, #0]	@ 0000314e 009c
.org 0x3150
	ldr r0, [r4, #12]	@ 00003150 e068
.org 0x3152
	subs r5, r5, r0	@ 00003152 2d1a
.org 0x3154
	asrs r5, r5, #8	@ 00003154 2d12
.org 0x3156
	adds r0, r5, #0	@ 00003156 281c
.org 0x3158
	adds r0, #64	@ 00003158 4030
.org 0x315a
	cmp r0, #223	@ 0000315a df28
.org 0x315c
	bhi.n 0x31f0	@ 0000315c 48d8
.org 0x315e
	lsls r3, r6, #31	@ 0000315e f307
.org 0x3160
	asrs r3, r3, #31	@ 00003160 db17
.org 0x3162
	mov r0, r9	@ 00003162 4846
.org 0x3164
	eors r3, r0	@ 00003164 4340
.org 0x3166
	adds r3, r3, r6	@ 00003166 9b19
.org 0x3168
	muls r3, r2	@ 00003168 5343
.org 0x316a
	mov r2, sl	@ 0000316a 5246
.org 0x316c
	muls r2, r3	@ 0000316c 5a43
.org 0x316e
	adds r3, r2, #0	@ 0000316e 131c
.org 0x3170
	asrs r3, r3, #8	@ 00003170 1b12
.org 0x3172
	lsls r4, r1, #31	@ 00003172 cc07
.org 0x3174
	asrs r4, r4, #31	@ 00003174 e417
.org 0x3176
	mov r0, ip	@ 00003176 6046
.org 0x3178
	eors r4, r0	@ 00003178 4440
.org 0x317a
	adds r4, r4, r1	@ 0000317a 6418
.org 0x317c
	ldr r1, [sp, #20]	@ 0000317c 0599
.org 0x317e
	negs r0, r1	@ 0000317e 4842
.org 0x3180
	muls r4, r0	@ 00003180 4443
.org 0x3182
	mov r2, r8	@ 00003182 4246
.org 0x3184
	muls r2, r4	@ 00003184 6243
.org 0x3186
	adds r4, r2, #0	@ 00003186 141c
.org 0x3188
	asrs r4, r4, #8	@ 00003188 2412
.org 0x318a
	adds r3, r3, r4	@ 0000318a 1b19
.org 0x318c
	asrs r3, r3, #8	@ 0000318c 1b12
.org 0x318e
	ldr r4, [sp, #16]	@ 0000318e 049c
.org 0x3190
	mov r1, r9	@ 00003190 4946
.org 0x3192
	subs r0, r4, r1	@ 00003192 601a
.org 0x3194
	adds r3, r3, r0	@ 00003194 1b18
.org 0x3196
	ldr r2, [sp, #24]	@ 00003196 069a
.org 0x3198
	ldr r0, [r2, #0]	@ 00003198 1068
.org 0x319a
	adds r3, r3, r0	@ 0000319a 1b18
.org 0x319c
	ldr r4, [sp, #0]	@ 0000319c 009c
.org 0x319e
	ldr r0, [r4, #8]	@ 0000319e a068
.org 0x31a0
	subs r3, r3, r0	@ 000031a0 1b1a
.org 0x31a2
	asrs r3, r3, #8	@ 000031a2 1b12
.org 0x31a4
	adds r1, r3, #0	@ 000031a4 191c
.org 0x31a6
	adds r1, #128	@ 000031a6 8031
.org 0x31a8
	ldr r0, [pc, #136]	@ 000031a8 2248
.org 0x31aa
	cmp r1, r0	@ 000031aa 8142
.org 0x31ac
	bhi.n 0x31f0	@ 000031ac 20d8
.org 0x31ae
	ldr r2, [r7, #16]	@ 000031ae 3a69
.org 0x31b0
	ldr r0, [sp, #4]	@ 000031b0 0198
.org 0x31b2
	ldrh r1, [r0, #0]	@ 000031b2 0188
.org 0x31b4
	movs r0, #240	@ 000031b4 f020
.org 0x31b6
	lsls r0, r0, #6	@ 000031b6 8001
.org 0x31b8
	ands r0, r1	@ 000031b8 0840
.org 0x31ba
	lsls r4, r0, #18	@ 000031ba 8404
.org 0x31bc
	movs r0, #192	@ 000031bc c020
.org 0x31be
	lsls r0, r0, #8	@ 000031be 0002
.org 0x31c0
	ands r0, r1	@ 000031c0 0840
.org 0x31c2
	orrs r4, r0	@ 000031c2 0443
.org 0x31c4
	movs r0, #255	@ 000031c4 ff20
.org 0x31c6
	ands r5, r0	@ 000031c6 0540
.org 0x31c8
	orrs r4, r5	@ 000031c8 2c43
.org 0x31ca
	ldr r0, [pc, #108]	@ 000031ca 1b48
.org 0x31cc
	ands r3, r0	@ 000031cc 0340
.org 0x31ce
	lsls r0, r3, #16	@ 000031ce 1804
.org 0x31d0
	orrs r4, r0	@ 000031d0 0443
.org 0x31d2
	orrs r2, r4	@ 000031d2 2243
.org 0x31d4
	ldr r1, [sp, #8]	@ 000031d4 0299
.org 0x31d6
	str r2, [r1, #0]	@ 000031d6 0a60
.org 0x31d8
	ldrh r1, [r7, #20]	@ 000031d8 b98a
.org 0x31da
	ldr r2, [sp, #8]	@ 000031da 029a
.org 0x31dc
	strh r1, [r2, #4]	@ 000031dc 9180
.org 0x31de
	ldr r3, [sp, #4]	@ 000031de 019b
.org 0x31e0
	ldrh r2, [r3, #0]	@ 000031e0 1a88
.org 0x31e2
	ldr r0, [pc, #88]	@ 000031e2 1648
.org 0x31e4
	ands r0, r2	@ 000031e4 1040
.org 0x31e6
	adds r1, r1, r0	@ 000031e6 0918
.org 0x31e8
	ldr r4, [sp, #8]	@ 000031e8 029c
.org 0x31ea
	strh r1, [r4, #4]	@ 000031ea a180
.org 0x31ec
	adds r4, #8	@ 000031ec 0834
.org 0x31ee
	str r4, [sp, #8]	@ 000031ee 0294
.org 0x31f0
	ldr r0, [sp, #4]	@ 000031f0 0198
.org 0x31f2
	adds r0, #4	@ 000031f2 0430
.org 0x31f4
	str r0, [sp, #4]	@ 000031f4 0190
.org 0x31f6
	ldr r0, [sp, #12]	@ 000031f6 0398
.org 0x31f8
	subs r0, #1	@ 000031f8 0138
.org 0x31fa
	lsls r0, r0, #24	@ 000031fa 0006
.org 0x31fc
	lsrs r0, r0, #24	@ 000031fc 000e
.org 0x31fe
	str r0, [sp, #12]	@ 000031fe 0390
.org 0x3200
	cmp r0, #0	@ 00003200 0028
.org 0x3202
	beq.n 0x3206	@ 00003202 00d0
.org 0x3204
	b.n 0x309e	@ 00003204 4be7
.org 0x3206
	ldr r1, [pc, #28]	@ 00003206 0749
.org 0x3208
	movs r2, #128	@ 00003208 8022
.org 0x320a
	lsls r2, r2, #3	@ 0000320a d200
.org 0x320c
	adds r0, r1, r2	@ 0000320c 8818
.org 0x320e
	ldr r3, [sp, #8]	@ 0000320e 029b
.org 0x3210
	str r3, [r0, #0]	@ 00003210 0360
.org 0x3212
	add sp, #28	@ 00003212 07b0
.org 0x3214
	pop {r3, r4, r5}	@ 00003214 38bc
.org 0x3216
	mov r8, r3	@ 00003216 9846
.org 0x3218
	mov r9, r4	@ 00003218 a146
.org 0x321a
	mov sl, r5	@ 0000321a aa46
.org 0x321c
	pop {r4, r5, r6, r7}	@ 0000321c f0bc
.org 0x321e
	pop {r0}	@ 0000321e 01bc
.org 0x3220
	bx r0	@ 00003220 0047
