@ FUN_080fa140  entry 0x080fa140  size 20
.thumb
.org 0xfa140
FUN_080fa140:
	push {lr}	@ 000fa140 00b5
.org 0xfa142
	ldr r2, [pc, #16]	@ 000fa142 044a
.org 0xfa144
	ldrb r1, [r0, #16]	@ 000fa144 017c
.org 0xfa146
	lsls r1, r1, #2	@ 000fa146 8900
.org 0xfa148
	adds r1, r1, r2	@ 000fa148 8918
.org 0xfa14a
	ldr r1, [r1, #0]	@ 000fa14a 0968
.org 0xfa14c
	bl 0x128f80	@ 000fa14c 2ef018ff
.org 0xfa150
	pop {r0}	@ 000fa150 01bc
.org 0xfa152
	bx r0	@ 000fa152 0047
