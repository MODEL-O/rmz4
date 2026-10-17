@ FUN_08084c84  entry 0x08084c84  size 38
.thumb
.org 0x84c84
FUN_08084c84:
	push {r4, r5, lr}	@ 00084c84 30b5
.org 0x84c86
	adds r4, r0, #0	@ 00084c86 041c
.org 0x84c88
	adds r5, r4, #0	@ 00084c88 251c
.org 0x84c8a
	adds r5, #180	@ 00084c8a b435
.org 0x84c8c
	ldr r0, [r5, #0]	@ 00084c8c 2868
.org 0x84c8e
	cmp r0, #0	@ 00084c8e 0028
.org 0x84c90
	beq.n 0x84c9a	@ 00084c90 03d0
.org 0x84c92
	bl 0x2b3e4	@ 00084c92 a6f7a7fb
.org 0x84c96
	cmp r0, #0	@ 00084c96 0028
.org 0x84c98
	beq.n 0x84ca4	@ 00084c98 04d0
.org 0x84c9a
	movs r1, #0	@ 00084c9a 0021
.org 0x84c9c
	str r1, [r5, #0]	@ 00084c9c 2960
.org 0x84c9e
	movs r0, #2	@ 00084c9e 0220
.org 0x84ca0
	strb r0, [r4, #13]	@ 00084ca0 6073
.org 0x84ca2
	strb r1, [r4, #14]	@ 00084ca2 a173
.org 0x84ca4
	pop {r4, r5}	@ 00084ca4 30bc
.org 0x84ca6
	pop {r0}	@ 00084ca6 01bc
.org 0x84ca8
	bx r0	@ 00084ca8 0047
