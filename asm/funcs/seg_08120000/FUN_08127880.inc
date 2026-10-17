@ FUN_08127880  entry 0x08127880  size 42
.thumb
.org 0x127880
FUN_08127880:
	push {lr}	@ 00127880 00b5
.org 0x127882
	lsls r0, r0, #16	@ 00127882 0004
.org 0x127884
	ldr r2, [pc, #36]	@ 00127884 094a
.org 0x127886
	ldr r1, [pc, #40]	@ 00127886 0a49
.org 0x127888
	lsrs r0, r0, #13	@ 00127888 400b
.org 0x12788a
	adds r0, r0, r1	@ 0012788a 4018
.org 0x12788c
	ldrh r3, [r0, #4]	@ 0012788c 8388
.org 0x12788e
	lsls r1, r3, #1	@ 0012788e 5900
.org 0x127890
	adds r1, r1, r3	@ 00127890 c918
.org 0x127892
	lsls r1, r1, #2	@ 00127892 8900
.org 0x127894
	adds r1, r1, r2	@ 00127894 8918
.org 0x127896
	ldr r2, [r1, #0]	@ 00127896 0a68
.org 0x127898
	ldr r1, [r2, #0]	@ 00127898 1168
.org 0x12789a
	ldr r0, [r0, #0]	@ 0012789a 0068
.org 0x12789c
	cmp r1, r0	@ 0012789c 8142
.org 0x12789e
	bne.n 0x1278a6	@ 0012789e 02d1
.org 0x1278a0
	adds r0, r2, #0	@ 001278a0 101c
.org 0x1278a2
	bl 0x127f84	@ 001278a2 00f06ffb
.org 0x1278a6
	pop {r0}	@ 001278a6 01bc
.org 0x1278a8
	bx r0	@ 001278a8 0047
