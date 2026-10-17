@ FUN_080f7c80  entry 0x080f7c80  size 56
.thumb
.org 0xf7c80
FUN_080f7c80:
	push {lr}	@ 000f7c80 00b5
.org 0xf7c82
	adds r3, r0, #0	@ 000f7c82 031c
.org 0xf7c84
	ldrb r0, [r3, #14]	@ 000f7c84 987b
.org 0xf7c86
	cmp r0, #4	@ 000f7c86 0428
.org 0xf7c88
	bhi.n 0xf7ccc	@ 000f7c88 20d8
.org 0xf7c8a
	lsls r0, r0, #2	@ 000f7c8a 8000
.org 0xf7c8c
	ldr r1, [pc, #4]	@ 000f7c8c 0149
.org 0xf7c8e
	adds r0, r0, r1	@ 000f7c8e 4018
.org 0xf7c90
	ldr r0, [r0, #0]	@ 000f7c90 0068
.org 0xf7c92
	mov pc, r0	@ 000f7c92 8746
.org 0xf7c94
	.byte 0x98,0x7c,0x0f,0x08	@ 000f7c94 data
.org 0xf7c98
	.byte 0xcc,0x7c,0x0f,0x08	@ 000f7c98 data
.org 0xf7c9c
	.byte 0xac,0x7c,0x0f,0x08	@ 000f7c9c data
.org 0xf7ca0
	.byte 0xb6,0x7c,0x0f,0x08	@ 000f7ca0 data
.org 0xf7ca4
	.byte 0xbc,0x7c,0x0f,0x08	@ 000f7ca4 data
.org 0xf7ca8
	.byte 0xc8,0x7c,0x0f,0x08	@ 000f7ca8 data
.org 0xf7cac
	.byte 0x18	@ 000f7cac data
.org 0xf7cad
	.byte 0x6e	@ 000f7cad data
.org 0xf7cae
	.byte 0x80	@ 000f7cae data
.org 0xf7caf
	.byte 0x21	@ 000f7caf data
.org 0xf7cb0
	.byte 0x49	@ 000f7cb0 data
.org 0xf7cb1
	.byte 0x00	@ 000f7cb1 data
.org 0xf7cb2
	.byte 0x40	@ 000f7cb2 data
.org 0xf7cb3
	.byte 0x18	@ 000f7cb3 data
.org 0xf7cb4
	.byte 0x09	@ 000f7cb4 data
.org 0xf7cb5
	.byte 0xe0	@ 000f7cb5 data
.org 0xf7cb6
	.byte 0xc0	@ 000f7cb6 data
.org 0xf7cb7
	.byte 0x20	@ 000f7cb7 data
