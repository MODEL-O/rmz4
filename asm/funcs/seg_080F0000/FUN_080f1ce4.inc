@ FUN_080f1ce4  entry 0x080f1ce4  size 144
.thumb
.org 0xf1ce4
FUN_080f1ce4:
	push {r4, lr}	@ 000f1ce4 10b5
.org 0xf1ce6
	adds r4, r0, #0	@ 000f1ce6 041c
.org 0xf1ce8
	ldrb r0, [r4, #17]	@ 000f1ce8 607c
.org 0xf1cea
	cmp r0, #1	@ 000f1cea 0128
.org 0xf1cec
	beq.n 0xf1d3e	@ 000f1cec 27d0
.org 0xf1cee
	cmp r0, #1	@ 000f1cee 0128
.org 0xf1cf0
	bgt.n 0xf1cf8	@ 000f1cf0 02dc
.org 0xf1cf2
	cmp r0, #0	@ 000f1cf2 0028
.org 0xf1cf4
	beq.n 0xf1cfe	@ 000f1cf4 03d0
.org 0xf1cf6
	b.n 0xf1d7c	@ 000f1cf6 41e0
.org 0xf1cf8
	cmp r0, #2	@ 000f1cf8 0228
.org 0xf1cfa
	beq.n 0xf1d64	@ 000f1cfa 33d0
.org 0xf1cfc
	b.n 0xf1d7c	@ 000f1cfc 3ee0
.org 0xf1cfe
	ldr r0, [pc, #88]	@ 000f1cfe 1648
.org 0xf1d00
	movs r2, #160	@ 000f1d00 a022
.org 0xf1d02
	lsls r2, r2, #1	@ 000f1d02 5200
.org 0xf1d04
	adds r0, r0, r2	@ 000f1d04 8018
.org 0xf1d06
	ldr r1, [pc, #84]	@ 000f1d06 1549
.org 0xf1d08
	strh r1, [r0, #0]	@ 000f1d08 0180
.org 0xf1d0a
	ldr r0, [pc, #84]	@ 000f1d0a 1548
.org 0xf1d0c
	adds r0, r0, r2	@ 000f1d0c 8018
.org 0xf1d0e
	movs r1, #4	@ 000f1d0e 0421
.org 0xf1d10
	strh r1, [r0, #0]	@ 000f1d10 0180
.org 0xf1d12
	movs r1, #160	@ 000f1d12 a021
.org 0xf1d14
	lsls r1, r1, #8	@ 000f1d14 0902
.org 0xf1d16
	adds r0, r4, #0	@ 000f1d16 201c
.org 0xf1d18
	bl 0x1cf00	@ 000f1d18 2bf7f2f8
.org 0xf1d1c
	adds r2, r4, #0	@ 000f1d1c 221c
.org 0xf1d1e
	adds r2, #73	@ 000f1d1e 4932
.org 0xf1d20
	ldrb r1, [r2, #0]	@ 000f1d20 1178
.org 0xf1d22
	movs r0, #13	@ 000f1d22 0d20
.org 0xf1d24
	negs r0, r0	@ 000f1d24 4042
.org 0xf1d26
	ands r0, r1	@ 000f1d26 0840
.org 0xf1d28
	movs r1, #4	@ 000f1d28 0421
.org 0xf1d2a
	orrs r0, r1	@ 000f1d2a 0843
.org 0xf1d2c
	strb r0, [r2, #0]	@ 000f1d2c 1070
.org 0xf1d2e
	ldr r0, [r4, #84]	@ 000f1d2e 606d
.org 0xf1d30
	ldr r1, [r4, #88]	@ 000f1d30 a16d
.org 0xf1d32
	bl 0x8534	@ 000f1d32 16f7fffb
.org 0xf1d36
	str r0, [r4, #88]	@ 000f1d36 a065
.org 0xf1d38
	ldrb r0, [r4, #17]	@ 000f1d38 607c
.org 0xf1d3a
	adds r0, #1	@ 000f1d3a 0130
.org 0xf1d3c
	strb r0, [r4, #17]	@ 000f1d3c 6074
.org 0xf1d3e
	adds r0, r4, #0	@ 000f1d3e 201c
.org 0xf1d40
	bl 0x1cff0	@ 000f1d40 2bf756f9
.org 0xf1d44
	ldr r0, [r4, #24]	@ 000f1d44 a069
.org 0xf1d46
	ldrb r1, [r0, #9]	@ 000f1d46 417a
.org 0xf1d48
	movs r0, #1	@ 000f1d48 0120
.org 0xf1d4a
	ands r0, r1	@ 000f1d4a 0840
.org 0xf1d4c
	cmp r0, #0	@ 000f1d4c 0028
.org 0xf1d4e
	beq.n 0xf1d7c	@ 000f1d4e 15d0
.org 0xf1d50
	movs r0, #30	@ 000f1d50 1e20
.org 0xf1d52
	strb r0, [r4, #18]	@ 000f1d52 a074
.org 0xf1d54
	b.n 0xf1d76	@ 000f1d54 0fe0
.org 0xf1d56
	.byte 0x00	@ 000f1d56 data
.org 0xf1d57
	.byte 0x00	@ 000f1d57 data
.org 0xf1d58
	.byte 0x40,0xe2,0x02,0x02	@ 000f1d58 data
.org 0xf1d5c
	.byte 0xbf,0x02,0x00,0x00	@ 000f1d5c data
.org 0xf1d60
	.byte 0x40,0xdc,0x02,0x02	@ 000f1d60 data
.org 0xf1d64
	movs r1, #160	@ 000f1d64 a021
.org 0xf1d66
	lsls r1, r1, #8	@ 000f1d66 0902
.org 0xf1d68
	adds r0, r4, #0	@ 000f1d68 201c
.org 0xf1d6a
	movs r2, #1	@ 000f1d6a 0122
.org 0xf1d6c
	bl 0xed7f8	@ 000f1d6c fbf744fd
.org 0xf1d70
	lsls r0, r0, #16	@ 000f1d70 0004
.org 0xf1d72
	cmp r0, #0	@ 000f1d72 0028
