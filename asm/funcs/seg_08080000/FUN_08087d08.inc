@ FUN_08087d08  entry 0x08087d08  size 82
.thumb
.org 0x87d08
FUN_08087d08:
	push {r4, lr}	@ 00087d08 10b5
.org 0x87d0a
	adds r4, r0, #0	@ 00087d0a 041c
.org 0x87d0c
	ldrb r0, [r4, #15]	@ 00087d0c e07b
.org 0x87d0e
	cmp r0, #0	@ 00087d0e 0028
.org 0x87d10
	bne.n 0x87d2a	@ 00087d10 0bd1
.org 0x87d12
	adds r0, r4, #0	@ 00087d12 201c
.org 0x87d14
	adds r0, #116	@ 00087d14 7430
.org 0x87d16
	ldr r1, [pc, #52]	@ 00087d16 0d49
.org 0x87d18
	bl 0x5784	@ 00087d18 7df734fd
.org 0x87d1c
	ldr r1, [pc, #48]	@ 00087d1c 0c49
.org 0x87d1e
	adds r0, r4, #0	@ 00087d1e 201c
.org 0x87d20
	bl 0x1cf00	@ 00087d20 95f7eef8
.org 0x87d24
	ldrb r0, [r4, #15]	@ 00087d24 e07b
.org 0x87d26
	adds r0, #1	@ 00087d26 0130
.org 0x87d28
	strb r0, [r4, #15]	@ 00087d28 e073
.org 0x87d2a
	adds r0, r4, #0	@ 00087d2a 201c
.org 0x87d2c
	bl 0x1cff0	@ 00087d2c 95f760f9
.org 0x87d30
	adds r0, r4, #0	@ 00087d30 201c
.org 0x87d32
	adds r0, #115	@ 00087d32 7330
.org 0x87d34
	ldrb r0, [r0, #0]	@ 00087d34 0078
.org 0x87d36
	cmp r0, #3	@ 00087d36 0328
.org 0x87d38
	bne.n 0x87d5c	@ 00087d38 10d1
.org 0x87d3a
	adds r0, r4, #0	@ 00087d3a 201c
.org 0x87d3c
	adds r0, #180	@ 00087d3c b430
.org 0x87d3e
	ldrb r0, [r0, #0]	@ 00087d3e 0078
.org 0x87d40
	cmp r0, #0	@ 00087d40 0028
.org 0x87d42
	bne.n 0x87d54	@ 00087d42 07d1
.org 0x87d44
	strb r0, [r4, #13]	@ 00087d44 6073
.org 0x87d46
	strb r0, [r4, #14]	@ 00087d46 a073
.org 0x87d48
	strb r0, [r4, #15]	@ 00087d48 e073
.org 0x87d4a
	b.n 0x87d5c	@ 00087d4a 07e0
.org 0x87d4c
	.byte 0x04,0xf0,0x85,0x08	@ 00087d4c data
.org 0x87d50
	.byte 0x0a,0x1d,0x00,0x00	@ 00087d50 data
.org 0x87d54
	movs r1, #0	@ 00087d54 0021
.org 0x87d56
	movs r0, #2	@ 00087d56 0220
.org 0x87d58
	strb r0, [r4, #14]	@ 00087d58 a073
