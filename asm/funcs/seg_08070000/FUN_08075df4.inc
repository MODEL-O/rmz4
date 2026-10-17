@ FUN_08075df4  entry 0x08075df4  size 122
.thumb
.org 0x75df4
FUN_08075df4:
	push {r4, r5, lr}	@ 00075df4 30b5
.org 0x75df6
	adds r4, r0, #0	@ 00075df6 041c
.org 0x75df8
	ldrb r5, [r4, #14]	@ 00075df8 a57b
.org 0x75dfa
	cmp r5, #0	@ 00075dfa 002d
.org 0x75dfc
	bne.n 0x75e10	@ 00075dfc 08d1
.org 0x75dfe
	ldr r1, [pc, #64]	@ 00075dfe 1049
.org 0x75e00
	bl 0x1cf00	@ 00075e00 a7f77ef8
.org 0x75e04
	movs r0, #12	@ 00075e04 0c20
.org 0x75e06
	strb r0, [r4, #18]	@ 00075e06 a074
.org 0x75e08
	strb r5, [r4, #15]	@ 00075e08 e573
.org 0x75e0a
	ldrb r0, [r4, #14]	@ 00075e0a a07b
.org 0x75e0c
	adds r0, #1	@ 00075e0c 0130
.org 0x75e0e
	strb r0, [r4, #14]	@ 00075e0e a073
.org 0x75e10
	adds r0, r4, #0	@ 00075e10 201c
.org 0x75e12
	bl 0x1cff0	@ 00075e12 a7f7edf8
.org 0x75e16
	ldrb r1, [r4, #15]	@ 00075e16 e17b
.org 0x75e18
	adds r0, r1, #0	@ 00075e18 081c
.org 0x75e1a
	cmp r0, #0	@ 00075e1a 0028
.org 0x75e1c
	bne.n 0x75e48	@ 00075e1c 14d1
.org 0x75e1e
	adds r0, r4, #0	@ 00075e1e 201c
.org 0x75e20
	adds r0, #113	@ 00075e20 7130
.org 0x75e22
	ldrb r0, [r0, #0]	@ 00075e22 0078
.org 0x75e24
	lsls r0, r0, #24	@ 00075e24 0006
.org 0x75e26
	asrs r0, r0, #24	@ 00075e26 0016
.org 0x75e28
	cmp r0, #2	@ 00075e28 0228
.org 0x75e2a
	ble.n 0x75e72	@ 00075e2a 22dd
.org 0x75e2c
	adds r0, r4, #0	@ 00075e2c 201c
.org 0x75e2e
	adds r0, #116	@ 00075e2e 7430
.org 0x75e30
	ldr r1, [pc, #16]	@ 00075e30 0449
.org 0x75e32
	bl 0x5784	@ 00075e32 8ff7a7fc
.org 0x75e36
	ldrb r0, [r4, #15]	@ 00075e36 e07b
.org 0x75e38
	adds r0, #1	@ 00075e38 0130
.org 0x75e3a
	strb r0, [r4, #15]	@ 00075e3a e073
.org 0x75e3c
	b.n 0x75e72	@ 00075e3c 19e0
.org 0x75e3e
	.byte 0x00	@ 00075e3e data
.org 0x75e3f
	.byte 0x00	@ 00075e3f data
.org 0x75e40
	.byte 0x08,0xaf,0x00,0x00	@ 00075e40 data
.org 0x75e44
	.byte 0xf4,0xce,0x85,0x08	@ 00075e44 data
.org 0x75e48
	cmp r0, #1	@ 00075e48 0128
.org 0x75e4a
	bne.n 0x75e5c	@ 00075e4a 07d1
.org 0x75e4c
	adds r0, r4, #0	@ 00075e4c 201c
.org 0x75e4e
	adds r0, #115	@ 00075e4e 7330
.org 0x75e50
	ldrb r0, [r0, #0]	@ 00075e50 0078
.org 0x75e52
	cmp r0, #4	@ 00075e52 0428
.org 0x75e54
	bne.n 0x75e72	@ 00075e54 0dd1
.org 0x75e56
	adds r0, r1, #1	@ 00075e56 481c
.org 0x75e58
	strb r0, [r4, #15]	@ 00075e58 e073
.org 0x75e5a
	b.n 0x75e72	@ 00075e5a 0ae0
.org 0x75e5c
	ldrb r0, [r4, #18]	@ 00075e5c a07c
.org 0x75e5e
	subs r0, #1	@ 00075e5e 0138
.org 0x75e60
	strb r0, [r4, #18]	@ 00075e60 a074
.org 0x75e62
	lsls r0, r0, #24	@ 00075e62 0006
.org 0x75e64
	lsrs r0, r0, #24	@ 00075e64 000e
.org 0x75e66
	cmp r0, #255	@ 00075e66 ff28
.org 0x75e68
	bne.n 0x75e72	@ 00075e68 03d1
.org 0x75e6a
	movs r0, #15	@ 00075e6a 0f20
.org 0x75e6c
	strb r0, [r4, #13]	@ 00075e6c 6073
