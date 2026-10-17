@ FUN_080ca2ec  entry 0x080ca2ec  size 144
.thumb
.org 0xca2ec
FUN_080ca2ec:
	push {lr}	@ 000ca2ec 00b5
.org 0xca2ee
	adds r2, r0, #0	@ 000ca2ee 021c
.org 0xca2f0
	adds r0, #180	@ 000ca2f0 b430
.org 0xca2f2
	ldrb r0, [r0, #0]	@ 000ca2f2 0078
.org 0xca2f4
	cmp r0, #0	@ 000ca2f4 0028
.org 0xca2f6
	bne.n 0xca33c	@ 000ca2f6 21d1
.org 0xca2f8
	adds r0, r2, #0	@ 000ca2f8 101c
.org 0xca2fa
	adds r0, #183	@ 000ca2fa b730
.org 0xca2fc
	ldrb r1, [r0, #0]	@ 000ca2fc 0178
.org 0xca2fe
	adds r3, r0, #0	@ 000ca2fe 031c
.org 0xca300
	cmp r1, #0	@ 000ca300 0029
.org 0xca302
	bne.n 0xca312	@ 000ca302 06d1
.org 0xca304
	ldrb r0, [r2, #17]	@ 000ca304 507c
.org 0xca306
	cmp r0, #3	@ 000ca306 0328
.org 0xca308
	bne.n 0xca312	@ 000ca308 03d1
.org 0xca30a
	ldr r0, [r2, #84]	@ 000ca30a 506d
.org 0xca30c
	ldr r1, [pc, #24]	@ 000ca30c 0649
.org 0xca30e
	adds r0, r0, r1	@ 000ca30e 4018
.org 0xca310
	str r0, [r2, #84]	@ 000ca310 5065
.org 0xca312
	ldrb r0, [r3, #0]	@ 000ca312 1878
.org 0xca314
	cmp r0, #1	@ 000ca314 0128
.org 0xca316
	bne.n 0xca380	@ 000ca316 33d1
.org 0xca318
	ldrb r0, [r2, #17]	@ 000ca318 507c
.org 0xca31a
	cmp r0, #0	@ 000ca31a 0028
.org 0xca31c
	bne.n 0xca32c	@ 000ca31c 06d1
.org 0xca31e
	ldr r0, [r2, #84]	@ 000ca31e 506d
.org 0xca320
	ldr r3, [pc, #4]	@ 000ca320 014b
.org 0xca322
	adds r0, r0, r3	@ 000ca322 c018
.org 0xca324
	str r0, [r2, #84]	@ 000ca324 5065
.org 0xca326
	b.n 0xca380	@ 000ca326 2be0
.org 0xca328
	.byte 0x00,0xff,0xff,0xff	@ 000ca328 data
.org 0xca32c
	cmp r0, #3	@ 000ca32c 0328
.org 0xca32e
	bne.n 0xca380	@ 000ca32e 27d1
.org 0xca330
	ldr r0, [r2, #84]	@ 000ca330 506d
.org 0xca332
	movs r1, #128	@ 000ca332 8021
.org 0xca334
	lsls r1, r1, #1	@ 000ca334 4900
.org 0xca336
	adds r0, r0, r1	@ 000ca336 4018
.org 0xca338
	str r0, [r2, #84]	@ 000ca338 5065
.org 0xca33a
	b.n 0xca380	@ 000ca33a 21e0
.org 0xca33c
	adds r0, r2, #0	@ 000ca33c 101c
.org 0xca33e
	adds r0, #182	@ 000ca33e b630
.org 0xca340
	ldrb r0, [r0, #0]	@ 000ca340 0078
.org 0xca342
	cmp r0, #1	@ 000ca342 0128
.org 0xca344
	bne.n 0xca364	@ 000ca344 0ed1
.org 0xca346
	ldrb r1, [r2, #17]	@ 000ca346 517c
.org 0xca348
	cmp r1, #0	@ 000ca348 0029
.org 0xca34a
	bne.n 0xca354	@ 000ca34a 03d1
.org 0xca34c
	ldr r0, [r2, #88]	@ 000ca34c 906d
.org 0xca34e
	ldr r3, [pc, #16]	@ 000ca34e 044b
.org 0xca350
	adds r0, r0, r3	@ 000ca350 c018
.org 0xca352
	str r0, [r2, #88]	@ 000ca352 9065
.org 0xca354
	cmp r1, #3	@ 000ca354 0329
.org 0xca356
	bne.n 0xca380	@ 000ca356 13d1
.org 0xca358
	ldr r0, [r2, #88]	@ 000ca358 906d
.org 0xca35a
	movs r1, #128	@ 000ca35a 8021
.org 0xca35c
	lsls r1, r1, #2	@ 000ca35c 8900
.org 0xca35e
	b.n 0xca37c	@ 000ca35e 0de0
.org 0xca360
	.byte 0x00,0xff,0xff,0xff	@ 000ca360 data
.org 0xca364
	ldrb r1, [r2, #17]	@ 000ca364 517c
.org 0xca366
	cmp r1, #0	@ 000ca366 0029
.org 0xca368
	bne.n 0xca374	@ 000ca368 04d1
.org 0xca36a
	ldr r0, [r2, #88]	@ 000ca36a 906d
.org 0xca36c
	movs r3, #128	@ 000ca36c 8023
.org 0xca36e
	lsls r3, r3, #1	@ 000ca36e 5b00
.org 0xca370
	adds r0, r0, r3	@ 000ca370 c018
.org 0xca372
	str r0, [r2, #88]	@ 000ca372 9065
.org 0xca374
	cmp r1, #3	@ 000ca374 0329
.org 0xca376
	bne.n 0xca380	@ 000ca376 03d1
.org 0xca378
	ldr r0, [r2, #88]	@ 000ca378 906d
.org 0xca37a
	ldr r1, [pc, #8]	@ 000ca37a 0249
