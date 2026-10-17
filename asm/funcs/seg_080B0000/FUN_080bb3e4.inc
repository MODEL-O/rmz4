@ FUN_080bb3e4  entry 0x080bb3e4  size 84
.thumb
.org 0xbb3e4
FUN_080bb3e4:
	push {r4, lr}	@ 000bb3e4 10b5
.org 0xbb3e6
	adds r4, r0, #0	@ 000bb3e6 041c
.org 0xbb3e8
	ldrb r0, [r4, #15]	@ 000bb3e8 e07b
.org 0xbb3ea
	cmp r0, #0	@ 000bb3ea 0028
.org 0xbb3ec
	bne.n 0xbb40a	@ 000bb3ec 0dd1
.org 0xbb3ee
	adds r0, r4, #0	@ 000bb3ee 201c
.org 0xbb3f0
	adds r0, #116	@ 000bb3f0 7430
.org 0xbb3f2
	ldr r1, [pc, #68]	@ 000bb3f2 1149
.org 0xbb3f4
	bl 0x5784	@ 000bb3f4 4af7c6f9
.org 0xbb3f8
	ldr r1, [pc, #64]	@ 000bb3f8 1049
.org 0xbb3fa
	adds r0, r4, #0	@ 000bb3fa 201c
.org 0xbb3fc
	bl 0x1cf00	@ 000bb3fc 61f780fd
.org 0xbb400
	movs r0, #32	@ 000bb400 2020
.org 0xbb402
	strb r0, [r4, #18]	@ 000bb402 a074
.org 0xbb404
	ldrb r0, [r4, #15]	@ 000bb404 e07b
.org 0xbb406
	adds r0, #1	@ 000bb406 0130
.org 0xbb408
	strb r0, [r4, #15]	@ 000bb408 e073
.org 0xbb40a
	adds r0, r4, #0	@ 000bb40a 201c
.org 0xbb40c
	bl 0x1cff0	@ 000bb40c 61f7f0fd
.org 0xbb410
	ldrb r0, [r4, #18]	@ 000bb410 a07c
.org 0xbb412
	cmp r0, #0	@ 000bb412 0028
.org 0xbb414
	beq.n 0xbb41a	@ 000bb414 01d0
.org 0xbb416
	subs r0, #1	@ 000bb416 0138
.org 0xbb418
	strb r0, [r4, #18]	@ 000bb418 a074
.org 0xbb41a
	adds r0, r4, #0	@ 000bb41a 201c
.org 0xbb41c
	adds r0, #115	@ 000bb41c 7330
.org 0xbb41e
	ldrb r0, [r0, #0]	@ 000bb41e 0078
.org 0xbb420
	cmp r0, #3	@ 000bb420 0328
.org 0xbb422
	bne.n 0xbb432	@ 000bb422 06d1
.org 0xbb424
	ldrb r1, [r4, #18]	@ 000bb424 a17c
.org 0xbb426
	cmp r1, #0	@ 000bb426 0029
.org 0xbb428
	bne.n 0xbb432	@ 000bb428 03d1
.org 0xbb42a
	movs r0, #4	@ 000bb42a 0420
.org 0xbb42c
	strb r0, [r4, #13]	@ 000bb42c 6073
.org 0xbb42e
	strb r1, [r4, #14]	@ 000bb42e a173
.org 0xbb430
	strb r1, [r4, #15]	@ 000bb430 e173
.org 0xbb432
	pop {r4}	@ 000bb432 10bc
.org 0xbb434
	pop {r0}	@ 000bb434 01bc
.org 0xbb436
	bx r0	@ 000bb436 0047
