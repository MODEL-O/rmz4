@ FUN_08118d4c  entry 0x08118d4c  size 182
.thumb
.org 0x118d4c
FUN_08118d4c:
	push {r4, r5, r6, r7, lr}	@ 00118d4c f0b5
.org 0x118d4e
	mov r7, r9	@ 00118d4e 4f46
.org 0x118d50
	mov r6, r8	@ 00118d50 4646
.org 0x118d52
	push {r6, r7}	@ 00118d52 c0b4
.org 0x118d54
	adds r5, r0, #0	@ 00118d54 051c
.org 0x118d56
	ldr r1, [pc, #28]	@ 00118d56 0749
.org 0x118d58
	adds r0, r5, r1	@ 00118d58 6818
.org 0x118d5a
	ldr r7, [r0, #0]	@ 00118d5a 0768
.org 0x118d5c
	ldr r0, [pc, #24]	@ 00118d5c 0648
.org 0x118d5e
	adds r2, r5, r0	@ 00118d5e 2a18
.org 0x118d60
	ldrb r0, [r2, #0]	@ 00118d60 1078
.org 0x118d62
	cmp r0, #5	@ 00118d62 0528
.org 0x118d64
	bls.n 0x118d68	@ 00118d64 00d9
.org 0x118d66
	b.n 0x118fc4	@ 00118d66 2de1
.org 0x118d68
	lsls r0, r0, #2	@ 00118d68 8000
.org 0x118d6a
	ldr r1, [pc, #16]	@ 00118d6a 0449
.org 0x118d6c
	adds r0, r0, r1	@ 00118d6c 4018
.org 0x118d6e
	ldr r0, [r0, #0]	@ 00118d6e 0068
.org 0x118d70
	adds r6, r2, #0	@ 00118d70 161c
.org 0x118d72
	mov pc, r0	@ 00118d72 8746
.org 0x118d74
	.byte 0xa8,0x63,0x00,0x00	@ 00118d74 data
.org 0x118d78
	.byte 0xf7,0x0d,0x00,0x00	@ 00118d78 data
.org 0x118d7c
	.byte 0x80,0x8d,0x11,0x08	@ 00118d7c data
.org 0x118d80
	.byte 0x98,0x8d,0x11,0x08	@ 00118d80 data
.org 0x118d84
	.byte 0xa4,0x8d,0x11,0x08	@ 00118d84 data
.org 0x118d88
	.byte 0x0c,0x8e,0x11,0x08	@ 00118d88 data
.org 0x118d8c
	.byte 0x40,0x8e,0x11,0x08	@ 00118d8c data
.org 0x118d90
	.byte 0x6c,0x8e,0x11,0x08	@ 00118d90 data
.org 0x118d94
	.byte 0xa2,0x8f,0x11,0x08	@ 00118d94 data
.org 0x118d98
	.byte 0x07	@ 00118d98 data
.org 0x118d99
	.byte 0x4a	@ 00118d99 data
.org 0x118d9a
	.byte 0xa9	@ 00118d9a data
.org 0x118d9b
	.byte 0x18	@ 00118d9b data
.org 0x118d9c
	.byte 0x08	@ 00118d9c data
.org 0x118d9d
	.byte 0x78	@ 00118d9d data
.org 0x118d9e
	.byte 0x01	@ 00118d9e data
.org 0x118d9f
	.byte 0x30	@ 00118d9f data
.org 0x118da0
	.byte 0x08	@ 00118da0 data
.org 0x118da1
	.byte 0x70	@ 00118da1 data
.org 0x118da2
	.byte 0x0e	@ 00118da2 data
.org 0x118da3
	.byte 0x1c	@ 00118da3 data
.org 0x118da4
	.byte 0x38	@ 00118da4 data
.org 0x118da5
	.byte 0x1c	@ 00118da5 data
.org 0x118da6
	.byte 0xb4	@ 00118da6 data
.org 0x118da7
	.byte 0x30	@ 00118da7 data
.org 0x118da8
	.byte 0x01	@ 00118da8 data
.org 0x118da9
	.byte 0x7b	@ 00118da9 data
.org 0x118daa
	.byte 0x02	@ 00118daa data
.org 0x118dab
	.byte 0x1c	@ 00118dab data
.org 0x118dac
	.byte 0x02	@ 00118dac data
.org 0x118dad
	.byte 0x29	@ 00118dad data
.org 0x118dae
	.byte 0x05	@ 00118dae data
.org 0x118daf
	.byte 0xd8	@ 00118daf data
.org 0x118db0
	.byte 0x30	@ 00118db0 data
.org 0x118db1
	.byte 0x78	@ 00118db1 data
.org 0x118db2
	.byte 0x01	@ 00118db2 data
.org 0x118db3
	.byte 0x30	@ 00118db3 data
.org 0x118db4
	.byte 0x30	@ 00118db4 data
.org 0x118db5
	.byte 0x70	@ 00118db5 data
.org 0x118db6
	.byte 0x29	@ 00118db6 data
.org 0x118db7
	.byte 0xe0	@ 00118db7 data
.org 0x118db8
	.byte 0xf7	@ 00118db8 data
.org 0x118db9
	.byte 0x0d	@ 00118db9 data
.org 0x118dba
	.byte 0x00	@ 00118dba data
.org 0x118dbb
	.byte 0x00	@ 00118dbb data
.org 0x118dbc
	.byte 0x06	@ 00118dbc data
.org 0x118dbd
	.byte 0x48	@ 00118dbd data
.org 0x118dbe
	.byte 0x81	@ 00118dbe data
.org 0x118dbf
	.byte 0x88	@ 00118dbf data
.org 0x118dc0
	.byte 0x01	@ 00118dc0 data
.org 0x118dc1
	.byte 0x24	@ 00118dc1 data
.org 0x118dc2
	.byte 0x0c	@ 00118dc2 data
.org 0x118dc3
	.byte 0x40	@ 00118dc3 data
.org 0x118dc4
	.byte 0x00	@ 00118dc4 data
.org 0x118dc5
	.byte 0x2c	@ 00118dc5 data
.org 0x118dc6
	.byte 0x09	@ 00118dc6 data
.org 0x118dc7
	.byte 0xd0	@ 00118dc7 data
.org 0x118dc8
	.byte 0x00	@ 00118dc8 data
.org 0x118dc9
	.byte 0x21	@ 00118dc9 data
.org 0x118dca
	.byte 0x02	@ 00118dca data
.org 0x118dcb
	.byte 0x20	@ 00118dcb data
.org 0x118dcc
	.byte 0x10	@ 00118dcc data
.org 0x118dcd
	.byte 0x73	@ 00118dcd data
.org 0x118dce
	.byte 0x3b	@ 00118dce data
.org 0x118dcf
	.byte 0x1c	@ 00118dcf data
.org 0x118dd0
	.byte 0xfa	@ 00118dd0 data
.org 0x118dd1
	.byte 0x33	@ 00118dd1 data
.org 0x118dd2
	.byte 0x18	@ 00118dd2 data
.org 0x118dd3
	.byte 0x70	@ 00118dd3 data
.org 0x118dd4
	.byte 0xd1	@ 00118dd4 data
.org 0x118dd5
	.byte 0x73	@ 00118dd5 data
.org 0x118dd6
	.byte 0x89	@ 00118dd6 data
.org 0x118dd7
	.byte 0xe0	@ 00118dd7 data
.org 0x118dd8
	.byte 0x60	@ 00118dd8 data
.org 0x118dd9
	.byte 0x07	@ 00118dd9 data
.org 0x118dda
	.byte 0x00	@ 00118dda data
.org 0x118ddb
	.byte 0x02	@ 00118ddb data
.org 0x118ddc
	.byte 0x02	@ 00118ddc data
.org 0x118ddd
	.byte 0x20	@ 00118ddd data
.org 0x118dde
	.byte 0x08	@ 00118dde data
.org 0x118ddf
	.byte 0x40	@ 00118ddf data
.org 0x118de0
	.byte 0x00	@ 00118de0 data
.org 0x118de1
	.byte 0x28	@ 00118de1 data
.org 0x118de2
	.byte 0x05	@ 00118de2 data
.org 0x118de3
	.byte 0xd0	@ 00118de3 data
.org 0x118de4
	.byte 0x03	@ 00118de4 data
.org 0x118de5
	.byte 0x20	@ 00118de5 data
.org 0x118de6
	.byte 0xe9	@ 00118de6 data
.org 0x118de7
	.byte 0xf6	@ 00118de7 data
.org 0x118de8
	.byte 0x93	@ 00118de8 data
.org 0x118de9
	.byte 0xfe	@ 00118de9 data
.org 0x118dea
	.byte 0xec	@ 00118dea data
.org 0x118deb
	.byte 0x70	@ 00118deb data
.org 0x118dec
	.byte 0x34	@ 00118dec data
.org 0x118ded
	.byte 0x70	@ 00118ded data
.org 0x118dee
	.byte 0x33	@ 00118dee data
.org 0x118def
	.byte 0xe1	@ 00118def data
.org 0x118df0
	.byte 0x04	@ 00118df0 data
.org 0x118df1
	.byte 0x48	@ 00118df1 data
.org 0x118df2
	.byte 0xd6	@ 00118df2 data
.org 0x118df3
	.byte 0x30	@ 00118df3 data
.org 0x118df4
	.byte 0x00	@ 00118df4 data
.org 0x118df5
	.byte 0x88	@ 00118df5 data
.org 0x118df6
	.byte 0x04	@ 00118df6 data
.org 0x118df7
	.byte 0x49	@ 00118df7 data
.org 0x118df8
	.byte 0x40	@ 00118df8 data
.org 0x118df9
	.byte 0x18	@ 00118df9 data
.org 0x118dfa
	.byte 0x01	@ 00118dfa data
.org 0x118dfb
	.byte 0x21	@ 00118dfb data
.org 0x118dfc
	.byte 0x10	@ 00118dfc data
.org 0x118dfd
	.byte 0x22	@ 00118dfd data
.org 0x118dfe
	.byte 0xf4	@ 00118dfe data
.org 0x118dff
	.byte 0xf7	@ 00118dff data
.org 0x118e00
	.byte 0x2d	@ 00118e00 data
.org 0x118e01
	.byte 0xfd	@ 00118e01 data
