@ FUN_08102288  entry 0x08102288  size 136
.thumb
.org 0x102288
FUN_08102288:
	push {r4, r5, lr}	@ 00102288 30b5
.org 0x10228a
	adds r4, r0, #0	@ 0010228a 041c
.org 0x10228c
	bl 0x1cc9c	@ 0010228c 1af706fd
.org 0x102290
	ldrb r1, [r4, #10]	@ 00102290 a17a
.org 0x102292
	movs r0, #1	@ 00102292 0120
.org 0x102294
	movs r5, #0	@ 00102294 0025
.org 0x102296
	adds r2, r0, #0	@ 00102296 021c
.org 0x102298
	orrs r2, r1	@ 00102298 0a43
.org 0x10229a
	movs r0, #2	@ 0010229a 0220
.org 0x10229c
	orrs r2, r0	@ 0010229c 0243
.org 0x10229e
	orrs r2, r5	@ 0010229e 2a43
.org 0x1022a0
	strb r2, [r4, #10]	@ 001022a0 a272
.org 0x1022a2
	ldr r1, [pc, #28]	@ 001022a2 0749
.org 0x1022a4
	ldrb r0, [r4, #9]	@ 001022a4 607a
.org 0x1022a6
	lsls r0, r0, #2	@ 001022a6 8000
.org 0x1022a8
	adds r0, r0, r1	@ 001022a8 4018
.org 0x1022aa
	movs r1, #1	@ 001022aa 0121
.org 0x1022ac
	str r1, [r4, #12]	@ 001022ac e160
.org 0x1022ae
	ldr r0, [r0, #0]	@ 001022ae 0068
.org 0x1022b0
	ldr r0, [r0, #4]	@ 001022b0 4068
.org 0x1022b2
	str r0, [r4, #20]	@ 001022b2 6061
.org 0x1022b4
	ldrb r3, [r4, #17]	@ 001022b4 637c
.org 0x1022b6
	cmp r3, #0	@ 001022b6 002b
.org 0x1022b8
	beq.n 0x1022c4	@ 001022b8 04d0
.org 0x1022ba
	movs r0, #16	@ 001022ba 1020
.org 0x1022bc
	orrs r2, r0	@ 001022bc 0243
.org 0x1022be
	b.n 0x1022c8	@ 001022be 03e0
.org 0x1022c0
	.byte 0xfc,0x92,0x86,0x08	@ 001022c0 data
.org 0x1022c4
	movs r0, #239	@ 001022c4 ef20
.org 0x1022c6
	ands r2, r0	@ 001022c6 0240
.org 0x1022c8
	strb r2, [r4, #10]	@ 001022c8 a272
.org 0x1022ca
	movs r1, #1	@ 001022ca 0121
.org 0x1022cc
	ands r1, r3	@ 001022cc 1940
.org 0x1022ce
	adds r0, r4, #0	@ 001022ce 201c
.org 0x1022d0
	adds r0, #76	@ 001022d0 4c30
.org 0x1022d2
	strb r1, [r0, #0]	@ 001022d2 0170
.org 0x1022d4
	adds r3, r4, #0	@ 001022d4 231c
.org 0x1022d6
	adds r3, #74	@ 001022d6 4a33
.org 0x1022d8
	lsls r1, r1, #4	@ 001022d8 0901
.org 0x1022da
	ldrb r2, [r3, #0]	@ 001022da 1a78
.org 0x1022dc
	movs r0, #17	@ 001022dc 1120
.org 0x1022de
	negs r0, r0	@ 001022de 4042
.org 0x1022e0
	ands r0, r2	@ 001022e0 1040
.org 0x1022e2
	orrs r0, r1	@ 001022e2 0843
.org 0x1022e4
	strb r0, [r3, #0]	@ 001022e4 1870
.org 0x1022e6
	ldr r0, [r4, #84]	@ 001022e6 606d
.org 0x1022e8
	ldr r1, [r4, #88]	@ 001022e8 a16d
.org 0x1022ea
	bl 0x8534	@ 001022ea 06f723f9
.org 0x1022ee
	str r0, [r4, #88]	@ 001022ee a065
.org 0x1022f0
	adds r1, r4, #0	@ 001022f0 211c
.org 0x1022f2
	adds r1, #180	@ 001022f2 b431
.org 0x1022f4
	ldr r0, [r4, #84]	@ 001022f4 606d
.org 0x1022f6
	str r0, [r1, #0]	@ 001022f6 0860
.org 0x1022f8
	ldr r1, [pc, #24]	@ 001022f8 0649
.org 0x1022fa
	ldrb r0, [r4, #16]	@ 001022fa 207c
.org 0x1022fc
	lsls r0, r0, #2	@ 001022fc 8000
.org 0x1022fe
	adds r0, r0, r1	@ 001022fe 4018
.org 0x102300
	ldr r1, [r0, #0]	@ 00102300 0168
.org 0x102302
	adds r0, r4, #0	@ 00102302 201c
.org 0x102304
	bl 0x128f80	@ 00102304 26f03cfe
.org 0x102308
	adds r0, r4, #0	@ 00102308 201c
.org 0x10230a
	bl 0x102318	@ 0010230a 00f005f8
.org 0x10230e
	pop {r4, r5}	@ 0010230e 30bc
