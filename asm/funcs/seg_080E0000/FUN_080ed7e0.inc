@ FUN_080ed7e0  entry 0x080ed7e0  size 20
.thumb
.org 0xed7e0
FUN_080ed7e0:
	push {lr}	@ 000ed7e0 00b5
.org 0xed7e2
	ldr r2, [pc, #16]	@ 000ed7e2 044a
.org 0xed7e4
	ldrb r1, [r0, #16]	@ 000ed7e4 017c
.org 0xed7e6
	lsls r1, r1, #2	@ 000ed7e6 8900
.org 0xed7e8
	adds r1, r1, r2	@ 000ed7e8 8918
.org 0xed7ea
	ldr r1, [r1, #0]	@ 000ed7ea 0968
.org 0xed7ec
	bl 0x128f80	@ 000ed7ec 3bf0c8fb
.org 0xed7f0
	pop {r0}	@ 000ed7f0 01bc
.org 0xed7f2
	bx r0	@ 000ed7f2 0047
