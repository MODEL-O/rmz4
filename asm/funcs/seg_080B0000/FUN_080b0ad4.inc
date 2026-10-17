@ FUN_080b0ad4  entry 0x080b0ad4  size 50
.thumb
.org 0xb0ad4
FUN_080b0ad4:
	push {r4, lr}	@ 000b0ad4 10b5
.org 0xb0ad6
	adds r4, r0, #0	@ 000b0ad6 041c
.org 0xb0ad8
	ldrb r0, [r4, #14]	@ 000b0ad8 a07b
.org 0xb0ada
	cmp r0, #0	@ 000b0ada 0028
.org 0xb0adc
	bne.n 0xb0aee	@ 000b0adc 07d1
.org 0xb0ade
	adds r0, r4, #0	@ 000b0ade 201c
.org 0xb0ae0
	bl 0xb0ccc	@ 000b0ae0 00f0f4f8
.org 0xb0ae4
	movs r0, #30	@ 000b0ae4 1e20
.org 0xb0ae6
	strb r0, [r4, #18]	@ 000b0ae6 a074
.org 0xb0ae8
	ldrb r0, [r4, #14]	@ 000b0ae8 a07b
.org 0xb0aea
	adds r0, #1	@ 000b0aea 0130
.org 0xb0aec
	strb r0, [r4, #14]	@ 000b0aec a073
.org 0xb0aee
	ldrb r2, [r4, #18]	@ 000b0aee a27c
.org 0xb0af0
	adds r1, r2, #0	@ 000b0af0 111c
.org 0xb0af2
	cmp r1, #0	@ 000b0af2 0029
.org 0xb0af4
	bne.n 0xb0afc	@ 000b0af4 02d1
.org 0xb0af6
	movs r0, #3	@ 000b0af6 0320
.org 0xb0af8
	strb r0, [r4, #13]	@ 000b0af8 6073
.org 0xb0afa
	strb r1, [r4, #14]	@ 000b0afa a173
.org 0xb0afc
	subs r0, r2, #1	@ 000b0afc 501e
.org 0xb0afe
	strb r0, [r4, #18]	@ 000b0afe a074
.org 0xb0b00
	pop {r4}	@ 000b0b00 10bc
.org 0xb0b02
	pop {r0}	@ 000b0b02 01bc
.org 0xb0b04
	bx r0	@ 000b0b04 0047
