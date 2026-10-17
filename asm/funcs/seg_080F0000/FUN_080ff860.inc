@ FUN_080ff860  entry 0x080ff860  size 10
.thumb
.org 0xff860
FUN_080ff860:
	push {lr}	@ 000ff860 00b5
.org 0xff862
	bl 0x1cff0	@ 000ff862 1df7c5fb
.org 0xff866
	pop {r0}	@ 000ff866 01bc
.org 0xff868
	bx r0	@ 000ff868 0047
