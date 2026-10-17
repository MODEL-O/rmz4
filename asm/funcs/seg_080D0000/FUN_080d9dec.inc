@ FUN_080d9dec  entry 0x080d9dec  size 120
.thumb
.org 0xd9dec
FUN_080d9dec:
	push {r4, r5, r6, lr}	@ 000d9dec 70b5
.org 0xd9dee
	adds r4, r0, #0	@ 000d9dee 041c
.org 0xd9df0
	ldr r1, [r4, #84]	@ 000d9df0 616d
.org 0xd9df2
	ldr r0, [r4, #92]	@ 000d9df2 e06d
.org 0xd9df4
	adds r6, r1, r0	@ 000d9df4 0e18
.org 0xd9df6
	ldr r1, [r4, #88]	@ 000d9df6 a16d
.org 0xd9df8
	ldr r0, [r4, #96]	@ 000d9df8 206e
.org 0xd9dfa
	adds r5, r1, r0	@ 000d9dfa 0d18
.org 0xd9dfc
	ldrb r0, [r4, #18]	@ 000d9dfc a07c
.org 0xd9dfe
	subs r0, #1	@ 000d9dfe 0138
.org 0xd9e00
	strb r0, [r4, #18]	@ 000d9e00 a074
.org 0xd9e02
	lsls r0, r0, #24	@ 000d9e02 0006
.org 0xd9e04
	cmp r0, #0	@ 000d9e04 0028
.org 0xd9e06
	beq.n 0xd9e16	@ 000d9e06 06d0
.org 0xd9e08
	adds r0, r6, #0	@ 000d9e08 301c
.org 0xd9e0a
	adds r1, r5, #0	@ 000d9e0a 291c
.org 0xd9e0c
	bl 0x7c7c	@ 000d9e0c 2df736ff
.org 0xd9e10
	lsls r0, r0, #16	@ 000d9e10 0004
.org 0xd9e12
	cmp r0, #0	@ 000d9e12 0028
.org 0xd9e14
	beq.n 0xd9e34	@ 000d9e14 0ed0
.org 0xd9e16
	ldr r1, [pc, #24]	@ 000d9e16 0649
.org 0xd9e18
	ldrb r0, [r4, #9]	@ 000d9e18 607a
.org 0xd9e1a
	lsls r0, r0, #2	@ 000d9e1a 8000
.org 0xd9e1c
	adds r0, r0, r1	@ 000d9e1c 4018
.org 0xd9e1e
	movs r1, #2	@ 000d9e1e 0221
.org 0xd9e20
	str r1, [r4, #12]	@ 000d9e20 e160
.org 0xd9e22
	ldr r0, [r0, #0]	@ 000d9e22 0068
.org 0xd9e24
	ldr r0, [r0, #8]	@ 000d9e24 8068
.org 0xd9e26
	str r0, [r4, #20]	@ 000d9e26 6061
.org 0xd9e28
	adds r0, r4, #0	@ 000d9e28 201c
.org 0xd9e2a
	bl 0xd9e68	@ 000d9e2a 00f01df8
.org 0xd9e2e
	b.n 0xd9e62	@ 000d9e2e 18e0
.org 0xd9e30
	.byte 0x64,0x6f,0x86,0x08	@ 000d9e30 data
.org 0xd9e34
	adds r0, r4, #0	@ 000d9e34 201c
.org 0xd9e36
	bl 0x1cff0	@ 000d9e36 43f7dbf8
.org 0xd9e3a
	str r6, [r4, #84]	@ 000d9e3a 6665
.org 0xd9e3c
	str r5, [r4, #88]	@ 000d9e3c a565
.org 0xd9e3e
	ldr r0, [r4, #96]	@ 000d9e3e 206e
.org 0xd9e40
	adds r0, #64	@ 000d9e40 4030
.org 0xd9e42
	str r0, [r4, #96]	@ 000d9e42 2066
.org 0xd9e44
	movs r1, #224	@ 000d9e44 e021
.org 0xd9e46
	lsls r1, r1, #3	@ 000d9e46 c900
.org 0xd9e48
	cmp r0, r1	@ 000d9e48 8842
.org 0xd9e4a
	ble.n 0xd9e4e	@ 000d9e4a 00dd
.org 0xd9e4c
	str r1, [r4, #96]	@ 000d9e4c 2166
.org 0xd9e4e
	adds r0, r4, #0	@ 000d9e4e 201c
.org 0xd9e50
	adds r0, #116	@ 000d9e50 7430
.org 0xd9e52
	adds r1, r4, #0	@ 000d9e52 211c
.org 0xd9e54
	adds r1, #117	@ 000d9e54 7531
.org 0xd9e56
	ldrb r1, [r1, #0]	@ 000d9e56 0978
.org 0xd9e58
	ldrb r2, [r0, #0]	@ 000d9e58 0278
.org 0xd9e5a
	adds r1, r1, r2	@ 000d9e5a 8918
.org 0xd9e5c
	strb r1, [r0, #0]	@ 000d9e5c 0170
.org 0xd9e5e
	subs r0, #80	@ 000d9e5e 5038
.org 0xd9e60
	strb r1, [r0, #0]	@ 000d9e60 0170
.org 0xd9e62
	pop {r4, r5, r6}	@ 000d9e62 70bc
