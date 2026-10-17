@ FUN_080ed374  entry 0x080ed374  size 10
.thumb
.org 0xed374
FUN_080ed374:
	push {lr}	@ 000ed374 00b5
.org 0xed376
	bl 0x1cff0	@ 000ed376 2ff73bfe
.org 0xed37a
	pop {r0}	@ 000ed37a 01bc
.org 0xed37c
	bx r0	@ 000ed37c 0047
