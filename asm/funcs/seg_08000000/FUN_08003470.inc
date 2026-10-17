@ FUN_08003470  entry 0x08003470  size 48
.thumb
.org 0x3470
FUN_08003470:
	push {r4, r5, lr}	@ 00003470 30b5
.org 0x3472
	sub sp, #8	@ 00003472 82b0
.org 0x3474
	adds r5, r0, #0	@ 00003474 051c
.org 0x3476
	movs r4, #128	@ 00003476 8024
.org 0x3478
	lsls r4, r4, #2	@ 00003478 a400
.org 0x347a
	adds r0, r4, #0	@ 0000347a 201c
.org 0x347c
	bl 0xa70	@ 0000347c fdf7f8fa
.org 0x3480
	adds r1, r5, r4	@ 00003480 2919
.org 0x3482
	str r0, [r1, #0]	@ 00003482 0860
.org 0x3484
	cmp r0, #0	@ 00003484 0028
.org 0x3486
	bne.n 0x348a	@ 00003486 00d1
.org 0x3488
	str r5, [r1, #0]	@ 00003488 0d60
.org 0x348a
	movs r0, #0	@ 0000348a 0020
.org 0x348c
	ldr r1, [r1, #0]	@ 0000348c 0968
.org 0x348e
	str r0, [sp, #0]	@ 0000348e 0090
.org 0x3490
	ldr r2, [pc, #12]	@ 00003490 034a
.org 0x3492
	mov r0, sp	@ 00003492 6846
.org 0x3494
	bl 0x128be0	@ 00003494 25f1a4fb
.org 0x3498
	add sp, #8	@ 00003498 02b0
.org 0x349a
	pop {r4, r5}	@ 0000349a 30bc
.org 0x349c
	pop {r0}	@ 0000349c 01bc
.org 0x349e
	bx r0	@ 0000349e 0047
