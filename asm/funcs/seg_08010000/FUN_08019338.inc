@ FUN_08019338  entry 0x08019338  size 38
.thumb
.org 0x19338
FUN_08019338:
	push {r4, r5, r6, lr}	@ 00019338 70b5
.org 0x1933a
	adds r6, r0, #0	@ 0001933a 061c
.org 0x1933c
	ldrb r0, [r6, #14]	@ 0001933c b07b
.org 0x1933e
	cmp r0, #0	@ 0001933e 0028
.org 0x19340
	bne.n 0x19346	@ 00019340 01d1
.org 0x19342
	adds r0, #1	@ 00019342 0130
.org 0x19344
	strb r0, [r6, #14]	@ 00019344 b073
.org 0x19346
	ldrb r0, [r6, #15]	@ 00019346 f07b
.org 0x19348
	cmp r0, #4	@ 00019348 0428
.org 0x1934a
	bls.n 0x1934e	@ 0001934a 00d9
.org 0x1934c
	b.n 0x19446	@ 0001934c 7be0
.org 0x1934e
	lsls r0, r0, #2	@ 0001934e 8000
.org 0x19350
	ldr r1, [pc, #4]	@ 00019350 0149
.org 0x19352
	adds r0, r0, r1	@ 00019352 4018
.org 0x19354
	ldr r0, [r0, #0]	@ 00019354 0068
.org 0x19356
	mov pc, r0	@ 00019356 8746
.org 0x19358
	.byte 0x5c,0x93,0x01,0x08	@ 00019358 data
.org 0x1935c
	.byte 0x70,0x93,0x01,0x08	@ 0001935c data
