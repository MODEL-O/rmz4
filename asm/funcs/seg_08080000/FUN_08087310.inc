@ FUN_08087310  entry 0x08087310  size 110
.thumb
.org 0x87310
FUN_08087310:
	push {r4, lr}	@ 00087310 10b5
.org 0x87312
	sub sp, #8	@ 00087312 82b0
.org 0x87314
	adds r4, r0, #0	@ 00087314 041c
.org 0x87316
	adds r0, #140	@ 00087316 8c30
.org 0x87318
	ldr r0, [r0, #0]	@ 00087318 0068
.org 0x8731a
	movs r1, #1	@ 0008731a 0121
.org 0x8731c
	ands r0, r1	@ 0008731c 0840
.org 0x8731e
	cmp r0, #0	@ 0008731e 0028
.org 0x87320
	beq.n 0x8737e	@ 00087320 2dd0
.org 0x87322
	ldr r2, [r4, #44]	@ 00087322 e26a
.org 0x87324
	cmp r2, #0	@ 00087324 002a
.org 0x87326
	bne.n 0x8737e	@ 00087326 2ad1
.org 0x87328
	ldr r0, [pc, #48]	@ 00087328 0c48
.org 0x8732a
	ldr r1, [pc, #52]	@ 0008732a 0d49
.org 0x8732c
	adds r0, r0, r1	@ 0008732c 4018
.org 0x8732e
	ldr r1, [r4, #88]	@ 0008732e a16d
.org 0x87330
	ldr r0, [r0, #0]	@ 00087330 0068
.org 0x87332
	cmp r1, r0	@ 00087332 8142
.org 0x87334
	ble.n 0x87364	@ 00087334 16dd
.org 0x87336
	adds r0, r4, #0	@ 00087336 201c
.org 0x87338
	adds r0, #151	@ 00087338 9730
.org 0x8733a
	ldrb r1, [r0, #0]	@ 0008733a 0178
.org 0x8733c
	movs r0, #240	@ 0008733c f020
.org 0x8733e
	ands r0, r1	@ 0008733e 0840
.org 0x87340
	cmp r0, #32	@ 00087340 2028
.org 0x87342
	bne.n 0x87364	@ 00087342 0fd1
.org 0x87344
	movs r0, #128	@ 00087344 8020
.org 0x87346
	lsls r0, r0, #4	@ 00087346 0001
.org 0x87348
	str r0, [sp, #0]	@ 00087348 0090
.org 0x8734a
	str r2, [sp, #4]	@ 0008734a 0192
.org 0x8734c
	adds r0, r4, #0	@ 0008734c 201c
.org 0x8734e
	adds r0, #84	@ 0008734e 5430
.org 0x87350
	mov r1, sp	@ 00087350 6946
.org 0x87352
	movs r2, #6	@ 00087352 0622
.org 0x87354
	movs r3, #8	@ 00087354 0823
.org 0x87356
	bl 0x88ff0	@ 00087356 01f04bfe
.org 0x8735a
	b.n 0x8737e	@ 0008735a 10e0
.org 0x8735c
	.byte 0xb0,0x0a,0x00,0x02	@ 0008735c data
.org 0x87360
	.byte 0x0c,0xc0,0x02,0x00	@ 00087360 data
.org 0x87364
	ldr r2, [pc, #32]	@ 00087364 084a
.org 0x87366
	movs r0, #0	@ 00087366 0020
.org 0x87368
	adds r1, r4, #0	@ 00087368 211c
.org 0x8736a
	bl 0x2adac	@ 0008736a a3f71ffd
.org 0x8736e
	str r0, [r4, #44]	@ 0008736e e062
.org 0x87370
	cmp r0, #0	@ 00087370 0028
.org 0x87372
	beq.n 0x8737e	@ 00087372 04d0
.org 0x87374
	movs r1, #0	@ 00087374 0021
.org 0x87376
	movs r0, #11	@ 00087376 0b20
.org 0x87378
	strb r0, [r4, #13]	@ 00087378 6073
.org 0x8737a
	strb r1, [r4, #14]	@ 0008737a a173
.org 0x8737c
	strb r1, [r4, #15]	@ 0008737c e173
