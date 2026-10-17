@ FUN_080ff0b8  entry 0x080ff0b8  size 92
.thumb
.org 0xff0b8
FUN_080ff0b8:
	push {r4, r5, r6, lr}	@ 000ff0b8 70b5
.org 0xff0ba
	adds r4, r0, #0	@ 000ff0ba 041c
.org 0xff0bc
	lsls r1, r1, #24	@ 000ff0bc 0906
.org 0xff0be
	lsrs r6, r1, #24	@ 000ff0be 0e0e
.org 0xff0c0
	lsls r2, r2, #24	@ 000ff0c0 1206
.org 0xff0c2
	lsrs r5, r2, #24	@ 000ff0c2 150e
.org 0xff0c4
	ldr r0, [pc, #76]	@ 000ff0c4 1348
.org 0xff0c6
	ldr r0, [r0, #0]	@ 000ff0c6 0068
.org 0xff0c8
	bl 0x5500	@ 000ff0c8 06f71afa
.org 0xff0cc
	adds r3, r0, #0	@ 000ff0cc 031c
.org 0xff0ce
	cmp r3, #0	@ 000ff0ce 002b
.org 0xff0d0
	beq.n 0xff10e	@ 000ff0d0 1dd0
.org 0xff0d2
	adds r1, r3, #0	@ 000ff0d2 191c
.org 0xff0d4
	adds r1, #37	@ 000ff0d4 2531
.org 0xff0d6
	movs r2, #0	@ 000ff0d6 0022
.org 0xff0d8
	movs r0, #30	@ 000ff0d8 1e20
.org 0xff0da
	strb r0, [r1, #0]	@ 000ff0da 0870
.org 0xff0dc
	ldr r0, [pc, #56]	@ 000ff0dc 0e48
.org 0xff0de
	movs r1, #52	@ 000ff0de 3421
.org 0xff0e0
	strb r1, [r3, #9]	@ 000ff0e0 5972
.org 0xff0e2
	adds r0, #208	@ 000ff0e2 d030
.org 0xff0e4
	ldr r0, [r0, #0]	@ 000ff0e4 0068
.org 0xff0e6
	ldr r0, [r0, #0]	@ 000ff0e6 0068
.org 0xff0e8
	str r0, [r3, #20]	@ 000ff0e8 5861
.org 0xff0ea
	movs r0, #0	@ 000ff0ea 0020
.org 0xff0ec
	strh r2, [r3, #32]	@ 000ff0ec 1a84
.org 0xff0ee
	adds r1, r3, #0	@ 000ff0ee 191c
.org 0xff0f0
	adds r1, #34	@ 000ff0f0 2231
.org 0xff0f2
	strb r0, [r1, #0]	@ 000ff0f2 0870
.org 0xff0f4
	ldrb r1, [r3, #11]	@ 000ff0f4 d97a
.org 0xff0f6
	movs r0, #16	@ 000ff0f6 1020
.org 0xff0f8
	orrs r0, r1	@ 000ff0f8 0843
.org 0xff0fa
	strb r0, [r3, #11]	@ 000ff0fa d872
.org 0xff0fc
	ldrb r0, [r3, #28]	@ 000ff0fc 187f
.org 0xff0fe
	strb r0, [r3, #29]	@ 000ff0fe 5877
.org 0xff100
	str r4, [r3, #40]	@ 000ff100 9c62
.org 0xff102
	ldr r0, [r4, #84]	@ 000ff102 606d
.org 0xff104
	ldr r1, [r4, #88]	@ 000ff104 a16d
.org 0xff106
	str r0, [r3, #84]	@ 000ff106 5865
.org 0xff108
	str r1, [r3, #88]	@ 000ff108 9965
.org 0xff10a
	strb r6, [r3, #16]	@ 000ff10a 1e74
.org 0xff10c
	strb r5, [r3, #17]	@ 000ff10c 5d74
.org 0xff10e
	pop {r4, r5, r6}	@ 000ff10e 70bc
.org 0xff110
	pop {r0}	@ 000ff110 01bc
.org 0xff112
	bx r0	@ 000ff112 0047
