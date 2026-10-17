@ FUN_080ecf18  entry 0x080ecf18  size 46
.thumb
.org 0xecf18
FUN_080ecf18:
	push {lr}	@ 000ecf18 00b5
.org 0xecf1a
	adds r1, r0, #0	@ 000ecf1a 011c
.org 0xecf1c
	ldr r0, [pc, #20]	@ 000ecf1c 0548
.org 0xecf1e
	ldr r2, [pc, #24]	@ 000ecf1e 064a
.org 0xecf20
	adds r0, r0, r2	@ 000ecf20 8018
.org 0xecf22
	ldrb r0, [r0, #0]	@ 000ecf22 0078
.org 0xecf24
	cmp r0, #0	@ 000ecf24 0028
.org 0xecf26
	bne.n 0xecf40	@ 000ecf26 0bd1
.org 0xecf28
	adds r0, r1, #0	@ 000ecf28 081c
.org 0xecf2a
	adds r0, #116	@ 000ecf2a 7430
.org 0xecf2c
	ldr r1, [pc, #12]	@ 000ecf2c 0349
.org 0xecf2e
	bl 0x5784	@ 000ecf2e 18f729fc
.org 0xecf32
	b.n 0xecf4e	@ 000ecf32 0ce0
.org 0xecf34
	.byte 0xb0,0x0a,0x00,0x02	@ 000ecf34 data
.org 0xecf38
	.byte 0x2f,0xd0,0x02,0x00	@ 000ecf38 data
.org 0xecf3c
	.byte 0xe0,0x98,0x86,0x08	@ 000ecf3c data
.org 0xecf40
	cmp r0, #96	@ 000ecf40 6028
.org 0xecf42
	bne.n 0xecf4e	@ 000ecf42 04d1
.org 0xecf44
	adds r0, r1, #0	@ 000ecf44 081c
