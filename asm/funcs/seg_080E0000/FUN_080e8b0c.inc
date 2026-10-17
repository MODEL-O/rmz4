@ FUN_080e8b0c  entry 0x080e8b0c  size 88
.thumb
.org 0xe8b0c
FUN_080e8b0c:
	push {r4, r5, r6, r7, lr}	@ 000e8b0c f0b5
.org 0xe8b0e
	adds r6, r0, #0	@ 000e8b0e 061c
.org 0xe8b10
	adds r7, r1, #0	@ 000e8b10 0f1c
.org 0xe8b12
	lsls r2, r2, #24	@ 000e8b12 1206
.org 0xe8b14
	lsrs r5, r2, #24	@ 000e8b14 150e
.org 0xe8b16
	lsls r3, r3, #24	@ 000e8b16 1b06
.org 0xe8b18
	lsrs r4, r3, #24	@ 000e8b18 1c0e
.org 0xe8b1a
	ldr r0, [pc, #72]	@ 000e8b1a 1248
.org 0xe8b1c
	ldr r0, [r0, #0]	@ 000e8b1c 0068
.org 0xe8b1e
	bl 0x5500	@ 000e8b1e 1cf7effc
.org 0xe8b22
	adds r3, r0, #0	@ 000e8b22 031c
.org 0xe8b24
	cmp r3, #0	@ 000e8b24 002b
.org 0xe8b26
	beq.n 0xe8b5c	@ 000e8b26 19d0
.org 0xe8b28
	adds r1, r3, #0	@ 000e8b28 191c
.org 0xe8b2a
	adds r1, #37	@ 000e8b2a 2531
.org 0xe8b2c
	movs r2, #0	@ 000e8b2c 0022
.org 0xe8b2e
	movs r0, #1	@ 000e8b2e 0120
.org 0xe8b30
	strb r0, [r1, #0]	@ 000e8b30 0870
.org 0xe8b32
	ldr r0, [pc, #52]	@ 000e8b32 0d48
.org 0xe8b34
	movs r1, #90	@ 000e8b34 5a21
.org 0xe8b36
	strb r1, [r3, #9]	@ 000e8b36 5972
.org 0xe8b38
	movs r1, #180	@ 000e8b38 b421
.org 0xe8b3a
	lsls r1, r1, #1	@ 000e8b3a 4900
.org 0xe8b3c
	adds r0, r0, r1	@ 000e8b3c 4018
.org 0xe8b3e
	ldr r0, [r0, #0]	@ 000e8b3e 0068
.org 0xe8b40
	ldr r0, [r0, #0]	@ 000e8b40 0068
.org 0xe8b42
	str r0, [r3, #20]	@ 000e8b42 5861
.org 0xe8b44
	movs r0, #0	@ 000e8b44 0020
.org 0xe8b46
	strh r2, [r3, #32]	@ 000e8b46 1a84
.org 0xe8b48
	adds r1, r3, #0	@ 000e8b48 191c
.org 0xe8b4a
	adds r1, #34	@ 000e8b4a 2231
.org 0xe8b4c
	strb r0, [r1, #0]	@ 000e8b4c 0870
.org 0xe8b4e
	str r6, [r3, #40]	@ 000e8b4e 9e62
.org 0xe8b50
	ldr r0, [r7, #0]	@ 000e8b50 3868
.org 0xe8b52
	ldr r1, [r7, #4]	@ 000e8b52 7968
.org 0xe8b54
	str r0, [r3, #84]	@ 000e8b54 5865
.org 0xe8b56
	str r1, [r3, #88]	@ 000e8b56 9965
.org 0xe8b58
	strb r5, [r3, #16]	@ 000e8b58 1d74
.org 0xe8b5a
	strb r4, [r3, #17]	@ 000e8b5a 5c74
.org 0xe8b5c
	adds r0, r3, #0	@ 000e8b5c 181c
.org 0xe8b5e
	pop {r4, r5, r6, r7}	@ 000e8b5e f0bc
.org 0xe8b60
	pop {r1}	@ 000e8b60 02bc
.org 0xe8b62
	bx r1	@ 000e8b62 0847
