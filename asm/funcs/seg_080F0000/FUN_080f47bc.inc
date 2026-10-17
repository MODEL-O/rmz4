@ FUN_080f47bc  entry 0x080f47bc  size 32
.thumb
.org 0xf47bc
FUN_080f47bc:
	push {r4, r5, lr}	@ 000f47bc 30b5
.org 0xf47be
	sub sp, #40	@ 000f47be 8ab0
.org 0xf47c0
	adds r5, r0, #0	@ 000f47c0 051c
.org 0xf47c2
	ldrb r0, [r5, #13]	@ 000f47c2 687b
.org 0xf47c4
	cmp r0, #4	@ 000f47c4 0428
.org 0xf47c6
	bls.n 0xf47ca	@ 000f47c6 00d9
.org 0xf47c8
	b.n 0xf494c	@ 000f47c8 c0e0
.org 0xf47ca
	lsls r0, r0, #2	@ 000f47ca 8000
.org 0xf47cc
	ldr r1, [pc, #4]	@ 000f47cc 0149
.org 0xf47ce
	adds r0, r0, r1	@ 000f47ce 4018
.org 0xf47d0
	ldr r0, [r0, #0]	@ 000f47d0 0068
.org 0xf47d2
	mov pc, r0	@ 000f47d2 8746
.org 0xf47d4
	.byte 0xd8,0x47,0x0f,0x08	@ 000f47d4 data
.org 0xf47d8
	.byte 0xec,0x47,0x0f,0x08	@ 000f47d8 data
