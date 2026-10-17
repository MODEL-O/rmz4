@ FUN_080c0c74  entry 0x080c0c74  size 20
.thumb
.org 0xc0c74
FUN_080c0c74:
	push {lr}	@ 000c0c74 00b5
.org 0xc0c76
	ldr r2, [pc, #16]	@ 000c0c76 044a
.org 0xc0c78
	ldrb r1, [r0, #16]	@ 000c0c78 017c
.org 0xc0c7a
	lsls r1, r1, #2	@ 000c0c7a 8900
.org 0xc0c7c
	adds r1, r1, r2	@ 000c0c7c 8918
.org 0xc0c7e
	ldr r1, [r1, #0]	@ 000c0c7e 0968
.org 0xc0c80
	bl 0x128f80	@ 000c0c80 68f07ef9
.org 0xc0c84
	pop {r0}	@ 000c0c84 01bc
.org 0xc0c86
	bx r0	@ 000c0c86 0047
