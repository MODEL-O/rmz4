@ FUN_080cb404  entry 0x080cb404  size 118
.thumb
.org 0xcb404
FUN_080cb404:
	push {r4, lr}	@ 000cb404 10b5
.org 0xcb406
	adds r4, r0, #0	@ 000cb406 041c
.org 0xcb408
	bl 0x1cff0	@ 000cb408 51f7f2fd
.org 0xcb40c
	ldr r0, [r4, #88]	@ 000cb40c a06d
.org 0xcb40e
	ldr r1, [r4, #96]	@ 000cb40e 216e
.org 0xcb410
	adds r0, r0, r1	@ 000cb410 4018
.org 0xcb412
	str r0, [r4, #88]	@ 000cb412 a065
.org 0xcb414
	adds r1, #64	@ 000cb414 4031
.org 0xcb416
	str r1, [r4, #96]	@ 000cb416 2166
.org 0xcb418
	movs r0, #224	@ 000cb418 e020
.org 0xcb41a
	lsls r0, r0, #3	@ 000cb41a c000
.org 0xcb41c
	cmp r1, r0	@ 000cb41c 8142
.org 0xcb41e
	ble.n 0xcb422	@ 000cb41e 00dd
.org 0xcb420
	str r0, [r4, #96]	@ 000cb420 2066
.org 0xcb422
	ldrb r1, [r4, #18]	@ 000cb422 a17c
.org 0xcb424
	adds r0, r1, #1	@ 000cb424 481c
.org 0xcb426
	strb r0, [r4, #18]	@ 000cb426 a074
.org 0xcb428
	movs r0, #1	@ 000cb428 0120
.org 0xcb42a
	ands r0, r1	@ 000cb42a 0840
.org 0xcb42c
	cmp r0, #0	@ 000cb42c 0028
.org 0xcb42e
	beq.n 0xcb438	@ 000cb42e 03d0
.org 0xcb430
	ldrb r1, [r4, #10]	@ 000cb430 a17a
.org 0xcb432
	movs r0, #254	@ 000cb432 fe20
.org 0xcb434
	ands r0, r1	@ 000cb434 0840
.org 0xcb436
	b.n 0xcb43e	@ 000cb436 02e0
.org 0xcb438
	ldrb r0, [r4, #10]	@ 000cb438 a07a
.org 0xcb43a
	movs r1, #1	@ 000cb43a 0121
.org 0xcb43c
	orrs r0, r1	@ 000cb43c 0843
.org 0xcb43e
	strb r0, [r4, #10]	@ 000cb43e a072
.org 0xcb440
	ldr r0, [pc, #56]	@ 000cb440 0e48
.org 0xcb442
	ldr r0, [r0, #0]	@ 000cb442 0068
.org 0xcb444
	ldr r0, [r0, #88]	@ 000cb444 806d
.org 0xcb446
	ldr r1, [pc, #56]	@ 000cb446 0e49
.org 0xcb448
	adds r0, r0, r1	@ 000cb448 4018
.org 0xcb44a
	ldr r1, [r4, #88]	@ 000cb44a a16d
.org 0xcb44c
	cmp r1, r0	@ 000cb44c 8142
.org 0xcb44e
	ble.n 0xcb474	@ 000cb44e 11dd
.org 0xcb450
	ldr r0, [r4, #84]	@ 000cb450 606d
.org 0xcb452
	bl 0x7c7c	@ 000cb452 3cf713fc
.org 0xcb456
	lsls r0, r0, #16	@ 000cb456 0004
.org 0xcb458
	cmp r0, #0	@ 000cb458 0028
.org 0xcb45a
	beq.n 0xcb474	@ 000cb45a 0bd0
.org 0xcb45c
	ldr r1, [pc, #36]	@ 000cb45c 0949
.org 0xcb45e
	ldrb r0, [r4, #9]	@ 000cb45e 607a
.org 0xcb460
	lsls r0, r0, #2	@ 000cb460 8000
.org 0xcb462
	adds r0, r0, r1	@ 000cb462 4018
.org 0xcb464
	movs r1, #2	@ 000cb464 0221
.org 0xcb466
	str r1, [r4, #12]	@ 000cb466 e160
.org 0xcb468
	ldr r0, [r0, #0]	@ 000cb468 0068
.org 0xcb46a
	ldr r0, [r0, #8]	@ 000cb46a 8068
.org 0xcb46c
	str r0, [r4, #20]	@ 000cb46c 6061
.org 0xcb46e
	adds r0, r4, #0	@ 000cb46e 201c
.org 0xcb470
	bl 0xcb178	@ 000cb470 fff782fe
.org 0xcb474
	pop {r4}	@ 000cb474 10bc
.org 0xcb476
	pop {r0}	@ 000cb476 01bc
.org 0xcb478
	bx r0	@ 000cb478 0047
