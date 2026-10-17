@ FUN_0803c37c  entry 0x0803c37c  size 124
.thumb
.org 0x3c37c
FUN_0803c37c:
	push {r4, r5, lr}	@ 0003c37c 30b5
.org 0x3c37e
	adds r3, r0, #0	@ 0003c37e 031c
.org 0x3c380
	ldr r0, [r3, #20]	@ 0003c380 5869
.org 0x3c382
	movs r1, #4	@ 0003c382 0421
.org 0x3c384
	ands r0, r1	@ 0003c384 0840
.org 0x3c386
	cmp r0, #0	@ 0003c386 0028
.org 0x3c388
	beq.n 0x3c3f2	@ 0003c388 33d0
.org 0x3c38a
	ldr r4, [r3, #44]	@ 0003c38a dc6a
.org 0x3c38c
	ldr r0, [r3, #12]	@ 0003c38c d868
.org 0x3c38e
	ldr r5, [r0, #44]	@ 0003c38e c56a
.org 0x3c390
	ldr r2, [pc, #100]	@ 0003c390 194a
.org 0x3c392
	ldrh r1, [r2, #28]	@ 0003c392 918b
.org 0x3c394
	ldr r0, [pc, #100]	@ 0003c394 1948
.org 0x3c396
	cmp r1, r0	@ 0003c396 8142
.org 0x3c398
	bhi.n 0x3c39e	@ 0003c398 01d8
.org 0x3c39a
	adds r0, r1, #1	@ 0003c39a 481c
.org 0x3c39c
	strh r0, [r2, #28]	@ 0003c39c 9083
.org 0x3c39e
	ldrb r0, [r4, #16]	@ 0003c39e 207c
.org 0x3c3a0
	adds r2, r0, #0	@ 0003c3a0 021c
.org 0x3c3a2
	cmp r2, #3	@ 0003c3a2 032a
.org 0x3c3a4
	bne.n 0x3c3c6	@ 0003c3a4 0fd1
.org 0x3c3a6
	ldrb r0, [r4, #13]	@ 0003c3a6 607b
.org 0x3c3a8
	cmp r0, #1	@ 0003c3a8 0128
.org 0x3c3aa
	bne.n 0x3c3c6	@ 0003c3aa 0cd1
.org 0x3c3ac
	movs r0, #8	@ 0003c3ac 0820
.org 0x3c3ae
	ldrsb r0, [r5, r0]	@ 0003c3ae 2856
.org 0x3c3b0
	cmp r0, #2	@ 0003c3b0 0228
.org 0x3c3b2
	beq.n 0x3c3c2	@ 0003c3b2 06d0
.org 0x3c3b4
	cmp r0, #3	@ 0003c3b4 0328
.org 0x3c3b6
	bne.n 0x3c3c6	@ 0003c3b6 06d1
.org 0x3c3b8
	ldrb r0, [r5, #9]	@ 0003c3b8 687a
.org 0x3c3ba
	cmp r0, #57	@ 0003c3ba 3928
.org 0x3c3bc
	beq.n 0x3c3c2	@ 0003c3bc 01d0
.org 0x3c3be
	cmp r0, #68	@ 0003c3be 4428
.org 0x3c3c0
	bne.n 0x3c3c6	@ 0003c3c0 01d1
.org 0x3c3c2
	movs r0, #60	@ 0003c3c2 3c20
.org 0x3c3c4
	strb r0, [r4, #18]	@ 0003c3c4 a074
.org 0x3c3c6
	ldr r0, [r3, #12]	@ 0003c3c6 d868
.org 0x3c3c8
	ldr r0, [r0, #24]	@ 0003c3c8 8069
.org 0x3c3ca
	movs r1, #128	@ 0003c3ca 8021
.org 0x3c3cc
	lsls r1, r1, #2	@ 0003c3cc 8900
.org 0x3c3ce
	ands r0, r1	@ 0003c3ce 0840
.org 0x3c3d0
	cmp r0, #0	@ 0003c3d0 0028
.org 0x3c3d2
	beq.n 0x3c3da	@ 0003c3d2 02d0
.org 0x3c3d4
	lsls r0, r2, #24	@ 0003c3d4 1006
.org 0x3c3d6
	cmp r0, #0	@ 0003c3d6 0028
.org 0x3c3d8
	bne.n 0x3c3f2	@ 0003c3d8 0bd1
.org 0x3c3da
	lsls r0, r2, #24	@ 0003c3da 1006
.org 0x3c3dc
	lsrs r0, r0, #24	@ 0003c3dc 000e
.org 0x3c3de
	cmp r0, #3	@ 0003c3de 0328
.org 0x3c3e0
	beq.n 0x3c3f2	@ 0003c3e0 07d0
.org 0x3c3e2
	cmp r0, #6	@ 0003c3e2 0628
.org 0x3c3e4
	beq.n 0x3c3f2	@ 0003c3e4 05d0
.org 0x3c3e6
	cmp r0, #4	@ 0003c3e6 0428
.org 0x3c3e8
	beq.n 0x3c3f2	@ 0003c3e8 03d0
.org 0x3c3ea
	adds r1, r4, #0	@ 0003c3ea 211c
.org 0x3c3ec
	adds r1, #180	@ 0003c3ec b431
.org 0x3c3ee
	movs r0, #1	@ 0003c3ee 0120
.org 0x3c3f0
	strb r0, [r1, #12]	@ 0003c3f0 0873
.org 0x3c3f2
	pop {r4, r5}	@ 0003c3f2 30bc
.org 0x3c3f4
	pop {r0}	@ 0003c3f4 01bc
.org 0x3c3f6
	bx r0	@ 0003c3f6 0047
