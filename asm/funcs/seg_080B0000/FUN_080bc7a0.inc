@ FUN_080bc7a0  entry 0x080bc7a0  size 96
.thumb
.org 0xbc7a0
FUN_080bc7a0:
	push {r4, r5, r6, r7, lr}	@ 000bc7a0 f0b5
.org 0xbc7a2
	adds r5, r0, #0	@ 000bc7a2 051c
.org 0xbc7a4
	adds r7, r2, #0	@ 000bc7a4 171c
.org 0xbc7a6
	lsls r4, r1, #16	@ 000bc7a6 0c04
.org 0xbc7a8
	lsrs r6, r4, #16	@ 000bc7a8 260c
.org 0xbc7aa
	ldr r0, [pc, #84]	@ 000bc7aa 1548
.org 0xbc7ac
	ldr r0, [r0, #0]	@ 000bc7ac 0068
.org 0xbc7ae
	bl 0x5500	@ 000bc7ae 48f7a7fe
.org 0xbc7b2
	adds r3, r0, #0	@ 000bc7b2 031c
.org 0xbc7b4
	cmp r3, #0	@ 000bc7b4 002b
.org 0xbc7b6
	beq.n 0xbc7fa	@ 000bc7b6 20d0
.org 0xbc7b8
	adds r1, r3, #0	@ 000bc7b8 191c
.org 0xbc7ba
	adds r1, #37	@ 000bc7ba 2531
.org 0xbc7bc
	movs r2, #0	@ 000bc7bc 0022
.org 0xbc7be
	movs r0, #24	@ 000bc7be 1820
.org 0xbc7c0
	strb r0, [r1, #0]	@ 000bc7c0 0870
.org 0xbc7c2
	ldr r0, [pc, #64]	@ 000bc7c2 1048
.org 0xbc7c4
	movs r1, #116	@ 000bc7c4 7421
.org 0xbc7c6
	strb r1, [r3, #9]	@ 000bc7c6 5972
.org 0xbc7c8
	movs r1, #232	@ 000bc7c8 e821
.org 0xbc7ca
	lsls r1, r1, #1	@ 000bc7ca 4900
.org 0xbc7cc
	adds r0, r0, r1	@ 000bc7cc 4018
.org 0xbc7ce
	ldr r0, [r0, #0]	@ 000bc7ce 0068
.org 0xbc7d0
	ldr r0, [r0, #0]	@ 000bc7d0 0068
.org 0xbc7d2
	str r0, [r3, #20]	@ 000bc7d2 5861
.org 0xbc7d4
	movs r0, #0	@ 000bc7d4 0020
.org 0xbc7d6
	strh r2, [r3, #32]	@ 000bc7d6 1a84
.org 0xbc7d8
	adds r1, r3, #0	@ 000bc7d8 191c
.org 0xbc7da
	adds r1, #34	@ 000bc7da 2231
.org 0xbc7dc
	strb r0, [r1, #0]	@ 000bc7dc 0870
.org 0xbc7de
	ldrb r1, [r3, #11]	@ 000bc7de d97a
.org 0xbc7e0
	movs r0, #16	@ 000bc7e0 1020
.org 0xbc7e2
	orrs r0, r1	@ 000bc7e2 0843
.org 0xbc7e4
	strb r0, [r3, #11]	@ 000bc7e4 d872
.org 0xbc7e6
	ldrb r0, [r3, #28]	@ 000bc7e6 187f
.org 0xbc7e8
	strb r0, [r3, #29]	@ 000bc7e8 5877
.org 0xbc7ea
	ldr r0, [r5, #0]	@ 000bc7ea 2868
.org 0xbc7ec
	ldr r1, [r5, #4]	@ 000bc7ec 6968
.org 0xbc7ee
	str r0, [r3, #84]	@ 000bc7ee 5865
.org 0xbc7f0
	str r1, [r3, #88]	@ 000bc7f0 9965
.org 0xbc7f2
	lsrs r0, r4, #24	@ 000bc7f2 200e
.org 0xbc7f4
	strb r0, [r3, #16]	@ 000bc7f4 1874
.org 0xbc7f6
	strb r6, [r3, #17]	@ 000bc7f6 5e74
.org 0xbc7f8
	str r7, [r3, #40]	@ 000bc7f8 9f62
.org 0xbc7fa
	pop {r4, r5, r6, r7}	@ 000bc7fa f0bc
.org 0xbc7fc
	pop {r0}	@ 000bc7fc 01bc
.org 0xbc7fe
	bx r0	@ 000bc7fe 0047
