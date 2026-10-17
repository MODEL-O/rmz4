@ FUN_08076e20  entry 0x08076e20  size 78
.thumb
.org 0x76e20
FUN_08076e20:
	push {r4, lr}	@ 00076e20 10b5
.org 0x76e22
	adds r4, r0, #0	@ 00076e22 041c
.org 0x76e24
	ldrb r0, [r4, #14]	@ 00076e24 a07b
.org 0x76e26
	cmp r0, #0	@ 00076e26 0028
.org 0x76e28
	bne.n 0x76e42	@ 00076e28 0bd1
.org 0x76e2a
	ldr r1, [pc, #68]	@ 00076e2a 1149
.org 0x76e2c
	adds r0, r4, #0	@ 00076e2c 201c
.org 0x76e2e
	bl 0x1cf00	@ 00076e2e a6f767f8
.org 0x76e32
	adds r0, r4, #0	@ 00076e32 201c
.org 0x76e34
	adds r0, #116	@ 00076e34 7430
.org 0x76e36
	ldr r1, [pc, #60]	@ 00076e36 0f49
.org 0x76e38
	bl 0x5784	@ 00076e38 8ef7a4fc
.org 0x76e3c
	ldrb r0, [r4, #14]	@ 00076e3c a07b
.org 0x76e3e
	adds r0, #1	@ 00076e3e 0130
.org 0x76e40
	strb r0, [r4, #14]	@ 00076e40 a073
.org 0x76e42
	adds r0, r4, #0	@ 00076e42 201c
.org 0x76e44
	bl 0x1cff0	@ 00076e44 a6f7d4f8
.org 0x76e48
	ldr r0, [r4, #88]	@ 00076e48 a06d
.org 0x76e4a
	ldr r1, [r4, #96]	@ 00076e4a 216e
.org 0x76e4c
	adds r0, r0, r1	@ 00076e4c 4018
.org 0x76e4e
	str r0, [r4, #88]	@ 00076e4e a065
.org 0x76e50
	adds r1, #64	@ 00076e50 4031
.org 0x76e52
	str r1, [r4, #96]	@ 00076e52 2166
.org 0x76e54
	adds r1, r4, #0	@ 00076e54 211c
.org 0x76e56
	adds r1, #180	@ 00076e56 b431
.org 0x76e58
	ldr r1, [r1, #4]	@ 00076e58 4968
.org 0x76e5a
	cmp r0, r1	@ 00076e5a 8842
.org 0x76e5c
	blt.n 0x76e68	@ 00076e5c 04db
.org 0x76e5e
	str r1, [r4, #88]	@ 00076e5e a165
.org 0x76e60
	movs r1, #0	@ 00076e60 0021
.org 0x76e62
	movs r0, #24	@ 00076e62 1820
.org 0x76e64
	strb r0, [r4, #13]	@ 00076e64 6073
.org 0x76e66
	strb r1, [r4, #14]	@ 00076e66 a173
.org 0x76e68
	pop {r4}	@ 00076e68 10bc
.org 0x76e6a
	pop {r0}	@ 00076e6a 01bc
.org 0x76e6c
	bx r0	@ 00076e6c 0047
