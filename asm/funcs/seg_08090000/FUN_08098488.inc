@ FUN_08098488  entry 0x08098488  size 48
.thumb
.org 0x98488
FUN_08098488:
	adds r2, r0, #0	@ 00098488 021c
.org 0x9848a
	adds r0, #140	@ 0009848a 8c30
.org 0x9848c
	movs r1, #0	@ 0009848c 0021
.org 0x9848e
	str r1, [r0, #0]	@ 0009848e 0160
.org 0x98490
	adds r0, #4	@ 00098490 0430
.org 0x98492
	str r1, [r0, #0]	@ 00098492 0160
.org 0x98494
	adds r0, #4	@ 00098494 0430
.org 0x98496
	strb r1, [r0, #0]	@ 00098496 0170
.org 0x98498
	ldrb r1, [r2, #10]	@ 00098498 917a
.org 0x9849a
	movs r0, #251	@ 0009849a fb20
.org 0x9849c
	ands r0, r1	@ 0009849c 0840
.org 0x9849e
	movs r1, #254	@ 0009849e fe21
.org 0x984a0
	ands r0, r1	@ 000984a0 0840
.org 0x984a2
	strb r0, [r2, #10]	@ 000984a2 9072
.org 0x984a4
	ldr r1, [pc, #16]	@ 000984a4 0449
.org 0x984a6
	ldrb r0, [r2, #9]	@ 000984a6 507a
.org 0x984a8
	lsls r0, r0, #2	@ 000984a8 8000
.org 0x984aa
	adds r0, r0, r1	@ 000984aa 4018
.org 0x984ac
	movs r1, #4	@ 000984ac 0421
.org 0x984ae
	str r1, [r2, #12]	@ 000984ae d160
.org 0x984b0
	ldr r0, [r0, #0]	@ 000984b0 0068
.org 0x984b2
	ldr r0, [r0, #16]	@ 000984b2 0069
.org 0x984b4
	str r0, [r2, #20]	@ 000984b4 5061
.org 0x984b6
	bx lr	@ 000984b6 7047
