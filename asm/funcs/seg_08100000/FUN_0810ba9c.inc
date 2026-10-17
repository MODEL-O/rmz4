@ FUN_0810ba9c  entry 0x0810ba9c  size 86
.thumb
.org 0x10ba9c
FUN_0810ba9c:
	push {r4, lr}	@ 0010ba9c 10b5
.org 0x10ba9e
	adds r4, r0, #0	@ 0010ba9e 041c
.org 0x10baa0
	ldr r0, [r4, #40]	@ 0010baa0 a06a
.org 0x10baa2
	ldr r1, [pc, #24]	@ 0010baa2 0649
.org 0x10baa4
	adds r0, r0, r1	@ 0010baa4 4018
.org 0x10baa6
	ldr r2, [r0, #0]	@ 0010baa6 0268
.org 0x10baa8
	ldrb r0, [r4, #17]	@ 0010baa8 607c
.org 0x10baaa
	movs r1, #15	@ 0010baaa 0f21
.org 0x10baac
	ands r1, r0	@ 0010baac 0140
.org 0x10baae
	lsrs r0, r0, #4	@ 0010baae 0009
.org 0x10bab0
	cmp r0, #0	@ 0010bab0 0028
.org 0x10bab2
	bne.n 0x10bac0	@ 0010bab2 05d1
.org 0x10bab4
	adds r0, r2, #0	@ 0010bab4 101c
.org 0x10bab6
	adds r0, #241	@ 0010bab6 f130
.org 0x10bab8
	b.n 0x10bace	@ 0010bab8 09e0
.org 0x10baba
	.byte 0x00	@ 0010baba data
.org 0x10babb
	.byte 0x00	@ 0010babb data
.org 0x10babc
	.byte 0xa8,0x63,0x00,0x00	@ 0010babc data
.org 0x10bac0
	cmp r0, #1	@ 0010bac0 0128
.org 0x10bac2
	bne.n 0x10baca	@ 0010bac2 02d1
.org 0x10bac4
	adds r0, r2, #0	@ 0010bac4 101c
.org 0x10bac6
	adds r0, #242	@ 0010bac6 f230
.org 0x10bac8
	b.n 0x10bace	@ 0010bac8 01e0
.org 0x10baca
	adds r0, r2, #0	@ 0010baca 101c
.org 0x10bacc
	adds r0, #243	@ 0010bacc f330
.org 0x10bace
	ldrb r0, [r0, #0]	@ 0010bace 0078
.org 0x10bad0
	cmp r1, r0	@ 0010bad0 8142
.org 0x10bad2
	bcc.n 0x10bae4	@ 0010bad2 07d3
.org 0x10bad4
	ldr r1, [pc, #8]	@ 0010bad4 0249
.org 0x10bad6
	adds r0, r4, #0	@ 0010bad6 201c
.org 0x10bad8
	bl 0x1cf00	@ 0010bad8 11f712fa
.org 0x10badc
	b.n 0x10baf2	@ 0010badc 09e0
.org 0x10bade
	.byte 0x00	@ 0010bade data
.org 0x10badf
	.byte 0x00	@ 0010badf data
.org 0x10bae0
	.byte 0x09,0x42,0x00,0x00	@ 0010bae0 data
.org 0x10bae4
	movs r2, #132	@ 0010bae4 8422
.org 0x10bae6
	lsls r2, r2, #7	@ 0010bae6 d201
.org 0x10bae8
	adds r0, r2, #0	@ 0010bae8 101c
.org 0x10baea
	orrs r1, r0	@ 0010baea 0143
.org 0x10baec
	adds r0, r4, #0	@ 0010baec 201c
.org 0x10baee
	bl 0x1cf00	@ 0010baee 11f707fa
