@ FUN_08113c20  entry 0x08113c20  size 150
.thumb
.org 0x113c20
FUN_08113c20:
	push {r4, r5, r6, r7, lr}	@ 00113c20 f0b5
.org 0x113c22
	sub sp, #4	@ 00113c22 81b0
.org 0x113c24
	adds r7, r0, #0	@ 00113c24 071c
.org 0x113c26
	ldrb r0, [r7, #2]	@ 00113c26 b878
.org 0x113c28
	cmp r0, #4	@ 00113c28 0428
.org 0x113c2a
	bls.n 0x113c2e	@ 00113c2a 00d9
.org 0x113c2c
	b.n 0x113f0c	@ 00113c2c 6ee1
.org 0x113c2e
	lsls r0, r0, #2	@ 00113c2e 8000
.org 0x113c30
	ldr r1, [pc, #4]	@ 00113c30 0149
.org 0x113c32
	adds r0, r0, r1	@ 00113c32 4018
.org 0x113c34
	ldr r0, [r0, #0]	@ 00113c34 0068
.org 0x113c36
	mov pc, r0	@ 00113c36 8746
.org 0x113c38
	.byte 0x3c,0x3c,0x11,0x08	@ 00113c38 data
.org 0x113c3c
	.byte 0x50,0x3c,0x11,0x08	@ 00113c3c data
.org 0x113c40
	.byte 0xc6,0x3c,0x11,0x08	@ 00113c40 data
.org 0x113c44
	.byte 0x02,0x3d,0x11,0x08	@ 00113c44 data
.org 0x113c48
	.byte 0xc0,0x3d,0x11,0x08	@ 00113c48 data
.org 0x113c4c
	.byte 0xfe,0x3d,0x11,0x08	@ 00113c4c data
.org 0x113c50
	.byte 0x00	@ 00113c50 data
.org 0x113c51
	.byte 0x25	@ 00113c51 data
.org 0x113c52
	.byte 0xfd	@ 00113c52 data
.org 0x113c53
	.byte 0x70	@ 00113c53 data
.org 0x113c54
	.byte 0x4e	@ 00113c54 data
.org 0x113c55
	.byte 0x48	@ 00113c55 data
.org 0x113c56
	.byte 0x00	@ 00113c56 data
.org 0x113c57
	.byte 0x78	@ 00113c57 data
.org 0x113c58
	.byte 0x00	@ 00113c58 data
.org 0x113c59
	.byte 0x28	@ 00113c59 data
.org 0x113c5a
	.byte 0x01	@ 00113c5a data
.org 0x113c5b
	.byte 0xd0	@ 00113c5b data
.org 0x113c5c
	.byte 0x01	@ 00113c5c data
.org 0x113c5d
	.byte 0x20	@ 00113c5d data
.org 0x113c5e
	.byte 0xf8	@ 00113c5e data
.org 0x113c5f
	.byte 0x70	@ 00113c5f data
.org 0x113c60
	.byte 0x4c	@ 00113c60 data
.org 0x113c61
	.byte 0x4a	@ 00113c61 data
.org 0x113c62
	.byte 0x11	@ 00113c62 data
.org 0x113c63
	.byte 0x88	@ 00113c63 data
.org 0x113c64
	.byte 0x4c	@ 00113c64 data
.org 0x113c65
	.byte 0x48	@ 00113c65 data
.org 0x113c66
	.byte 0x08	@ 00113c66 data
.org 0x113c67
	.byte 0x40	@ 00113c67 data
.org 0x113c68
	.byte 0x4c	@ 00113c68 data
.org 0x113c69
	.byte 0x49	@ 00113c69 data
.org 0x113c6a
	.byte 0x08	@ 00113c6a data
.org 0x113c6b
	.byte 0x40	@ 00113c6b data
.org 0x113c6c
	.byte 0xf4	@ 00113c6c data
.org 0x113c6d
	.byte 0x23	@ 00113c6d data
.org 0x113c6e
	.byte 0x9b	@ 00113c6e data
.org 0x113c6f
	.byte 0x01	@ 00113c6f data
.org 0x113c70
	.byte 0x19	@ 00113c70 data
.org 0x113c71
	.byte 0x1c	@ 00113c71 data
.org 0x113c72
	.byte 0x08	@ 00113c72 data
.org 0x113c73
	.byte 0x43	@ 00113c73 data
.org 0x113c74
	.byte 0x10	@ 00113c74 data
.org 0x113c75
	.byte 0x80	@ 00113c75 data
.org 0x113c76
	.byte 0x4a	@ 00113c76 data
.org 0x113c77
	.byte 0x4c	@ 00113c77 data
.org 0x113c78
	.byte 0x20	@ 00113c78 data
.org 0x113c79
	.byte 0x1c	@ 00113c79 data
.org 0x113c7a
	.byte 0x10	@ 00113c7a data
.org 0x113c7b
	.byte 0x81	@ 00113c7b data
.org 0x113c7c
	.byte 0x55	@ 00113c7c data
.org 0x113c7d
	.byte 0x61	@ 00113c7d data
.org 0x113c7e
	.byte 0x49	@ 00113c7e data
.org 0x113c7f
	.byte 0x49	@ 00113c7f data
.org 0x113c80
	.byte 0x08	@ 00113c80 data
.org 0x113c81
	.byte 0x1c	@ 00113c81 data
.org 0x113c82
	.byte 0x50	@ 00113c82 data
.org 0x113c83
	.byte 0x81	@ 00113c83 data
.org 0x113c84
	.byte 0x95	@ 00113c84 data
.org 0x113c85
	.byte 0x61	@ 00113c85 data
.org 0x113c86
	.byte 0x48	@ 00113c86 data
.org 0x113c87
	.byte 0x48	@ 00113c87 data
.org 0x113c88
	.byte 0x80	@ 00113c88 data
.org 0x113c89
	.byte 0x21	@ 00113c89 data
.org 0x113c8a
	.byte 0xc9	@ 00113c8a data
.org 0x113c8b
	.byte 0x01	@ 00113c8b data
.org 0x113c8c
	.byte 0xee	@ 00113c8c data
.org 0x113c8d
	.byte 0xf6	@ 00113c8d data
.org 0x113c8e
	.byte 0x50	@ 00113c8e data
.org 0x113c8f
	.byte 0xf8	@ 00113c8f data
.org 0x113c90
	.byte 0x46	@ 00113c90 data
.org 0x113c91
	.byte 0x48	@ 00113c91 data
.org 0x113c92
	.byte 0x00	@ 00113c92 data
.org 0x113c93
	.byte 0x21	@ 00113c93 data
.org 0x113c94
	.byte 0xee	@ 00113c94 data
.org 0x113c95
	.byte 0xf6	@ 00113c95 data
.org 0x113c96
	.byte 0xb8	@ 00113c96 data
.org 0x113c97
	.byte 0xfa	@ 00113c97 data
.org 0x113c98
	.byte 0x45	@ 00113c98 data
.org 0x113c99
	.byte 0x4c	@ 00113c99 data
.org 0x113c9a
	.byte 0x00	@ 00113c9a data
.org 0x113c9b
	.byte 0x95	@ 00113c9b data
.org 0x113c9c
	.byte 0x24	@ 00113c9c data
.org 0x113c9d
	.byte 0x20	@ 00113c9d data
.org 0x113c9e
	.byte 0x21	@ 00113c9e data
.org 0x113c9f
	.byte 0x1c	@ 00113c9f data
.org 0x113ca0
	.byte 0x67	@ 00113ca0 data
.org 0x113ca1
	.byte 0x22	@ 00113ca1 data
.org 0x113ca2
	.byte 0x00	@ 00113ca2 data
.org 0x113ca3
	.byte 0x23	@ 00113ca3 data
.org 0x113ca4
	.byte 0xee	@ 00113ca4 data
.org 0x113ca5
	.byte 0xf6	@ 00113ca5 data
.org 0x113ca6
	.byte 0x46	@ 00113ca6 data
.org 0x113ca7
	.byte 0xfd	@ 00113ca7 data
.org 0x113ca8
	.byte 0x00	@ 00113ca8 data
.org 0x113ca9
	.byte 0x95	@ 00113ca9 data
.org 0x113caa
	.byte 0x38	@ 00113caa data
.org 0x113cab
	.byte 0x20	@ 00113cab data
.org 0x113cac
	.byte 0x21	@ 00113cac data
.org 0x113cad
	.byte 0x1c	@ 00113cad data
.org 0x113cae
	.byte 0x66	@ 00113cae data
.org 0x113caf
	.byte 0x22	@ 00113caf data
.org 0x113cb0
	.byte 0x00	@ 00113cb0 data
.org 0x113cb1
	.byte 0x23	@ 00113cb1 data
.org 0x113cb2
	.byte 0xee	@ 00113cb2 data
.org 0x113cb3
	.byte 0xf6	@ 00113cb3 data
.org 0x113cb4
	.byte 0x3f	@ 00113cb4 data
.org 0x113cb5
	.byte 0xfd	@ 00113cb5 data
