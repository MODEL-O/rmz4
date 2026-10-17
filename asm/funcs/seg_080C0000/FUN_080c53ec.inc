@ FUN_080c53ec  entry 0x080c53ec  size 20
.thumb
.org 0xc53ec
FUN_080c53ec:
	push {lr}	@ 000c53ec 00b5
.org 0xc53ee
	ldr r2, [r0, #40]	@ 000c53ee 826a
.org 0xc53f0
	adds r2, #184	@ 000c53f0 b832
.org 0xc53f2
	ldrb r1, [r2, #0]	@ 000c53f2 1178
.org 0xc53f4
	subs r1, #1	@ 000c53f4 0139
.org 0xc53f6
	strb r1, [r2, #0]	@ 000c53f6 1170
.org 0xc53f8
	bl 0xbd3f8	@ 000c53f8 f7f7feff
.org 0xc53fc
	pop {r0}	@ 000c53fc 01bc
.org 0xc53fe
	bx r0	@ 000c53fe 0047
