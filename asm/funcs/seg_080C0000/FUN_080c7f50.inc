@ FUN_080c7f50  entry 0x080c7f50  size 148
.thumb
.org 0xc7f50
FUN_080c7f50:
	push {r4, r5, r6, lr}	@ 000c7f50 70b5
.org 0xc7f52
	adds r6, r0, #0	@ 000c7f52 061c
.org 0xc7f54
	ldr r0, [r6, #40]	@ 000c7f54 b06a
.org 0xc7f56
	ldrb r4, [r0, #10]	@ 000c7f56 847a
.org 0xc7f58
	lsrs r4, r4, #4	@ 000c7f58 2409
.org 0xc7f5a
	movs r2, #1	@ 000c7f5a 0122
.org 0xc7f5c
	ands r4, r2	@ 000c7f5c 1440
.org 0xc7f5e
	ldr r1, [pc, #48]	@ 000c7f5e 0c49
.org 0xc7f60
	ldrb r0, [r6, #9]	@ 000c7f60 707a
.org 0xc7f62
	lsls r0, r0, #2	@ 000c7f62 8000
.org 0xc7f64
	adds r0, r0, r1	@ 000c7f64 4018
.org 0xc7f66
	str r2, [r6, #12]	@ 000c7f66 f260
.org 0xc7f68
	ldr r0, [r0, #0]	@ 000c7f68 0068
.org 0xc7f6a
	ldr r0, [r0, #4]	@ 000c7f6a 4068
.org 0xc7f6c
	str r0, [r6, #20]	@ 000c7f6c 7061
.org 0xc7f6e
	ldrb r1, [r6, #10]	@ 000c7f6e b17a
.org 0xc7f70
	movs r0, #1	@ 000c7f70 0120
.org 0xc7f72
	movs r5, #0	@ 000c7f72 0025
.org 0xc7f74
	orrs r0, r1	@ 000c7f74 0843
.org 0xc7f76
	movs r1, #2	@ 000c7f76 0221
.org 0xc7f78
	orrs r0, r1	@ 000c7f78 0843
.org 0xc7f7a
	strb r0, [r6, #10]	@ 000c7f7a b072
.org 0xc7f7c
	adds r0, r6, #0	@ 000c7f7c 301c
.org 0xc7f7e
	bl 0x1cc9c	@ 000c7f7e 54f78dfe
.org 0xc7f82
	cmp r4, #0	@ 000c7f82 002c
.org 0xc7f84
	beq.n 0xc7f94	@ 000c7f84 06d0
.org 0xc7f86
	ldrb r0, [r6, #10]	@ 000c7f86 b07a
.org 0xc7f88
	movs r1, #16	@ 000c7f88 1021
.org 0xc7f8a
	orrs r0, r1	@ 000c7f8a 0843
.org 0xc7f8c
	b.n 0xc7f9a	@ 000c7f8c 05e0
.org 0xc7f8e
	.byte 0x00	@ 000c7f8e data
.org 0xc7f8f
	.byte 0x00	@ 000c7f8f data
.org 0xc7f90
	.byte 0xf4,0x49,0x86,0x08	@ 000c7f90 data
.org 0xc7f94
	ldrb r1, [r6, #10]	@ 000c7f94 b17a
.org 0xc7f96
	movs r0, #239	@ 000c7f96 ef20
.org 0xc7f98
	ands r0, r1	@ 000c7f98 0840
.org 0xc7f9a
	strb r0, [r6, #10]	@ 000c7f9a b072
.org 0xc7f9c
	adds r1, r4, #0	@ 000c7f9c 211c
.org 0xc7f9e
	adds r0, r6, #0	@ 000c7f9e 301c
.org 0xc7fa0
	adds r0, #76	@ 000c7fa0 4c30
.org 0xc7fa2
	movs r5, #0	@ 000c7fa2 0025
.org 0xc7fa4
	strb r1, [r0, #0]	@ 000c7fa4 0170
.org 0xc7fa6
	adds r3, r6, #0	@ 000c7fa6 331c
.org 0xc7fa8
	adds r3, #74	@ 000c7fa8 4a33
.org 0xc7faa
	lsls r1, r1, #4	@ 000c7faa 0901
.org 0xc7fac
	ldrb r2, [r3, #0]	@ 000c7fac 1a78
.org 0xc7fae
	movs r0, #17	@ 000c7fae 1120
.org 0xc7fb0
	negs r0, r0	@ 000c7fb0 4042
.org 0xc7fb2
	ands r0, r2	@ 000c7fb2 1040
.org 0xc7fb4
	orrs r0, r1	@ 000c7fb4 0843
.org 0xc7fb6
	strb r0, [r3, #0]	@ 000c7fb6 1870
.org 0xc7fb8
	ldr r1, [pc, #48]	@ 000c7fb8 0c49
.org 0xc7fba
	adds r0, r6, #0	@ 000c7fba 301c
.org 0xc7fbc
	bl 0x1cf00	@ 000c7fbc 54f7a0ff
.org 0xc7fc0
	ldrb r1, [r6, #10]	@ 000c7fc0 b17a
.org 0xc7fc2
	movs r0, #4	@ 000c7fc2 0420
.org 0xc7fc4
	orrs r0, r1	@ 000c7fc4 0843
.org 0xc7fc6
	strb r0, [r6, #10]	@ 000c7fc6 b072
.org 0xc7fc8
	adds r4, r6, #0	@ 000c7fc8 341c
.org 0xc7fca
	adds r4, #116	@ 000c7fca 7434
.org 0xc7fcc
	ldr r1, [pc, #32]	@ 000c7fcc 0849
.org 0xc7fce
	adds r2, r6, #0	@ 000c7fce 321c
.org 0xc7fd0
	adds r2, #84	@ 000c7fd0 5432
.org 0xc7fd2
	adds r0, r4, #0	@ 000c7fd2 201c
.org 0xc7fd4
	movs r3, #64	@ 000c7fd4 4023
.org 0xc7fd6
	bl 0x5760	@ 000c7fd6 3df7c3fb
.org 0xc7fda
	str r6, [r4, #44]	@ 000c7fda e662
.org 0xc7fdc
	str r5, [r4, #36]	@ 000c7fdc 6562
.org 0xc7fde
	adds r0, r6, #0	@ 000c7fde 301c
.org 0xc7fe0
	bl 0xc7ff4	@ 000c7fe0 00f008f8
