@ FUN_0811d718  entry 0x0811d718  size 250
.thumb
.org 0x11d718
FUN_0811d718:
	push {r4, r5, r6, r7, lr}	@ 0011d718 f0b5
.org 0x11d71a
	mov r7, sl	@ 0011d71a 5746
.org 0x11d71c
	mov r6, r9	@ 0011d71c 4e46
.org 0x11d71e
	mov r5, r8	@ 0011d71e 4546
.org 0x11d720
	push {r5, r6, r7}	@ 0011d720 e0b4
.org 0x11d722
	sub sp, #16	@ 0011d722 84b0
.org 0x11d724
	movs r1, #255	@ 0011d724 ff21
.org 0x11d726
	str r1, [sp, #8]	@ 0011d726 0291
.org 0x11d728
	mov r2, sp	@ 0011d728 6a46
.org 0x11d72a
	ldrb r1, [r0, #0]	@ 0011d72a 0178
.org 0x11d72c
	strb r1, [r2, #0]	@ 0011d72c 1170
.org 0x11d72e
	ldrb r1, [r0, #1]	@ 0011d72e 4178
.org 0x11d730
	strb r1, [r2, #1]	@ 0011d730 5170
.org 0x11d732
	ldrb r1, [r0, #2]	@ 0011d732 8178
.org 0x11d734
	strb r1, [r2, #2]	@ 0011d734 9170
.org 0x11d736
	mov r1, sp	@ 0011d736 6946
.org 0x11d738
	ldrb r0, [r0, #3]	@ 0011d738 c078
.org 0x11d73a
	strb r0, [r1, #3]	@ 0011d73a c870
.org 0x11d73c
	movs r5, #0	@ 0011d73c 0025
.org 0x11d73e
	add r7, sp, #4	@ 0011d73e 01af
.org 0x11d740
	adds r0, r5, #1	@ 0011d740 681c
.org 0x11d742
	lsls r0, r0, #24	@ 0011d742 0006
.org 0x11d744
	lsrs r2, r0, #24	@ 0011d744 020e
.org 0x11d746
	cmp r2, #3	@ 0011d746 032a
.org 0x11d748
	bhi.n 0x11d768	@ 0011d748 0ed8
.org 0x11d74a
	mov r0, sp	@ 0011d74a 6846
.org 0x11d74c
	adds r4, r0, r5	@ 0011d74c 4419
.org 0x11d74e
	mov r1, sp	@ 0011d74e 6946
.org 0x11d750
	adds r3, r1, r2	@ 0011d750 8b18
.org 0x11d752
	ldrb r1, [r3, #0]	@ 0011d752 1978
.org 0x11d754
	ldrb r0, [r4, #0]	@ 0011d754 2078
.org 0x11d756
	cmp r0, r1	@ 0011d756 8842
.org 0x11d758
	bls.n 0x11d75e	@ 0011d758 01d9
.org 0x11d75a
	strb r1, [r4, #0]	@ 0011d75a 2170
.org 0x11d75c
	strb r0, [r3, #0]	@ 0011d75c 1870
.org 0x11d75e
	adds r0, r2, #1	@ 0011d75e 501c
.org 0x11d760
	lsls r0, r0, #24	@ 0011d760 0006
.org 0x11d762
	lsrs r2, r0, #24	@ 0011d762 020e
.org 0x11d764
	cmp r2, #3	@ 0011d764 032a
.org 0x11d766
	bls.n 0x11d74e	@ 0011d766 f2d9
.org 0x11d768
	adds r0, r5, #1	@ 0011d768 681c
.org 0x11d76a
	lsls r0, r0, #24	@ 0011d76a 0006
.org 0x11d76c
	lsrs r5, r0, #24	@ 0011d76c 050e
.org 0x11d76e
	cmp r5, #2	@ 0011d76e 022d
.org 0x11d770
	bls.n 0x11d740	@ 0011d770 e6d9
.org 0x11d772
	movs r2, #0	@ 0011d772 0022
.org 0x11d774
	mov sl, r2	@ 0011d774 9246
.org 0x11d776
	mov r9, r7	@ 0011d776 b946
.org 0x11d778
	mov r8, sp	@ 0011d778 e846
.org 0x11d77a
	mov r0, sl	@ 0011d77a 5046
.org 0x11d77c
	lsls r1, r0, #2	@ 0011d77c 8100
.org 0x11d77e
	ldr r2, [pc, #148]	@ 0011d77e 254a
.org 0x11d780
	adds r1, r1, r2	@ 0011d780 8918
.org 0x11d782
	ldrb r0, [r1, #0]	@ 0011d782 0878
.org 0x11d784
	mov r2, r9	@ 0011d784 4a46
.org 0x11d786
	strb r0, [r2, #0]	@ 0011d786 1070
.org 0x11d788
	ldrb r0, [r1, #1]	@ 0011d788 4878
.org 0x11d78a
	strb r0, [r2, #1]	@ 0011d78a 5070
.org 0x11d78c
	ldrb r0, [r1, #2]	@ 0011d78c 8878
.org 0x11d78e
	strb r0, [r2, #2]	@ 0011d78e 9070
.org 0x11d790
	ldrb r0, [r1, #3]	@ 0011d790 c878
.org 0x11d792
	strb r0, [r2, #3]	@ 0011d792 d070
.org 0x11d794
	movs r5, #0	@ 0011d794 0025
.org 0x11d796
	mov r0, sl	@ 0011d796 5046
.org 0x11d798
	adds r0, #1	@ 0011d798 0130
.org 0x11d79a
	str r0, [sp, #12]	@ 0011d79a 0390
.org 0x11d79c
	adds r1, r5, #1	@ 0011d79c 691c
.org 0x11d79e
	lsls r0, r1, #24	@ 0011d79e 0806
.org 0x11d7a0
	lsrs r2, r0, #24	@ 0011d7a0 020e
.org 0x11d7a2
	mov ip, r1	@ 0011d7a2 8c46
.org 0x11d7a4
	cmp r2, #3	@ 0011d7a4 032a
.org 0x11d7a6
	bhi.n 0x11d7c4	@ 0011d7a6 0dd8
.org 0x11d7a8
	adds r6, r7, #0	@ 0011d7a8 3e1c
.org 0x11d7aa
	adds r4, r7, r5	@ 0011d7aa 7c19
.org 0x11d7ac
	adds r1, r6, r2	@ 0011d7ac b118
.org 0x11d7ae
	ldrb r3, [r1, #0]	@ 0011d7ae 0b78
.org 0x11d7b0
	ldrb r0, [r4, #0]	@ 0011d7b0 2078
.org 0x11d7b2
	cmp r0, r3	@ 0011d7b2 9842
.org 0x11d7b4
	bls.n 0x11d7ba	@ 0011d7b4 01d9
.org 0x11d7b6
	strb r3, [r4, #0]	@ 0011d7b6 2370
.org 0x11d7b8
	strb r0, [r1, #0]	@ 0011d7b8 0870
.org 0x11d7ba
	adds r0, r2, #1	@ 0011d7ba 501c
.org 0x11d7bc
	lsls r0, r0, #24	@ 0011d7bc 0006
.org 0x11d7be
	lsrs r2, r0, #24	@ 0011d7be 020e
.org 0x11d7c0
	cmp r2, #3	@ 0011d7c0 032a
.org 0x11d7c2
	bls.n 0x11d7ac	@ 0011d7c2 f3d9
.org 0x11d7c4
	mov r1, ip	@ 0011d7c4 6146
.org 0x11d7c6
	lsls r0, r1, #24	@ 0011d7c6 0806
.org 0x11d7c8
	lsrs r5, r0, #24	@ 0011d7c8 050e
.org 0x11d7ca
	cmp r5, #2	@ 0011d7ca 022d
.org 0x11d7cc
	bls.n 0x11d79c	@ 0011d7cc e6d9
.org 0x11d7ce
	mov r2, r8	@ 0011d7ce 4246
.org 0x11d7d0
	ldrb r0, [r2, #0]	@ 0011d7d0 1078
.org 0x11d7d2
	ldrb r1, [r7, #0]	@ 0011d7d2 3978
.org 0x11d7d4
	cmp r0, r1	@ 0011d7d4 8842
.org 0x11d7d6
	bne.n 0x11d7f4	@ 0011d7d6 0dd1
.org 0x11d7d8
	ldrb r1, [r2, #1]	@ 0011d7d8 5178
.org 0x11d7da
	ldrb r0, [r7, #1]	@ 0011d7da 7878
.org 0x11d7dc
	cmp r1, r0	@ 0011d7dc 8142
.org 0x11d7de
	bne.n 0x11d7f4	@ 0011d7de 09d1
.org 0x11d7e0
	ldrb r1, [r2, #2]	@ 0011d7e0 9178
.org 0x11d7e2
	ldrb r0, [r7, #2]	@ 0011d7e2 b878
.org 0x11d7e4
	cmp r1, r0	@ 0011d7e4 8142
.org 0x11d7e6
	bne.n 0x11d7f4	@ 0011d7e6 05d1
.org 0x11d7e8
	ldrb r1, [r2, #3]	@ 0011d7e8 d178
.org 0x11d7ea
	ldrb r0, [r7, #3]	@ 0011d7ea f878
.org 0x11d7ec
	cmp r1, r0	@ 0011d7ec 8142
.org 0x11d7ee
	bne.n 0x11d7f4	@ 0011d7ee 01d1
.org 0x11d7f0
	mov r2, sl	@ 0011d7f0 5246
.org 0x11d7f2
	str r2, [sp, #8]	@ 0011d7f2 0292
.org 0x11d7f4
	ldr r1, [sp, #12]	@ 0011d7f4 0399
.org 0x11d7f6
	lsls r0, r1, #24	@ 0011d7f6 0806
.org 0x11d7f8
	lsrs r0, r0, #24	@ 0011d7f8 000e
.org 0x11d7fa
	mov sl, r0	@ 0011d7fa 8246
.org 0x11d7fc
	cmp r0, #27	@ 0011d7fc 1b28
.org 0x11d7fe
	bls.n 0x11d77a	@ 0011d7fe bcd9
.org 0x11d800
	ldr r0, [sp, #8]	@ 0011d800 0298
.org 0x11d802
	add sp, #16	@ 0011d802 04b0
.org 0x11d804
	pop {r3, r4, r5}	@ 0011d804 38bc
.org 0x11d806
	mov r8, r3	@ 0011d806 9846
.org 0x11d808
	mov r9, r4	@ 0011d808 a146
.org 0x11d80a
	mov sl, r5	@ 0011d80a aa46
.org 0x11d80c
	pop {r4, r5, r6, r7}	@ 0011d80c f0bc
.org 0x11d80e
	pop {r1}	@ 0011d80e 02bc
.org 0x11d810
	bx r1	@ 0011d810 0847
