@ FUN_080d773c  entry 0x080d773c  size 150
.thumb
.org 0xd773c
FUN_080d773c:
	push {r4, r5, r6, r7, lr}	@ 000d773c f0b5
.org 0xd773e
	mov r7, sl	@ 000d773e 5746
.org 0xd7740
	mov r6, r9	@ 000d7740 4e46
.org 0xd7742
	mov r5, r8	@ 000d7742 4546
.org 0xd7744
	push {r5, r6, r7}	@ 000d7744 e0b4
.org 0xd7746
	sub sp, #4	@ 000d7746 81b0
.org 0xd7748
	str r0, [sp, #0]	@ 000d7748 0090
.org 0xd774a
	adds r5, r1, #0	@ 000d774a 0d1c
.org 0xd774c
	adds r6, r2, #0	@ 000d774c 161c
.org 0xd774e
	mov sl, r3	@ 000d774e 9a46
.org 0xd7750
	ldr r0, [sp, #40]	@ 000d7750 0a98
.org 0xd7752
	ldr r1, [sp, #44]	@ 000d7752 0b99
.org 0xd7754
	lsls r0, r0, #24	@ 000d7754 0006
.org 0xd7756
	lsrs r0, r0, #24	@ 000d7756 000e
.org 0xd7758
	mov r9, r0	@ 000d7758 8146
.org 0xd775a
	lsls r1, r1, #24	@ 000d775a 0906
.org 0xd775c
	lsrs r1, r1, #24	@ 000d775c 090e
.org 0xd775e
	mov r8, r1	@ 000d775e 8846
.org 0xd7760
	ldr r0, [pc, #112]	@ 000d7760 1c48
.org 0xd7762
	ldr r0, [r0, #0]	@ 000d7762 0068
.org 0xd7764
	bl 0x5500	@ 000d7764 2df7ccfe
.org 0xd7768
	mov ip, r0	@ 000d7768 8446
.org 0xd776a
	cmp r0, #0	@ 000d776a 0028
.org 0xd776c
	beq.n 0xd77c2	@ 000d776c 29d0
.org 0xd776e
	mov r4, ip	@ 000d776e 6446
.org 0xd7770
	adds r4, #37	@ 000d7770 2534
.org 0xd7772
	movs r2, #0	@ 000d7772 0022
.org 0xd7774
	movs r3, #1	@ 000d7774 0123
.org 0xd7776
	strb r3, [r4, #0]	@ 000d7776 2370
.org 0xd7778
	ldr r1, [pc, #92]	@ 000d7778 1749
.org 0xd777a
	movs r0, #23	@ 000d777a 1720
.org 0xd777c
	mov r7, ip	@ 000d777c 6746
.org 0xd777e
	strb r0, [r7, #9]	@ 000d777e 7872
.org 0xd7780
	ldr r0, [r1, #92]	@ 000d7780 c86d
.org 0xd7782
	ldr r0, [r0, #0]	@ 000d7782 0068
.org 0xd7784
	str r0, [r7, #20]	@ 000d7784 7861
.org 0xd7786
	movs r1, #0	@ 000d7786 0021
.org 0xd7788
	strh r2, [r7, #32]	@ 000d7788 3a84
.org 0xd778a
	mov r0, ip	@ 000d778a 6046
.org 0xd778c
	adds r0, #34	@ 000d778c 2230
.org 0xd778e
	strb r1, [r0, #0]	@ 000d778e 0170
.org 0xd7790
	movs r0, #3	@ 000d7790 0320
.org 0xd7792
	strb r0, [r7, #16]	@ 000d7792 3874
.org 0xd7794
	ldr r0, [sp, #0]	@ 000d7794 0098
.org 0xd7796
	str r0, [r7, #40]	@ 000d7796 b862
.org 0xd7798
	ldr r0, [sp, #36]	@ 000d7798 0998
.org 0xd779a
	str r0, [r7, #116]	@ 000d779a 7867
.org 0xd779c
	ldr r0, [r5, #0]	@ 000d779c 2868
.org 0xd779e
	str r0, [r7, #84]	@ 000d779e 7865
.org 0xd77a0
	ldr r0, [r5, #4]	@ 000d77a0 6868
.org 0xd77a2
	str r0, [r7, #88]	@ 000d77a2 b865
.org 0xd77a4
	ldr r0, [r6, #0]	@ 000d77a4 3068
.org 0xd77a6
	str r0, [r7, #92]	@ 000d77a6 f865
.org 0xd77a8
	ldr r0, [r6, #4]	@ 000d77a8 7068
.org 0xd77aa
	str r0, [r7, #96]	@ 000d77aa 3866
.org 0xd77ac
	mov r2, sl	@ 000d77ac 5246
.org 0xd77ae
	str r2, [r7, #104]	@ 000d77ae ba66
.org 0xd77b0
	mov r0, r9	@ 000d77b0 4846
.org 0xd77b2
	strb r0, [r7, #18]	@ 000d77b2 b874
.org 0xd77b4
	mov r2, r8	@ 000d77b4 4246
.org 0xd77b6
	strb r2, [r4, #0]	@ 000d77b6 2270
.org 0xd77b8
	mov r0, ip	@ 000d77b8 6046
.org 0xd77ba
	adds r0, #120	@ 000d77ba 7830
.org 0xd77bc
	strb r3, [r0, #0]	@ 000d77bc 0370
.org 0xd77be
	adds r0, #1	@ 000d77be 0130
.org 0xd77c0
	strb r1, [r0, #0]	@ 000d77c0 0170
.org 0xd77c2
	add sp, #4	@ 000d77c2 01b0
.org 0xd77c4
	pop {r3, r4, r5}	@ 000d77c4 38bc
.org 0xd77c6
	mov r8, r3	@ 000d77c6 9846
.org 0xd77c8
	mov r9, r4	@ 000d77c8 a146
.org 0xd77ca
	mov sl, r5	@ 000d77ca aa46
.org 0xd77cc
	pop {r4, r5, r6, r7}	@ 000d77cc f0bc
.org 0xd77ce
	pop {r0}	@ 000d77ce 01bc
.org 0xd77d0
	bx r0	@ 000d77d0 0047
