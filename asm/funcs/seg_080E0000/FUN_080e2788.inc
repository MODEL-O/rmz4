@ FUN_080e2788  entry 0x080e2788  size 28
.thumb
.org 0xe2788
FUN_080e2788:
	ldrb r2, [r0, #10]	@ 000e2788 827a
.org 0xe278a
	movs r1, #254	@ 000e278a fe21
.org 0xe278c
	ands r1, r2	@ 000e278c 1140
.org 0xe278e
	strb r1, [r0, #10]	@ 000e278e 8172
.org 0xe2790
	ldr r2, [pc, #16]	@ 000e2790 044a
.org 0xe2792
	ldrb r1, [r0, #9]	@ 000e2792 417a
.org 0xe2794
	lsls r1, r1, #2	@ 000e2794 8900
.org 0xe2796
	adds r1, r1, r2	@ 000e2796 8918
.org 0xe2798
	movs r2, #4	@ 000e2798 0422
.org 0xe279a
	str r2, [r0, #12]	@ 000e279a c260
.org 0xe279c
	ldr r1, [r1, #0]	@ 000e279c 0968
.org 0xe279e
	ldr r1, [r1, #16]	@ 000e279e 0969
.org 0xe27a0
	str r1, [r0, #20]	@ 000e27a0 4161
.org 0xe27a2
	bx lr	@ 000e27a2 7047
