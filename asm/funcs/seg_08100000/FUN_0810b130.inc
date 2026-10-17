@ FUN_0810b130  entry 0x0810b130  size 20
.thumb
.org 0x10b130
FUN_0810b130:
	push {lr}	@ 0010b130 00b5
.org 0x10b132
	ldr r2, [pc, #16]	@ 0010b132 044a
.org 0x10b134
	ldrb r1, [r0, #16]	@ 0010b134 017c
.org 0x10b136
	lsls r1, r1, #2	@ 0010b136 8900
.org 0x10b138
	adds r1, r1, r2	@ 0010b138 8918
.org 0x10b13a
	ldr r1, [r1, #0]	@ 0010b13a 0968
.org 0x10b13c
	bl 0x128f80	@ 0010b13c 1df020ff
.org 0x10b140
	pop {r0}	@ 0010b140 01bc
.org 0x10b142
	bx r0	@ 0010b142 0047
