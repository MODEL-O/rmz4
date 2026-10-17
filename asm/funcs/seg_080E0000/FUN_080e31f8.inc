@ FUN_080e31f8  entry 0x080e31f8  size 90
.thumb
.org 0xe31f8
FUN_080e31f8:
	push {r4, lr}	@ 000e31f8 10b5
.org 0xe31fa
	sub sp, #8	@ 000e31fa 82b0
.org 0xe31fc
	adds r4, r0, #0	@ 000e31fc 041c
.org 0xe31fe
	ldrb r0, [r4, #17]	@ 000e31fe 607c
.org 0xe3200
	cmp r0, #0	@ 000e3200 0028
.org 0xe3202
	bne.n 0xe3210	@ 000e3202 05d1
.org 0xe3204
	adds r0, r4, #0	@ 000e3204 201c
.org 0xe3206
	adds r0, #84	@ 000e3206 5430
.org 0xe3208
	movs r1, #1	@ 000e3208 0121
.org 0xe320a
	movs r2, #3	@ 000e320a 0322
.org 0xe320c
	bl 0xe3110	@ 000e320c fff780ff
.org 0xe3210
	ldrb r0, [r4, #17]	@ 000e3210 607c
.org 0xe3212
	cmp r0, #1	@ 000e3212 0128
.org 0xe3214
	bne.n 0xe3238	@ 000e3214 10d1
.org 0xe3216
	ldr r0, [r4, #84]	@ 000e3216 606d
.org 0xe3218
	str r0, [sp, #0]	@ 000e3218 0090
.org 0xe321a
	ldr r0, [r4, #88]	@ 000e321a a06d
.org 0xe321c
	ldr r1, [pc, #52]	@ 000e321c 0d49
.org 0xe321e
	adds r0, r0, r1	@ 000e321e 4018
.org 0xe3220
	str r0, [sp, #4]	@ 000e3220 0190
.org 0xe3222
	mov r0, sp	@ 000e3222 6846
.org 0xe3224
	movs r1, #1	@ 000e3224 0121
.org 0xe3226
	movs r2, #2	@ 000e3226 0222
.org 0xe3228
	bl 0xe3110	@ 000e3228 fff772ff
.org 0xe322c
	adds r0, r4, #0	@ 000e322c 201c
.org 0xe322e
	adds r0, #84	@ 000e322e 5430
.org 0xe3230
	movs r1, #1	@ 000e3230 0121
.org 0xe3232
	movs r2, #4	@ 000e3232 0422
.org 0xe3234
	bl 0xe3110	@ 000e3234 fff76cff
.org 0xe3238
	ldr r1, [pc, #28]	@ 000e3238 0749
.org 0xe323a
	ldrb r0, [r4, #9]	@ 000e323a 607a
.org 0xe323c
	lsls r0, r0, #2	@ 000e323c 8000
.org 0xe323e
	adds r0, r0, r1	@ 000e323e 4018
.org 0xe3240
	movs r1, #4	@ 000e3240 0421
.org 0xe3242
	str r1, [r4, #12]	@ 000e3242 e160
.org 0xe3244
	ldr r0, [r0, #0]	@ 000e3244 0068
.org 0xe3246
	ldr r0, [r0, #16]	@ 000e3246 0069
.org 0xe3248
	str r0, [r4, #20]	@ 000e3248 6061
.org 0xe324a
	add sp, #8	@ 000e324a 02b0
.org 0xe324c
	pop {r4}	@ 000e324c 10bc
.org 0xe324e
	pop {r0}	@ 000e324e 01bc
.org 0xe3250
	bx r0	@ 000e3250 0047
