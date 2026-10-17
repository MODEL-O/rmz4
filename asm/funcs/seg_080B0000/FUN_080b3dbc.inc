@ FUN_080b3dbc  entry 0x080b3dbc  size 112
.thumb
.org 0xb3dbc
FUN_080b3dbc:
	push {r4, r5, lr}	@ 000b3dbc 30b5
.org 0xb3dbe
	adds r4, r0, #0	@ 000b3dbe 041c
.org 0xb3dc0
	movs r5, #0	@ 000b3dc0 0025
.org 0xb3dc2
	ldr r0, [r4, #44]	@ 000b3dc2 e06a
.org 0xb3dc4
	bl 0x2b3e4	@ 000b3dc4 77f70efb
.org 0xb3dc8
	cmp r0, #0	@ 000b3dc8 0028
.org 0xb3dca
	beq.n 0xb3e30	@ 000b3dca 31d0
.org 0xb3dcc
	adds r0, r4, #0	@ 000b3dcc 201c
.org 0xb3dce
	adds r0, #116	@ 000b3dce 7430
.org 0xb3dd0
	ldr r1, [pc, #76]	@ 000b3dd0 1349
.org 0xb3dd2
	bl 0x5784	@ 000b3dd2 51f7d7fc
.org 0xb3dd6
	str r5, [r4, #44]	@ 000b3dd6 e562
.org 0xb3dd8
	movs r2, #128	@ 000b3dd8 8022
.org 0xb3dda
	lsls r2, r2, #1	@ 000b3dda 5200
.org 0xb3ddc
	str r2, [r4, #92]	@ 000b3ddc e265
.org 0xb3dde
	ldr r0, [pc, #68]	@ 000b3dde 1148
.org 0xb3de0
	ldr r0, [r0, #0]	@ 000b3de0 0068
.org 0xb3de2
	ldr r1, [r0, #84]	@ 000b3de2 416d
.org 0xb3de4
	ldr r0, [r4, #84]	@ 000b3de4 606d
.org 0xb3de6
	cmp r1, r0	@ 000b3de6 8142
.org 0xb3de8
	ble.n 0xb3dec	@ 000b3de8 00dd
.org 0xb3dea
	movs r5, #1	@ 000b3dea 0125
.org 0xb3dec
	ldrb r1, [r4, #10]	@ 000b3dec a17a
.org 0xb3dee
	movs r0, #16	@ 000b3dee 1020
.org 0xb3df0
	ands r0, r1	@ 000b3df0 0840
.org 0xb3df2
	cmp r0, #0	@ 000b3df2 0028
.org 0xb3df4
	bne.n 0xb3e00	@ 000b3df4 04d1
.org 0xb3df6
	lsls r0, r2, #8	@ 000b3df6 1002
.org 0xb3df8
	negs r0, r0	@ 000b3df8 4042
.org 0xb3dfa
	adds r0, #255	@ 000b3dfa ff30
.org 0xb3dfc
	asrs r0, r0, #8	@ 000b3dfc 0012
.org 0xb3dfe
	str r0, [r4, #92]	@ 000b3dfe e065
.org 0xb3e00
	adds r0, r4, #0	@ 000b3e00 201c
.org 0xb3e02
	bl 0xb3eac	@ 000b3e02 00f053f8
.org 0xb3e06
	lsls r0, r0, #24	@ 000b3e06 0006
.org 0xb3e08
	cmp r0, #0	@ 000b3e08 0028
.org 0xb3e0a
	beq.n 0xb3e28	@ 000b3e0a 0dd0
.org 0xb3e0c
	ldrb r1, [r4, #10]	@ 000b3e0c a17a
.org 0xb3e0e
	lsrs r1, r1, #4	@ 000b3e0e 0909
.org 0xb3e10
	movs r0, #1	@ 000b3e10 0120
.org 0xb3e12
	bics r0, r1	@ 000b3e12 8843
.org 0xb3e14
	cmp r0, r5	@ 000b3e14 a842
.org 0xb3e16
	bne.n 0xb3e28	@ 000b3e16 07d1
.org 0xb3e18
	movs r1, #0	@ 000b3e18 0021
.org 0xb3e1a
	movs r0, #2	@ 000b3e1a 0220
.org 0xb3e1c
	b.n 0xb3e2c	@ 000b3e1c 06e0
.org 0xb3e1e
	.byte 0x00	@ 000b3e1e data
.org 0xb3e1f
	.byte 0x00	@ 000b3e1f data
.org 0xb3e20
	.byte 0x54,0x37,0x86,0x08	@ 000b3e20 data
.org 0xb3e24
	.byte 0xf0,0xdb,0x02,0x02	@ 000b3e24 data
.org 0xb3e28
	movs r1, #0	@ 000b3e28 0021
.org 0xb3e2a
	movs r0, #1	@ 000b3e2a 0120
