@ FUN_08103cdc  entry 0x08103cdc  size 108
.thumb
.org 0x103cdc
FUN_08103cdc:
	push {r4, r5, r6, lr}	@ 00103cdc 70b5
.org 0x103cde
	adds r5, r0, #0	@ 00103cde 051c
.org 0x103ce0
	ldrb r0, [r5, #16]	@ 00103ce0 287c
.org 0x103ce2
	cmp r0, #0	@ 00103ce2 0028
.org 0x103ce4
	bne.n 0x103cee	@ 00103ce4 03d1
.org 0x103ce6
	movs r4, #40	@ 00103ce6 2824
.org 0x103ce8
	movs r6, #160	@ 00103ce8 a026
.org 0x103cea
	lsls r6, r6, #7	@ 00103cea f601
.org 0x103cec
	b.n 0x103cf4	@ 00103cec 02e0
.org 0x103cee
	movs r4, #72	@ 00103cee 4824
.org 0x103cf0
	movs r6, #144	@ 00103cf0 9026
.org 0x103cf2
	lsls r6, r6, #8	@ 00103cf2 3602
.org 0x103cf4
	ldrb r1, [r5, #17]	@ 00103cf4 697c
.org 0x103cf6
	ldr r0, [pc, #48]	@ 00103cf6 0c48
.org 0x103cf8
	ldr r2, [pc, #48]	@ 00103cf8 0c4a
.org 0x103cfa
	adds r0, r0, r2	@ 00103cfa 8018
.org 0x103cfc
	muls r1, r4	@ 00103cfc 6143
.org 0x103cfe
	ldrh r0, [r0, #0]	@ 00103cfe 0088
.org 0x103d00
	adds r1, r1, r0	@ 00103d00 0918
.org 0x103d02
	lsls r0, r1, #16	@ 00103d02 0804
.org 0x103d04
	lsrs r0, r0, #16	@ 00103d04 000c
.org 0x103d06
	lsls r1, r4, #2	@ 00103d06 a100
.org 0x103d08
	bl 0x129050	@ 00103d08 25f0a2f9
.org 0x103d0c
	adds r1, r0, #0	@ 00103d0c 011c
.org 0x103d0e
	lsls r2, r4, #1	@ 00103d0e 6200
.org 0x103d10
	cmp r1, r2	@ 00103d10 9142
.org 0x103d12
	bcs.n 0x103d30	@ 00103d12 0dd2
.org 0x103d14
	lsrs r0, r6, #1	@ 00103d14 7008
.org 0x103d16
	ldr r4, [r5, #100]	@ 00103d16 6c6e
.org 0x103d18
	subs r4, r4, r0	@ 00103d18 241a
.org 0x103d1a
	adds r0, r1, #0	@ 00103d1a 081c
.org 0x103d1c
	muls r0, r6	@ 00103d1c 7043
.org 0x103d1e
	adds r1, r2, #0	@ 00103d1e 111c
.org 0x103d20
	bl 0x129120	@ 00103d20 25f0fef9
.org 0x103d24
	adds r4, r4, r0	@ 00103d24 2418
.org 0x103d26
	b.n 0x103d42	@ 00103d26 0ce0
.org 0x103d28
	.byte 0xb0,0x0a,0x00,0x02	@ 00103d28 data
.org 0x103d2c
	.byte 0x3c,0xd0,0x02,0x00	@ 00103d2c data
.org 0x103d30
	lsrs r0, r6, #1	@ 00103d30 7008
.org 0x103d32
	ldr r4, [r5, #100]	@ 00103d32 6c6e
.org 0x103d34
	adds r4, r4, r0	@ 00103d34 2418
.org 0x103d36
	subs r0, r1, r2	@ 00103d36 881a
.org 0x103d38
	muls r0, r6	@ 00103d38 7043
.org 0x103d3a
	adds r1, r2, #0	@ 00103d3a 111c
.org 0x103d3c
	bl 0x129120	@ 00103d3c 25f0f0f9
.org 0x103d40
	subs r4, r4, r0	@ 00103d40 241a
.org 0x103d42
	str r4, [r5, #84]	@ 00103d42 6c65
.org 0x103d44
	adds r0, r5, #0	@ 00103d44 281c
.org 0x103d46
	bl 0x1cff0	@ 00103d46 19f753f9
