@ FUN_0803b1b0  entry 0x0803b1b0  size 106
.thumb
.org 0x3b1b0
FUN_0803b1b0:
	push {lr}	@ 0003b1b0 00b5
.org 0x3b1b2
	adds r3, r0, #0	@ 0003b1b2 031c
.org 0x3b1b4
	adds r0, #180	@ 0003b1b4 b430
.org 0x3b1b6
	ldr r2, [r0, #0]	@ 0003b1b6 0268
.org 0x3b1b8
	movs r1, #173	@ 0003b1b8 ad21
.org 0x3b1ba
	lsls r1, r1, #1	@ 0003b1ba 4900
.org 0x3b1bc
	adds r0, r2, r1	@ 0003b1bc 5018
.org 0x3b1be
	ldrh r1, [r0, #0]	@ 0003b1be 0188
.org 0x3b1c0
	movs r0, #1	@ 0003b1c0 0120
.org 0x3b1c2
	ands r0, r1	@ 0003b1c2 0840
.org 0x3b1c4
	cmp r0, #0	@ 0003b1c4 0028
.org 0x3b1c6
	beq.n 0x3b1d2	@ 0003b1c6 04d0
.org 0x3b1c8
	ldrb r1, [r3, #10]	@ 0003b1c8 997a
.org 0x3b1ca
	movs r0, #254	@ 0003b1ca fe20
.org 0x3b1cc
	ands r0, r1	@ 0003b1cc 0840
.org 0x3b1ce
	movs r2, #0	@ 0003b1ce 0022
.org 0x3b1d0
	b.n 0x3b26c	@ 0003b1d0 4ce0
.org 0x3b1d2
	ldrb r0, [r3, #16]	@ 0003b1d2 187c
.org 0x3b1d4
	cmp r0, #1	@ 0003b1d4 0128
.org 0x3b1d6
	bls.n 0x3b29a	@ 0003b1d6 60d9
.org 0x3b1d8
	subs r0, #2	@ 0003b1d8 0238
.org 0x3b1da
	cmp r0, #4	@ 0003b1da 0428
.org 0x3b1dc
	bhi.n 0x3b29a	@ 0003b1dc 5dd8
.org 0x3b1de
	lsls r0, r0, #2	@ 0003b1de 8000
.org 0x3b1e0
	ldr r1, [pc, #4]	@ 0003b1e0 0149
.org 0x3b1e2
	adds r0, r0, r1	@ 0003b1e2 4018
.org 0x3b1e4
	ldr r0, [r0, #0]	@ 0003b1e4 0068
.org 0x3b1e6
	mov pc, r0	@ 0003b1e6 8746
.org 0x3b1e8
	.byte 0xec,0xb1,0x03,0x08	@ 0003b1e8 data
.org 0x3b1ec
	.byte 0x00,0xb2,0x03,0x08	@ 0003b1ec data
.org 0x3b1f0
	.byte 0x28,0xb2,0x03,0x08	@ 0003b1f0 data
.org 0x3b1f4
	.byte 0x34,0xb2,0x03,0x08	@ 0003b1f4 data
.org 0x3b1f8
	.byte 0x44,0xb2,0x03,0x08	@ 0003b1f8 data
.org 0x3b1fc
	.byte 0x54,0xb2,0x03,0x08	@ 0003b1fc data
.org 0x3b200
	.byte 0x10	@ 0003b200 data
.org 0x3b201
	.byte 0x1c	@ 0003b201 data
.org 0x3b202
	.byte 0xb4	@ 0003b202 data
.org 0x3b203
	.byte 0x30	@ 0003b203 data
.org 0x3b204
	.byte 0x81	@ 0003b204 data
.org 0x3b205
	.byte 0x8a	@ 0003b205 data
.org 0x3b206
	.byte 0x01	@ 0003b206 data
.org 0x3b207
	.byte 0x20	@ 0003b207 data
.org 0x3b208
	.byte 0x08	@ 0003b208 data
.org 0x3b209
	.byte 0x40	@ 0003b209 data
.org 0x3b20a
	.byte 0x00	@ 0003b20a data
.org 0x3b20b
	.byte 0x28	@ 0003b20b data
.org 0x3b20c
	.byte 0x45	@ 0003b20c data
.org 0x3b20d
	.byte 0xd0	@ 0003b20d data
.org 0x3b20e
	.byte 0x04	@ 0003b20e data
.org 0x3b20f
	.byte 0x20	@ 0003b20f data
.org 0x3b210
	.byte 0x08	@ 0003b210 data
.org 0x3b211
	.byte 0x40	@ 0003b211 data
.org 0x3b212
	.byte 0x00	@ 0003b212 data
.org 0x3b213
	.byte 0x28	@ 0003b213 data
.org 0x3b214
	.byte 0x41	@ 0003b214 data
.org 0x3b215
	.byte 0xd0	@ 0003b215 data
.org 0x3b216
	.byte 0x08	@ 0003b216 data
.org 0x3b217
	.byte 0x20	@ 0003b217 data
.org 0x3b218
	.byte 0x08	@ 0003b218 data
.org 0x3b219
	.byte 0x40	@ 0003b219 data
