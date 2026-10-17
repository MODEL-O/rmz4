@ FUN_080c92d8  entry 0x080c92d8  size 136
.thumb
.org 0xc92d8
FUN_080c92d8:
	push {r4, r5, r6, r7, lr}	@ 000c92d8 f0b5
.org 0xc92da
	mov r7, r8	@ 000c92da 4746
.org 0xc92dc
	push {r7}	@ 000c92dc 80b4
.org 0xc92de
	sub sp, #12	@ 000c92de 83b0
.org 0xc92e0
	adds r7, r0, #0	@ 000c92e0 071c
.org 0xc92e2
	ldr r6, [r7, #40]	@ 000c92e2 be6a
.org 0xc92e4
	ldrb r0, [r7, #13]	@ 000c92e4 787b
.org 0xc92e6
	cmp r0, #2	@ 000c92e6 0228
.org 0xc92e8
	bhi.n 0xc92f2	@ 000c92e8 03d8
.org 0xc92ea
	ldrb r0, [r6, #12]	@ 000c92ea 307b
.org 0xc92ec
	cmp r0, #1	@ 000c92ec 0128
.org 0xc92ee
	bls.n 0xc92f2	@ 000c92ee 00d9
.org 0xc92f0
	b.n 0xc9588	@ 000c92f0 4ae1
.org 0xc92f2
	adds r0, r7, #0	@ 000c92f2 381c
.org 0xc92f4
	bl 0x1cff0	@ 000c92f4 53f77cfe
.org 0xc92f8
	ldr r4, [pc, #64]	@ 000c92f8 104c
.org 0xc92fa
	ldrb r5, [r7, #17]	@ 000c92fa 7d7c
.org 0xc92fc
	adds r0, r5, #0	@ 000c92fc 281c
.org 0xc92fe
	movs r1, #6	@ 000c92fe 0621
.org 0xc9300
	bl 0x129120	@ 000c9300 5ff00eff
.org 0xc9304
	lsls r0, r0, #24	@ 000c9304 0006
.org 0xc9306
	lsrs r0, r0, #22	@ 000c9306 800d
.org 0xc9308
	adds r0, r0, r4	@ 000c9308 0019
.org 0xc930a
	ldr r1, [r6, #84]	@ 000c930a 716d
.org 0xc930c
	ldr r0, [r0, #0]	@ 000c930c 0068
.org 0xc930e
	adds r1, r1, r0	@ 000c930e 0918
.org 0xc9310
	mov r8, r1	@ 000c9310 8846
.org 0xc9312
	ldr r4, [pc, #44]	@ 000c9312 0b4c
.org 0xc9314
	adds r0, r5, #0	@ 000c9314 281c
.org 0xc9316
	movs r1, #6	@ 000c9316 0621
.org 0xc9318
	bl 0x129198	@ 000c9318 5ff03eff
.org 0xc931c
	lsls r0, r0, #24	@ 000c931c 0006
.org 0xc931e
	lsrs r0, r0, #22	@ 000c931e 800d
.org 0xc9320
	adds r0, r0, r4	@ 000c9320 0019
.org 0xc9322
	ldr r1, [r6, #88]	@ 000c9322 b16d
.org 0xc9324
	ldr r0, [r0, #0]	@ 000c9324 0068
.org 0xc9326
	adds r5, r1, r0	@ 000c9326 0d18
.org 0xc9328
	ldrb r0, [r7, #13]	@ 000c9328 787b
.org 0xc932a
	cmp r0, #4	@ 000c932a 0428
.org 0xc932c
	bls.n 0xc9330	@ 000c932c 00d9
.org 0xc932e
	b.n 0xc960e	@ 000c932e 6ee1
.org 0xc9330
	lsls r0, r0, #2	@ 000c9330 8000
.org 0xc9332
	ldr r1, [pc, #16]	@ 000c9332 0449
.org 0xc9334
	adds r0, r0, r1	@ 000c9334 4018
.org 0xc9336
	ldr r0, [r0, #0]	@ 000c9336 0068
.org 0xc9338
	mov pc, r0	@ 000c9338 8746
.org 0xc933a
	.byte 0x00	@ 000c933a data
.org 0xc933b
	.byte 0x00	@ 000c933b data
.org 0xc933c
	.byte 0xbc,0x61,0x86,0x08	@ 000c933c data
.org 0xc9340
	.byte 0xa4,0x61,0x86,0x08	@ 000c9340 data
.org 0xc9344
	.byte 0x48,0x93,0x0c,0x08	@ 000c9344 data
.org 0xc9348
	.byte 0x5c,0x93,0x0c,0x08	@ 000c9348 data
.org 0xc934c
	.byte 0x38,0x94,0x0c,0x08	@ 000c934c data
.org 0xc9350
	.byte 0x76,0x94,0x0c,0x08	@ 000c9350 data
.org 0xc9354
	.byte 0x12,0x95,0x0c,0x08	@ 000c9354 data
.org 0xc9358
	.byte 0xd2,0x95,0x0c,0x08	@ 000c9358 data
.org 0xc935c
	.byte 0xb8	@ 000c935c data
.org 0xc935d
	.byte 0x7c	@ 000c935d data
.org 0xc935e
	.byte 0x01	@ 000c935e data
.org 0xc935f
	.byte 0x30	@ 000c935f data
