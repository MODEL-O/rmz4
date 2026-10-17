@ FUN_0805ac18  entry 0x0805ac18  size 70
.thumb
.org 0x5ac18
FUN_0805ac18:
	push {r4, lr}	@ 0005ac18 10b5
.org 0x5ac1a
	adds r4, r0, #0	@ 0005ac1a 041c
.org 0x5ac1c
	ldrb r0, [r4, #15]	@ 0005ac1c e07b
.org 0x5ac1e
	cmp r0, #0	@ 0005ac1e 0028
.org 0x5ac20
	bne.n 0x5ac42	@ 0005ac20 0fd1
.org 0x5ac22
	adds r0, r4, #0	@ 0005ac22 201c
.org 0x5ac24
	adds r0, #116	@ 0005ac24 7430
.org 0x5ac26
	ldr r1, [pc, #56]	@ 0005ac26 0e49
.org 0x5ac28
	bl 0x5784	@ 0005ac28 aaf7acfd
.org 0x5ac2c
	ldr r1, [pc, #52]	@ 0005ac2c 0d49
.org 0x5ac2e
	adds r0, r4, #0	@ 0005ac2e 201c
.org 0x5ac30
	bl 0x1cf00	@ 0005ac30 c2f766f9
.org 0x5ac34
	adds r1, r4, #0	@ 0005ac34 211c
.org 0x5ac36
	adds r1, #189	@ 0005ac36 bd31
.org 0x5ac38
	movs r0, #1	@ 0005ac38 0120
.org 0x5ac3a
	strb r0, [r1, #0]	@ 0005ac3a 0870
.org 0x5ac3c
	ldrb r0, [r4, #15]	@ 0005ac3c e07b
.org 0x5ac3e
	adds r0, #1	@ 0005ac3e 0130
.org 0x5ac40
	strb r0, [r4, #15]	@ 0005ac40 e073
.org 0x5ac42
	adds r0, r4, #0	@ 0005ac42 201c
.org 0x5ac44
	bl 0x1cff0	@ 0005ac44 c2f7d4f9
.org 0x5ac48
	adds r0, r4, #0	@ 0005ac48 201c
.org 0x5ac4a
	adds r0, #115	@ 0005ac4a 7330
.org 0x5ac4c
	ldrb r1, [r0, #0]	@ 0005ac4c 0178
.org 0x5ac4e
	cmp r1, #3	@ 0005ac4e 0329
.org 0x5ac50
	bne.n 0x5ac58	@ 0005ac50 02d1
.org 0x5ac52
	movs r0, #0	@ 0005ac52 0020
.org 0x5ac54
	strb r1, [r4, #14]	@ 0005ac54 a173
.org 0x5ac56
	strb r0, [r4, #15]	@ 0005ac56 e073
.org 0x5ac58
	pop {r4}	@ 0005ac58 10bc
.org 0x5ac5a
	pop {r0}	@ 0005ac5a 01bc
.org 0x5ac5c
	bx r0	@ 0005ac5c 0047
