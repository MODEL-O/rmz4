@ FUN_080123c4  entry 0x080123c4  size 142
.thumb
.org 0x123c4
FUN_080123c4:
	push {r4, r5, r6, lr}	@ 000123c4 70b5
.org 0x123c6
	adds r5, r0, #0	@ 000123c6 051c
.org 0x123c8
	ldrb r6, [r5, #14]	@ 000123c8 ae7b
.org 0x123ca
	cmp r6, #0	@ 000123ca 002e
.org 0x123cc
	bne.n 0x1245c	@ 000123cc 46d1
.org 0x123ce
	ldr r0, [r5, #92]	@ 000123ce e86d
.org 0x123d0
	lsls r0, r0, #16	@ 000123d0 0004
.org 0x123d2
	lsrs r0, r0, #20	@ 000123d2 000d
.org 0x123d4
	lsls r2, r0, #1	@ 000123d4 4200
.org 0x123d6
	ldr r3, [pc, #72]	@ 000123d6 124b
.org 0x123d8
	adds r2, r2, r3	@ 000123d8 d218
.org 0x123da
	ldr r4, [r5, #96]	@ 000123da 2c6e
.org 0x123dc
	ldr r1, [r5, #100]	@ 000123dc 696e
.org 0x123de
	orrs r4, r1	@ 000123de 0c43
.org 0x123e0
	movs r1, #68	@ 000123e0 4421
.org 0x123e2
	orrs r4, r1	@ 000123e2 0c43
.org 0x123e4
	strh r4, [r2, #0]	@ 000123e4 1480
.org 0x123e6
	lsls r0, r0, #2	@ 000123e6 8000
.org 0x123e8
	adds r3, #8	@ 000123e8 0833
.org 0x123ea
	adds r0, r0, r3	@ 000123ea c018
.org 0x123ec
	str r6, [r0, #0]	@ 000123ec 0660
.org 0x123ee
	ldr r0, [pc, #52]	@ 000123ee 0d48
.org 0x123f0
	ldr r1, [pc, #52]	@ 000123f0 0d49
.org 0x123f2
	adds r0, r0, r1	@ 000123f2 4018
.org 0x123f4
	ldrb r1, [r0, #0]	@ 000123f4 0178
.org 0x123f6
	movs r0, #15	@ 000123f6 0f20
.org 0x123f8
	ands r0, r1	@ 000123f8 0840
.org 0x123fa
	cmp r0, #0	@ 000123fa 0028
.org 0x123fc
	bne.n 0x12434	@ 000123fc 1ad1
.org 0x123fe
	ldr r0, [pc, #44]	@ 000123fe 0b48
.org 0x12400
	ldr r0, [r0, #0]	@ 00012400 0068
.org 0x12402
	ldr r1, [pc, #44]	@ 00012402 0b49
.org 0x12404
	adds r0, r0, r1	@ 00012404 4018
.org 0x12406
	movs r1, #248	@ 00012406 f821
.org 0x12408
	lsls r1, r1, #5	@ 00012408 4901
.org 0x1240a
	ands r4, r1	@ 0001240a 0c40
.org 0x1240c
	lsls r1, r4, #3	@ 0001240c e100
.org 0x1240e
	movs r2, #192	@ 0001240e c022
.org 0x12410
	lsls r2, r2, #19	@ 00012410 d204
.org 0x12412
	adds r1, r1, r2	@ 00012412 8918
.org 0x12414
	movs r2, #128	@ 00012414 8022
.org 0x12416
	lsls r2, r2, #2	@ 00012416 9200
.org 0x12418
	bl 0x128be0	@ 00012418 16f1e2fb
.org 0x1241c
	b.n 0x12452	@ 0001241c 19e0
.org 0x1241e
	.byte 0x00	@ 0001241e data
.org 0x1241f
	.byte 0x00	@ 0001241f data
.org 0x12420
	.byte 0x04,0x0a,0x00,0x02	@ 00012420 data
.org 0x12424
	.byte 0xb0,0x0a,0x00,0x02	@ 00012424 data
.org 0x12428
	.byte 0x10,0xc0,0x02,0x00	@ 00012428 data
.org 0x1242c
	.byte 0x2c,0xc1,0xb2,0x08	@ 0001242c data
.org 0x12430
	.byte 0x34,0xc1,0xb2,0x08	@ 00012430 data
.org 0x12434
	ldr r0, [pc, #48]	@ 00012434 0c48
.org 0x12436
	ldr r0, [r0, #0]	@ 00012436 0068
.org 0x12438
	ldr r1, [pc, #48]	@ 00012438 0c49
.org 0x1243a
	adds r0, r0, r1	@ 0001243a 4018
.org 0x1243c
	movs r1, #248	@ 0001243c f821
.org 0x1243e
	lsls r1, r1, #5	@ 0001243e 4901
.org 0x12440
	ands r4, r1	@ 00012440 0c40
.org 0x12442
	lsls r1, r4, #3	@ 00012442 e100
.org 0x12444
	movs r2, #192	@ 00012444 c022
.org 0x12446
	lsls r2, r2, #19	@ 00012446 d204
.org 0x12448
	adds r1, r1, r2	@ 00012448 8918
.org 0x1244a
	movs r2, #128	@ 0001244a 8022
.org 0x1244c
	lsls r2, r2, #2	@ 0001244c 9200
.org 0x1244e
	bl 0x128be0	@ 0001244e 16f1c7fb
