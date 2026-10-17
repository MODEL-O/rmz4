@ FUN_080a234c  entry 0x080a234c  size 46
.thumb
.org 0xa234c
FUN_080a234c:
	push {r4, lr}	@ 000a234c 10b5
.org 0xa234e
	adds r4, r0, #0	@ 000a234e 041c
.org 0xa2350
	adds r1, r4, #0	@ 000a2350 211c
.org 0xa2352
	adds r1, #84	@ 000a2352 5431
.org 0xa2354
	movs r0, #3	@ 000a2354 0320
.org 0xa2356
	bl 0xd0c88	@ 000a2356 2ef097fc
.org 0xa235a
	adds r1, r4, #0	@ 000a235a 211c
.org 0xa235c
	adds r1, #34	@ 000a235c 2231
.org 0xa235e
	movs r0, #0	@ 000a235e 0020
.org 0xa2360
	strb r0, [r1, #0]	@ 000a2360 0870
.org 0xa2362
	ldr r1, [pc, #24]	@ 000a2362 0649
.org 0xa2364
	ldrb r0, [r4, #9]	@ 000a2364 607a
.org 0xa2366
	lsls r0, r0, #2	@ 000a2366 8000
.org 0xa2368
	adds r0, r0, r1	@ 000a2368 4018
.org 0xa236a
	movs r1, #4	@ 000a236a 0421
.org 0xa236c
	str r1, [r4, #12]	@ 000a236c e160
.org 0xa236e
	ldr r0, [r0, #0]	@ 000a236e 0068
.org 0xa2370
	ldr r0, [r0, #16]	@ 000a2370 0069
.org 0xa2372
	str r0, [r4, #20]	@ 000a2372 6061
.org 0xa2374
	pop {r4}	@ 000a2374 10bc
.org 0xa2376
	pop {r0}	@ 000a2376 01bc
.org 0xa2378
	bx r0	@ 000a2378 0047
