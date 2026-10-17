@ FUN_080068cc  entry 0x080068cc  size 16
.thumb
.org 0x68cc
FUN_080068cc:
	push {lr}	@ 000068cc 00b5
.org 0x68ce
	ldr r1, [pc, #12]	@ 000068ce 0349
.org 0x68d0
	movs r0, #5	@ 000068d0 0520
.org 0x68d2
	movs r2, #60	@ 000068d2 3c22
.org 0x68d4
	bl 0x16ac	@ 000068d4 faf7eafe
.org 0x68d8
	pop {r0}	@ 000068d8 01bc
.org 0x68da
	bx r0	@ 000068da 0047
