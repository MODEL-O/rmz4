@ FUN_08092200  entry 0x08092200  size 52
.thumb
.org 0x92200
FUN_08092200:
	push {r4, r5, r6, lr}	@ 00092200 70b5
.org 0x92202
	adds r4, r0, #0	@ 00092202 041c
.org 0x92204
	adds r6, r4, #0	@ 00092204 261c
.org 0x92206
	adds r6, #180	@ 00092206 b436
.org 0x92208
	ldr r5, [r6, #0]	@ 00092208 3568
.org 0x9220a
	cmp r5, #0	@ 0009220a 002d
.org 0x9220c
	bne.n 0x9222e	@ 0009220c 0fd1
.org 0x9220e
	adds r0, #140	@ 0009220e 8c30
.org 0x92210
	ldr r0, [r0, #0]	@ 00092210 0068
.org 0x92212
	movs r1, #1	@ 00092212 0121
.org 0x92214
	ands r0, r1	@ 00092214 0840
.org 0x92216
	cmp r0, #0	@ 00092216 0028
.org 0x92218
	beq.n 0x9222e	@ 00092218 09d0
.org 0x9221a
	ldr r2, [pc, #24]	@ 0009221a 064a
.org 0x9221c
	movs r0, #0	@ 0009221c 0020
.org 0x9221e
	adds r1, r4, #0	@ 0009221e 211c
.org 0x92220
	bl 0x2adac	@ 00092220 98f7c4fd
.org 0x92224
	str r0, [r6, #0]	@ 00092224 3060
.org 0x92226
	cmp r0, #0	@ 00092226 0028
.org 0x92228
	beq.n 0x9222e	@ 00092228 01d0
.org 0x9222a
	strb r5, [r4, #13]	@ 0009222a 6573
.org 0x9222c
	strb r5, [r4, #14]	@ 0009222c a573
.org 0x9222e
	pop {r4, r5, r6}	@ 0009222e 70bc
.org 0x92230
	pop {r0}	@ 00092230 01bc
.org 0x92232
	bx r0	@ 00092232 0047
