@ FUN_0807d080  entry 0x0807d080  size 20
.thumb
.org 0x7d080
FUN_0807d080:
	push {lr}	@ 0007d080 00b5
.org 0x7d082
	ldr r2, [pc, #16]	@ 0007d082 044a
.org 0x7d084
	ldrb r1, [r0, #14]	@ 0007d084 817b
.org 0x7d086
	lsls r1, r1, #2	@ 0007d086 8900
.org 0x7d088
	adds r1, r1, r2	@ 0007d088 8918
.org 0x7d08a
	ldr r1, [r1, #0]	@ 0007d08a 0968
.org 0x7d08c
	bl 0x128f80	@ 0007d08c abf078ff
.org 0x7d090
	pop {r0}	@ 0007d090 01bc
.org 0x7d092
	bx r0	@ 0007d092 0047
