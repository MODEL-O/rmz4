@ FUN_0806ed04  entry 0x0806ed04  size 66
.thumb
.org 0x6ed04
FUN_0806ed04:
	push {r4, lr}	@ 0006ed04 10b5
.org 0x6ed06
	adds r4, r0, #0	@ 0006ed06 041c
.org 0x6ed08
	ldrb r0, [r4, #15]	@ 0006ed08 e07b
.org 0x6ed0a
	cmp r0, #0	@ 0006ed0a 0028
.org 0x6ed0c
	bne.n 0x6ed28	@ 0006ed0c 0cd1
.org 0x6ed0e
	adds r0, r4, #0	@ 0006ed0e 201c
.org 0x6ed10
	adds r0, #116	@ 0006ed10 7430
.org 0x6ed12
	ldr r1, [pc, #52]	@ 0006ed12 0d49
.org 0x6ed14
	bl 0x5784	@ 0006ed14 96f736fd
.org 0x6ed18
	movs r1, #173	@ 0006ed18 ad21
.org 0x6ed1a
	lsls r1, r1, #8	@ 0006ed1a 0902
.org 0x6ed1c
	adds r0, r4, #0	@ 0006ed1c 201c
.org 0x6ed1e
	bl 0x1cf00	@ 0006ed1e aef7eff8
.org 0x6ed22
	ldrb r0, [r4, #15]	@ 0006ed22 e07b
.org 0x6ed24
	adds r0, #1	@ 0006ed24 0130
.org 0x6ed26
	strb r0, [r4, #15]	@ 0006ed26 e073
.org 0x6ed28
	adds r0, r4, #0	@ 0006ed28 201c
.org 0x6ed2a
	bl 0x1cff0	@ 0006ed2a aef761f9
.org 0x6ed2e
	ldr r0, [pc, #28]	@ 0006ed2e 0748
.org 0x6ed30
	ldrh r1, [r0, #8]	@ 0006ed30 0189
.org 0x6ed32
	movs r0, #8	@ 0006ed32 0820
.org 0x6ed34
	ands r0, r1	@ 0006ed34 0840
.org 0x6ed36
	cmp r0, #0	@ 0006ed36 0028
.org 0x6ed38
	bne.n 0x6ed40	@ 0006ed38 02d1
.org 0x6ed3a
	adds r0, r4, #0	@ 0006ed3a 201c
.org 0x6ed3c
	bl 0x6f124	@ 0006ed3c 00f0f2f9
.org 0x6ed40
	pop {r4}	@ 0006ed40 10bc
.org 0x6ed42
	pop {r0}	@ 0006ed42 01bc
.org 0x6ed44
	bx r0	@ 0006ed44 0047
