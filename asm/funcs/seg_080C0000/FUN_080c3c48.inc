@ FUN_080c3c48  entry 0x080c3c48  size 78
.thumb
.org 0xc3c48
FUN_080c3c48:
	push {r4, r5, r6, lr}	@ 000c3c48 70b5
.org 0xc3c4a
	adds r4, r0, #0	@ 000c3c4a 041c
.org 0xc3c4c
	lsls r1, r1, #24	@ 000c3c4c 0906
.org 0xc3c4e
	lsrs r6, r1, #24	@ 000c3c4e 0e0e
.org 0xc3c50
	lsls r2, r2, #24	@ 000c3c50 1206
.org 0xc3c52
	lsrs r5, r2, #24	@ 000c3c52 150e
.org 0xc3c54
	ldr r0, [pc, #64]	@ 000c3c54 1048
.org 0xc3c56
	ldr r0, [r0, #0]	@ 000c3c56 0068
.org 0xc3c58
	bl 0x5500	@ 000c3c58 41f752fc
.org 0xc3c5c
	adds r3, r0, #0	@ 000c3c5c 031c
.org 0xc3c5e
	cmp r3, #0	@ 000c3c5e 002b
.org 0xc3c60
	beq.n 0xc3c90	@ 000c3c60 16d0
.org 0xc3c62
	adds r1, r3, #0	@ 000c3c62 191c
.org 0xc3c64
	adds r1, #37	@ 000c3c64 2531
.org 0xc3c66
	movs r2, #0	@ 000c3c66 0022
.org 0xc3c68
	movs r0, #8	@ 000c3c68 0820
.org 0xc3c6a
	strb r0, [r1, #0]	@ 000c3c6a 0870
.org 0xc3c6c
	ldr r1, [pc, #44]	@ 000c3c6c 0b49
.org 0xc3c6e
	movs r0, #20	@ 000c3c6e 1420
.org 0xc3c70
	strb r0, [r3, #9]	@ 000c3c70 5872
.org 0xc3c72
	ldr r0, [r1, #80]	@ 000c3c72 086d
.org 0xc3c74
	ldr r0, [r0, #0]	@ 000c3c74 0068
.org 0xc3c76
	str r0, [r3, #20]	@ 000c3c76 5861
.org 0xc3c78
	movs r0, #0	@ 000c3c78 0020
.org 0xc3c7a
	strh r2, [r3, #32]	@ 000c3c7a 1a84
.org 0xc3c7c
	adds r1, r3, #0	@ 000c3c7c 191c
.org 0xc3c7e
	adds r1, #34	@ 000c3c7e 2231
.org 0xc3c80
	strb r0, [r1, #0]	@ 000c3c80 0870
.org 0xc3c82
	str r4, [r3, #40]	@ 000c3c82 9c62
.org 0xc3c84
	ldr r0, [r4, #84]	@ 000c3c84 606d
.org 0xc3c86
	ldr r1, [r4, #88]	@ 000c3c86 a16d
.org 0xc3c88
	str r0, [r3, #84]	@ 000c3c88 5865
.org 0xc3c8a
	str r1, [r3, #88]	@ 000c3c8a 9965
.org 0xc3c8c
	strb r6, [r3, #16]	@ 000c3c8c 1e74
.org 0xc3c8e
	strb r5, [r3, #17]	@ 000c3c8e 5d74
.org 0xc3c90
	pop {r4, r5, r6}	@ 000c3c90 70bc
.org 0xc3c92
	pop {r0}	@ 000c3c92 01bc
.org 0xc3c94
	bx r0	@ 000c3c94 0047
