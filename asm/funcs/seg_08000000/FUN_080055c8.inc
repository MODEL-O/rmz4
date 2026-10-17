@ FUN_080055c8  entry 0x080055c8  size 26
.thumb
.org 0x55c8
FUN_080055c8:
	ldr r3, [r1, #4]	@ 000055c8 4b68
.org 0x55ca
	ldr r2, [r1, #0]	@ 000055ca 0a68
.org 0x55cc
	str r2, [r3, #0]	@ 000055cc 1a60
.org 0x55ce
	ldr r3, [r1, #0]	@ 000055ce 0b68
.org 0x55d0
	ldr r2, [r1, #4]	@ 000055d0 4a68
.org 0x55d2
	str r2, [r3, #4]	@ 000055d2 5a60
.org 0x55d4
	ldr r2, [r0, #16]	@ 000055d4 0269
.org 0x55d6
	str r2, [r1, #0]	@ 000055d6 0a60
.org 0x55d8
	str r1, [r0, #16]	@ 000055d8 0161
.org 0x55da
	ldrh r1, [r0, #10]	@ 000055da 4189
.org 0x55dc
	adds r1, #1	@ 000055dc 0131
.org 0x55de
	strh r1, [r0, #10]	@ 000055de 4181
.org 0x55e0
	bx lr	@ 000055e0 7047
