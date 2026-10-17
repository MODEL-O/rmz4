@ FUN_080c5c70  entry 0x080c5c70  size 60
.thumb
.org 0xc5c70
FUN_080c5c70:
	push {lr}	@ 000c5c70 00b5
.org 0xc5c72
	adds r2, r0, #0	@ 000c5c72 021c
.org 0xc5c74
	ldr r0, [r2, #40]	@ 000c5c74 906a
.org 0xc5c76
	ldr r0, [r0, #40]	@ 000c5c76 806a
.org 0xc5c78
	ldrb r0, [r0, #12]	@ 000c5c78 007b
.org 0xc5c7a
	cmp r0, #1	@ 000c5c7a 0128
.org 0xc5c7c
	bls.n 0xc5c9c	@ 000c5c7c 0ed9
.org 0xc5c7e
	ldr r1, [pc, #24]	@ 000c5c7e 0649
.org 0xc5c80
	ldrb r0, [r2, #9]	@ 000c5c80 507a
.org 0xc5c82
	lsls r0, r0, #2	@ 000c5c82 8000
.org 0xc5c84
	adds r0, r0, r1	@ 000c5c84 4018
.org 0xc5c86
	movs r1, #2	@ 000c5c86 0221
.org 0xc5c88
	str r1, [r2, #12]	@ 000c5c88 d160
.org 0xc5c8a
	ldr r0, [r0, #0]	@ 000c5c8a 0068
.org 0xc5c8c
	ldr r0, [r0, #8]	@ 000c5c8c 8068
.org 0xc5c8e
	str r0, [r2, #20]	@ 000c5c8e 5061
.org 0xc5c90
	adds r0, r2, #0	@ 000c5c90 101c
.org 0xc5c92
	bl 0xc5e50	@ 000c5c92 00f0ddf8
.org 0xc5c96
	b.n 0xc5cac	@ 000c5c96 09e0
.org 0xc5c98
	.byte 0xf4,0x49,0x86,0x08	@ 000c5c98 data
.org 0xc5c9c
	ldr r0, [pc, #16]	@ 000c5c9c 0448
.org 0xc5c9e
	ldrb r1, [r2, #13]	@ 000c5c9e 517b
.org 0xc5ca0
	lsls r1, r1, #2	@ 000c5ca0 8900
.org 0xc5ca2
	adds r1, r1, r0	@ 000c5ca2 0918
.org 0xc5ca4
	ldr r1, [r1, #0]	@ 000c5ca4 0968
.org 0xc5ca6
	adds r0, r2, #0	@ 000c5ca6 101c
.org 0xc5ca8
	bl 0x128f80	@ 000c5ca8 63f06af9
