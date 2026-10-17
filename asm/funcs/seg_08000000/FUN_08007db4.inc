@ FUN_08007db4  entry 0x08007db4  size 196
.thumb
.org 0x7db4
FUN_08007db4:
	push {r4, r5, r6, r7, lr}	@ 00007db4 f0b5
.org 0x7db6
	mov r7, sl	@ 00007db6 5746
.org 0x7db8
	mov r6, r9	@ 00007db8 4e46
.org 0x7dba
	mov r5, r8	@ 00007dba 4546
.org 0x7dbc
	push {r5, r6, r7}	@ 00007dbc e0b4
.org 0x7dbe
	adds r6, r0, #0	@ 00007dbe 061c
.org 0x7dc0
	mov r9, r1	@ 00007dc0 8946
.org 0x7dc2
	mov r4, r9	@ 00007dc2 4c46
.org 0x7dc4
	ldr r7, [pc, #96]	@ 00007dc4 184f
.org 0x7dc6
	movs r1, #232	@ 00007dc6 e821
.org 0x7dc8
	lsls r1, r1, #1	@ 00007dc8 4900
.org 0x7dca
	adds r0, r7, r1	@ 00007dca 7818
.org 0x7dcc
	ldrh r0, [r0, #0]	@ 00007dcc 0088
.org 0x7dce
	cmp r0, #4	@ 00007dce 0428
.org 0x7dd0
	bne.n 0x7de4	@ 00007dd0 08d1
.org 0x7dd2
	ldr r2, [pc, #88]	@ 00007dd2 164a
.org 0x7dd4
	adds r0, r6, r2	@ 00007dd4 b018
.org 0x7dd6
	movs r1, #240	@ 00007dd6 f021
.org 0x7dd8
	lsls r1, r1, #10	@ 00007dd8 8902
.org 0x7dda
	bl 0x129050	@ 00007dda 21f139f9
.org 0x7dde
	movs r1, #240	@ 00007dde f021
.org 0x7de0
	lsls r1, r1, #8	@ 00007de0 0902
.org 0x7de2
	adds r6, r0, r1	@ 00007de2 4618
.org 0x7de4
	movs r5, #0	@ 00007de4 0025
.org 0x7de6
	asrs r2, r6, #12	@ 00007de6 3213
.org 0x7de8
	mov r8, r2	@ 00007de8 9046
.org 0x7dea
	movs r0, #252	@ 00007dea fc20
.org 0x7dec
	lsls r0, r0, #3	@ 00007dec c000
.org 0x7dee
	adds r7, r7, r0	@ 00007dee 3f18
.org 0x7df0
	ldr r1, [pc, #60]	@ 00007df0 0f49
.org 0x7df2
	mov sl, r1	@ 00007df2 8a46
.org 0x7df4
	ldrh r1, [r7, #0]	@ 00007df4 3988
.org 0x7df6
	asrs r0, r4, #12	@ 00007df6 2013
.org 0x7df8
	muls r0, r1	@ 00007df8 4843
.org 0x7dfa
	add r0, r8	@ 00007dfa 4044
.org 0x7dfc
	adds r0, #2	@ 00007dfc 0230
.org 0x7dfe
	lsls r0, r0, #1	@ 00007dfe 4000
.org 0x7e00
	adds r0, r0, r7	@ 00007e00 c019
.org 0x7e02
	ldrh r0, [r0, #0]	@ 00007e02 0088
.org 0x7e04
	ldr r2, [pc, #44]	@ 00007e04 0b4a
.org 0x7e06
	ldr r1, [r2, #0]	@ 00007e06 1168
.org 0x7e08
	lsls r0, r0, #1	@ 00007e08 4000
.org 0x7e0a
	adds r0, r0, r1	@ 00007e0a 4018
.org 0x7e0c
	ldrh r1, [r0, #0]	@ 00007e0c 0188
.org 0x7e0e
	movs r0, #15	@ 00007e0e 0f20
.org 0x7e10
	ands r0, r1	@ 00007e10 0840
.org 0x7e12
	cmp r0, #0	@ 00007e12 0028
.org 0x7e14
	beq.n 0x7e6c	@ 00007e14 2ad0
.org 0x7e16
	cmp r1, sl	@ 00007e16 5145
.org 0x7e18
	beq.n 0x7e6c	@ 00007e18 28d0
.org 0x7e1a
	cmp r0, #1	@ 00007e1a 0128
.org 0x7e1c
	bne.n 0x7e3c	@ 00007e1c 0ed1
.org 0x7e1e
	ldr r0, [pc, #24]	@ 00007e1e 0648
.org 0x7e20
	ands r0, r4	@ 00007e20 2040
.org 0x7e22
	subs r4, r0, #1	@ 00007e22 441e
.org 0x7e24
	b.n 0x7e66	@ 00007e24 1fe0
.org 0x7e26
	.byte 0x00	@ 00007e26 data
.org 0x7e27
	.byte 0x00	@ 00007e27 data
.org 0x7e28
	.byte 0xb0,0x0a,0x00,0x02	@ 00007e28 data
.org 0x7e2c
	.byte 0x00,0x10,0xff,0xff	@ 00007e2c data
.org 0x7e30
	.byte 0x0f,0x80,0x00,0x00	@ 00007e30 data
.org 0x7e34
	.byte 0x68,0x0c,0x00,0x02	@ 00007e34 data
.org 0x7e38
	.byte 0x00,0xf0,0xff,0xff	@ 00007e38 data
.org 0x7e3c
	ldr r1, [pc, #64]	@ 00007e3c 1049
.org 0x7e3e
	lsls r0, r0, #2	@ 00007e3e 8000
.org 0x7e40
	adds r0, r0, r1	@ 00007e40 4018
.org 0x7e42
	ldr r2, [pc, #64]	@ 00007e42 104a
.org 0x7e44
	adds r1, r4, #0	@ 00007e44 211c
.org 0x7e46
	ands r1, r2	@ 00007e46 1140
.org 0x7e48
	ldr r3, [r0, #0]	@ 00007e48 0368
.org 0x7e4a
	adds r0, r6, #0	@ 00007e4a 301c
.org 0x7e4c
	ands r0, r2	@ 00007e4c 1040
.org 0x7e4e
	bl 0x128f88	@ 00007e4e 21f19bf8
.org 0x7e52
	cmp r0, #0	@ 00007e52 0028
.org 0x7e54
	beq.n 0x7e6c	@ 00007e54 0ad0
.org 0x7e56
	adds r1, r4, #0	@ 00007e56 211c
.org 0x7e58
	adds r4, r4, r0	@ 00007e58 2418
.org 0x7e5a
	eors r1, r4	@ 00007e5a 6140
.org 0x7e5c
	movs r0, #128	@ 00007e5c 8020
.org 0x7e5e
	lsls r0, r0, #5	@ 00007e5e 4001
.org 0x7e60
	ands r1, r0	@ 00007e60 0140
.org 0x7e62
	cmp r1, #0	@ 00007e62 0029
.org 0x7e64
	beq.n 0x7e6c	@ 00007e64 02d0
.org 0x7e66
	adds r5, #1	@ 00007e66 0135
.org 0x7e68
	cmp r5, #15	@ 00007e68 0f2d
.org 0x7e6a
	ble.n 0x7df4	@ 00007e6a c3dd
.org 0x7e6c
	cmp r5, #15	@ 00007e6c 0f2d
.org 0x7e6e
	bgt.n 0x7e88	@ 00007e6e 0bdc
.org 0x7e70
	adds r0, r6, #0	@ 00007e70 301c
.org 0x7e72
	adds r1, r4, #0	@ 00007e72 211c
.org 0x7e74
	bl 0x9420	@ 00007e74 01f0d4fa
