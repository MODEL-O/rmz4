@ FUN_080ed7b0  entry 0x080ed7b0  size 20
.thumb
.org 0xed7b0
FUN_080ed7b0:
	push {lr}	@ 000ed7b0 00b5
.org 0xed7b2
	ldr r2, [pc, #16]	@ 000ed7b2 044a
.org 0xed7b4
	ldrb r1, [r0, #16]	@ 000ed7b4 017c
.org 0xed7b6
	lsls r1, r1, #2	@ 000ed7b6 8900
.org 0xed7b8
	adds r1, r1, r2	@ 000ed7b8 8918
.org 0xed7ba
	ldr r1, [r1, #0]	@ 000ed7ba 0968
.org 0xed7bc
	bl 0x128f80	@ 000ed7bc 3bf0e0fb
.org 0xed7c0
	pop {r0}	@ 000ed7c0 01bc
.org 0xed7c2
	bx r0	@ 000ed7c2 0047
