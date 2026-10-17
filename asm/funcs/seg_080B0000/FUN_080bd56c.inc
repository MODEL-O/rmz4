@ FUN_080bd56c  entry 0x080bd56c  size 144
.thumb
.org 0xbd56c
FUN_080bd56c:
	push {r4, r5, r6, lr}	@ 000bd56c 70b5
.org 0xbd56e
	adds r5, r0, #0	@ 000bd56e 051c
.org 0xbd570
	bl 0x1cc9c	@ 000bd570 5ff794fb
.org 0xbd574
	ldrb r0, [r5, #10]	@ 000bd574 a87a
.org 0xbd576
	movs r1, #1	@ 000bd576 0121
.org 0xbd578
	movs r4, #0	@ 000bd578 0024
.org 0xbd57a
	orrs r1, r0	@ 000bd57a 0143
.org 0xbd57c
	movs r0, #2	@ 000bd57c 0220
.org 0xbd57e
	orrs r1, r0	@ 000bd57e 0143
.org 0xbd580
	strb r1, [r5, #10]	@ 000bd580 a972
.org 0xbd582
	ldrb r6, [r5, #17]	@ 000bd582 6e7c
.org 0xbd584
	cmp r6, #0	@ 000bd584 002e
.org 0xbd586
	beq.n 0xbd5bc	@ 000bd586 19d0
.org 0xbd588
	ldr r1, [pc, #40]	@ 000bd588 0a49
.org 0xbd58a
	adds r0, r5, #0	@ 000bd58a 281c
.org 0xbd58c
	bl 0x1cf00	@ 000bd58c 5ff7b8fc
.org 0xbd590
	ldrb r0, [r5, #10]	@ 000bd590 a87a
.org 0xbd592
	movs r1, #4	@ 000bd592 0421
.org 0xbd594
	orrs r0, r1	@ 000bd594 0843
.org 0xbd596
	strb r0, [r5, #10]	@ 000bd596 a872
.org 0xbd598
	adds r4, r5, #0	@ 000bd598 2c1c
.org 0xbd59a
	adds r4, #116	@ 000bd59a 7434
.org 0xbd59c
	ldr r1, [pc, #24]	@ 000bd59c 0649
.org 0xbd59e
	adds r2, r5, #0	@ 000bd59e 2a1c
.org 0xbd5a0
	adds r2, #84	@ 000bd5a0 5432
.org 0xbd5a2
	adds r0, r4, #0	@ 000bd5a2 201c
.org 0xbd5a4
	movs r3, #0	@ 000bd5a4 0023
.org 0xbd5a6
	bl 0x5760	@ 000bd5a6 48f7dbf8
.org 0xbd5aa
	str r5, [r4, #44]	@ 000bd5aa e562
.org 0xbd5ac
	movs r0, #0	@ 000bd5ac 0020
.org 0xbd5ae
	str r0, [r4, #36]	@ 000bd5ae 6062
.org 0xbd5b0
	b.n 0xbd5e4	@ 000bd5b0 18e0
.org 0xbd5b2
	.byte 0x00	@ 000bd5b2 data
.org 0xbd5b3
	.byte 0x00	@ 000bd5b3 data
.org 0xbd5b4
	.byte 0x01,0x01,0x00,0x00	@ 000bd5b4 data
.org 0xbd5b8
	.byte 0xa8,0x4b,0x86,0x08	@ 000bd5b8 data
.org 0xbd5bc
	movs r1, #128	@ 000bd5bc 8021
.org 0xbd5be
	lsls r1, r1, #1	@ 000bd5be 4900
.org 0xbd5c0
	adds r0, r5, #0	@ 000bd5c0 281c
.org 0xbd5c2
	bl 0x1cf00	@ 000bd5c2 5ff79dfc
.org 0xbd5c6
	ldrb r0, [r5, #10]	@ 000bd5c6 a87a
.org 0xbd5c8
	movs r1, #4	@ 000bd5c8 0421
.org 0xbd5ca
	orrs r0, r1	@ 000bd5ca 0843
.org 0xbd5cc
	strb r0, [r5, #10]	@ 000bd5cc a872
.org 0xbd5ce
	adds r4, r5, #0	@ 000bd5ce 2c1c
.org 0xbd5d0
	adds r4, #116	@ 000bd5d0 7434
.org 0xbd5d2
	ldr r1, [pc, #52]	@ 000bd5d2 0d49
.org 0xbd5d4
	adds r2, r5, #0	@ 000bd5d4 2a1c
.org 0xbd5d6
	adds r2, #84	@ 000bd5d6 5432
.org 0xbd5d8
	adds r0, r4, #0	@ 000bd5d8 201c
.org 0xbd5da
	movs r3, #0	@ 000bd5da 0023
.org 0xbd5dc
	bl 0x5760	@ 000bd5dc 48f7c0f8
.org 0xbd5e0
	str r5, [r4, #44]	@ 000bd5e0 e562
.org 0xbd5e2
	str r6, [r4, #36]	@ 000bd5e2 6662
.org 0xbd5e4
	movs r0, #255	@ 000bd5e4 ff20
.org 0xbd5e6
	strb r0, [r5, #18]	@ 000bd5e6 a874
.org 0xbd5e8
	ldr r1, [pc, #32]	@ 000bd5e8 0849
.org 0xbd5ea
	ldrb r0, [r5, #9]	@ 000bd5ea 687a
.org 0xbd5ec
	lsls r0, r0, #2	@ 000bd5ec 8000
.org 0xbd5ee
	adds r0, r0, r1	@ 000bd5ee 4018
.org 0xbd5f0
	movs r1, #1	@ 000bd5f0 0121
.org 0xbd5f2
	str r1, [r5, #12]	@ 000bd5f2 e960
.org 0xbd5f4
	ldr r0, [r0, #0]	@ 000bd5f4 0068
.org 0xbd5f6
	ldr r0, [r0, #4]	@ 000bd5f6 4068
.org 0xbd5f8
	str r0, [r5, #20]	@ 000bd5f8 6861
.org 0xbd5fa
	adds r0, r5, #0	@ 000bd5fa 281c
