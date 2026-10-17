@ FUN_080b2d70  entry 0x080b2d70  size 66
.thumb
.org 0xb2d70
FUN_080b2d70:
	push {lr}	@ 000b2d70 00b5
.org 0xb2d72
	adds r2, r0, #0	@ 000b2d72 021c
.org 0xb2d74
	ldrb r1, [r2, #10]	@ 000b2d74 917a
.org 0xb2d76
	movs r0, #16	@ 000b2d76 1020
.org 0xb2d78
	ands r0, r1	@ 000b2d78 0840
.org 0xb2d7a
	cmp r0, #0	@ 000b2d7a 0028
.org 0xb2d7c
	bne.n 0xb2da0	@ 000b2d7c 10d1
.org 0xb2d7e
	ldr r0, [pc, #24]	@ 000b2d7e 0648
.org 0xb2d80
	ldr r0, [r0, #0]	@ 000b2d80 0068
.org 0xb2d82
	ldr r1, [r0, #84]	@ 000b2d82 416d
.org 0xb2d84
	ldr r0, [r2, #84]	@ 000b2d84 506d
.org 0xb2d86
	cmp r1, r0	@ 000b2d86 8142
.org 0xb2d88
	bge.n 0xb2db6	@ 000b2d88 15da
.org 0xb2d8a
	ldr r2, [pc, #16]	@ 000b2d8a 044a
.org 0xb2d8c
	adds r0, r0, r2	@ 000b2d8c 8018
.org 0xb2d8e
	cmp r1, r0	@ 000b2d8e 8142
.org 0xb2d90
	ble.n 0xb2db6	@ 000b2d90 11dd
.org 0xb2d92
	movs r0, #1	@ 000b2d92 0120
.org 0xb2d94
	b.n 0xb2db8	@ 000b2d94 10e0
.org 0xb2d96
	.byte 0x00	@ 000b2d96 data
.org 0xb2d97
	.byte 0x00	@ 000b2d97 data
.org 0xb2d98
	.byte 0xf0,0xdb,0x02,0x02	@ 000b2d98 data
.org 0xb2d9c
	.byte 0x00,0xb8,0xff,0xff	@ 000b2d9c data
.org 0xb2da0
	ldr r0, [pc, #24]	@ 000b2da0 0648
.org 0xb2da2
	ldr r0, [r0, #0]	@ 000b2da2 0068
.org 0xb2da4
	ldr r1, [r0, #84]	@ 000b2da4 416d
.org 0xb2da6
	ldr r0, [r2, #84]	@ 000b2da6 506d
.org 0xb2da8
	cmp r1, r0	@ 000b2da8 8142
.org 0xb2daa
	ble.n 0xb2db6	@ 000b2daa 04dd
.org 0xb2dac
	movs r2, #144	@ 000b2dac 9022
.org 0xb2dae
	lsls r2, r2, #7	@ 000b2dae d201
.org 0xb2db0
	adds r0, r0, r2	@ 000b2db0 8018
