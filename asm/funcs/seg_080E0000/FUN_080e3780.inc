@ FUN_080e3780  entry 0x080e3780  size 28
.thumb
.org 0xe3780
FUN_080e3780:
	ldrb r2, [r0, #10]	@ 000e3780 827a
.org 0xe3782
	movs r1, #254	@ 000e3782 fe21
.org 0xe3784
	ands r1, r2	@ 000e3784 1140
.org 0xe3786
	strb r1, [r0, #10]	@ 000e3786 8172
.org 0xe3788
	ldr r2, [pc, #16]	@ 000e3788 044a
.org 0xe378a
	ldrb r1, [r0, #9]	@ 000e378a 417a
.org 0xe378c
	lsls r1, r1, #2	@ 000e378c 8900
.org 0xe378e
	adds r1, r1, r2	@ 000e378e 8918
.org 0xe3790
	movs r2, #4	@ 000e3790 0422
.org 0xe3792
	str r2, [r0, #12]	@ 000e3792 c260
.org 0xe3794
	ldr r1, [r1, #0]	@ 000e3794 0968
.org 0xe3796
	ldr r1, [r1, #16]	@ 000e3796 0969
.org 0xe3798
	str r1, [r0, #20]	@ 000e3798 4161
.org 0xe379a
	bx lr	@ 000e379a 7047
