@ FUN_080a9a70  entry 0x080a9a70  size 40
.thumb
.org 0xa9a70
FUN_080a9a70:
	push {r4, lr}	@ 000a9a70 10b5
.org 0xa9a72
	adds r4, r0, #0	@ 000a9a72 041c
.org 0xa9a74
	ldr r0, [r4, #84]	@ 000a9a74 606d
.org 0xa9a76
	ldr r1, [r4, #88]	@ 000a9a76 a16d
.org 0xa9a78
	bl 0x7c7c	@ 000a9a78 5ef700f9
.org 0xa9a7c
	lsls r0, r0, #16	@ 000a9a7c 0004
.org 0xa9a7e
	cmp r0, #0	@ 000a9a7e 0028
.org 0xa9a80
	bne.n 0xa9a86	@ 000a9a80 01d1
.org 0xa9a82
	movs r0, #0	@ 000a9a82 0020
.org 0xa9a84
	b.n 0xa9a92	@ 000a9a84 05e0
.org 0xa9a86
	ldr r0, [r4, #84]	@ 000a9a86 606d
.org 0xa9a88
	ldr r1, [r4, #88]	@ 000a9a88 a16d
.org 0xa9a8a
	bl 0x8534	@ 000a9a8a 5ef753fd
.org 0xa9a8e
	str r0, [r4, #88]	@ 000a9a8e a065
.org 0xa9a90
	movs r0, #1	@ 000a9a90 0120
.org 0xa9a92
	pop {r4}	@ 000a9a92 10bc
.org 0xa9a94
	pop {r1}	@ 000a9a94 02bc
.org 0xa9a96
	bx r1	@ 000a9a96 0847
