@ FUN_08078f64  entry 0x08078f64  size 56
.thumb
.org 0x78f64
FUN_08078f64:
	push {r4, r5, lr}	@ 00078f64 30b5
.org 0x78f66
	adds r4, r0, #0	@ 00078f66 041c
.org 0x78f68
	adds r5, r4, #0	@ 00078f68 251c
.org 0x78f6a
	adds r5, #212	@ 00078f6a d435
.org 0x78f6c
	ldrh r0, [r5, #0]	@ 00078f6c 2888
.org 0x78f6e
	adds r0, #1	@ 00078f6e 0130
.org 0x78f70
	strh r0, [r5, #0]	@ 00078f70 2880
.org 0x78f72
	lsls r0, r0, #16	@ 00078f72 0004
.org 0x78f74
	lsrs r0, r0, #16	@ 00078f74 000c
.org 0x78f76
	cmp r0, #14	@ 00078f76 0e28
.org 0x78f78
	bhi.n 0x78f84	@ 00078f78 04d8
.org 0x78f7a
	adds r0, r4, #0	@ 00078f7a 201c
.org 0x78f7c
	adds r0, #214	@ 00078f7c d630
.org 0x78f7e
	ldrb r0, [r0, #0]	@ 00078f7e 0078
.org 0x78f80
	cmp r0, #2	@ 00078f80 0228
.org 0x78f82
	beq.n 0x78f96	@ 00078f82 08d0
.org 0x78f84
	ldr r0, [pc, #20]	@ 00078f84 0548
.org 0x78f86
	bl 0x2b10	@ 00078f86 89f7c3fd
.org 0x78f8a
	adds r1, r4, #0	@ 00078f8a 211c
.org 0x78f8c
	adds r1, #214	@ 00078f8c d631
.org 0x78f8e
	movs r0, #2	@ 00078f8e 0220
.org 0x78f90
	strb r0, [r1, #0]	@ 00078f90 0870
.org 0x78f92
	movs r0, #0	@ 00078f92 0020
.org 0x78f94
	strh r0, [r5, #0]	@ 00078f94 2880
.org 0x78f96
	pop {r4, r5}	@ 00078f96 30bc
.org 0x78f98
	pop {r0}	@ 00078f98 01bc
.org 0x78f9a
	bx r0	@ 00078f9a 0047
