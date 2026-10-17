@ FUN_08087534  entry 0x08087534  size 20
.thumb
.org 0x87534
FUN_08087534:
	push {lr}	@ 00087534 00b5
.org 0x87536
	ldr r2, [pc, #16]	@ 00087536 044a
.org 0x87538
	ldrb r1, [r0, #14]	@ 00087538 817b
.org 0x8753a
	lsls r1, r1, #2	@ 0008753a 8900
.org 0x8753c
	adds r1, r1, r2	@ 0008753c 8918
.org 0x8753e
	ldr r1, [r1, #0]	@ 0008753e 0968
.org 0x87540
	bl 0x128f80	@ 00087540 a1f01efd
.org 0x87544
	pop {r0}	@ 00087544 01bc
.org 0x87546
	bx r0	@ 00087546 0047
