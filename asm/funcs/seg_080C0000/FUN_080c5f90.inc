@ FUN_080c5f90  entry 0x080c5f90  size 20
.thumb
.org 0xc5f90
FUN_080c5f90:
	push {lr}	@ 000c5f90 00b5
.org 0xc5f92
	ldr r2, [r0, #40]	@ 000c5f92 826a
.org 0xc5f94
	adds r2, #180	@ 000c5f94 b432
.org 0xc5f96
	ldrh r1, [r2, #0]	@ 000c5f96 1188
.org 0xc5f98
	subs r1, #1	@ 000c5f98 0139
.org 0xc5f9a
	strh r1, [r2, #0]	@ 000c5f9a 1180
.org 0xc5f9c
	bl 0xbd3f8	@ 000c5f9c f7f72cfa
.org 0xc5fa0
	pop {r0}	@ 000c5fa0 01bc
.org 0xc5fa2
	bx r0	@ 000c5fa2 0047
