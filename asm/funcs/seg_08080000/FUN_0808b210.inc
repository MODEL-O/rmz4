@ FUN_0808b210  entry 0x0808b210  size 36
.thumb
.org 0x8b210
FUN_0808b210:
	push {lr}	@ 0008b210 00b5
.org 0x8b212
	adds r2, r0, #0	@ 0008b212 021c
.org 0x8b214
	lsls r1, r1, #24	@ 0008b214 0906
.org 0x8b216
	adds r3, r2, #0	@ 0008b216 131c
.org 0x8b218
	adds r3, #181	@ 0008b218 b533
.org 0x8b21a
	ldrb r2, [r3, #0]	@ 0008b21a 1a78
.org 0x8b21c
	adds r2, #1	@ 0008b21c 0132
.org 0x8b21e
	strb r2, [r3, #0]	@ 0008b21e 1a70
.org 0x8b220
	lsls r2, r2, #24	@ 0008b220 1206
.org 0x8b222
	cmp r2, r1	@ 0008b222 8a42
.org 0x8b224
	bcc.n 0x8b230	@ 0008b224 04d3
.org 0x8b226
	movs r0, #0	@ 0008b226 0020
.org 0x8b228
	strb r0, [r3, #0]	@ 0008b228 1870
.org 0x8b22a
	ldr r0, [pc, #8]	@ 0008b22a 0248
.org 0x8b22c
	bl 0x2b10	@ 0008b22c 77f770fc
.org 0x8b230
	pop {r1}	@ 0008b230 02bc
.org 0x8b232
	bx r1	@ 0008b232 0847
