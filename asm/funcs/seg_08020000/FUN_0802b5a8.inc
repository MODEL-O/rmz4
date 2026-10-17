@ FUN_0802b5a8  entry 0x0802b5a8  size 20
.thumb
.org 0x2b5a8
FUN_0802b5a8:
	push {lr}	@ 0002b5a8 00b5
.org 0x2b5aa
	lsls r0, r1, #5	@ 0002b5aa 4801
.org 0x2b5ac
	ldr r1, [pc, #12]	@ 0002b5ac 0349
.org 0x2b5ae
	adds r0, r0, r1	@ 0002b5ae 4018
.org 0x2b5b0
	ldr r1, [pc, #12]	@ 0002b5b0 0349
.org 0x2b5b2
	movs r2, #8	@ 0002b5b2 0822
.org 0x2b5b4
	bl 0x128be0	@ 0002b5b4 fdf014fb
.org 0x2b5b8
	pop {r0}	@ 0002b5b8 01bc
.org 0x2b5ba
	bx r0	@ 0002b5ba 0047
