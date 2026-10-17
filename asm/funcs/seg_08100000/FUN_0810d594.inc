@ FUN_0810d594  entry 0x0810d594  size 22
.thumb
.org 0x10d594
FUN_0810d594:
	push {lr}	@ 0010d594 00b5
.org 0x10d596
	ldr r1, [pc, #20]	@ 0010d596 0549
.org 0x10d598
	movs r0, #2	@ 0010d598 0220
.org 0x10d59a
	strh r0, [r1, #6]	@ 0010d59a c880
.org 0x10d59c
	ldr r0, [pc, #16]	@ 0010d59c 0448
.org 0x10d59e
	ldr r1, [pc, #20]	@ 0010d59e 0549
.org 0x10d5a0
	movs r2, #48	@ 0010d5a0 3022
.org 0x10d5a2
	bl 0x128be0	@ 0010d5a2 1bf01dfb
.org 0x10d5a6
	pop {r0}	@ 0010d5a6 01bc
.org 0x10d5a8
	bx r0	@ 0010d5a8 0047
