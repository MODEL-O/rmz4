@ FUN_080ec4b4  entry 0x080ec4b4  size 20
.thumb
.org 0xec4b4
FUN_080ec4b4:
	push {lr}	@ 000ec4b4 00b5
.org 0xec4b6
	ldr r2, [pc, #16]	@ 000ec4b6 044a
.org 0xec4b8
	ldrb r1, [r0, #16]	@ 000ec4b8 017c
.org 0xec4ba
	lsls r1, r1, #2	@ 000ec4ba 8900
.org 0xec4bc
	adds r1, r1, r2	@ 000ec4bc 8918
.org 0xec4be
	ldr r1, [r1, #0]	@ 000ec4be 0968
.org 0xec4c0
	bl 0x128f80	@ 000ec4c0 3cf05efd
.org 0xec4c4
	pop {r0}	@ 000ec4c4 01bc
.org 0xec4c6
	bx r0	@ 000ec4c6 0047
