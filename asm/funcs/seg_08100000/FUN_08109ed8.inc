@ FUN_08109ed8  entry 0x08109ed8  size 236
.thumb
.org 0x109ed8
FUN_08109ed8:
	push {r4, r5, r6, r7, lr}	@ 00109ed8 f0b5
.org 0x109eda
	mov r7, r8	@ 00109eda 4746
.org 0x109edc
	push {r7}	@ 00109edc 80b4
.org 0x109ede
	adds r6, r0, #0	@ 00109ede 061c
.org 0x109ee0
	adds r0, #180	@ 00109ee0 b430
.org 0x109ee2
	ldr r0, [r0, #0]	@ 00109ee2 0068
.org 0x109ee4
	mov r8, r0	@ 00109ee4 8046
.org 0x109ee6
	adds r0, r6, #0	@ 00109ee6 301c
.org 0x109ee8
	adds r0, #184	@ 00109ee8 b830
.org 0x109eea
	ldr r7, [r0, #0]	@ 00109eea 0768
.org 0x109eec
	adds r0, r6, #0	@ 00109eec 301c
.org 0x109eee
	bl 0x1cc9c	@ 00109eee 12f7d5fe
.org 0x109ef2
	adds r0, r6, #0	@ 00109ef2 301c
.org 0x109ef4
	bl 0x1ceec	@ 00109ef4 12f7faff
.org 0x109ef8
	ldrb r0, [r6, #10]	@ 00109ef8 b07a
.org 0x109efa
	movs r4, #1	@ 00109efa 0124
.org 0x109efc
	movs r5, #0	@ 00109efc 0025
.org 0x109efe
	orrs r0, r4	@ 00109efe 2043
.org 0x109f00
	movs r1, #2	@ 00109f00 0221
.org 0x109f02
	orrs r0, r1	@ 00109f02 0843
.org 0x109f04
	strb r0, [r6, #10]	@ 00109f04 b072
.org 0x109f06
	adds r1, r6, #0	@ 00109f06 311c
.org 0x109f08
	adds r1, #34	@ 00109f08 2231
.org 0x109f0a
	movs r0, #1	@ 00109f0a 0120
.org 0x109f0c
	strb r0, [r1, #0]	@ 00109f0c 0870
.org 0x109f0e
	ldrb r1, [r6, #11]	@ 00109f0e f17a
.org 0x109f10
	movs r0, #251	@ 00109f10 fb20
.org 0x109f12
	ands r0, r1	@ 00109f12 0840
.org 0x109f14
	strb r0, [r6, #11]	@ 00109f14 f072
.org 0x109f16
	adds r0, r6, #0	@ 00109f16 301c
.org 0x109f18
	movs r1, #1	@ 00109f18 0121
.org 0x109f1a
	bl 0x1cf00	@ 00109f1a 12f7f1ff
.org 0x109f1e
	ldrb r0, [r7, #10]	@ 00109f1e b87a
.org 0x109f20
	lsrs r0, r0, #4	@ 00109f20 0009
.org 0x109f22
	ands r0, r4	@ 00109f22 2040
.org 0x109f24
	adds r1, r6, #0	@ 00109f24 311c
.org 0x109f26
	adds r1, #76	@ 00109f26 4c31
.org 0x109f28
	strb r0, [r1, #0]	@ 00109f28 0870
.org 0x109f2a
	ldrb r1, [r7, #10]	@ 00109f2a b97a
.org 0x109f2c
	lsrs r1, r1, #4	@ 00109f2c 0909
.org 0x109f2e
	ands r1, r4	@ 00109f2e 2140
.org 0x109f30
	adds r4, r6, #0	@ 00109f30 341c
.org 0x109f32
	adds r4, #74	@ 00109f32 4a34
.org 0x109f34
	lsls r3, r1, #4	@ 00109f34 0b01
.org 0x109f36
	ldrb r2, [r4, #0]	@ 00109f36 2278
.org 0x109f38
	movs r0, #17	@ 00109f38 1120
.org 0x109f3a
	negs r0, r0	@ 00109f3a 4042
.org 0x109f3c
	ands r0, r2	@ 00109f3c 1040
.org 0x109f3e
	orrs r0, r3	@ 00109f3e 1843
.org 0x109f40
	strb r0, [r4, #0]	@ 00109f40 2070
.org 0x109f42
	cmp r1, #0	@ 00109f42 0029
.org 0x109f44
	beq.n 0x109f4e	@ 00109f44 03d0
.org 0x109f46
	ldrb r0, [r6, #10]	@ 00109f46 b07a
.org 0x109f48
	movs r1, #16	@ 00109f48 1021
.org 0x109f4a
	orrs r0, r1	@ 00109f4a 0843
.org 0x109f4c
	b.n 0x109f54	@ 00109f4c 02e0
.org 0x109f4e
	ldrb r1, [r6, #10]	@ 00109f4e b17a
.org 0x109f50
	movs r0, #239	@ 00109f50 ef20
.org 0x109f52
	ands r0, r1	@ 00109f52 0840
.org 0x109f54
	strb r0, [r6, #10]	@ 00109f54 b072
.org 0x109f56
	adds r0, r6, #0	@ 00109f56 301c
.org 0x109f58
	bl 0x1cff0	@ 00109f58 13f74af8
.org 0x109f5c
	mov r0, r8	@ 00109f5c 4046
.org 0x109f5e
	adds r0, #245	@ 00109f5e f530
.org 0x109f60
	ldrb r5, [r0, #0]	@ 00109f60 0578
.org 0x109f62
	cmp r5, #2	@ 00109f62 022d
.org 0x109f64
	bne.n 0x109f7c	@ 00109f64 0ad1
.org 0x109f66
	ldrb r1, [r6, #10]	@ 00109f66 b17a
.org 0x109f68
	movs r0, #4	@ 00109f68 0420
.org 0x109f6a
	movs r5, #0	@ 00109f6a 0025
.org 0x109f6c
	orrs r0, r1	@ 00109f6c 0843
.org 0x109f6e
	strb r0, [r6, #10]	@ 00109f6e b072
.org 0x109f70
	adds r4, r6, #0	@ 00109f70 341c
.org 0x109f72
	adds r4, #116	@ 00109f72 7434
.org 0x109f74
	ldr r1, [pc, #0]	@ 00109f74 0049
.org 0x109f76
	b.n 0x109fa4	@ 00109f76 15e0
.org 0x109f78
	.byte 0xe0,0xca,0x86,0x08	@ 00109f78 data
.org 0x109f7c
	cmp r5, #0	@ 00109f7c 002d
.org 0x109f7e
	bne.n 0x109f94	@ 00109f7e 09d1
.org 0x109f80
	ldrb r1, [r6, #10]	@ 00109f80 b17a
.org 0x109f82
	movs r0, #4	@ 00109f82 0420
.org 0x109f84
	orrs r0, r1	@ 00109f84 0843
.org 0x109f86
	strb r0, [r6, #10]	@ 00109f86 b072
.org 0x109f88
	adds r4, r6, #0	@ 00109f88 341c
.org 0x109f8a
	adds r4, #116	@ 00109f8a 7434
.org 0x109f8c
	ldr r1, [pc, #0]	@ 00109f8c 0049
.org 0x109f8e
	b.n 0x109fa4	@ 00109f8e 09e0
.org 0x109f90
	.byte 0xc8,0xca,0x86,0x08	@ 00109f90 data
.org 0x109f94
	ldrb r1, [r6, #10]	@ 00109f94 b17a
.org 0x109f96
	movs r0, #4	@ 00109f96 0420
.org 0x109f98
	movs r5, #0	@ 00109f98 0025
.org 0x109f9a
	orrs r0, r1	@ 00109f9a 0843
.org 0x109f9c
	strb r0, [r6, #10]	@ 00109f9c b072
.org 0x109f9e
	adds r4, r6, #0	@ 00109f9e 341c
.org 0x109fa0
	adds r4, #116	@ 00109fa0 7434
.org 0x109fa2
	ldr r1, [pc, #40]	@ 00109fa2 0a49
.org 0x109fa4
	adds r2, r6, #0	@ 00109fa4 321c
.org 0x109fa6
	adds r2, #84	@ 00109fa6 5432
.org 0x109fa8
	adds r0, r4, #0	@ 00109fa8 201c
.org 0x109faa
	movs r3, #1	@ 00109faa 0123
.org 0x109fac
	bl 0x5760	@ 00109fac fbf6d8fb
.org 0x109fb0
	str r6, [r4, #44]	@ 00109fb0 e662
.org 0x109fb2
	str r5, [r4, #36]	@ 00109fb2 6562
.org 0x109fb4
	ldr r0, [r7, #84]	@ 00109fb4 786d
.org 0x109fb6
	ldr r1, [r7, #88]	@ 00109fb6 b96d
.org 0x109fb8
	str r0, [r6, #84]	@ 00109fb8 7065
.org 0x109fba
	str r1, [r6, #88]	@ 00109fba b165
.org 0x109fbc
	movs r0, #39	@ 00109fbc 2720
.org 0x109fbe
	bl 0x2b10	@ 00109fbe f8f6a7fd
.org 0x109fc2
	pop {r3}	@ 00109fc2 08bc
