@ FUN_080d6edc  entry 0x080d6edc  size 20
.thumb
.org 0xd6edc
FUN_080d6edc:
	push {lr}	@ 000d6edc 00b5
.org 0xd6ede
	ldr r2, [pc, #16]	@ 000d6ede 044a
.org 0xd6ee0
	ldrb r1, [r0, #16]	@ 000d6ee0 017c
.org 0xd6ee2
	lsls r1, r1, #2	@ 000d6ee2 8900
.org 0xd6ee4
	adds r1, r1, r2	@ 000d6ee4 8918
.org 0xd6ee6
	ldr r1, [r1, #0]	@ 000d6ee6 0968
.org 0xd6ee8
	bl 0x128f80	@ 000d6ee8 52f04af8
.org 0xd6eec
	pop {r0}	@ 000d6eec 01bc
.org 0xd6eee
	bx r0	@ 000d6eee 0047
