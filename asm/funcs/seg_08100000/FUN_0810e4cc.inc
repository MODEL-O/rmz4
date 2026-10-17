@ FUN_0810e4cc  entry 0x0810e4cc  size 20
.thumb
.org 0x10e4cc
FUN_0810e4cc:
	push {lr}	@ 0010e4cc 00b5
.org 0x10e4ce
	ldr r0, [pc, #16]	@ 0010e4ce 0448
.org 0x10e4d0
	ldr r1, [r0, #0]	@ 0010e4d0 0168
.org 0x10e4d2
	adds r1, #1	@ 0010e4d2 0131
.org 0x10e4d4
	str r1, [r0, #0]	@ 0010e4d4 0160
.org 0x10e4d6
	adds r0, #8	@ 0010e4d6 0830
.org 0x10e4d8
	bl 0x10e748	@ 0010e4d8 00f036f9
.org 0x10e4dc
	pop {r0}	@ 0010e4dc 01bc
.org 0x10e4de
	bx r0	@ 0010e4de 0047
