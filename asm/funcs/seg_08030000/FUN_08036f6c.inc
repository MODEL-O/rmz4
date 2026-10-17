@ FUN_08036f6c  entry 0x08036f6c  size 72
.thumb
.org 0x36f6c
FUN_08036f6c:
	push {r4, lr}	@ 00036f6c 10b5
.org 0x36f6e
	adds r4, r0, #0	@ 00036f6e 041c
.org 0x36f70
	adds r0, #180	@ 00036f70 b430
.org 0x36f72
	ldrb r0, [r0, #12]	@ 00036f72 007b
.org 0x36f74
	cmp r0, #0	@ 00036f74 0028
.org 0x36f76
	bne.n 0x36f88	@ 00036f76 07d1
.org 0x36f78
	ldr r0, [pc, #8]	@ 00036f78 0248
.org 0x36f7a
	adds r2, r4, r0	@ 00036f7a 2218
.org 0x36f7c
	ldrb r0, [r2, #0]	@ 00036f7c 1078
.org 0x36f7e
	movs r1, #16	@ 00036f7e 1021
.org 0x36f80
	b.n 0x36f90	@ 00036f80 06e0
.org 0x36f82
	.byte 0x00	@ 00036f82 data
.org 0x36f83
	.byte 0x00	@ 00036f83 data
.org 0x36f84
	.byte 0x53,0x01,0x00,0x00	@ 00036f84 data
.org 0x36f88
	ldr r1, [pc, #48]	@ 00036f88 0c49
.org 0x36f8a
	adds r2, r4, r1	@ 00036f8a 6218
.org 0x36f8c
	ldrb r0, [r2, #0]	@ 00036f8c 1078
.org 0x36f8e
	movs r1, #32	@ 00036f8e 2021
.org 0x36f90
	orrs r0, r1	@ 00036f90 0843
.org 0x36f92
	strb r0, [r2, #0]	@ 00036f92 1070
.org 0x36f94
	ldr r1, [pc, #40]	@ 00036f94 0a49
.org 0x36f96
	adds r0, r4, #0	@ 00036f96 201c
.org 0x36f98
	movs r2, #0	@ 00036f98 0022
.org 0x36f9a
	movs r3, #2	@ 00036f9a 0223
.org 0x36f9c
	bl 0x1cfc8	@ 00036f9c e6f714f8
.org 0x36fa0
	movs r1, #170	@ 00036fa0 aa21
.org 0x36fa2
	lsls r1, r1, #1	@ 00036fa2 4900
.org 0x36fa4
	adds r0, r4, r1	@ 00036fa4 6018
.org 0x36fa6
	ldrb r0, [r0, #0]	@ 00036fa6 0078
.org 0x36fa8
	cmp r0, #1	@ 00036fa8 0128
.org 0x36faa
	bne.n 0x36fb4	@ 00036faa 03d1
.org 0x36fac
	ldr r0, [pc, #20]	@ 00036fac 0548
.org 0x36fae
	adds r1, r4, r0	@ 00036fae 2118
.org 0x36fb0
	movs r0, #2	@ 00036fb0 0220
.org 0x36fb2
	strb r0, [r1, #0]	@ 00036fb2 0870
