@ FUN_08118348  entry 0x08118348  size 88
.thumb
.org 0x118348
FUN_08118348:
	push {r4, r5, r6, r7, lr}	@ 00118348 f0b5
.org 0x11834a
	mov r7, r8	@ 0011834a 4746
.org 0x11834c
	push {r7}	@ 0011834c 80b4
.org 0x11834e
	lsls r0, r0, #16	@ 0011834e 0004
.org 0x118350
	lsrs r4, r0, #16	@ 00118350 040c
.org 0x118352
	lsls r1, r1, #24	@ 00118352 0906
.org 0x118354
	lsrs r7, r1, #24	@ 00118354 0f0e
.org 0x118356
	lsls r2, r2, #24	@ 00118356 1206
.org 0x118358
	lsrs r6, r2, #24	@ 00118358 160e
.org 0x11835a
	movs r5, #0	@ 0011835a 0025
.org 0x11835c
	ldr r0, [pc, #56]	@ 0011835c 0e48
.org 0x11835e
	mov r8, r0	@ 0011835e 8046
.org 0x118360
	adds r0, r4, #0	@ 00118360 201c
.org 0x118362
	movs r1, #10	@ 00118362 0a21
.org 0x118364
	bl 0x129198	@ 00118364 10f018ff
.org 0x118368
	lsls r0, r0, #16	@ 00118368 0004
.org 0x11836a
	lsrs r0, r0, #15	@ 0011836a c00b
.org 0x11836c
	adds r0, #60	@ 0011836c 3c30
.org 0x11836e
	add r0, r8	@ 0011836e 4044
.org 0x118370
	ldrh r0, [r0, #0]	@ 00118370 0088
.org 0x118372
	ldr r1, [pc, #40]	@ 00118372 0a49
.org 0x118374
	adds r0, r0, r1	@ 00118374 4018
.org 0x118376
	subs r1, r7, r5	@ 00118376 791b
.org 0x118378
	adds r2, r6, #0	@ 00118378 321c
.org 0x11837a
	bl 0x10d85c	@ 0011837a f5f76ffa
.org 0x11837e
	adds r0, r4, #0	@ 0011837e 201c
.org 0x118380
	movs r1, #10	@ 00118380 0a21
.org 0x118382
	bl 0x129120	@ 00118382 10f0cdfe
.org 0x118386
	lsls r0, r0, #16	@ 00118386 0004
.org 0x118388
	lsrs r4, r0, #16	@ 00118388 040c
.org 0x11838a
	cmp r4, #0	@ 0011838a 002c
.org 0x11838c
	beq.n 0x1183a0	@ 0011838c 08d0
.org 0x11838e
	adds r0, r5, #1	@ 0011838e 681c
.org 0x118390
	lsls r0, r0, #24	@ 00118390 0006
.org 0x118392
	lsrs r5, r0, #24	@ 00118392 050e
.org 0x118394
	b.n 0x118360	@ 00118394 e4e7
.org 0x118396
	.byte 0x00	@ 00118396 data
.org 0x118397
	.byte 0x00	@ 00118397 data
.org 0x118398
	.byte 0xf8,0xcf,0x86,0x08	@ 00118398 data
.org 0x11839c
	.byte 0x5f,0x0e,0x01,0x09	@ 0011839c data
