@ FUN_080ea3ec  entry 0x080ea3ec  size 80
.thumb
.org 0xea3ec
FUN_080ea3ec:
	push {r4, r5, lr}	@ 000ea3ec 30b5
.org 0xea3ee
	adds r5, r0, #0	@ 000ea3ee 051c
.org 0xea3f0
	ldrb r0, [r5, #14]	@ 000ea3f0 a87b
.org 0xea3f2
	cmp r0, #0	@ 000ea3f2 0028
.org 0xea3f4
	beq.n 0xea3fc	@ 000ea3f4 02d0
.org 0xea3f6
	cmp r0, #1	@ 000ea3f6 0128
.org 0xea3f8
	beq.n 0xea430	@ 000ea3f8 1ad0
.org 0xea3fa
	b.n 0xea436	@ 000ea3fa 1ce0
.org 0xea3fc
	adds r0, r5, #0	@ 000ea3fc 281c
.org 0xea3fe
	adds r0, #184	@ 000ea3fe b830
.org 0xea400
	ldrb r1, [r0, #0]	@ 000ea400 0178
.org 0xea402
	lsls r1, r1, #8	@ 000ea402 0902
.org 0xea404
	adds r0, r5, #0	@ 000ea404 281c
.org 0xea406
	bl 0x1cf00	@ 000ea406 32f77bfd
.org 0xea40a
	ldrb r1, [r5, #10]	@ 000ea40a a97a
.org 0xea40c
	movs r0, #4	@ 000ea40c 0420
.org 0xea40e
	orrs r0, r1	@ 000ea40e 0843
.org 0xea410
	strb r0, [r5, #10]	@ 000ea410 a872
.org 0xea412
	adds r4, r5, #0	@ 000ea412 2c1c
.org 0xea414
	adds r4, #116	@ 000ea414 7434
.org 0xea416
	ldr r1, [pc, #36]	@ 000ea416 0949
.org 0xea418
	adds r2, r5, #0	@ 000ea418 2a1c
.org 0xea41a
	adds r2, #84	@ 000ea41a 5432
.org 0xea41c
	adds r0, r4, #0	@ 000ea41c 201c
.org 0xea41e
	movs r3, #0	@ 000ea41e 0023
.org 0xea420
	bl 0x5760	@ 000ea420 1bf79ef9
.org 0xea424
	str r5, [r4, #44]	@ 000ea424 e562
.org 0xea426
	ldr r0, [pc, #24]	@ 000ea426 0648
.org 0xea428
	str r0, [r4, #36]	@ 000ea428 6062
.org 0xea42a
	ldrb r0, [r5, #14]	@ 000ea42a a87b
.org 0xea42c
	adds r0, #1	@ 000ea42c 0130
.org 0xea42e
	strb r0, [r5, #14]	@ 000ea42e a873
.org 0xea430
	adds r0, r5, #0	@ 000ea430 281c
.org 0xea432
	bl 0x1cff0	@ 000ea432 32f7ddfd
.org 0xea436
	pop {r4, r5}	@ 000ea436 30bc
.org 0xea438
	pop {r0}	@ 000ea438 01bc
.org 0xea43a
	bx r0	@ 000ea43a 0047
