@ FUN_080b6360  entry 0x080b6360  size 74
.thumb
.org 0xb6360
FUN_080b6360:
	push {r4, r5, r6, lr}	@ 000b6360 70b5
.org 0xb6362
	adds r4, r0, #0	@ 000b6362 041c
.org 0xb6364
	ldr r6, [r4, #40]	@ 000b6364 a66a
.org 0xb6366
	adds r0, #181	@ 000b6366 b530
.org 0xb6368
	ldrb r5, [r0, #0]	@ 000b6368 0578
.org 0xb636a
	ldrb r0, [r4, #15]	@ 000b636a e07b
.org 0xb636c
	cmp r0, #0	@ 000b636c 0028
.org 0xb636e
	bne.n 0xb6384	@ 000b636e 09d1
.org 0xb6370
	movs r0, #210	@ 000b6370 d220
.org 0xb6372
	bl 0x2b10	@ 000b6372 4cf7cdfb
.org 0xb6376
	ldr r1, [pc, #52]	@ 000b6376 0d49
.org 0xb6378
	adds r0, r4, #0	@ 000b6378 201c
.org 0xb637a
	bl 0x1cf00	@ 000b637a 66f7c1fd
.org 0xb637e
	ldrb r0, [r4, #15]	@ 000b637e e07b
.org 0xb6380
	adds r0, #1	@ 000b6380 0130
.org 0xb6382
	strb r0, [r4, #15]	@ 000b6382 e073
.org 0xb6384
	adds r0, r4, #0	@ 000b6384 201c
.org 0xb6386
	bl 0x1cff0	@ 000b6386 66f733fe
.org 0xb638a
	adds r0, r6, #0	@ 000b638a 301c
.org 0xb638c
	adds r0, #207	@ 000b638c cf30
.org 0xb638e
	ldrb r0, [r0, #0]	@ 000b638e 0078
.org 0xb6390
	asrs r0, r5	@ 000b6390 2841
.org 0xb6392
	movs r1, #1	@ 000b6392 0121
.org 0xb6394
	ands r0, r1	@ 000b6394 0840
.org 0xb6396
	cmp r0, #0	@ 000b6396 0028
.org 0xb6398
	beq.n 0xb63a4	@ 000b6398 04d0
.org 0xb639a
	movs r1, #0	@ 000b639a 0021
.org 0xb639c
	movs r0, #2	@ 000b639c 0220
.org 0xb639e
	strb r0, [r4, #13]	@ 000b639e 6073
.org 0xb63a0
	strb r1, [r4, #14]	@ 000b63a0 a173
.org 0xb63a2
	strb r1, [r4, #15]	@ 000b63a2 e173
.org 0xb63a4
	pop {r4, r5, r6}	@ 000b63a4 70bc
.org 0xb63a6
	pop {r0}	@ 000b63a6 01bc
.org 0xb63a8
	bx r0	@ 000b63a8 0047
