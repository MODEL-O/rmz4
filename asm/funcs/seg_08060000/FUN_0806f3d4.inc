@ FUN_0806f3d4  entry 0x0806f3d4  size 90
.thumb
.org 0x6f3d4
FUN_0806f3d4:
	push {r4, r5, r6, lr}	@ 0006f3d4 70b5
.org 0x6f3d6
	adds r6, r0, #0	@ 0006f3d6 061c
.org 0x6f3d8
	ldrb r4, [r6, #10]	@ 0006f3d8 b47a
.org 0x6f3da
	lsrs r4, r4, #4	@ 0006f3da 2409
.org 0x6f3dc
	movs r5, #1	@ 0006f3dc 0125
.org 0x6f3de
	ands r4, r5	@ 0006f3de 2c40
.org 0x6f3e0
	bl 0x1cdbc	@ 0006f3e0 adf7ecfc
.org 0x6f3e4
	adds r0, r6, #0	@ 0006f3e4 301c
.org 0x6f3e6
	bl 0x1ceec	@ 0006f3e6 adf781fd
.org 0x6f3ea
	adds r1, r4, #0	@ 0006f3ea 211c
.org 0x6f3ec
	ands r1, r5	@ 0006f3ec 2940
.org 0x6f3ee
	adds r0, r6, #0	@ 0006f3ee 301c
.org 0x6f3f0
	adds r0, #76	@ 0006f3f0 4c30
.org 0x6f3f2
	strb r1, [r0, #0]	@ 0006f3f2 0170
.org 0x6f3f4
	adds r3, r6, #0	@ 0006f3f4 331c
.org 0x6f3f6
	adds r3, #74	@ 0006f3f6 4a33
.org 0x6f3f8
	lsls r1, r1, #4	@ 0006f3f8 0901
.org 0x6f3fa
	ldrb r2, [r3, #0]	@ 0006f3fa 1a78
.org 0x6f3fc
	movs r0, #17	@ 0006f3fc 1120
.org 0x6f3fe
	negs r0, r0	@ 0006f3fe 4042
.org 0x6f400
	ands r0, r2	@ 0006f400 1040
.org 0x6f402
	orrs r0, r1	@ 0006f402 0843
.org 0x6f404
	strb r0, [r3, #0]	@ 0006f404 1870
.org 0x6f406
	ands r4, r5	@ 0006f406 2c40
.org 0x6f408
	cmp r4, #0	@ 0006f408 002c
.org 0x6f40a
	beq.n 0x6f414	@ 0006f40a 03d0
.org 0x6f40c
	ldrb r0, [r6, #10]	@ 0006f40c b07a
.org 0x6f40e
	movs r1, #16	@ 0006f40e 1021
.org 0x6f410
	orrs r0, r1	@ 0006f410 0843
.org 0x6f412
	b.n 0x6f41a	@ 0006f412 02e0
.org 0x6f414
	ldrb r1, [r6, #10]	@ 0006f414 b17a
.org 0x6f416
	movs r0, #239	@ 0006f416 ef20
.org 0x6f418
	ands r0, r1	@ 0006f418 0840
.org 0x6f41a
	strb r0, [r6, #10]	@ 0006f41a b072
.org 0x6f41c
	adds r0, r6, #0	@ 0006f41c 301c
.org 0x6f41e
	adds r0, #80	@ 0006f41e 5030
.org 0x6f420
	movs r1, #234	@ 0006f420 ea21
.org 0x6f422
	strh r1, [r0, #0]	@ 0006f422 0180
.org 0x6f424
	adds r0, #2	@ 0006f424 0230
.org 0x6f426
	strh r1, [r0, #0]	@ 0006f426 0180
.org 0x6f428
	pop {r4, r5, r6}	@ 0006f428 70bc
.org 0x6f42a
	pop {r0}	@ 0006f42a 01bc
.org 0x6f42c
	bx r0	@ 0006f42c 0047
