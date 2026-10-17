@ FUN_080e055c  entry 0x080e055c  size 28
.thumb
.org 0xe055c
FUN_080e055c:
	ldrb r2, [r0, #10]	@ 000e055c 827a
.org 0xe055e
	movs r1, #254	@ 000e055e fe21
.org 0xe0560
	ands r1, r2	@ 000e0560 1140
.org 0xe0562
	strb r1, [r0, #10]	@ 000e0562 8172
.org 0xe0564
	ldr r2, [pc, #16]	@ 000e0564 044a
.org 0xe0566
	ldrb r1, [r0, #9]	@ 000e0566 417a
.org 0xe0568
	lsls r1, r1, #2	@ 000e0568 8900
.org 0xe056a
	adds r1, r1, r2	@ 000e056a 8918
.org 0xe056c
	movs r2, #4	@ 000e056c 0422
.org 0xe056e
	str r2, [r0, #12]	@ 000e056e c260
.org 0xe0570
	ldr r1, [r1, #0]	@ 000e0570 0968
.org 0xe0572
	ldr r1, [r1, #16]	@ 000e0572 0969
.org 0xe0574
	str r1, [r0, #20]	@ 000e0574 4161
.org 0xe0576
	bx lr	@ 000e0576 7047
