@ FUN_08074d74  entry 0x08074d74  size 22
.thumb
.org 0x74d74
FUN_08074d74:
	push {lr}	@ 00074d74 00b5
.org 0x74d76
	ldr r0, [r0, #20]	@ 00074d76 4069
.org 0x74d78
	movs r1, #1	@ 00074d78 0121
.org 0x74d7a
	ands r0, r1	@ 00074d7a 0840
.org 0x74d7c
	cmp r0, #0	@ 00074d7c 0028
.org 0x74d7e
	beq.n 0x74d86	@ 00074d7e 02d0
.org 0x74d80
	movs r0, #81	@ 00074d80 5120
.org 0x74d82
	bl 0x6984	@ 00074d82 91f7fffd
.org 0x74d86
	pop {r0}	@ 00074d86 01bc
.org 0x74d88
	bx r0	@ 00074d88 0047
