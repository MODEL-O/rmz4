@ FUN_0806d0d8  entry 0x0806d0d8  size 320
.thumb
.org 0x6d0d8
FUN_0806d0d8:
	push {r4, r5, r6, r7, lr}	@ 0006d0d8 f0b5
.org 0x6d0da
	adds r6, r0, #0	@ 0006d0da 061c
.org 0x6d0dc
	ldr r0, [pc, #312]	@ 0006d0dc 4e48
.org 0x6d0de
	ldr r1, [pc, #316]	@ 0006d0de 4f49
.org 0x6d0e0
	movs r4, #135	@ 0006d0e0 8724
.org 0x6d0e2
	lsls r4, r4, #1	@ 0006d0e2 6400
.org 0x6d0e4
	adds r1, r1, r4	@ 0006d0e4 0919
.org 0x6d0e6
	ldrh r1, [r1, #0]	@ 0006d0e6 0988
.org 0x6d0e8
	ldrh r2, [r0, #6]	@ 0006d0e8 c288
.org 0x6d0ea
	lsrs r2, r2, #6	@ 0006d0ea 9209
.org 0x6d0ec
	subs r1, r1, r2	@ 0006d0ec 891a
.org 0x6d0ee
	lsls r1, r1, #5	@ 0006d0ee 4901
.org 0x6d0f0
	movs r2, #128	@ 0006d0f0 8022
.org 0x6d0f2
	lsls r2, r2, #9	@ 0006d0f2 5202
.org 0x6d0f4
	adds r1, r1, r2	@ 0006d0f4 8918
.org 0x6d0f6
	bl 0x1d30	@ 0006d0f6 94f71bfe
.org 0x6d0fa
	ldr r0, [pc, #292]	@ 0006d0fa 4948
.org 0x6d0fc
	ldr r1, [pc, #292]	@ 0006d0fc 4949
.org 0x6d0fe
	adds r1, r1, r4	@ 0006d0fe 0919
.org 0x6d100
	ldrh r1, [r1, #0]	@ 0006d100 0988
.org 0x6d102
	ldrb r2, [r0, #7]	@ 0006d102 c279
.org 0x6d104
	subs r1, r1, r2	@ 0006d104 891a
.org 0x6d106
	lsls r1, r1, #5	@ 0006d106 4901
.org 0x6d108
	movs r2, #128	@ 0006d108 8022
.org 0x6d10a
	lsls r2, r2, #2	@ 0006d10a 9200
.org 0x6d10c
	adds r1, r1, r2	@ 0006d10c 8918
.org 0x6d10e
	bl 0x2208	@ 0006d10e 95f77bf8
.org 0x6d112
	adds r0, r6, #0	@ 0006d112 301c
.org 0x6d114
	bl 0x1cc9c	@ 0006d114 aff7c2fd
.org 0x6d118
	ldrb r1, [r6, #10]	@ 0006d118 b17a
.org 0x6d11a
	movs r0, #1	@ 0006d11a 0120
.org 0x6d11c
	movs r4, #0	@ 0006d11c 0024
.org 0x6d11e
	orrs r0, r1	@ 0006d11e 0843
.org 0x6d120
	movs r1, #2	@ 0006d120 0221
.org 0x6d122
	orrs r0, r1	@ 0006d122 0843
.org 0x6d124
	strb r0, [r6, #10]	@ 0006d124 b072
.org 0x6d126
	movs r1, #135	@ 0006d126 8721
.org 0x6d128
	lsls r1, r1, #8	@ 0006d128 0902
.org 0x6d12a
	adds r0, r6, #0	@ 0006d12a 301c
.org 0x6d12c
	bl 0x1cf00	@ 0006d12c aff7e8fe
.org 0x6d130
	adds r0, r6, #0	@ 0006d130 301c
.org 0x6d132
	bl 0x1cff0	@ 0006d132 aff75dff
.org 0x6d136
	adds r0, r6, #0	@ 0006d136 301c
.org 0x6d138
	adds r0, #76	@ 0006d138 4c30
.org 0x6d13a
	strb r4, [r0, #0]	@ 0006d13a 0470
.org 0x6d13c
	adds r2, r6, #0	@ 0006d13c 321c
.org 0x6d13e
	adds r2, #74	@ 0006d13e 4a32
.org 0x6d140
	ldrb r1, [r2, #0]	@ 0006d140 1178
.org 0x6d142
	movs r0, #17	@ 0006d142 1120
.org 0x6d144
	negs r0, r0	@ 0006d144 4042
.org 0x6d146
	ands r0, r1	@ 0006d146 0840
.org 0x6d148
	strb r0, [r2, #0]	@ 0006d148 1070
.org 0x6d14a
	ldrb r1, [r6, #10]	@ 0006d14a b17a
.org 0x6d14c
	movs r0, #239	@ 0006d14c ef20
.org 0x6d14e
	ands r0, r1	@ 0006d14e 0840
.org 0x6d150
	strb r0, [r6, #10]	@ 0006d150 b072
.org 0x6d152
	ldr r1, [pc, #212]	@ 0006d152 3549
.org 0x6d154
	adds r0, r6, #0	@ 0006d154 301c
.org 0x6d156
	movs r2, #8	@ 0006d156 0822
.org 0x6d158
	bl 0x503cc	@ 0006d158 e3f738f9
.org 0x6d15c
	ldr r1, [pc, #204]	@ 0006d15c 3349
.org 0x6d15e
	adds r0, r6, #0	@ 0006d15e 301c
.org 0x6d160
	adds r0, #116	@ 0006d160 7430
.org 0x6d162
	str r1, [r0, #36]	@ 0006d162 4162
.org 0x6d164
	ldr r0, [r6, #84]	@ 0006d164 706d
.org 0x6d166
	ldr r1, [r6, #88]	@ 0006d166 b16d
.org 0x6d168
	bl 0x8988	@ 0006d168 9bf70efc
.org 0x6d16c
	adds r5, r0, #0	@ 0006d16c 051c
.org 0x6d16e
	ldr r0, [r6, #84]	@ 0006d16e 706d
.org 0x6d170
	ldr r1, [r6, #88]	@ 0006d170 b16d
.org 0x6d172
	bl 0x8868	@ 0006d172 9bf779fb
.org 0x6d176
	adds r4, r0, #0	@ 0006d176 041c
.org 0x6d178
	ldr r0, [r6, #84]	@ 0006d178 706d
.org 0x6d17a
	ldr r1, [r6, #88]	@ 0006d17a b16d
.org 0x6d17c
	bl 0x8988	@ 0006d17c 9bf704fc
.org 0x6d180
	subs r4, r4, r0	@ 0006d180 241a
.org 0x6d182
	asrs r4, r4, #1	@ 0006d182 6410
.org 0x6d184
	adds r5, r5, r4	@ 0006d184 2d19
.org 0x6d186
	str r5, [r6, #84]	@ 0006d186 7565
.org 0x6d188
	ldr r1, [r6, #88]	@ 0006d188 b16d
.org 0x6d18a
	adds r0, r5, #0	@ 0006d18a 281c
.org 0x6d18c
	bl 0x8748	@ 0006d18c 9bf7dcfa
.org 0x6d190
	adds r5, r0, #0	@ 0006d190 051c
.org 0x6d192
	ldr r0, [r6, #84]	@ 0006d192 706d
.org 0x6d194
	ldr r1, [r6, #88]	@ 0006d194 b16d
.org 0x6d196
	bl 0x8534	@ 0006d196 9bf7cdf9
.org 0x6d19a
	adds r4, r0, #0	@ 0006d19a 041c
.org 0x6d19c
	ldr r0, [r6, #84]	@ 0006d19c 706d
.org 0x6d19e
	ldr r1, [r6, #88]	@ 0006d19e b16d
.org 0x6d1a0
	bl 0x8748	@ 0006d1a0 9bf7d2fa
.org 0x6d1a4
	subs r4, r4, r0	@ 0006d1a4 241a
.org 0x6d1a6
	asrs r4, r4, #1	@ 0006d1a6 6410
.org 0x6d1a8
	adds r5, r5, r4	@ 0006d1a8 2d19
.org 0x6d1aa
	str r5, [r6, #88]	@ 0006d1aa b565
.org 0x6d1ac
	adds r1, r6, #0	@ 0006d1ac 311c
.org 0x6d1ae
	adds r1, #196	@ 0006d1ae c431
.org 0x6d1b0
	ldr r0, [r6, #84]	@ 0006d1b0 706d
.org 0x6d1b2
	str r0, [r1, #0]	@ 0006d1b2 0860
.org 0x6d1b4
	ldr r0, [r6, #88]	@ 0006d1b4 b06d
.org 0x6d1b6
	str r0, [r1, #4]	@ 0006d1b6 4860
.org 0x6d1b8
	movs r5, #0	@ 0006d1b8 0025
.org 0x6d1ba
	adds r7, r6, #0	@ 0006d1ba 371c
.org 0x6d1bc
	adds r7, #180	@ 0006d1bc b437
.org 0x6d1be
	lsls r4, r5, #24	@ 0006d1be 2c06
.org 0x6d1c0
	lsrs r4, r4, #24	@ 0006d1c0 240e
.org 0x6d1c2
	adds r0, r6, #0	@ 0006d1c2 301c
.org 0x6d1c4
	movs r1, #0	@ 0006d1c4 0021
.org 0x6d1c6
	adds r2, r4, #0	@ 0006d1c6 221c
.org 0x6d1c8
	bl 0xa31f8	@ 0006d1c8 36f016f8
.org 0x6d1cc
	adds r1, r0, #0	@ 0006d1cc 011c
.org 0x6d1ce
	stmia r7!, {r1}	@ 0006d1ce 02c7
.org 0x6d1d0
	adds r0, r6, #0	@ 0006d1d0 301c
.org 0x6d1d2
	movs r2, #1	@ 0006d1d2 0122
.org 0x6d1d4
	adds r3, r4, #0	@ 0006d1d4 231c
.org 0x6d1d6
	bl 0xa3260	@ 0006d1d6 36f043f8
.org 0x6d1da
	adds r0, r6, #0	@ 0006d1da 301c
.org 0x6d1dc
	adds r0, #212	@ 0006d1dc d430
.org 0x6d1de
	adds r0, r0, r5	@ 0006d1de 4019
.org 0x6d1e0
	movs r2, #0	@ 0006d1e0 0022
.org 0x6d1e2
	strb r2, [r0, #0]	@ 0006d1e2 0270
.org 0x6d1e4
	adds r5, #1	@ 0006d1e4 0135
.org 0x6d1e6
	cmp r5, #3	@ 0006d1e6 032d
.org 0x6d1e8
	ble.n 0x6d1be	@ 0006d1e8 e9dd
.org 0x6d1ea
	adds r0, r6, #0	@ 0006d1ea 301c
.org 0x6d1ec
	adds r0, #218	@ 0006d1ec da30
.org 0x6d1ee
	strb r2, [r0, #0]	@ 0006d1ee 0270
.org 0x6d1f0
	adds r0, #1	@ 0006d1f0 0130
.org 0x6d1f2
	strb r2, [r0, #0]	@ 0006d1f2 0270
.org 0x6d1f4
	subs r0, #2	@ 0006d1f4 0238
.org 0x6d1f6
	strb r2, [r0, #0]	@ 0006d1f6 0270
.org 0x6d1f8
	ldr r1, [pc, #52]	@ 0006d1f8 0d49
.org 0x6d1fa
	ldrb r0, [r6, #9]	@ 0006d1fa 707a
.org 0x6d1fc
	lsls r0, r0, #2	@ 0006d1fc 8000
.org 0x6d1fe
	adds r0, r0, r1	@ 0006d1fe 4018
.org 0x6d200
	movs r1, #1	@ 0006d200 0121
.org 0x6d202
	str r1, [r6, #12]	@ 0006d202 f160
.org 0x6d204
	ldr r0, [r0, #0]	@ 0006d204 0068
.org 0x6d206
	ldr r0, [r0, #4]	@ 0006d206 4068
.org 0x6d208
	str r0, [r6, #20]	@ 0006d208 7061
.org 0x6d20a
	strb r2, [r6, #13]	@ 0006d20a 7273
.org 0x6d20c
	adds r0, r6, #0	@ 0006d20c 301c
.org 0x6d20e
	bl 0x6d234	@ 0006d20e 00f011f8
.org 0x6d212
	pop {r4, r5, r6, r7}	@ 0006d212 f0bc
.org 0x6d214
	pop {r0}	@ 0006d214 01bc
.org 0x6d216
	bx r0	@ 0006d216 0047
