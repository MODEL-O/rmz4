@ FUN_080cddf8  entry 0x080cddf8  size 20
.thumb
.org 0xcddf8
FUN_080cddf8:
	push {lr}	@ 000cddf8 00b5
.org 0xcddfa
	ldr r2, [pc, #16]	@ 000cddfa 044a
.org 0xcddfc
	ldrb r1, [r0, #16]	@ 000cddfc 017c
.org 0xcddfe
	lsls r1, r1, #2	@ 000cddfe 8900
.org 0xcde00
	adds r1, r1, r2	@ 000cde00 8918
.org 0xcde02
	ldr r1, [r1, #0]	@ 000cde02 0968
.org 0xcde04
	bl 0x128f80	@ 000cde04 5bf0bcf8
.org 0xcde08
	pop {r0}	@ 000cde08 01bc
.org 0xcde0a
	bx r0	@ 000cde0a 0047
