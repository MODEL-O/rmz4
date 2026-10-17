@ FUN_08112308  entry 0x08112308  size 76
.thumb
.org 0x112308
FUN_08112308:
	push {r4, r5, r6, r7, lr}	@ 00112308 f0b5
.org 0x11230a
	mov r7, r8	@ 0011230a 4746
.org 0x11230c
	push {r7}	@ 0011230c 80b4
.org 0x11230e
	sub sp, #4	@ 0011230e 81b0
.org 0x112310
	adds r6, r0, #0	@ 00112310 061c
.org 0x112312
	movs r0, #1	@ 00112312 0120
.org 0x112314
	mov r8, r0	@ 00112314 8046
.org 0x112316
	ldrb r0, [r6, #6]	@ 00112316 b079
.org 0x112318
	cmp r0, #7	@ 00112318 0728
.org 0x11231a
	bls.n 0x11231e	@ 0011231a 00d9
.org 0x11231c
	b.n 0x112652	@ 0011231c 99e1
.org 0x11231e
	lsls r0, r0, #2	@ 0011231e 8000
.org 0x112320
	ldr r1, [pc, #4]	@ 00112320 0149
.org 0x112322
	adds r0, r0, r1	@ 00112322 4018
.org 0x112324
	ldr r0, [r0, #0]	@ 00112324 0068
.org 0x112326
	mov pc, r0	@ 00112326 8746
.org 0x112328
	.byte 0x2c,0x23,0x11,0x08	@ 00112328 data
.org 0x11232c
	.byte 0x4c,0x23,0x11,0x08	@ 0011232c data
.org 0x112330
	.byte 0xec,0x23,0x11,0x08	@ 00112330 data
.org 0x112334
	.byte 0xf2,0x23,0x11,0x08	@ 00112334 data
.org 0x112338
	.byte 0xde,0x24,0x11,0x08	@ 00112338 data
.org 0x11233c
	.byte 0x3c,0x25,0x11,0x08	@ 0011233c data
.org 0x112340
	.byte 0xc0,0x25,0x11,0x08	@ 00112340 data
.org 0x112344
	.byte 0x04,0x26,0x11,0x08	@ 00112344 data
.org 0x112348
	.byte 0x3c,0x26,0x11,0x08	@ 00112348 data
.org 0x11234c
	.byte 0x1c	@ 0011234c data
.org 0x11234d
	.byte 0x48	@ 0011234d data
.org 0x11234e
	.byte 0x00	@ 0011234e data
.org 0x11234f
	.byte 0x24	@ 0011234f data
.org 0x112350
	.byte 0xc4	@ 00112350 data
.org 0x112351
	.byte 0x60	@ 00112351 data
.org 0x112352
	.byte 0x1c	@ 00112352 data
.org 0x112353
	.byte 0x4a	@ 00112353 data
