@ FUN_0805b544  entry 0x0805b544  size 20
.thumb
.org 0x5b544
FUN_0805b544:
	push {lr}	@ 0005b544 00b5
.org 0x5b546
	ldr r2, [pc, #16]	@ 0005b546 044a
.org 0x5b548
	ldrb r1, [r0, #14]	@ 0005b548 817b
.org 0x5b54a
	lsls r1, r1, #2	@ 0005b54a 8900
.org 0x5b54c
	adds r1, r1, r2	@ 0005b54c 8918
.org 0x5b54e
	ldr r1, [r1, #0]	@ 0005b54e 0968
.org 0x5b550
	bl 0x128f80	@ 0005b550 cdf016fd
.org 0x5b554
	pop {r0}	@ 0005b554 01bc
.org 0x5b556
	bx r0	@ 0005b556 0047
