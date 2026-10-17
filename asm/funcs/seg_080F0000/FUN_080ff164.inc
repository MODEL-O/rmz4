@ FUN_080ff164  entry 0x080ff164  size 4
.thumb
.org 0xff164
FUN_080ff164:
	push {r3, r5, lr}	@ 000ff164 28b5
.org 0xff166
	lsrs r6, r0, #2	@ 000ff166 8608
