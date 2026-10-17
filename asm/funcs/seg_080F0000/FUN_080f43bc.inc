@ FUN_080f43bc  entry 0x080f43bc  size 38
.thumb
.org 0xf43bc
FUN_080f43bc:
	push {r4, lr}	@ 000f43bc 10b5
.org 0xf43be
	sub sp, #8	@ 000f43be 82b0
.org 0xf43c0
	adds r4, r0, #0	@ 000f43c0 041c
.org 0xf43c2
	ldrb r0, [r4, #13]	@ 000f43c2 607b
.org 0xf43c4
	cmp r0, #5	@ 000f43c4 0528
.org 0xf43c6
	bls.n 0xf43ca	@ 000f43c6 00d9
.org 0xf43c8
	b.n 0xf46a4	@ 000f43c8 6ce1
.org 0xf43ca
	lsls r0, r0, #2	@ 000f43ca 8000
.org 0xf43cc
	ldr r1, [pc, #4]	@ 000f43cc 0149
.org 0xf43ce
	adds r0, r0, r1	@ 000f43ce 4018
.org 0xf43d0
	ldr r0, [r0, #0]	@ 000f43d0 0068
.org 0xf43d2
	mov pc, r0	@ 000f43d2 8746
.org 0xf43d4
	.byte 0xd8,0x43,0x0f,0x08	@ 000f43d4 data
.org 0xf43d8
	.byte 0xf0,0x43,0x0f,0x08	@ 000f43d8 data
.org 0xf43dc
	.byte 0x52,0x44,0x0f,0x08	@ 000f43dc data
.org 0xf43e0
	.byte 0xa0,0x44,0x0f,0x08	@ 000f43e0 data
