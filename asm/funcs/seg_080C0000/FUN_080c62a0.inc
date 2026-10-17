@ FUN_080c62a0  entry 0x080c62a0  size 82
.thumb
.org 0xc62a0
FUN_080c62a0:
	push {r4, r5, r6, r7, lr}	@ 000c62a0 f0b5
.org 0xc62a2
	adds r7, r0, #0	@ 000c62a2 071c
.org 0xc62a4
	lsls r1, r1, #24	@ 000c62a4 0906
.org 0xc62a6
	lsrs r6, r1, #24	@ 000c62a6 0e0e
.org 0xc62a8
	lsls r2, r2, #24	@ 000c62a8 1206
.org 0xc62aa
	lsrs r5, r2, #24	@ 000c62aa 150e
.org 0xc62ac
	lsls r3, r3, #24	@ 000c62ac 1b06
.org 0xc62ae
	lsrs r4, r3, #24	@ 000c62ae 1c0e
.org 0xc62b0
	ldr r0, [pc, #64]	@ 000c62b0 1048
.org 0xc62b2
	ldr r0, [r0, #0]	@ 000c62b2 0068
.org 0xc62b4
	bl 0x5500	@ 000c62b4 3ff724f9
.org 0xc62b8
	adds r3, r0, #0	@ 000c62b8 031c
.org 0xc62ba
	cmp r3, #0	@ 000c62ba 002b
.org 0xc62bc
	beq.n 0xc62ec	@ 000c62bc 16d0
.org 0xc62be
	adds r1, r3, #0	@ 000c62be 191c
.org 0xc62c0
	adds r1, #37	@ 000c62c0 2531
.org 0xc62c2
	movs r2, #0	@ 000c62c2 0022
.org 0xc62c4
	movs r0, #8	@ 000c62c4 0820
.org 0xc62c6
	strb r0, [r1, #0]	@ 000c62c6 0870
.org 0xc62c8
	ldr r1, [pc, #44]	@ 000c62c8 0b49
.org 0xc62ca
	movs r0, #26	@ 000c62ca 1a20
.org 0xc62cc
	strb r0, [r3, #9]	@ 000c62cc 5872
.org 0xc62ce
	ldr r0, [r1, #104]	@ 000c62ce 886e
.org 0xc62d0
	ldr r0, [r0, #0]	@ 000c62d0 0068
.org 0xc62d2
	str r0, [r3, #20]	@ 000c62d2 5861
.org 0xc62d4
	movs r0, #0	@ 000c62d4 0020
.org 0xc62d6
	strh r2, [r3, #32]	@ 000c62d6 1a84
.org 0xc62d8
	adds r1, r3, #0	@ 000c62d8 191c
.org 0xc62da
	adds r1, #34	@ 000c62da 2231
.org 0xc62dc
	strb r0, [r1, #0]	@ 000c62dc 0870
.org 0xc62de
	ldr r0, [r7, #0]	@ 000c62de 3868
.org 0xc62e0
	ldr r1, [r7, #4]	@ 000c62e0 7968
.org 0xc62e2
	str r0, [r3, #84]	@ 000c62e2 5865
.org 0xc62e4
	str r1, [r3, #88]	@ 000c62e4 9965
.org 0xc62e6
	strb r6, [r3, #16]	@ 000c62e6 1e74
.org 0xc62e8
	strb r5, [r3, #17]	@ 000c62e8 5d74
.org 0xc62ea
	strb r4, [r3, #18]	@ 000c62ea 9c74
.org 0xc62ec
	pop {r4, r5, r6, r7}	@ 000c62ec f0bc
.org 0xc62ee
	pop {r0}	@ 000c62ee 01bc
.org 0xc62f0
	bx r0	@ 000c62f0 0047
