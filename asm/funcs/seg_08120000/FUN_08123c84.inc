@ FUN_08123c84  entry 0x08123c84  size 36
.thumb
.org 0x123c84
FUN_08123c84:
	push {lr}	@ 00123c84 00b5
.org 0x123c86
	ldr r1, [pc, #32]	@ 00123c86 0849
.org 0x123c88
	adds r2, r0, r1	@ 00123c88 4218
.org 0x123c8a
	ldr r0, [r2, #20]	@ 00123c8a 5069
.org 0x123c8c
	cmp r0, #0	@ 00123c8c 0028
.org 0x123c8e
	beq.n 0x123c98	@ 00123c8e 03d0
.org 0x123c90
	subs r0, #1	@ 00123c90 0138
.org 0x123c92
	str r0, [r2, #20]	@ 00123c92 5061
.org 0x123c94
	cmp r0, #0	@ 00123c94 0028
.org 0x123c96
	bne.n 0x123ca2	@ 00123c96 04d1
.org 0x123c98
	ldrb r0, [r2, #24]	@ 00123c98 107e
.org 0x123c9a
	adds r0, #1	@ 00123c9a 0130
.org 0x123c9c
	movs r1, #0	@ 00123c9c 0021
.org 0x123c9e
	strb r0, [r2, #24]	@ 00123c9e 1076
.org 0x123ca0
	strb r1, [r2, #25]	@ 00123ca0 5176
.org 0x123ca2
	movs r0, #1	@ 00123ca2 0120
.org 0x123ca4
	pop {r1}	@ 00123ca4 02bc
.org 0x123ca6
	bx r1	@ 00123ca6 0847
