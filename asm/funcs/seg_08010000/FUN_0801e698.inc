@ FUN_0801e698  entry 0x0801e698  size 50
.thumb
.org 0x1e698
FUN_0801e698:
	push {lr}	@ 0001e698 00b5
.org 0x1e69a
	ldr r1, [r0, #0]	@ 0001e69a 0168
.org 0x1e69c
	ldr r0, [pc, #8]	@ 0001e69c 0248
.org 0x1e69e
	cmp r1, r0	@ 0001e69e 8142
.org 0x1e6a0
	ble.n 0x1e6ac	@ 0001e6a0 04dd
.org 0x1e6a2
	movs r0, #3	@ 0001e6a2 0320
.org 0x1e6a4
	b.n 0x1e6da	@ 0001e6a4 19e0
.org 0x1e6a6
	.byte 0x00	@ 0001e6a6 data
.org 0x1e6a7
	.byte 0x00	@ 0001e6a7 data
.org 0x1e6a8
	.byte 0xff,0x1f,0x1c,0x00	@ 0001e6a8 data
.org 0x1e6ac
	ldr r0, [pc, #12]	@ 0001e6ac 0348
.org 0x1e6ae
	cmp r1, r0	@ 0001e6ae 8142
.org 0x1e6b0
	ble.n 0x1e6c8	@ 0001e6b0 0add
.org 0x1e6b2
	ldr r0, [pc, #12]	@ 0001e6b2 0348
.org 0x1e6b4
	cmp r1, r0	@ 0001e6b4 8142
.org 0x1e6b6
	bgt.n 0x1e6c4	@ 0001e6b6 05dc
.org 0x1e6b8
	movs r0, #2	@ 0001e6b8 0220
.org 0x1e6ba
	b.n 0x1e6da	@ 0001e6ba 0ee0
.org 0x1e6bc
	.byte 0xff,0xef,0x17,0x00	@ 0001e6bc data
.org 0x1e6c0
	.byte 0xff,0x4f,0x19,0x00	@ 0001e6c0 data
.org 0x1e6c4
	movs r0, #7	@ 0001e6c4 0720
.org 0x1e6c6
	b.n 0x1e6da	@ 0001e6c6 08e0
.org 0x1e6c8
	ldr r0, [pc, #8]	@ 0001e6c8 0248
