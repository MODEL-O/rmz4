@ FUN_080f7494  entry 0x080f7494  size 10
.thumb
.org 0xf7494
FUN_080f7494:
	push {lr}	@ 000f7494 00b5
.org 0xf7496
	bl 0xe954c	@ 000f7496 f2f759f8
.org 0xf749a
	pop {r0}	@ 000f749a 01bc
.org 0xf749c
	bx r0	@ 000f749c 0047
