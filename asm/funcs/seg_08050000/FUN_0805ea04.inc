@ FUN_0805ea04  entry 0x0805ea04  size 20
.thumb
.org 0x5ea04
FUN_0805ea04:
	push {lr}	@ 0005ea04 00b5
.org 0x5ea06
	ldr r2, [pc, #16]	@ 0005ea06 044a
.org 0x5ea08
	ldrb r1, [r0, #16]	@ 0005ea08 017c
.org 0x5ea0a
	lsls r1, r1, #2	@ 0005ea0a 8900
.org 0x5ea0c
	adds r1, r1, r2	@ 0005ea0c 8918
.org 0x5ea0e
	ldr r1, [r1, #0]	@ 0005ea0e 0968
.org 0x5ea10
	bl 0x128f80	@ 0005ea10 caf0b6fa
.org 0x5ea14
	pop {r0}	@ 0005ea14 01bc
.org 0x5ea16
	bx r0	@ 0005ea16 0047
