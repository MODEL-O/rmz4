@ FUN_081040c0  entry 0x081040c0  size 88
.thumb
.org 0x1040c0
FUN_081040c0:
	push {r4, r5, r6, r7, lr}	@ 001040c0 f0b5
.org 0x1040c2
	adds r6, r0, #0	@ 001040c2 061c
.org 0x1040c4
	adds r7, r1, #0	@ 001040c4 0f1c
.org 0x1040c6
	lsls r2, r2, #24	@ 001040c6 1206
.org 0x1040c8
	lsrs r5, r2, #24	@ 001040c8 150e
.org 0x1040ca
	ldr r0, [pc, #76]	@ 001040ca 1348
.org 0x1040cc
	ldr r0, [r0, #0]	@ 001040cc 0068
.org 0x1040ce
	bl 0x5500	@ 001040ce 01f717fa
.org 0x1040d2
	adds r4, r0, #0	@ 001040d2 041c
.org 0x1040d4
	cmp r4, #0	@ 001040d4 002c
.org 0x1040d6
	beq.n 0x104110	@ 001040d6 1bd0
.org 0x1040d8
	adds r1, r4, #0	@ 001040d8 211c
.org 0x1040da
	adds r1, #37	@ 001040da 2531
.org 0x1040dc
	movs r3, #0	@ 001040dc 0023
.org 0x1040de
	movs r0, #30	@ 001040de 1e20
.org 0x1040e0
	strb r0, [r1, #0]	@ 001040e0 0870
.org 0x1040e2
	ldr r0, [pc, #56]	@ 001040e2 0e48
.org 0x1040e4
	movs r1, #74	@ 001040e4 4a21
.org 0x1040e6
	strb r1, [r4, #9]	@ 001040e6 6172
.org 0x1040e8
	adds r1, #222	@ 001040e8 de31
.org 0x1040ea
	adds r0, r0, r1	@ 001040ea 4018
.org 0x1040ec
	ldr r0, [r0, #0]	@ 001040ec 0068
.org 0x1040ee
	ldr r0, [r0, #0]	@ 001040ee 0068
.org 0x1040f0
	str r0, [r4, #20]	@ 001040f0 6061
.org 0x1040f2
	movs r2, #0	@ 001040f2 0022
.org 0x1040f4
	strh r3, [r4, #32]	@ 001040f4 2384
.org 0x1040f6
	adds r0, r4, #0	@ 001040f6 201c
.org 0x1040f8
	adds r0, #34	@ 001040f8 2230
.org 0x1040fa
	strb r2, [r0, #0]	@ 001040fa 0270
.org 0x1040fc
	ldrb r1, [r4, #11]	@ 001040fc e17a
.org 0x1040fe
	movs r0, #16	@ 001040fe 1020
.org 0x104100
	orrs r0, r1	@ 00104100 0843
.org 0x104102
	strb r0, [r4, #11]	@ 00104102 e072
.org 0x104104
	ldrb r0, [r4, #28]	@ 00104104 207f
.org 0x104106
	strb r0, [r4, #29]	@ 00104106 6077
.org 0x104108
	str r6, [r4, #84]	@ 00104108 6665
.org 0x10410a
	str r7, [r4, #88]	@ 0010410a a765
.org 0x10410c
	strb r5, [r4, #16]	@ 0010410c 2574
.org 0x10410e
	strb r2, [r4, #17]	@ 0010410e 6274
.org 0x104110
	adds r0, r4, #0	@ 00104110 201c
.org 0x104112
	pop {r4, r5, r6, r7}	@ 00104112 f0bc
.org 0x104114
	pop {r1}	@ 00104114 02bc
.org 0x104116
	bx r1	@ 00104116 0847
