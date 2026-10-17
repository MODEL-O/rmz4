@ FUN_080c3100  entry 0x080c3100  size 168
.thumb
.org 0xc3100
FUN_080c3100:
	push {r4, r5, r6, lr}	@ 000c3100 70b5
.org 0xc3102
	mov r6, r8	@ 000c3102 4646
.org 0xc3104
	push {r6}	@ 000c3104 40b4
.org 0xc3106
	sub sp, #8	@ 000c3106 82b0
.org 0xc3108
	adds r4, r0, #0	@ 000c3108 041c
.org 0xc310a
	ldr r1, [pc, #156]	@ 000c310a 2749
.org 0xc310c
	mov r0, sp	@ 000c310c 6846
.org 0xc310e
	movs r2, #8	@ 000c310e 0822
.org 0xc3110
	bl 0x129258	@ 000c3110 66f0a2f8
.org 0xc3114
	adds r0, r4, #0	@ 000c3114 201c
.org 0xc3116
	adds r0, #180	@ 000c3116 b430
.org 0xc3118
	ldrb r6, [r0, #0]	@ 000c3118 0678
.org 0xc311a
	ldrb r2, [r4, #17]	@ 000c311a 627c
.org 0xc311c
	ldr r1, [pc, #140]	@ 000c311c 2349
.org 0xc311e
	ldrb r0, [r4, #9]	@ 000c311e 607a
.org 0xc3120
	lsls r0, r0, #2	@ 000c3120 8000
.org 0xc3122
	adds r0, r0, r1	@ 000c3122 4018
.org 0xc3124
	movs r1, #1	@ 000c3124 0121
.org 0xc3126
	str r1, [r4, #12]	@ 000c3126 e160
.org 0xc3128
	ldr r0, [r0, #0]	@ 000c3128 0068
.org 0xc312a
	ldr r0, [r0, #4]	@ 000c312a 4068
.org 0xc312c
	str r0, [r4, #20]	@ 000c312c 6061
.org 0xc312e
	ldrb r1, [r4, #10]	@ 000c312e a17a
.org 0xc3130
	movs r0, #1	@ 000c3130 0120
.org 0xc3132
	movs r3, #0	@ 000c3132 0023
.org 0xc3134
	mov r8, r3	@ 000c3134 9846
.org 0xc3136
	orrs r0, r1	@ 000c3136 0843
.org 0xc3138
	movs r1, #2	@ 000c3138 0221
.org 0xc313a
	orrs r0, r1	@ 000c313a 0843
.org 0xc313c
	strb r0, [r4, #10]	@ 000c313c a072
.org 0xc313e
	lsls r2, r2, #2	@ 000c313e 9200
.org 0xc3140
	mov r1, sp	@ 000c3140 6946
.org 0xc3142
	adds r0, r1, r2	@ 000c3142 8818
.org 0xc3144
	movs r3, #0	@ 000c3144 0023
.org 0xc3146
	ldrsh r1, [r0, r3]	@ 000c3146 c15e
.org 0xc3148
	lsls r0, r6, #1	@ 000c3148 7000
.org 0xc314a
	subs r0, #1	@ 000c314a 0138
.org 0xc314c
	muls r0, r1	@ 000c314c 4843
.org 0xc314e
	str r0, [r4, #92]	@ 000c314e e065
.org 0xc3150
	mov r0, sp	@ 000c3150 6846
.org 0xc3152
	adds r0, #2	@ 000c3152 0230
.org 0xc3154
	adds r0, r0, r2	@ 000c3154 8018
.org 0xc3156
	movs r1, #0	@ 000c3156 0021
.org 0xc3158
	ldrsh r0, [r0, r1]	@ 000c3158 405e
.org 0xc315a
	negs r0, r0	@ 000c315a 4042
.org 0xc315c
	str r0, [r4, #96]	@ 000c315c 2066
.org 0xc315e
	adds r0, r4, #0	@ 000c315e 201c
.org 0xc3160
	bl 0x1cc9c	@ 000c3160 59f79cfd
.org 0xc3164
	ldr r1, [pc, #72]	@ 000c3164 1249
.org 0xc3166
	adds r0, r4, #0	@ 000c3166 201c
.org 0xc3168
	bl 0x1cf00	@ 000c3168 59f7cafe
.org 0xc316c
	ldrb r1, [r4, #10]	@ 000c316c a17a
.org 0xc316e
	movs r0, #4	@ 000c316e 0420
.org 0xc3170
	orrs r0, r1	@ 000c3170 0843
.org 0xc3172
	strb r0, [r4, #10]	@ 000c3172 a072
.org 0xc3174
	adds r5, r4, #0	@ 000c3174 251c
.org 0xc3176
	adds r5, #116	@ 000c3176 7435
.org 0xc3178
	ldr r1, [pc, #56]	@ 000c3178 0e49
.org 0xc317a
	adds r2, r4, #0	@ 000c317a 221c
.org 0xc317c
	adds r2, #84	@ 000c317c 5432
.org 0xc317e
	adds r0, r5, #0	@ 000c317e 281c
.org 0xc3180
	movs r3, #64	@ 000c3180 4023
.org 0xc3182
	bl 0x5760	@ 000c3182 42f7edfa
.org 0xc3186
	str r4, [r5, #44]	@ 000c3186 ec62
.org 0xc3188
	mov r3, r8	@ 000c3188 4346
.org 0xc318a
	str r3, [r5, #36]	@ 000c318a 6b62
.org 0xc318c
	adds r0, r4, #0	@ 000c318c 201c
.org 0xc318e
	movs r1, #1	@ 000c318e 0121
.org 0xc3190
	adds r2, r6, #0	@ 000c3190 321c
.org 0xc3192
	bl 0xc3090	@ 000c3192 fff77dff
.org 0xc3196
	adds r0, r4, #0	@ 000c3196 201c
.org 0xc3198
	bl 0xc3284	@ 000c3198 00f074f8
.org 0xc319c
	add sp, #8	@ 000c319c 02b0
.org 0xc319e
	pop {r3}	@ 000c319e 08bc
.org 0xc31a0
	mov r8, r3	@ 000c31a0 9846
.org 0xc31a2
	pop {r4, r5, r6}	@ 000c31a2 70bc
.org 0xc31a4
	pop {r0}	@ 000c31a4 01bc
.org 0xc31a6
	bx r0	@ 000c31a6 0047
