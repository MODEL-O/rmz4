@ FUN_080cbb04  entry 0x080cbb04  size 20
.thumb
.org 0xcbb04
FUN_080cbb04:
	push {lr}	@ 000cbb04 00b5
.org 0xcbb06
	ldr r2, [pc, #16]	@ 000cbb06 044a
.org 0xcbb08
	ldrb r1, [r0, #16]	@ 000cbb08 017c
.org 0xcbb0a
	lsls r1, r1, #2	@ 000cbb0a 8900
.org 0xcbb0c
	adds r1, r1, r2	@ 000cbb0c 8918
.org 0xcbb0e
	ldr r1, [r1, #0]	@ 000cbb0e 0968
.org 0xcbb10
	bl 0x128f80	@ 000cbb10 5df036fa
.org 0xcbb14
	pop {r0}	@ 000cbb14 01bc
.org 0xcbb16
	bx r0	@ 000cbb16 0047
