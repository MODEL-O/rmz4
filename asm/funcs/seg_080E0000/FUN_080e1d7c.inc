@ FUN_080e1d7c  entry 0x080e1d7c  size 20
.thumb
.org 0xe1d7c
FUN_080e1d7c:
	push {lr}	@ 000e1d7c 00b5
.org 0xe1d7e
	ldr r2, [pc, #16]	@ 000e1d7e 044a
.org 0xe1d80
	ldrb r1, [r0, #16]	@ 000e1d80 017c
.org 0xe1d82
	lsls r1, r1, #2	@ 000e1d82 8900
.org 0xe1d84
	adds r1, r1, r2	@ 000e1d84 8918
.org 0xe1d86
	ldr r1, [r1, #0]	@ 000e1d86 0968
.org 0xe1d88
	bl 0x128f80	@ 000e1d88 47f0faf8
.org 0xe1d8c
	pop {r0}	@ 000e1d8c 01bc
.org 0xe1d8e
	bx r0	@ 000e1d8e 0047
