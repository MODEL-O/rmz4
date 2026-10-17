@ FUN_080a9540  entry 0x080a9540  size 246
.thumb
.org 0xa9540
FUN_080a9540:
	push {r4, r5, r6, r7, lr}	@ 000a9540 f0b5
.org 0xa9542
	mov r7, sl	@ 000a9542 5746
.org 0xa9544
	mov r6, r9	@ 000a9544 4e46
.org 0xa9546
	mov r5, r8	@ 000a9546 4546
.org 0xa9548
	push {r5, r6, r7}	@ 000a9548 e0b4
.org 0xa954a
	sub sp, #4	@ 000a954a 81b0
.org 0xa954c
	adds r7, r0, #0	@ 000a954c 071c
.org 0xa954e
	ldr r0, [r7, #40]	@ 000a954e b86a
.org 0xa9550
	str r0, [sp, #0]	@ 000a9550 0090
.org 0xa9552
	adds r0, r7, #0	@ 000a9552 381c
.org 0xa9554
	bl 0x1cff0	@ 000a9554 73f74cfd
.org 0xa9558
	adds r5, r7, #0	@ 000a9558 3d1c
.org 0xa955a
	adds r5, #84	@ 000a955a 5435
.org 0xa955c
	ldr r4, [pc, #216]	@ 000a955c 364c
.org 0xa955e
	ldr r0, [r4, #0]	@ 000a955e 2068
.org 0xa9560
	ldr r1, [pc, #216]	@ 000a9560 3649
.org 0xa9562
	mov sl, r1	@ 000a9562 8a46
.org 0xa9564
	mov r3, sl	@ 000a9564 5346
.org 0xa9566
	muls r3, r0	@ 000a9566 4343
.org 0xa9568
	ldr r0, [pc, #212]	@ 000a9568 3548
.org 0xa956a
	mov r9, r0	@ 000a956a 8146
.org 0xa956c
	add r3, r9	@ 000a956c 4b44
.org 0xa956e
	lsls r3, r3, #1	@ 000a956e 5b00
.org 0xa9570
	lsrs r0, r3, #1	@ 000a9570 5808
.org 0xa9572
	str r0, [r4, #0]	@ 000a9572 2060
.org 0xa9574
	lsrs r3, r3, #17	@ 000a9574 5b0c
.org 0xa9576
	movs r1, #1	@ 000a9576 0121
.org 0xa9578
	mov r8, r1	@ 000a9578 8846
.org 0xa957a
	mov r0, r8	@ 000a957a 4046
.org 0xa957c
	ands r3, r0	@ 000a957c 0340
.org 0xa957e
	lsls r3, r3, #4	@ 000a957e 1b01
.org 0xa9580
	adds r6, r7, #0	@ 000a9580 3e1c
.org 0xa9582
	adds r6, #188	@ 000a9582 bc36
.org 0xa9584
	ldrb r0, [r6, #0]	@ 000a9584 3078
.org 0xa9586
	orrs r3, r0	@ 000a9586 0343
.org 0xa9588
	adds r0, r5, #0	@ 000a9588 281c
.org 0xa958a
	ldr r1, [pc, #184]	@ 000a958a 2e49
.org 0xa958c
	movs r2, #0	@ 000a958c 0022
.org 0xa958e
	bl 0xd4c8c	@ 000a958e 2bf07dfb
.org 0xa9592
	ldr r1, [pc, #176]	@ 000a9592 2c49
.org 0xa9594
	adds r1, #28	@ 000a9594 1c31
.org 0xa9596
	ldr r0, [r4, #0]	@ 000a9596 2068
.org 0xa9598
	mov r3, sl	@ 000a9598 5346
.org 0xa959a
	muls r3, r0	@ 000a959a 4343
.org 0xa959c
	add r3, r9	@ 000a959c 4b44
.org 0xa959e
	lsls r3, r3, #1	@ 000a959e 5b00
.org 0xa95a0
	lsrs r0, r3, #1	@ 000a95a0 5808
.org 0xa95a2
	str r0, [r4, #0]	@ 000a95a2 2060
.org 0xa95a4
	lsrs r3, r3, #17	@ 000a95a4 5b0c
.org 0xa95a6
	mov r0, r8	@ 000a95a6 4046
.org 0xa95a8
	ands r3, r0	@ 000a95a8 0340
.org 0xa95aa
	lsls r3, r3, #4	@ 000a95aa 1b01
.org 0xa95ac
	ldrb r0, [r6, #0]	@ 000a95ac 3078
.org 0xa95ae
	orrs r3, r0	@ 000a95ae 0343
.org 0xa95b0
	adds r0, r5, #0	@ 000a95b0 281c
.org 0xa95b2
	movs r2, #0	@ 000a95b2 0022
.org 0xa95b4
	bl 0xd4c8c	@ 000a95b4 2bf06afb
.org 0xa95b8
	ldr r1, [pc, #136]	@ 000a95b8 2249
.org 0xa95ba
	adds r1, #56	@ 000a95ba 3831
.org 0xa95bc
	ldr r0, [r4, #0]	@ 000a95bc 2068
.org 0xa95be
	mov r3, sl	@ 000a95be 5346
.org 0xa95c0
	muls r3, r0	@ 000a95c0 4343
.org 0xa95c2
	add r3, r9	@ 000a95c2 4b44
.org 0xa95c4
	lsls r3, r3, #1	@ 000a95c4 5b00
.org 0xa95c6
	lsrs r0, r3, #1	@ 000a95c6 5808
.org 0xa95c8
	str r0, [r4, #0]	@ 000a95c8 2060
.org 0xa95ca
	lsrs r3, r3, #17	@ 000a95ca 5b0c
.org 0xa95cc
	mov r0, r8	@ 000a95cc 4046
.org 0xa95ce
	ands r3, r0	@ 000a95ce 0340
.org 0xa95d0
	lsls r3, r3, #4	@ 000a95d0 1b01
.org 0xa95d2
	ldrb r0, [r6, #0]	@ 000a95d2 3078
.org 0xa95d4
	orrs r3, r0	@ 000a95d4 0343
.org 0xa95d6
	adds r0, r5, #0	@ 000a95d6 281c
.org 0xa95d8
	movs r2, #0	@ 000a95d8 0022
.org 0xa95da
	bl 0xd4c8c	@ 000a95da 2bf057fb
.org 0xa95de
	movs r0, #1	@ 000a95de 0120
.org 0xa95e0
	adds r1, r5, #0	@ 000a95e0 291c
.org 0xa95e2
	bl 0xd0c88	@ 000a95e2 27f051fb
.org 0xa95e6
	ldr r1, [sp, #0]	@ 000a95e6 0099
.org 0xa95e8
	ldrb r0, [r1, #12]	@ 000a95e8 087b
.org 0xa95ea
	cmp r0, #1	@ 000a95ea 0128
.org 0xa95ec
	bhi.n 0xa95f4	@ 000a95ec 02d8
.org 0xa95ee
	movs r0, #42	@ 000a95ee 2a20
.org 0xa95f0
	bl 0x2b10	@ 000a95f0 59f78efa
.org 0xa95f4
	movs r0, #0	@ 000a95f4 0020
.org 0xa95f6
	movs r1, #10	@ 000a95f6 0a21
.org 0xa95f8
	adds r2, r5, #0	@ 000a95f8 2a1c
.org 0xa95fa
	bl 0x2ab88	@ 000a95fa 81f7c5fa
.org 0xa95fe
	ldr r2, [pc, #72]	@ 000a95fe 124a
.org 0xa9600
	ldrh r1, [r2, #12]	@ 000a9600 9189
.org 0xa9602
	ldr r0, [pc, #72]	@ 000a9602 1248
.org 0xa9604
	cmp r1, r0	@ 000a9604 8142
.org 0xa9606
	bhi.n 0xa960c	@ 000a9606 01d8
.org 0xa9608
	adds r0, r1, #1	@ 000a9608 481c
.org 0xa960a
	strh r0, [r2, #12]	@ 000a960a 9081
.org 0xa960c
	adds r0, r7, #0	@ 000a960c 381c
.org 0xa960e
	adds r1, r5, #0	@ 000a960e 291c
.org 0xa9610
	bl 0x2abe0	@ 000a9610 81f7e6fa
.org 0xa9614
	ldr r1, [pc, #56]	@ 000a9614 0e49
.org 0xa9616
	ldrb r0, [r7, #9]	@ 000a9616 787a
.org 0xa9618
	lsls r0, r0, #2	@ 000a9618 8000
.org 0xa961a
	adds r0, r0, r1	@ 000a961a 4018
.org 0xa961c
	movs r1, #4	@ 000a961c 0421
.org 0xa961e
	str r1, [r7, #12]	@ 000a961e f960
.org 0xa9620
	ldr r0, [r0, #0]	@ 000a9620 0068
.org 0xa9622
	ldr r0, [r0, #16]	@ 000a9622 0069
.org 0xa9624
	str r0, [r7, #20]	@ 000a9624 7861
.org 0xa9626
	add sp, #4	@ 000a9626 01b0
.org 0xa9628
	pop {r3, r4, r5}	@ 000a9628 38bc
.org 0xa962a
	mov r8, r3	@ 000a962a 9846
.org 0xa962c
	mov r9, r4	@ 000a962c a146
.org 0xa962e
	mov sl, r5	@ 000a962e aa46
.org 0xa9630
	pop {r4, r5, r6, r7}	@ 000a9630 f0bc
.org 0xa9632
	pop {r0}	@ 000a9632 01bc
.org 0xa9634
	bx r0	@ 000a9634 0047
