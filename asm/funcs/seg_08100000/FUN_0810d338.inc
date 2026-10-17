@ FUN_0810d338  entry 0x0810d338  size 90
.thumb
.org 0x10d338
FUN_0810d338:
	push {lr}	@ 0010d338 00b5
.org 0x10d33a
	b.n 0x10d350	@ 0010d33a 09e0
.org 0x10d33c
	adds r2, r0, #0	@ 0010d33c 021c
.org 0x10d33e
	cmp r0, #0	@ 0010d33e 0028
.org 0x10d340
	bge.n 0x10d344	@ 0010d340 00da
.org 0x10d342
	adds r2, #15	@ 0010d342 0f32
.org 0x10d344
	asrs r0, r2, #4	@ 0010d344 1011
.org 0x10d346
	adds r2, r1, #0	@ 0010d346 0a1c
.org 0x10d348
	cmp r1, #0	@ 0010d348 0029
.org 0x10d34a
	bge.n 0x10d34e	@ 0010d34a 00da
.org 0x10d34c
	adds r2, #15	@ 0010d34c 0f32
.org 0x10d34e
	asrs r1, r2, #4	@ 0010d34e 1111
.org 0x10d350
	adds r2, r0, #0	@ 0010d350 021c
.org 0x10d352
	cmp r0, #0	@ 0010d352 0028
.org 0x10d354
	bge.n 0x10d358	@ 0010d354 00da
.org 0x10d356
	negs r2, r0	@ 0010d356 4242
.org 0x10d358
	ldr r3, [pc, #56]	@ 0010d358 0e4b
.org 0x10d35a
	cmp r2, r3	@ 0010d35a 9a42
.org 0x10d35c
	bgt.n 0x10d33c	@ 0010d35c eedc
.org 0x10d35e
	adds r2, r1, #0	@ 0010d35e 0a1c
.org 0x10d360
	cmp r1, #0	@ 0010d360 0029
.org 0x10d362
	bge.n 0x10d366	@ 0010d362 00da
.org 0x10d364
	negs r2, r1	@ 0010d364 4a42
.org 0x10d366
	cmp r2, r3	@ 0010d366 9a42
.org 0x10d368
	bgt.n 0x10d33c	@ 0010d368 e8dc
.org 0x10d36a
	cmp r0, #0	@ 0010d36a 0028
.org 0x10d36c
	bne.n 0x10d370	@ 0010d36c 00d1
.org 0x10d36e
	movs r0, #1	@ 0010d36e 0120
.org 0x10d370
	cmp r1, #0	@ 0010d370 0029
.org 0x10d372
	bne.n 0x10d376	@ 0010d372 00d1
.org 0x10d374
	movs r1, #1	@ 0010d374 0121
.org 0x10d376
	lsls r0, r0, #16	@ 0010d376 0004
.org 0x10d378
	asrs r0, r0, #16	@ 0010d378 0014
.org 0x10d37a
	lsls r1, r1, #16	@ 0010d37a 0904
.org 0x10d37c
	asrs r1, r1, #16	@ 0010d37c 0914
.org 0x10d37e
	bl 0x128bdc	@ 0010d37e 1bf02dfc
.org 0x10d382
	lsls r0, r0, #16	@ 0010d382 0004
.org 0x10d384
	lsrs r0, r0, #16	@ 0010d384 000c
.org 0x10d386
	adds r0, #128	@ 0010d386 8030
.org 0x10d388
	asrs r0, r0, #8	@ 0010d388 0012
.org 0x10d38a
	movs r1, #255	@ 0010d38a ff21
.org 0x10d38c
	ands r0, r1	@ 0010d38c 0840
.org 0x10d38e
	pop {r1}	@ 0010d38e 02bc
.org 0x10d390
	bx r1	@ 0010d390 0847
