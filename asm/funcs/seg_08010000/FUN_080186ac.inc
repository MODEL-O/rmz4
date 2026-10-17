@ FUN_080186ac  entry 0x080186ac  size 36
.thumb
.org 0x186ac
FUN_080186ac:
	push {lr}	@ 000186ac 00b5
.org 0x186ae
	movs r0, #59	@ 000186ae 3b20
.org 0x186b0
	bl 0x2624	@ 000186b0 e9f7b8ff
.org 0x186b4
	movs r0, #60	@ 000186b4 3c20
.org 0x186b6
	bl 0x2624	@ 000186b6 e9f7b5ff
.org 0x186ba
	movs r0, #61	@ 000186ba 3d20
.org 0x186bc
	bl 0x2624	@ 000186bc e9f7b2ff
.org 0x186c0
	movs r0, #62	@ 000186c0 3e20
.org 0x186c2
	bl 0x2624	@ 000186c2 e9f7afff
.org 0x186c6
	movs r0, #66	@ 000186c6 4220
.org 0x186c8
	bl 0x2624	@ 000186c8 e9f7acff
.org 0x186cc
	pop {r0}	@ 000186cc 01bc
.org 0x186ce
	bx r0	@ 000186ce 0047
