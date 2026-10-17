@ FUN_080bd0bc  entry 0x080bd0bc  size 96
.thumb
.org 0xbd0bc
FUN_080bd0bc:
	push {r4, r5, r6, r7, lr}	@ 000bd0bc f0b5
.org 0xbd0be
	adds r5, r0, #0	@ 000bd0be 051c
.org 0xbd0c0
	adds r7, r2, #0	@ 000bd0c0 171c
.org 0xbd0c2
	lsls r4, r1, #16	@ 000bd0c2 0c04
.org 0xbd0c4
	lsrs r6, r4, #16	@ 000bd0c4 260c
.org 0xbd0c6
	ldr r0, [pc, #84]	@ 000bd0c6 1548
.org 0xbd0c8
	ldr r0, [r0, #0]	@ 000bd0c8 0068
.org 0xbd0ca
	bl 0x5500	@ 000bd0ca 48f719fa
.org 0xbd0ce
	adds r3, r0, #0	@ 000bd0ce 031c
.org 0xbd0d0
	cmp r3, #0	@ 000bd0d0 002b
.org 0xbd0d2
	beq.n 0xbd116	@ 000bd0d2 20d0
.org 0xbd0d4
	adds r1, r3, #0	@ 000bd0d4 191c
.org 0xbd0d6
	adds r1, #37	@ 000bd0d6 2531
.org 0xbd0d8
	movs r2, #0	@ 000bd0d8 0022
.org 0xbd0da
	movs r0, #24	@ 000bd0da 1820
.org 0xbd0dc
	strb r0, [r1, #0]	@ 000bd0dc 0870
.org 0xbd0de
	ldr r0, [pc, #64]	@ 000bd0de 1048
.org 0xbd0e0
	movs r1, #119	@ 000bd0e0 7721
.org 0xbd0e2
	strb r1, [r3, #9]	@ 000bd0e2 5972
.org 0xbd0e4
	movs r1, #238	@ 000bd0e4 ee21
.org 0xbd0e6
	lsls r1, r1, #1	@ 000bd0e6 4900
.org 0xbd0e8
	adds r0, r0, r1	@ 000bd0e8 4018
.org 0xbd0ea
	ldr r0, [r0, #0]	@ 000bd0ea 0068
.org 0xbd0ec
	ldr r0, [r0, #0]	@ 000bd0ec 0068
.org 0xbd0ee
	str r0, [r3, #20]	@ 000bd0ee 5861
.org 0xbd0f0
	movs r0, #0	@ 000bd0f0 0020
.org 0xbd0f2
	strh r2, [r3, #32]	@ 000bd0f2 1a84
.org 0xbd0f4
	adds r1, r3, #0	@ 000bd0f4 191c
.org 0xbd0f6
	adds r1, #34	@ 000bd0f6 2231
.org 0xbd0f8
	strb r0, [r1, #0]	@ 000bd0f8 0870
.org 0xbd0fa
	ldrb r1, [r3, #11]	@ 000bd0fa d97a
.org 0xbd0fc
	movs r0, #16	@ 000bd0fc 1020
.org 0xbd0fe
	orrs r0, r1	@ 000bd0fe 0843
.org 0xbd100
	strb r0, [r3, #11]	@ 000bd100 d872
.org 0xbd102
	ldrb r0, [r3, #28]	@ 000bd102 187f
.org 0xbd104
	strb r0, [r3, #29]	@ 000bd104 5877
.org 0xbd106
	ldr r0, [r5, #0]	@ 000bd106 2868
.org 0xbd108
	ldr r1, [r5, #4]	@ 000bd108 6968
.org 0xbd10a
	str r0, [r3, #84]	@ 000bd10a 5865
.org 0xbd10c
	str r1, [r3, #88]	@ 000bd10c 9965
.org 0xbd10e
	lsrs r0, r4, #24	@ 000bd10e 200e
.org 0xbd110
	strb r0, [r3, #16]	@ 000bd110 1874
.org 0xbd112
	strb r6, [r3, #17]	@ 000bd112 5e74
.org 0xbd114
	str r7, [r3, #40]	@ 000bd114 9f62
.org 0xbd116
	pop {r4, r5, r6, r7}	@ 000bd116 f0bc
.org 0xbd118
	pop {r0}	@ 000bd118 01bc
.org 0xbd11a
	bx r0	@ 000bd11a 0047
