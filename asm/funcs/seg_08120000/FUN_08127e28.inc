@ FUN_08127e28  entry 0x08127e28  size 106
.thumb
.org 0x127e28
FUN_08127e28:
	push {r4, r5, r6, r7, lr}	@ 00127e28 f0b5
.org 0x127e2a
	adds r7, r0, #0	@ 00127e2a 071c
.org 0x127e2c
	adds r6, r1, #0	@ 00127e2c 0e1c
.org 0x127e2e
	lsls r2, r2, #24	@ 00127e2e 1206
.org 0x127e30
	lsrs r4, r2, #24	@ 00127e30 140e
.org 0x127e32
	cmp r4, #0	@ 00127e32 002c
.org 0x127e34
	beq.n 0x127e8c	@ 00127e34 2ad0
.org 0x127e36
	cmp r4, #16	@ 00127e36 102c
.org 0x127e38
	bls.n 0x127e3c	@ 00127e38 00d9
.org 0x127e3a
	movs r4, #16	@ 00127e3a 1024
.org 0x127e3c
	ldr r0, [pc, #84]	@ 00127e3c 1548
.org 0x127e3e
	ldr r5, [r0, #0]	@ 00127e3e 0568
.org 0x127e40
	ldr r1, [r5, #0]	@ 00127e40 2968
.org 0x127e42
	ldr r0, [pc, #84]	@ 00127e42 1548
.org 0x127e44
	cmp r1, r0	@ 00127e44 8142
.org 0x127e46
	bne.n 0x127e8c	@ 00127e46 21d1
.org 0x127e48
	adds r0, r1, #1	@ 00127e48 481c
.org 0x127e4a
	str r0, [r5, #0]	@ 00127e4a 2860
.org 0x127e4c
	adds r0, r7, #0	@ 00127e4c 381c
.org 0x127e4e
	bl 0x127b1c	@ 00127e4e fff765fe
.org 0x127e52
	str r6, [r7, #44]	@ 00127e52 fe62
.org 0x127e54
	strb r4, [r7, #8]	@ 00127e54 3c72
.org 0x127e56
	movs r0, #128	@ 00127e56 8020
.org 0x127e58
	lsls r0, r0, #24	@ 00127e58 0006
.org 0x127e5a
	str r0, [r7, #4]	@ 00127e5a 7860
.org 0x127e5c
	cmp r4, #0	@ 00127e5c 002c
.org 0x127e5e
	beq.n 0x127e70	@ 00127e5e 07d0
.org 0x127e60
	movs r1, #0	@ 00127e60 0021
.org 0x127e62
	strb r1, [r6, #0]	@ 00127e62 3170
.org 0x127e64
	subs r0, r4, #1	@ 00127e64 601e
.org 0x127e66
	lsls r0, r0, #24	@ 00127e66 0006
.org 0x127e68
	lsrs r4, r0, #24	@ 00127e68 040e
.org 0x127e6a
	adds r6, #80	@ 00127e6a 5036
.org 0x127e6c
	cmp r4, #0	@ 00127e6c 002c
.org 0x127e6e
	bne.n 0x127e62	@ 00127e6e f8d1
.org 0x127e70
	ldr r0, [r5, #32]	@ 00127e70 286a
.org 0x127e72
	cmp r0, #0	@ 00127e72 0028
.org 0x127e74
	beq.n 0x127e80	@ 00127e74 04d0
.org 0x127e76
	str r0, [r7, #56]	@ 00127e76 b863
.org 0x127e78
	ldr r0, [r5, #36]	@ 00127e78 686a
.org 0x127e7a
	str r0, [r7, #60]	@ 00127e7a f863
.org 0x127e7c
	movs r0, #0	@ 00127e7c 0020
.org 0x127e7e
	str r0, [r5, #32]	@ 00127e7e 2862
.org 0x127e80
	str r7, [r5, #36]	@ 00127e80 6f62
.org 0x127e82
	ldr r0, [pc, #24]	@ 00127e82 0648
.org 0x127e84
	str r0, [r5, #32]	@ 00127e84 2862
.org 0x127e86
	ldr r0, [pc, #16]	@ 00127e86 0448
.org 0x127e88
	str r0, [r5, #0]	@ 00127e88 2860
.org 0x127e8a
	str r0, [r7, #52]	@ 00127e8a 7863
.org 0x127e8c
	pop {r4, r5, r6, r7}	@ 00127e8c f0bc
.org 0x127e8e
	pop {r0}	@ 00127e8e 01bc
.org 0x127e90
	bx r0	@ 00127e90 0047
