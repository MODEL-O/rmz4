@ FUN_080293b8  entry 0x080293b8  size 60
.thumb
.org 0x293b8
FUN_080293b8:
	push {r4, r5, lr}	@ 000293b8 30b5
.org 0x293ba
	adds r4, r0, #0	@ 000293ba 041c
.org 0x293bc
	ldr r5, [r4, #16]	@ 000293bc 2569
.org 0x293be
	ldr r0, [r4, #12]	@ 000293be e068
.org 0x293c0
	ldrb r0, [r0, #1]	@ 000293c0 4078
.org 0x293c2
	cmp r0, #0	@ 000293c2 0028
.org 0x293c4
	bne.n 0x293d4	@ 000293c4 06d1
.org 0x293c6
	ldr r0, [pc, #8]	@ 000293c6 0248
.org 0x293c8
	bl 0x29ba8	@ 000293c8 00f0eefb
.org 0x293cc
	b.n 0x293f8	@ 000293cc 14e0
.org 0x293ce
	.byte 0x00	@ 000293ce data
.org 0x293cf
	.byte 0x00	@ 000293cf data
.org 0x293d0
	.byte 0xdc,0x03,0x03,0x02	@ 000293d0 data
.org 0x293d4
	ldr r0, [pc, #28]	@ 000293d4 0748
.org 0x293d6
	bl 0x29be0	@ 000293d6 00f003fc
.org 0x293da
	cmp r0, #1	@ 000293da 0128
.org 0x293dc
	bne.n 0x293f8	@ 000293dc 0cd1
.org 0x293de
	ldr r0, [r4, #12]	@ 000293de e068
.org 0x293e0
	subs r0, #8	@ 000293e0 0838
.org 0x293e2
	str r0, [r4, #12]	@ 000293e2 e060
.org 0x293e4
	cmp r5, #0	@ 000293e4 002d
.org 0x293e6
	beq.n 0x293ee	@ 000293e6 02d0
.org 0x293e8
	adds r0, r5, #0	@ 000293e8 281c
.org 0x293ea
	bl 0x2b7bc	@ 000293ea 02f0e7f9
.org 0x293ee
	movs r0, #1	@ 000293ee 0120
.org 0x293f0
	b.n 0x293fa	@ 000293f0 03e0
.org 0x293f2
	.byte 0x00	@ 000293f2 data
.org 0x293f3
	.byte 0x00	@ 000293f3 data
