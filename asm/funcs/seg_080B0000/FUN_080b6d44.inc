@ FUN_080b6d44  entry 0x080b6d44  size 20
.thumb
.org 0xb6d44
FUN_080b6d44:
	push {lr}	@ 000b6d44 00b5
.org 0xb6d46
	ldr r2, [pc, #16]	@ 000b6d46 044a
.org 0xb6d48
	ldrb r1, [r0, #16]	@ 000b6d48 017c
.org 0xb6d4a
	lsls r1, r1, #2	@ 000b6d4a 8900
.org 0xb6d4c
	adds r1, r1, r2	@ 000b6d4c 8918
.org 0xb6d4e
	ldr r1, [r1, #0]	@ 000b6d4e 0968
.org 0xb6d50
	bl 0x128f80	@ 000b6d50 72f016f9
.org 0xb6d54
	pop {r0}	@ 000b6d54 01bc
.org 0xb6d56
	bx r0	@ 000b6d56 0047
