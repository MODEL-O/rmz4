@ FUN_0804458c  entry 0x0804458c  size 110
.thumb
.org 0x4458c
FUN_0804458c:
	push {r4, r5, lr}	@ 0004458c 30b5
.org 0x4458e
	adds r5, r0, #0	@ 0004458e 051c
.org 0x44590
	ldr r4, [r5, #40]	@ 00044590 ac6a
.org 0x44592
	movs r1, #3	@ 00044592 0321
.org 0x44594
	bl 0x3a99c	@ 00044594 f6f702fa
.org 0x44598
	lsls r0, r0, #24	@ 00044598 0006
.org 0x4459a
	lsrs r2, r0, #24	@ 0004459a 020e
.org 0x4459c
	adds r4, #250	@ 0004459c fa34
.org 0x4459e
	ldrb r0, [r4, #0]	@ 0004459e 2078
.org 0x445a0
	cmp r0, #2	@ 000445a0 0228
.org 0x445a2
	bne.n 0x445a6	@ 000445a2 00d1
.org 0x445a4
	movs r2, #1	@ 000445a4 0122
.org 0x445a6
	cmp r2, #0	@ 000445a6 002a
.org 0x445a8
	bne.n 0x445be	@ 000445a8 09d1
.org 0x445aa
	adds r0, r5, #0	@ 000445aa 281c
.org 0x445ac
	adds r0, #140	@ 000445ac 8c30
.org 0x445ae
	ldr r0, [r0, #0]	@ 000445ae 0068
.org 0x445b0
	movs r1, #4	@ 000445b0 0421
.org 0x445b2
	ands r0, r1	@ 000445b2 0840
.org 0x445b4
	cmp r0, #0	@ 000445b4 0028
.org 0x445b6
	beq.n 0x445ba	@ 000445b6 00d0
.org 0x445b8
	movs r2, #1	@ 000445b8 0122
.org 0x445ba
	cmp r2, #0	@ 000445ba 002a
.org 0x445bc
	beq.n 0x445ec	@ 000445bc 16d0
.org 0x445be
	cmp r2, #255	@ 000445be ff2a
.org 0x445c0
	beq.n 0x445cc	@ 000445c0 04d0
.org 0x445c2
	adds r1, r5, #0	@ 000445c2 291c
.org 0x445c4
	adds r1, #84	@ 000445c4 5431
.org 0x445c6
	movs r0, #2	@ 000445c6 0220
.org 0x445c8
	bl 0xd0c88	@ 000445c8 8cf05efb
.org 0x445cc
	ldr r1, [pc, #24]	@ 000445cc 0649
.org 0x445ce
	ldrb r0, [r5, #9]	@ 000445ce 687a
.org 0x445d0
	lsls r0, r0, #2	@ 000445d0 8000
.org 0x445d2
	adds r0, r0, r1	@ 000445d2 4018
.org 0x445d4
	movs r1, #2	@ 000445d4 0221
.org 0x445d6
	str r1, [r5, #12]	@ 000445d6 e960
.org 0x445d8
	ldr r0, [r0, #0]	@ 000445d8 0068
.org 0x445da
	ldr r0, [r0, #8]	@ 000445da 8068
.org 0x445dc
	str r0, [r5, #20]	@ 000445dc 6861
.org 0x445de
	adds r0, r5, #0	@ 000445de 281c
.org 0x445e0
	bl 0x44600	@ 000445e0 00f00ef8
.org 0x445e4
	b.n 0x445fa	@ 000445e4 09e0
.org 0x445e6
	.byte 0x00	@ 000445e6 data
.org 0x445e7
	.byte 0x00	@ 000445e7 data
.org 0x445e8
	.byte 0xf8,0x39,0x85,0x08	@ 000445e8 data
.org 0x445ec
	adds r0, r5, #0	@ 000445ec 281c
.org 0x445ee
	bl 0x1cff0	@ 000445ee d8f7fffc
.org 0x445f2
	ldr r0, [r5, #88]	@ 000445f2 a86d
.org 0x445f4
	ldr r1, [r5, #96]	@ 000445f4 296e
.org 0x445f6
	adds r0, r0, r1	@ 000445f6 4018
.org 0x445f8
	str r0, [r5, #88]	@ 000445f8 a865
