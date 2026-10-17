@ FUN_080e52b4  entry 0x080e52b4  size 80
.thumb
.org 0xe52b4
FUN_080e52b4:
	push {r4, r5, r6, lr}	@ 000e52b4 70b5
.org 0xe52b6
	adds r6, r0, #0	@ 000e52b6 061c
.org 0xe52b8
	lsls r1, r1, #24	@ 000e52b8 0906
.org 0xe52ba
	lsrs r5, r1, #24	@ 000e52ba 0d0e
.org 0xe52bc
	lsls r2, r2, #24	@ 000e52bc 1206
.org 0xe52be
	lsrs r4, r2, #24	@ 000e52be 140e
.org 0xe52c0
	ldr r0, [pc, #64]	@ 000e52c0 1048
.org 0xe52c2
	ldr r0, [r0, #0]	@ 000e52c2 0068
.org 0xe52c4
	bl 0x5500	@ 000e52c4 20f71cf9
.org 0xe52c8
	adds r3, r0, #0	@ 000e52c8 031c
.org 0xe52ca
	cmp r3, #0	@ 000e52ca 002b
.org 0xe52cc
	beq.n 0xe52fe	@ 000e52cc 17d0
.org 0xe52ce
	adds r1, r3, #0	@ 000e52ce 191c
.org 0xe52d0
	adds r1, #37	@ 000e52d0 2531
.org 0xe52d2
	movs r2, #0	@ 000e52d2 0022
.org 0xe52d4
	movs r0, #1	@ 000e52d4 0120
.org 0xe52d6
	strb r0, [r1, #0]	@ 000e52d6 0870
.org 0xe52d8
	ldr r0, [pc, #44]	@ 000e52d8 0b48
.org 0xe52da
	movs r1, #76	@ 000e52da 4c21
.org 0xe52dc
	strb r1, [r3, #9]	@ 000e52dc 5972
.org 0xe52de
	adds r1, #228	@ 000e52de e431
.org 0xe52e0
	adds r0, r0, r1	@ 000e52e0 4018
.org 0xe52e2
	ldr r0, [r0, #0]	@ 000e52e2 0068
.org 0xe52e4
	ldr r0, [r0, #0]	@ 000e52e4 0068
.org 0xe52e6
	str r0, [r3, #20]	@ 000e52e6 5861
.org 0xe52e8
	movs r0, #0	@ 000e52e8 0020
.org 0xe52ea
	strh r2, [r3, #32]	@ 000e52ea 1a84
.org 0xe52ec
	adds r1, r3, #0	@ 000e52ec 191c
.org 0xe52ee
	adds r1, #34	@ 000e52ee 2231
.org 0xe52f0
	strb r0, [r1, #0]	@ 000e52f0 0870
.org 0xe52f2
	ldr r0, [r6, #0]	@ 000e52f2 3068
.org 0xe52f4
	ldr r1, [r6, #4]	@ 000e52f4 7168
.org 0xe52f6
	str r0, [r3, #84]	@ 000e52f6 5865
.org 0xe52f8
	str r1, [r3, #88]	@ 000e52f8 9965
.org 0xe52fa
	strb r5, [r3, #16]	@ 000e52fa 1d74
.org 0xe52fc
	strb r4, [r3, #17]	@ 000e52fc 5c74
.org 0xe52fe
	pop {r4, r5, r6}	@ 000e52fe 70bc
.org 0xe5300
	pop {r0}	@ 000e5300 01bc
.org 0xe5302
	bx r0	@ 000e5302 0047
