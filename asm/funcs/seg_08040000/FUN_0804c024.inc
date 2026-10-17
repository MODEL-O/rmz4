@ FUN_0804c024  entry 0x0804c024  size 20
.thumb
.org 0x4c024
FUN_0804c024:
	push {lr}	@ 0004c024 00b5
.org 0x4c026
	ldr r2, [pc, #16]	@ 0004c026 044a
.org 0x4c028
	ldrb r1, [r0, #16]	@ 0004c028 017c
.org 0x4c02a
	lsls r1, r1, #2	@ 0004c02a 8900
.org 0x4c02c
	adds r1, r1, r2	@ 0004c02c 8918
.org 0x4c02e
	ldr r1, [r1, #0]	@ 0004c02e 0968
.org 0x4c030
	bl 0x128f80	@ 0004c030 dcf0a6ff
.org 0x4c034
	pop {r0}	@ 0004c034 01bc
.org 0x4c036
	bx r0	@ 0004c036 0047
