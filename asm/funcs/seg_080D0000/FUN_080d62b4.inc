@ FUN_080d62b4  entry 0x080d62b4  size 20
.thumb
.org 0xd62b4
FUN_080d62b4:
	push {lr}	@ 000d62b4 00b5
.org 0xd62b6
	ldr r2, [pc, #16]	@ 000d62b6 044a
.org 0xd62b8
	ldrb r1, [r0, #16]	@ 000d62b8 017c
.org 0xd62ba
	lsls r1, r1, #2	@ 000d62ba 8900
.org 0xd62bc
	adds r1, r1, r2	@ 000d62bc 8918
.org 0xd62be
	ldr r1, [r1, #0]	@ 000d62be 0968
.org 0xd62c0
	bl 0x128f80	@ 000d62c0 52f05efe
.org 0xd62c4
	pop {r0}	@ 000d62c4 01bc
.org 0xd62c6
	bx r0	@ 000d62c6 0047
