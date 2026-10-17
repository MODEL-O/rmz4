@ FUN_080e53b4  entry 0x080e53b4  size 138
.thumb
.org 0xe53b4
FUN_080e53b4:
	push {r4, r5, lr}	@ 000e53b4 30b5
.org 0xe53b6
	sub sp, #8	@ 000e53b6 82b0
.org 0xe53b8
	adds r4, r0, #0	@ 000e53b8 041c
.org 0xe53ba
	movs r3, #0	@ 000e53ba 0023
.org 0xe53bc
	ldr r0, [pc, #68]	@ 000e53bc 1148
.org 0xe53be
	ldr r0, [r0, #0]	@ 000e53be 0068
.org 0xe53c0
	ldr r0, [r0, #84]	@ 000e53c0 406d
.org 0xe53c2
	ldr r1, [r4, #84]	@ 000e53c2 616d
.org 0xe53c4
	cmp r0, r1	@ 000e53c4 8842
.org 0xe53c6
	ble.n 0xe53ca	@ 000e53c6 00dd
.org 0xe53c8
	movs r3, #1	@ 000e53c8 0123
.org 0xe53ca
	ldrb r5, [r4, #17]	@ 000e53ca 657c
.org 0xe53cc
	cmp r5, #0	@ 000e53cc 002d
.org 0xe53ce
	bne.n 0xe540c	@ 000e53ce 1dd1
.org 0xe53d0
	str r1, [sp, #0]	@ 000e53d0 0091
.org 0xe53d2
	ldr r0, [r4, #88]	@ 000e53d2 a06d
.org 0xe53d4
	ldr r1, [pc, #48]	@ 000e53d4 0c49
.org 0xe53d6
	adds r0, r0, r1	@ 000e53d6 4018
.org 0xe53d8
	str r0, [sp, #4]	@ 000e53d8 0190
.org 0xe53da
	movs r2, #128	@ 000e53da 8022
.org 0xe53dc
	lsls r2, r2, #2	@ 000e53dc 9200
.org 0xe53de
	movs r0, #0	@ 000e53de 0020
.org 0xe53e0
	mov r1, sp	@ 000e53e0 6946
.org 0xe53e2
	bl 0xd0dc4	@ 000e53e2 ebf7effc
.org 0xe53e6
	adds r0, r4, #0	@ 000e53e6 201c
.org 0xe53e8
	adds r0, #84	@ 000e53e8 5430
.org 0xe53ea
	movs r1, #0	@ 000e53ea 0021
.org 0xe53ec
	movs r2, #1	@ 000e53ec 0122
.org 0xe53ee
	bl 0xe52b4	@ 000e53ee fff761ff
.org 0xe53f2
	str r5, [r4, #92]	@ 000e53f2 e565
.org 0xe53f4
	str r5, [r4, #96]	@ 000e53f4 2566
.org 0xe53f6
	str r5, [r4, #104]	@ 000e53f6 a566
.org 0xe53f8
	adds r1, r4, #0	@ 000e53f8 211c
.org 0xe53fa
	adds r1, #37	@ 000e53fa 2531
.org 0xe53fc
	movs r0, #24	@ 000e53fc 1820
.org 0xe53fe
	strb r0, [r1, #0]	@ 000e53fe 0870
.org 0xe5400
	b.n 0xe5428	@ 000e5400 12e0
.org 0xe5402
	.byte 0x00	@ 000e5402 data
.org 0xe5403
	.byte 0x00	@ 000e5403 data
.org 0xe5404
	.byte 0xf0,0xdb,0x02,0x02	@ 000e5404 data
.org 0xe5408
	.byte 0x00,0xec,0xff,0xff	@ 000e5408 data
.org 0xe540c
	movs r1, #192	@ 000e540c c021
.org 0xe540e
	lsls r1, r1, #1	@ 000e540e 4900
.org 0xe5410
	str r1, [r4, #92]	@ 000e5410 e165
.org 0xe5412
	ldr r0, [pc, #52]	@ 000e5412 0d48
.org 0xe5414
	str r0, [r4, #96]	@ 000e5414 2066
.org 0xe5416
	movs r0, #64	@ 000e5416 4020
.org 0xe5418
	str r0, [r4, #104]	@ 000e5418 a066
.org 0xe541a
	cmp r3, #1	@ 000e541a 012b
.org 0xe541c
	bne.n 0xe5428	@ 000e541c 04d1
.org 0xe541e
	lsls r0, r1, #8	@ 000e541e 0802
.org 0xe5420
	negs r0, r0	@ 000e5420 4042
.org 0xe5422
	adds r0, #255	@ 000e5422 ff30
.org 0xe5424
	asrs r0, r0, #8	@ 000e5424 0012
.org 0xe5426
	str r0, [r4, #92]	@ 000e5426 e065
.org 0xe5428
	ldr r1, [pc, #32]	@ 000e5428 0849
.org 0xe542a
	ldrb r0, [r4, #17]	@ 000e542a 607c
.org 0xe542c
	lsls r0, r0, #1	@ 000e542c 4000
.org 0xe542e
	adds r0, r0, r1	@ 000e542e 4018
.org 0xe5430
	ldrh r1, [r0, #0]	@ 000e5430 0188
.org 0xe5432
	adds r0, r4, #0	@ 000e5432 201c
.org 0xe5434
	bl 0x1cf00	@ 000e5434 37f764fd
.org 0xe5438
	movs r1, #0	@ 000e5438 0021
.org 0xe543a
	movs r0, #20	@ 000e543a 1420
.org 0xe543c
	strb r0, [r4, #18]	@ 000e543c a074
