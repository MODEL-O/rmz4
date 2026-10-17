@ FUN_080e6270  entry 0x080e6270  size 130
.thumb
.org 0xe6270
FUN_080e6270:
	push {r4, r5, r6, r7, lr}	@ 000e6270 f0b5
.org 0xe6272
	adds r6, r0, #0	@ 000e6272 061c
.org 0xe6274
	lsls r4, r1, #16	@ 000e6274 0c04
.org 0xe6276
	lsrs r7, r4, #16	@ 000e6276 270c
.org 0xe6278
	lsls r2, r2, #24	@ 000e6278 1206
.org 0xe627a
	lsrs r5, r2, #24	@ 000e627a 150e
.org 0xe627c
	ldr r0, [pc, #76]	@ 000e627c 1348
.org 0xe627e
	ldr r0, [r0, #0]	@ 000e627e 0068
.org 0xe6280
	bl 0x5500	@ 000e6280 1ff73ef9
.org 0xe6284
	adds r3, r0, #0	@ 000e6284 031c
.org 0xe6286
	cmp r3, #0	@ 000e6286 002b
.org 0xe6288
	beq.n 0xe62f6	@ 000e6288 35d0
.org 0xe628a
	adds r1, r3, #0	@ 000e628a 191c
.org 0xe628c
	adds r1, #37	@ 000e628c 2531
.org 0xe628e
	movs r2, #0	@ 000e628e 0022
.org 0xe6290
	movs r0, #1	@ 000e6290 0120
.org 0xe6292
	strb r0, [r1, #0]	@ 000e6292 0870
.org 0xe6294
	ldr r0, [pc, #56]	@ 000e6294 0e48
.org 0xe6296
	movs r1, #80	@ 000e6296 5021
.org 0xe6298
	strb r1, [r3, #9]	@ 000e6298 5972
.org 0xe629a
	adds r1, #240	@ 000e629a f031
.org 0xe629c
	adds r0, r0, r1	@ 000e629c 4018
.org 0xe629e
	ldr r0, [r0, #0]	@ 000e629e 0068
.org 0xe62a0
	ldr r0, [r0, #0]	@ 000e62a0 0068
.org 0xe62a2
	str r0, [r3, #20]	@ 000e62a2 5861
.org 0xe62a4
	movs r0, #0	@ 000e62a4 0020
.org 0xe62a6
	strh r2, [r3, #32]	@ 000e62a6 1a84
.org 0xe62a8
	adds r1, r3, #0	@ 000e62a8 191c
.org 0xe62aa
	adds r1, #34	@ 000e62aa 2231
.org 0xe62ac
	strb r0, [r1, #0]	@ 000e62ac 0870
.org 0xe62ae
	ldr r0, [r6, #0]	@ 000e62ae 3068
.org 0xe62b0
	ldr r1, [r6, #4]	@ 000e62b0 7168
.org 0xe62b2
	str r0, [r3, #84]	@ 000e62b2 5865
.org 0xe62b4
	str r1, [r3, #88]	@ 000e62b4 9965
.org 0xe62b6
	lsrs r0, r4, #24	@ 000e62b6 200e
.org 0xe62b8
	strb r0, [r3, #16]	@ 000e62b8 1874
.org 0xe62ba
	strb r7, [r3, #17]	@ 000e62ba 5f74
.org 0xe62bc
	adds r2, r5, #0	@ 000e62bc 2a1c
.org 0xe62be
	cmp r2, #0	@ 000e62be 002a
.org 0xe62c0
	beq.n 0xe62d4	@ 000e62c0 08d0
.org 0xe62c2
	ldrb r0, [r3, #10]	@ 000e62c2 987a
.org 0xe62c4
	movs r1, #16	@ 000e62c4 1021
.org 0xe62c6
	orrs r0, r1	@ 000e62c6 0843
.org 0xe62c8
	b.n 0xe62da	@ 000e62c8 07e0
.org 0xe62ca
	.byte 0x00	@ 000e62ca data
.org 0xe62cb
	.byte 0x00	@ 000e62cb data
.org 0xe62cc
	.byte 0x9c,0xed,0x02,0x02	@ 000e62cc data
.org 0xe62d0
	.byte 0x64,0x6f,0x86,0x08	@ 000e62d0 data
.org 0xe62d4
	ldrb r1, [r3, #10]	@ 000e62d4 997a
.org 0xe62d6
	movs r0, #239	@ 000e62d6 ef20
.org 0xe62d8
	ands r0, r1	@ 000e62d8 0840
.org 0xe62da
	strb r0, [r3, #10]	@ 000e62da 9872
.org 0xe62dc
	movs r1, #1	@ 000e62dc 0121
.org 0xe62de
	ands r1, r2	@ 000e62de 1140
.org 0xe62e0
	adds r0, r3, #0	@ 000e62e0 181c
.org 0xe62e2
	adds r0, #76	@ 000e62e2 4c30
.org 0xe62e4
	strb r1, [r0, #0]	@ 000e62e4 0170
.org 0xe62e6
	adds r3, #74	@ 000e62e6 4a33
.org 0xe62e8
	lsls r1, r1, #4	@ 000e62e8 0901
.org 0xe62ea
	ldrb r2, [r3, #0]	@ 000e62ea 1a78
.org 0xe62ec
	movs r0, #17	@ 000e62ec 1120
.org 0xe62ee
	negs r0, r0	@ 000e62ee 4042
.org 0xe62f0
	ands r0, r2	@ 000e62f0 1040
