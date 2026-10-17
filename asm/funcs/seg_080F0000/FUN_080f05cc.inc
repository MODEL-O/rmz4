@ FUN_080f05cc  entry 0x080f05cc  size 32
.thumb
.org 0xf05cc
FUN_080f05cc:
	push {r4, r5, r6, r7, lr}	@ 000f05cc f0b5
.org 0xf05ce
	sub sp, #16	@ 000f05ce 84b0
.org 0xf05d0
	adds r5, r0, #0	@ 000f05d0 051c
.org 0xf05d2
	ldrb r0, [r5, #13]	@ 000f05d2 687b
.org 0xf05d4
	cmp r0, #5	@ 000f05d4 0528
.org 0xf05d6
	bls.n 0xf05da	@ 000f05d6 00d9
.org 0xf05d8
	b.n 0xf0832	@ 000f05d8 2be1
.org 0xf05da
	lsls r0, r0, #2	@ 000f05da 8000
.org 0xf05dc
	ldr r1, [pc, #4]	@ 000f05dc 0149
.org 0xf05de
	adds r0, r0, r1	@ 000f05de 4018
.org 0xf05e0
	ldr r0, [r0, #0]	@ 000f05e0 0068
.org 0xf05e2
	mov pc, r0	@ 000f05e2 8746
.org 0xf05e4
	.byte 0xe8,0x05,0x0f,0x08	@ 000f05e4 data
.org 0xf05e8
	.byte 0x00,0x06,0x0f,0x08	@ 000f05e8 data
