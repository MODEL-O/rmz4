@ FUN_080d4eac  entry 0x080d4eac  size 20
.thumb
.org 0xd4eac
FUN_080d4eac:
	push {lr}	@ 000d4eac 00b5
.org 0xd4eae
	ldr r2, [pc, #16]	@ 000d4eae 044a
.org 0xd4eb0
	ldrb r1, [r0, #17]	@ 000d4eb0 417c
.org 0xd4eb2
	lsls r1, r1, #2	@ 000d4eb2 8900
.org 0xd4eb4
	adds r1, r1, r2	@ 000d4eb4 8918
.org 0xd4eb6
	ldr r1, [r1, #0]	@ 000d4eb6 0968
.org 0xd4eb8
	bl 0x128f80	@ 000d4eb8 54f062f8
.org 0xd4ebc
	pop {r0}	@ 000d4ebc 01bc
.org 0xd4ebe
	bx r0	@ 000d4ebe 0047
