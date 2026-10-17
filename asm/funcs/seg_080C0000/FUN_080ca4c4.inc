@ FUN_080ca4c4  entry 0x080ca4c4  size 138
.thumb
.org 0xca4c4
FUN_080ca4c4:
	push {r4, r5, r6, lr}	@ 000ca4c4 70b5
.org 0xca4c6
	adds r4, r0, #0	@ 000ca4c6 041c
.org 0xca4c8
	lsls r1, r1, #24	@ 000ca4c8 0906
.org 0xca4ca
	lsrs r6, r1, #24	@ 000ca4ca 0e0e
.org 0xca4cc
	lsls r2, r2, #24	@ 000ca4cc 1206
.org 0xca4ce
	lsrs r5, r2, #24	@ 000ca4ce 150e
.org 0xca4d0
	ldr r0, [pc, #76]	@ 000ca4d0 1348
.org 0xca4d2
	ldr r0, [r0, #0]	@ 000ca4d2 0068
.org 0xca4d4
	bl 0x5500	@ 000ca4d4 3bf714f8
.org 0xca4d8
	adds r3, r0, #0	@ 000ca4d8 031c
.org 0xca4da
	cmp r3, #0	@ 000ca4da 002b
.org 0xca4dc
	beq.n 0xca552	@ 000ca4dc 39d0
.org 0xca4de
	adds r1, r3, #0	@ 000ca4de 191c
.org 0xca4e0
	adds r1, #37	@ 000ca4e0 2531
.org 0xca4e2
	movs r2, #0	@ 000ca4e2 0022
.org 0xca4e4
	movs r0, #8	@ 000ca4e4 0820
.org 0xca4e6
	strb r0, [r1, #0]	@ 000ca4e6 0870
.org 0xca4e8
	ldr r0, [pc, #56]	@ 000ca4e8 0e48
.org 0xca4ea
	movs r1, #35	@ 000ca4ea 2321
.org 0xca4ec
	strb r1, [r3, #9]	@ 000ca4ec 5972
.org 0xca4ee
	adds r0, #140	@ 000ca4ee 8c30
.org 0xca4f0
	ldr r0, [r0, #0]	@ 000ca4f0 0068
.org 0xca4f2
	ldr r0, [r0, #0]	@ 000ca4f2 0068
.org 0xca4f4
	str r0, [r3, #20]	@ 000ca4f4 5861
.org 0xca4f6
	movs r0, #0	@ 000ca4f6 0020
.org 0xca4f8
	strh r2, [r3, #32]	@ 000ca4f8 1a84
.org 0xca4fa
	adds r1, r3, #0	@ 000ca4fa 191c
.org 0xca4fc
	adds r1, #34	@ 000ca4fc 2231
.org 0xca4fe
	strb r0, [r1, #0]	@ 000ca4fe 0870
.org 0xca500
	str r4, [r3, #40]	@ 000ca500 9c62
.org 0xca502
	ldr r0, [r4, #84]	@ 000ca502 606d
.org 0xca504
	ldr r1, [r4, #88]	@ 000ca504 a16d
.org 0xca506
	str r0, [r3, #84]	@ 000ca506 5865
.org 0xca508
	str r1, [r3, #88]	@ 000ca508 9965
.org 0xca50a
	ldrb r0, [r4, #10]	@ 000ca50a a07a
.org 0xca50c
	lsrs r2, r0, #4	@ 000ca50c 0209
.org 0xca50e
	movs r0, #1	@ 000ca50e 0120
.org 0xca510
	ands r2, r0	@ 000ca510 0240
.org 0xca512
	cmp r2, #0	@ 000ca512 002a
.org 0xca514
	beq.n 0xca528	@ 000ca514 08d0
.org 0xca516
	ldrb r0, [r3, #10]	@ 000ca516 987a
.org 0xca518
	movs r1, #16	@ 000ca518 1021
.org 0xca51a
	orrs r0, r1	@ 000ca51a 0843
.org 0xca51c
	b.n 0xca52e	@ 000ca51c 07e0
.org 0xca51e
	.byte 0x00	@ 000ca51e data
.org 0xca51f
	.byte 0x00	@ 000ca51f data
.org 0xca520
	.byte 0x94,0xed,0x02,0x02	@ 000ca520 data
.org 0xca524
	.byte 0xf4,0x49,0x86,0x08	@ 000ca524 data
.org 0xca528
	ldrb r1, [r3, #10]	@ 000ca528 997a
.org 0xca52a
	movs r0, #239	@ 000ca52a ef20
.org 0xca52c
	ands r0, r1	@ 000ca52c 0840
.org 0xca52e
	strb r0, [r3, #10]	@ 000ca52e 9872
.org 0xca530
	adds r1, r2, #0	@ 000ca530 111c
.org 0xca532
	adds r0, r3, #0	@ 000ca532 181c
.org 0xca534
	adds r0, #76	@ 000ca534 4c30
.org 0xca536
	strb r1, [r0, #0]	@ 000ca536 0170
.org 0xca538
	movs r0, #74	@ 000ca538 4a20
.org 0xca53a
	adds r0, r0, r3	@ 000ca53a c018
.org 0xca53c
	mov ip, r0	@ 000ca53c 8446
.org 0xca53e
	lsls r1, r1, #4	@ 000ca53e 0901
.org 0xca540
	ldrb r2, [r0, #0]	@ 000ca540 0278
.org 0xca542
	movs r0, #17	@ 000ca542 1120
.org 0xca544
	negs r0, r0	@ 000ca544 4042
.org 0xca546
	ands r0, r2	@ 000ca546 1040
.org 0xca548
	orrs r0, r1	@ 000ca548 0843
.org 0xca54a
	mov r1, ip	@ 000ca54a 6146
.org 0xca54c
	strb r0, [r1, #0]	@ 000ca54c 0870
