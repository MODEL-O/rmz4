@ FUN_080ac300  entry 0x080ac300  size 60
.thumb
.org 0xac300
FUN_080ac300:
	push {lr}	@ 000ac300 00b5
.org 0xac302
	adds r2, r0, #0	@ 000ac302 021c
.org 0xac304
	ldr r0, [pc, #52]	@ 000ac304 0d48
.org 0xac306
	ldr r3, [r0, #0]	@ 000ac306 0368
.org 0xac308
	cmp r3, #0	@ 000ac308 002b
.org 0xac30a
	beq.n 0xac338	@ 000ac30a 15d0
.org 0xac30c
	adds r0, r2, #0	@ 000ac30c 101c
.org 0xac30e
	adds r0, #140	@ 000ac30e 8c30
.org 0xac310
	ldr r0, [r0, #0]	@ 000ac310 0068
.org 0xac312
	movs r1, #128	@ 000ac312 8021
.org 0xac314
	lsls r1, r1, #4	@ 000ac314 0901
.org 0xac316
	ands r0, r1	@ 000ac316 0840
.org 0xac318
	cmp r0, #0	@ 000ac318 0028
.org 0xac31a
	beq.n 0xac338	@ 000ac31a 0dd0
.org 0xac31c
	movs r0, #0	@ 000ac31c 0020
.org 0xac31e
	str r0, [r3, #96]	@ 000ac31e 1866
.org 0xac320
	adds r1, r2, #0	@ 000ac320 111c
.org 0xac322
	adds r1, #180	@ 000ac322 b431
.org 0xac324
	ldr r0, [r2, #84]	@ 000ac324 506d
.org 0xac326
	ldr r1, [r1, #0]	@ 000ac326 0968
.org 0xac328
	adds r0, r0, r1	@ 000ac328 4018
.org 0xac32a
	str r0, [r3, #84]	@ 000ac32a 5865
.org 0xac32c
	adds r1, r2, #0	@ 000ac32c 111c
.org 0xac32e
	adds r1, #184	@ 000ac32e b831
.org 0xac330
	ldr r0, [r2, #88]	@ 000ac330 906d
.org 0xac332
	ldr r1, [r1, #0]	@ 000ac332 0968
.org 0xac334
	adds r0, r0, r1	@ 000ac334 4018
.org 0xac336
	str r0, [r3, #88]	@ 000ac336 9865
.org 0xac338
	pop {r0}	@ 000ac338 01bc
.org 0xac33a
	bx r0	@ 000ac33a 0047
