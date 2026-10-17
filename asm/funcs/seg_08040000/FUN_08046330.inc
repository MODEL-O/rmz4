@ FUN_08046330  entry 0x08046330  size 90
.thumb
.org 0x46330
FUN_08046330:
	push {lr}	@ 00046330 00b5
.org 0x46332
	adds r3, r0, #0	@ 00046332 031c
.org 0x46334
	ldr r0, [r3, #44]	@ 00046334 d86a
.org 0x46336
	adds r0, #250	@ 00046336 fa30
.org 0x46338
	ldrb r0, [r0, #0]	@ 00046338 0078
.org 0x4633a
	cmp r0, #2	@ 0004633a 0228
.org 0x4633c
	bne.n 0x4637c	@ 0004633c 1ed1
.org 0x4633e
	ldrb r1, [r3, #10]	@ 0004633e 997a
.org 0x46340
	movs r0, #254	@ 00046340 fe20
.org 0x46342
	ands r0, r1	@ 00046342 0840
.org 0x46344
	movs r2, #0	@ 00046344 0022
.org 0x46346
	movs r1, #253	@ 00046346 fd21
.org 0x46348
	ands r0, r1	@ 00046348 0840
.org 0x4634a
	strb r0, [r3, #10]	@ 0004634a 9872
.org 0x4634c
	adds r0, r3, #0	@ 0004634c 181c
.org 0x4634e
	adds r0, #140	@ 0004634e 8c30
.org 0x46350
	str r2, [r0, #0]	@ 00046350 0260
.org 0x46352
	adds r0, #4	@ 00046352 0430
.org 0x46354
	str r2, [r0, #0]	@ 00046354 0260
.org 0x46356
	adds r0, #4	@ 00046356 0430
.org 0x46358
	strb r2, [r0, #0]	@ 00046358 0270
.org 0x4635a
	ldrb r1, [r3, #10]	@ 0004635a 997a
.org 0x4635c
	movs r0, #251	@ 0004635c fb20
.org 0x4635e
	ands r0, r1	@ 0004635e 0840
.org 0x46360
	strb r0, [r3, #10]	@ 00046360 9872
.org 0x46362
	ldr r1, [pc, #20]	@ 00046362 0549
.org 0x46364
	ldrb r0, [r3, #9]	@ 00046364 587a
.org 0x46366
	lsls r0, r0, #2	@ 00046366 8000
.org 0x46368
	adds r0, r0, r1	@ 00046368 4018
.org 0x4636a
	movs r1, #3	@ 0004636a 0321
.org 0x4636c
	str r1, [r3, #12]	@ 0004636c d960
.org 0x4636e
	ldr r0, [r0, #0]	@ 0004636e 0068
.org 0x46370
	ldr r0, [r0, #12]	@ 00046370 c068
.org 0x46372
	str r0, [r3, #20]	@ 00046372 5861
.org 0x46374
	b.n 0x4638c	@ 00046374 0ae0
.org 0x46376
	.byte 0x00	@ 00046376 data
.org 0x46377
	.byte 0x00	@ 00046377 data
.org 0x46378
	.byte 0xf8,0x39,0x85,0x08	@ 00046378 data
.org 0x4637c
	ldr r0, [pc, #16]	@ 0004637c 0448
.org 0x4637e
	ldrb r1, [r3, #16]	@ 0004637e 197c
.org 0x46380
	lsls r1, r1, #2	@ 00046380 8900
.org 0x46382
	adds r1, r1, r0	@ 00046382 0918
.org 0x46384
	ldr r1, [r1, #0]	@ 00046384 0968
.org 0x46386
	adds r0, r3, #0	@ 00046386 181c
.org 0x46388
	bl 0x128f80	@ 00046388 e2f0fafd
