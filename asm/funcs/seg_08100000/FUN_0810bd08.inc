@ FUN_0810bd08  entry 0x0810bd08  size 20
.thumb
.org 0x10bd08
FUN_0810bd08:
	push {lr}	@ 0010bd08 00b5
.org 0x10bd0a
	ldr r2, [pc, #16]	@ 0010bd0a 044a
.org 0x10bd0c
	ldrb r1, [r0, #16]	@ 0010bd0c 017c
.org 0x10bd0e
	lsls r1, r1, #2	@ 0010bd0e 8900
.org 0x10bd10
	adds r1, r1, r2	@ 0010bd10 8918
.org 0x10bd12
	ldr r1, [r1, #0]	@ 0010bd12 0968
.org 0x10bd14
	bl 0x128f80	@ 0010bd14 1df034f9
.org 0x10bd18
	pop {r0}	@ 0010bd18 01bc
.org 0x10bd1a
	bx r0	@ 0010bd1a 0047
