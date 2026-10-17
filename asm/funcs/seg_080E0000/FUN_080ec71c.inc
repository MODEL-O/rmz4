@ FUN_080ec71c  entry 0x080ec71c  size 256
.thumb
.org 0xec71c
FUN_080ec71c:
	push {r4, r5, r6, r7, lr}	@ 000ec71c f0b5
.org 0xec71e
	mov r7, sl	@ 000ec71e 5746
.org 0xec720
	mov r6, r9	@ 000ec720 4e46
.org 0xec722
	mov r5, r8	@ 000ec722 4546
.org 0xec724
	push {r5, r6, r7}	@ 000ec724 e0b4
.org 0xec726
	sub sp, #28	@ 000ec726 87b0
.org 0xec728
	adds r7, r0, #0	@ 000ec728 071c
.org 0xec72a
	mov r1, sp	@ 000ec72a 6946
.org 0xec72c
	ldr r0, [pc, #160]	@ 000ec72c 2848
.org 0xec72e
	ldmia r0!, {r2, r3, r4}	@ 000ec72e 1cc8
.org 0xec730
	stmia r1!, {r2, r3, r4}	@ 000ec730 1cc1
.org 0xec732
	ldr r0, [r0, #0]	@ 000ec732 0068
.org 0xec734
	str r0, [r1, #0]	@ 000ec734 0860
.org 0xec736
	add r0, sp, #16	@ 000ec736 04a8
.org 0xec738
	mov sl, r0	@ 000ec738 8246
.org 0xec73a
	ldr r1, [pc, #152]	@ 000ec73a 2649
.org 0xec73c
	movs r2, #4	@ 000ec73c 0422
.org 0xec73e
	bl 0x129258	@ 000ec73e 3cf08bfd
.org 0xec742
	ldr r0, [r7, #40]	@ 000ec742 b86a
.org 0xec744
	ldrb r0, [r0, #12]	@ 000ec744 007b
.org 0xec746
	cmp r0, #4	@ 000ec746 0428
.org 0xec748
	beq.n 0xec7b4	@ 000ec748 34d0
.org 0xec74a
	movs r1, #182	@ 000ec74a b621
.org 0xec74c
	adds r1, r1, r7	@ 000ec74c c919
.org 0xec74e
	mov r9, r1	@ 000ec74e 8946
.org 0xec750
	ldrb r0, [r1, #0]	@ 000ec750 0878
.org 0xec752
	cmp r0, #0	@ 000ec752 0028
.org 0xec754
	beq.n 0xec816	@ 000ec754 5fd0
.org 0xec756
	movs r2, #181	@ 000ec756 b522
.org 0xec758
	adds r2, r2, r7	@ 000ec758 d219
.org 0xec75a
	mov r8, r2	@ 000ec75a 9046
.org 0xec75c
	ldrb r6, [r2, #0]	@ 000ec75c 1678
.org 0xec75e
	adds r0, r7, #0	@ 000ec75e 381c
.org 0xec760
	adds r0, #188	@ 000ec760 bc30
.org 0xec762
	ldr r0, [r0, #0]	@ 000ec762 0068
.org 0xec764
	str r0, [sp, #20]	@ 000ec764 0590
.org 0xec766
	adds r0, r7, #0	@ 000ec766 381c
.org 0xec768
	adds r0, #192	@ 000ec768 c030
.org 0xec76a
	ldr r1, [r0, #0]	@ 000ec76a 0168
.org 0xec76c
	add r0, sp, #20	@ 000ec76c 05a8
.org 0xec76e
	str r1, [r0, #4]	@ 000ec76e 4160
.org 0xec770
	ldr r3, [pc, #100]	@ 000ec770 194b
.org 0xec772
	mov ip, r3	@ 000ec772 9c46
.org 0xec774
	ldr r1, [r3, #0]	@ 000ec774 1968
.org 0xec776
	ldr r5, [pc, #100]	@ 000ec776 194d
.org 0xec778
	adds r2, r1, #0	@ 000ec778 0a1c
.org 0xec77a
	muls r2, r5	@ 000ec77a 6a43
.org 0xec77c
	ldr r4, [pc, #96]	@ 000ec77c 184c
.org 0xec77e
	adds r2, r2, r4	@ 000ec77e 1219
.org 0xec780
	lsls r2, r2, #1	@ 000ec780 5200
.org 0xec782
	lsrs r3, r2, #1	@ 000ec782 5308
.org 0xec784
	lsrs r2, r2, #17	@ 000ec784 520c
.org 0xec786
	movs r1, #255	@ 000ec786 ff21
.org 0xec788
	ands r2, r1	@ 000ec788 0a40
.org 0xec78a
	movs r1, #128	@ 000ec78a 8021
.org 0xec78c
	lsls r1, r1, #3	@ 000ec78c c900
.org 0xec78e
	adds r2, r2, r1	@ 000ec78e 5218
.org 0xec790
	muls r3, r5	@ 000ec790 6b43
.org 0xec792
	adds r3, r3, r4	@ 000ec792 1b19
.org 0xec794
	lsls r3, r3, #1	@ 000ec794 5b00
.org 0xec796
	lsrs r1, r3, #1	@ 000ec796 5908
.org 0xec798
	mov r4, ip	@ 000ec798 6446
.org 0xec79a
	str r1, [r4, #0]	@ 000ec79a 2160
.org 0xec79c
	lsrs r3, r3, #17	@ 000ec79c 5b0c
.org 0xec79e
	movs r1, #7	@ 000ec79e 0721
.org 0xec7a0
	ands r3, r1	@ 000ec7a0 0b40
.org 0xec7a2
	adds r3, #156	@ 000ec7a2 9c33
.org 0xec7a4
	lsls r3, r3, #24	@ 000ec7a4 1b06
.org 0xec7a6
	lsrs r3, r3, #24	@ 000ec7a6 1b0e
.org 0xec7a8
	adds r1, r6, #0	@ 000ec7a8 311c
.org 0xec7aa
	bl 0xe2600	@ 000ec7aa f5f729ff
.org 0xec7ae
	adds r6, #1	@ 000ec7ae 0136
.org 0xec7b0
	cmp r6, #3	@ 000ec7b0 032e
.org 0xec7b2
	ble.n 0xec7e8	@ 000ec7b2 19dd
.org 0xec7b4
	ldr r1, [pc, #44]	@ 000ec7b4 0b49
.org 0xec7b6
	ldrb r0, [r7, #9]	@ 000ec7b6 787a
.org 0xec7b8
	lsls r0, r0, #2	@ 000ec7b8 8000
.org 0xec7ba
	adds r0, r0, r1	@ 000ec7ba 4018
.org 0xec7bc
	movs r1, #2	@ 000ec7bc 0221
.org 0xec7be
	str r1, [r7, #12]	@ 000ec7be f960
.org 0xec7c0
	ldr r0, [r0, #0]	@ 000ec7c0 0068
.org 0xec7c2
	ldr r0, [r0, #8]	@ 000ec7c2 8068
.org 0xec7c4
	str r0, [r7, #20]	@ 000ec7c4 7861
.org 0xec7c6
	adds r0, r7, #0	@ 000ec7c6 381c
.org 0xec7c8
	bl 0xec920	@ 000ec7c8 00f0aaf8
.org 0xec7cc
	b.n 0xec826	@ 000ec7cc 2be0
.org 0xec7ce
	.byte 0x00	@ 000ec7ce data
.org 0xec7cf
	.byte 0x00	@ 000ec7cf data
.org 0xec7d0
	.byte 0x5c,0xa3,0x12,0x08	@ 000ec7d0 data
.org 0xec7d4
	.byte 0x6c,0xa3,0x12,0x08	@ 000ec7d4 data
.org 0xec7d8
	.byte 0x38,0xdc,0x02,0x02	@ 000ec7d8 data
.org 0xec7dc
	.byte 0xfd,0x43,0x03,0x00	@ 000ec7dc data
.org 0xec7e0
	.byte 0xc3,0x9e,0x26,0x00	@ 000ec7e0 data
.org 0xec7e4
	.byte 0xfc,0x92,0x86,0x08	@ 000ec7e4 data
.org 0xec7e8
	movs r0, #0	@ 000ec7e8 0020
.org 0xec7ea
	mov r1, r9	@ 000ec7ea 4946
.org 0xec7ec
	strb r0, [r1, #0]	@ 000ec7ec 0870
.org 0xec7ee
	mov r2, r8	@ 000ec7ee 4246
.org 0xec7f0
	strb r6, [r2, #0]	@ 000ec7f0 1670
.org 0xec7f2
	lsls r0, r6, #2	@ 000ec7f2 b000
.org 0xec7f4
	add r0, sp	@ 000ec7f4 6844
.org 0xec7f6
	ldrh r1, [r0, #0]	@ 000ec7f6 0188
.org 0xec7f8
	adds r0, r7, #0	@ 000ec7f8 381c
.org 0xec7fa
	bl 0x1cf00	@ 000ec7fa 30f781fb
.org 0xec7fe
	adds r0, r7, #0	@ 000ec7fe 381c
.org 0xec800
	adds r0, #116	@ 000ec800 7430
.org 0xec802
	mov r3, sl	@ 000ec802 5346
.org 0xec804
	adds r1, r3, r6	@ 000ec804 9919
.org 0xec806
	ldrb r2, [r1, #0]	@ 000ec806 0a78
.org 0xec808
	lsls r1, r2, #1	@ 000ec808 5100
.org 0xec80a
	adds r1, r1, r2	@ 000ec80a 8918
.org 0xec80c
	lsls r1, r1, #3	@ 000ec80c c900
.org 0xec80e
	ldr r2, [pc, #40]	@ 000ec80e 0a4a
.org 0xec810
	adds r1, r1, r2	@ 000ec810 8918
.org 0xec812
	bl 0x5784	@ 000ec812 18f7b7ff
.org 0xec816
	ldr r0, [pc, #36]	@ 000ec816 0948
.org 0xec818
	ldrb r1, [r7, #13]	@ 000ec818 797b
.org 0xec81a
	lsls r1, r1, #2	@ 000ec81a 8900
