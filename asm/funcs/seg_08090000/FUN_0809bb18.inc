@ FUN_0809bb18  entry 0x0809bb18  size 20
.thumb
.org 0x9bb18
FUN_0809bb18:
	push {lr}	@ 0009bb18 00b5
.org 0x9bb1a
	ldr r2, [pc, #16]	@ 0009bb1a 044a
.org 0x9bb1c
	ldrb r1, [r0, #16]	@ 0009bb1c 017c
.org 0x9bb1e
	lsls r1, r1, #2	@ 0009bb1e 8900
.org 0x9bb20
	adds r1, r1, r2	@ 0009bb20 8918
.org 0x9bb22
	ldr r1, [r1, #0]	@ 0009bb22 0968
.org 0x9bb24
	bl 0x128f80	@ 0009bb24 8df02cfa
.org 0x9bb28
	pop {r0}	@ 0009bb28 01bc
.org 0x9bb2a
	bx r0	@ 0009bb2a 0047
