@ FUN_08049dec  entry 0x08049dec  size 40
.thumb
.org 0x49dec
FUN_08049dec:
	push {lr}	@ 00049dec 00b5
.org 0x49dee
	bl 0x7c7c	@ 00049dee bdf745ff
.org 0x49df2
	lsls r0, r0, #16	@ 00049df2 0004
.org 0x49df4
	lsrs r0, r0, #16	@ 00049df4 000c
.org 0x49df6
	adds r1, r0, #0	@ 00049df6 011c
.org 0x49df8
	movs r0, #15	@ 00049df8 0f20
.org 0x49dfa
	ands r0, r1	@ 00049dfa 0840
.org 0x49dfc
	cmp r0, #15	@ 00049dfc 0f28
.org 0x49dfe
	beq.n 0x49e0e	@ 00049dfe 06d0
.org 0x49e00
	movs r0, #128	@ 00049e00 8020
.org 0x49e02
	lsls r0, r0, #8	@ 00049e02 0002
.org 0x49e04
	ands r0, r1	@ 00049e04 0840
.org 0x49e06
	cmp r0, #0	@ 00049e06 0028
.org 0x49e08
	bne.n 0x49e0e	@ 00049e08 01d1
.org 0x49e0a
	adds r0, r1, #0	@ 00049e0a 081c
.org 0x49e0c
	b.n 0x49e10	@ 00049e0c 00e0
.org 0x49e0e
	movs r0, #0	@ 00049e0e 0020
.org 0x49e10
	pop {r1}	@ 00049e10 02bc
.org 0x49e12
	bx r1	@ 00049e12 0847
