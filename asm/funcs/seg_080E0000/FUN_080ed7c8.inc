@ FUN_080ed7c8  entry 0x080ed7c8  size 20
.thumb
.org 0xed7c8
FUN_080ed7c8:
	push {lr}	@ 000ed7c8 00b5
.org 0xed7ca
	ldr r2, [pc, #16]	@ 000ed7ca 044a
.org 0xed7cc
	ldrb r1, [r0, #16]	@ 000ed7cc 017c
.org 0xed7ce
	lsls r1, r1, #2	@ 000ed7ce 8900
.org 0xed7d0
	adds r1, r1, r2	@ 000ed7d0 8918
.org 0xed7d2
	ldr r1, [r1, #0]	@ 000ed7d2 0968
.org 0xed7d4
	bl 0x128f80	@ 000ed7d4 3bf0d4fb
.org 0xed7d8
	pop {r0}	@ 000ed7d8 01bc
.org 0xed7da
	bx r0	@ 000ed7da 0047
