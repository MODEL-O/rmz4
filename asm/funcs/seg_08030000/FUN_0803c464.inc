@ FUN_0803c464  entry 0x0803c464  size 172
.thumb
.org 0x3c464
FUN_0803c464:
	push {r4, r5, r6, r7, lr}	@ 0003c464 f0b5
.org 0x3c466
	adds r6, r0, #0	@ 0003c466 061c
.org 0x3c468
	lsls r1, r1, #24	@ 0003c468 0906
.org 0x3c46a
	lsrs r7, r1, #24	@ 0003c46a 0f0e
.org 0x3c46c
	ldr r0, [pc, #64]	@ 0003c46c 1048
.org 0x3c46e
	bl 0x3a964	@ 0003c46e fef779fa
.org 0x3c472
	ldr r0, [pc, #64]	@ 0003c472 1048
.org 0x3c474
	ldr r0, [r0, #0]	@ 0003c474 0068
.org 0x3c476
	bl 0x5500	@ 0003c476 c9f743f8
.org 0x3c47a
	adds r4, r0, #0	@ 0003c47a 041c
.org 0x3c47c
	cmp r4, #0	@ 0003c47c 002c
.org 0x3c47e
	bne.n 0x3c482	@ 0003c47e 00d1
.org 0x3c480
	b.n 0x3c582	@ 0003c480 7fe0
.org 0x3c482
	adds r0, r6, #0	@ 0003c482 301c
.org 0x3c484
	adds r0, #248	@ 0003c484 f830
.org 0x3c486
	ldrb r1, [r0, #0]	@ 0003c486 0178
.org 0x3c488
	movs r3, #1	@ 0003c488 0123
.org 0x3c48a
	movs r2, #1	@ 0003c48a 0122
.org 0x3c48c
	eors r1, r3	@ 0003c48c 5940
.org 0x3c48e
	negs r0, r1	@ 0003c48e 4842
.org 0x3c490
	orrs r0, r1	@ 0003c490 0843
.org 0x3c492
	lsrs r3, r0, #31	@ 0003c492 c30f
.org 0x3c494
	adds r5, r4, #0	@ 0003c494 251c
.org 0x3c496
	ldr r0, [pc, #32]	@ 0003c496 0848
.org 0x3c498
	strb r2, [r4, #9]	@ 0003c498 6272
.org 0x3c49a
	ldr r0, [r0, #4]	@ 0003c49a 4068
.org 0x3c49c
	ldr r0, [r0, #0]	@ 0003c49c 0068
.org 0x3c49e
	str r0, [r4, #20]	@ 0003c49e 6061
.org 0x3c4a0
	mov ip, r3	@ 0003c4a0 9c46
.org 0x3c4a2
	cmp r3, #1	@ 0003c4a2 012b
.org 0x3c4a4
	bgt.n 0x3c4bc	@ 0003c4a4 0adc
.org 0x3c4a6
	ldrb r1, [r4, #11]	@ 0003c4a6 e17a
.org 0x3c4a8
	movs r0, #191	@ 0003c4a8 bf20
.org 0x3c4aa
	ands r0, r1	@ 0003c4aa 0840
.org 0x3c4ac
	b.n 0x3c4c2	@ 0003c4ac 09e0
.org 0x3c4ae
	.byte 0x00	@ 0003c4ae data
.org 0x3c4af
	.byte 0x00	@ 0003c4af data
.org 0x3c4b0
	.byte 0x1d,0xc4,0x03,0x08	@ 0003c4b0 data
.org 0x3c4b4
	.byte 0x88,0xed,0x02,0x02	@ 0003c4b4 data
.org 0x3c4b8
	.byte 0xf8,0x39,0x85,0x08	@ 0003c4b8 data
.org 0x3c4bc
	ldrb r0, [r4, #11]	@ 0003c4bc e07a
.org 0x3c4be
	movs r1, #64	@ 0003c4be 4021
.org 0x3c4c0
	orrs r0, r1	@ 0003c4c0 0843
.org 0x3c4c2
	strb r0, [r4, #11]	@ 0003c4c2 e072
.org 0x3c4c4
	adds r1, r5, #0	@ 0003c4c4 291c
.org 0x3c4c6
	adds r1, #37	@ 0003c4c6 2531
.org 0x3c4c8
	movs r0, #16	@ 0003c4c8 1020
.org 0x3c4ca
	strb r0, [r1, #0]	@ 0003c4ca 0870
.org 0x3c4cc
	ldr r2, [pc, #44]	@ 0003c4cc 0b4a
.org 0x3c4ce
	mov r0, ip	@ 0003c4ce 6046
.org 0x3c4d0
	lsls r1, r0, #16	@ 0003c4d0 0104
.org 0x3c4d2
	asrs r1, r1, #16	@ 0003c4d2 0914
.org 0x3c4d4
	lsls r0, r1, #1	@ 0003c4d4 4800
.org 0x3c4d6
	adds r0, r0, r2	@ 0003c4d6 8018
.org 0x3c4d8
	ldrh r0, [r0, #0]	@ 0003c4d8 0088
.org 0x3c4da
	strh r0, [r5, #32]	@ 0003c4da 2884
.org 0x3c4dc
	ldr r0, [pc, #32]	@ 0003c4dc 0848
.org 0x3c4de
	adds r1, r1, r0	@ 0003c4de 0918
.org 0x3c4e0
	ldrb r1, [r1, #0]	@ 0003c4e0 0978
.org 0x3c4e2
	adds r0, r5, #0	@ 0003c4e2 281c
.org 0x3c4e4
	adds r0, #34	@ 0003c4e4 2230
.org 0x3c4e6
	strb r1, [r0, #0]	@ 0003c4e6 0170
.org 0x3c4e8
	adds r0, r7, #0	@ 0003c4e8 381c
.org 0x3c4ea
	subs r0, #8	@ 0003c4ea 0838
.org 0x3c4ec
	cmp r0, #14	@ 0003c4ec 0e28
.org 0x3c4ee
	bhi.n 0x3c566	@ 0003c4ee 3ad8
.org 0x3c4f0
	lsls r0, r0, #2	@ 0003c4f0 8000
.org 0x3c4f2
	ldr r1, [pc, #16]	@ 0003c4f2 0449
.org 0x3c4f4
	adds r0, r0, r1	@ 0003c4f4 4018
.org 0x3c4f6
	ldr r0, [r0, #0]	@ 0003c4f6 0068
.org 0x3c4f8
	mov pc, r0	@ 0003c4f8 8746
.org 0x3c4fa
	.byte 0x00	@ 0003c4fa data
.org 0x3c4fb
	.byte 0x00	@ 0003c4fb data
.org 0x3c4fc
	.byte 0xfc,0x36,0x85,0x08	@ 0003c4fc data
.org 0x3c500
	.byte 0x04,0x37,0x85,0x08	@ 0003c500 data
.org 0x3c504
	.byte 0x08,0xc5,0x03,0x08	@ 0003c504 data
.org 0x3c508
	.byte 0x44,0xc5,0x03,0x08	@ 0003c508 data
.org 0x3c50c
	.byte 0x44,0xc5,0x03,0x08	@ 0003c50c data
