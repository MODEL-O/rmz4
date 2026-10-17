@ FUN_080a2308  entry 0x080a2308  size 62
.thumb
.org 0xa2308
FUN_080a2308:
	push {r4, lr}	@ 000a2308 10b5
.org 0xa230a
	adds r4, r0, #0	@ 000a230a 041c
.org 0xa230c
	adds r0, #140	@ 000a230c 8c30
.org 0xa230e
	ldr r0, [r0, #0]	@ 000a230e 0068
.org 0xa2310
	movs r1, #128	@ 000a2310 8021
.org 0xa2312
	lsls r1, r1, #2	@ 000a2312 8900
.org 0xa2314
	ands r0, r1	@ 000a2314 0840
.org 0xa2316
	cmp r0, #0	@ 000a2316 0028
.org 0xa2318
	beq.n 0xa2338	@ 000a2318 0ed0
.org 0xa231a
	ldr r1, [pc, #24]	@ 000a231a 0649
.org 0xa231c
	ldrb r0, [r4, #9]	@ 000a231c 607a
.org 0xa231e
	lsls r0, r0, #2	@ 000a231e 8000
.org 0xa2320
	adds r0, r0, r1	@ 000a2320 4018
.org 0xa2322
	movs r1, #2	@ 000a2322 0221
.org 0xa2324
	str r1, [r4, #12]	@ 000a2324 e160
.org 0xa2326
	ldr r0, [r0, #0]	@ 000a2326 0068
.org 0xa2328
	ldr r0, [r0, #8]	@ 000a2328 8068
.org 0xa232a
	str r0, [r4, #20]	@ 000a232a 6061
.org 0xa232c
	adds r0, r4, #0	@ 000a232c 201c
.org 0xa232e
	bl 0xa234c	@ 000a232e 00f00df8
.org 0xa2332
	b.n 0xa2344	@ 000a2332 07e0
.org 0xa2334
	.byte 0x40,0xdb,0x85,0x08	@ 000a2334 data
.org 0xa2338
	adds r0, r4, #0	@ 000a2338 201c
.org 0xa233a
	bl 0xa23b8	@ 000a233a 00f03df8
.org 0xa233e
	adds r0, r4, #0	@ 000a233e 201c
.org 0xa2340
	bl 0x1cff0	@ 000a2340 7af756fe
.org 0xa2344
	pop {r4}	@ 000a2344 10bc
