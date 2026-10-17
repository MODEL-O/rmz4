@ FUN_0811d468  entry 0x0811d468  size 160
.thumb
.org 0x11d468
FUN_0811d468:
	push {r4, r5, r6, r7, lr}	@ 0011d468 f0b5
.org 0x11d46a
	mov r7, r8	@ 0011d46a 4746
.org 0x11d46c
	push {r7}	@ 0011d46c 80b4
.org 0x11d46e
	adds r6, r0, #0	@ 0011d46e 061c
.org 0x11d470
	movs r2, #0	@ 0011d470 0022
.org 0x11d472
	ldr r0, [pc, #108]	@ 0011d472 1b48
.org 0x11d474
	adds r3, r6, r0	@ 0011d474 3318
.org 0x11d476
	movs r4, #255	@ 0011d476 ff24
.org 0x11d478
	mov ip, r3	@ 0011d478 9c46
.org 0x11d47a
	adds r0, r3, r2	@ 0011d47a 9818
.org 0x11d47c
	ldrb r1, [r0, #0]	@ 0011d47c 0178
.org 0x11d47e
	orrs r1, r4	@ 0011d47e 2143
.org 0x11d480
	strb r1, [r0, #0]	@ 0011d480 0170
.org 0x11d482
	adds r0, r2, #1	@ 0011d482 501c
.org 0x11d484
	lsls r0, r0, #24	@ 0011d484 0006
.org 0x11d486
	lsrs r2, r0, #24	@ 0011d486 020e
.org 0x11d488
	cmp r2, #6	@ 0011d488 062a
.org 0x11d48a
	bls.n 0x11d47a	@ 0011d48a f6d9
.org 0x11d48c
	ldr r1, [pc, #84]	@ 0011d48c 1549
.org 0x11d48e
	adds r0, r6, r1	@ 0011d48e 7018
.org 0x11d490
	movs r1, #0	@ 0011d490 0021
.org 0x11d492
	strb r1, [r0, #23]	@ 0011d492 c175
.org 0x11d494
	strb r1, [r0, #24]	@ 0011d494 0176
.org 0x11d496
	strb r1, [r0, #3]	@ 0011d496 c170
.org 0x11d498
	movs r2, #0	@ 0011d498 0022
.org 0x11d49a
	movs r5, #0	@ 0011d49a 0025
.org 0x11d49c
	movs r3, #0	@ 0011d49c 0023
.org 0x11d49e
	ldr r0, [pc, #72]	@ 0011d49e 1248
.org 0x11d4a0
	ldr r0, [r0, #0]	@ 0011d4a0 0068
.org 0x11d4a2
	mov r8, r0	@ 0011d4a2 8046
.org 0x11d4a4
	movs r4, #1	@ 0011d4a4 0124
.org 0x11d4a6
	lsrs r0, r2, #2	@ 0011d4a6 9008
.org 0x11d4a8
	add r0, r8	@ 0011d4a8 4044
.org 0x11d4aa
	ldrb r0, [r0, #0]	@ 0011d4aa 0078
.org 0x11d4ac
	movs r1, #15	@ 0011d4ac 0f21
.org 0x11d4ae
	ands r1, r0	@ 0011d4ae 0140
.org 0x11d4b0
	movs r0, #3	@ 0011d4b0 0320
.org 0x11d4b2
	ands r0, r2	@ 0011d4b2 1040
.org 0x11d4b4
	asrs r1, r0	@ 0011d4b4 0141
.org 0x11d4b6
	ands r1, r4	@ 0011d4b6 2140
.org 0x11d4b8
	cmp r1, #0	@ 0011d4b8 0029
.org 0x11d4ba
	beq.n 0x11d500	@ 0011d4ba 21d0
.org 0x11d4bc
	ldr r7, [pc, #36]	@ 0011d4bc 094f
.org 0x11d4be
	adds r1, r6, r7	@ 0011d4be f119
.org 0x11d4c0
	ldrb r0, [r1, #22]	@ 0011d4c0 887d
.org 0x11d4c2
	adds r0, r0, r3	@ 0011d4c2 c018
.org 0x11d4c4
	cmp r5, r0	@ 0011d4c4 8542
.org 0x11d4c6
	bne.n 0x11d4ec	@ 0011d4c6 11d1
.org 0x11d4c8
	mov r7, ip	@ 0011d4c8 6746
.org 0x11d4ca
	adds r0, r7, r3	@ 0011d4ca f818
.org 0x11d4cc
	strb r2, [r0, #0]	@ 0011d4cc 0270
.org 0x11d4ce
	ldrb r0, [r1, #3]	@ 0011d4ce c878
.org 0x11d4d0
	adds r0, #1	@ 0011d4d0 0130
.org 0x11d4d2
	strb r0, [r1, #3]	@ 0011d4d2 c870
.org 0x11d4d4
	cmp r3, #5	@ 0011d4d4 052b
.org 0x11d4d6
	bhi.n 0x11d4fa	@ 0011d4d6 10d8
.org 0x11d4d8
	adds r0, r3, #1	@ 0011d4d8 581c
.org 0x11d4da
	lsls r0, r0, #24	@ 0011d4da 0006
.org 0x11d4dc
	lsrs r3, r0, #24	@ 0011d4dc 030e
.org 0x11d4de
	b.n 0x11d4fa	@ 0011d4de 0ce0
.org 0x11d4e0
	.byte 0xd2,0x0d,0x00,0x00	@ 0011d4e0 data
.org 0x11d4e4
	.byte 0xcc,0x0d,0x00,0x00	@ 0011d4e4 data
.org 0x11d4e8
	.byte 0xac,0xed,0x02,0x02	@ 0011d4e8 data
.org 0x11d4ec
	cmp r3, #0	@ 0011d4ec 002b
.org 0x11d4ee
	beq.n 0x11d4f8	@ 0011d4ee 03d0
.org 0x11d4f0
	cmp r3, #6	@ 0011d4f0 062b
.org 0x11d4f2
	bne.n 0x11d4fa	@ 0011d4f2 02d1
.org 0x11d4f4
	strb r4, [r1, #24]	@ 0011d4f4 0c76
.org 0x11d4f6
	b.n 0x11d50a	@ 0011d4f6 08e0
.org 0x11d4f8
	strb r4, [r1, #23]	@ 0011d4f8 cc75
.org 0x11d4fa
	adds r0, r5, #1	@ 0011d4fa 681c
.org 0x11d4fc
	lsls r0, r0, #24	@ 0011d4fc 0006
.org 0x11d4fe
	lsrs r5, r0, #24	@ 0011d4fe 050e
.org 0x11d500
	adds r0, r2, #1	@ 0011d500 501c
.org 0x11d502
	lsls r0, r0, #24	@ 0011d502 0006
.org 0x11d504
	lsrs r2, r0, #24	@ 0011d504 020e
.org 0x11d506
	cmp r2, #27	@ 0011d506 1b2a
