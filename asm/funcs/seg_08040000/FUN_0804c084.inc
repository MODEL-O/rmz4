@ FUN_0804c084  entry 0x0804c084  size 20
.thumb
.org 0x4c084
FUN_0804c084:
	push {lr}	@ 0004c084 00b5
.org 0x4c086
	ldr r2, [pc, #16]	@ 0004c086 044a
.org 0x4c088
	ldrb r1, [r0, #16]	@ 0004c088 017c
.org 0x4c08a
	lsls r1, r1, #2	@ 0004c08a 8900
.org 0x4c08c
	adds r1, r1, r2	@ 0004c08c 8918
.org 0x4c08e
	ldr r1, [r1, #0]	@ 0004c08e 0968
.org 0x4c090
	bl 0x128f80	@ 0004c090 dcf076ff
.org 0x4c094
	pop {r0}	@ 0004c094 01bc
.org 0x4c096
	bx r0	@ 0004c096 0047
