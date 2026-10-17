@ FUN_0801e204  entry 0x0801e204  size 74
.thumb
.org 0x1e204
FUN_0801e204:
	push {r4, lr}	@ 0001e204 10b5
.org 0x1e206
	adds r3, r0, #0	@ 0001e206 031c
.org 0x1e208
	ldr r1, [pc, #36]	@ 0001e208 0949
.org 0x1e20a
	ldr r2, [pc, #40]	@ 0001e20a 0a4a
.org 0x1e20c
	adds r0, r1, r2	@ 0001e20c 8818
.org 0x1e20e
	ldr r2, [r0, #0]	@ 0001e20e 0268
.org 0x1e210
	adds r0, r2, #0	@ 0001e210 101c
.org 0x1e212
	adds r4, r1, #0	@ 0001e212 0c1c
.org 0x1e214
	cmp r2, r3	@ 0001e214 9a42
.org 0x1e216
	beq.n 0x1e220	@ 0001e216 03d0
.org 0x1e218
	adds r2, r0, #0	@ 0001e218 021c
.org 0x1e21a
	ldr r0, [r2, #0]	@ 0001e21a 1068
.org 0x1e21c
	cmp r0, r3	@ 0001e21c 9842
.org 0x1e21e
	bne.n 0x1e218	@ 0001e21e fbd1
.org 0x1e220
	cmp r0, r2	@ 0001e220 9042
.org 0x1e222
	bne.n 0x1e238	@ 0001e222 09d1
.org 0x1e224
	ldr r0, [pc, #12]	@ 0001e224 0348
.org 0x1e226
	adds r1, r4, r0	@ 0001e226 2118
.org 0x1e228
	ldr r0, [r3, #0]	@ 0001e228 1868
.org 0x1e22a
	str r0, [r1, #0]	@ 0001e22a 0860
.org 0x1e22c
	b.n 0x1e23c	@ 0001e22c 06e0
.org 0x1e22e
	.byte 0x00	@ 0001e22e data
.org 0x1e22f
	.byte 0x00	@ 0001e22f data
.org 0x1e230
	.byte 0x40,0xe4,0x02,0x02	@ 0001e230 data
.org 0x1e234
	.byte 0x44,0x04,0x00,0x00	@ 0001e234 data
.org 0x1e238
	ldr r0, [r3, #0]	@ 0001e238 1868
.org 0x1e23a
	str r0, [r2, #0]	@ 0001e23a 1060
.org 0x1e23c
	movs r2, #137	@ 0001e23c 8922
.org 0x1e23e
	lsls r2, r2, #3	@ 0001e23e d200
.org 0x1e240
	adds r1, r4, r2	@ 0001e240 a118
.org 0x1e242
	ldr r0, [r1, #0]	@ 0001e242 0868
.org 0x1e244
	str r0, [r3, #0]	@ 0001e244 1860
.org 0x1e246
	str r3, [r1, #0]	@ 0001e246 0b60
.org 0x1e248
	ldr r0, [pc, #12]	@ 0001e248 0348
.org 0x1e24a
	adds r1, r4, r0	@ 0001e24a 2118
.org 0x1e24c
	ldrh r0, [r1, #0]	@ 0001e24c 0888
