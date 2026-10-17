@ FUN_080c2350  entry 0x080c2350  size 44
.thumb
.org 0xc2350
FUN_080c2350:
	push {lr}	@ 000c2350 00b5
.org 0xc2352
	adds r2, r0, #0	@ 000c2352 021c
.org 0xc2354
	ldrb r0, [r2, #18]	@ 000c2354 907c
.org 0xc2356
	cmp r0, #0	@ 000c2356 0028
.org 0xc2358
	beq.n 0xc2378	@ 000c2358 0ed0
.org 0xc235a
	ldr r1, [pc, #24]	@ 000c235a 0649
.org 0xc235c
	ldrb r0, [r2, #9]	@ 000c235c 507a
.org 0xc235e
	lsls r0, r0, #2	@ 000c235e 8000
.org 0xc2360
	adds r0, r0, r1	@ 000c2360 4018
.org 0xc2362
	movs r1, #2	@ 000c2362 0221
.org 0xc2364
	str r1, [r2, #12]	@ 000c2364 d160
.org 0xc2366
	ldr r0, [r0, #0]	@ 000c2366 0068
.org 0xc2368
	ldr r0, [r0, #8]	@ 000c2368 8068
.org 0xc236a
	str r0, [r2, #20]	@ 000c236a 5061
.org 0xc236c
	adds r0, r2, #0	@ 000c236c 101c
.org 0xc236e
	bl 0xc1bd8	@ 000c236e fff733fc
.org 0xc2372
	b.n 0xc237c	@ 000c2372 03e0
.org 0xc2374
	.byte 0xf4,0x49,0x86,0x08	@ 000c2374 data
.org 0xc2378
	adds r0, #1	@ 000c2378 0130
.org 0xc237a
	strb r0, [r2, #18]	@ 000c237a 9074
