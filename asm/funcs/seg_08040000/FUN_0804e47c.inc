@ FUN_0804e47c  entry 0x0804e47c  size 48
.thumb
.org 0x4e47c
FUN_0804e47c:
	adds r2, r0, #0	@ 0004e47c 021c
.org 0x4e47e
	adds r0, #140	@ 0004e47e 8c30
.org 0x4e480
	movs r1, #0	@ 0004e480 0021
.org 0x4e482
	str r1, [r0, #0]	@ 0004e482 0160
.org 0x4e484
	adds r0, #4	@ 0004e484 0430
.org 0x4e486
	str r1, [r0, #0]	@ 0004e486 0160
.org 0x4e488
	adds r0, #4	@ 0004e488 0430
.org 0x4e48a
	strb r1, [r0, #0]	@ 0004e48a 0170
.org 0x4e48c
	ldrb r1, [r2, #10]	@ 0004e48c 917a
.org 0x4e48e
	movs r0, #251	@ 0004e48e fb20
.org 0x4e490
	ands r0, r1	@ 0004e490 0840
.org 0x4e492
	movs r1, #254	@ 0004e492 fe21
.org 0x4e494
	ands r0, r1	@ 0004e494 0840
.org 0x4e496
	strb r0, [r2, #10]	@ 0004e496 9072
.org 0x4e498
	ldr r1, [pc, #16]	@ 0004e498 0449
.org 0x4e49a
	ldrb r0, [r2, #9]	@ 0004e49a 507a
.org 0x4e49c
	lsls r0, r0, #2	@ 0004e49c 8000
.org 0x4e49e
	adds r0, r0, r1	@ 0004e49e 4018
.org 0x4e4a0
	movs r1, #4	@ 0004e4a0 0421
.org 0x4e4a2
	str r1, [r2, #12]	@ 0004e4a2 d160
.org 0x4e4a4
	ldr r0, [r0, #0]	@ 0004e4a4 0068
.org 0x4e4a6
	ldr r0, [r0, #16]	@ 0004e4a6 0069
.org 0x4e4a8
	str r0, [r2, #20]	@ 0004e4a8 5061
.org 0x4e4aa
	bx lr	@ 0004e4aa 7047
