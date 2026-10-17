@ FUN_081092f0  entry 0x081092f0  size 36
.thumb
.org 0x1092f0
FUN_081092f0:
	push {lr}	@ 001092f0 00b5
.org 0x1092f2
	ldr r1, [pc, #28]	@ 001092f2 0749
.org 0x1092f4
	adds r0, r0, r1	@ 001092f4 4018
.org 0x1092f6
	ldrh r1, [r0, #0]	@ 001092f6 0188
.org 0x1092f8
	movs r0, #128	@ 001092f8 8020
.org 0x1092fa
	lsls r0, r0, #8	@ 001092fa 0002
.org 0x1092fc
	ands r0, r1	@ 001092fc 0840
.org 0x1092fe
	cmp r0, #0	@ 001092fe 0028
.org 0x109300
	bne.n 0x109318	@ 00109300 0ad1
.org 0x109302
	ldr r0, [pc, #16]	@ 00109302 0448
.org 0x109304
	ldrh r0, [r0, #0]	@ 00109304 0088
.org 0x109306
	cmp r0, #17	@ 00109306 1128
.org 0x109308
	beq.n 0x109318	@ 00109308 06d0
.org 0x10930a
	movs r0, #1	@ 0010930a 0120
.org 0x10930c
	b.n 0x10931a	@ 0010930c 05e0
.org 0x10930e
	.byte 0x00	@ 0010930e data
.org 0x10930f
	.byte 0x00	@ 0010930f data
.org 0x109310
	.byte 0x52,0x02,0x00,0x00	@ 00109310 data
