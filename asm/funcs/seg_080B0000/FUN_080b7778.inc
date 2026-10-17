@ FUN_080b7778  entry 0x080b7778  size 70
.thumb
.org 0xb7778
FUN_080b7778:
	push {r4, lr}	@ 000b7778 10b5
.org 0xb777a
	adds r4, r0, #0	@ 000b777a 041c
.org 0xb777c
	ldrb r0, [r4, #14]	@ 000b777c a07b
.org 0xb777e
	cmp r0, #0	@ 000b777e 0028
.org 0xb7780
	bne.n 0xb7794	@ 000b7780 08d1
.org 0xb7782
	ldr r1, [pc, #48]	@ 000b7782 0c49
.org 0xb7784
	adds r0, r4, #0	@ 000b7784 201c
.org 0xb7786
	bl 0x1cf00	@ 000b7786 65f7bbfb
.org 0xb778a
	movs r0, #160	@ 000b778a a020
.org 0xb778c
	strb r0, [r4, #18]	@ 000b778c a074
.org 0xb778e
	ldrb r0, [r4, #14]	@ 000b778e a07b
.org 0xb7790
	adds r0, #1	@ 000b7790 0130
.org 0xb7792
	strb r0, [r4, #14]	@ 000b7792 a073
.org 0xb7794
	ldrb r0, [r4, #18]	@ 000b7794 a07c
.org 0xb7796
	adds r2, r0, #0	@ 000b7796 021c
.org 0xb7798
	cmp r2, #0	@ 000b7798 002a
.org 0xb779a
	bne.n 0xb77b8	@ 000b779a 0dd1
.org 0xb779c
	ldrb r0, [r4, #19]	@ 000b779c e07c
.org 0xb779e
	cmp r0, #2	@ 000b779e 0228
.org 0xb77a0
	bne.n 0xb77ac	@ 000b77a0 04d1
.org 0xb77a2
	adds r1, r4, #0	@ 000b77a2 211c
.org 0xb77a4
	adds r1, #180	@ 000b77a4 b431
.org 0xb77a6
	movs r0, #1	@ 000b77a6 0120
.org 0xb77a8
	strb r0, [r1, #0]	@ 000b77a8 0870
.org 0xb77aa
	strb r2, [r4, #19]	@ 000b77aa e274
.org 0xb77ac
	movs r0, #2	@ 000b77ac 0220
.org 0xb77ae
	strb r0, [r4, #13]	@ 000b77ae 6073
.org 0xb77b0
	strb r2, [r4, #14]	@ 000b77b0 a273
.org 0xb77b2
	b.n 0xb77bc	@ 000b77b2 03e0
.org 0xb77b4
	.byte 0x01,0xd2,0x00,0x00	@ 000b77b4 data
.org 0xb77b8
	subs r0, #1	@ 000b77b8 0138
.org 0xb77ba
	strb r0, [r4, #18]	@ 000b77ba a074
.org 0xb77bc
	pop {r4}	@ 000b77bc 10bc
