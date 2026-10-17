@ FUN_080eb3b4  entry 0x080eb3b4  size 42
.thumb
.org 0xeb3b4
FUN_080eb3b4:
	push {lr}	@ 000eb3b4 00b5
.org 0xeb3b6
	ldr r1, [r0, #44]	@ 000eb3b6 c16a
.org 0xeb3b8
	ldr r0, [r0, #12]	@ 000eb3b8 c068
.org 0xeb3ba
	ldr r3, [r0, #44]	@ 000eb3ba c36a
.org 0xeb3bc
	movs r0, #8	@ 000eb3bc 0820
.org 0xeb3be
	ldrsb r0, [r3, r0]	@ 000eb3be 1856
.org 0xeb3c0
	cmp r0, #0	@ 000eb3c0 0028
.org 0xeb3c2
	bne.n 0xeb3da	@ 000eb3c2 0ad1
.org 0xeb3c4
	adds r0, r1, #0	@ 000eb3c4 081c
.org 0xeb3c6
	adds r0, #180	@ 000eb3c6 b430
.org 0xeb3c8
	str r3, [r0, #0]	@ 000eb3c8 0360
.org 0xeb3ca
	ldr r1, [pc, #20]	@ 000eb3ca 0549
.org 0xeb3cc
	ldrh r0, [r1, #20]	@ 000eb3cc 888a
.org 0xeb3ce
	movs r2, #1	@ 000eb3ce 0122
.org 0xeb3d0
	orrs r0, r2	@ 000eb3d0 1043
.org 0xeb3d2
	strh r0, [r1, #20]	@ 000eb3d2 8882
.org 0xeb3d4
	ldr r1, [pc, #12]	@ 000eb3d4 0349
.org 0xeb3d6
	adds r0, r3, r1	@ 000eb3d6 5818
.org 0xeb3d8
	strb r2, [r0, #0]	@ 000eb3d8 0270
.org 0xeb3da
	pop {r0}	@ 000eb3da 01bc
.org 0xeb3dc
	bx r0	@ 000eb3dc 0047
