@ FUN_08066190  entry 0x08066190  size 26
.thumb
.org 0x66190
FUN_08066190:
	ldr r2, [pc, #24]	@ 00066190 064a
.org 0x66192
	ldr r1, [r2, #0]	@ 00066192 1168
.org 0x66194
	ldr r0, [pc, #24]	@ 00066194 0648
.org 0x66196
	muls r0, r1	@ 00066196 4843
.org 0x66198
	ldr r1, [pc, #24]	@ 00066198 0649
.org 0x6619a
	adds r0, r0, r1	@ 0006619a 4018
.org 0x6619c
	lsls r0, r0, #1	@ 0006619c 4000
.org 0x6619e
	lsrs r1, r0, #1	@ 0006619e 4108
.org 0x661a0
	str r1, [r2, #0]	@ 000661a0 1160
.org 0x661a2
	lsrs r0, r0, #17	@ 000661a2 400c
.org 0x661a4
	movs r1, #3	@ 000661a4 0321
.org 0x661a6
	ands r0, r1	@ 000661a6 0840
.org 0x661a8
	bx lr	@ 000661a8 7047
