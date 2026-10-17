@ FUN_080f421c  entry 0x080f421c  size 32
.thumb
.org 0xf421c
FUN_080f421c:
	push {r4, r5, lr}	@ 000f421c 30b5
.org 0xf421e
	sub sp, #40	@ 000f421e 8ab0
.org 0xf4220
	adds r5, r0, #0	@ 000f4220 051c
.org 0xf4222
	ldrb r0, [r5, #13]	@ 000f4222 687b
.org 0xf4224
	cmp r0, #4	@ 000f4224 0428
.org 0xf4226
	bls.n 0xf422a	@ 000f4226 00d9
.org 0xf4228
	b.n 0xf43a4	@ 000f4228 bce0
.org 0xf422a
	lsls r0, r0, #2	@ 000f422a 8000
.org 0xf422c
	ldr r1, [pc, #4]	@ 000f422c 0149
.org 0xf422e
	adds r0, r0, r1	@ 000f422e 4018
.org 0xf4230
	ldr r0, [r0, #0]	@ 000f4230 0068
.org 0xf4232
	mov pc, r0	@ 000f4232 8746
.org 0xf4234
	.byte 0x38,0x42,0x0f,0x08	@ 000f4234 data
.org 0xf4238
	.byte 0x4c,0x42,0x0f,0x08	@ 000f4238 data
