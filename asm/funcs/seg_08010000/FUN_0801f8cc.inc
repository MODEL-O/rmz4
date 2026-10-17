@ FUN_0801f8cc  entry 0x0801f8cc  size 28
.thumb
.org 0x1f8cc
FUN_0801f8cc:
	push {r4, lr}	@ 0001f8cc 10b5
.org 0x1f8ce
	adds r1, r0, #0	@ 0001f8ce 011c
.org 0x1f8d0
	adds r4, r1, #0	@ 0001f8d0 0c1c
.org 0x1f8d2
	adds r4, #56	@ 0001f8d2 3834
.org 0x1f8d4
	adds r1, #40	@ 0001f8d4 2831
.org 0x1f8d6
	adds r0, r4, #0	@ 0001f8d6 201c
.org 0x1f8d8
	bl 0x1febc	@ 0001f8d8 00f0f0fa
.org 0x1f8dc
	adds r0, r4, #0	@ 0001f8dc 201c
.org 0x1f8de
	bl 0x1ffe0	@ 0001f8de 00f07ffb
.org 0x1f8e2
	pop {r4}	@ 0001f8e2 10bc
.org 0x1f8e4
	pop {r0}	@ 0001f8e4 01bc
.org 0x1f8e6
	bx r0	@ 0001f8e6 0047
