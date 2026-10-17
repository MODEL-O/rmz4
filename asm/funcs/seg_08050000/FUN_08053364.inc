@ FUN_08053364  entry 0x08053364  size 20
.thumb
.org 0x53364
FUN_08053364:
	push {lr}	@ 00053364 00b5
.org 0x53366
	ldr r2, [pc, #16]	@ 00053366 044a
.org 0x53368
	ldrb r1, [r0, #14]	@ 00053368 817b
.org 0x5336a
	lsls r1, r1, #2	@ 0005336a 8900
.org 0x5336c
	adds r1, r1, r2	@ 0005336c 8918
.org 0x5336e
	ldr r1, [r1, #0]	@ 0005336e 0968
.org 0x53370
	bl 0x128f80	@ 00053370 d5f006fe
.org 0x53374
	pop {r0}	@ 00053374 01bc
.org 0x53376
	bx r0	@ 00053376 0047
