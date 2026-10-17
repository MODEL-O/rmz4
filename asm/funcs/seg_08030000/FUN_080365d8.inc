@ FUN_080365d8  entry 0x080365d8  size 92
.thumb
.org 0x365d8
FUN_080365d8:
	push {r4, r5, r6, lr}	@ 000365d8 70b5
.org 0x365da
	adds r5, r0, #0	@ 000365da 051c
.org 0x365dc
	movs r0, #129	@ 000365dc 8120
.org 0x365de
	lsls r0, r0, #1	@ 000365de 4000
.org 0x365e0
	adds r6, r5, r0	@ 000365e0 2e18
.org 0x365e2
	ldrb r0, [r6, #0]	@ 000365e2 3078
.org 0x365e4
	cmp r0, #0	@ 000365e4 0028
.org 0x365e6
	bne.n 0x365fe	@ 000365e6 0ad1
.org 0x365e8
	ldr r1, [pc, #72]	@ 000365e8 1249
.org 0x365ea
	adds r0, r5, #0	@ 000365ea 281c
.org 0x365ec
	bl 0x1cf00	@ 000365ec e6f788fc
.org 0x365f0
	ldr r0, [pc, #68]	@ 000365f0 1148
.org 0x365f2
	adds r1, r5, r0	@ 000365f2 2918
.org 0x365f4
	movs r0, #16	@ 000365f4 1020
.org 0x365f6
	strb r0, [r1, #0]	@ 000365f6 0870
.org 0x365f8
	ldrb r0, [r6, #0]	@ 000365f8 3078
.org 0x365fa
	adds r0, #1	@ 000365fa 0130
.org 0x365fc
	strb r0, [r6, #0]	@ 000365fc 3070
.org 0x365fe
	ldr r4, [pc, #52]	@ 000365fe 0d4c
.org 0x36600
	adds r0, r5, #0	@ 00036600 281c
.org 0x36602
	adds r1, r4, #0	@ 00036602 211c
.org 0x36604
	bl 0x3a3b0	@ 00036604 03f0d4fe
.org 0x36608
	adds r0, r5, #0	@ 00036608 281c
.org 0x3660a
	adds r1, r4, #0	@ 0003660a 211c
.org 0x3660c
	bl 0x3a3f0	@ 0003660c 03f0f0fe
.org 0x36610
	ldr r0, [pc, #36]	@ 00036610 0948
.org 0x36612
	adds r1, r5, r0	@ 00036612 2918
.org 0x36614
	ldrb r0, [r1, #0]	@ 00036614 0878
.org 0x36616
	subs r0, #1	@ 00036616 0138
.org 0x36618
	strb r0, [r1, #0]	@ 00036618 0870
.org 0x3661a
	lsls r0, r0, #24	@ 0003661a 0006
.org 0x3661c
	lsrs r0, r0, #24	@ 0003661c 000e
.org 0x3661e
	cmp r0, #255	@ 0003661e ff28
.org 0x36620
	bne.n 0x3662e	@ 00036620 05d1
.org 0x36622
	ldr r0, [pc, #24]	@ 00036622 0648
.org 0x36624
	adds r1, r5, r0	@ 00036624 2918
.org 0x36626
	movs r0, #5	@ 00036626 0520
.org 0x36628
	strb r0, [r1, #0]	@ 00036628 0870
.org 0x3662a
	movs r0, #0	@ 0003662a 0020
.org 0x3662c
	strb r0, [r6, #0]	@ 0003662c 3070
.org 0x3662e
	pop {r4, r5, r6}	@ 0003662e 70bc
.org 0x36630
	pop {r0}	@ 00036630 01bc
.org 0x36632
	bx r0	@ 00036632 0047
