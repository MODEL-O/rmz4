@ FUN_080b2dc0  entry 0x080b2dc0  size 62
.thumb
.org 0xb2dc0
FUN_080b2dc0:
	push {r4, lr}	@ 000b2dc0 10b5
.org 0xb2dc2
	adds r4, r0, #0	@ 000b2dc2 041c
.org 0xb2dc4
	ldr r0, [r4, #84]	@ 000b2dc4 606d
.org 0xb2dc6
	movs r1, #160	@ 000b2dc6 a021
.org 0xb2dc8
	lsls r1, r1, #4	@ 000b2dc8 0901
.org 0xb2dca
	adds r0, r0, r1	@ 000b2dca 4018
.org 0xb2dcc
	ldr r1, [r4, #88]	@ 000b2dcc a16d
.org 0xb2dce
	ldr r2, [pc, #40]	@ 000b2dce 0a4a
.org 0xb2dd0
	adds r1, r1, r2	@ 000b2dd0 8918
.org 0xb2dd2
	bl 0x7c7c	@ 000b2dd2 54f753ff
.org 0xb2dd6
	lsls r0, r0, #16	@ 000b2dd6 0004
.org 0xb2dd8
	cmp r0, #0	@ 000b2dd8 0028
.org 0xb2dda
	bne.n 0xb2df2	@ 000b2dda 0ad1
.org 0xb2ddc
	ldr r0, [r4, #84]	@ 000b2ddc 606d
.org 0xb2dde
	ldr r1, [pc, #28]	@ 000b2dde 0749
.org 0xb2de0
	adds r0, r0, r1	@ 000b2de0 4018
.org 0xb2de2
	ldr r1, [r4, #88]	@ 000b2de2 a16d
.org 0xb2de4
	ldr r2, [pc, #16]	@ 000b2de4 044a
.org 0xb2de6
	adds r1, r1, r2	@ 000b2de6 8918
.org 0xb2de8
	bl 0x7c7c	@ 000b2de8 54f748ff
.org 0xb2dec
	lsls r0, r0, #16	@ 000b2dec 0004
.org 0xb2dee
	cmp r0, #0	@ 000b2dee 0028
.org 0xb2df0
	beq.n 0xb2e00	@ 000b2df0 06d0
.org 0xb2df2
	movs r0, #1	@ 000b2df2 0120
.org 0xb2df4
	b.n 0xb2e02	@ 000b2df4 05e0
.org 0xb2df6
	.byte 0x00	@ 000b2df6 data
.org 0xb2df7
	.byte 0x00	@ 000b2df7 data
.org 0xb2df8
	.byte 0x00,0xe2,0xff,0xff	@ 000b2df8 data
.org 0xb2dfc
	.byte 0x00,0xf6,0xff,0xff	@ 000b2dfc data
