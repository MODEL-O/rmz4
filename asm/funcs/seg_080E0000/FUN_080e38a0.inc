@ FUN_080e38a0  entry 0x080e38a0  size 84
.thumb
.org 0xe38a0
FUN_080e38a0:
	push {lr}	@ 000e38a0 00b5
.org 0xe38a2
	adds r3, r0, #0	@ 000e38a2 031c
.org 0xe38a4
	ldr r0, [pc, #40]	@ 000e38a4 0a48
.org 0xe38a6
	ldr r0, [r0, #0]	@ 000e38a6 0068
.org 0xe38a8
	ldr r1, [r0, #84]	@ 000e38a8 416d
.org 0xe38aa
	ldr r0, [r3, #84]	@ 000e38aa 586d
.org 0xe38ac
	cmp r1, r0	@ 000e38ac 8142
.org 0xe38ae
	bge.n 0xe38d4	@ 000e38ae 11da
.org 0xe38b0
	movs r2, #0	@ 000e38b0 0022
.org 0xe38b2
	ldrb r1, [r3, #10]	@ 000e38b2 997a
.org 0xe38b4
	movs r0, #239	@ 000e38b4 ef20
.org 0xe38b6
	ands r0, r1	@ 000e38b6 0840
.org 0xe38b8
	strb r0, [r3, #10]	@ 000e38b8 9872
.org 0xe38ba
	adds r0, r3, #0	@ 000e38ba 181c
.org 0xe38bc
	adds r0, #76	@ 000e38bc 4c30
.org 0xe38be
	strb r2, [r0, #0]	@ 000e38be 0270
.org 0xe38c0
	adds r2, r3, #0	@ 000e38c0 1a1c
.org 0xe38c2
	adds r2, #74	@ 000e38c2 4a32
.org 0xe38c4
	ldrb r1, [r2, #0]	@ 000e38c4 1178
.org 0xe38c6
	movs r0, #17	@ 000e38c6 1120
.org 0xe38c8
	negs r0, r0	@ 000e38c8 4042
.org 0xe38ca
	ands r0, r1	@ 000e38ca 0840
.org 0xe38cc
	b.n 0xe38f4	@ 000e38cc 12e0
.org 0xe38ce
	.byte 0x00	@ 000e38ce data
.org 0xe38cf
	.byte 0x00	@ 000e38cf data
.org 0xe38d0
	.byte 0xf0,0xdb,0x02,0x02	@ 000e38d0 data
.org 0xe38d4
	movs r2, #1	@ 000e38d4 0122
.org 0xe38d6
	ldrb r1, [r3, #10]	@ 000e38d6 997a
.org 0xe38d8
	movs r0, #16	@ 000e38d8 1020
.org 0xe38da
	orrs r0, r1	@ 000e38da 0843
.org 0xe38dc
	strb r0, [r3, #10]	@ 000e38dc 9872
.org 0xe38de
	adds r0, r3, #0	@ 000e38de 181c
.org 0xe38e0
	adds r0, #76	@ 000e38e0 4c30
.org 0xe38e2
	strb r2, [r0, #0]	@ 000e38e2 0270
.org 0xe38e4
	adds r2, r3, #0	@ 000e38e4 1a1c
.org 0xe38e6
	adds r2, #74	@ 000e38e6 4a32
.org 0xe38e8
	movs r3, #16	@ 000e38e8 1023
.org 0xe38ea
	ldrb r1, [r2, #0]	@ 000e38ea 1178
.org 0xe38ec
	movs r0, #17	@ 000e38ec 1120
.org 0xe38ee
	negs r0, r0	@ 000e38ee 4042
.org 0xe38f0
	ands r0, r1	@ 000e38f0 0840
.org 0xe38f2
	orrs r0, r3	@ 000e38f2 1843
