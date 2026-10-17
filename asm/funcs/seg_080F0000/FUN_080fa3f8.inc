@ FUN_080fa3f8  entry 0x080fa3f8  size 72
.thumb
.org 0xfa3f8
FUN_080fa3f8:
	push {r4, r5, lr}	@ 000fa3f8 30b5
.org 0xfa3fa
	adds r4, r0, #0	@ 000fa3fa 041c
.org 0xfa3fc
	adds r0, #140	@ 000fa3fc 8c30
.org 0xfa3fe
	ldr r5, [r0, #0]	@ 000fa3fe 0568
.org 0xfa400
	movs r0, #128	@ 000fa400 8020
.org 0xfa402
	lsls r0, r0, #2	@ 000fa402 8000
.org 0xfa404
	ands r5, r0	@ 000fa404 0540
.org 0xfa406
	cmp r5, #0	@ 000fa406 002d
.org 0xfa408
	beq.n 0xfa428	@ 000fa408 0ed0
.org 0xfa40a
	ldr r1, [pc, #24]	@ 000fa40a 0649
.org 0xfa40c
	ldrb r0, [r4, #9]	@ 000fa40c 607a
.org 0xfa40e
	lsls r0, r0, #2	@ 000fa40e 8000
.org 0xfa410
	adds r0, r0, r1	@ 000fa410 4018
.org 0xfa412
	movs r1, #2	@ 000fa412 0221
.org 0xfa414
	str r1, [r4, #12]	@ 000fa414 e160
.org 0xfa416
	ldr r0, [r0, #0]	@ 000fa416 0068
.org 0xfa418
	ldr r0, [r0, #8]	@ 000fa418 8068
.org 0xfa41a
	str r0, [r4, #20]	@ 000fa41a 6061
.org 0xfa41c
	adds r0, r4, #0	@ 000fa41c 201c
.org 0xfa41e
	bl 0xfa448	@ 000fa41e 00f013f8
.org 0xfa422
	b.n 0xfa43e	@ 000fa422 0ce0
.org 0xfa424
	.byte 0xfc,0x92,0x86,0x08	@ 000fa424 data
.org 0xfa428
	ldr r1, [pc, #24]	@ 000fa428 0649
.org 0xfa42a
	ldrb r0, [r4, #13]	@ 000fa42a 607b
.org 0xfa42c
	lsls r0, r0, #2	@ 000fa42c 8000
.org 0xfa42e
	adds r0, r0, r1	@ 000fa42e 4018
.org 0xfa430
	ldr r1, [r0, #0]	@ 000fa430 0168
.org 0xfa432
	adds r0, r4, #0	@ 000fa432 201c
.org 0xfa434
	bl 0x128f80	@ 000fa434 2ef0a4fd
.org 0xfa438
	adds r0, r4, #0	@ 000fa438 201c
.org 0xfa43a
	adds r0, #190	@ 000fa43a be30
.org 0xfa43c
	strb r5, [r0, #0]	@ 000fa43c 0570
.org 0xfa43e
	pop {r4, r5}	@ 000fa43e 30bc
