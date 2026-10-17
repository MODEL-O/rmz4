@ FUN_080300a8  entry 0x080300a8  size 20
.thumb
.org 0x300a8
FUN_080300a8:
	push {lr}	@ 000300a8 00b5
.org 0x300aa
	ldr r2, [pc, #16]	@ 000300aa 044a
.org 0x300ac
	ldrb r1, [r0, #14]	@ 000300ac 817b
.org 0x300ae
	lsls r1, r1, #2	@ 000300ae 8900
.org 0x300b0
	adds r1, r1, r2	@ 000300b0 8918
.org 0x300b2
	ldr r1, [r1, #0]	@ 000300b2 0968
.org 0x300b4
	bl 0x128f80	@ 000300b4 f8f064ff
.org 0x300b8
	pop {r0}	@ 000300b8 01bc
.org 0x300ba
	bx r0	@ 000300ba 0047
