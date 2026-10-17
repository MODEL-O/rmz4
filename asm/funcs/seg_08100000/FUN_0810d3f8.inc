@ FUN_0810d3f8  entry 0x0810d3f8  size 24
.thumb
.org 0x10d3f8
FUN_0810d3f8:
	push {r4, r5, lr}	@ 0010d3f8 30b5
.org 0x10d3fa
	ldr r4, [sp, #12]	@ 0010d3fa 039c
.org 0x10d3fc
	ldr r5, [sp, #16]	@ 0010d3fc 049d
.org 0x10d3fe
	bl 0x10d398	@ 0010d3fe fff7cbff
.org 0x10d402
	adds r1, r4, #0	@ 0010d402 211c
.org 0x10d404
	adds r2, r5, #0	@ 0010d404 2a1c
.org 0x10d406
	bl 0x10d3c4	@ 0010d406 fff7ddff
.org 0x10d40a
	pop {r4, r5}	@ 0010d40a 30bc
.org 0x10d40c
	pop {r1}	@ 0010d40c 02bc
.org 0x10d40e
	bx r1	@ 0010d40e 0847
