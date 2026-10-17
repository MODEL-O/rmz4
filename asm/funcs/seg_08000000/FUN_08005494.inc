@ FUN_08005494  entry 0x08005494  size 32
.thumb
.org 0x5494
FUN_08005494:
	push {r4, r5, lr}	@ 00005494 30b5
.org 0x5496
	sub sp, #4	@ 00005496 81b0
.org 0x5498
	movs r1, #4	@ 00005498 0421
.org 0x549a
	ldrsb r1, [r0, r1]	@ 0000549a 4156
.org 0x549c
	ldr r2, [r0, #0]	@ 0000549c 0268
.org 0x549e
	movs r4, #6	@ 0000549e 0624
.org 0x54a0
	ldrsh r3, [r0, r4]	@ 000054a0 035f
.org 0x54a2
	movs r5, #8	@ 000054a2 0825
.org 0x54a4
	ldrsh r4, [r0, r5]	@ 000054a4 445f
.org 0x54a6
	str r4, [sp, #0]	@ 000054a6 0094
.org 0x54a8
	bl 0x5440	@ 000054a8 fff7caff
.org 0x54ac
	add sp, #4	@ 000054ac 01b0
.org 0x54ae
	pop {r4, r5}	@ 000054ae 30bc
.org 0x54b0
	pop {r0}	@ 000054b0 01bc
.org 0x54b2
	bx r0	@ 000054b2 0047
