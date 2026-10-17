@ FUN_0802846c  entry 0x0802846c  size 78
.thumb
.org 0x2846c
FUN_0802846c:
	push {lr}	@ 0002846c 00b5
.org 0x2846e
	adds r2, r0, #0	@ 0002846e 021c
.org 0x28470
	ldr r1, [r2, #12]	@ 00028470 d168
.org 0x28472
	ldrb r0, [r1, #1]	@ 00028472 4878
.org 0x28474
	cmp r0, #1	@ 00028474 0128
.org 0x28476
	beq.n 0x28496	@ 00028476 0ed0
.org 0x28478
	cmp r0, #1	@ 00028478 0128
.org 0x2847a
	bgt.n 0x28482	@ 0002847a 02dc
.org 0x2847c
	cmp r0, #0	@ 0002847c 0028
.org 0x2847e
	beq.n 0x28488	@ 0002847e 03d0
.org 0x28480
	b.n 0x284b4	@ 00028480 18e0
.org 0x28482
	cmp r0, #2	@ 00028482 0228
.org 0x28484
	beq.n 0x284a2	@ 00028484 0dd0
.org 0x28486
	b.n 0x284b4	@ 00028486 15e0
.org 0x28488
	movs r0, #164	@ 00028488 a420
.org 0x2848a
	lsls r0, r0, #1	@ 0002848a 4000
.org 0x2848c
	adds r1, r2, r0	@ 0002848c 1118
.org 0x2848e
	movs r0, #128	@ 0002848e 8020
.org 0x28490
	lsls r0, r0, #8	@ 00028490 0002
.org 0x28492
	strh r0, [r1, #0]	@ 00028492 0880
.org 0x28494
	b.n 0x284b4	@ 00028494 0ee0
.org 0x28496
	movs r3, #164	@ 00028496 a423
.org 0x28498
	lsls r3, r3, #1	@ 00028498 5b00
.org 0x2849a
	adds r1, r2, r3	@ 0002849a d118
.org 0x2849c
	movs r0, #0	@ 0002849c 0020
.org 0x2849e
	strh r0, [r1, #0]	@ 0002849e 0880
.org 0x284a0
	b.n 0x284b4	@ 000284a0 08e0
.org 0x284a2
	ldr r0, [r1, #4]	@ 000284a2 4868
.org 0x284a4
	movs r3, #128	@ 000284a4 8023
.org 0x284a6
	lsls r3, r3, #8	@ 000284a6 1b02
.org 0x284a8
	adds r1, r3, #0	@ 000284a8 191c
.org 0x284aa
	movs r3, #164	@ 000284aa a423
.org 0x284ac
	lsls r3, r3, #1	@ 000284ac 5b00
.org 0x284ae
	adds r2, r2, r3	@ 000284ae d218
.org 0x284b0
	orrs r0, r1	@ 000284b0 0843
.org 0x284b2
	strh r0, [r2, #0]	@ 000284b2 1080
.org 0x284b4
	movs r0, #0	@ 000284b4 0020
.org 0x284b6
	pop {r1}	@ 000284b6 02bc
.org 0x284b8
	bx r1	@ 000284b8 0847
