@ FUN_08101f70  entry 0x08101f70  size 176
.thumb
.org 0x101f70
FUN_08101f70:
	push {r4, r5, lr}	@ 00101f70 30b5
.org 0x101f72
	adds r4, r0, #0	@ 00101f72 041c
.org 0x101f74
	ldr r1, [r4, #40]	@ 00101f74 a16a
.org 0x101f76
	ldrb r0, [r1, #12]	@ 00101f76 087b
.org 0x101f78
	cmp r0, #1	@ 00101f78 0128
.org 0x101f7a
	bls.n 0x101fb8	@ 00101f7a 1dd9
.org 0x101f7c
	ldrb r1, [r4, #10]	@ 00101f7c a17a
.org 0x101f7e
	movs r0, #254	@ 00101f7e fe20
.org 0x101f80
	ands r0, r1	@ 00101f80 0840
.org 0x101f82
	movs r2, #0	@ 00101f82 0022
.org 0x101f84
	movs r1, #253	@ 00101f84 fd21
.org 0x101f86
	ands r0, r1	@ 00101f86 0840
.org 0x101f88
	strb r0, [r4, #10]	@ 00101f88 a072
.org 0x101f8a
	adds r0, r4, #0	@ 00101f8a 201c
.org 0x101f8c
	adds r0, #140	@ 00101f8c 8c30
.org 0x101f8e
	str r2, [r0, #0]	@ 00101f8e 0260
.org 0x101f90
	adds r0, #4	@ 00101f90 0430
.org 0x101f92
	str r2, [r0, #0]	@ 00101f92 0260
.org 0x101f94
	adds r0, #4	@ 00101f94 0430
.org 0x101f96
	strb r2, [r0, #0]	@ 00101f96 0270
.org 0x101f98
	ldrb r1, [r4, #10]	@ 00101f98 a17a
.org 0x101f9a
	movs r0, #251	@ 00101f9a fb20
.org 0x101f9c
	ands r0, r1	@ 00101f9c 0840
.org 0x101f9e
	strb r0, [r4, #10]	@ 00101f9e a072
.org 0x101fa0
	ldr r1, [pc, #16]	@ 00101fa0 0449
.org 0x101fa2
	ldrb r0, [r4, #9]	@ 00101fa2 607a
.org 0x101fa4
	lsls r0, r0, #2	@ 00101fa4 8000
.org 0x101fa6
	adds r0, r0, r1	@ 00101fa6 4018
.org 0x101fa8
	movs r1, #3	@ 00101fa8 0321
.org 0x101faa
	str r1, [r4, #12]	@ 00101faa e160
.org 0x101fac
	ldr r0, [r0, #0]	@ 00101fac 0068
.org 0x101fae
	ldr r0, [r0, #12]	@ 00101fae c068
.org 0x101fb0
	str r0, [r4, #20]	@ 00101fb0 6061
.org 0x101fb2
	b.n 0x102028	@ 00101fb2 39e0
.org 0x101fb4
	.byte 0xfc,0x92,0x86,0x08	@ 00101fb4 data
.org 0x101fb8
	ldrb r0, [r4, #17]	@ 00101fb8 607c
.org 0x101fba
	adds r2, r0, #0	@ 00101fba 021c
.org 0x101fbc
	adds r5, r0, #0	@ 00101fbc 051c
.org 0x101fbe
	adds r3, r1, #0	@ 00101fbe 0b1c
.org 0x101fc0
	adds r3, #180	@ 00101fc0 b433
.org 0x101fc2
	cmp r2, #0	@ 00101fc2 002a
.org 0x101fc4
	beq.n 0x101fec	@ 00101fc4 12d0
.org 0x101fc6
	cmp r2, #1	@ 00101fc6 012a
.org 0x101fc8
	bne.n 0x101fd4	@ 00101fc8 04d1
.org 0x101fca
	ldr r1, [r3, #0]	@ 00101fca 1968
.org 0x101fcc
	ldr r0, [pc, #0]	@ 00101fcc 0048
.org 0x101fce
	b.n 0x101fd8	@ 00101fce 03e0
.org 0x101fd0
	.byte 0x57,0x02,0x00,0x00	@ 00101fd0 data
.org 0x101fd4
	ldr r1, [r3, #0]	@ 00101fd4 1968
.org 0x101fd6
	ldr r0, [pc, #16]	@ 00101fd6 0448
.org 0x101fd8
	cmp r1, r0	@ 00101fd8 8142
.org 0x101fda
	bhi.n 0x101fec	@ 00101fda 07d8
.org 0x101fdc
	ldrb r1, [r4, #10]	@ 00101fdc a17a
.org 0x101fde
	movs r0, #254	@ 00101fde fe20
.org 0x101fe0
	ands r0, r1	@ 00101fe0 0840
.org 0x101fe2
	strb r0, [r4, #10]	@ 00101fe2 a072
.org 0x101fe4
	b.n 0x102028	@ 00101fe4 20e0
.org 0x101fe6
	.byte 0x00	@ 00101fe6 data
.org 0x101fe7
	.byte 0x00	@ 00101fe7 data
.org 0x101fe8
	.byte 0x6f,0x17,0x00,0x00	@ 00101fe8 data
.org 0x101fec
	ldrb r0, [r4, #10]	@ 00101fec a07a
.org 0x101fee
	movs r1, #1	@ 00101fee 0121
.org 0x101ff0
	orrs r1, r0	@ 00101ff0 0143
.org 0x101ff2
	strb r1, [r4, #10]	@ 00101ff2 a172
.org 0x101ff4
	lsls r0, r5, #24	@ 00101ff4 2806
.org 0x101ff6
	lsrs r0, r0, #24	@ 00101ff6 000e
.org 0x101ff8
	cmp r0, #0	@ 00101ff8 0028
.org 0x101ffa
	bne.n 0x102002	@ 00101ffa 02d1
.org 0x101ffc
	ldr r0, [r3, #0]	@ 00101ffc 1868
.org 0x101ffe
	movs r1, #60	@ 00101ffe 3c21
.org 0x102000
	b.n 0x102012	@ 00102000 07e0
.org 0x102002
	cmp r0, #1	@ 00102002 0128
.org 0x102004
	bne.n 0x10200e	@ 00102004 03d1
.org 0x102006
	ldr r0, [r3, #0]	@ 00102006 1868
.org 0x102008
	movs r1, #150	@ 00102008 9621
.org 0x10200a
	lsls r1, r1, #2	@ 0010200a 8900
.org 0x10200c
	b.n 0x102012	@ 0010200c 01e0
.org 0x10200e
	ldr r0, [r3, #0]	@ 0010200e 1868
.org 0x102010
	ldr r1, [pc, #28]	@ 00102010 0749
.org 0x102012
	bl 0x129120	@ 00102012 27f085f8
.org 0x102016
	movs r1, #10	@ 00102016 0a21
.org 0x102018
	bl 0x129198	@ 00102018 27f0bef8
.org 0x10201c
	movs r2, #206	@ 0010201c ce22
.org 0x10201e
	lsls r2, r2, #7	@ 0010201e d201
