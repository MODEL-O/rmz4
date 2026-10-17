@ FUN_080c31b8  entry 0x080c31b8  size 188
.thumb
.org 0xc31b8
FUN_080c31b8:
	push {r4, r5, r6, r7, lr}	@ 000c31b8 f0b5
.org 0xc31ba
	mov r7, r8	@ 000c31ba 4746
.org 0xc31bc
	push {r7}	@ 000c31bc 80b4
.org 0xc31be
	sub sp, #12	@ 000c31be 83b0
.org 0xc31c0
	adds r6, r0, #0	@ 000c31c0 061c
.org 0xc31c2
	ldr r0, [pc, #176]	@ 000c31c2 2c48
.org 0xc31c4
	ldr r1, [r0, #4]	@ 000c31c4 4168
.org 0xc31c6
	ldr r0, [r0, #0]	@ 000c31c6 0068
.org 0xc31c8
	str r0, [sp, #4]	@ 000c31c8 0190
.org 0xc31ca
	str r1, [sp, #8]	@ 000c31ca 0291
.org 0xc31cc
	ldr r1, [pc, #168]	@ 000c31cc 2a49
.org 0xc31ce
	mov r0, sp	@ 000c31ce 6846
.org 0xc31d0
	movs r2, #2	@ 000c31d0 0222
.org 0xc31d2
	bl 0x129258	@ 000c31d2 66f041f8
.org 0xc31d6
	ldr r3, [r6, #40]	@ 000c31d6 b36a
.org 0xc31d8
	adds r0, r6, #0	@ 000c31d8 301c
.org 0xc31da
	adds r0, #180	@ 000c31da b430
.org 0xc31dc
	ldrb r5, [r0, #0]	@ 000c31dc 0578
.org 0xc31de
	ldrb r7, [r6, #17]	@ 000c31de 777c
.org 0xc31e0
	ldr r1, [pc, #152]	@ 000c31e0 2649
.org 0xc31e2
	ldrb r0, [r6, #9]	@ 000c31e2 707a
.org 0xc31e4
	lsls r0, r0, #2	@ 000c31e4 8000
.org 0xc31e6
	adds r0, r0, r1	@ 000c31e6 4018
.org 0xc31e8
	movs r1, #1	@ 000c31e8 0121
.org 0xc31ea
	str r1, [r6, #12]	@ 000c31ea f160
.org 0xc31ec
	ldr r0, [r0, #0]	@ 000c31ec 0068
.org 0xc31ee
	ldr r0, [r0, #4]	@ 000c31ee 4068
.org 0xc31f0
	str r0, [r6, #20]	@ 000c31f0 7061
.org 0xc31f2
	ldrb r1, [r6, #10]	@ 000c31f2 b17a
.org 0xc31f4
	movs r0, #1	@ 000c31f4 0120
.org 0xc31f6
	movs r2, #0	@ 000c31f6 0022
.org 0xc31f8
	mov r8, r2	@ 000c31f8 9046
.org 0xc31fa
	orrs r0, r1	@ 000c31fa 0843
.org 0xc31fc
	movs r1, #2	@ 000c31fc 0221
.org 0xc31fe
	orrs r0, r1	@ 000c31fe 0843
.org 0xc3200
	strb r0, [r6, #10]	@ 000c3200 b072
.org 0xc3202
	adds r2, r6, #0	@ 000c3202 321c
.org 0xc3204
	adds r2, #184	@ 000c3204 b832
.org 0xc3206
	ldr r0, [r3, #84]	@ 000c3206 586d
.org 0xc3208
	ldr r1, [r3, #88]	@ 000c3208 996d
.org 0xc320a
	str r0, [r2, #0]	@ 000c320a 1060
.org 0xc320c
	str r1, [r2, #4]	@ 000c320c 5160
.org 0xc320e
	adds r0, r6, #0	@ 000c320e 301c
.org 0xc3210
	bl 0x1cc9c	@ 000c3210 59f744fd
.org 0xc3214
	lsls r0, r7, #2	@ 000c3214 b800
.org 0xc3216
	add r1, sp, #4	@ 000c3216 01a9
.org 0xc3218
	adds r0, r0, r1	@ 000c3218 4018
.org 0xc321a
	ldrh r1, [r0, #0]	@ 000c321a 0188
.org 0xc321c
	adds r0, r6, #0	@ 000c321c 301c
.org 0xc321e
	bl 0x1cf00	@ 000c321e 59f76ffe
.org 0xc3222
	ldrb r1, [r6, #10]	@ 000c3222 b17a
.org 0xc3224
	movs r0, #4	@ 000c3224 0420
.org 0xc3226
	orrs r0, r1	@ 000c3226 0843
.org 0xc3228
	strb r0, [r6, #10]	@ 000c3228 b072
.org 0xc322a
	adds r4, r6, #0	@ 000c322a 341c
.org 0xc322c
	adds r4, #116	@ 000c322c 7434
.org 0xc322e
	mov r1, sp	@ 000c322e 6946
.org 0xc3230
	adds r0, r1, r7	@ 000c3230 c819
.org 0xc3232
	ldrb r0, [r0, #0]	@ 000c3232 0078
.org 0xc3234
	lsls r1, r0, #1	@ 000c3234 4100
.org 0xc3236
	adds r1, r1, r0	@ 000c3236 0918
.org 0xc3238
	lsls r1, r1, #3	@ 000c3238 c900
.org 0xc323a
	ldr r0, [pc, #68]	@ 000c323a 1148
.org 0xc323c
	adds r1, r1, r0	@ 000c323c 0918
.org 0xc323e
	adds r2, r6, #0	@ 000c323e 321c
.org 0xc3240
	adds r2, #84	@ 000c3240 5432
.org 0xc3242
	adds r0, r4, #0	@ 000c3242 201c
.org 0xc3244
	movs r3, #64	@ 000c3244 4023
.org 0xc3246
	bl 0x5760	@ 000c3246 42f78bfa
.org 0xc324a
	str r6, [r4, #44]	@ 000c324a e662
.org 0xc324c
	mov r2, r8	@ 000c324c 4246
.org 0xc324e
	str r2, [r4, #36]	@ 000c324e 6262
.org 0xc3250
	cmp r7, #0	@ 000c3250 002f
.org 0xc3252
	beq.n 0xc3262	@ 000c3252 06d0
.org 0xc3254
	subs r1, r7, #1	@ 000c3254 791e
.org 0xc3256
	lsls r1, r1, #24	@ 000c3256 0906
.org 0xc3258
	lsrs r1, r1, #24	@ 000c3258 090e
.org 0xc325a
	adds r0, r6, #0	@ 000c325a 301c
.org 0xc325c
	adds r2, r5, #0	@ 000c325c 2a1c
.org 0xc325e
	bl 0xc3090	@ 000c325e fff717ff
.org 0xc3262
	adds r0, r6, #0	@ 000c3262 301c
.org 0xc3264
	bl 0xc3284	@ 000c3264 00f00ef8
.org 0xc3268
	add sp, #12	@ 000c3268 03b0
.org 0xc326a
	pop {r3}	@ 000c326a 08bc
.org 0xc326c
	mov r8, r3	@ 000c326c 9846
.org 0xc326e
	pop {r4, r5, r6, r7}	@ 000c326e f0bc
.org 0xc3270
	pop {r0}	@ 000c3270 01bc
.org 0xc3272
	bx r0	@ 000c3272 0047
