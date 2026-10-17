@ FUN_080fb17c  entry 0x080fb17c  size 20
.thumb
.org 0xfb17c
FUN_080fb17c:
	push {lr}	@ 000fb17c 00b5
.org 0xfb17e
	ldr r2, [pc, #16]	@ 000fb17e 044a
.org 0xfb180
	ldrb r1, [r0, #16]	@ 000fb180 017c
.org 0xfb182
	lsls r1, r1, #2	@ 000fb182 8900
.org 0xfb184
	adds r1, r1, r2	@ 000fb184 8918
.org 0xfb186
	ldr r1, [r1, #0]	@ 000fb186 0968
.org 0xfb188
	bl 0x128f80	@ 000fb188 2df0fafe
.org 0xfb18c
	pop {r0}	@ 000fb18c 01bc
.org 0xfb18e
	bx r0	@ 000fb18e 0047
