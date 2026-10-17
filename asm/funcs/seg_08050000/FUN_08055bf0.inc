@ FUN_08055bf0  entry 0x08055bf0  size 20
.thumb
.org 0x55bf0
FUN_08055bf0:
	push {lr}	@ 00055bf0 00b5
.org 0x55bf2
	ldr r2, [pc, #16]	@ 00055bf2 044a
.org 0x55bf4
	ldrb r1, [r0, #14]	@ 00055bf4 817b
.org 0x55bf6
	lsls r1, r1, #2	@ 00055bf6 8900
.org 0x55bf8
	adds r1, r1, r2	@ 00055bf8 8918
.org 0x55bfa
	ldr r1, [r1, #0]	@ 00055bfa 0968
.org 0x55bfc
	bl 0x128f80	@ 00055bfc d3f0c0f9
.org 0x55c00
	pop {r0}	@ 00055c00 01bc
.org 0x55c02
	bx r0	@ 00055c02 0047
