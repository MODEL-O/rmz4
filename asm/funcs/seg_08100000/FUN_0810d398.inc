@ FUN_0810d398  entry 0x0810d398  size 18
.thumb
.org 0x10d398
FUN_0810d398:
	push {lr}	@ 0010d398 00b5
.org 0x10d39a
	subs r2, r2, r0	@ 0010d39a 121a
.org 0x10d39c
	subs r3, r3, r1	@ 0010d39c 5b1a
.org 0x10d39e
	adds r0, r2, #0	@ 0010d39e 101c
.org 0x10d3a0
	adds r1, r3, #0	@ 0010d3a0 191c
.org 0x10d3a2
	bl 0x10d338	@ 0010d3a2 fff7c9ff
.org 0x10d3a6
	pop {r1}	@ 0010d3a6 02bc
.org 0x10d3a8
	bx r1	@ 0010d3a8 0847
