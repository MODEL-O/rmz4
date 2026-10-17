@ FUN_080bec8c  entry 0x080bec8c  size 20
.thumb
.org 0xbec8c
FUN_080bec8c:
	push {lr}	@ 000bec8c 00b5
.org 0xbec8e
	ldr r2, [pc, #16]	@ 000bec8e 044a
.org 0xbec90
	ldrb r1, [r0, #16]	@ 000bec90 017c
.org 0xbec92
	lsls r1, r1, #2	@ 000bec92 8900
.org 0xbec94
	adds r1, r1, r2	@ 000bec94 8918
.org 0xbec96
	ldr r1, [r1, #0]	@ 000bec96 0968
.org 0xbec98
	bl 0x128f80	@ 000bec98 6af072f9
.org 0xbec9c
	pop {r0}	@ 000bec9c 01bc
.org 0xbec9e
	bx r0	@ 000bec9e 0047
