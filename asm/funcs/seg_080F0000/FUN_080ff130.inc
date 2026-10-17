@ FUN_080ff130  entry 0x080ff130  size 4
.thumb
.org 0xff130
FUN_080ff130:
	push {r2, r4, lr}	@ 000ff130 14b5
.org 0xff132
	lsrs r6, r0, #2	@ 000ff132 8608
