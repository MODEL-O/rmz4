@ FUN_08102c74  entry 0x08102c74  size 208
.thumb
.org 0x102c74
FUN_08102c74:
	push {r4, lr}	@ 00102c74 10b5
.org 0x102c76
	movs r4, #1	@ 00102c76 0124
.org 0x102c78
	movs r0, #92	@ 00102c78 5c20
.org 0x102c7a
	bl 0x6984	@ 00102c7a 03f783fe
.org 0x102c7e
	ldr r2, [pc, #44]	@ 00102c7e 0b4a
.org 0x102c80
	ldrb r1, [r2, #7]	@ 00102c80 d179
.org 0x102c82
	adds r0, r4, #0	@ 00102c82 201c
.org 0x102c84
	ands r0, r1	@ 00102c84 0840
.org 0x102c86
	cmp r0, #0	@ 00102c86 0028
.org 0x102c88
	beq.n 0x102cb0	@ 00102c88 12d0
.org 0x102c8a
	movs r4, #17	@ 00102c8a 1124
.org 0x102c8c
	movs r0, #2	@ 00102c8c 0220
.org 0x102c8e
	ands r0, r1	@ 00102c8e 0840
.org 0x102c90
	cmp r0, #0	@ 00102c90 0028
.org 0x102c92
	beq.n 0x102d02	@ 00102c92 36d0
.org 0x102c94
	movs r4, #19	@ 00102c94 1324
.org 0x102c96
	movs r0, #4	@ 00102c96 0420
.org 0x102c98
	ands r0, r1	@ 00102c98 0840
.org 0x102c9a
	cmp r0, #0	@ 00102c9a 0028
.org 0x102c9c
	beq.n 0x102d02	@ 00102c9c 31d0
.org 0x102c9e
	movs r4, #21	@ 00102c9e 1524
.org 0x102ca0
	movs r0, #8	@ 00102ca0 0820
.org 0x102ca2
	ands r0, r1	@ 00102ca2 0840
.org 0x102ca4
	cmp r0, #0	@ 00102ca4 0028
.org 0x102ca6
	beq.n 0x102d02	@ 00102ca6 2cd0
.org 0x102ca8
	movs r4, #23	@ 00102ca8 1724
.org 0x102caa
	b.n 0x102d02	@ 00102caa 2ae0
.org 0x102cac
	.byte 0xb0,0xe8,0x02,0x02	@ 00102cac data
.org 0x102cb0
	ldrb r1, [r2, #6]	@ 00102cb0 9179
.org 0x102cb2
	movs r0, #16	@ 00102cb2 1020
.org 0x102cb4
	ands r0, r1	@ 00102cb4 0840
.org 0x102cb6
	cmp r0, #0	@ 00102cb6 0028
.org 0x102cb8
	beq.n 0x102cdc	@ 00102cb8 10d0
.org 0x102cba
	movs r4, #9	@ 00102cba 0924
.org 0x102cbc
	movs r0, #32	@ 00102cbc 2020
.org 0x102cbe
	ands r0, r1	@ 00102cbe 0840
.org 0x102cc0
	cmp r0, #0	@ 00102cc0 0028
.org 0x102cc2
	beq.n 0x102d02	@ 00102cc2 1ed0
.org 0x102cc4
	movs r4, #11	@ 00102cc4 0b24
.org 0x102cc6
	movs r0, #64	@ 00102cc6 4020
.org 0x102cc8
	ands r0, r1	@ 00102cc8 0840
.org 0x102cca
	cmp r0, #0	@ 00102cca 0028
.org 0x102ccc
	beq.n 0x102d02	@ 00102ccc 19d0
.org 0x102cce
	movs r4, #13	@ 00102cce 0d24
.org 0x102cd0
	movs r0, #128	@ 00102cd0 8020
.org 0x102cd2
	ands r0, r1	@ 00102cd2 0840
.org 0x102cd4
	cmp r0, #0	@ 00102cd4 0028
.org 0x102cd6
	beq.n 0x102d02	@ 00102cd6 14d0
.org 0x102cd8
	movs r4, #15	@ 00102cd8 0f24
.org 0x102cda
	b.n 0x102d02	@ 00102cda 12e0
.org 0x102cdc
	adds r0, r4, #0	@ 00102cdc 201c
.org 0x102cde
	ands r0, r1	@ 00102cde 0840
.org 0x102ce0
	cmp r0, #0	@ 00102ce0 0028
.org 0x102ce2
	beq.n 0x102d02	@ 00102ce2 0ed0
.org 0x102ce4
	movs r0, #2	@ 00102ce4 0220
.org 0x102ce6
	ands r0, r1	@ 00102ce6 0840
.org 0x102ce8
	cmp r0, #0	@ 00102ce8 0028
.org 0x102cea
	beq.n 0x102d02	@ 00102cea 0ad0
.org 0x102cec
	movs r4, #3	@ 00102cec 0324
.org 0x102cee
	movs r0, #4	@ 00102cee 0420
.org 0x102cf0
	ands r0, r1	@ 00102cf0 0840
.org 0x102cf2
	cmp r0, #0	@ 00102cf2 0028
.org 0x102cf4
	beq.n 0x102d02	@ 00102cf4 05d0
.org 0x102cf6
	movs r4, #5	@ 00102cf6 0524
.org 0x102cf8
	movs r0, #8	@ 00102cf8 0820
.org 0x102cfa
	ands r0, r1	@ 00102cfa 0840
.org 0x102cfc
	cmp r0, #0	@ 00102cfc 0028
.org 0x102cfe
	beq.n 0x102d02	@ 00102cfe 00d0
.org 0x102d00
	movs r4, #7	@ 00102d00 0724
.org 0x102d02
	ldr r0, [pc, #20]	@ 00102d02 0548
.org 0x102d04
	ldrb r1, [r0, #28]	@ 00102d04 017f
.org 0x102d06
	adds r3, r0, #0	@ 00102d06 031c
.org 0x102d08
	cmp r1, r4	@ 00102d08 a142
.org 0x102d0a
	bne.n 0x102d20	@ 00102d0a 09d1
.org 0x102d0c
	adds r0, r4, #1	@ 00102d0c 601c
.org 0x102d0e
	lsls r0, r0, #24	@ 00102d0e 0006
.org 0x102d10
	lsrs r4, r0, #24	@ 00102d10 040e
.org 0x102d12
	ldr r2, [pc, #8]	@ 00102d12 024a
.org 0x102d14
	b.n 0x102d52	@ 00102d14 1de0
.org 0x102d16
	.byte 0x00	@ 00102d16 data
.org 0x102d17
	.byte 0x00	@ 00102d17 data
.org 0x102d18
	.byte 0xb0,0xe8,0x02,0x02	@ 00102d18 data
.org 0x102d1c
	.byte 0x80,0xbc,0x86,0x08	@ 00102d1c data
.org 0x102d20
	ldr r2, [pc, #32]	@ 00102d20 084a
.org 0x102d22
	lsls r0, r4, #1	@ 00102d22 6000
.org 0x102d24
	adds r0, r0, r2	@ 00102d24 8018
.org 0x102d26
	ldrh r1, [r0, #0]	@ 00102d26 0188
.org 0x102d28
	ldr r0, [pc, #28]	@ 00102d28 0748
.org 0x102d2a
	cmp r1, r0	@ 00102d2a 8142
.org 0x102d2c
	bne.n 0x102d50	@ 00102d2c 10d1
.org 0x102d2e
	ldr r0, [pc, #28]	@ 00102d2e 0748
.org 0x102d30
	ldr r0, [r0, #0]	@ 00102d30 0068
.org 0x102d32
	ldrb r1, [r0, #5]	@ 00102d32 4179
.org 0x102d34
	movs r0, #1	@ 00102d34 0120
.org 0x102d36
	ands r0, r1	@ 00102d36 0840
.org 0x102d38
	cmp r0, #0	@ 00102d38 0028
.org 0x102d3a
	beq.n 0x102d50	@ 00102d3a 09d0
.org 0x102d3c
	adds r0, r4, #1	@ 00102d3c 601c
.org 0x102d3e
	lsls r0, r0, #24	@ 00102d3e 0006
.org 0x102d40
	lsrs r4, r0, #24	@ 00102d40 040e
.org 0x102d42
	b.n 0x102d52	@ 00102d42 06e0
