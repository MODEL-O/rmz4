@ FUN_0810d3ac  entry 0x0810d3ac  size 24
.thumb
.org 0x10d3ac
FUN_0810d3ac:
	push {r4, r5, lr}	@ 0010d3ac 30b5
.org 0x10d3ae
	ldr r4, [r0, #0]	@ 0010d3ae 0468
.org 0x10d3b0
	ldr r5, [r0, #4]	@ 0010d3b0 4568
.org 0x10d3b2
	ldr r2, [r1, #0]	@ 0010d3b2 0a68
.org 0x10d3b4
	ldr r3, [r1, #4]	@ 0010d3b4 4b68
.org 0x10d3b6
	adds r0, r4, #0	@ 0010d3b6 201c
.org 0x10d3b8
	adds r1, r5, #0	@ 0010d3b8 291c
.org 0x10d3ba
	bl 0x10d398	@ 0010d3ba fff7edff
.org 0x10d3be
	pop {r4, r5}	@ 0010d3be 30bc
.org 0x10d3c0
	pop {r1}	@ 0010d3c0 02bc
.org 0x10d3c2
	bx r1	@ 0010d3c2 0847
