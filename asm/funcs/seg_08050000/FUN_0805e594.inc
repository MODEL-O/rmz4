@ FUN_0805e594  entry 0x0805e594  size 20
.thumb
.org 0x5e594
FUN_0805e594:
	push {lr}	@ 0005e594 00b5
.org 0x5e596
	ldr r2, [pc, #16]	@ 0005e596 044a
.org 0x5e598
	ldrb r1, [r0, #14]	@ 0005e598 817b
.org 0x5e59a
	lsls r1, r1, #2	@ 0005e59a 8900
.org 0x5e59c
	adds r1, r1, r2	@ 0005e59c 8918
.org 0x5e59e
	ldr r1, [r1, #0]	@ 0005e59e 0968
.org 0x5e5a0
	bl 0x128f80	@ 0005e5a0 caf0eefc
.org 0x5e5a4
	pop {r0}	@ 0005e5a4 01bc
.org 0x5e5a6
	bx r0	@ 0005e5a6 0047
