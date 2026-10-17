@ FUN_080cf558  entry 0x080cf558  size 10
.thumb
.org 0xcf558
FUN_080cf558:
	push {lr}	@ 000cf558 00b5
.org 0xcf55a
	bl 0x1cff0	@ 000cf55a 4df749fd
.org 0xcf55e
	pop {r0}	@ 000cf55e 01bc
.org 0xcf560
	bx r0	@ 000cf560 0047
