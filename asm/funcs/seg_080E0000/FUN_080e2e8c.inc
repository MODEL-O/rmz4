@ FUN_080e2e8c  entry 0x080e2e8c  size 80
.thumb
.org 0xe2e8c
FUN_080e2e8c:
	push {r4, r5, r6, lr}	@ 000e2e8c 70b5
.org 0xe2e8e
	adds r6, r0, #0	@ 000e2e8e 061c
.org 0xe2e90
	lsls r1, r1, #24	@ 000e2e90 0906
.org 0xe2e92
	lsrs r5, r1, #24	@ 000e2e92 0d0e
.org 0xe2e94
	lsls r2, r2, #24	@ 000e2e94 1206
.org 0xe2e96
	lsrs r4, r2, #24	@ 000e2e96 140e
.org 0xe2e98
	ldr r0, [pc, #64]	@ 000e2e98 1048
.org 0xe2e9a
	ldr r0, [r0, #0]	@ 000e2e9a 0068
.org 0xe2e9c
	bl 0x5500	@ 000e2e9c 22f730fb
.org 0xe2ea0
	adds r3, r0, #0	@ 000e2ea0 031c
.org 0xe2ea2
	cmp r3, #0	@ 000e2ea2 002b
.org 0xe2ea4
	beq.n 0xe2ed6	@ 000e2ea4 17d0
.org 0xe2ea6
	adds r1, r3, #0	@ 000e2ea6 191c
.org 0xe2ea8
	adds r1, #37	@ 000e2ea8 2531
.org 0xe2eaa
	movs r2, #0	@ 000e2eaa 0022
.org 0xe2eac
	movs r0, #1	@ 000e2eac 0120
.org 0xe2eae
	strb r0, [r1, #0]	@ 000e2eae 0870
.org 0xe2eb0
	ldr r0, [pc, #44]	@ 000e2eb0 0b48
.org 0xe2eb2
	movs r1, #68	@ 000e2eb2 4421
.org 0xe2eb4
	strb r1, [r3, #9]	@ 000e2eb4 5972
.org 0xe2eb6
	adds r1, #204	@ 000e2eb6 cc31
.org 0xe2eb8
	adds r0, r0, r1	@ 000e2eb8 4018
.org 0xe2eba
	ldr r0, [r0, #0]	@ 000e2eba 0068
.org 0xe2ebc
	ldr r0, [r0, #0]	@ 000e2ebc 0068
.org 0xe2ebe
	str r0, [r3, #20]	@ 000e2ebe 5861
.org 0xe2ec0
	movs r0, #0	@ 000e2ec0 0020
.org 0xe2ec2
	strh r2, [r3, #32]	@ 000e2ec2 1a84
.org 0xe2ec4
	adds r1, r3, #0	@ 000e2ec4 191c
.org 0xe2ec6
	adds r1, #34	@ 000e2ec6 2231
.org 0xe2ec8
	strb r0, [r1, #0]	@ 000e2ec8 0870
.org 0xe2eca
	ldr r0, [r6, #0]	@ 000e2eca 3068
.org 0xe2ecc
	ldr r1, [r6, #4]	@ 000e2ecc 7168
.org 0xe2ece
	str r0, [r3, #84]	@ 000e2ece 5865
.org 0xe2ed0
	str r1, [r3, #88]	@ 000e2ed0 9965
.org 0xe2ed2
	strb r5, [r3, #16]	@ 000e2ed2 1d74
.org 0xe2ed4
	strb r4, [r3, #17]	@ 000e2ed4 5c74
.org 0xe2ed6
	pop {r4, r5, r6}	@ 000e2ed6 70bc
.org 0xe2ed8
	pop {r0}	@ 000e2ed8 01bc
.org 0xe2eda
	bx r0	@ 000e2eda 0047
