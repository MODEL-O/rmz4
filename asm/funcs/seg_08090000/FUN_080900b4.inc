@ FUN_080900b4  entry 0x080900b4  size 20
.thumb
.org 0x900b4
FUN_080900b4:
	push {lr}	@ 000900b4 00b5
.org 0x900b6
	ldr r2, [pc, #16]	@ 000900b6 044a
.org 0x900b8
	ldrb r1, [r0, #16]	@ 000900b8 017c
.org 0x900ba
	lsls r1, r1, #2	@ 000900ba 8900
.org 0x900bc
	adds r1, r1, r2	@ 000900bc 8918
.org 0x900be
	ldr r1, [r1, #0]	@ 000900be 0968
.org 0x900c0
	bl 0x128f80	@ 000900c0 98f05eff
.org 0x900c4
	pop {r0}	@ 000900c4 01bc
.org 0x900c6
	bx r0	@ 000900c6 0047
