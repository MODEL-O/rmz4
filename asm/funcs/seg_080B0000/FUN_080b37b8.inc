@ FUN_080b37b8  entry 0x080b37b8  size 68
.thumb
.org 0xb37b8
FUN_080b37b8:
	push {r4, lr}	@ 000b37b8 10b5
.org 0xb37ba
	adds r2, r0, #0	@ 000b37ba 021c
.org 0xb37bc
	adds r3, r2, #0	@ 000b37bc 131c
.org 0xb37be
	adds r3, #180	@ 000b37be b433
.org 0xb37c0
	ldrb r0, [r3, #0]	@ 000b37c0 1878
.org 0xb37c2
	cmp r0, #0	@ 000b37c2 0028
.org 0xb37c4
	bne.n 0xb37d8	@ 000b37c4 08d1
.org 0xb37c6
	adds r0, r2, #0	@ 000b37c6 101c
.org 0xb37c8
	adds r0, #184	@ 000b37c8 b830
.org 0xb37ca
	ldr r1, [r0, #0]	@ 000b37ca 0168
.org 0xb37cc
	movs r4, #176	@ 000b37cc b024
.org 0xb37ce
	lsls r4, r4, #6	@ 000b37ce a401
.org 0xb37d0
	adds r1, r1, r4	@ 000b37d0 0919
.org 0xb37d2
	str r1, [r0, #0]	@ 000b37d2 0160
.org 0xb37d4
	movs r0, #1	@ 000b37d4 0120
.org 0xb37d6
	b.n 0xb37e6	@ 000b37d6 06e0
.org 0xb37d8
	adds r0, r2, #0	@ 000b37d8 101c
.org 0xb37da
	adds r0, #184	@ 000b37da b830
.org 0xb37dc
	ldr r1, [r0, #0]	@ 000b37dc 0168
.org 0xb37de
	ldr r4, [pc, #20]	@ 000b37de 054c
.org 0xb37e0
	adds r1, r1, r4	@ 000b37e0 0919
.org 0xb37e2
	str r1, [r0, #0]	@ 000b37e2 0160
.org 0xb37e4
	movs r0, #0	@ 000b37e4 0020
.org 0xb37e6
	strb r0, [r3, #0]	@ 000b37e6 1870
.org 0xb37e8
	ldrb r0, [r2, #15]	@ 000b37e8 d07b
.org 0xb37ea
	cmp r0, #0	@ 000b37ea 0028
.org 0xb37ec
	bne.n 0xb37f8	@ 000b37ec 04d1
.org 0xb37ee
	movs r0, #254	@ 000b37ee fe20
.org 0xb37f0
	b.n 0xb37fa	@ 000b37f0 03e0
.org 0xb37f2
	.byte 0x00	@ 000b37f2 data
.org 0xb37f3
	.byte 0x00	@ 000b37f3 data
.org 0xb37f4
	.byte 0x00,0xd4,0xff,0xff	@ 000b37f4 data
.org 0xb37f8
	movs r0, #1	@ 000b37f8 0120
.org 0xb37fa
	strb r0, [r2, #18]	@ 000b37fa 9074
