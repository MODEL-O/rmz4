@ FUN_080ca8c0  entry 0x080ca8c0  size 56
.thumb
.org 0xca8c0
FUN_080ca8c0:
	push {r4, lr}	@ 000ca8c0 10b5
.org 0xca8c2
	adds r4, r0, #0	@ 000ca8c2 041c
.org 0xca8c4
	bl 0x1cff0	@ 000ca8c4 52f794fb
.org 0xca8c8
	ldr r0, [r4, #84]	@ 000ca8c8 606d
.org 0xca8ca
	ldr r1, [r4, #92]	@ 000ca8ca e16d
.org 0xca8cc
	adds r0, r0, r1	@ 000ca8cc 4018
.org 0xca8ce
	str r0, [r4, #84]	@ 000ca8ce 6065
.org 0xca8d0
	ldr r1, [r4, #88]	@ 000ca8d0 a16d
.org 0xca8d2
	ldr r2, [r4, #104]	@ 000ca8d2 a26e
.org 0xca8d4
	adds r1, r1, r2	@ 000ca8d4 8918
.org 0xca8d6
	bl 0x7c7c	@ 000ca8d6 3df7d1f9
.org 0xca8da
	lsls r0, r0, #16	@ 000ca8da 0004
.org 0xca8dc
	cmp r0, #0	@ 000ca8dc 0028
.org 0xca8de
	beq.n 0xca8f2	@ 000ca8de 08d0
.org 0xca8e0
	ldr r1, [pc, #20]	@ 000ca8e0 0549
.org 0xca8e2
	ldrb r0, [r4, #9]	@ 000ca8e2 607a
.org 0xca8e4
	lsls r0, r0, #2	@ 000ca8e4 8000
.org 0xca8e6
	adds r0, r0, r1	@ 000ca8e6 4018
.org 0xca8e8
	movs r1, #2	@ 000ca8e8 0221
.org 0xca8ea
	str r1, [r4, #12]	@ 000ca8ea e160
.org 0xca8ec
	ldr r0, [r0, #0]	@ 000ca8ec 0068
.org 0xca8ee
	ldr r0, [r0, #8]	@ 000ca8ee 8068
.org 0xca8f0
	str r0, [r4, #20]	@ 000ca8f0 6061
.org 0xca8f2
	pop {r4}	@ 000ca8f2 10bc
.org 0xca8f4
	pop {r0}	@ 000ca8f4 01bc
.org 0xca8f6
	bx r0	@ 000ca8f6 0047
