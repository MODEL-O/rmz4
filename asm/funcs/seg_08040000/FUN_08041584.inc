@ FUN_08041584  entry 0x08041584  size 76
.thumb
.org 0x41584
FUN_08041584:
	push {r4, r5, lr}	@ 00041584 30b5
.org 0x41586
	adds r5, r0, #0	@ 00041586 051c
.org 0x41588
	ldr r4, [r5, #44]	@ 00041588 ec6a
.org 0x4158a
	movs r1, #3	@ 0004158a 0321
.org 0x4158c
	bl 0x3a99c	@ 0004158c f9f706fa
.org 0x41590
	lsls r0, r0, #24	@ 00041590 0006
.org 0x41592
	lsrs r1, r0, #24	@ 00041592 010e
.org 0x41594
	adds r4, #250	@ 00041594 fa34
.org 0x41596
	ldrb r0, [r4, #0]	@ 00041596 2078
.org 0x41598
	cmp r0, #2	@ 00041598 0228
.org 0x4159a
	bne.n 0x4159e	@ 0004159a 00d1
.org 0x4159c
	movs r1, #1	@ 0004159c 0121
.org 0x4159e
	cmp r1, #0	@ 0004159e 0029
.org 0x415a0
	beq.n 0x415c0	@ 000415a0 0ed0
.org 0x415a2
	ldr r1, [pc, #24]	@ 000415a2 0649
.org 0x415a4
	ldrb r0, [r5, #9]	@ 000415a4 687a
.org 0x415a6
	lsls r0, r0, #2	@ 000415a6 8000
.org 0x415a8
	adds r0, r0, r1	@ 000415a8 4018
.org 0x415aa
	movs r1, #2	@ 000415aa 0221
.org 0x415ac
	str r1, [r5, #12]	@ 000415ac e960
.org 0x415ae
	ldr r0, [r0, #0]	@ 000415ae 0068
.org 0x415b0
	ldr r0, [r0, #8]	@ 000415b0 8068
.org 0x415b2
	str r0, [r5, #20]	@ 000415b2 6861
.org 0x415b4
	adds r0, r5, #0	@ 000415b4 281c
.org 0x415b6
	bl 0x415d4	@ 000415b6 00f00df8
.org 0x415ba
	b.n 0x415ce	@ 000415ba 08e0
.org 0x415bc
	.byte 0xf8,0x39,0x85,0x08	@ 000415bc data
.org 0x415c0
	adds r0, r5, #0	@ 000415c0 281c
.org 0x415c2
	bl 0x1cff0	@ 000415c2 dbf715fd
.org 0x415c6
	ldr r0, [r5, #84]	@ 000415c6 686d
.org 0x415c8
	ldr r1, [r5, #92]	@ 000415c8 e96d
.org 0x415ca
	adds r0, r0, r1	@ 000415ca 4018
.org 0x415cc
	str r0, [r5, #84]	@ 000415cc 6865
.org 0x415ce
	pop {r4, r5}	@ 000415ce 30bc
