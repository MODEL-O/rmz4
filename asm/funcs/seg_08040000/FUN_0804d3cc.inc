@ FUN_0804d3cc  entry 0x0804d3cc  size 106
.thumb
.org 0x4d3cc
FUN_0804d3cc:
	push {r4, r5, r6, lr}	@ 0004d3cc 70b5
.org 0x4d3ce
	adds r4, r0, #0	@ 0004d3ce 041c
.org 0x4d3d0
	bl 0x1cd28	@ 0004d3d0 cff7aafc
.org 0x4d3d4
	adds r0, r4, #0	@ 0004d3d4 201c
.org 0x4d3d6
	bl 0x1ceec	@ 0004d3d6 cff789fd
.org 0x4d3da
	ldrb r1, [r4, #10]	@ 0004d3da a17a
.org 0x4d3dc
	movs r0, #1	@ 0004d3dc 0120
.org 0x4d3de
	movs r6, #0	@ 0004d3de 0026
.org 0x4d3e0
	orrs r0, r1	@ 0004d3e0 0843
.org 0x4d3e2
	movs r1, #2	@ 0004d3e2 0221
.org 0x4d3e4
	orrs r0, r1	@ 0004d3e4 0843
.org 0x4d3e6
	strb r0, [r4, #10]	@ 0004d3e6 a072
.org 0x4d3e8
	ldr r1, [pc, #76]	@ 0004d3e8 1349
.org 0x4d3ea
	adds r0, r4, #0	@ 0004d3ea 201c
.org 0x4d3ec
	bl 0x1cf00	@ 0004d3ec cff788fd
.org 0x4d3f0
	ldrb r1, [r4, #10]	@ 0004d3f0 a17a
.org 0x4d3f2
	movs r0, #4	@ 0004d3f2 0420
.org 0x4d3f4
	orrs r0, r1	@ 0004d3f4 0843
.org 0x4d3f6
	strb r0, [r4, #10]	@ 0004d3f6 a072
.org 0x4d3f8
	adds r5, r4, #0	@ 0004d3f8 251c
.org 0x4d3fa
	adds r5, #116	@ 0004d3fa 7435
.org 0x4d3fc
	ldr r1, [pc, #60]	@ 0004d3fc 0f49
.org 0x4d3fe
	adds r2, r4, #0	@ 0004d3fe 221c
.org 0x4d400
	adds r2, #84	@ 0004d400 5432
.org 0x4d402
	adds r0, r5, #0	@ 0004d402 281c
.org 0x4d404
	movs r3, #8	@ 0004d404 0823
.org 0x4d406
	bl 0x5760	@ 0004d406 b8f7abf9
.org 0x4d40a
	str r4, [r5, #44]	@ 0004d40a ec62
.org 0x4d40c
	ldr r0, [pc, #48]	@ 0004d40c 0c48
.org 0x4d40e
	str r0, [r5, #36]	@ 0004d40e 6862
.org 0x4d410
	strb r6, [r4, #18]	@ 0004d410 a674
.org 0x4d412
	movs r0, #69	@ 0004d412 4520
.org 0x4d414
	bl 0x2b10	@ 0004d414 b5f77cfb
.org 0x4d418
	ldr r1, [pc, #40]	@ 0004d418 0a49
.org 0x4d41a
	ldrb r0, [r4, #9]	@ 0004d41a 607a
.org 0x4d41c
	lsls r0, r0, #2	@ 0004d41c 8000
.org 0x4d41e
	adds r0, r0, r1	@ 0004d41e 4018
.org 0x4d420
	movs r1, #1	@ 0004d420 0121
.org 0x4d422
	str r1, [r4, #12]	@ 0004d422 e160
.org 0x4d424
	ldr r0, [r0, #0]	@ 0004d424 0068
.org 0x4d426
	ldr r0, [r0, #4]	@ 0004d426 4068
.org 0x4d428
	str r0, [r4, #20]	@ 0004d428 6061
.org 0x4d42a
	adds r0, r4, #0	@ 0004d42a 201c
.org 0x4d42c
	bl 0x4d448	@ 0004d42c 00f00cf8
.org 0x4d430
	pop {r4, r5, r6}	@ 0004d430 70bc
.org 0x4d432
	pop {r0}	@ 0004d432 01bc
.org 0x4d434
	bx r0	@ 0004d434 0047
