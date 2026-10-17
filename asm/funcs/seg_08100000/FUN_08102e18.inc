@ FUN_08102e18  entry 0x08102e18  size 208
.thumb
.org 0x102e18
FUN_08102e18:
	push {r4, lr}	@ 00102e18 10b5
.org 0x102e1a
	movs r4, #1	@ 00102e1a 0124
.org 0x102e1c
	movs r0, #97	@ 00102e1c 6120
.org 0x102e1e
	bl 0x6984	@ 00102e1e 03f7b1fd
.org 0x102e22
	ldr r2, [pc, #44]	@ 00102e22 0b4a
.org 0x102e24
	ldrb r1, [r2, #7]	@ 00102e24 d179
.org 0x102e26
	adds r0, r4, #0	@ 00102e26 201c
.org 0x102e28
	ands r0, r1	@ 00102e28 0840
.org 0x102e2a
	cmp r0, #0	@ 00102e2a 0028
.org 0x102e2c
	beq.n 0x102e54	@ 00102e2c 12d0
.org 0x102e2e
	movs r4, #17	@ 00102e2e 1124
.org 0x102e30
	movs r0, #2	@ 00102e30 0220
.org 0x102e32
	ands r0, r1	@ 00102e32 0840
.org 0x102e34
	cmp r0, #0	@ 00102e34 0028
.org 0x102e36
	beq.n 0x102ea6	@ 00102e36 36d0
.org 0x102e38
	movs r4, #19	@ 00102e38 1324
.org 0x102e3a
	movs r0, #4	@ 00102e3a 0420
.org 0x102e3c
	ands r0, r1	@ 00102e3c 0840
.org 0x102e3e
	cmp r0, #0	@ 00102e3e 0028
.org 0x102e40
	beq.n 0x102ea6	@ 00102e40 31d0
.org 0x102e42
	movs r4, #21	@ 00102e42 1524
.org 0x102e44
	movs r0, #8	@ 00102e44 0820
.org 0x102e46
	ands r0, r1	@ 00102e46 0840
.org 0x102e48
	cmp r0, #0	@ 00102e48 0028
.org 0x102e4a
	beq.n 0x102ea6	@ 00102e4a 2cd0
.org 0x102e4c
	movs r4, #23	@ 00102e4c 1724
.org 0x102e4e
	b.n 0x102ea6	@ 00102e4e 2ae0
.org 0x102e50
	.byte 0xb0,0xe8,0x02,0x02	@ 00102e50 data
.org 0x102e54
	ldrb r1, [r2, #6]	@ 00102e54 9179
.org 0x102e56
	movs r0, #16	@ 00102e56 1020
.org 0x102e58
	ands r0, r1	@ 00102e58 0840
.org 0x102e5a
	cmp r0, #0	@ 00102e5a 0028
.org 0x102e5c
	beq.n 0x102e80	@ 00102e5c 10d0
.org 0x102e5e
	movs r4, #9	@ 00102e5e 0924
.org 0x102e60
	movs r0, #32	@ 00102e60 2020
.org 0x102e62
	ands r0, r1	@ 00102e62 0840
.org 0x102e64
	cmp r0, #0	@ 00102e64 0028
.org 0x102e66
	beq.n 0x102ea6	@ 00102e66 1ed0
.org 0x102e68
	movs r4, #11	@ 00102e68 0b24
.org 0x102e6a
	movs r0, #64	@ 00102e6a 4020
.org 0x102e6c
	ands r0, r1	@ 00102e6c 0840
.org 0x102e6e
	cmp r0, #0	@ 00102e6e 0028
.org 0x102e70
	beq.n 0x102ea6	@ 00102e70 19d0
.org 0x102e72
	movs r4, #13	@ 00102e72 0d24
.org 0x102e74
	movs r0, #128	@ 00102e74 8020
.org 0x102e76
	ands r0, r1	@ 00102e76 0840
.org 0x102e78
	cmp r0, #0	@ 00102e78 0028
.org 0x102e7a
	beq.n 0x102ea6	@ 00102e7a 14d0
.org 0x102e7c
	movs r4, #15	@ 00102e7c 0f24
.org 0x102e7e
	b.n 0x102ea6	@ 00102e7e 12e0
.org 0x102e80
	adds r0, r4, #0	@ 00102e80 201c
.org 0x102e82
	ands r0, r1	@ 00102e82 0840
.org 0x102e84
	cmp r0, #0	@ 00102e84 0028
.org 0x102e86
	beq.n 0x102ea6	@ 00102e86 0ed0
.org 0x102e88
	movs r0, #2	@ 00102e88 0220
.org 0x102e8a
	ands r0, r1	@ 00102e8a 0840
.org 0x102e8c
	cmp r0, #0	@ 00102e8c 0028
.org 0x102e8e
	beq.n 0x102ea6	@ 00102e8e 0ad0
.org 0x102e90
	movs r4, #3	@ 00102e90 0324
.org 0x102e92
	movs r0, #4	@ 00102e92 0420
.org 0x102e94
	ands r0, r1	@ 00102e94 0840
.org 0x102e96
	cmp r0, #0	@ 00102e96 0028
.org 0x102e98
	beq.n 0x102ea6	@ 00102e98 05d0
.org 0x102e9a
	movs r4, #5	@ 00102e9a 0524
.org 0x102e9c
	movs r0, #8	@ 00102e9c 0820
.org 0x102e9e
	ands r0, r1	@ 00102e9e 0840
.org 0x102ea0
	cmp r0, #0	@ 00102ea0 0028
.org 0x102ea2
	beq.n 0x102ea6	@ 00102ea2 00d0
.org 0x102ea4
	movs r4, #7	@ 00102ea4 0724
.org 0x102ea6
	ldr r0, [pc, #20]	@ 00102ea6 0548
.org 0x102ea8
	ldrb r1, [r0, #30]	@ 00102ea8 817f
.org 0x102eaa
	adds r3, r0, #0	@ 00102eaa 031c
.org 0x102eac
	cmp r1, r4	@ 00102eac a142
.org 0x102eae
	bne.n 0x102ec4	@ 00102eae 09d1
.org 0x102eb0
	adds r0, r4, #1	@ 00102eb0 601c
.org 0x102eb2
	lsls r0, r0, #24	@ 00102eb2 0006
.org 0x102eb4
	lsrs r4, r0, #24	@ 00102eb4 040e
.org 0x102eb6
	ldr r2, [pc, #8]	@ 00102eb6 024a
.org 0x102eb8
	b.n 0x102ef6	@ 00102eb8 1de0
.org 0x102eba
	.byte 0x00	@ 00102eba data
.org 0x102ebb
	.byte 0x00	@ 00102ebb data
.org 0x102ebc
	.byte 0xb0,0xe8,0x02,0x02	@ 00102ebc data
.org 0x102ec0
	.byte 0xb2,0xbc,0x86,0x08	@ 00102ec0 data
.org 0x102ec4
	ldr r2, [pc, #32]	@ 00102ec4 084a
.org 0x102ec6
	lsls r0, r4, #1	@ 00102ec6 6000
.org 0x102ec8
	adds r0, r0, r2	@ 00102ec8 8018
.org 0x102eca
	ldrh r1, [r0, #0]	@ 00102eca 0188
.org 0x102ecc
	ldr r0, [pc, #28]	@ 00102ecc 0748
.org 0x102ece
	cmp r1, r0	@ 00102ece 8142
.org 0x102ed0
	bne.n 0x102ef4	@ 00102ed0 10d1
.org 0x102ed2
	ldr r0, [pc, #28]	@ 00102ed2 0748
.org 0x102ed4
	ldr r0, [r0, #0]	@ 00102ed4 0068
.org 0x102ed6
	ldrb r1, [r0, #6]	@ 00102ed6 8179
.org 0x102ed8
	movs r0, #1	@ 00102ed8 0120
.org 0x102eda
	ands r0, r1	@ 00102eda 0840
.org 0x102edc
	cmp r0, #0	@ 00102edc 0028
.org 0x102ede
	beq.n 0x102ef4	@ 00102ede 09d0
.org 0x102ee0
	adds r0, r4, #1	@ 00102ee0 601c
.org 0x102ee2
	lsls r0, r0, #24	@ 00102ee2 0006
.org 0x102ee4
	lsrs r4, r0, #24	@ 00102ee4 040e
.org 0x102ee6
	b.n 0x102ef6	@ 00102ee6 06e0
