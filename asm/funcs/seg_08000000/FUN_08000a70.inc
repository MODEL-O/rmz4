@ FUN_08000a70  entry 0x08000a70  size 60
.thumb
.org 0xa70
FUN_08000a70:
	push {r4, r5, lr}	@ 00000a70 30b5
.org 0xa72
	ldr r3, [pc, #44]	@ 00000a72 0b4b
.org 0xa74
	ldr r2, [pc, #44]	@ 00000a74 0b4a
.org 0xa76
	adds r1, r3, r2	@ 00000a76 9918
.org 0xa78
	ldrh r1, [r1, #0]	@ 00000a78 0988
.org 0xa7a
	lsls r2, r1, #3	@ 00000a7a ca00
.org 0xa7c
	adds r2, r2, r1	@ 00000a7c 5218
.org 0xa7e
	lsls r2, r2, #8	@ 00000a7e 1202
.org 0xa80
	movs r1, #144	@ 00000a80 9021
.org 0xa82
	lsls r1, r1, #5	@ 00000a82 4901
.org 0xa84
	adds r5, r3, r1	@ 00000a84 5d18
.org 0xa86
	ldrh r4, [r5, #0]	@ 00000a86 2c88
.org 0xa88
	lsls r1, r4, #2	@ 00000a88 a100
.org 0xa8a
	adds r1, r1, r3	@ 00000a8a c918
.org 0xa8c
	adds r2, r2, r1	@ 00000a8c 5218
.org 0xa8e
	movs r1, #144	@ 00000a8e 9021
.org 0xa90
	lsls r1, r1, #2	@ 00000a90 8900
.org 0xa92
	subs r1, r1, r4	@ 00000a92 091b
.org 0xa94
	adds r0, #3	@ 00000a94 0330
.org 0xa96
	lsrs r0, r0, #2	@ 00000a96 8008
.org 0xa98
	cmp r1, r0	@ 00000a98 8142
.org 0xa9a
	bcs.n 0xaa8	@ 00000a9a 05d2
.org 0xa9c
	movs r0, #0	@ 00000a9c 0020
.org 0xa9e
	b.n 0xaae	@ 00000a9e 06e0
.org 0xaa0
	.byte 0x80,0x03,0x00,0x03	@ 00000aa0 data
.org 0xaa4
	.byte 0x02,0x12,0x00,0x00	@ 00000aa4 data
.org 0xaa8
	adds r0, r4, r0	@ 00000aa8 2018
.org 0xaaa
	strh r0, [r5, #0]	@ 00000aaa 2880
