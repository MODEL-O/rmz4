@ FUN_0810d5b8  entry 0x0810d5b8  size 22
.thumb
.org 0x10d5b8
FUN_0810d5b8:
	push {lr}	@ 0010d5b8 00b5
.org 0x10d5ba
	ldr r1, [pc, #20]	@ 0010d5ba 0549
.org 0x10d5bc
	movs r0, #10	@ 0010d5bc 0a20
.org 0x10d5be
	strh r0, [r1, #6]	@ 0010d5be c880
.org 0x10d5c0
	ldr r0, [pc, #16]	@ 0010d5c0 0448
.org 0x10d5c2
	ldr r1, [pc, #20]	@ 0010d5c2 0549
.org 0x10d5c4
	movs r2, #48	@ 0010d5c4 3022
.org 0x10d5c6
	bl 0x128be0	@ 0010d5c6 1bf00bfb
.org 0x10d5ca
	pop {r0}	@ 0010d5ca 01bc
.org 0x10d5cc
	bx r0	@ 0010d5cc 0047
