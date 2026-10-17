@ FUN_08017e18  entry 0x08017e18  size 24
.thumb
.org 0x17e18
FUN_08017e18:
	push {lr}	@ 00017e18 00b5
.org 0x17e1a
	movs r0, #72	@ 00017e1a 4820
.org 0x17e1c
	bl 0x2624	@ 00017e1c eaf702fc
.org 0x17e20
	movs r0, #73	@ 00017e20 4920
.org 0x17e22
	bl 0x2624	@ 00017e22 eaf7fffb
.org 0x17e26
	movs r0, #74	@ 00017e26 4a20
.org 0x17e28
	bl 0x2624	@ 00017e28 eaf7fcfb
.org 0x17e2c
	pop {r0}	@ 00017e2c 01bc
.org 0x17e2e
	bx r0	@ 00017e2e 0047
