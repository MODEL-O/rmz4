@ FUN_081278b4  entry 0x081278b4  size 42
.thumb
.org 0x1278b4
FUN_081278b4:
	push {lr}	@ 001278b4 00b5
.org 0x1278b6
	lsls r0, r0, #16	@ 001278b6 0004
.org 0x1278b8
	ldr r2, [pc, #36]	@ 001278b8 094a
.org 0x1278ba
	ldr r1, [pc, #40]	@ 001278ba 0a49
.org 0x1278bc
	lsrs r0, r0, #13	@ 001278bc 400b
.org 0x1278be
	adds r0, r0, r1	@ 001278be 4018
.org 0x1278c0
	ldrh r3, [r0, #4]	@ 001278c0 8388
.org 0x1278c2
	lsls r1, r3, #1	@ 001278c2 5900
.org 0x1278c4
	adds r1, r1, r3	@ 001278c4 c918
.org 0x1278c6
	lsls r1, r1, #2	@ 001278c6 8900
.org 0x1278c8
	adds r1, r1, r2	@ 001278c8 8918
.org 0x1278ca
	ldr r2, [r1, #0]	@ 001278ca 0a68
.org 0x1278cc
	ldr r1, [r2, #0]	@ 001278cc 1168
.org 0x1278ce
	ldr r0, [r0, #0]	@ 001278ce 0068
.org 0x1278d0
	cmp r1, r0	@ 001278d0 8142
.org 0x1278d2
	bne.n 0x1278da	@ 001278d2 02d1
.org 0x1278d4
	adds r0, r2, #0	@ 001278d4 101c
.org 0x1278d6
	bl 0x1276f4	@ 001278d6 fff70dff
.org 0x1278da
	pop {r0}	@ 001278da 01bc
.org 0x1278dc
	bx r0	@ 001278dc 0047
