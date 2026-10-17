@ FUN_080c4eac  entry 0x080c4eac  size 20
.thumb
.org 0xc4eac
FUN_080c4eac:
	push {lr}	@ 000c4eac 00b5
.org 0xc4eae
	ldr r2, [pc, #16]	@ 000c4eae 044a
.org 0xc4eb0
	ldrb r1, [r0, #16]	@ 000c4eb0 017c
.org 0xc4eb2
	lsls r1, r1, #2	@ 000c4eb2 8900
.org 0xc4eb4
	adds r1, r1, r2	@ 000c4eb4 8918
.org 0xc4eb6
	ldr r1, [r1, #0]	@ 000c4eb6 0968
.org 0xc4eb8
	bl 0x128f80	@ 000c4eb8 64f062f8
.org 0xc4ebc
	pop {r0}	@ 000c4ebc 01bc
.org 0xc4ebe
	bx r0	@ 000c4ebe 0047
