@ FUN_080a7728  entry 0x080a7728  size 184
.thumb
.org 0xa7728
FUN_080a7728:
	push {r4, r5, r6, lr}	@ 000a7728 70b5
.org 0xa772a
	sub sp, #8	@ 000a772a 82b0
.org 0xa772c
	adds r6, r0, #0	@ 000a772c 061c
.org 0xa772e
	ldr r0, [r6, #84]	@ 000a772e 706d
.org 0xa7730
	str r0, [sp, #0]	@ 000a7730 0090
.org 0xa7732
	ldr r0, [r6, #88]	@ 000a7732 b06d
.org 0xa7734
	ldr r1, [pc, #168]	@ 000a7734 2a49
.org 0xa7736
	adds r0, r0, r1	@ 000a7736 4018
.org 0xa7738
	str r0, [sp, #4]	@ 000a7738 0190
.org 0xa773a
	ldr r5, [pc, #168]	@ 000a773a 2a4d
.org 0xa773c
	ldrb r0, [r6, #10]	@ 000a773c b07a
.org 0xa773e
	movs r4, #16	@ 000a773e 1024
.org 0xa7740
	adds r3, r4, #0	@ 000a7740 231c
.org 0xa7742
	ands r3, r0	@ 000a7742 0340
.org 0xa7744
	lsls r3, r3, #24	@ 000a7744 1b06
.org 0xa7746
	lsrs r3, r3, #24	@ 000a7746 1b0e
.org 0xa7748
	mov r0, sp	@ 000a7748 6846
.org 0xa774a
	adds r1, r5, #0	@ 000a774a 291c
.org 0xa774c
	movs r2, #0	@ 000a774c 0022
.org 0xa774e
	bl 0xd4c8c	@ 000a774e 2df09dfa
.org 0xa7752
	adds r1, r5, #0	@ 000a7752 291c
.org 0xa7754
	adds r1, #28	@ 000a7754 1c31
.org 0xa7756
	ldrb r0, [r6, #10]	@ 000a7756 b07a
.org 0xa7758
	adds r3, r4, #0	@ 000a7758 231c
.org 0xa775a
	ands r3, r0	@ 000a775a 0340
.org 0xa775c
	lsls r3, r3, #24	@ 000a775c 1b06
.org 0xa775e
	lsrs r3, r3, #24	@ 000a775e 1b0e
.org 0xa7760
	mov r0, sp	@ 000a7760 6846
.org 0xa7762
	movs r2, #0	@ 000a7762 0022
.org 0xa7764
	bl 0xd4c8c	@ 000a7764 2df092fa
.org 0xa7768
	adds r1, r5, #0	@ 000a7768 291c
.org 0xa776a
	adds r1, #56	@ 000a776a 3831
.org 0xa776c
	ldrb r0, [r6, #10]	@ 000a776c b07a
.org 0xa776e
	adds r3, r4, #0	@ 000a776e 231c
.org 0xa7770
	ands r3, r0	@ 000a7770 0340
.org 0xa7772
	lsls r3, r3, #24	@ 000a7772 1b06
.org 0xa7774
	lsrs r3, r3, #24	@ 000a7774 1b0e
.org 0xa7776
	mov r0, sp	@ 000a7776 6846
.org 0xa7778
	movs r2, #0	@ 000a7778 0022
.org 0xa777a
	bl 0xd4c8c	@ 000a777a 2df087fa
.org 0xa777e
	adds r5, #84	@ 000a777e 5435
.org 0xa7780
	ldrb r0, [r6, #10]	@ 000a7780 b07a
.org 0xa7782
	ands r4, r0	@ 000a7782 0440
.org 0xa7784
	lsls r4, r4, #24	@ 000a7784 2406
.org 0xa7786
	lsrs r4, r4, #24	@ 000a7786 240e
.org 0xa7788
	mov r0, sp	@ 000a7788 6846
.org 0xa778a
	adds r1, r5, #0	@ 000a778a 291c
.org 0xa778c
	movs r2, #0	@ 000a778c 0022
.org 0xa778e
	adds r3, r4, #0	@ 000a778e 231c
.org 0xa7790
	bl 0xd4c8c	@ 000a7790 2df07cfa
.org 0xa7794
	movs r0, #1	@ 000a7794 0120
.org 0xa7796
	mov r1, sp	@ 000a7796 6946
.org 0xa7798
	bl 0xd0c88	@ 000a7798 29f076fa
.org 0xa779c
	movs r0, #42	@ 000a779c 2a20
.org 0xa779e
	bl 0x2b10	@ 000a779e 5bf7b7f9
.org 0xa77a2
	adds r4, r6, #0	@ 000a77a2 341c
.org 0xa77a4
	adds r4, #84	@ 000a77a4 5434
.org 0xa77a6
	movs r0, #4	@ 000a77a6 0420
.org 0xa77a8
	movs r1, #45	@ 000a77a8 2d21
.org 0xa77aa
	adds r2, r4, #0	@ 000a77aa 221c
.org 0xa77ac
	bl 0x2ab88	@ 000a77ac 83f7ecf9
.org 0xa77b0
	ldr r2, [pc, #52]	@ 000a77b0 0d4a
.org 0xa77b2
	ldrh r1, [r2, #12]	@ 000a77b2 9189
.org 0xa77b4
	ldr r0, [pc, #52]	@ 000a77b4 0d48
.org 0xa77b6
	cmp r1, r0	@ 000a77b6 8142
.org 0xa77b8
	bhi.n 0xa77be	@ 000a77b8 01d8
.org 0xa77ba
	adds r0, r1, #1	@ 000a77ba 481c
.org 0xa77bc
	strh r0, [r2, #12]	@ 000a77bc 9081
.org 0xa77be
	adds r0, r6, #0	@ 000a77be 301c
.org 0xa77c0
	adds r1, r4, #0	@ 000a77c0 211c
.org 0xa77c2
	bl 0x2abe0	@ 000a77c2 83f70dfa
.org 0xa77c6
	ldr r1, [pc, #40]	@ 000a77c6 0a49
.org 0xa77c8
	ldrb r0, [r6, #9]	@ 000a77c8 707a
.org 0xa77ca
	lsls r0, r0, #2	@ 000a77ca 8000
.org 0xa77cc
	adds r0, r0, r1	@ 000a77cc 4018
.org 0xa77ce
	movs r1, #4	@ 000a77ce 0421
.org 0xa77d0
	str r1, [r6, #12]	@ 000a77d0 f160
.org 0xa77d2
	ldr r0, [r0, #0]	@ 000a77d2 0068
.org 0xa77d4
	ldr r0, [r0, #16]	@ 000a77d4 0069
.org 0xa77d6
	str r0, [r6, #20]	@ 000a77d6 7061
.org 0xa77d8
	add sp, #8	@ 000a77d8 02b0
.org 0xa77da
	pop {r4, r5, r6}	@ 000a77da 70bc
.org 0xa77dc
	pop {r0}	@ 000a77dc 01bc
.org 0xa77de
	bx r0	@ 000a77de 0047
