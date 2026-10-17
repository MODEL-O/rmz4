@ FUN_081277a8  entry 0x081277a8  size 10
.thumb
.org 0x1277a8
FUN_081277a8:
	push {lr}	@ 001277a8 00b5
.org 0x1277aa
	bl 0x126b04	@ 001277aa fff7abf9
.org 0x1277ae
	pop {r0}	@ 001277ae 01bc
.org 0x1277b0
	bx r0	@ 001277b0 0047
