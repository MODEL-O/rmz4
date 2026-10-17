@ FUN_080d29c0  entry 0x080d29c0  size 80
.thumb
.org 0xd29c0
FUN_080d29c0:
	push {r4, r5, r6, r7, lr}	@ 000d29c0 f0b5
.org 0xd29c2
	adds r6, r0, #0	@ 000d29c2 061c
.org 0xd29c4
	adds r7, r1, #0	@ 000d29c4 0f1c
.org 0xd29c6
	lsls r2, r2, #24	@ 000d29c6 1206
.org 0xd29c8
	lsrs r5, r2, #24	@ 000d29c8 150e
.org 0xd29ca
	lsls r3, r3, #24	@ 000d29ca 1b06
.org 0xd29cc
	lsrs r4, r3, #24	@ 000d29cc 1c0e
.org 0xd29ce
	ldr r0, [pc, #64]	@ 000d29ce 1048
.org 0xd29d0
	ldr r0, [r0, #0]	@ 000d29d0 0068
.org 0xd29d2
	bl 0x5500	@ 000d29d2 32f795fd
.org 0xd29d6
	adds r3, r0, #0	@ 000d29d6 031c
.org 0xd29d8
	cmp r3, #0	@ 000d29d8 002b
.org 0xd29da
	beq.n 0xd2a0a	@ 000d29da 16d0
.org 0xd29dc
	adds r1, r3, #0	@ 000d29dc 191c
.org 0xd29de
	adds r1, #37	@ 000d29de 2531
.org 0xd29e0
	movs r2, #0	@ 000d29e0 0022
.org 0xd29e2
	movs r0, #1	@ 000d29e2 0120
.org 0xd29e4
	strb r0, [r1, #0]	@ 000d29e4 0870
.org 0xd29e6
	ldr r1, [pc, #44]	@ 000d29e6 0b49
.org 0xd29e8
	movs r0, #7	@ 000d29e8 0720
.org 0xd29ea
	strb r0, [r3, #9]	@ 000d29ea 5872
.org 0xd29ec
	ldr r0, [r1, #28]	@ 000d29ec c869
.org 0xd29ee
	ldr r0, [r0, #0]	@ 000d29ee 0068
.org 0xd29f0
	str r0, [r3, #20]	@ 000d29f0 5861
.org 0xd29f2
	movs r0, #0	@ 000d29f2 0020
.org 0xd29f4
	strh r2, [r3, #32]	@ 000d29f4 1a84
.org 0xd29f6
	adds r1, r3, #0	@ 000d29f6 191c
.org 0xd29f8
	adds r1, #34	@ 000d29f8 2231
.org 0xd29fa
	strb r0, [r1, #0]	@ 000d29fa 0870
.org 0xd29fc
	str r6, [r3, #40]	@ 000d29fc 9e62
.org 0xd29fe
	ldr r0, [r7, #0]	@ 000d29fe 3868
.org 0xd2a00
	ldr r1, [r7, #4]	@ 000d2a00 7968
.org 0xd2a02
	str r0, [r3, #84]	@ 000d2a02 5865
.org 0xd2a04
	str r1, [r3, #88]	@ 000d2a04 9965
.org 0xd2a06
	strb r5, [r3, #16]	@ 000d2a06 1d74
.org 0xd2a08
	strb r4, [r3, #17]	@ 000d2a08 5c74
.org 0xd2a0a
	pop {r4, r5, r6, r7}	@ 000d2a0a f0bc
.org 0xd2a0c
	pop {r0}	@ 000d2a0c 01bc
.org 0xd2a0e
	bx r0	@ 000d2a0e 0047
