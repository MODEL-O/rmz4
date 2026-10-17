@ FUN_08007560  entry 0x08007560  size 172
.thumb
.org 0x7560
FUN_08007560:
	push {r4, r5, r6, r7, lr}	@ 00007560 f0b5
.org 0x7562
	mov r7, r8	@ 00007562 4746
.org 0x7564
	push {r7}	@ 00007564 80b4
.org 0x7566
	sub sp, #8	@ 00007566 82b0
.org 0x7568
	adds r3, r0, #0	@ 00007568 031c
.org 0x756a
	adds r5, r1, #0	@ 0000756a 0d1c
.org 0x756c
	lsls r0, r3, #4	@ 0000756c 1801
.org 0x756e
	adds r0, r0, r3	@ 0000756e c018
.org 0x7570
	lsls r0, r0, #3	@ 00007570 c000
.org 0x7572
	ldr r1, [pc, #88]	@ 00007572 1649
.org 0x7574
	mov r8, r1	@ 00007574 8846
.org 0x7576
	add r0, r8	@ 00007576 4044
.org 0x7578
	mov ip, r0	@ 00007578 8446
.org 0x757a
	ldr r2, [r5, #8]	@ 0000757a aa68
.org 0x757c
	movs r0, #0	@ 0000757c 0020
.org 0x757e
	movs r1, #0	@ 0000757e 0021
.org 0x7580
	mov r4, ip	@ 00007580 6446
.org 0x7582
	strh r3, [r4, #12]	@ 00007582 a381
.org 0x7584
	strb r0, [r4, #15]	@ 00007584 e073
.org 0x7586
	strb r0, [r4, #14]	@ 00007586 a073
.org 0x7588
	strh r1, [r4, #18]	@ 00007588 6182
.org 0x758a
	strh r1, [r4, #16]	@ 0000758a 2182
.org 0x758c
	adds r4, #52	@ 0000758c 3434
.org 0x758e
	ldr r0, [pc, #64]	@ 0000758e 1048
.org 0x7590
	mov r6, ip	@ 00007590 6646
.org 0x7592
	str r0, [r6, #64]	@ 00007592 3064
.org 0x7594
	str r0, [r6, #60]	@ 00007594 f063
.org 0x7596
	str r0, [r4, #4]	@ 00007596 6060
.org 0x7598
	str r0, [r6, #52]	@ 00007598 7063
.org 0x759a
	str r0, [r6, #88]	@ 0000759a b065
.org 0x759c
	str r0, [r6, #84]	@ 0000759c 7065
.org 0x759e
	str r1, [r6, #0]	@ 0000759e 3160
.org 0x75a0
	movs r0, #1	@ 000075a0 0120
.org 0x75a2
	str r0, [r6, #4]	@ 000075a2 7060
.org 0x75a4
	str r1, [r6, #8]	@ 000075a4 b160
.org 0x75a6
	ldr r0, [r2, #0]	@ 000075a6 1068
.org 0x75a8
	adds r7, r0, r2	@ 000075a8 8718
.org 0x75aa
	ldr r0, [r2, #8]	@ 000075aa 9068
.org 0x75ac
	adds r6, r0, r2	@ 000075ac 8618
.org 0x75ae
	cmp r3, #0	@ 000075ae 002b
.org 0x75b0
	bne.n 0x75d8	@ 000075b0 12d1
.org 0x75b2
	mov r0, ip	@ 000075b2 6046
.org 0x75b4
	adds r0, #20	@ 000075b4 1430
.org 0x75b6
	ldr r2, [pc, #28]	@ 000075b6 074a
.org 0x75b8
	add r2, r8	@ 000075b8 4244
.org 0x75ba
	str r6, [sp, #0]	@ 000075ba 0096
.org 0x75bc
	ldr r1, [r5, #12]	@ 000075bc e968
.org 0x75be
	str r1, [sp, #4]	@ 000075be 0191
.org 0x75c0
	adds r1, r4, #0	@ 000075c0 211c
.org 0x75c2
	adds r3, r7, #0	@ 000075c2 3b1c
.org 0x75c4
	bl 0x35f8	@ 000075c4 fcf718f8
.org 0x75c8
	b.n 0x760e	@ 000075c8 21e0
.org 0x75ca
	.byte 0x00	@ 000075ca data
.org 0x75cb
	.byte 0x00	@ 000075cb data
.org 0x75cc
	.byte 0xd0,0x0a,0x00,0x02	@ 000075cc data
.org 0x75d0
	.byte 0x01,0x00,0x00,0x80	@ 000075d0 data
.org 0x75d4
	.byte 0x04,0xc0,0x02,0x00	@ 000075d4 data
.org 0x75d8
	mov r0, ip	@ 000075d8 6046
.org 0x75da
	adds r0, #20	@ 000075da 1430
.org 0x75dc
	mov r2, ip	@ 000075dc 6246
.org 0x75de
	ldr r1, [r2, #92]	@ 000075de d16d
.org 0x75e0
	lsrs r1, r1, #4	@ 000075e0 0909
.org 0x75e2
	lsls r1, r1, #1	@ 000075e2 4900
.org 0x75e4
	ldr r2, [pc, #52]	@ 000075e4 0d4a
.org 0x75e6
	adds r1, r1, r2	@ 000075e6 8918
.org 0x75e8
	ldrh r1, [r1, #0]	@ 000075e8 0988
.org 0x75ea
	movs r2, #248	@ 000075ea f822
.org 0x75ec
	lsls r2, r2, #5	@ 000075ec 5201
.org 0x75ee
	ands r2, r1	@ 000075ee 0a40
.org 0x75f0
	lsls r2, r2, #3	@ 000075f0 d200
.org 0x75f2
	movs r1, #192	@ 000075f2 c021
.org 0x75f4
	lsls r1, r1, #19	@ 000075f4 c904
.org 0x75f6
	adds r2, r2, r1	@ 000075f6 5218
.org 0x75f8
	str r6, [sp, #0]	@ 000075f8 0096
.org 0x75fa
	lsls r3, r3, #2	@ 000075fa 9b00
.org 0x75fc
	adds r1, r5, #0	@ 000075fc 291c
.org 0x75fe
	adds r1, #12	@ 000075fe 0c31
.org 0x7600
	adds r1, r1, r3	@ 00007600 c918
.org 0x7602
	ldr r1, [r1, #0]	@ 00007602 0968
.org 0x7604
	str r1, [sp, #4]	@ 00007604 0191
.org 0x7606
	adds r1, r4, #0	@ 00007606 211c
.org 0x7608
	adds r3, r7, #0	@ 00007608 3b1c
.org 0x760a
	bl 0x35f8	@ 0000760a fbf7f5ff
