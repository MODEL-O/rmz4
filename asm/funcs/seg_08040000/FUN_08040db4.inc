@ FUN_08040db4  entry 0x08040db4  size 40
.thumb
.org 0x40db4
FUN_08040db4:
	push {r4, lr}	@ 00040db4 10b5
.org 0x40db6
	adds r4, r0, #0	@ 00040db6 041c
.org 0x40db8
	adds r0, #190	@ 00040db8 be30
.org 0x40dba
	ldrb r0, [r0, #0]	@ 00040dba 0078
.org 0x40dbc
	cmp r0, #0	@ 00040dbc 0028
.org 0x40dbe
	beq.n 0x40dd0	@ 00040dbe 07d0
.org 0x40dc0
	adds r1, r4, #0	@ 00040dc0 211c
.org 0x40dc2
	adds r1, #84	@ 00040dc2 5431
.org 0x40dc4
	movs r0, #1	@ 00040dc4 0120
.org 0x40dc6
	bl 0xd0c88	@ 00040dc6 8ff05fff
.org 0x40dca
	movs r0, #39	@ 00040dca 2720
.org 0x40dcc
	bl 0x2b10	@ 00040dcc c1f7a0fe
.org 0x40dd0
	adds r0, r4, #0	@ 00040dd0 201c
.org 0x40dd2
	bl 0x3a8b4	@ 00040dd2 f9f76ffd
.org 0x40dd6
	pop {r4}	@ 00040dd6 10bc
.org 0x40dd8
	pop {r0}	@ 00040dd8 01bc
.org 0x40dda
	bx r0	@ 00040dda 0047
