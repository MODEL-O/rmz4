@ FUN_0810a28c  entry 0x0810a28c  size 92
.thumb
.org 0x10a28c
FUN_0810a28c:
	push {r4, lr}	@ 0010a28c 10b5
.org 0x10a28e
	adds r4, r0, #0	@ 0010a28e 041c
.org 0x10a290
	ldr r1, [pc, #84]	@ 0010a290 1549
.org 0x10a292
	ldrb r0, [r4, #9]	@ 0010a292 607a
.org 0x10a294
	lsls r0, r0, #2	@ 0010a294 8000
.org 0x10a296
	adds r0, r0, r1	@ 0010a296 4018
.org 0x10a298
	movs r1, #1	@ 0010a298 0121
.org 0x10a29a
	str r1, [r4, #12]	@ 0010a29a e160
.org 0x10a29c
	ldr r0, [r0, #0]	@ 0010a29c 0068
.org 0x10a29e
	ldr r0, [r0, #4]	@ 0010a29e 4068
.org 0x10a2a0
	str r0, [r4, #20]	@ 0010a2a0 6061
.org 0x10a2a2
	adds r0, r4, #0	@ 0010a2a2 201c
.org 0x10a2a4
	bl 0x1cc9c	@ 0010a2a4 12f7fafc
.org 0x10a2a8
	ldrb r1, [r4, #10]	@ 0010a2a8 a17a
.org 0x10a2aa
	movs r0, #1	@ 0010a2aa 0120
.org 0x10a2ac
	movs r2, #0	@ 0010a2ac 0022
.org 0x10a2ae
	orrs r0, r1	@ 0010a2ae 0843
.org 0x10a2b0
	movs r1, #2	@ 0010a2b0 0221
.org 0x10a2b2
	orrs r0, r1	@ 0010a2b2 0843
.org 0x10a2b4
	strb r0, [r4, #10]	@ 0010a2b4 a072
.org 0x10a2b6
	adds r0, r4, #0	@ 0010a2b6 201c
.org 0x10a2b8
	adds r0, #76	@ 0010a2b8 4c30
.org 0x10a2ba
	strb r2, [r0, #0]	@ 0010a2ba 0270
.org 0x10a2bc
	adds r2, r4, #0	@ 0010a2bc 221c
.org 0x10a2be
	adds r2, #74	@ 0010a2be 4a32
.org 0x10a2c0
	ldrb r1, [r2, #0]	@ 0010a2c0 1178
.org 0x10a2c2
	movs r0, #17	@ 0010a2c2 1120
.org 0x10a2c4
	negs r0, r0	@ 0010a2c4 4042
.org 0x10a2c6
	ands r0, r1	@ 0010a2c6 0840
.org 0x10a2c8
	strb r0, [r2, #0]	@ 0010a2c8 1070
.org 0x10a2ca
	ldrb r1, [r4, #10]	@ 0010a2ca a17a
.org 0x10a2cc
	movs r0, #239	@ 0010a2cc ef20
.org 0x10a2ce
	ands r0, r1	@ 0010a2ce 0840
.org 0x10a2d0
	strb r0, [r4, #10]	@ 0010a2d0 a072
.org 0x10a2d2
	subs r2, #1	@ 0010a2d2 013a
.org 0x10a2d4
	ldrb r0, [r2, #0]	@ 0010a2d4 1078
.org 0x10a2d6
	movs r1, #12	@ 0010a2d6 0c21
.org 0x10a2d8
	orrs r0, r1	@ 0010a2d8 0843
.org 0x10a2da
	strb r0, [r2, #0]	@ 0010a2da 1070
.org 0x10a2dc
	adds r0, r4, #0	@ 0010a2dc 201c
.org 0x10a2de
	bl 0x10a2ec	@ 0010a2de 00f005f8
.org 0x10a2e2
	pop {r4}	@ 0010a2e2 10bc
.org 0x10a2e4
	pop {r0}	@ 0010a2e4 01bc
.org 0x10a2e6
	bx r0	@ 0010a2e6 0047
