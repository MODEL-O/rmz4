@ FUN_0811f0fc  entry 0x0811f0fc  size 86
.thumb
.org 0x11f0fc
FUN_0811f0fc:
	push {r4, lr}	@ 0011f0fc 10b5
.org 0x11f0fe
	adds r2, r0, #0	@ 0011f0fe 021c
.org 0x11f100
	ldrh r0, [r2, #4]	@ 0011f100 9088
.org 0x11f102
	subs r0, #1	@ 0011f102 0138
.org 0x11f104
	movs r3, #0	@ 0011f104 0023
.org 0x11f106
	adds r1, r0, #0	@ 0011f106 011c
.org 0x11f108
	strh r0, [r2, #4]	@ 0011f108 9080
.org 0x11f10a
	lsls r0, r0, #16	@ 0011f10a 0004
.org 0x11f10c
	cmp r0, #0	@ 0011f10c 0028
.org 0x11f10e
	bne.n 0x11f13c	@ 0011f10e 15d1
.org 0x11f110
	ldr r0, [pc, #32]	@ 0011f110 0848
.org 0x11f112
	ldr r4, [pc, #36]	@ 0011f112 094c
.org 0x11f114
	adds r1, r0, r4	@ 0011f114 0119
.org 0x11f116
	strb r3, [r1, #0]	@ 0011f116 0b70
.org 0x11f118
	subs r4, #1	@ 0011f118 013c
.org 0x11f11a
	adds r1, r0, r4	@ 0011f11a 0119
.org 0x11f11c
	strb r3, [r1, #0]	@ 0011f11c 0b70
.org 0x11f11e
	movs r1, #128	@ 0011f11e 8021
.org 0x11f120
	lsls r1, r1, #3	@ 0011f120 c900
.org 0x11f122
	adds r0, r0, r1	@ 0011f122 4018
.org 0x11f124
	strb r3, [r0, #0]	@ 0011f124 0370
.org 0x11f126
	movs r0, #4	@ 0011f126 0420
.org 0x11f128
	strb r0, [r2, #1]	@ 0011f128 5070
.org 0x11f12a
	adds r0, r2, #0	@ 0011f12a 101c
.org 0x11f12c
	bl 0x11f168	@ 0011f12c 00f01cf8
.org 0x11f130
	b.n 0x11f156	@ 0011f130 11e0
.org 0x11f132
	.byte 0x00	@ 0011f132 data
.org 0x11f133
	.byte 0x00	@ 0011f133 data
.org 0x11f134
	.byte 0xc0,0x2a,0x00,0x03	@ 0011f134 data
.org 0x11f138
	.byte 0x02,0x04,0x00,0x00	@ 0011f138 data
.org 0x11f13c
	ldr r2, [pc, #28]	@ 0011f13c 074a
.org 0x11f13e
	ldr r3, [pc, #32]	@ 0011f13e 084b
.org 0x11f140
	adds r0, r2, r3	@ 0011f140 d018
.org 0x11f142
	strb r1, [r0, #0]	@ 0011f142 0170
.org 0x11f144
	movs r0, #255	@ 0011f144 ff20
.org 0x11f146
	ands r0, r1	@ 0011f146 0840
.org 0x11f148
	ldr r4, [pc, #24]	@ 0011f148 064c
.org 0x11f14a
	adds r1, r2, r4	@ 0011f14a 1119
.org 0x11f14c
	strb r0, [r1, #0]	@ 0011f14c 0870
.org 0x11f14e
	movs r1, #128	@ 0011f14e 8021
.org 0x11f150
	lsls r1, r1, #3	@ 0011f150 c900
