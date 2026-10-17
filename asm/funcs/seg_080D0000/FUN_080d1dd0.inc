@ FUN_080d1dd0  entry 0x080d1dd0  size 20
.thumb
.org 0xd1dd0
FUN_080d1dd0:
	push {lr}	@ 000d1dd0 00b5
.org 0xd1dd2
	ldr r2, [pc, #16]	@ 000d1dd2 044a
.org 0xd1dd4
	ldrb r1, [r0, #16]	@ 000d1dd4 017c
.org 0xd1dd6
	lsls r1, r1, #2	@ 000d1dd6 8900
.org 0xd1dd8
	adds r1, r1, r2	@ 000d1dd8 8918
.org 0xd1dda
	ldr r1, [r1, #0]	@ 000d1dda 0968
.org 0xd1ddc
	bl 0x128f80	@ 000d1ddc 57f0d0f8
.org 0xd1de0
	pop {r0}	@ 000d1de0 01bc
.org 0xd1de2
	bx r0	@ 000d1de2 0047
