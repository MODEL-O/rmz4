@ FUN_080fa0b0  entry 0x080fa0b0  size 124
.thumb
.org 0xfa0b0
FUN_080fa0b0:
	push {r4, lr}	@ 000fa0b0 10b5
.org 0xfa0b2
	adds r4, r0, #0	@ 000fa0b2 041c
.org 0xfa0b4
	ldr r1, [pc, #116]	@ 000fa0b4 1d49
.org 0xfa0b6
	ldrb r0, [r4, #9]	@ 000fa0b6 607a
.org 0xfa0b8
	lsls r0, r0, #2	@ 000fa0b8 8000
.org 0xfa0ba
	adds r0, r0, r1	@ 000fa0ba 4018
.org 0xfa0bc
	movs r1, #1	@ 000fa0bc 0121
.org 0xfa0be
	str r1, [r4, #12]	@ 000fa0be e160
.org 0xfa0c0
	ldr r0, [r0, #0]	@ 000fa0c0 0068
.org 0xfa0c2
	ldr r0, [r0, #4]	@ 000fa0c2 4068
.org 0xfa0c4
	str r0, [r4, #20]	@ 000fa0c4 6061
.org 0xfa0c6
	ldrb r1, [r4, #10]	@ 000fa0c6 a17a
.org 0xfa0c8
	movs r0, #1	@ 000fa0c8 0120
.org 0xfa0ca
	orrs r0, r1	@ 000fa0ca 0843
.org 0xfa0cc
	movs r1, #2	@ 000fa0cc 0221
.org 0xfa0ce
	orrs r0, r1	@ 000fa0ce 0843
.org 0xfa0d0
	strb r0, [r4, #10]	@ 000fa0d0 a072
.org 0xfa0d2
	adds r1, r4, #0	@ 000fa0d2 211c
.org 0xfa0d4
	adds r1, #180	@ 000fa0d4 b431
.org 0xfa0d6
	ldr r0, [r4, #88]	@ 000fa0d6 a06d
.org 0xfa0d8
	ldr r2, [pc, #84]	@ 000fa0d8 154a
.org 0xfa0da
	adds r0, r0, r2	@ 000fa0da 8018
.org 0xfa0dc
	str r0, [r1, #0]	@ 000fa0dc 0860
.org 0xfa0de
	ldr r0, [pc, #84]	@ 000fa0de 1548
.org 0xfa0e0
	str r0, [r4, #96]	@ 000fa0e0 2066
.org 0xfa0e2
	adds r0, r4, #0	@ 000fa0e2 201c
.org 0xfa0e4
	bl 0x1cc9c	@ 000fa0e4 22f7dafd
.org 0xfa0e8
	movs r2, #0	@ 000fa0e8 0022
.org 0xfa0ea
	ldrb r1, [r4, #10]	@ 000fa0ea a17a
.org 0xfa0ec
	movs r0, #239	@ 000fa0ec ef20
.org 0xfa0ee
	ands r0, r1	@ 000fa0ee 0840
.org 0xfa0f0
	strb r0, [r4, #10]	@ 000fa0f0 a072
.org 0xfa0f2
	adds r0, r4, #0	@ 000fa0f2 201c
.org 0xfa0f4
	adds r0, #76	@ 000fa0f4 4c30
.org 0xfa0f6
	strb r2, [r0, #0]	@ 000fa0f6 0270
.org 0xfa0f8
	adds r2, r4, #0	@ 000fa0f8 221c
.org 0xfa0fa
	adds r2, #74	@ 000fa0fa 4a32
.org 0xfa0fc
	ldrb r1, [r2, #0]	@ 000fa0fc 1178
.org 0xfa0fe
	movs r0, #17	@ 000fa0fe 1120
.org 0xfa100
	negs r0, r0	@ 000fa100 4042
.org 0xfa102
	ands r0, r1	@ 000fa102 0840
.org 0xfa104
	strb r0, [r2, #0]	@ 000fa104 1070
.org 0xfa106
	movs r1, #164	@ 000fa106 a421
.org 0xfa108
	lsls r1, r1, #8	@ 000fa108 0902
.org 0xfa10a
	adds r0, r4, #0	@ 000fa10a 201c
.org 0xfa10c
	bl 0x1cf00	@ 000fa10c 22f7f8fe
.org 0xfa110
	ldrb r1, [r4, #11]	@ 000fa110 e17a
.org 0xfa112
	movs r0, #8	@ 000fa112 0820
.org 0xfa114
	orrs r0, r1	@ 000fa114 0843
.org 0xfa116
	strb r0, [r4, #11]	@ 000fa116 e072
.org 0xfa118
	ldr r0, [pc, #28]	@ 000fa118 0748
.org 0xfa11a
	str r0, [r4, #48]	@ 000fa11a 2063
.org 0xfa11c
	ldr r0, [pc, #28]	@ 000fa11c 0748
.org 0xfa11e
	strh r0, [r4, #38]	@ 000fa11e e084
.org 0xfa120
	adds r0, r4, #0	@ 000fa120 201c
.org 0xfa122
	bl 0xfa140	@ 000fa122 00f00df8
.org 0xfa126
	pop {r4}	@ 000fa126 10bc
.org 0xfa128
	pop {r0}	@ 000fa128 01bc
.org 0xfa12a
	bx r0	@ 000fa12a 0047
