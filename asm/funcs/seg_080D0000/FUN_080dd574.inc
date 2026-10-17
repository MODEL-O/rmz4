@ FUN_080dd574  entry 0x080dd574  size 144
.thumb
.org 0xdd574
FUN_080dd574:
	push {r4, r5, r6, r7, lr}	@ 000dd574 f0b5
.org 0xdd576
	adds r5, r0, #0	@ 000dd576 051c
.org 0xdd578
	lsls r1, r1, #24	@ 000dd578 0906
.org 0xdd57a
	lsrs r7, r1, #24	@ 000dd57a 0f0e
.org 0xdd57c
	lsls r2, r2, #24	@ 000dd57c 1206
.org 0xdd57e
	lsrs r6, r2, #24	@ 000dd57e 160e
.org 0xdd580
	lsls r3, r3, #24	@ 000dd580 1b06
.org 0xdd582
	lsrs r4, r3, #24	@ 000dd582 1c0e
.org 0xdd584
	ldr r0, [pc, #72]	@ 000dd584 1248
.org 0xdd586
	ldr r0, [r0, #0]	@ 000dd586 0068
.org 0xdd588
	bl 0x5500	@ 000dd588 27f7baff
.org 0xdd58c
	mov ip, r0	@ 000dd58c 8446
.org 0xdd58e
	cmp r0, #0	@ 000dd58e 0028
.org 0xdd590
	beq.n 0xdd606	@ 000dd590 39d0
.org 0xdd592
	mov r1, ip	@ 000dd592 6146
.org 0xdd594
	adds r1, #37	@ 000dd594 2531
.org 0xdd596
	movs r2, #0	@ 000dd596 0022
.org 0xdd598
	movs r0, #1	@ 000dd598 0120
.org 0xdd59a
	strb r0, [r1, #0]	@ 000dd59a 0870
.org 0xdd59c
	ldr r0, [pc, #52]	@ 000dd59c 0d48
.org 0xdd59e
	movs r1, #45	@ 000dd59e 2d21
.org 0xdd5a0
	mov r3, ip	@ 000dd5a0 6346
.org 0xdd5a2
	strb r1, [r3, #9]	@ 000dd5a2 5972
.org 0xdd5a4
	adds r0, #180	@ 000dd5a4 b430
.org 0xdd5a6
	ldr r0, [r0, #0]	@ 000dd5a6 0068
.org 0xdd5a8
	ldr r0, [r0, #0]	@ 000dd5a8 0068
.org 0xdd5aa
	str r0, [r3, #20]	@ 000dd5aa 5861
.org 0xdd5ac
	movs r0, #0	@ 000dd5ac 0020
.org 0xdd5ae
	strh r2, [r3, #32]	@ 000dd5ae 1a84
.org 0xdd5b0
	mov r1, ip	@ 000dd5b0 6146
.org 0xdd5b2
	adds r1, #34	@ 000dd5b2 2231
.org 0xdd5b4
	strb r0, [r1, #0]	@ 000dd5b4 0870
.org 0xdd5b6
	ldr r0, [r5, #0]	@ 000dd5b6 2868
.org 0xdd5b8
	ldr r1, [r5, #4]	@ 000dd5b8 6968
.org 0xdd5ba
	mov r2, ip	@ 000dd5ba 6246
.org 0xdd5bc
	str r0, [r2, #84]	@ 000dd5bc 5065
.org 0xdd5be
	str r1, [r2, #88]	@ 000dd5be 9165
.org 0xdd5c0
	adds r3, r4, #0	@ 000dd5c0 231c
.org 0xdd5c2
	cmp r3, #0	@ 000dd5c2 002b
.org 0xdd5c4
	beq.n 0xdd5d8	@ 000dd5c4 08d0
.org 0xdd5c6
	ldrb r0, [r2, #10]	@ 000dd5c6 907a
.org 0xdd5c8
	movs r1, #16	@ 000dd5c8 1021
.org 0xdd5ca
	orrs r0, r1	@ 000dd5ca 0843
.org 0xdd5cc
	strb r0, [r2, #10]	@ 000dd5cc 9072
.org 0xdd5ce
	b.n 0xdd5e4	@ 000dd5ce 09e0
.org 0xdd5d0
	.byte 0x9c,0xed,0x02,0x02	@ 000dd5d0 data
.org 0xdd5d4
	.byte 0x64,0x6f,0x86,0x08	@ 000dd5d4 data
.org 0xdd5d8
	mov r0, ip	@ 000dd5d8 6046
.org 0xdd5da
	ldrb r1, [r0, #10]	@ 000dd5da 817a
.org 0xdd5dc
	movs r0, #239	@ 000dd5dc ef20
.org 0xdd5de
	ands r0, r1	@ 000dd5de 0840
.org 0xdd5e0
	mov r1, ip	@ 000dd5e0 6146
.org 0xdd5e2
	strb r0, [r1, #10]	@ 000dd5e2 8872
.org 0xdd5e4
	movs r1, #1	@ 000dd5e4 0121
.org 0xdd5e6
	ands r1, r3	@ 000dd5e6 1940
.org 0xdd5e8
	mov r0, ip	@ 000dd5e8 6046
.org 0xdd5ea
	adds r0, #76	@ 000dd5ea 4c30
.org 0xdd5ec
	strb r1, [r0, #0]	@ 000dd5ec 0170
.org 0xdd5ee
	mov r3, ip	@ 000dd5ee 6346
.org 0xdd5f0
	adds r3, #74	@ 000dd5f0 4a33
.org 0xdd5f2
	lsls r1, r1, #4	@ 000dd5f2 0901
.org 0xdd5f4
	ldrb r2, [r3, #0]	@ 000dd5f4 1a78
.org 0xdd5f6
	movs r0, #17	@ 000dd5f6 1120
.org 0xdd5f8
	negs r0, r0	@ 000dd5f8 4042
.org 0xdd5fa
	ands r0, r2	@ 000dd5fa 1040
.org 0xdd5fc
	orrs r0, r1	@ 000dd5fc 0843
.org 0xdd5fe
	strb r0, [r3, #0]	@ 000dd5fe 1870
.org 0xdd600
	mov r2, ip	@ 000dd600 6246
.org 0xdd602
	strb r7, [r2, #16]	@ 000dd602 1774
