@ FUN_080decf8  entry 0x080decf8  size 20
.thumb
.org 0xdecf8
FUN_080decf8:
	push {lr}	@ 000decf8 00b5
.org 0xdecfa
	ldr r2, [pc, #16]	@ 000decfa 044a
.org 0xdecfc
	ldrb r1, [r0, #16]	@ 000decfc 017c
.org 0xdecfe
	lsls r1, r1, #2	@ 000decfe 8900
.org 0xded00
	adds r1, r1, r2	@ 000ded00 8918
.org 0xded02
	ldr r1, [r1, #0]	@ 000ded02 0968
.org 0xded04
	bl 0x128f80	@ 000ded04 4af03cf9
.org 0xded08
	pop {r0}	@ 000ded08 01bc
.org 0xded0a
	bx r0	@ 000ded0a 0047
