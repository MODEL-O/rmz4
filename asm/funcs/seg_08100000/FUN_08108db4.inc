@ FUN_08108db4  entry 0x08108db4  size 76
.thumb
.org 0x108db4
FUN_08108db4:
	push {r4, r5, r6, lr}	@ 00108db4 70b5
.org 0x108db6
	adds r4, r0, #0	@ 00108db6 041c
.org 0x108db8
	adds r5, r1, #0	@ 00108db8 0d1c
.org 0x108dba
	ldr r1, [pc, #44]	@ 00108dba 0b49
.org 0x108dbc
	adds r0, r4, r1	@ 00108dbc 6018
.org 0x108dbe
	adds r1, r5, #0	@ 00108dbe 291c
.org 0x108dc0
	bl 0x8aa4	@ 00108dc0 fff670fe
.org 0x108dc4
	adds r6, r0, #0	@ 00108dc4 061c
.org 0x108dc6
	movs r0, #224	@ 00108dc6 e020
.org 0x108dc8
	lsls r0, r0, #3	@ 00108dc8 c000
.org 0x108dca
	adds r4, r4, r0	@ 00108dca 2418
.org 0x108dcc
	adds r0, r4, #0	@ 00108dcc 201c
.org 0x108dce
	adds r1, r5, #0	@ 00108dce 291c
.org 0x108dd0
	bl 0x8aa4	@ 00108dd0 fff668fe
.org 0x108dd4
	cmp r6, #0	@ 00108dd4 002e
.org 0x108dd6
	bge.n 0x108ddc	@ 00108dd6 01da
.org 0x108dd8
	cmp r0, #0	@ 00108dd8 0028
.org 0x108dda
	bgt.n 0x108de4	@ 00108dda 03dc
.org 0x108ddc
	cmp r6, #0	@ 00108ddc 002e
.org 0x108dde
	ble.n 0x108dec	@ 00108dde 05dd
.org 0x108de0
	cmp r0, #0	@ 00108de0 0028
.org 0x108de2
	bge.n 0x108dec	@ 00108de2 03da
.org 0x108de4
	movs r0, #0	@ 00108de4 0020
.org 0x108de6
	b.n 0x108dfe	@ 00108de6 0ae0
.org 0x108de8
	.byte 0x00,0xf9,0xff,0xff	@ 00108de8 data
.org 0x108dec
	cmp r6, #0	@ 00108dec 002e
.org 0x108dee
	bge.n 0x108df4	@ 00108dee 01da
.org 0x108df0
	cmp r6, r0	@ 00108df0 8642
.org 0x108df2
	blt.n 0x108dfc	@ 00108df2 03db
.org 0x108df4
	cmp r6, #0	@ 00108df4 002e
.org 0x108df6
	ble.n 0x108dfe	@ 00108df6 02dd
.org 0x108df8
	cmp r6, r0	@ 00108df8 8642
.org 0x108dfa
	ble.n 0x108dfe	@ 00108dfa 00dd
.org 0x108dfc
	adds r0, r6, #0	@ 00108dfc 301c
.org 0x108dfe
	pop {r4, r5, r6}	@ 00108dfe 70bc
