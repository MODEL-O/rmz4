@ FUN_0810e480  entry 0x0810e480  size 54
.thumb
.org 0x10e480
FUN_0810e480:
	push {r4, lr}	@ 0010e480 10b5
.org 0x10e482
	ldr r2, [pc, #52]	@ 0010e482 0d4a
.org 0x10e484
	movs r3, #179	@ 0010e484 b323
.org 0x10e486
	lsls r3, r3, #3	@ 0010e486 db00
.org 0x10e488
	adds r1, r2, r3	@ 0010e488 d118
.org 0x10e48a
	movs r4, #0	@ 0010e48a 0024
.org 0x10e48c
	strb r4, [r1, #0]	@ 0010e48c 0c70
.org 0x10e48e
	ldr r1, [pc, #44]	@ 0010e48e 0b49
.org 0x10e490
	adds r3, r2, r1	@ 0010e490 5318
.org 0x10e492
	movs r1, #30	@ 0010e492 1e21
.org 0x10e494
	strb r1, [r3, #0]	@ 0010e494 1970
.org 0x10e496
	ldr r3, [pc, #40]	@ 0010e496 0a4b
.org 0x10e498
	adds r1, r2, r3	@ 0010e498 d118
.org 0x10e49a
	strb r4, [r1, #0]	@ 0010e49a 0c70
.org 0x10e49c
	ldr r1, [pc, #36]	@ 0010e49c 0949
.org 0x10e49e
	adds r2, r2, r1	@ 0010e49e 5218
.org 0x10e4a0
	movs r1, #22	@ 0010e4a0 1621
.org 0x10e4a2
	strb r1, [r2, #0]	@ 0010e4a2 1170
.org 0x10e4a4
	ldr r1, [pc, #32]	@ 0010e4a4 0849
.org 0x10e4a6
	str r4, [r1, #0]	@ 0010e4a6 0c60
.org 0x10e4a8
	str r0, [r1, #4]	@ 0010e4a8 4860
.org 0x10e4aa
	str r4, [r1, #20]	@ 0010e4aa 4c61
.org 0x10e4ac
	adds r1, #8	@ 0010e4ac 0831
.org 0x10e4ae
	strh r4, [r1, #2]	@ 0010e4ae 4c80
.org 0x10e4b0
	pop {r4}	@ 0010e4b0 10bc
.org 0x10e4b2
	pop {r0}	@ 0010e4b2 01bc
.org 0x10e4b4
	bx r0	@ 0010e4b4 0047
