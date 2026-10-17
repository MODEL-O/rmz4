@ FUN_0808d67c  entry 0x0808d67c  size 296
.thumb
.org 0x8d67c
FUN_0808d67c:
	push {r4, r5, r6, r7, lr}	@ 0008d67c f0b5
.org 0x8d67e
	mov r7, sl	@ 0008d67e 5746
.org 0x8d680
	mov r6, r9	@ 0008d680 4e46
.org 0x8d682
	mov r5, r8	@ 0008d682 4546
.org 0x8d684
	push {r5, r6, r7}	@ 0008d684 e0b4
.org 0x8d686
	sub sp, #12	@ 0008d686 83b0
.org 0x8d688
	adds r7, r0, #0	@ 0008d688 071c
.org 0x8d68a
	adds r0, #140	@ 0008d68a 8c30
.org 0x8d68c
	movs r5, #0	@ 0008d68c 0025
.org 0x8d68e
	str r5, [r0, #0]	@ 0008d68e 0560
.org 0x8d690
	adds r0, #4	@ 0008d690 0430
.org 0x8d692
	str r5, [r0, #0]	@ 0008d692 0560
.org 0x8d694
	adds r0, #4	@ 0008d694 0430
.org 0x8d696
	strb r5, [r0, #0]	@ 0008d696 0570
.org 0x8d698
	ldrb r1, [r7, #10]	@ 0008d698 b97a
.org 0x8d69a
	movs r0, #251	@ 0008d69a fb20
.org 0x8d69c
	ands r0, r1	@ 0008d69c 0840
.org 0x8d69e
	strb r0, [r7, #10]	@ 0008d69e b872
.org 0x8d6a0
	str r5, [r7, #92]	@ 0008d6a0 fd65
.org 0x8d6a2
	ldr r0, [r7, #84]	@ 0008d6a2 786d
.org 0x8d6a4
	str r0, [sp, #4]	@ 0008d6a4 0190
.org 0x8d6a6
	ldr r0, [r7, #88]	@ 0008d6a6 b86d
.org 0x8d6a8
	ldr r1, [pc, #248]	@ 0008d6a8 3e49
.org 0x8d6aa
	adds r0, r0, r1	@ 0008d6aa 4018
.org 0x8d6ac
	str r0, [sp, #8]	@ 0008d6ac 0290
.org 0x8d6ae
	movs r0, #1	@ 0008d6ae 0120
.org 0x8d6b0
	add r1, sp, #4	@ 0008d6b0 01a9
.org 0x8d6b2
	bl 0xd0c88	@ 0008d6b2 43f0e9fa
.org 0x8d6b6
	movs r0, #42	@ 0008d6b6 2a20
.org 0x8d6b8
	bl 0x2b10	@ 0008d6b8 75f72afa
.org 0x8d6bc
	movs r0, #3	@ 0008d6bc 0320
.org 0x8d6be
	movs r1, #48	@ 0008d6be 3021
.org 0x8d6c0
	add r2, sp, #4	@ 0008d6c0 01aa
.org 0x8d6c2
	bl 0x2ab88	@ 0008d6c2 9df761fa
.org 0x8d6c6
	ldr r6, [pc, #224]	@ 0008d6c6 384e
.org 0x8d6c8
	ldr r0, [r6, #0]	@ 0008d6c8 3068
.org 0x8d6ca
	ldr r1, [pc, #224]	@ 0008d6ca 3849
.org 0x8d6cc
	adds r4, r0, #0	@ 0008d6cc 041c
.org 0x8d6ce
	muls r4, r1	@ 0008d6ce 4c43
.org 0x8d6d0
	ldr r0, [pc, #220]	@ 0008d6d0 3748
.org 0x8d6d2
	mov sl, r0	@ 0008d6d2 8246
.org 0x8d6d4
	add r4, sl	@ 0008d6d4 5444
.org 0x8d6d6
	lsls r4, r4, #1	@ 0008d6d6 6400
.org 0x8d6d8
	lsrs r0, r4, #1	@ 0008d6d8 6008
.org 0x8d6da
	str r0, [r6, #0]	@ 0008d6da 3060
.org 0x8d6dc
	lsrs r4, r4, #17	@ 0008d6dc 640c
.org 0x8d6de
	movs r1, #3	@ 0008d6de 0321
.org 0x8d6e0
	mov r8, r1	@ 0008d6e0 8846
.org 0x8d6e2
	ands r4, r1	@ 0008d6e2 0c40
.org 0x8d6e4
	str r5, [sp, #0]	@ 0008d6e4 0095
.org 0x8d6e6
	add r0, sp, #4	@ 0008d6e6 01a8
.org 0x8d6e8
	movs r1, #0	@ 0008d6e8 0021
.org 0x8d6ea
	ldr r2, [pc, #200]	@ 0008d6ea 324a
.org 0x8d6ec
	adds r3, r4, #0	@ 0008d6ec 231c
.org 0x8d6ee
	bl 0xd9fbc	@ 0008d6ee 4cf065fc
.org 0x8d6f2
	str r5, [sp, #0]	@ 0008d6f2 0095
.org 0x8d6f4
	add r0, sp, #4	@ 0008d6f4 01a8
.org 0x8d6f6
	movs r1, #0	@ 0008d6f6 0021
.org 0x8d6f8
	ldr r2, [pc, #188]	@ 0008d6f8 2f4a
.org 0x8d6fa
	adds r3, r4, #0	@ 0008d6fa 231c
.org 0x8d6fc
	bl 0xd9fbc	@ 0008d6fc 4cf05efc
.org 0x8d700
	ldr r0, [pc, #184]	@ 0008d700 2e48
.org 0x8d702
	mov r9, r0	@ 0008d702 8146
.org 0x8d704
	str r5, [sp, #0]	@ 0008d704 0095
.org 0x8d706
	add r0, sp, #4	@ 0008d706 01a8
.org 0x8d708
	movs r1, #0	@ 0008d708 0021
.org 0x8d70a
	mov r2, r9	@ 0008d70a 4a46
.org 0x8d70c
	adds r3, r4, #0	@ 0008d70c 231c
.org 0x8d70e
	bl 0xd9fbc	@ 0008d70e 4cf055fc
.org 0x8d712
	ldr r0, [sp, #8]	@ 0008d712 0298
.org 0x8d714
	ldr r1, [pc, #168]	@ 0008d714 2a49
.org 0x8d716
	adds r0, r0, r1	@ 0008d716 4018
.org 0x8d718
	str r0, [sp, #8]	@ 0008d718 0290
.org 0x8d71a
	movs r0, #2	@ 0008d71a 0220
.org 0x8d71c
	add r1, sp, #4	@ 0008d71c 01a9
.org 0x8d71e
	bl 0xd0c88	@ 0008d71e 43f0b3fa
.org 0x8d722
	ldr r0, [r6, #0]	@ 0008d722 3068
.org 0x8d724
	ldr r1, [pc, #132]	@ 0008d724 2149
.org 0x8d726
	adds r4, r0, #0	@ 0008d726 041c
.org 0x8d728
	muls r4, r1	@ 0008d728 4c43
.org 0x8d72a
	add r4, sl	@ 0008d72a 5444
.org 0x8d72c
	lsls r4, r4, #1	@ 0008d72c 6400
.org 0x8d72e
	lsrs r0, r4, #1	@ 0008d72e 6008
.org 0x8d730
	str r0, [r6, #0]	@ 0008d730 3060
.org 0x8d732
	lsrs r4, r4, #17	@ 0008d732 640c
.org 0x8d734
	mov r0, r8	@ 0008d734 4046
.org 0x8d736
	ands r4, r0	@ 0008d736 0440
.org 0x8d738
	str r5, [sp, #0]	@ 0008d738 0095
.org 0x8d73a
	add r0, sp, #4	@ 0008d73a 01a8
.org 0x8d73c
	movs r1, #0	@ 0008d73c 0021
.org 0x8d73e
	ldr r2, [pc, #116]	@ 0008d73e 1d4a
.org 0x8d740
	adds r3, r4, #0	@ 0008d740 231c
.org 0x8d742
	bl 0xd9fbc	@ 0008d742 4cf03bfc
.org 0x8d746
	str r5, [sp, #0]	@ 0008d746 0095
.org 0x8d748
	add r0, sp, #4	@ 0008d748 01a8
.org 0x8d74a
	movs r1, #0	@ 0008d74a 0021
.org 0x8d74c
	ldr r2, [pc, #104]	@ 0008d74c 1a4a
.org 0x8d74e
	adds r3, r4, #0	@ 0008d74e 231c
.org 0x8d750
	bl 0xd9fbc	@ 0008d750 4cf034fc
.org 0x8d754
	str r5, [sp, #0]	@ 0008d754 0095
.org 0x8d756
	add r0, sp, #4	@ 0008d756 01a8
.org 0x8d758
	movs r1, #0	@ 0008d758 0021
.org 0x8d75a
	mov r2, r9	@ 0008d75a 4a46
.org 0x8d75c
	adds r3, r4, #0	@ 0008d75c 231c
.org 0x8d75e
	bl 0xd9fbc	@ 0008d75e 4cf02dfc
.org 0x8d762
	ldr r2, [pc, #96]	@ 0008d762 184a
.org 0x8d764
	ldrh r1, [r2, #12]	@ 0008d764 9189
.org 0x8d766
	ldr r0, [pc, #96]	@ 0008d766 1848
.org 0x8d768
	cmp r1, r0	@ 0008d768 8142
.org 0x8d76a
	bhi.n 0x8d770	@ 0008d76a 01d8
.org 0x8d76c
	adds r0, r1, #1	@ 0008d76c 481c
.org 0x8d76e
	strh r0, [r2, #12]	@ 0008d76e 9081
.org 0x8d770
	adds r1, r7, #0	@ 0008d770 391c
.org 0x8d772
	adds r1, #84	@ 0008d772 5431
.org 0x8d774
	adds r0, r7, #0	@ 0008d774 381c
.org 0x8d776
	bl 0x2abe0	@ 0008d776 9df733fa
.org 0x8d77a
	ldrb r1, [r7, #10]	@ 0008d77a b97a
.org 0x8d77c
	movs r0, #254	@ 0008d77c fe20
.org 0x8d77e
	ands r0, r1	@ 0008d77e 0840
.org 0x8d780
	strb r0, [r7, #10]	@ 0008d780 b872
.org 0x8d782
	ldr r1, [pc, #72]	@ 0008d782 1249
.org 0x8d784
	ldrb r0, [r7, #9]	@ 0008d784 787a
.org 0x8d786
	lsls r0, r0, #2	@ 0008d786 8000
.org 0x8d788
	adds r0, r0, r1	@ 0008d788 4018
.org 0x8d78a
	movs r1, #4	@ 0008d78a 0421
.org 0x8d78c
	str r1, [r7, #12]	@ 0008d78c f960
.org 0x8d78e
	ldr r0, [r0, #0]	@ 0008d78e 0068
.org 0x8d790
	ldr r0, [r0, #16]	@ 0008d790 0069
.org 0x8d792
	str r0, [r7, #20]	@ 0008d792 7861
.org 0x8d794
	add sp, #12	@ 0008d794 03b0
.org 0x8d796
	pop {r3, r4, r5}	@ 0008d796 38bc
.org 0x8d798
	mov r8, r3	@ 0008d798 9846
.org 0x8d79a
	mov r9, r4	@ 0008d79a a146
.org 0x8d79c
	mov sl, r5	@ 0008d79c aa46
.org 0x8d79e
	pop {r4, r5, r6, r7}	@ 0008d79e f0bc
.org 0x8d7a0
	pop {r0}	@ 0008d7a0 01bc
.org 0x8d7a2
	bx r0	@ 0008d7a2 0047
