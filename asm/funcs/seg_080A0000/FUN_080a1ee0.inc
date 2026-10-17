@ FUN_080a1ee0  entry 0x080a1ee0  size 70
.thumb
.org 0xa1ee0
FUN_080a1ee0:
	push {r4, lr}	@ 000a1ee0 10b5
.org 0xa1ee2
	adds r4, r0, #0	@ 000a1ee2 041c
.org 0xa1ee4
	ldrb r0, [r4, #14]	@ 000a1ee4 a07b
.org 0xa1ee6
	cmp r0, #0	@ 000a1ee6 0028
.org 0xa1ee8
	bne.n 0xa1efc	@ 000a1ee8 08d1
.org 0xa1eea
	ldr r1, [pc, #48]	@ 000a1eea 0c49
.org 0xa1eec
	adds r0, r4, #0	@ 000a1eec 201c
.org 0xa1eee
	bl 0x1cf00	@ 000a1eee 7bf707f8
.org 0xa1ef2
	movs r0, #160	@ 000a1ef2 a020
.org 0xa1ef4
	strb r0, [r4, #18]	@ 000a1ef4 a074
.org 0xa1ef6
	ldrb r0, [r4, #14]	@ 000a1ef6 a07b
.org 0xa1ef8
	adds r0, #1	@ 000a1ef8 0130
.org 0xa1efa
	strb r0, [r4, #14]	@ 000a1efa a073
.org 0xa1efc
	ldrb r0, [r4, #18]	@ 000a1efc a07c
.org 0xa1efe
	adds r2, r0, #0	@ 000a1efe 021c
.org 0xa1f00
	cmp r2, #0	@ 000a1f00 002a
.org 0xa1f02
	bne.n 0xa1f20	@ 000a1f02 0dd1
.org 0xa1f04
	ldrb r0, [r4, #19]	@ 000a1f04 e07c
.org 0xa1f06
	cmp r0, #2	@ 000a1f06 0228
.org 0xa1f08
	bne.n 0xa1f14	@ 000a1f08 04d1
.org 0xa1f0a
	adds r1, r4, #0	@ 000a1f0a 211c
.org 0xa1f0c
	adds r1, #180	@ 000a1f0c b431
.org 0xa1f0e
	movs r0, #1	@ 000a1f0e 0120
.org 0xa1f10
	strb r0, [r1, #0]	@ 000a1f10 0870
.org 0xa1f12
	strb r2, [r4, #19]	@ 000a1f12 e274
.org 0xa1f14
	movs r0, #2	@ 000a1f14 0220
.org 0xa1f16
	strb r0, [r4, #13]	@ 000a1f16 6073
.org 0xa1f18
	strb r2, [r4, #14]	@ 000a1f18 a273
.org 0xa1f1a
	b.n 0xa1f24	@ 000a1f1a 03e0
.org 0xa1f1c
	.byte 0x01,0x5f,0x00,0x00	@ 000a1f1c data
.org 0xa1f20
	subs r0, #1	@ 000a1f20 0138
.org 0xa1f22
	strb r0, [r4, #18]	@ 000a1f22 a074
.org 0xa1f24
	pop {r4}	@ 000a1f24 10bc
