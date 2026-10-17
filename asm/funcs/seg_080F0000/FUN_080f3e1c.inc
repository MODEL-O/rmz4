@ FUN_080f3e1c  entry 0x080f3e1c  size 90
.thumb
.org 0xf3e1c
FUN_080f3e1c:
	push {r4, r5, r6, lr}	@ 000f3e1c 70b5
.org 0xf3e1e
	adds r6, r0, #0	@ 000f3e1e 061c
.org 0xf3e20
	lsls r1, r1, #24	@ 000f3e20 0906
.org 0xf3e22
	lsrs r5, r1, #24	@ 000f3e22 0d0e
.org 0xf3e24
	lsls r2, r2, #24	@ 000f3e24 1206
.org 0xf3e26
	lsrs r4, r2, #24	@ 000f3e26 140e
.org 0xf3e28
	ldr r0, [pc, #76]	@ 000f3e28 1348
.org 0xf3e2a
	ldr r0, [r0, #0]	@ 000f3e2a 0068
.org 0xf3e2c
	bl 0x5500	@ 000f3e2c 11f768fb
.org 0xf3e30
	adds r3, r0, #0	@ 000f3e30 031c
.org 0xf3e32
	cmp r3, #0	@ 000f3e32 002b
.org 0xf3e34
	beq.n 0xf3e6e	@ 000f3e34 1bd0
.org 0xf3e36
	adds r1, r3, #0	@ 000f3e36 191c
.org 0xf3e38
	adds r1, #37	@ 000f3e38 2531
.org 0xf3e3a
	movs r2, #0	@ 000f3e3a 0022
.org 0xf3e3c
	movs r0, #30	@ 000f3e3c 1e20
.org 0xf3e3e
	strb r0, [r1, #0]	@ 000f3e3e 0870
.org 0xf3e40
	ldr r1, [pc, #56]	@ 000f3e40 0e49
.org 0xf3e42
	movs r0, #19	@ 000f3e42 1320
.org 0xf3e44
	strb r0, [r3, #9]	@ 000f3e44 5872
.org 0xf3e46
	ldr r0, [r1, #76]	@ 000f3e46 c86c
.org 0xf3e48
	ldr r0, [r0, #0]	@ 000f3e48 0068
.org 0xf3e4a
	str r0, [r3, #20]	@ 000f3e4a 5861
.org 0xf3e4c
	movs r0, #0	@ 000f3e4c 0020
.org 0xf3e4e
	strh r2, [r3, #32]	@ 000f3e4e 1a84
.org 0xf3e50
	adds r1, r3, #0	@ 000f3e50 191c
.org 0xf3e52
	adds r1, #34	@ 000f3e52 2231
.org 0xf3e54
	strb r0, [r1, #0]	@ 000f3e54 0870
.org 0xf3e56
	ldrb r1, [r3, #11]	@ 000f3e56 d97a
.org 0xf3e58
	movs r0, #16	@ 000f3e58 1020
.org 0xf3e5a
	orrs r0, r1	@ 000f3e5a 0843
.org 0xf3e5c
	strb r0, [r3, #11]	@ 000f3e5c d872
.org 0xf3e5e
	ldrb r0, [r3, #28]	@ 000f3e5e 187f
.org 0xf3e60
	strb r0, [r3, #29]	@ 000f3e60 5877
.org 0xf3e62
	ldr r0, [r6, #0]	@ 000f3e62 3068
.org 0xf3e64
	ldr r1, [r6, #4]	@ 000f3e64 7168
.org 0xf3e66
	str r0, [r3, #84]	@ 000f3e66 5865
.org 0xf3e68
	str r1, [r3, #88]	@ 000f3e68 9965
.org 0xf3e6a
	strb r5, [r3, #16]	@ 000f3e6a 1d74
.org 0xf3e6c
	strb r4, [r3, #17]	@ 000f3e6c 5c74
.org 0xf3e6e
	adds r0, r3, #0	@ 000f3e6e 181c
.org 0xf3e70
	pop {r4, r5, r6}	@ 000f3e70 70bc
.org 0xf3e72
	pop {r1}	@ 000f3e72 02bc
.org 0xf3e74
	bx r1	@ 000f3e74 0847
