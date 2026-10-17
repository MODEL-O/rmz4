@ FUN_08100984  entry 0x08100984  size 80
.thumb
.org 0x100984
FUN_08100984:
	push {r4, r5, lr}	@ 00100984 30b5
.org 0x100986
	adds r4, r0, #0	@ 00100986 041c
.org 0x100988
	ldr r0, [pc, #28]	@ 00100988 0748
.org 0x10098a
	ldr r5, [r0, #0]	@ 0010098a 0568
.org 0x10098c
	adds r0, r4, #0	@ 0010098c 201c
.org 0x10098e
	bl 0x1cff0	@ 0010098e 1cf72ffb
.org 0x100992
	ldrb r0, [r4, #13]	@ 00100992 607b
.org 0x100994
	cmp r0, #0	@ 00100994 0028
.org 0x100996
	beq.n 0x1009d4	@ 00100996 1dd0
.org 0x100998
	ldrb r1, [r4, #16]	@ 00100998 217c
.org 0x10099a
	cmp r1, #0	@ 0010099a 0029
.org 0x10099c
	bne.n 0x1009ac	@ 0010099c 06d1
.org 0x10099e
	adds r0, r5, #0	@ 0010099e 281c
.org 0x1009a0
	adds r0, #180	@ 001009a0 b430
.org 0x1009a2
	strb r1, [r0, #10]	@ 001009a2 8172
.org 0x1009a4
	b.n 0x1009b4	@ 001009a4 06e0
.org 0x1009a6
	.byte 0x00	@ 001009a6 data
.org 0x1009a7
	.byte 0x00	@ 001009a7 data
.org 0x1009a8
	.byte 0xf0,0xdb,0x02,0x02	@ 001009a8 data
.org 0x1009ac
	adds r1, r5, #0	@ 001009ac 291c
.org 0x1009ae
	adds r1, #180	@ 001009ae b431
.org 0x1009b0
	movs r0, #0	@ 001009b0 0020
.org 0x1009b2
	strb r0, [r1, #11]	@ 001009b2 c872
.org 0x1009b4
	movs r0, #0	@ 001009b4 0020
.org 0x1009b6
	movs r1, #255	@ 001009b6 ff21
.org 0x1009b8
	bl 0xd57ac	@ 001009b8 d4f7f8fe
.org 0x1009bc
	ldr r1, [pc, #28]	@ 001009bc 0749
.org 0x1009be
	ldrb r0, [r4, #9]	@ 001009be 607a
.org 0x1009c0
	lsls r0, r0, #2	@ 001009c0 8000
.org 0x1009c2
	adds r0, r0, r1	@ 001009c2 4018
.org 0x1009c4
	movs r1, #2	@ 001009c4 0221
.org 0x1009c6
	str r1, [r4, #12]	@ 001009c6 e160
.org 0x1009c8
	ldr r0, [r0, #0]	@ 001009c8 0068
.org 0x1009ca
	ldr r0, [r0, #8]	@ 001009ca 8068
.org 0x1009cc
	str r0, [r4, #20]	@ 001009cc 6061
.org 0x1009ce
	adds r0, r4, #0	@ 001009ce 201c
.org 0x1009d0
	bl 0x1009e0	@ 001009d0 00f006f8
