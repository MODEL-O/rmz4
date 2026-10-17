@ FUN_0806cae4  entry 0x0806cae4  size 110
.thumb
.org 0x6cae4
FUN_0806cae4:
	push {r4, r5, lr}	@ 0006cae4 30b5
.org 0x6cae6
	adds r4, r0, #0	@ 0006cae6 041c
.org 0x6cae8
	ldrb r5, [r4, #14]	@ 0006cae8 a57b
.org 0x6caea
	cmp r5, #0	@ 0006caea 002d
.org 0x6caec
	bne.n 0x6cb16	@ 0006caec 13d1
.org 0x6caee
	ldr r1, [pc, #72]	@ 0006caee 1249
.org 0x6caf0
	bl 0x1cf00	@ 0006caf0 b0f706fa
.org 0x6caf4
	adds r0, r4, #0	@ 0006caf4 201c
.org 0x6caf6
	adds r0, #116	@ 0006caf6 7430
.org 0x6caf8
	ldr r1, [pc, #64]	@ 0006caf8 1049
.org 0x6cafa
	bl 0x5784	@ 0006cafa 98f743fe
.org 0x6cafe
	ldr r0, [r4, #92]	@ 0006cafe e06d
.org 0x6cb00
	cmp r0, #0	@ 0006cb00 0028
.org 0x6cb02
	bge.n 0x6cb06	@ 0006cb02 00da
.org 0x6cb04
	adds r0, #7	@ 0006cb04 0730
.org 0x6cb06
	asrs r0, r0, #3	@ 0006cb06 c010
.org 0x6cb08
	str r0, [r4, #100]	@ 0006cb08 6066
.org 0x6cb0a
	movs r0, #8	@ 0006cb0a 0820
.org 0x6cb0c
	strb r0, [r4, #18]	@ 0006cb0c a074
.org 0x6cb0e
	strb r5, [r4, #15]	@ 0006cb0e e573
.org 0x6cb10
	ldrb r0, [r4, #14]	@ 0006cb10 a07b
.org 0x6cb12
	adds r0, #1	@ 0006cb12 0130
.org 0x6cb14
	strb r0, [r4, #14]	@ 0006cb14 a073
.org 0x6cb16
	adds r0, r4, #0	@ 0006cb16 201c
.org 0x6cb18
	bl 0x1cff0	@ 0006cb18 b0f76afa
.org 0x6cb1c
	ldrb r1, [r4, #15]	@ 0006cb1c e17b
.org 0x6cb1e
	adds r0, r1, #0	@ 0006cb1e 081c
.org 0x6cb20
	cmp r0, #0	@ 0006cb20 0028
.org 0x6cb22
	bne.n 0x6cb40	@ 0006cb22 0dd1
.org 0x6cb24
	ldrb r0, [r4, #18]	@ 0006cb24 a07c
.org 0x6cb26
	subs r0, #1	@ 0006cb26 0138
.org 0x6cb28
	strb r0, [r4, #18]	@ 0006cb28 a074
.org 0x6cb2a
	lsls r0, r0, #24	@ 0006cb2a 0006
.org 0x6cb2c
	lsrs r0, r0, #24	@ 0006cb2c 000e
.org 0x6cb2e
	cmp r0, #255	@ 0006cb2e ff28
.org 0x6cb30
	bne.n 0x6cb54	@ 0006cb30 10d1
.org 0x6cb32
	adds r0, r1, #1	@ 0006cb32 481c
.org 0x6cb34
	strb r0, [r4, #15]	@ 0006cb34 e073
.org 0x6cb36
	b.n 0x6cb54	@ 0006cb36 0de0
.org 0x6cb38
	.byte 0x1c,0xaa,0x00,0x00	@ 0006cb38 data
.org 0x6cb3c
	.byte 0xac,0xc1,0x85,0x08	@ 0006cb3c data
.org 0x6cb40
	cmp r0, #1	@ 0006cb40 0128
.org 0x6cb42
	bne.n 0x6cb54	@ 0006cb42 07d1
.org 0x6cb44
	adds r0, r4, #0	@ 0006cb44 201c
.org 0x6cb46
	adds r0, #115	@ 0006cb46 7330
.org 0x6cb48
	ldrb r1, [r0, #0]	@ 0006cb48 0178
.org 0x6cb4a
	cmp r1, #3	@ 0006cb4a 0329
.org 0x6cb4c
	bne.n 0x6cb54	@ 0006cb4c 02d1
.org 0x6cb4e
	movs r0, #0	@ 0006cb4e 0020
.org 0x6cb50
	strb r1, [r4, #13]	@ 0006cb50 6173
