@ FUN_0801e850  entry 0x0801e850  size 30
.thumb
.org 0x1e850
FUN_0801e850:
	push {lr}	@ 0001e850 00b5
.org 0x1e852
	ldr r1, [r0, #0]	@ 0001e852 0168
.org 0x1e854
	ldr r0, [pc, #12]	@ 0001e854 0348
.org 0x1e856
	cmp r1, r0	@ 0001e856 8142
.org 0x1e858
	ble.n 0x1e870	@ 0001e858 0add
.org 0x1e85a
	ldr r0, [pc, #12]	@ 0001e85a 0348
.org 0x1e85c
	cmp r1, r0	@ 0001e85c 8142
.org 0x1e85e
	ble.n 0x1e86c	@ 0001e85e 05dd
.org 0x1e860
	movs r0, #1	@ 0001e860 0120
.org 0x1e862
	b.n 0x1e872	@ 0001e862 06e0
.org 0x1e864
	.byte 0xff,0x0f,0x0e,0x00	@ 0001e864 data
.org 0x1e868
	.byte 0xff,0x8f,0x15,0x00	@ 0001e868 data
.org 0x1e86c
	movs r0, #2	@ 0001e86c 0220
