@ FUN_080e555c  entry 0x080e555c  size 56
.thumb
.org 0xe555c
FUN_080e555c:
	push {r4, lr}	@ 000e555c 10b5
.org 0xe555e
	sub sp, #8	@ 000e555e 82b0
.org 0xe5560
	adds r4, r0, #0	@ 000e5560 041c
.org 0xe5562
	ldr r0, [r4, #84]	@ 000e5562 606d
.org 0xe5564
	str r0, [sp, #0]	@ 000e5564 0090
.org 0xe5566
	ldr r0, [r4, #88]	@ 000e5566 a06d
.org 0xe5568
	ldr r1, [pc, #40]	@ 000e5568 0a49
.org 0xe556a
	adds r0, r0, r1	@ 000e556a 4018
.org 0xe556c
	str r0, [sp, #4]	@ 000e556c 0190
.org 0xe556e
	movs r0, #1	@ 000e556e 0120
.org 0xe5570
	mov r1, sp	@ 000e5570 6946
.org 0xe5572
	bl 0xd0c88	@ 000e5572 ebf789fb
.org 0xe5576
	movs r0, #2	@ 000e5576 0220
.org 0xe5578
	strb r0, [r4, #17]	@ 000e5578 6074
.org 0xe557a
	adds r0, r4, #0	@ 000e557a 201c
.org 0xe557c
	adds r0, #84	@ 000e557c 5430
.org 0xe557e
	movs r1, #1	@ 000e557e 0121
.org 0xe5580
	movs r2, #4	@ 000e5580 0422
.org 0xe5582
	bl 0xe52b4	@ 000e5582 fff797fe
.org 0xe5586
	adds r0, r4, #0	@ 000e5586 201c
.org 0xe5588
	bl 0xe5450	@ 000e5588 fff762ff
.org 0xe558c
	add sp, #8	@ 000e558c 02b0
.org 0xe558e
	pop {r4}	@ 000e558e 10bc
.org 0xe5590
	pop {r0}	@ 000e5590 01bc
.org 0xe5592
	bx r0	@ 000e5592 0047
