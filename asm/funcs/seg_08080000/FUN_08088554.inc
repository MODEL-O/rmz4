@ FUN_08088554  entry 0x08088554  size 20
.thumb
.org 0x88554
FUN_08088554:
	push {lr}	@ 00088554 00b5
.org 0x88556
	ldr r2, [pc, #16]	@ 00088556 044a
.org 0x88558
	ldrb r1, [r0, #14]	@ 00088558 817b
.org 0x8855a
	lsls r1, r1, #2	@ 0008855a 8900
.org 0x8855c
	adds r1, r1, r2	@ 0008855c 8918
.org 0x8855e
	ldr r1, [r1, #0]	@ 0008855e 0968
.org 0x88560
	bl 0x128f80	@ 00088560 a0f00efd
.org 0x88564
	pop {r0}	@ 00088564 01bc
.org 0x88566
	bx r0	@ 00088566 0047
