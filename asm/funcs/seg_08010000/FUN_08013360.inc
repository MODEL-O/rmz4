@ FUN_08013360  entry 0x08013360  size 44
.thumb
.org 0x13360
FUN_08013360:
	push {r4, r5, lr}	@ 00013360 30b5
.org 0x13362
	ldr r3, [r0, #92]	@ 00013362 c36d
.org 0x13364
	lsls r3, r3, #16	@ 00013364 1b04
.org 0x13366
	lsrs r3, r3, #20	@ 00013366 1b0d
.org 0x13368
	lsls r3, r3, #2	@ 00013368 9b00
.org 0x1336a
	ldr r4, [pc, #32]	@ 0001336a 084c
.org 0x1336c
	adds r5, r3, r4	@ 0001336c 1d19
.org 0x1336e
	ldr r2, [r0, #52]	@ 0001336e 426b
.org 0x13370
	ldrh r1, [r0, #16]	@ 00013370 018a
.org 0x13372
	lsrs r1, r1, #3	@ 00013372 c908
.org 0x13374
	adds r2, r2, r1	@ 00013374 5218
.org 0x13376
	strh r2, [r5, #0]	@ 00013376 2a80
.org 0x13378
	adds r4, #2	@ 00013378 0234
.org 0x1337a
	adds r3, r3, r4	@ 0001337a 1b19
.org 0x1337c
	ldr r1, [r0, #56]	@ 0001337c 816b
.org 0x1337e
	lsls r0, r1, #3	@ 0001337e c800
.org 0x13380
	subs r0, r0, r1	@ 00013380 401a
.org 0x13382
	lsrs r0, r0, #3	@ 00013382 c008
.org 0x13384
	strh r0, [r3, #0]	@ 00013384 1880
.org 0x13386
	pop {r4, r5}	@ 00013386 30bc
.org 0x13388
	pop {r0}	@ 00013388 01bc
.org 0x1338a
	bx r0	@ 0001338a 0047
