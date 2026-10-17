@ FUN_0809f3a8  entry 0x0809f3a8  size 90
.thumb
.org 0x9f3a8
FUN_0809f3a8:
	push {r4, r5, r6, r7, lr}	@ 0009f3a8 f0b5
.org 0x9f3aa
	adds r6, r0, #0	@ 0009f3aa 061c
.org 0x9f3ac
	adds r7, r1, #0	@ 0009f3ac 0f1c
.org 0x9f3ae
	lsls r2, r2, #24	@ 0009f3ae 1206
.org 0x9f3b0
	lsrs r5, r2, #24	@ 0009f3b0 150e
.org 0x9f3b2
	lsls r3, r3, #24	@ 0009f3b2 1b06
.org 0x9f3b4
	lsrs r4, r3, #24	@ 0009f3b4 1c0e
.org 0x9f3b6
	ldr r0, [pc, #76]	@ 0009f3b6 1348
.org 0x9f3b8
	ldr r0, [r0, #0]	@ 0009f3b8 0068
.org 0x9f3ba
	bl 0x5500	@ 0009f3ba 66f7a1f8
.org 0x9f3be
	adds r3, r0, #0	@ 0009f3be 031c
.org 0x9f3c0
	cmp r3, #0	@ 0009f3c0 002b
.org 0x9f3c2
	beq.n 0x9f3fa	@ 0009f3c2 1ad0
.org 0x9f3c4
	adds r1, r3, #0	@ 0009f3c4 191c
.org 0x9f3c6
	adds r1, #37	@ 0009f3c6 2531
.org 0x9f3c8
	movs r2, #0	@ 0009f3c8 0022
.org 0x9f3ca
	movs r0, #24	@ 0009f3ca 1820
.org 0x9f3cc
	strb r0, [r1, #0]	@ 0009f3cc 0870
.org 0x9f3ce
	ldr r0, [pc, #56]	@ 0009f3ce 0e48
.org 0x9f3d0
	movs r1, #49	@ 0009f3d0 3121
.org 0x9f3d2
	strb r1, [r3, #9]	@ 0009f3d2 5972
.org 0x9f3d4
	adds r0, #196	@ 0009f3d4 c430
.org 0x9f3d6
	ldr r0, [r0, #0]	@ 0009f3d6 0068
.org 0x9f3d8
	ldr r0, [r0, #0]	@ 0009f3d8 0068
.org 0x9f3da
	str r0, [r3, #20]	@ 0009f3da 5861
.org 0x9f3dc
	movs r0, #0	@ 0009f3dc 0020
.org 0x9f3de
	strh r2, [r3, #32]	@ 0009f3de 1a84
.org 0x9f3e0
	adds r1, r3, #0	@ 0009f3e0 191c
.org 0x9f3e2
	adds r1, #34	@ 0009f3e2 2231
.org 0x9f3e4
	strb r0, [r1, #0]	@ 0009f3e4 0870
.org 0x9f3e6
	ldrb r1, [r3, #11]	@ 0009f3e6 d97a
.org 0x9f3e8
	movs r0, #16	@ 0009f3e8 1020
.org 0x9f3ea
	orrs r0, r1	@ 0009f3ea 0843
.org 0x9f3ec
	strb r0, [r3, #11]	@ 0009f3ec d872
.org 0x9f3ee
	ldrb r0, [r3, #28]	@ 0009f3ee 187f
.org 0x9f3f0
	strb r0, [r3, #29]	@ 0009f3f0 5877
.org 0x9f3f2
	str r6, [r3, #40]	@ 0009f3f2 9e62
.org 0x9f3f4
	str r7, [r3, #44]	@ 0009f3f4 df62
.org 0x9f3f6
	strb r5, [r3, #16]	@ 0009f3f6 1d74
.org 0x9f3f8
	strb r4, [r3, #17]	@ 0009f3f8 5c74
.org 0x9f3fa
	adds r0, r3, #0	@ 0009f3fa 181c
.org 0x9f3fc
	pop {r4, r5, r6, r7}	@ 0009f3fc f0bc
.org 0x9f3fe
	pop {r1}	@ 0009f3fe 02bc
.org 0x9f400
	bx r1	@ 0009f400 0847
