@ FUN_080e94c0  entry 0x080e94c0  size 24
.thumb
.org 0xe94c0
FUN_080e94c0:
	push {lr}	@ 000e94c0 00b5
.org 0xe94c2
	adds r1, r0, #0	@ 000e94c2 011c
.org 0xe94c4
	ldr r2, [r1, #88]	@ 000e94c4 8a6d
.org 0xe94c6
	ldr r0, [r1, #120]	@ 000e94c6 886f
.org 0xe94c8
	subs r0, r2, r0	@ 000e94c8 101a
.org 0xe94ca
	cmp r0, #0	@ 000e94ca 0028
.org 0xe94cc
	ble.n 0xe94d4	@ 000e94cc 02dd
.org 0xe94ce
	ldr r3, [pc, #8]	@ 000e94ce 024b
.org 0xe94d0
	adds r0, r2, r3	@ 000e94d0 d018
.org 0xe94d2
	str r0, [r1, #88]	@ 000e94d2 8865
.org 0xe94d4
	pop {r0}	@ 000e94d4 01bc
.org 0xe94d6
	bx r0	@ 000e94d6 0047
