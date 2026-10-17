@ FUN_080da478  entry 0x080da478  size 44
.thumb
.org 0xda478
FUN_080da478:
	push {r4, lr}	@ 000da478 10b5
.org 0xda47a
	adds r4, r0, #0	@ 000da47a 041c
.org 0xda47c
	bl 0x1cff0	@ 000da47c 42f7b8fd
.org 0xda480
	ldrb r0, [r4, #18]	@ 000da480 a07c
.org 0xda482
	subs r0, #1	@ 000da482 0138
.org 0xda484
	strb r0, [r4, #18]	@ 000da484 a074
.org 0xda486
	lsls r0, r0, #24	@ 000da486 0006
.org 0xda488
	cmp r0, #0	@ 000da488 0028
.org 0xda48a
	bne.n 0xda49e	@ 000da48a 08d1
.org 0xda48c
	ldr r1, [pc, #20]	@ 000da48c 0549
.org 0xda48e
	ldrb r0, [r4, #9]	@ 000da48e 607a
.org 0xda490
	lsls r0, r0, #2	@ 000da490 8000
.org 0xda492
	adds r0, r0, r1	@ 000da492 4018
.org 0xda494
	movs r1, #2	@ 000da494 0221
.org 0xda496
	str r1, [r4, #12]	@ 000da496 e160
.org 0xda498
	ldr r0, [r0, #0]	@ 000da498 0068
.org 0xda49a
	ldr r0, [r0, #8]	@ 000da49a 8068
.org 0xda49c
	str r0, [r4, #20]	@ 000da49c 6061
.org 0xda49e
	pop {r4}	@ 000da49e 10bc
.org 0xda4a0
	pop {r0}	@ 000da4a0 01bc
.org 0xda4a2
	bx r0	@ 000da4a2 0047
