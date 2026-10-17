@ FUN_080e23ac  entry 0x080e23ac  size 130
.thumb
.org 0xe23ac
FUN_080e23ac:
	push {r4, r5, r6, lr}	@ 000e23ac 70b5
.org 0xe23ae
	adds r6, r0, #0	@ 000e23ae 061c
.org 0xe23b0
	ldrb r0, [r6, #17]	@ 000e23b0 707c
.org 0xe23b2
	cmp r0, #4	@ 000e23b2 0428
.org 0xe23b4
	bne.n 0xe23e8	@ 000e23b4 18d1
.org 0xe23b6
	adds r4, r6, #0	@ 000e23b6 341c
.org 0xe23b8
	adds r4, #84	@ 000e23b8 5434
.org 0xe23ba
	movs r0, #2	@ 000e23ba 0220
.org 0xe23bc
	adds r1, r4, #0	@ 000e23bc 211c
.org 0xe23be
	bl 0xd0c88	@ 000e23be eef763fc
.org 0xe23c2
	adds r0, r6, #0	@ 000e23c2 301c
.org 0xe23c4
	bl 0xe25a8	@ 000e23c4 00f0f0f8
.org 0xe23c8
	movs r1, #192	@ 000e23c8 c021
.org 0xe23ca
	lsls r1, r1, #2	@ 000e23ca 8900
.org 0xe23cc
	ldrb r2, [r6, #10]	@ 000e23cc b27a
.org 0xe23ce
	lsrs r2, r2, #4	@ 000e23ce 1209
.org 0xe23d0
	movs r5, #1	@ 000e23d0 0125
.org 0xe23d2
	ands r2, r5	@ 000e23d2 2a40
.org 0xe23d4
	adds r0, r4, #0	@ 000e23d4 201c
.org 0xe23d6
	bl 0xe2188	@ 000e23d6 fff7d7fe
.org 0xe23da
	ldr r1, [pc, #8]	@ 000e23da 0249
.org 0xe23dc
	ldrb r2, [r6, #10]	@ 000e23dc b27a
.org 0xe23de
	lsrs r2, r2, #4	@ 000e23de 1209
.org 0xe23e0
	ands r2, r5	@ 000e23e0 2a40
.org 0xe23e2
	b.n 0xe2408	@ 000e23e2 11e0
.org 0xe23e4
	.byte 0x02,0x03,0x00,0x00	@ 000e23e4 data
.org 0xe23e8
	cmp r0, #3	@ 000e23e8 0328
.org 0xe23ea
	bne.n 0xe2414	@ 000e23ea 13d1
.org 0xe23ec
	adds r4, r6, #0	@ 000e23ec 341c
.org 0xe23ee
	adds r4, #84	@ 000e23ee 5434
.org 0xe23f0
	movs r0, #2	@ 000e23f0 0220
.org 0xe23f2
	adds r1, r4, #0	@ 000e23f2 211c
.org 0xe23f4
	bl 0xd0c88	@ 000e23f4 eef748fc
.org 0xe23f8
	adds r0, r6, #0	@ 000e23f8 301c
.org 0xe23fa
	bl 0xe25a8	@ 000e23fa 00f0d5f8
.org 0xe23fe
	ldr r1, [pc, #16]	@ 000e23fe 0449
.org 0xe2400
	ldrb r2, [r6, #10]	@ 000e2400 b27a
.org 0xe2402
	lsrs r2, r2, #4	@ 000e2402 1209
.org 0xe2404
	movs r0, #1	@ 000e2404 0120
.org 0xe2406
	ands r2, r0	@ 000e2406 0240
.org 0xe2408
	adds r0, r4, #0	@ 000e2408 201c
.org 0xe240a
	bl 0xe2188	@ 000e240a fff7bdfe
.org 0xe240e
	b.n 0xe241e	@ 000e240e 06e0
.org 0xe2410
	.byte 0x01,0x03,0x00,0x00	@ 000e2410 data
.org 0xe2414
	adds r1, r6, #0	@ 000e2414 311c
.org 0xe2416
	adds r1, #84	@ 000e2416 5431
.org 0xe2418
	movs r0, #3	@ 000e2418 0320
.org 0xe241a
	bl 0xd0c88	@ 000e241a eef735fc
.org 0xe241e
	ldr r1, [pc, #24]	@ 000e241e 0649
.org 0xe2420
	ldrb r0, [r6, #9]	@ 000e2420 707a
.org 0xe2422
	lsls r0, r0, #2	@ 000e2422 8000
.org 0xe2424
	adds r0, r0, r1	@ 000e2424 4018
.org 0xe2426
	movs r1, #4	@ 000e2426 0421
.org 0xe2428
	str r1, [r6, #12]	@ 000e2428 f160
.org 0xe242a
	ldr r0, [r0, #0]	@ 000e242a 0068
.org 0xe242c
	ldr r0, [r0, #16]	@ 000e242c 0069
