@ FUN_0808faf4  entry 0x0808faf4  size 94
.thumb
.org 0x8faf4
FUN_0808faf4:
	push {lr}	@ 0008faf4 00b5
.org 0x8faf6
	adds r2, r0, #0	@ 0008faf6 021c
.org 0x8faf8
	adds r0, #184	@ 0008faf8 b830
.org 0x8fafa
	ldrb r0, [r0, #0]	@ 0008fafa 0078
.org 0x8fafc
	cmp r0, #1	@ 0008fafc 0128
.org 0x8fafe
	beq.n 0x8fb24	@ 0008fafe 11d0
.org 0x8fb00
	ldr r0, [r2, #92]	@ 0008fb00 d06d
.org 0x8fb02
	ldr r1, [r2, #100]	@ 0008fb02 516e
.org 0x8fb04
	adds r0, r0, r1	@ 0008fb04 4018
.org 0x8fb06
	str r0, [r2, #92]	@ 0008fb06 d065
.org 0x8fb08
	cmp r1, #0	@ 0008fb08 0029
.org 0x8fb0a
	bge.n 0x8fb18	@ 0008fb0a 05da
.org 0x8fb0c
	ldr r1, [pc, #4]	@ 0008fb0c 0149
.org 0x8fb0e
	cmp r0, r1	@ 0008fb0e 8842
.org 0x8fb10
	bge.n 0x8fb48	@ 0008fb10 1ada
.org 0x8fb12
	b.n 0x8fb20	@ 0008fb12 05e0
.org 0x8fb14
	.byte 0x00,0xfc,0xff,0xff	@ 0008fb14 data
.org 0x8fb18
	movs r1, #128	@ 0008fb18 8021
.org 0x8fb1a
	lsls r1, r1, #3	@ 0008fb1a c900
.org 0x8fb1c
	cmp r0, r1	@ 0008fb1c 8842
.org 0x8fb1e
	ble.n 0x8fb48	@ 0008fb1e 13dd
.org 0x8fb20
	str r1, [r2, #92]	@ 0008fb20 d165
.org 0x8fb22
	b.n 0x8fb48	@ 0008fb22 11e0
.org 0x8fb24
	ldr r1, [r2, #92]	@ 0008fb24 d16d
.org 0x8fb26
	cmp r1, #0	@ 0008fb26 0029
.org 0x8fb28
	bne.n 0x8fb2e	@ 0008fb28 01d1
.org 0x8fb2a
	movs r0, #0	@ 0008fb2a 0020
.org 0x8fb2c
	b.n 0x8fb52	@ 0008fb2c 11e0
.org 0x8fb2e
	ldr r0, [r2, #100]	@ 0008fb2e 506e
.org 0x8fb30
	subs r1, r1, r0	@ 0008fb30 091a
.org 0x8fb32
	str r1, [r2, #92]	@ 0008fb32 d165
.org 0x8fb34
	cmp r0, #0	@ 0008fb34 0028
.org 0x8fb36
	bge.n 0x8fb3e	@ 0008fb36 02da
.org 0x8fb38
	cmp r1, #0	@ 0008fb38 0029
.org 0x8fb3a
	blt.n 0x8fb48	@ 0008fb3a 05db
.org 0x8fb3c
	b.n 0x8fb42	@ 0008fb3c 01e0
.org 0x8fb3e
	cmp r1, #0	@ 0008fb3e 0029
.org 0x8fb40
	bgt.n 0x8fb48	@ 0008fb40 02dc
.org 0x8fb42
	movs r0, #0	@ 0008fb42 0020
.org 0x8fb44
	str r0, [r2, #92]	@ 0008fb44 d065
.org 0x8fb46
	b.n 0x8fb52	@ 0008fb46 04e0
.org 0x8fb48
	ldr r0, [r2, #84]	@ 0008fb48 506d
.org 0x8fb4a
	ldr r1, [r2, #92]	@ 0008fb4a d16d
.org 0x8fb4c
	adds r0, r0, r1	@ 0008fb4c 4018
.org 0x8fb4e
	str r0, [r2, #84]	@ 0008fb4e 5065
.org 0x8fb50
	movs r0, #1	@ 0008fb50 0120
