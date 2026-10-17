@ FUN_080a797c  entry 0x080a797c  size 98
.thumb
.org 0xa797c
FUN_080a797c:
	push {r4, r5, r6, r7, lr}	@ 000a797c f0b5
.org 0xa797e
	adds r6, r0, #0	@ 000a797e 061c
.org 0xa7980
	adds r7, r1, #0	@ 000a7980 0f1c
.org 0xa7982
	lsls r2, r2, #24	@ 000a7982 1206
.org 0xa7984
	lsrs r5, r2, #24	@ 000a7984 150e
.org 0xa7986
	lsls r3, r3, #24	@ 000a7986 1b06
.org 0xa7988
	lsrs r4, r3, #24	@ 000a7988 1c0e
.org 0xa798a
	ldr r0, [pc, #84]	@ 000a798a 1548
.org 0xa798c
	ldr r0, [r0, #0]	@ 000a798c 0068
.org 0xa798e
	bl 0x5500	@ 000a798e 5df7b7fd
.org 0xa7992
	adds r3, r0, #0	@ 000a7992 031c
.org 0xa7994
	cmp r3, #0	@ 000a7994 002b
.org 0xa7996
	beq.n 0xa79d6	@ 000a7996 1ed0
.org 0xa7998
	adds r1, r3, #0	@ 000a7998 191c
.org 0xa799a
	adds r1, #37	@ 000a799a 2531
.org 0xa799c
	movs r2, #0	@ 000a799c 0022
.org 0xa799e
	movs r0, #24	@ 000a799e 1820
.org 0xa79a0
	strb r0, [r1, #0]	@ 000a79a0 0870
.org 0xa79a2
	ldr r0, [pc, #64]	@ 000a79a2 1048
.org 0xa79a4
	movs r1, #65	@ 000a79a4 4121
.org 0xa79a6
	strb r1, [r3, #9]	@ 000a79a6 5972
.org 0xa79a8
	adds r1, #195	@ 000a79a8 c331
.org 0xa79aa
	adds r0, r0, r1	@ 000a79aa 4018
.org 0xa79ac
	ldr r0, [r0, #0]	@ 000a79ac 0068
.org 0xa79ae
	ldr r0, [r0, #0]	@ 000a79ae 0068
.org 0xa79b0
	str r0, [r3, #20]	@ 000a79b0 5861
.org 0xa79b2
	movs r0, #0	@ 000a79b2 0020
.org 0xa79b4
	strh r2, [r3, #32]	@ 000a79b4 1a84
.org 0xa79b6
	adds r1, r3, #0	@ 000a79b6 191c
.org 0xa79b8
	adds r1, #34	@ 000a79b8 2231
.org 0xa79ba
	strb r0, [r1, #0]	@ 000a79ba 0870
.org 0xa79bc
	ldrb r1, [r3, #11]	@ 000a79bc d97a
.org 0xa79be
	movs r0, #16	@ 000a79be 1020
.org 0xa79c0
	orrs r0, r1	@ 000a79c0 0843
.org 0xa79c2
	strb r0, [r3, #11]	@ 000a79c2 d872
.org 0xa79c4
	ldrb r0, [r3, #28]	@ 000a79c4 187f
.org 0xa79c6
	strb r0, [r3, #29]	@ 000a79c6 5877
.org 0xa79c8
	str r6, [r3, #40]	@ 000a79c8 9e62
.org 0xa79ca
	ldr r0, [r7, #0]	@ 000a79ca 3868
.org 0xa79cc
	ldr r1, [r7, #4]	@ 000a79cc 7968
.org 0xa79ce
	str r0, [r3, #84]	@ 000a79ce 5865
.org 0xa79d0
	str r1, [r3, #88]	@ 000a79d0 9965
.org 0xa79d2
	strb r5, [r3, #16]	@ 000a79d2 1d74
.org 0xa79d4
	strb r4, [r3, #17]	@ 000a79d4 5c74
.org 0xa79d6
	adds r0, r3, #0	@ 000a79d6 181c
.org 0xa79d8
	pop {r4, r5, r6, r7}	@ 000a79d8 f0bc
.org 0xa79da
	pop {r1}	@ 000a79da 02bc
.org 0xa79dc
	bx r1	@ 000a79dc 0847
