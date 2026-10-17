@ FUN_0810c9b4  entry 0x0810c9b4  size 70
.thumb
.org 0x10c9b4
FUN_0810c9b4:
	push {r4, r5, lr}	@ 0010c9b4 30b5
.org 0x10c9b6
	adds r4, r0, #0	@ 0010c9b6 041c
.org 0x10c9b8
	ldr r5, [r4, #40]	@ 0010c9b8 a56a
.org 0x10c9ba
	ldrb r0, [r4, #10]	@ 0010c9ba a07a
.org 0x10c9bc
	movs r1, #1	@ 0010c9bc 0121
.org 0x10c9be
	orrs r1, r0	@ 0010c9be 0143
.org 0x10c9c0
	strb r1, [r4, #10]	@ 0010c9c0 a172
.org 0x10c9c2
	adds r0, r4, #0	@ 0010c9c2 201c
.org 0x10c9c4
	bl 0x1cff0	@ 0010c9c4 10f714fb
.org 0x10c9c8
	ldrb r0, [r5, #1]	@ 0010c9c8 6878
.org 0x10c9ca
	cmp r0, #1	@ 0010c9ca 0128
.org 0x10c9cc
	bls.n 0x10c9f2	@ 0010c9cc 11d9
.org 0x10c9ce
	ldrb r0, [r5, #3]	@ 0010c9ce e878
.org 0x10c9d0
	cmp r0, #1	@ 0010c9d0 0128
.org 0x10c9d2
	bls.n 0x10c9f2	@ 0010c9d2 0ed9
.org 0x10c9d4
	ldrb r0, [r4, #17]	@ 0010c9d4 607c
.org 0x10c9d6
	cmp r0, #0	@ 0010c9d6 0028
.org 0x10c9d8
	bne.n 0x10c9e8	@ 0010c9d8 06d1
.org 0x10c9da
	ldr r1, [pc, #8]	@ 0010c9da 0249
.org 0x10c9dc
	adds r0, r5, r1	@ 0010c9dc 6818
.org 0x10c9de
	ldrb r0, [r0, #14]	@ 0010c9de 807b
.org 0x10c9e0
	b.n 0x10c9ee	@ 0010c9e0 05e0
.org 0x10c9e2
	.byte 0x00	@ 0010c9e2 data
.org 0x10c9e3
	.byte 0x00	@ 0010c9e3 data
.org 0x10c9e4
	.byte 0xcc,0x0d,0x00,0x00	@ 0010c9e4 data
.org 0x10c9e8
	ldr r1, [pc, #20]	@ 0010c9e8 0549
.org 0x10c9ea
	adds r0, r5, r1	@ 0010c9ea 6818
.org 0x10c9ec
	ldrb r0, [r0, #15]	@ 0010c9ec c07b
.org 0x10c9ee
	cmp r0, #0	@ 0010c9ee 0028
.org 0x10c9f0
	bne.n 0x10c9fa	@ 0010c9f0 03d1
.org 0x10c9f2
	ldrb r1, [r4, #10]	@ 0010c9f2 a17a
.org 0x10c9f4
	movs r0, #254	@ 0010c9f4 fe20
.org 0x10c9f6
	ands r0, r1	@ 0010c9f6 0840
.org 0x10c9f8
	strb r0, [r4, #10]	@ 0010c9f8 a072
