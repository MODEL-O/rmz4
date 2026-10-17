@ FUN_0810c3b8  entry 0x0810c3b8  size 98
.thumb
.org 0x10c3b8
FUN_0810c3b8:
	push {r4, r5, lr}	@ 0010c3b8 30b5
.org 0x10c3ba
	adds r4, r0, #0	@ 0010c3ba 041c
.org 0x10c3bc
	bl 0x1cdbc	@ 0010c3bc 10f7fefc
.org 0x10c3c0
	ldrb r1, [r4, #10]	@ 0010c3c0 a17a
.org 0x10c3c2
	movs r0, #1	@ 0010c3c2 0120
.org 0x10c3c4
	orrs r0, r1	@ 0010c3c4 0843
.org 0x10c3c6
	movs r1, #2	@ 0010c3c6 0221
.org 0x10c3c8
	orrs r0, r1	@ 0010c3c8 0843
.org 0x10c3ca
	strb r0, [r4, #10]	@ 0010c3ca a072
.org 0x10c3cc
	adds r2, r4, #0	@ 0010c3cc 221c
.org 0x10c3ce
	adds r2, #73	@ 0010c3ce 4932
.org 0x10c3d0
	ldrb r1, [r2, #0]	@ 0010c3d0 1178
.org 0x10c3d2
	movs r0, #13	@ 0010c3d2 0d20
.org 0x10c3d4
	negs r0, r0	@ 0010c3d4 4042
.org 0x10c3d6
	ands r0, r1	@ 0010c3d6 0840
.org 0x10c3d8
	strb r0, [r2, #0]	@ 0010c3d8 1070
.org 0x10c3da
	adds r1, r4, #0	@ 0010c3da 211c
.org 0x10c3dc
	adds r1, #37	@ 0010c3dc 2531
.org 0x10c3de
	movs r0, #17	@ 0010c3de 1120
.org 0x10c3e0
	strb r0, [r1, #0]	@ 0010c3e0 0870
.org 0x10c3e2
	ldr r1, [pc, #56]	@ 0010c3e2 0e49
.org 0x10c3e4
	ldrb r0, [r4, #17]	@ 0010c3e4 607c
.org 0x10c3e6
	lsls r0, r0, #2	@ 0010c3e6 8000
.org 0x10c3e8
	adds r1, #2	@ 0010c3e8 0231
.org 0x10c3ea
	adds r0, r0, r1	@ 0010c3ea 4018
.org 0x10c3ec
	ldrh r1, [r0, #0]	@ 0010c3ec 0188
.org 0x10c3ee
	adds r0, r4, #0	@ 0010c3ee 201c
.org 0x10c3f0
	adds r0, #116	@ 0010c3f0 7430
.org 0x10c3f2
	movs r5, #0	@ 0010c3f2 0025
.org 0x10c3f4
	strh r1, [r0, #0]	@ 0010c3f4 0180
.org 0x10c3f6
	ldrh r1, [r0, #0]	@ 0010c3f6 0188
.org 0x10c3f8
	adds r0, r4, #0	@ 0010c3f8 201c
.org 0x10c3fa
	bl 0x1cf00	@ 0010c3fa 10f781fd
.org 0x10c3fe
	ldr r1, [pc, #32]	@ 0010c3fe 0849
.org 0x10c400
	ldrb r0, [r4, #17]	@ 0010c400 607c
.org 0x10c402
	lsls r0, r0, #3	@ 0010c402 c000
.org 0x10c404
	adds r0, r0, r1	@ 0010c404 4018
.org 0x10c406
	ldr r1, [r0, #4]	@ 0010c406 4168
.org 0x10c408
	ldr r0, [r0, #0]	@ 0010c408 0068
.org 0x10c40a
	str r0, [r4, #84]	@ 0010c40a 6065
.org 0x10c40c
	str r1, [r4, #88]	@ 0010c40c a165
.org 0x10c40e
	str r0, [r4, #100]	@ 0010c40e 6066
.org 0x10c410
	str r1, [r4, #104]	@ 0010c410 a166
.org 0x10c412
	strb r5, [r4, #18]	@ 0010c412 a574
.org 0x10c414
	pop {r4, r5}	@ 0010c414 30bc
.org 0x10c416
	pop {r0}	@ 0010c416 01bc
.org 0x10c418
	bx r0	@ 0010c418 0047
