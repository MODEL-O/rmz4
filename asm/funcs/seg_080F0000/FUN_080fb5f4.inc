@ FUN_080fb5f4  entry 0x080fb5f4  size 54
.thumb
.org 0xfb5f4
FUN_080fb5f4:
	push {r4, lr}	@ 000fb5f4 10b5
.org 0xfb5f6
	adds r4, r0, #0	@ 000fb5f6 041c
.org 0xfb5f8
	ldrb r0, [r4, #14]	@ 000fb5f8 a07b
.org 0xfb5fa
	cmp r0, #0	@ 000fb5fa 0028
.org 0xfb5fc
	bne.n 0xfb610	@ 000fb5fc 08d1
.org 0xfb5fe
	ldr r1, [pc, #32]	@ 000fb5fe 0849
.org 0xfb600
	adds r0, r4, #0	@ 000fb600 201c
.org 0xfb602
	bl 0x1cf00	@ 000fb602 21f77dfc
.org 0xfb606
	movs r0, #30	@ 000fb606 1e20
.org 0xfb608
	strb r0, [r4, #18]	@ 000fb608 a074
.org 0xfb60a
	ldrb r0, [r4, #14]	@ 000fb60a a07b
.org 0xfb60c
	adds r0, #1	@ 000fb60c 0130
.org 0xfb60e
	strb r0, [r4, #14]	@ 000fb60e a073
.org 0xfb610
	ldrb r0, [r4, #18]	@ 000fb610 a07c
.org 0xfb612
	adds r1, r0, #0	@ 000fb612 011c
.org 0xfb614
	cmp r1, #0	@ 000fb614 0029
.org 0xfb616
	bne.n 0xfb624	@ 000fb616 05d1
.org 0xfb618
	ldrb r0, [r4, #15]	@ 000fb618 e07b
.org 0xfb61a
	strb r0, [r4, #13]	@ 000fb61a 6073
.org 0xfb61c
	strb r1, [r4, #14]	@ 000fb61c a173
.org 0xfb61e
	b.n 0xfb628	@ 000fb61e 03e0
.org 0xfb620
	.byte 0x01,0x96,0x00,0x00	@ 000fb620 data
.org 0xfb624
	subs r0, #1	@ 000fb624 0138
.org 0xfb626
	strb r0, [r4, #18]	@ 000fb626 a074
.org 0xfb628
	pop {r4}	@ 000fb628 10bc
