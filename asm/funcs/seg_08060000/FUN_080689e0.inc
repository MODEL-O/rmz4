@ FUN_080689e0  entry 0x080689e0  size 90
.thumb
.org 0x689e0
FUN_080689e0:
	push {r4, r5, r6, lr}	@ 000689e0 70b5
.org 0x689e2
	adds r6, r0, #0	@ 000689e2 061c
.org 0x689e4
	lsls r1, r1, #24	@ 000689e4 0906
.org 0x689e6
	lsrs r5, r1, #24	@ 000689e6 0d0e
.org 0x689e8
	lsls r2, r2, #24	@ 000689e8 1206
.org 0x689ea
	lsrs r4, r2, #24	@ 000689ea 140e
.org 0x689ec
	ldr r0, [pc, #76]	@ 000689ec 1348
.org 0x689ee
	ldr r0, [r0, #0]	@ 000689ee 0068
.org 0x689f0
	bl 0x5500	@ 000689f0 9cf786fd
.org 0x689f4
	adds r3, r0, #0	@ 000689f4 031c
.org 0x689f6
	cmp r3, #0	@ 000689f6 002b
.org 0x689f8
	beq.n 0x68a32	@ 000689f8 1bd0
.org 0x689fa
	adds r1, r3, #0	@ 000689fa 191c
.org 0x689fc
	adds r1, #37	@ 000689fc 2531
.org 0x689fe
	movs r2, #0	@ 000689fe 0022
.org 0x68a00
	movs r0, #24	@ 00068a00 1820
.org 0x68a02
	strb r0, [r1, #0]	@ 00068a02 0870
.org 0x68a04
	ldr r1, [pc, #56]	@ 00068a04 0e49
.org 0x68a06
	movs r0, #9	@ 00068a06 0920
.org 0x68a08
	strb r0, [r3, #9]	@ 00068a08 5872
.org 0x68a0a
	ldr r0, [r1, #36]	@ 00068a0a 486a
.org 0x68a0c
	ldr r0, [r0, #0]	@ 00068a0c 0068
.org 0x68a0e
	str r0, [r3, #20]	@ 00068a0e 5861
.org 0x68a10
	movs r0, #0	@ 00068a10 0020
.org 0x68a12
	strh r2, [r3, #32]	@ 00068a12 1a84
.org 0x68a14
	adds r1, r3, #0	@ 00068a14 191c
.org 0x68a16
	adds r1, #34	@ 00068a16 2231
.org 0x68a18
	strb r0, [r1, #0]	@ 00068a18 0870
.org 0x68a1a
	ldrb r1, [r3, #11]	@ 00068a1a d97a
.org 0x68a1c
	movs r0, #16	@ 00068a1c 1020
.org 0x68a1e
	orrs r0, r1	@ 00068a1e 0843
.org 0x68a20
	strb r0, [r3, #11]	@ 00068a20 d872
.org 0x68a22
	ldrb r0, [r3, #28]	@ 00068a22 187f
.org 0x68a24
	strb r0, [r3, #29]	@ 00068a24 5877
.org 0x68a26
	ldr r0, [r6, #0]	@ 00068a26 3068
.org 0x68a28
	ldr r1, [r6, #4]	@ 00068a28 7168
.org 0x68a2a
	str r0, [r3, #84]	@ 00068a2a 5865
.org 0x68a2c
	str r1, [r3, #88]	@ 00068a2c 9965
.org 0x68a2e
	strb r5, [r3, #16]	@ 00068a2e 1d74
.org 0x68a30
	strb r4, [r3, #17]	@ 00068a30 5c74
.org 0x68a32
	adds r0, r3, #0	@ 00068a32 181c
.org 0x68a34
	pop {r4, r5, r6}	@ 00068a34 70bc
.org 0x68a36
	pop {r1}	@ 00068a36 02bc
.org 0x68a38
	bx r1	@ 00068a38 0847
