@ FUN_08040d34  entry 0x08040d34  size 28
.thumb
.org 0x40d34
FUN_08040d34:
	push {lr}	@ 00040d34 00b5
.org 0x40d36
	adds r2, r0, #0	@ 00040d36 021c
.org 0x40d38
	adds r2, #190	@ 00040d38 be32
.org 0x40d3a
	movs r1, #0	@ 00040d3a 0021
.org 0x40d3c
	strb r1, [r2, #0]	@ 00040d3c 1170
.org 0x40d3e
	ldr r2, [pc, #16]	@ 00040d3e 044a
.org 0x40d40
	ldrb r1, [r0, #16]	@ 00040d40 017c
.org 0x40d42
	lsls r1, r1, #2	@ 00040d42 8900
.org 0x40d44
	adds r1, r1, r2	@ 00040d44 8918
.org 0x40d46
	ldr r1, [r1, #0]	@ 00040d46 0968
.org 0x40d48
	bl 0x128f80	@ 00040d48 e8f01af9
.org 0x40d4c
	pop {r0}	@ 00040d4c 01bc
.org 0x40d4e
	bx r0	@ 00040d4e 0047
