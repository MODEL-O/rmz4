@ FUN_0807e55c  entry 0x0807e55c  size 20
.thumb
.org 0x7e55c
FUN_0807e55c:
	push {lr}	@ 0007e55c 00b5
.org 0x7e55e
	ldr r2, [pc, #16]	@ 0007e55e 044a
.org 0x7e560
	ldrb r1, [r0, #14]	@ 0007e560 817b
.org 0x7e562
	lsls r1, r1, #2	@ 0007e562 8900
.org 0x7e564
	adds r1, r1, r2	@ 0007e564 8918
.org 0x7e566
	ldr r1, [r1, #0]	@ 0007e566 0968
.org 0x7e568
	bl 0x128f80	@ 0007e568 aaf00afd
.org 0x7e56c
	pop {r0}	@ 0007e56c 01bc
.org 0x7e56e
	bx r0	@ 0007e56e 0047
