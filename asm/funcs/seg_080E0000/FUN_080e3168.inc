@ FUN_080e3168  entry 0x080e3168  size 98
.thumb
.org 0xe3168
FUN_080e3168:
	push {r4, r5, lr}	@ 000e3168 30b5
.org 0xe316a
	adds r4, r0, #0	@ 000e316a 041c
.org 0xe316c
	bl 0x1cc9c	@ 000e316c 39f796fd
.org 0xe3170
	ldrb r1, [r4, #10]	@ 000e3170 a17a
.org 0xe3172
	movs r0, #1	@ 000e3172 0120
.org 0xe3174
	orrs r0, r1	@ 000e3174 0843
.org 0xe3176
	movs r1, #2	@ 000e3176 0221
.org 0xe3178
	orrs r0, r1	@ 000e3178 0843
.org 0xe317a
	movs r2, #0	@ 000e317a 0022
.org 0xe317c
	movs r1, #239	@ 000e317c ef21
.org 0xe317e
	ands r0, r1	@ 000e317e 0840
.org 0xe3180
	strb r0, [r4, #10]	@ 000e3180 a072
.org 0xe3182
	movs r5, #1	@ 000e3182 0125
.org 0xe3184
	adds r0, r4, #0	@ 000e3184 201c
.org 0xe3186
	adds r0, #76	@ 000e3186 4c30
.org 0xe3188
	strb r2, [r0, #0]	@ 000e3188 0270
.org 0xe318a
	adds r2, r4, #0	@ 000e318a 221c
.org 0xe318c
	adds r2, #74	@ 000e318c 4a32
.org 0xe318e
	ldrb r1, [r2, #0]	@ 000e318e 1178
.org 0xe3190
	movs r0, #17	@ 000e3190 1120
.org 0xe3192
	negs r0, r0	@ 000e3192 4042
.org 0xe3194
	ands r0, r1	@ 000e3194 0840
.org 0xe3196
	strb r0, [r2, #0]	@ 000e3196 1070
.org 0xe3198
	ldr r1, [pc, #48]	@ 000e3198 0c49
.org 0xe319a
	ldrb r0, [r4, #9]	@ 000e319a 607a
.org 0xe319c
	lsls r0, r0, #2	@ 000e319c 8000
.org 0xe319e
	adds r0, r0, r1	@ 000e319e 4018
.org 0xe31a0
	str r5, [r4, #12]	@ 000e31a0 e560
.org 0xe31a2
	ldr r0, [r0, #0]	@ 000e31a2 0068
.org 0xe31a4
	ldr r0, [r0, #4]	@ 000e31a4 4068
.org 0xe31a6
	str r0, [r4, #20]	@ 000e31a6 6061
.org 0xe31a8
	ldr r1, [pc, #36]	@ 000e31a8 0949
.org 0xe31aa
	ldrb r0, [r4, #16]	@ 000e31aa 207c
.org 0xe31ac
	lsls r0, r0, #2	@ 000e31ac 8000
.org 0xe31ae
	adds r0, r0, r1	@ 000e31ae 4018
.org 0xe31b0
	ldr r1, [r0, #0]	@ 000e31b0 0168
.org 0xe31b2
	adds r0, r4, #0	@ 000e31b2 201c
.org 0xe31b4
	bl 0x128f80	@ 000e31b4 45f0e4fe
.org 0xe31b8
	adds r0, r4, #0	@ 000e31b8 201c
.org 0xe31ba
	adds r0, #116	@ 000e31ba 7430
.org 0xe31bc
	strb r5, [r0, #0]	@ 000e31bc 0570
.org 0xe31be
	adds r0, r4, #0	@ 000e31be 201c
.org 0xe31c0
	bl 0xe31d4	@ 000e31c0 00f008f8
.org 0xe31c4
	pop {r4, r5}	@ 000e31c4 30bc
.org 0xe31c6
	pop {r0}	@ 000e31c6 01bc
.org 0xe31c8
	bx r0	@ 000e31c8 0047
