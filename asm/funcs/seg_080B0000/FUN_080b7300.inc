@ FUN_080b7300  entry 0x080b7300  size 71
.thumb
.org 0xb7300
FUN_080b7300:
	lsls r0, r0, #8	@ 000b7300 0002
.org 0xb7302
	ldr r3, [pc, #84]	@ 000b7302 154b
.org 0xb7304
	adds r0, r0, r3	@ 000b7304 c018
.org 0xb7306
	adds r1, r1, r0	@ 000b7306 0918
.org 0xb7308
	str r1, [sp, #32]	@ 000b7308 0891
.org 0xb730a
	add r0, sp, #4	@ 000b730a 01a8
.org 0xb730c
	adds r0, r0, r2	@ 000b730c 8018
.org 0xb730e
	ldr r2, [r7, #88]	@ 000b730e ba6d
.org 0xb7310
	ldr r0, [r0, #0]	@ 000b7310 0068
.org 0xb7312
	adds r2, r2, r0	@ 000b7312 1218
.org 0xb7314
	mov r0, r8	@ 000b7314 4046
.org 0xb7316
	muls r0, r6	@ 000b7316 7043
.org 0xb7318
	adds r0, r0, r4	@ 000b7318 0019
.org 0xb731a
	lsls r0, r0, #1	@ 000b731a 4000
.org 0xb731c
	lsrs r1, r0, #1	@ 000b731c 4108
.org 0xb731e
	mov r4, r9	@ 000b731e 4c46
.org 0xb7320
	str r1, [r4, #0]	@ 000b7320 2160
.org 0xb7322
	lsrs r0, r0, #17	@ 000b7322 400c
.org 0xb7324
	ands r0, r5	@ 000b7324 2840
.org 0xb7326
	lsls r0, r0, #8	@ 000b7326 0002
.org 0xb7328
	adds r0, r0, r3	@ 000b7328 c018
.org 0xb732a
	adds r2, r2, r0	@ 000b732a 1218
.org 0xb732c
	add r1, sp, #32	@ 000b732c 08a9
.org 0xb732e
	str r2, [r1, #4]	@ 000b732e 4a60
.org 0xb7330
	mov r0, ip	@ 000b7330 6046
.org 0xb7332
	movs r2, #1	@ 000b7332 0122
.org 0xb7334
	movs r3, #0	@ 000b7334 0023
.org 0xb7336
	bl 0xe83c8	@ 000b7336 31f047f8
.org 0xb733a
	add sp, #40	@ 000b733a 0ab0
.org 0xb733c
	pop {r3, r4}	@ 000b733c 18bc
.org 0xb733e
	mov r8, r3	@ 000b733e 9846
.org 0xb7340
	mov r9, r4	@ 000b7340 a146
.org 0xb7342
	pop {r4, r5, r6, r7}	@ 000b7342 f0bc
.org 0xb7344
	pop {r0}	@ 000b7344 01bc
.org 0xb7346
	bx r0	@ 000b7346 0047
