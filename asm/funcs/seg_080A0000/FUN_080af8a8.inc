@ FUN_080af8a8  entry 0x080af8a8  size 94
.thumb
.org 0xaf8a8
FUN_080af8a8:
	push {r4, r5, r6, lr}	@ 000af8a8 70b5
.org 0xaf8aa
	adds r6, r0, #0	@ 000af8aa 061c
.org 0xaf8ac
	lsls r1, r1, #24	@ 000af8ac 0906
.org 0xaf8ae
	lsrs r5, r1, #24	@ 000af8ae 0d0e
.org 0xaf8b0
	lsls r2, r2, #24	@ 000af8b0 1206
.org 0xaf8b2
	lsrs r4, r2, #24	@ 000af8b2 140e
.org 0xaf8b4
	ldr r0, [pc, #80]	@ 000af8b4 1448
.org 0xaf8b6
	ldr r0, [r0, #0]	@ 000af8b6 0068
.org 0xaf8b8
	bl 0x5500	@ 000af8b8 55f722fe
.org 0xaf8bc
	adds r3, r0, #0	@ 000af8bc 031c
.org 0xaf8be
	cmp r3, #0	@ 000af8be 002b
.org 0xaf8c0
	beq.n 0xaf8fe	@ 000af8c0 1dd0
.org 0xaf8c2
	adds r1, r3, #0	@ 000af8c2 191c
.org 0xaf8c4
	adds r1, #37	@ 000af8c4 2531
.org 0xaf8c6
	movs r2, #0	@ 000af8c6 0022
.org 0xaf8c8
	movs r0, #24	@ 000af8c8 1820
.org 0xaf8ca
	strb r0, [r1, #0]	@ 000af8ca 0870
.org 0xaf8cc
	ldr r0, [pc, #60]	@ 000af8cc 0f48
.org 0xaf8ce
	movs r1, #84	@ 000af8ce 5421
.org 0xaf8d0
	strb r1, [r3, #9]	@ 000af8d0 5972
.org 0xaf8d2
	adds r1, #252	@ 000af8d2 fc31
.org 0xaf8d4
	adds r0, r0, r1	@ 000af8d4 4018
.org 0xaf8d6
	ldr r0, [r0, #0]	@ 000af8d6 0068
.org 0xaf8d8
	ldr r0, [r0, #0]	@ 000af8d8 0068
.org 0xaf8da
	str r0, [r3, #20]	@ 000af8da 5861
.org 0xaf8dc
	movs r0, #0	@ 000af8dc 0020
.org 0xaf8de
	strh r2, [r3, #32]	@ 000af8de 1a84
.org 0xaf8e0
	adds r1, r3, #0	@ 000af8e0 191c
.org 0xaf8e2
	adds r1, #34	@ 000af8e2 2231
.org 0xaf8e4
	strb r0, [r1, #0]	@ 000af8e4 0870
.org 0xaf8e6
	ldrb r1, [r3, #11]	@ 000af8e6 d97a
.org 0xaf8e8
	movs r0, #16	@ 000af8e8 1020
.org 0xaf8ea
	orrs r0, r1	@ 000af8ea 0843
.org 0xaf8ec
	strb r0, [r3, #11]	@ 000af8ec d872
.org 0xaf8ee
	ldrb r0, [r3, #28]	@ 000af8ee 187f
.org 0xaf8f0
	strb r0, [r3, #29]	@ 000af8f0 5877
.org 0xaf8f2
	ldr r0, [r6, #0]	@ 000af8f2 3068
.org 0xaf8f4
	ldr r1, [r6, #4]	@ 000af8f4 7168
.org 0xaf8f6
	str r0, [r3, #84]	@ 000af8f6 5865
.org 0xaf8f8
	str r1, [r3, #88]	@ 000af8f8 9965
.org 0xaf8fa
	strb r5, [r3, #16]	@ 000af8fa 1d74
.org 0xaf8fc
	strb r4, [r3, #17]	@ 000af8fc 5c74
.org 0xaf8fe
	adds r0, r3, #0	@ 000af8fe 181c
.org 0xaf900
	pop {r4, r5, r6}	@ 000af900 70bc
.org 0xaf902
	pop {r1}	@ 000af902 02bc
.org 0xaf904
	bx r1	@ 000af904 0847
