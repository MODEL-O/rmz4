@ FUN_080d2a18  entry 0x080d2a18  size 20
.thumb
.org 0xd2a18
FUN_080d2a18:
	push {lr}	@ 000d2a18 00b5
.org 0xd2a1a
	ldr r2, [pc, #16]	@ 000d2a1a 044a
.org 0xd2a1c
	ldrb r1, [r0, #16]	@ 000d2a1c 017c
.org 0xd2a1e
	lsls r1, r1, #2	@ 000d2a1e 8900
.org 0xd2a20
	adds r1, r1, r2	@ 000d2a20 8918
.org 0xd2a22
	ldr r1, [r1, #0]	@ 000d2a22 0968
.org 0xd2a24
	bl 0x128f80	@ 000d2a24 56f0acfa
.org 0xd2a28
	pop {r0}	@ 000d2a28 01bc
.org 0xd2a2a
	bx r0	@ 000d2a2a 0047
