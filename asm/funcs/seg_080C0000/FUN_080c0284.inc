@ FUN_080c0284  entry 0x080c0284  size 84
.thumb
.org 0xc0284
FUN_080c0284:
	push {r4, r5, lr}	@ 000c0284 30b5
.org 0xc0286
	adds r4, r0, #0	@ 000c0286 041c
.org 0xc0288
	adds r5, r4, #0	@ 000c0288 251c
.org 0xc028a
	adds r5, #180	@ 000c028a b435
.org 0xc028c
	ldrb r0, [r5, #0]	@ 000c028c 2878
.org 0xc028e
	cmp r0, #0	@ 000c028e 0028
.org 0xc0290
	bne.n 0xc02aa	@ 000c0290 0bd1
.org 0xc0292
	adds r0, r4, #0	@ 000c0292 201c
.org 0xc0294
	adds r0, #140	@ 000c0294 8c30
.org 0xc0296
	ldr r0, [r0, #0]	@ 000c0296 0068
.org 0xc0298
	movs r1, #4	@ 000c0298 0421
.org 0xc029a
	ands r0, r1	@ 000c029a 0840
.org 0xc029c
	cmp r0, #0	@ 000c029c 0028
.org 0xc029e
	beq.n 0xc02aa	@ 000c029e 04d0
.org 0xc02a0
	movs r0, #56	@ 000c02a0 3820
.org 0xc02a2
	bl 0x2b10	@ 000c02a2 42f735fc
.org 0xc02a6
	movs r0, #1	@ 000c02a6 0120
.org 0xc02a8
	strb r0, [r5, #0]	@ 000c02a8 2870
.org 0xc02aa
	adds r0, r4, #0	@ 000c02aa 201c
.org 0xc02ac
	bl 0x1cff0	@ 000c02ac 5cf7a0fe
.org 0xc02b0
	adds r0, r4, #0	@ 000c02b0 201c
.org 0xc02b2
	adds r0, #115	@ 000c02b2 7330
.org 0xc02b4
	ldrb r0, [r0, #0]	@ 000c02b4 0078
.org 0xc02b6
	cmp r0, #3	@ 000c02b6 0328
.org 0xc02b8
	bne.n 0xc02d2	@ 000c02b8 0bd1
.org 0xc02ba
	ldr r1, [pc, #28]	@ 000c02ba 0749
.org 0xc02bc
	ldrb r0, [r4, #9]	@ 000c02bc 607a
.org 0xc02be
	lsls r0, r0, #2	@ 000c02be 8000
.org 0xc02c0
	adds r0, r0, r1	@ 000c02c0 4018
.org 0xc02c2
	movs r1, #2	@ 000c02c2 0221
.org 0xc02c4
	str r1, [r4, #12]	@ 000c02c4 e160
.org 0xc02c6
	ldr r0, [r0, #0]	@ 000c02c6 0068
.org 0xc02c8
	ldr r0, [r0, #8]	@ 000c02c8 8068
.org 0xc02ca
	str r0, [r4, #20]	@ 000c02ca 6061
.org 0xc02cc
	adds r0, r4, #0	@ 000c02cc 201c
.org 0xc02ce
	bl 0xc02dc	@ 000c02ce 00f005f8
.org 0xc02d2
	pop {r4, r5}	@ 000c02d2 30bc
.org 0xc02d4
	pop {r0}	@ 000c02d4 01bc
.org 0xc02d6
	bx r0	@ 000c02d6 0047
