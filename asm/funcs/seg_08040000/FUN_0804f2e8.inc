@ FUN_0804f2e8  entry 0x0804f2e8  size 114
.thumb
.org 0x4f2e8
FUN_0804f2e8:
	push {r4, r5, lr}	@ 0004f2e8 30b5
.org 0x4f2ea
	adds r2, r0, #0	@ 0004f2ea 021c
.org 0x4f2ec
	ldr r0, [r2, #20]	@ 0004f2ec 5069
.org 0x4f2ee
	movs r1, #1	@ 0004f2ee 0121
.org 0x4f2f0
	ands r0, r1	@ 0004f2f0 0840
.org 0x4f2f2
	cmp r0, #0	@ 0004f2f2 0028
.org 0x4f2f4
	beq.n 0x4f354	@ 0004f2f4 2ed0
.org 0x4f2f6
	ldr r0, [r2, #12]	@ 0004f2f6 d068
.org 0x4f2f8
	ldr r0, [r0, #44]	@ 0004f2f8 c06a
.org 0x4f2fa
	ldr r4, [r2, #44]	@ 0004f2fa d46a
.org 0x4f2fc
	movs r2, #0	@ 0004f2fc 0022
.org 0x4f2fe
	ldr r1, [r0, #84]	@ 0004f2fe 416d
.org 0x4f300
	ldr r0, [r4, #84]	@ 0004f300 606d
.org 0x4f302
	cmp r1, r0	@ 0004f302 8142
.org 0x4f304
	ble.n 0x4f308	@ 0004f304 00dd
.org 0x4f306
	movs r2, #1	@ 0004f306 0122
.org 0x4f308
	adds r0, r4, #0	@ 0004f308 201c
.org 0x4f30a
	adds r0, #188	@ 0004f30a bc30
.org 0x4f30c
	movs r5, #0	@ 0004f30c 0025
.org 0x4f30e
	strb r2, [r0, #0]	@ 0004f30e 0270
.org 0x4f310
	ldr r0, [r4, #40]	@ 0004f310 a06a
.org 0x4f312
	movs r1, #5	@ 0004f312 0521
.org 0x4f314
	movs r2, #14	@ 0004f314 0e22
.org 0x4f316
	bl 0x3a578	@ 0004f316 ebf72ff9
.org 0x4f31a
	lsls r0, r0, #24	@ 0004f31a 0006
.org 0x4f31c
	cmp r0, #0	@ 0004f31c 0028
.org 0x4f31e
	beq.n 0x4f354	@ 0004f31e 19d0
.org 0x4f320
	ldrb r1, [r4, #10]	@ 0004f320 a17a
.org 0x4f322
	movs r0, #254	@ 0004f322 fe20
.org 0x4f324
	ands r0, r1	@ 0004f324 0840
.org 0x4f326
	movs r1, #253	@ 0004f326 fd21
.org 0x4f328
	ands r0, r1	@ 0004f328 0840
.org 0x4f32a
	strb r0, [r4, #10]	@ 0004f32a a072
.org 0x4f32c
	adds r0, r4, #0	@ 0004f32c 201c
.org 0x4f32e
	adds r0, #140	@ 0004f32e 8c30
.org 0x4f330
	str r5, [r0, #0]	@ 0004f330 0560
.org 0x4f332
	adds r0, #4	@ 0004f332 0430
.org 0x4f334
	str r5, [r0, #0]	@ 0004f334 0560
.org 0x4f336
	adds r0, #4	@ 0004f336 0430
.org 0x4f338
	strb r5, [r0, #0]	@ 0004f338 0570
.org 0x4f33a
	ldrb r1, [r4, #10]	@ 0004f33a a17a
.org 0x4f33c
	movs r0, #251	@ 0004f33c fb20
.org 0x4f33e
	ands r0, r1	@ 0004f33e 0840
.org 0x4f340
	strb r0, [r4, #10]	@ 0004f340 a072
.org 0x4f342
	ldr r1, [pc, #24]	@ 0004f342 0649
.org 0x4f344
	ldrb r0, [r4, #9]	@ 0004f344 607a
.org 0x4f346
	lsls r0, r0, #2	@ 0004f346 8000
.org 0x4f348
	adds r0, r0, r1	@ 0004f348 4018
.org 0x4f34a
	movs r1, #3	@ 0004f34a 0321
.org 0x4f34c
	str r1, [r4, #12]	@ 0004f34c e160
.org 0x4f34e
	ldr r0, [r0, #0]	@ 0004f34e 0068
.org 0x4f350
	ldr r0, [r0, #12]	@ 0004f350 c068
.org 0x4f352
	str r0, [r4, #20]	@ 0004f352 6061
.org 0x4f354
	pop {r4, r5}	@ 0004f354 30bc
.org 0x4f356
	pop {r0}	@ 0004f356 01bc
.org 0x4f358
	bx r0	@ 0004f358 0047
