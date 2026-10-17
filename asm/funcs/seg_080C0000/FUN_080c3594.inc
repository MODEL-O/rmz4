@ FUN_080c3594  entry 0x080c3594  size 20
.thumb
.org 0xc3594
FUN_080c3594:
	push {lr}	@ 000c3594 00b5
.org 0xc3596
	ldr r2, [pc, #16]	@ 000c3596 044a
.org 0xc3598
	ldrb r1, [r0, #16]	@ 000c3598 017c
.org 0xc359a
	lsls r1, r1, #2	@ 000c359a 8900
.org 0xc359c
	adds r1, r1, r2	@ 000c359c 8918
.org 0xc359e
	ldr r1, [r1, #0]	@ 000c359e 0968
.org 0xc35a0
	bl 0x128f80	@ 000c35a0 65f0eefc
.org 0xc35a4
	pop {r0}	@ 000c35a4 01bc
.org 0xc35a6
	bx r0	@ 000c35a6 0047
