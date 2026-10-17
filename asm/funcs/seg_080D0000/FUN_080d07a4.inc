@ FUN_080d07a4  entry 0x080d07a4  size 80
.thumb
.org 0xd07a4
FUN_080d07a4:
	push {r4, r5, r6, lr}	@ 000d07a4 70b5
.org 0xd07a6
	adds r6, r0, #0	@ 000d07a6 061c
.org 0xd07a8
	lsls r1, r1, #24	@ 000d07a8 0906
.org 0xd07aa
	lsrs r5, r1, #24	@ 000d07aa 0d0e
.org 0xd07ac
	lsls r2, r2, #24	@ 000d07ac 1206
.org 0xd07ae
	lsrs r4, r2, #24	@ 000d07ae 140e
.org 0xd07b0
	ldr r0, [pc, #64]	@ 000d07b0 1048
.org 0xd07b2
	ldr r0, [r0, #0]	@ 000d07b2 0068
.org 0xd07b4
	bl 0x5500	@ 000d07b4 34f7a4fe
.org 0xd07b8
	adds r3, r0, #0	@ 000d07b8 031c
.org 0xd07ba
	cmp r3, #0	@ 000d07ba 002b
.org 0xd07bc
	beq.n 0xd07ee	@ 000d07bc 17d0
.org 0xd07be
	adds r1, r3, #0	@ 000d07be 191c
.org 0xd07c0
	adds r1, #37	@ 000d07c0 2531
.org 0xd07c2
	movs r2, #0	@ 000d07c2 0022
.org 0xd07c4
	movs r0, #8	@ 000d07c4 0820
.org 0xd07c6
	strb r0, [r1, #0]	@ 000d07c6 0870
.org 0xd07c8
	ldr r0, [pc, #44]	@ 000d07c8 0b48
.org 0xd07ca
	movs r1, #66	@ 000d07ca 4221
.org 0xd07cc
	strb r1, [r3, #9]	@ 000d07cc 5972
.org 0xd07ce
	adds r1, #198	@ 000d07ce c631
.org 0xd07d0
	adds r0, r0, r1	@ 000d07d0 4018
.org 0xd07d2
	ldr r0, [r0, #0]	@ 000d07d2 0068
.org 0xd07d4
	ldr r0, [r0, #0]	@ 000d07d4 0068
.org 0xd07d6
	str r0, [r3, #20]	@ 000d07d6 5861
.org 0xd07d8
	movs r0, #0	@ 000d07d8 0020
.org 0xd07da
	strh r2, [r3, #32]	@ 000d07da 1a84
.org 0xd07dc
	adds r1, r3, #0	@ 000d07dc 191c
.org 0xd07de
	adds r1, #34	@ 000d07de 2231
.org 0xd07e0
	strb r0, [r1, #0]	@ 000d07e0 0870
.org 0xd07e2
	ldr r0, [r6, #0]	@ 000d07e2 3068
.org 0xd07e4
	ldr r1, [r6, #4]	@ 000d07e4 7168
.org 0xd07e6
	str r0, [r3, #84]	@ 000d07e6 5865
.org 0xd07e8
	str r1, [r3, #88]	@ 000d07e8 9965
.org 0xd07ea
	strb r5, [r3, #16]	@ 000d07ea 1d74
.org 0xd07ec
	strb r4, [r3, #17]	@ 000d07ec 5c74
.org 0xd07ee
	pop {r4, r5, r6}	@ 000d07ee 70bc
.org 0xd07f0
	pop {r0}	@ 000d07f0 01bc
.org 0xd07f2
	bx r0	@ 000d07f2 0047
