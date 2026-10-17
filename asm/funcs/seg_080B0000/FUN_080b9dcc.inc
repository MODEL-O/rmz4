@ FUN_080b9dcc  entry 0x080b9dcc  size 68
.thumb
.org 0xb9dcc
FUN_080b9dcc:
	push {r4, lr}	@ 000b9dcc 10b5
.org 0xb9dce
	adds r2, r0, #0	@ 000b9dce 021c
.org 0xb9dd0
	adds r3, r2, #0	@ 000b9dd0 131c
.org 0xb9dd2
	adds r3, #180	@ 000b9dd2 b433
.org 0xb9dd4
	ldrb r0, [r3, #0]	@ 000b9dd4 1878
.org 0xb9dd6
	cmp r0, #0	@ 000b9dd6 0028
.org 0xb9dd8
	bne.n 0xb9dec	@ 000b9dd8 08d1
.org 0xb9dda
	adds r0, r2, #0	@ 000b9dda 101c
.org 0xb9ddc
	adds r0, #184	@ 000b9ddc b830
.org 0xb9dde
	ldr r1, [r0, #0]	@ 000b9dde 0168
.org 0xb9de0
	movs r4, #176	@ 000b9de0 b024
.org 0xb9de2
	lsls r4, r4, #6	@ 000b9de2 a401
.org 0xb9de4
	adds r1, r1, r4	@ 000b9de4 0919
.org 0xb9de6
	str r1, [r0, #0]	@ 000b9de6 0160
.org 0xb9de8
	movs r0, #1	@ 000b9de8 0120
.org 0xb9dea
	b.n 0xb9dfa	@ 000b9dea 06e0
.org 0xb9dec
	adds r0, r2, #0	@ 000b9dec 101c
.org 0xb9dee
	adds r0, #184	@ 000b9dee b830
.org 0xb9df0
	ldr r1, [r0, #0]	@ 000b9df0 0168
.org 0xb9df2
	ldr r4, [pc, #20]	@ 000b9df2 054c
.org 0xb9df4
	adds r1, r1, r4	@ 000b9df4 0919
.org 0xb9df6
	str r1, [r0, #0]	@ 000b9df6 0160
.org 0xb9df8
	movs r0, #0	@ 000b9df8 0020
.org 0xb9dfa
	strb r0, [r3, #0]	@ 000b9dfa 1870
.org 0xb9dfc
	ldrb r0, [r2, #15]	@ 000b9dfc d07b
.org 0xb9dfe
	cmp r0, #0	@ 000b9dfe 0028
.org 0xb9e00
	bne.n 0xb9e0c	@ 000b9e00 04d1
.org 0xb9e02
	movs r0, #254	@ 000b9e02 fe20
.org 0xb9e04
	b.n 0xb9e0e	@ 000b9e04 03e0
.org 0xb9e06
	.byte 0x00	@ 000b9e06 data
.org 0xb9e07
	.byte 0x00	@ 000b9e07 data
.org 0xb9e08
	.byte 0x00,0xd4,0xff,0xff	@ 000b9e08 data
.org 0xb9e0c
	movs r0, #1	@ 000b9e0c 0120
.org 0xb9e0e
	strb r0, [r2, #18]	@ 000b9e0e 9074
