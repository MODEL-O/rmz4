@ FUN_080352d8  entry 0x080352d8  size 20
.thumb
.org 0x352d8
FUN_080352d8:
	push {lr}	@ 000352d8 00b5
.org 0x352da
	movs r1, #128	@ 000352da 8021
.org 0x352dc
	lsls r1, r1, #1	@ 000352dc 4900
.org 0x352de
	adds r2, r0, r1	@ 000352de 4218
.org 0x352e0
	movs r1, #1	@ 000352e0 0121
.org 0x352e2
	strb r1, [r2, #0]	@ 000352e2 1170
.org 0x352e4
	bl 0x352ec	@ 000352e4 00f002f8
.org 0x352e8
	pop {r0}	@ 000352e8 01bc
.org 0x352ea
	bx r0	@ 000352ea 0047
