@ FUN_0804b138  entry 0x0804b138  size 30
.thumb
.org 0x4b138
FUN_0804b138:
	push {lr}	@ 0004b138 00b5
.org 0x4b13a
	ldr r0, [r0, #20]	@ 0004b13a 4069
.org 0x4b13c
	movs r1, #4	@ 0004b13c 0421
.org 0x4b13e
	ands r0, r1	@ 0004b13e 0840
.org 0x4b140
	cmp r0, #0	@ 0004b140 0028
.org 0x4b142
	beq.n 0x4b152	@ 0004b142 06d0
.org 0x4b144
	ldr r2, [pc, #16]	@ 0004b144 044a
.org 0x4b146
	ldrh r1, [r2, #30]	@ 0004b146 d18b
.org 0x4b148
	ldr r0, [pc, #16]	@ 0004b148 0448
.org 0x4b14a
	cmp r1, r0	@ 0004b14a 8142
.org 0x4b14c
	bhi.n 0x4b152	@ 0004b14c 01d8
.org 0x4b14e
	adds r0, r1, #1	@ 0004b14e 481c
.org 0x4b150
	strh r0, [r2, #30]	@ 0004b150 d083
.org 0x4b152
	pop {r0}	@ 0004b152 01bc
.org 0x4b154
	bx r0	@ 0004b154 0047
