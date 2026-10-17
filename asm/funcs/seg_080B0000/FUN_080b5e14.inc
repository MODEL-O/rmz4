@ FUN_080b5e14  entry 0x080b5e14  size 108
.thumb
.org 0xb5e14
FUN_080b5e14:
	push {r4, r5, lr}	@ 000b5e14 30b5
.org 0xb5e16
	adds r4, r0, #0	@ 000b5e16 041c
.org 0xb5e18
	ldrb r5, [r4, #15]	@ 000b5e18 e57b
.org 0xb5e1a
	cmp r5, #0	@ 000b5e1a 002d
.org 0xb5e1c
	bne.n 0xb5e3c	@ 000b5e1c 0ed1
.org 0xb5e1e
	adds r0, #116	@ 000b5e1e 7430
.org 0xb5e20
	ldr r1, [pc, #92]	@ 000b5e20 1749
.org 0xb5e22
	bl 0x5784	@ 000b5e22 4ff7affc
.org 0xb5e26
	movs r1, #181	@ 000b5e26 b521
.org 0xb5e28
	lsls r1, r1, #8	@ 000b5e28 0902
.org 0xb5e2a
	adds r0, r4, #0	@ 000b5e2a 201c
.org 0xb5e2c
	bl 0x1cf00	@ 000b5e2c 67f768f8
.org 0xb5e30
	movs r0, #64	@ 000b5e30 4020
.org 0xb5e32
	strb r0, [r4, #18]	@ 000b5e32 a074
.org 0xb5e34
	strb r5, [r4, #19]	@ 000b5e34 e574
.org 0xb5e36
	ldrb r0, [r4, #15]	@ 000b5e36 e07b
.org 0xb5e38
	adds r0, #1	@ 000b5e38 0130
.org 0xb5e3a
	strb r0, [r4, #15]	@ 000b5e3a e073
.org 0xb5e3c
	adds r0, r4, #0	@ 000b5e3c 201c
.org 0xb5e3e
	bl 0x1cff0	@ 000b5e3e 67f7d7f8
.org 0xb5e42
	ldrb r0, [r4, #19]	@ 000b5e42 e07c
.org 0xb5e44
	cmp r0, #0	@ 000b5e44 0028
.org 0xb5e46
	bne.n 0xb5e64	@ 000b5e46 0dd1
.org 0xb5e48
	adds r0, r4, #0	@ 000b5e48 201c
.org 0xb5e4a
	adds r0, #113	@ 000b5e4a 7130
.org 0xb5e4c
	ldrb r0, [r0, #0]	@ 000b5e4c 0078
.org 0xb5e4e
	lsls r0, r0, #24	@ 000b5e4e 0006
.org 0xb5e50
	asrs r0, r0, #24	@ 000b5e50 0016
.org 0xb5e52
	cmp r0, #15	@ 000b5e52 0f28
.org 0xb5e54
	ble.n 0xb5e64	@ 000b5e54 06dd
.org 0xb5e56
	adds r0, r4, #0	@ 000b5e56 201c
.org 0xb5e58
	adds r0, #116	@ 000b5e58 7430
.org 0xb5e5a
	ldr r1, [pc, #40]	@ 000b5e5a 0a49
.org 0xb5e5c
	bl 0x5784	@ 000b5e5c 4ff792fc
.org 0xb5e60
	movs r0, #1	@ 000b5e60 0120
.org 0xb5e62
	strb r0, [r4, #19]	@ 000b5e62 e074
.org 0xb5e64
	ldrb r0, [r4, #18]	@ 000b5e64 a07c
.org 0xb5e66
	subs r0, #1	@ 000b5e66 0138
.org 0xb5e68
	strb r0, [r4, #18]	@ 000b5e68 a074
.org 0xb5e6a
	lsls r0, r0, #24	@ 000b5e6a 0006
.org 0xb5e6c
	lsrs r1, r0, #24	@ 000b5e6c 010e
.org 0xb5e6e
	cmp r1, #0	@ 000b5e6e 0029
.org 0xb5e70
	bne.n 0xb5e7a	@ 000b5e70 03d1
.org 0xb5e72
	movs r0, #1	@ 000b5e72 0120
.org 0xb5e74
	strb r0, [r4, #13]	@ 000b5e74 6073
.org 0xb5e76
	strb r1, [r4, #14]	@ 000b5e76 a173
.org 0xb5e78
	strb r1, [r4, #15]	@ 000b5e78 e173
.org 0xb5e7a
	pop {r4, r5}	@ 000b5e7a 30bc
.org 0xb5e7c
	pop {r0}	@ 000b5e7c 01bc
.org 0xb5e7e
	bx r0	@ 000b5e7e 0047
