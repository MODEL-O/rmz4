@ FUN_08077364  entry 0x08077364  size 48
.thumb
.org 0x77364
FUN_08077364:
	push {r4, lr}	@ 00077364 10b5
.org 0x77366
	adds r4, r0, #0	@ 00077366 041c
.org 0x77368
	adds r0, #198	@ 00077368 c630
.org 0x7736a
	ldrb r0, [r0, #0]	@ 0007736a 0078
.org 0x7736c
	cmp r0, #0	@ 0007736c 0028
.org 0x7736e
	beq.n 0x77378	@ 0007736e 03d0
.org 0x77370
	adds r0, r4, #0	@ 00077370 201c
.org 0x77372
	bl 0x790a8	@ 00077372 01f099fe
.org 0x77376
	b.n 0x7737e	@ 00077376 02e0
.org 0x77378
	adds r0, r4, #0	@ 00077378 201c
.org 0x7737a
	bl 0x79188	@ 0007737a 01f005ff
.org 0x7737e
	ldr r0, [pc, #20]	@ 0007737e 0548
.org 0x77380
	ldrb r1, [r4, #13]	@ 00077380 617b
.org 0x77382
	lsls r1, r1, #2	@ 00077382 8900
.org 0x77384
	adds r1, r1, r0	@ 00077384 0918
.org 0x77386
	ldr r1, [r1, #0]	@ 00077386 0968
.org 0x77388
	adds r0, r4, #0	@ 00077388 201c
.org 0x7738a
	bl 0x128f80	@ 0007738a b1f0f9fd
.org 0x7738e
	pop {r4}	@ 0007738e 10bc
.org 0x77390
	pop {r0}	@ 00077390 01bc
.org 0x77392
	bx r0	@ 00077392 0047
