@ FUN_08114c74  entry 0x08114c74  size 20
.thumb
.org 0x114c74
FUN_08114c74:
	push {lr}	@ 00114c74 00b5
.org 0x114c76
	ldr r2, [pc, #16]	@ 00114c76 044a
.org 0x114c78
	ldrb r1, [r0, #2]	@ 00114c78 8178
.org 0x114c7a
	lsls r1, r1, #2	@ 00114c7a 8900
.org 0x114c7c
	adds r1, r1, r2	@ 00114c7c 8918
.org 0x114c7e
	ldr r1, [r1, #0]	@ 00114c7e 0968
.org 0x114c80
	bl 0x128f80	@ 00114c80 14f07ef9
.org 0x114c84
	pop {r0}	@ 00114c84 01bc
.org 0x114c86
	bx r0	@ 00114c86 0047
