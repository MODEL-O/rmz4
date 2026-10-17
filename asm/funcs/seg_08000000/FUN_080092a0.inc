@ FUN_080092a0  entry 0x080092a0  size 26
.thumb
.org 0x92a0
FUN_080092a0:
	push {lr}	@ 000092a0 00b5
.org 0x92a2
	adds r2, r0, #0	@ 000092a2 021c
.org 0x92a4
	ldr r0, [pc, #12]	@ 000092a4 0348
.org 0x92a6
	cmp r2, r0	@ 000092a6 8242
.org 0x92a8
	bgt.n 0x92b0	@ 000092a8 02dc
.org 0x92aa
	lsls r0, r2, #1	@ 000092aa 5000
.org 0x92ac
	cmp r1, r0	@ 000092ac 8142
.org 0x92ae
	bge.n 0x92b8	@ 000092ae 03da
.org 0x92b0
	mvns r0, r1	@ 000092b0 c843
.org 0x92b2
	b.n 0x92ba	@ 000092b2 02e0
.org 0x92b4
	.byte 0xff,0x07,0x00,0x00	@ 000092b4 data
.org 0x92b8
	movs r0, #0	@ 000092b8 0020
