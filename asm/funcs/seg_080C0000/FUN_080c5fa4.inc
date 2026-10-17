@ FUN_080c5fa4  entry 0x080c5fa4  size 20
.thumb
.org 0xc5fa4
FUN_080c5fa4:
	push {lr}	@ 000c5fa4 00b5
.org 0xc5fa6
	ldr r2, [r0, #40]	@ 000c5fa6 826a
.org 0xc5fa8
	adds r2, #180	@ 000c5fa8 b432
.org 0xc5faa
	ldrh r1, [r2, #0]	@ 000c5faa 1188
.org 0xc5fac
	subs r1, #1	@ 000c5fac 0139
.org 0xc5fae
	strh r1, [r2, #0]	@ 000c5fae 1180
.org 0xc5fb0
	bl 0xbd3f8	@ 000c5fb0 f7f722fa
.org 0xc5fb4
	pop {r0}	@ 000c5fb4 01bc
.org 0xc5fb6
	bx r0	@ 000c5fb6 0047
