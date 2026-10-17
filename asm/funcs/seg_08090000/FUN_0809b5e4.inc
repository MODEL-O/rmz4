@ FUN_0809b5e4  entry 0x0809b5e4  size 274
.thumb
.org 0x9b5e4
FUN_0809b5e4:
	push {r4, r5, r6, r7, lr}	@ 0009b5e4 f0b5
.org 0x9b5e6
	mov r7, sl	@ 0009b5e6 5746
.org 0x9b5e8
	mov r6, r9	@ 0009b5e8 4e46
.org 0x9b5ea
	mov r5, r8	@ 0009b5ea 4546
.org 0x9b5ec
	push {r5, r6, r7}	@ 0009b5ec e0b4
.org 0x9b5ee
	sub sp, #28	@ 0009b5ee 87b0
.org 0x9b5f0
	adds r4, r0, #0	@ 0009b5f0 041c
.org 0x9b5f2
	ldr r5, [r4, #40]	@ 0009b5f2 a56a
.org 0x9b5f4
	movs r0, #63	@ 0009b5f4 3f20
.org 0x9b5f6
	bl 0x2b10	@ 0009b5f6 67f78bfa
.org 0x9b5fa
	adds r0, r4, #0	@ 0009b5fa 201c
.org 0x9b5fc
	adds r0, #182	@ 0009b5fc b630
.org 0x9b5fe
	ldrb r0, [r0, #0]	@ 0009b5fe 0078
.org 0x9b600
	cmp r0, #0	@ 0009b600 0028
.org 0x9b602
	beq.n 0x9b60c	@ 0009b602 03d0
.org 0x9b604
	adds r0, r5, #0	@ 0009b604 281c
.org 0x9b606
	adds r1, r4, #0	@ 0009b606 211c
.org 0x9b608
	bl 0x66408	@ 0009b608 caf7fefe
.org 0x9b60c
	ldrb r0, [r4, #10]	@ 0009b60c a07a
.org 0x9b60e
	lsrs r6, r0, #4	@ 0009b60e 0609
.org 0x9b610
	movs r2, #1	@ 0009b610 0122
.org 0x9b612
	ands r6, r2	@ 0009b612 1640
.org 0x9b614
	str r6, [sp, #8]	@ 0009b614 0296
.org 0x9b616
	ldr r3, [pc, #224]	@ 0009b616 384b
.org 0x9b618
	ldr r0, [r3, #0]	@ 0009b618 1868
.org 0x9b61a
	ldr r1, [pc, #224]	@ 0009b61a 3849
.org 0x9b61c
	mov r8, r1	@ 0009b61c 8846
.org 0x9b61e
	mov r1, r8	@ 0009b61e 4146
.org 0x9b620
	muls r1, r0	@ 0009b620 4143
.org 0x9b622
	adds r0, r1, #0	@ 0009b622 081c
.org 0x9b624
	ldr r7, [pc, #216]	@ 0009b624 364f
.org 0x9b626
	adds r0, r0, r7	@ 0009b626 c019
.org 0x9b628
	lsls r0, r0, #1	@ 0009b628 4000
.org 0x9b62a
	lsrs r1, r0, #1	@ 0009b62a 4108
.org 0x9b62c
	str r1, [r3, #0]	@ 0009b62c 1960
.org 0x9b62e
	lsrs r0, r0, #17	@ 0009b62e 400c
.org 0x9b630
	ands r0, r2	@ 0009b630 1040
.org 0x9b632
	adds r5, r0, #5	@ 0009b632 451d
.org 0x9b634
	adds r2, r4, #0	@ 0009b634 221c
.org 0x9b636
	adds r2, #140	@ 0009b636 8c32
.org 0x9b638
	str r2, [sp, #16]	@ 0009b638 0492
.org 0x9b63a
	adds r0, r4, #0	@ 0009b63a 201c
.org 0x9b63c
	adds r0, #144	@ 0009b63c 9030
.org 0x9b63e
	str r0, [sp, #20]	@ 0009b63e 0590
.org 0x9b640
	adds r1, r4, #0	@ 0009b640 211c
.org 0x9b642
	adds r1, #148	@ 0009b642 9431
.org 0x9b644
	str r1, [sp, #24]	@ 0009b644 0691
.org 0x9b646
	cmp r5, #0	@ 0009b646 002d
.org 0x9b648
	beq.n 0x9b6ba	@ 0009b648 37d0
.org 0x9b64a
	mov sl, r3	@ 0009b64a 9a46
.org 0x9b64c
	mov r9, r8	@ 0009b64c c146
.org 0x9b64e
	mov r8, r7	@ 0009b64e b846
.org 0x9b650
	movs r7, #15	@ 0009b650 0f27
.org 0x9b652
	mov r2, sp	@ 0009b652 6a46
.org 0x9b654
	str r2, [sp, #12]	@ 0009b654 0392
.org 0x9b656
	mov r1, sl	@ 0009b656 5146
.org 0x9b658
	ldr r0, [r1, #0]	@ 0009b658 0868
.org 0x9b65a
	mov r2, r9	@ 0009b65a 4a46
.org 0x9b65c
	muls r2, r0	@ 0009b65c 4243
.org 0x9b65e
	adds r0, r2, #0	@ 0009b65e 101c
.org 0x9b660
	add r0, r8	@ 0009b660 4044
.org 0x9b662
	lsls r0, r0, #1	@ 0009b662 4000
.org 0x9b664
	lsrs r2, r0, #1	@ 0009b664 4208
.org 0x9b666
	lsrs r0, r0, #17	@ 0009b666 400c
.org 0x9b668
	ands r0, r7	@ 0009b668 3840
.org 0x9b66a
	subs r0, #7	@ 0009b66a 0738
.org 0x9b66c
	lsls r0, r0, #8	@ 0009b66c 0002
.org 0x9b66e
	ldr r1, [r4, #84]	@ 0009b66e 616d
.org 0x9b670
	adds r1, r1, r0	@ 0009b670 0918
.org 0x9b672
	str r1, [sp, #0]	@ 0009b672 0091
.org 0x9b674
	mov r0, r9	@ 0009b674 4846
.org 0x9b676
	muls r0, r2	@ 0009b676 5043
.org 0x9b678
	add r0, r8	@ 0009b678 4044
.org 0x9b67a
	lsls r0, r0, #1	@ 0009b67a 4000
.org 0x9b67c
	lsrs r1, r0, #1	@ 0009b67c 4108
.org 0x9b67e
	mov r2, sl	@ 0009b67e 5246
.org 0x9b680
	str r1, [r2, #0]	@ 0009b680 1160
.org 0x9b682
	lsrs r0, r0, #17	@ 0009b682 400c
.org 0x9b684
	ands r0, r7	@ 0009b684 3840
.org 0x9b686
	lsls r0, r0, #8	@ 0009b686 0002
.org 0x9b688
	ldr r1, [pc, #120]	@ 0009b688 1e49
.org 0x9b68a
	adds r0, r0, r1	@ 0009b68a 4018
.org 0x9b68c
	ldr r1, [r4, #88]	@ 0009b68c a16d
.org 0x9b68e
	adds r1, r1, r0	@ 0009b68e 0918
.org 0x9b690
	ldr r2, [sp, #12]	@ 0009b690 039a
.org 0x9b692
	str r1, [r2, #4]	@ 0009b692 5160
.org 0x9b694
	movs r0, #3	@ 0009b694 0320
.org 0x9b696
	ands r0, r5	@ 0009b696 2840
.org 0x9b698
	lsls r1, r0, #3	@ 0009b698 c100
.org 0x9b69a
	subs r1, r1, r0	@ 0009b69a 091a
.org 0x9b69c
	lsls r1, r1, #2	@ 0009b69c 8900
.org 0x9b69e
	ldr r0, [pc, #104]	@ 0009b69e 1a48
.org 0x9b6a0
	adds r1, r1, r0	@ 0009b6a0 0918
.org 0x9b6a2
	ldr r0, [sp, #8]	@ 0009b6a2 0298
.org 0x9b6a4
	lsls r3, r0, #4	@ 0009b6a4 0301
.org 0x9b6a6
	orrs r3, r6	@ 0009b6a6 3343
.org 0x9b6a8
	lsls r3, r3, #24	@ 0009b6a8 1b06
.org 0x9b6aa
	mov r0, sp	@ 0009b6aa 6846
.org 0x9b6ac
	movs r2, #0	@ 0009b6ac 0022
.org 0x9b6ae
	lsrs r3, r3, #24	@ 0009b6ae 1b0e
.org 0x9b6b0
	bl 0xd4c8c	@ 0009b6b0 39f0ecfa
.org 0x9b6b4
	subs r5, #1	@ 0009b6b4 013d
.org 0x9b6b6
	cmp r5, #0	@ 0009b6b6 002d
.org 0x9b6b8
	bne.n 0x9b656	@ 0009b6b8 cdd1
.org 0x9b6ba
	movs r0, #0	@ 0009b6ba 0020
.org 0x9b6bc
	ldr r1, [sp, #16]	@ 0009b6bc 0499
.org 0x9b6be
	str r0, [r1, #0]	@ 0009b6be 0860
.org 0x9b6c0
	ldr r2, [sp, #20]	@ 0009b6c0 059a
.org 0x9b6c2
	str r0, [r2, #0]	@ 0009b6c2 1060
.org 0x9b6c4
	ldr r1, [sp, #24]	@ 0009b6c4 0699
.org 0x9b6c6
	strb r0, [r1, #0]	@ 0009b6c6 0870
.org 0x9b6c8
	ldrb r1, [r4, #10]	@ 0009b6c8 a17a
.org 0x9b6ca
	movs r0, #251	@ 0009b6ca fb20
.org 0x9b6cc
	ands r0, r1	@ 0009b6cc 0840
.org 0x9b6ce
	movs r1, #254	@ 0009b6ce fe21
.org 0x9b6d0
	ands r0, r1	@ 0009b6d0 0840
.org 0x9b6d2
	strb r0, [r4, #10]	@ 0009b6d2 a072
.org 0x9b6d4
	ldr r1, [pc, #52]	@ 0009b6d4 0d49
.org 0x9b6d6
	ldrb r0, [r4, #9]	@ 0009b6d6 607a
.org 0x9b6d8
	lsls r0, r0, #2	@ 0009b6d8 8000
.org 0x9b6da
	adds r0, r0, r1	@ 0009b6da 4018
.org 0x9b6dc
	movs r1, #4	@ 0009b6dc 0421
.org 0x9b6de
	str r1, [r4, #12]	@ 0009b6de e160
.org 0x9b6e0
	ldr r0, [r0, #0]	@ 0009b6e0 0068
.org 0x9b6e2
	ldr r0, [r0, #16]	@ 0009b6e2 0069
.org 0x9b6e4
	str r0, [r4, #20]	@ 0009b6e4 6061
.org 0x9b6e6
	add sp, #28	@ 0009b6e6 07b0
.org 0x9b6e8
	pop {r3, r4, r5}	@ 0009b6e8 38bc
.org 0x9b6ea
	mov r8, r3	@ 0009b6ea 9846
.org 0x9b6ec
	mov r9, r4	@ 0009b6ec a146
.org 0x9b6ee
	mov sl, r5	@ 0009b6ee aa46
.org 0x9b6f0
	pop {r4, r5, r6, r7}	@ 0009b6f0 f0bc
.org 0x9b6f2
	pop {r0}	@ 0009b6f2 01bc
.org 0x9b6f4
	bx r0	@ 0009b6f4 0047
