@ FUN_080fd330  entry 0x080fd330  size 32
.thumb
.org 0xfd330
FUN_080fd330:
	push {r4, r5, r6, r7, lr}	@ 000fd330 f0b5
.org 0xfd332
	sub sp, #8	@ 000fd332 82b0
.org 0xfd334
	adds r5, r0, #0	@ 000fd334 051c
.org 0xfd336
	ldrb r0, [r5, #13]	@ 000fd336 687b
.org 0xfd338
	cmp r0, #65	@ 000fd338 4128
.org 0xfd33a
	bls.n 0xfd33e	@ 000fd33a 00d9
.org 0xfd33c
	b.n 0xfd9f8	@ 000fd33c 5ce3
.org 0xfd33e
	lsls r0, r0, #2	@ 000fd33e 8000
.org 0xfd340
	ldr r1, [pc, #4]	@ 000fd340 0149
.org 0xfd342
	adds r0, r0, r1	@ 000fd342 4018
.org 0xfd344
	ldr r0, [r0, #0]	@ 000fd344 0068
.org 0xfd346
	mov pc, r0	@ 000fd346 8746
.org 0xfd348
	.byte 0x4c,0xd3,0x0f,0x08	@ 000fd348 data
.org 0xfd34c
	.byte 0x54,0xd4,0x0f,0x08	@ 000fd34c data
