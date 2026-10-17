@ FUN_080fa2b8  entry 0x080fa2b8  size 48
.thumb
.org 0xfa2b8
FUN_080fa2b8:
	push {lr}	@ 000fa2b8 00b5
.org 0xfa2ba
	adds r2, r0, #0	@ 000fa2ba 021c
.org 0xfa2bc
	ldr r0, [r2, #40]	@ 000fa2bc 906a
.org 0xfa2be
	ldrb r0, [r0, #12]	@ 000fa2be 007b
.org 0xfa2c0
	cmp r0, #1	@ 000fa2c0 0128
.org 0xfa2c2
	bls.n 0xfa2e4	@ 000fa2c2 0fd9
.org 0xfa2c4
	ldr r1, [pc, #24]	@ 000fa2c4 0649
.org 0xfa2c6
	ldrb r0, [r2, #9]	@ 000fa2c6 507a
.org 0xfa2c8
	lsls r0, r0, #2	@ 000fa2c8 8000
.org 0xfa2ca
	adds r0, r0, r1	@ 000fa2ca 4018
.org 0xfa2cc
	movs r1, #2	@ 000fa2cc 0221
.org 0xfa2ce
	str r1, [r2, #12]	@ 000fa2ce d160
.org 0xfa2d0
	ldr r0, [r0, #0]	@ 000fa2d0 0068
.org 0xfa2d2
	ldr r0, [r0, #8]	@ 000fa2d2 8068
.org 0xfa2d4
	str r0, [r2, #20]	@ 000fa2d4 5061
.org 0xfa2d6
	adds r0, r2, #0	@ 000fa2d6 101c
.org 0xfa2d8
	bl 0xfa2f0	@ 000fa2d8 00f00af8
.org 0xfa2dc
	b.n 0xfa2ea	@ 000fa2dc 05e0
.org 0xfa2de
	.byte 0x00	@ 000fa2de data
.org 0xfa2df
	.byte 0x00	@ 000fa2df data
.org 0xfa2e0
	.byte 0xfc,0x92,0x86,0x08	@ 000fa2e0 data
.org 0xfa2e4
	adds r0, r2, #0	@ 000fa2e4 101c
.org 0xfa2e6
	bl 0x1cff0	@ 000fa2e6 22f783fe
