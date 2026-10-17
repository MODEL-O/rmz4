@ FUN_08070dd8  entry 0x08070dd8  size 20
.thumb
.org 0x70dd8
FUN_08070dd8:
	push {lr}	@ 00070dd8 00b5
.org 0x70dda
	ldr r2, [pc, #16]	@ 00070dda 044a
.org 0x70ddc
	ldrb r1, [r0, #14]	@ 00070ddc 817b
.org 0x70dde
	lsls r1, r1, #2	@ 00070dde 8900
.org 0x70de0
	adds r1, r1, r2	@ 00070de0 8918
.org 0x70de2
	ldr r1, [r1, #0]	@ 00070de2 0968
.org 0x70de4
	bl 0x128f80	@ 00070de4 b8f0ccf8
.org 0x70de8
	pop {r0}	@ 00070de8 01bc
.org 0x70dea
	bx r0	@ 00070dea 0047
