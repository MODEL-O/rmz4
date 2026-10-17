@ FUN_08055554  entry 0x08055554  size 20
.thumb
.org 0x55554
FUN_08055554:
	push {lr}	@ 00055554 00b5
.org 0x55556
	ldr r2, [pc, #16]	@ 00055556 044a
.org 0x55558
	ldrb r1, [r0, #14]	@ 00055558 817b
.org 0x5555a
	lsls r1, r1, #2	@ 0005555a 8900
.org 0x5555c
	adds r1, r1, r2	@ 0005555c 8918
.org 0x5555e
	ldr r1, [r1, #0]	@ 0005555e 0968
.org 0x55560
	bl 0x128f80	@ 00055560 d3f00efd
.org 0x55564
	pop {r0}	@ 00055564 01bc
.org 0x55566
	bx r0	@ 00055566 0047
