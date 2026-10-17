@ FUN_08009130  entry 0x08009130  size 36
.thumb
.org 0x9130
FUN_08009130:
	push {lr}	@ 00009130 00b5
.org 0x9132
	adds r2, r0, #0	@ 00009132 021c
.org 0x9134
	ldr r0, [pc, #8]	@ 00009134 0248
.org 0x9136
	cmp r2, r0	@ 00009136 8242
.org 0x9138
	ble.n 0x9144	@ 00009138 04dd
.org 0x913a
	mvns r0, r1	@ 0000913a c843
.org 0x913c
	b.n 0x915a	@ 0000913c 0de0
.org 0x913e
	.byte 0x00	@ 0000913e data
.org 0x913f
	.byte 0x00	@ 0000913f data
.org 0x9140
	.byte 0xff,0x07,0x00,0x00	@ 00009140 data
.org 0x9144
	ldr r0, [pc, #12]	@ 00009144 0348
.org 0x9146
	adds r1, r1, r0	@ 00009146 0918
.org 0x9148
	lsls r0, r2, #1	@ 00009148 5000
.org 0x914a
	adds r0, r1, r0	@ 0000914a 0818
.org 0x914c
	cmp r0, #0	@ 0000914c 0028
.org 0x914e
	bgt.n 0x9158	@ 0000914e 03dc
.org 0x9150
	movs r0, #0	@ 00009150 0020
.org 0x9152
	b.n 0x915a	@ 00009152 02e0
