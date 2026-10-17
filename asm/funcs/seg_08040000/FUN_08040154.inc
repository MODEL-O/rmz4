@ FUN_08040154  entry 0x08040154  size 20
.thumb
.org 0x40154
FUN_08040154:
	push {lr}	@ 00040154 00b5
.org 0x40156
	ldr r2, [pc, #16]	@ 00040156 044a
.org 0x40158
	ldrb r1, [r0, #16]	@ 00040158 017c
.org 0x4015a
	lsls r1, r1, #2	@ 0004015a 8900
.org 0x4015c
	adds r1, r1, r2	@ 0004015c 8918
.org 0x4015e
	ldr r1, [r1, #0]	@ 0004015e 0968
.org 0x40160
	bl 0x128f80	@ 00040160 e8f00eff
.org 0x40164
	pop {r0}	@ 00040164 01bc
.org 0x40166
	bx r0	@ 00040166 0047
