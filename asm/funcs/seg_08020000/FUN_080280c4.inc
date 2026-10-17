@ FUN_080280c4  entry 0x080280c4  size 46
.thumb
.org 0x280c4
FUN_080280c4:
	push {r4, r5, r6, r7, lr}	@ 000280c4 f0b5
.org 0x280c6
	mov r7, r8	@ 000280c6 4746
.org 0x280c8
	push {r7}	@ 000280c8 80b4
.org 0x280ca
	sub sp, #12	@ 000280ca 83b0
.org 0x280cc
	adds r2, r0, #0	@ 000280cc 021c
.org 0x280ce
	ldr r7, [r2, #12]	@ 000280ce d768
.org 0x280d0
	movs r1, #2	@ 000280d0 0221
.org 0x280d2
	ldrsh r0, [r7, r1]	@ 000280d2 785e
.org 0x280d4
	cmp r0, #6	@ 000280d4 0628
.org 0x280d6
	bls.n 0x280da	@ 000280d6 00d9
.org 0x280d8
	b.n 0x283a0	@ 000280d8 62e1
.org 0x280da
	lsls r0, r0, #2	@ 000280da 8000
.org 0x280dc
	ldr r1, [pc, #4]	@ 000280dc 0149
.org 0x280de
	adds r0, r0, r1	@ 000280de 4018
.org 0x280e0
	ldr r0, [r0, #0]	@ 000280e0 0068
.org 0x280e2
	mov pc, r0	@ 000280e2 8746
.org 0x280e4
	.byte 0xe8,0x80,0x02,0x08	@ 000280e4 data
.org 0x280e8
	.byte 0x04,0x81,0x02,0x08	@ 000280e8 data
.org 0x280ec
	.byte 0x74,0x81,0x02,0x08	@ 000280ec data
.org 0x280f0
	.byte 0x98,0x81,0x02,0x08	@ 000280f0 data
