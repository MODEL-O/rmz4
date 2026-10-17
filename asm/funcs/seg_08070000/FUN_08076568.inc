@ FUN_08076568  entry 0x08076568  size 1548
.thumb
.org 0x76568
FUN_08076568:
	push {r4, r5, r6, r7, lr}	@ 00076568 f0b5
.org 0x7656a
	mov r7, sl	@ 0007656a 5746
.org 0x7656c
	mov r6, r9	@ 0007656c 4e46
.org 0x7656e
	mov r5, r8	@ 0007656e 4546
.org 0x76570
	push {r5, r6, r7}	@ 00076570 e0b4
.org 0x76572
	sub sp, #68	@ 00076572 91b0
.org 0x76574
	mov r8, r0	@ 00076574 8046
.org 0x76576
	adds r0, #221	@ 00076576 dd30
.org 0x76578
	ldrb r0, [r0, #0]	@ 00076578 0078
.org 0x7657a
	cmp r0, #0	@ 0007657a 0028
.org 0x7657c
	bne.n 0x76586	@ 0007657c 03d1
.org 0x7657e
	ldr r0, [pc, #12]	@ 0007657e 0348
.org 0x76580
	ldrh r0, [r0, #0]	@ 00076580 0088
.org 0x76582
	cmp r0, #16	@ 00076582 1028
.org 0x76584
	bne.n 0x76590	@ 00076584 04d1
.org 0x76586
	movs r0, #1	@ 00076586 0120
.org 0x76588
	mov r9, r0	@ 00076588 8146
.org 0x7658a
	b.n 0x76594	@ 0007658a 03e0
.org 0x7658c
	.byte 0x10,0xe9,0x02,0x02	@ 0007658c data
.org 0x76590
	movs r1, #0	@ 00076590 0021
.org 0x76592
	mov r9, r1	@ 00076592 8946
.org 0x76594
	mov r2, r8	@ 00076594 4246
.org 0x76596
	ldrb r0, [r2, #14]	@ 00076596 907b
.org 0x76598
	movs r3, #180	@ 00076598 b423
.org 0x7659a
	add r3, r8	@ 0007659a 4344
.org 0x7659c
	mov sl, r3	@ 0007659c 9a46
.org 0x7659e
	cmp r0, #0	@ 0007659e 0028
.org 0x765a0
	bne.n 0x7667a	@ 000765a0 6bd1
.org 0x765a2
	ldr r1, [pc, #60]	@ 000765a2 0f49
.org 0x765a4
	mov r0, r8	@ 000765a4 4046
.org 0x765a6
	bl 0x1cf00	@ 000765a6 a6f7abfc
.org 0x765aa
	movs r0, #219	@ 000765aa db20
.org 0x765ac
	bl 0x2b10	@ 000765ac 8cf7b0fa
.org 0x765b0
	mov r0, r8	@ 000765b0 4046
.org 0x765b2
	adds r0, #116	@ 000765b2 7430
.org 0x765b4
	ldr r1, [pc, #44]	@ 000765b4 0b49
.org 0x765b6
	bl 0x5784	@ 000765b6 8ff7e5f8
.org 0x765ba
	ldr r0, [pc, #44]	@ 000765ba 0b48
.org 0x765bc
	ldrh r0, [r0, #0]	@ 000765bc 0088
.org 0x765be
	cmp r0, #3	@ 000765be 0328
.org 0x765c0
	bne.n 0x765ec	@ 000765c0 14d1
.org 0x765c2
	mov r0, r8	@ 000765c2 4046
.org 0x765c4
	adds r0, #84	@ 000765c4 5430
.org 0x765c6
	movs r1, #0	@ 000765c6 0021
.org 0x765c8
	movs r2, #145	@ 000765c8 9122
.org 0x765ca
	bl 0xdad0c	@ 000765ca 64f09ffb
.org 0x765ce
	mov r5, sl	@ 000765ce 5546
.org 0x765d0
	str r0, [r5, #12]	@ 000765d0 e860
.org 0x765d2
	adds r0, #120	@ 000765d2 7830
.org 0x765d4
	movs r1, #51	@ 000765d4 3321
.org 0x765d6
	strb r1, [r0, #0]	@ 000765d6 0170
.org 0x765d8
	ldr r0, [r5, #12]	@ 000765d8 e868
.org 0x765da
	adds r0, #121	@ 000765da 7930
.org 0x765dc
	movs r1, #12	@ 000765dc 0c21
.org 0x765de
	b.n 0x7660a	@ 000765de 14e0
.org 0x765e0
	.byte 0x10,0xaf,0x00,0x00	@ 000765e0 data
.org 0x765e4
	.byte 0xfc,0xcf,0x85,0x08	@ 000765e4 data
.org 0x765e8
	.byte 0x10,0xe9,0x02,0x02	@ 000765e8 data
.org 0x765ec
	mov r0, r8	@ 000765ec 4046
.org 0x765ee
	adds r0, #84	@ 000765ee 5430
.org 0x765f0
	movs r1, #0	@ 000765f0 0021
.org 0x765f2
	movs r2, #225	@ 000765f2 e122
.org 0x765f4
	bl 0xdad0c	@ 000765f4 64f08afb
.org 0x765f8
	mov r1, sl	@ 000765f8 5146
.org 0x765fa
	str r0, [r1, #12]	@ 000765fa c860
.org 0x765fc
	adds r0, #120	@ 000765fc 7830
.org 0x765fe
	movs r1, #57	@ 000765fe 3921
.org 0x76600
	strb r1, [r0, #0]	@ 00076600 0170
.org 0x76602
	mov r2, sl	@ 00076602 5246
.org 0x76604
	ldr r0, [r2, #12]	@ 00076604 d068
.org 0x76606
	adds r0, #121	@ 00076606 7930
.org 0x76608
	movs r1, #6	@ 00076608 0621
.org 0x7660a
	strb r1, [r0, #0]	@ 0007660a 0170
.org 0x7660c
	movs r4, #0	@ 0007660c 0024
.org 0x7660e
	movs r0, #0	@ 0007660e 0020
.org 0x76610
	mov r3, sl	@ 00076610 5346
.org 0x76612
	strh r0, [r3, #32]	@ 00076612 1884
.org 0x76614
	ldr r0, [r3, #12]	@ 00076614 d868
.org 0x76616
	adds r0, #116	@ 00076616 7430
.org 0x76618
	movs r1, #255	@ 00076618 ff21
.org 0x7661a
	strb r1, [r0, #0]	@ 0007661a 0170
.org 0x7661c
	ldr r0, [r3, #12]	@ 0007661c d868
.org 0x7661e
	adds r0, #117	@ 0007661e 7530
.org 0x76620
	strb r4, [r0, #0]	@ 00076620 0470
.org 0x76622
	ldr r0, [r3, #12]	@ 00076622 d868
.org 0x76624
	adds r0, #118	@ 00076624 7630
.org 0x76626
	strb r4, [r0, #0]	@ 00076626 0470
.org 0x76628
	movs r2, #192	@ 00076628 c022
.org 0x7662a
	lsls r2, r2, #6	@ 0007662a 9201
.org 0x7662c
	mov r0, r8	@ 0007662c 4046
.org 0x7662e
	mov r1, r9	@ 0007662e 4946
.org 0x76630
	bl 0xcc030	@ 00076630 55f0fefc
.org 0x76634
	movs r2, #192	@ 00076634 c022
.org 0x76636
	lsls r2, r2, #7	@ 00076636 d201
.org 0x76638
	mov r0, r8	@ 00076638 4046
.org 0x7663a
	mov r1, r9	@ 0007663a 4946
.org 0x7663c
	bl 0xcc030	@ 0007663c 55f0f8fc
.org 0x76640
	movs r2, #144	@ 00076640 9022
.org 0x76642
	lsls r2, r2, #8	@ 00076642 1202
.org 0x76644
	mov r0, r8	@ 00076644 4046
.org 0x76646
	mov r1, r9	@ 00076646 4946
.org 0x76648
	bl 0xcc030	@ 00076648 55f0f2fc
.org 0x7664c
	movs r2, #192	@ 0007664c c022
.org 0x7664e
	lsls r2, r2, #8	@ 0007664e 1202
.org 0x76650
	mov r0, r8	@ 00076650 4046
.org 0x76652
	mov r1, r9	@ 00076652 4946
.org 0x76654
	bl 0xcc030	@ 00076654 55f0ecfc
.org 0x76658
	movs r2, #240	@ 00076658 f022
.org 0x7665a
	lsls r2, r2, #8	@ 0007665a 1202
.org 0x7665c
	mov r0, r8	@ 0007665c 4046
.org 0x7665e
	mov r1, r9	@ 0007665e 4946
.org 0x76660
	bl 0xcc030	@ 00076660 55f0e6fc
.org 0x76664
	movs r2, #144	@ 00076664 9022
.org 0x76666
	lsls r2, r2, #9	@ 00076666 5202
.org 0x76668
	mov r0, r8	@ 00076668 4046
.org 0x7666a
	mov r1, r9	@ 0007666a 4946
.org 0x7666c
	bl 0xcc030	@ 0007666c 55f0e0fc
.org 0x76670
	mov r5, r8	@ 00076670 4546
.org 0x76672
	strb r4, [r5, #15]	@ 00076672 ec73
.org 0x76674
	ldrb r0, [r5, #14]	@ 00076674 a87b
.org 0x76676
	adds r0, #1	@ 00076676 0130
.org 0x76678
	strb r0, [r5, #14]	@ 00076678 a873
.org 0x7667a
	mov r0, r8	@ 0007667a 4046
.org 0x7667c
	bl 0x1cff0	@ 0007667c a6f7b8fc
.org 0x76680
	mov r4, r8	@ 00076680 4446
.org 0x76682
	adds r4, #208	@ 00076682 d034
.org 0x76684
	ldr r5, [r4, #0]	@ 00076684 2568
.org 0x76686
	adds r0, r5, #0	@ 00076686 281c
.org 0x76688
	movs r1, #6	@ 00076688 0621
.org 0x7668a
	bl 0x129198	@ 0007668a b2f085fd
.org 0x7668e
	adds r5, #1	@ 0007668e 0135
.org 0x76690
	str r5, [r4, #0]	@ 00076690 2560
.org 0x76692
	mov r1, r8	@ 00076692 4146
.org 0x76694
	adds r1, #36	@ 00076694 2431
.org 0x76696
	str r1, [sp, #48]	@ 00076696 0c91
.org 0x76698
	cmp r0, #0	@ 00076698 0028
.org 0x7669a
	beq.n 0x7669e	@ 0007669a 00d0
.org 0x7669c
	b.n 0x767ee	@ 0007669c a7e0
.org 0x7669e
	mov r2, r8	@ 0007669e 4246
.org 0x766a0
	ldrb r1, [r2, #10]	@ 000766a0 917a
.org 0x766a2
	movs r0, #16	@ 000766a2 1020
.org 0x766a4
	ands r0, r1	@ 000766a4 0840
.org 0x766a6
	cmp r0, #0	@ 000766a6 0028
.org 0x766a8
	beq.n 0x76754	@ 000766a8 54d0
.org 0x766aa
	ldr r3, [sp, #48]	@ 000766aa 0c9b
.org 0x766ac
	ldrb r0, [r3, #0]	@ 000766ac 1878
.org 0x766ae
	movs r2, #96	@ 000766ae 6022
.org 0x766b0
	subs r2, r2, r0	@ 000766b0 121a
.org 0x766b2
	lsls r2, r2, #24	@ 000766b2 1206
.org 0x766b4
	ldr r4, [pc, #152]	@ 000766b4 264c
.org 0x766b6
	movs r5, #128	@ 000766b6 8025
.org 0x766b8
	lsls r5, r5, #23	@ 000766b8 ed05
.org 0x766ba
	adds r0, r2, r5	@ 000766ba 5019
.org 0x766bc
	lsrs r0, r0, #23	@ 000766bc c00d
.org 0x766be
	adds r0, r0, r4	@ 000766be 0019
.org 0x766c0
	movs r1, #0	@ 000766c0 0021
.org 0x766c2
	ldrsh r0, [r0, r1]	@ 000766c2 405e
.org 0x766c4
	lsls r1, r0, #2	@ 000766c4 8100
.org 0x766c6
	adds r1, r1, r0	@ 000766c6 0918
.org 0x766c8
	lsls r1, r1, #2	@ 000766c8 8900
.org 0x766ca
	mov r3, r8	@ 000766ca 4346
.org 0x766cc
	ldr r0, [r3, #84]	@ 000766cc 586d
.org 0x766ce
	adds r0, r0, r1	@ 000766ce 4018
.org 0x766d0
	str r0, [sp, #0]	@ 000766d0 0090
.org 0x766d2
	lsrs r2, r2, #23	@ 000766d2 d20d
.org 0x766d4
	adds r2, r2, r4	@ 000766d4 1219
.org 0x766d6
	movs r5, #0	@ 000766d6 0025
.org 0x766d8
	ldrsh r0, [r2, r5]	@ 000766d8 505f
.org 0x766da
	lsls r1, r0, #2	@ 000766da 8100
.org 0x766dc
	adds r1, r1, r0	@ 000766dc 0918
.org 0x766de
	lsls r1, r1, #2	@ 000766de 8900
.org 0x766e0
	ldr r0, [r3, #88]	@ 000766e0 986d
.org 0x766e2
	adds r0, r0, r1	@ 000766e2 4018
.org 0x766e4
	str r0, [sp, #4]	@ 000766e4 0190
.org 0x766e6
	ldr r1, [sp, #48]	@ 000766e6 0c99
.org 0x766e8
	ldrb r0, [r1, #0]	@ 000766e8 0878
.org 0x766ea
	movs r2, #80	@ 000766ea 5022
.org 0x766ec
	subs r2, r2, r0	@ 000766ec 121a
.org 0x766ee
	lsls r2, r2, #24	@ 000766ee 1206
.org 0x766f0
	lsrs r2, r2, #24	@ 000766f0 120e
.org 0x766f2
	mov r0, sp	@ 000766f2 6846
.org 0x766f4
	movs r1, #2	@ 000766f4 0221
.org 0x766f6
	movs r3, #0	@ 000766f6 0023
.org 0x766f8
	bl 0xcbf1c	@ 000766f8 55f010fc
.org 0x766fc
	ldr r2, [sp, #48]	@ 000766fc 0c9a
.org 0x766fe
	ldrb r0, [r2, #0]	@ 000766fe 1078
.org 0x76700
	movs r2, #224	@ 00076700 e022
.org 0x76702
	subs r2, r2, r0	@ 00076702 121a
.org 0x76704
	lsls r2, r2, #24	@ 00076704 1206
.org 0x76706
	movs r3, #128	@ 00076706 8023
.org 0x76708
	lsls r3, r3, #23	@ 00076708 db05
.org 0x7670a
	adds r0, r2, r3	@ 0007670a d018
.org 0x7670c
	lsrs r0, r0, #23	@ 0007670c c00d
.org 0x7670e
	adds r0, r0, r4	@ 0007670e 0019
.org 0x76710
	movs r5, #0	@ 00076710 0025
.org 0x76712
	ldrsh r0, [r0, r5]	@ 00076712 405f
.org 0x76714
	lsls r1, r0, #2	@ 00076714 8100
.org 0x76716
	adds r1, r1, r0	@ 00076716 0918
.org 0x76718
	lsls r1, r1, #2	@ 00076718 8900
.org 0x7671a
	mov r3, r8	@ 0007671a 4346
.org 0x7671c
	ldr r0, [r3, #84]	@ 0007671c 586d
.org 0x7671e
	adds r0, r0, r1	@ 0007671e 4018
.org 0x76720
	str r0, [sp, #0]	@ 00076720 0090
.org 0x76722
	lsrs r2, r2, #23	@ 00076722 d20d
.org 0x76724
	adds r2, r2, r4	@ 00076724 1219
.org 0x76726
	movs r5, #0	@ 00076726 0025
.org 0x76728
	ldrsh r0, [r2, r5]	@ 00076728 505f
.org 0x7672a
	lsls r1, r0, #2	@ 0007672a 8100
.org 0x7672c
	adds r1, r1, r0	@ 0007672c 0918
.org 0x7672e
	lsls r1, r1, #2	@ 0007672e 8900
.org 0x76730
	ldr r0, [r3, #88]	@ 00076730 986d
.org 0x76732
	adds r0, r0, r1	@ 00076732 4018
.org 0x76734
	str r0, [sp, #4]	@ 00076734 0190
.org 0x76736
	ldr r1, [sp, #48]	@ 00076736 0c99
.org 0x76738
	ldrb r0, [r1, #0]	@ 00076738 0878
.org 0x7673a
	movs r2, #208	@ 0007673a d022
.org 0x7673c
	subs r2, r2, r0	@ 0007673c 121a
.org 0x7673e
	lsls r2, r2, #24	@ 0007673e 1206
.org 0x76740
	lsrs r2, r2, #24	@ 00076740 120e
.org 0x76742
	mov r0, sp	@ 00076742 6846
.org 0x76744
	movs r1, #2	@ 00076744 0221
.org 0x76746
	movs r3, #1	@ 00076746 0123
.org 0x76748
	bl 0xcbf1c	@ 00076748 55f0e8fb
.org 0x7674c
	b.n 0x767ee	@ 0007674c 4fe0
.org 0x7674e
	.byte 0x00	@ 0007674e data
.org 0x7674f
	.byte 0x00	@ 0007674f data
.org 0x76750
	.byte 0x0c,0x93,0x12,0x08	@ 00076750 data
.org 0x76754
	ldr r3, [sp, #48]	@ 00076754 0c9b
.org 0x76756
	ldrb r2, [r3, #0]	@ 00076756 1a78
.org 0x76758
	adds r2, #32	@ 00076758 2032
.org 0x7675a
	lsls r2, r2, #24	@ 0007675a 1206
.org 0x7675c
	ldr r4, [pc, #172]	@ 0007675c 2b4c
.org 0x7675e
	movs r5, #128	@ 0007675e 8025
.org 0x76760
	lsls r5, r5, #23	@ 00076760 ed05
.org 0x76762
	adds r0, r2, r5	@ 00076762 5019
.org 0x76764
	lsrs r0, r0, #23	@ 00076764 c00d
.org 0x76766
	adds r0, r0, r4	@ 00076766 0019
.org 0x76768
	movs r1, #0	@ 00076768 0021
.org 0x7676a
	ldrsh r0, [r0, r1]	@ 0007676a 405e
.org 0x7676c
	lsls r1, r0, #2	@ 0007676c 8100
.org 0x7676e
	adds r1, r1, r0	@ 0007676e 0918
.org 0x76770
	lsls r1, r1, #2	@ 00076770 8900
.org 0x76772
	mov r3, r8	@ 00076772 4346
.org 0x76774
	ldr r0, [r3, #84]	@ 00076774 586d
.org 0x76776
	adds r0, r0, r1	@ 00076776 4018
.org 0x76778
	str r0, [sp, #0]	@ 00076778 0090
.org 0x7677a
	lsrs r2, r2, #23	@ 0007677a d20d
.org 0x7677c
	adds r2, r2, r4	@ 0007677c 1219
.org 0x7677e
	movs r5, #0	@ 0007677e 0025
.org 0x76780
	ldrsh r0, [r2, r5]	@ 00076780 505f
.org 0x76782
	lsls r1, r0, #2	@ 00076782 8100
.org 0x76784
	adds r1, r1, r0	@ 00076784 0918
.org 0x76786
	lsls r1, r1, #2	@ 00076786 8900
.org 0x76788
	ldr r0, [r3, #88]	@ 00076788 986d
.org 0x7678a
	adds r0, r0, r1	@ 0007678a 4018
.org 0x7678c
	str r0, [sp, #4]	@ 0007678c 0190
.org 0x7678e
	ldr r0, [sp, #48]	@ 0007678e 0c98
.org 0x76790
	ldrb r2, [r0, #0]	@ 00076790 0278
.org 0x76792
	adds r2, #48	@ 00076792 3032
.org 0x76794
	lsls r2, r2, #24	@ 00076794 1206
.org 0x76796
	lsrs r2, r2, #24	@ 00076796 120e
.org 0x76798
	mov r0, sp	@ 00076798 6846
.org 0x7679a
	movs r1, #2	@ 0007679a 0221
.org 0x7679c
	movs r3, #0	@ 0007679c 0023
.org 0x7679e
	bl 0xcbf1c	@ 0007679e 55f0bdfb
.org 0x767a2
	ldr r1, [sp, #48]	@ 000767a2 0c99
.org 0x767a4
	ldrb r2, [r1, #0]	@ 000767a4 0a78
.org 0x767a6
	adds r2, #160	@ 000767a6 a032
.org 0x767a8
	lsls r2, r2, #24	@ 000767a8 1206
.org 0x767aa
	movs r3, #128	@ 000767aa 8023
.org 0x767ac
	lsls r3, r3, #23	@ 000767ac db05
.org 0x767ae
	adds r0, r2, r3	@ 000767ae d018
.org 0x767b0
	lsrs r0, r0, #23	@ 000767b0 c00d
.org 0x767b2
	adds r0, r0, r4	@ 000767b2 0019
.org 0x767b4
	movs r5, #0	@ 000767b4 0025
.org 0x767b6
	ldrsh r0, [r0, r5]	@ 000767b6 405f
.org 0x767b8
	lsls r1, r0, #2	@ 000767b8 8100
.org 0x767ba
	adds r1, r1, r0	@ 000767ba 0918
.org 0x767bc
	lsls r1, r1, #2	@ 000767bc 8900
.org 0x767be
	mov r3, r8	@ 000767be 4346
.org 0x767c0
	ldr r0, [r3, #84]	@ 000767c0 586d
.org 0x767c2
	adds r0, r0, r1	@ 000767c2 4018
.org 0x767c4
	str r0, [sp, #0]	@ 000767c4 0090
.org 0x767c6
	lsrs r2, r2, #23	@ 000767c6 d20d
.org 0x767c8
	adds r2, r2, r4	@ 000767c8 1219
.org 0x767ca
	movs r5, #0	@ 000767ca 0025
.org 0x767cc
	ldrsh r0, [r2, r5]	@ 000767cc 505f
.org 0x767ce
	lsls r1, r0, #2	@ 000767ce 8100
.org 0x767d0
	adds r1, r1, r0	@ 000767d0 0918
.org 0x767d2
	lsls r1, r1, #2	@ 000767d2 8900
.org 0x767d4
	ldr r0, [r3, #88]	@ 000767d4 986d
.org 0x767d6
	adds r0, r0, r1	@ 000767d6 4018
.org 0x767d8
	str r0, [sp, #4]	@ 000767d8 0190
.org 0x767da
	ldr r0, [sp, #48]	@ 000767da 0c98
.org 0x767dc
	ldrb r2, [r0, #0]	@ 000767dc 0278
.org 0x767de
	adds r2, #176	@ 000767de b032
.org 0x767e0
	lsls r2, r2, #24	@ 000767e0 1206
.org 0x767e2
	lsrs r2, r2, #24	@ 000767e2 120e
.org 0x767e4
	mov r0, sp	@ 000767e4 6846
.org 0x767e6
	movs r1, #2	@ 000767e6 0221
.org 0x767e8
	movs r3, #1	@ 000767e8 0123
.org 0x767ea
	bl 0xcbf1c	@ 000767ea 55f097fb
.org 0x767ee
	mov r0, r8	@ 000767ee 4046
.org 0x767f0
	adds r0, #164	@ 000767f0 a430
.org 0x767f2
	movs r1, #0	@ 000767f2 0021
.org 0x767f4
	ldrsh r0, [r0, r1]	@ 000767f4 405e
.org 0x767f6
	cmp r0, #15	@ 000767f6 0f28
.org 0x767f8
	bgt.n 0x7681a	@ 000767f8 0fdc
.org 0x767fa
	mov r2, r9	@ 000767fa 4a46
.org 0x767fc
	cmp r2, #0	@ 000767fc 002a
.org 0x767fe
	beq.n 0x76810	@ 000767fe 07d0
.org 0x76800
	movs r1, #224	@ 00076800 e021
.org 0x76802
	lsls r1, r1, #1	@ 00076802 4900
.org 0x76804
	movs r3, #5	@ 00076804 0523
.org 0x76806
	str r3, [sp, #20]	@ 00076806 0593
.org 0x76808
	b.n 0x7684e	@ 00076808 21e0
.org 0x7680a
	.byte 0x00	@ 0007680a data
.org 0x7680b
	.byte 0x00	@ 0007680b data
.org 0x7680c
	.byte 0x0c,0x93,0x12,0x08	@ 0007680c data
.org 0x76810
	movs r1, #208	@ 00076810 d021
.org 0x76812
	lsls r1, r1, #1	@ 00076812 4900
.org 0x76814
	movs r5, #4	@ 00076814 0425
.org 0x76816
	str r5, [sp, #20]	@ 00076816 0595
.org 0x76818
	b.n 0x7684e	@ 00076818 19e0
.org 0x7681a
	cmp r0, #31	@ 0007681a 1f28
.org 0x7681c
	bgt.n 0x76836	@ 0007681c 0bdc
.org 0x7681e
	mov r0, r9	@ 0007681e 4846
.org 0x76820
	cmp r0, #0	@ 00076820 0028
.org 0x76822
	beq.n 0x7682c	@ 00076822 03d0
.org 0x76824
	movs r1, #208	@ 00076824 d021
.org 0x76826
	lsls r1, r1, #1	@ 00076826 4900
.org 0x76828
	movs r2, #4	@ 00076828 0422
.org 0x7682a
	b.n 0x7684c	@ 0007682a 0fe0
.org 0x7682c
	movs r1, #192	@ 0007682c c021
.org 0x7682e
	lsls r1, r1, #1	@ 0007682e 4900
.org 0x76830
	movs r3, #3	@ 00076830 0323
.org 0x76832
	str r3, [sp, #20]	@ 00076832 0593
.org 0x76834
	b.n 0x7684e	@ 00076834 0be0
.org 0x76836
	mov r5, r9	@ 00076836 4d46
.org 0x76838
	cmp r5, #0	@ 00076838 002d
.org 0x7683a
	beq.n 0x76846	@ 0007683a 04d0
.org 0x7683c
	movs r1, #192	@ 0007683c c021
.org 0x7683e
	lsls r1, r1, #1	@ 0007683e 4900
.org 0x76840
	movs r0, #4	@ 00076840 0420
.org 0x76842
	str r0, [sp, #20]	@ 00076842 0590
.org 0x76844
	b.n 0x7684e	@ 00076844 03e0
.org 0x76846
	movs r1, #176	@ 00076846 b021
.org 0x76848
	lsls r1, r1, #1	@ 00076848 4900
.org 0x7684a
	movs r2, #3	@ 0007684a 0322
.org 0x7684c
	str r2, [sp, #20]	@ 0007684c 0592
.org 0x7684e
	mov r3, r8	@ 0007684e 4346
.org 0x76850
	ldr r0, [r3, #100]	@ 00076850 586e
.org 0x76852
	adds r0, #8	@ 00076852 0830
.org 0x76854
	str r0, [r3, #100]	@ 00076854 5866
.org 0x76856
	cmp r0, r1	@ 00076856 8842
.org 0x76858
	ble.n 0x7685c	@ 00076858 00dd
.org 0x7685a
	str r1, [r3, #100]	@ 0007685a 5966
.org 0x7685c
	mov r5, sl	@ 0007685c 5546
.org 0x7685e
	ldrh r5, [r5, #34]	@ 0007685e 6d8c
.org 0x76860
	str r5, [sp, #16]	@ 00076860 0495
.org 0x76862
	mov r1, r8	@ 00076862 4146
.org 0x76864
	ldr r0, [r1, #100]	@ 00076864 486e
.org 0x76866
	adds r0, r5, r0	@ 00076866 2818
.org 0x76868
	mov r2, sl	@ 00076868 5246
.org 0x7686a
	strh r0, [r2, #34]	@ 0007686a 5084
.org 0x7686c
	lsrs r0, r0, #8	@ 0007686c 000a
.org 0x7686e
	ldr r3, [sp, #48]	@ 0007686e 0c9b
.org 0x76870
	strb r0, [r3, #0]	@ 00076870 1870
.org 0x76872
	ldr r0, [r2, #12]	@ 00076872 d068
.org 0x76874
	cmp r0, #0	@ 00076874 0028
.org 0x76876
	bne.n 0x7687a	@ 00076876 00d1
.org 0x76878
	b.n 0x76b6e	@ 00076878 79e1
.org 0x7687a
	adds r7, r0, #0	@ 0007687a 071c
.org 0x7687c
	ldrb r0, [r1, #15]	@ 0007687c c87b
.org 0x7687e
	cmp r0, #0	@ 0007687e 0028
.org 0x76880
	bne.n 0x76904	@ 00076880 40d1
.org 0x76882
	ldrh r0, [r2, #32]	@ 00076882 108c
.org 0x76884
	adds r0, #2	@ 00076884 0230
.org 0x76886
	strh r0, [r2, #32]	@ 00076886 1084
.org 0x76888
	lsls r0, r0, #24	@ 00076888 0006
.org 0x7688a
	lsrs r6, r0, #24	@ 0007688a 060e
.org 0x7688c
	ldr r4, [pc, #100]	@ 0007688c 194c
.org 0x7688e
	ldrh r0, [r2, #32]	@ 0007688e 108c
.org 0x76890
	movs r1, #3	@ 00076890 0321
.org 0x76892
	bl 0x129198	@ 00076892 b2f081fc
.org 0x76896
	lsls r0, r0, #16	@ 00076896 0004
.org 0x76898
	lsrs r0, r0, #16	@ 00076898 000c
.org 0x7689a
	adds r0, r0, r4	@ 0007689a 0019
.org 0x7689c
	ldrb r1, [r0, #0]	@ 0007689c 0178
.org 0x7689e
	adds r0, r7, #0	@ 0007689e 381c
.org 0x768a0
	adds r0, #116	@ 000768a0 7430
.org 0x768a2
	strb r1, [r0, #0]	@ 000768a2 0170
.org 0x768a4
	ldr r4, [pc, #80]	@ 000768a4 144c
.org 0x768a6
	mov r5, sl	@ 000768a6 5546
.org 0x768a8
	ldrh r0, [r5, #32]	@ 000768a8 288c
.org 0x768aa
	movs r1, #3	@ 000768aa 0321
.org 0x768ac
	bl 0x129198	@ 000768ac b2f074fc
.org 0x768b0
	lsls r0, r0, #16	@ 000768b0 0004
.org 0x768b2
	lsrs r0, r0, #16	@ 000768b2 000c
.org 0x768b4
	adds r0, r0, r4	@ 000768b4 0019
.org 0x768b6
	ldrb r0, [r0, #0]	@ 000768b6 0078
.org 0x768b8
	adds r1, r7, #0	@ 000768b8 391c
.org 0x768ba
	adds r1, #117	@ 000768ba 7531
.org 0x768bc
	strb r0, [r1, #0]	@ 000768bc 0870
.org 0x768be
	ldr r4, [pc, #60]	@ 000768be 0f4c
.org 0x768c0
	ldrh r0, [r5, #32]	@ 000768c0 288c
.org 0x768c2
	movs r1, #3	@ 000768c2 0321
.org 0x768c4
	bl 0x129198	@ 000768c4 b2f068fc
.org 0x768c8
	lsls r0, r0, #16	@ 000768c8 0004
.org 0x768ca
	lsrs r0, r0, #16	@ 000768ca 000c
.org 0x768cc
	adds r0, r0, r4	@ 000768cc 0019
.org 0x768ce
	ldrb r0, [r0, #0]	@ 000768ce 0078
.org 0x768d0
	adds r1, r7, #0	@ 000768d0 391c
.org 0x768d2
	adds r1, #118	@ 000768d2 7631
.org 0x768d4
	strb r0, [r1, #0]	@ 000768d4 0870
.org 0x768d6
	ldr r1, [pc, #40]	@ 000768d6 0a49
.org 0x768d8
	mov r2, r9	@ 000768d8 4a46
.org 0x768da
	lsls r0, r2, #1	@ 000768da 5000
.org 0x768dc
	add r0, r9	@ 000768dc 4844
.org 0x768de
	adds r1, #2	@ 000768de 0231
.org 0x768e0
	adds r0, r0, r1	@ 000768e0 4018
.org 0x768e2
	ldrb r3, [r0, #0]	@ 000768e2 0378
.org 0x768e4
	cmp r6, r3	@ 000768e4 9e42
.org 0x768e6
	bcc.n 0x7694e	@ 000768e6 32d3
.org 0x768e8
	ldrb r6, [r0, #0]	@ 000768e8 0678
.org 0x768ea
	mov r5, r8	@ 000768ea 4546
.org 0x768ec
	ldrb r0, [r5, #15]	@ 000768ec e87b
.org 0x768ee
	adds r0, #1	@ 000768ee 0130
.org 0x768f0
	strb r0, [r5, #15]	@ 000768f0 e873
.org 0x768f2
	b.n 0x7694e	@ 000768f2 2ce0
.org 0x768f4
	.byte 0x22,0xd1,0x85,0x08	@ 000768f4 data
.org 0x768f8
	.byte 0x25,0xd1,0x85,0x08	@ 000768f8 data
.org 0x768fc
	.byte 0x28,0xd1,0x85,0x08	@ 000768fc data
.org 0x76900
	.byte 0x1c,0xd1,0x85,0x08	@ 00076900 data
.org 0x76904
	mov r1, sl	@ 00076904 5146
.org 0x76906
	ldrh r0, [r1, #32]	@ 00076906 088c
.org 0x76908
	adds r0, #1	@ 00076908 0130
.org 0x7690a
	movs r1, #3	@ 0007690a 0321
.org 0x7690c
	bl 0x129050	@ 0007690c b2f0a0fb
.org 0x76910
	mov r2, sl	@ 00076910 5246
.org 0x76912
	strh r0, [r2, #32]	@ 00076912 1084
.org 0x76914
	ldr r2, [pc, #76]	@ 00076914 134a
.org 0x76916
	mov r3, sl	@ 00076916 5346
.org 0x76918
	ldrh r1, [r3, #32]	@ 00076918 198c
.org 0x7691a
	mov r5, r9	@ 0007691a 4d46
.org 0x7691c
	lsls r0, r5, #1	@ 0007691c 6800
.org 0x7691e
	add r0, r9	@ 0007691e 4844
.org 0x76920
	adds r0, r1, r0	@ 00076920 0818
.org 0x76922
	adds r0, r0, r2	@ 00076922 8018
.org 0x76924
	ldrb r6, [r0, #0]	@ 00076924 0678
.org 0x76926
	ldr r0, [pc, #64]	@ 00076926 1048
.org 0x76928
	adds r1, r1, r0	@ 00076928 0918
.org 0x7692a
	ldrb r1, [r1, #0]	@ 0007692a 0978
.org 0x7692c
	adds r0, r7, #0	@ 0007692c 381c
.org 0x7692e
	adds r0, #116	@ 0007692e 7430
.org 0x76930
	strb r1, [r0, #0]	@ 00076930 0170
.org 0x76932
	ldr r1, [pc, #56]	@ 00076932 0e49
.org 0x76934
	ldrh r0, [r3, #32]	@ 00076934 188c
.org 0x76936
	adds r0, r0, r1	@ 00076936 4018
.org 0x76938
	ldrb r0, [r0, #0]	@ 00076938 0078
.org 0x7693a
	adds r1, r7, #0	@ 0007693a 391c
.org 0x7693c
	adds r1, #117	@ 0007693c 7531
.org 0x7693e
	strb r0, [r1, #0]	@ 0007693e 0870
.org 0x76940
	ldr r1, [pc, #44]	@ 00076940 0b49
.org 0x76942
	ldrh r0, [r3, #32]	@ 00076942 188c
.org 0x76944
	adds r0, r0, r1	@ 00076944 4018
.org 0x76946
	ldrb r0, [r0, #0]	@ 00076946 0078
.org 0x76948
	adds r1, r7, #0	@ 00076948 391c
.org 0x7694a
	adds r1, #118	@ 0007694a 7631
.org 0x7694c
	strb r0, [r1, #0]	@ 0007694c 0870
.org 0x7694e
	mov r0, r8	@ 0007694e 4046
.org 0x76950
	ldrb r1, [r0, #10]	@ 00076950 817a
.org 0x76952
	movs r0, #16	@ 00076952 1020
.org 0x76954
	ands r0, r1	@ 00076954 0840
.org 0x76956
	cmp r0, #0	@ 00076956 0028
.org 0x76958
	beq.n 0x76974	@ 00076958 0cd0
.org 0x7695a
	ldr r2, [sp, #48]	@ 0007695a 0c9a
.org 0x7695c
	ldrb r1, [r2, #0]	@ 0007695c 1178
.org 0x7695e
	movs r0, #192	@ 0007695e c020
.org 0x76960
	subs r0, r0, r1	@ 00076960 401a
.org 0x76962
	b.n 0x7697a	@ 00076962 0ae0
.org 0x76964
	.byte 0x1c,0xd1,0x85,0x08	@ 00076964 data
.org 0x76968
	.byte 0x22,0xd1,0x85,0x08	@ 00076968 data
.org 0x7696c
	.byte 0x25,0xd1,0x85,0x08	@ 0007696c data
.org 0x76970
	.byte 0x28,0xd1,0x85,0x08	@ 00076970 data
.org 0x76974
	ldr r3, [sp, #48]	@ 00076974 0c9b
.org 0x76976
	ldrb r0, [r3, #0]	@ 00076976 1878
.org 0x76978
	adds r0, #192	@ 00076978 c030
.org 0x7697a
	lsls r0, r0, #24	@ 0007697a 0006
.org 0x7697c
	lsrs r0, r0, #24	@ 0007697c 000e
.org 0x7697e
	mov ip, r0	@ 0007697e 8446
.org 0x76980
	ldr r2, [pc, #240]	@ 00076980 3c4a
.org 0x76982
	mov r0, ip	@ 00076982 6046
.org 0x76984
	adds r0, #128	@ 00076984 8030
.org 0x76986
	lsls r0, r0, #24	@ 00076986 0006
.org 0x76988
	lsrs r0, r0, #23	@ 00076988 c00d
.org 0x7698a
	adds r0, r0, r2	@ 0007698a 8018
.org 0x7698c
	movs r5, #0	@ 0007698c 0025
.org 0x7698e
	ldrsh r0, [r0, r5]	@ 0007698e 405f
.org 0x76990
	adds r1, r0, #0	@ 00076990 011c
.org 0x76992
	muls r1, r6	@ 00076992 7143
.org 0x76994
	mov r3, r8	@ 00076994 4346
.org 0x76996
	ldr r0, [r3, #84]	@ 00076996 586d
.org 0x76998
	adds r0, r0, r1	@ 00076998 4018
.org 0x7699a
	str r0, [r7, #84]	@ 0007699a 7865
.org 0x7699c
	mov r4, ip	@ 0007699c 6446
.org 0x7699e
	adds r4, #64	@ 0007699e 4034
.org 0x769a0
	lsls r3, r4, #24	@ 000769a0 2306
.org 0x769a2
	lsrs r3, r3, #23	@ 000769a2 db0d
.org 0x769a4
	adds r0, r3, r2	@ 000769a4 9818
.org 0x769a6
	movs r1, #0	@ 000769a6 0021
.org 0x769a8
	ldrsh r5, [r0, r1]	@ 000769a8 455e
.org 0x769aa
	str r5, [sp, #64]	@ 000769aa 1095
.org 0x769ac
	adds r1, r5, #0	@ 000769ac 291c
.org 0x769ae
	muls r1, r6	@ 000769ae 7143
.org 0x769b0
	mov r5, r8	@ 000769b0 4546
.org 0x769b2
	ldr r0, [r5, #88]	@ 000769b2 a86d
.org 0x769b4
	adds r0, r0, r1	@ 000769b4 4018
.org 0x769b6
	str r0, [r7, #88]	@ 000769b6 b865
.org 0x769b8
	mov r1, ip	@ 000769b8 6146
.org 0x769ba
	lsls r0, r1, #1	@ 000769ba 4800
.org 0x769bc
	adds r0, r0, r2	@ 000769bc 8018
.org 0x769be
	movs r5, #0	@ 000769be 0025
.org 0x769c0
	ldrsh r0, [r0, r5]	@ 000769c0 405f
.org 0x769c2
	adds r1, r0, #0	@ 000769c2 011c
.org 0x769c4
	muls r1, r6	@ 000769c4 7143
.org 0x769c6
	mov r5, r8	@ 000769c6 4546
.org 0x769c8
	ldr r0, [r5, #84]	@ 000769c8 686d
.org 0x769ca
	adds r0, r0, r1	@ 000769ca 4018
.org 0x769cc
	str r0, [r7, #100]	@ 000769cc 7866
.org 0x769ce
	mov r0, ip	@ 000769ce 6046
.org 0x769d0
	adds r0, #192	@ 000769d0 c030
.org 0x769d2
	lsls r0, r0, #24	@ 000769d2 0006
.org 0x769d4
	lsrs r0, r0, #23	@ 000769d4 c00d
.org 0x769d6
	adds r0, r0, r2	@ 000769d6 8018
.org 0x769d8
	movs r1, #0	@ 000769d8 0021
.org 0x769da
	ldrsh r0, [r0, r1]	@ 000769da 405e
.org 0x769dc
	adds r1, r0, #0	@ 000769dc 011c
.org 0x769de
	muls r1, r6	@ 000769de 7143
.org 0x769e0
	ldr r0, [r5, #88]	@ 000769e0 a86d
.org 0x769e2
	adds r0, r0, r1	@ 000769e2 4018
.org 0x769e4
	str r0, [r7, #104]	@ 000769e4 b866
.org 0x769e6
	movs r6, #32	@ 000769e6 2026
.org 0x769e8
	str r4, [sp, #56]	@ 000769e8 0e94
.org 0x769ea
	adds r5, r7, #0	@ 000769ea 3d1c
.org 0x769ec
	adds r5, #128	@ 000769ec 8035
.org 0x769ee
	str r5, [sp, #60]	@ 000769ee 0f95
.org 0x769f0
	mov r0, ip	@ 000769f0 6046
.org 0x769f2
	lsls r0, r0, #1	@ 000769f2 4000
.org 0x769f4
	str r0, [sp, #52]	@ 000769f4 0d90
.org 0x769f6
	adds r2, r0, r2	@ 000769f6 8218
.org 0x769f8
	movs r5, #0	@ 000769f8 0025
.org 0x769fa
	ldrsh r1, [r2, r5]	@ 000769fa 515f
.org 0x769fc
	str r1, [sp, #32]	@ 000769fc 0891
.org 0x769fe
	ldr r0, [pc, #120]	@ 000769fe 1e48
.org 0x76a00
	mov r9, r0	@ 00076a00 8146
.org 0x76a02
	str r3, [sp, #24]	@ 00076a02 0693
.org 0x76a04
	ldr r1, [sp, #64]	@ 00076a04 1099
.org 0x76a06
	str r1, [sp, #28]	@ 00076a06 0791
.org 0x76a08
	ldr r2, [sp, #28]	@ 00076a08 079a
.org 0x76a0a
	adds r1, r2, #0	@ 00076a0a 111c
.org 0x76a0c
	muls r1, r6	@ 00076a0c 7143
.org 0x76a0e
	ldr r0, [r7, #84]	@ 00076a0e 786d
.org 0x76a10
	adds r0, r0, r1	@ 00076a10 4018
.org 0x76a12
	str r0, [r7, #124]	@ 00076a12 f867
.org 0x76a14
	ldr r3, [sp, #32]	@ 00076a14 089b
.org 0x76a16
	adds r0, r3, #0	@ 00076a16 181c
.org 0x76a18
	muls r0, r6	@ 00076a18 7043
.org 0x76a1a
	ldr r1, [r7, #88]	@ 00076a1a b96d
.org 0x76a1c
	adds r1, r1, r0	@ 00076a1c 0918
.org 0x76a1e
	ldr r5, [sp, #60]	@ 00076a1e 0f9d
.org 0x76a20
	str r1, [r5, #0]	@ 00076a20 2960
.org 0x76a22
	ldr r0, [r7, #124]	@ 00076a22 f86f
.org 0x76a24
	bl 0x7c7c	@ 00076a24 91f72af9
.org 0x76a28
	lsls r0, r0, #16	@ 00076a28 0004
.org 0x76a2a
	cmp r0, #0	@ 00076a2a 0028
.org 0x76a2c
	beq.n 0x76a8a	@ 00076a2c 2dd0
.org 0x76a2e
	adds r0, r6, #0	@ 00076a2e 301c
.org 0x76a30
	subs r0, #16	@ 00076a30 1038
.org 0x76a32
	lsls r0, r0, #16	@ 00076a32 0004
.org 0x76a34
	lsrs r6, r0, #16	@ 00076a34 060c
.org 0x76a36
	cmp r6, r9	@ 00076a36 4e45
.org 0x76a38
	bhi.n 0x76a8a	@ 00076a38 27d8
.org 0x76a3a
	ldr r1, [pc, #56]	@ 00076a3a 0e49
.org 0x76a3c
	ldr r2, [sp, #24]	@ 00076a3c 069a
.org 0x76a3e
	adds r0, r2, r1	@ 00076a3e 5018
.org 0x76a40
	movs r3, #0	@ 00076a40 0023
.org 0x76a42
	ldrsh r5, [r0, r3]	@ 00076a42 c55e
.org 0x76a44
	ldr r0, [sp, #52]	@ 00076a44 0d98
.org 0x76a46
	adds r1, r0, r1	@ 00076a46 4118
.org 0x76a48
	movs r2, #0	@ 00076a48 0022
.org 0x76a4a
	ldrsh r4, [r1, r2]	@ 00076a4a 8c5e
.org 0x76a4c
	adds r1, r5, #0	@ 00076a4c 291c
.org 0x76a4e
	muls r1, r6	@ 00076a4e 7143
.org 0x76a50
	ldr r0, [r7, #84]	@ 00076a50 786d
.org 0x76a52
	adds r0, r0, r1	@ 00076a52 4018
.org 0x76a54
	str r0, [r7, #124]	@ 00076a54 f867
.org 0x76a56
	adds r0, r4, #0	@ 00076a56 201c
.org 0x76a58
	muls r0, r6	@ 00076a58 7043
.org 0x76a5a
	ldr r1, [r7, #88]	@ 00076a5a b96d
.org 0x76a5c
	adds r1, r1, r0	@ 00076a5c 0918
.org 0x76a5e
	ldr r3, [sp, #60]	@ 00076a5e 0f9b
.org 0x76a60
	str r1, [r3, #0]	@ 00076a60 1960
.org 0x76a62
	ldr r0, [r7, #124]	@ 00076a62 f86f
.org 0x76a64
	bl 0x7c7c	@ 00076a64 91f70af9
.org 0x76a68
	lsls r0, r0, #16	@ 00076a68 0004
.org 0x76a6a
	cmp r0, #0	@ 00076a6a 0028
.org 0x76a6c
	beq.n 0x76a80	@ 00076a6c 08d0
.org 0x76a6e
	ldr r6, [pc, #12]	@ 00076a6e 034e
.org 0x76a70
	b.n 0x76a8a	@ 00076a70 0be0
.org 0x76a72
	.byte 0x00	@ 00076a72 data
.org 0x76a73
	.byte 0x00	@ 00076a73 data
.org 0x76a74
	.byte 0x0c,0x93,0x12,0x08	@ 00076a74 data
.org 0x76a78
	.byte 0x3f,0x01,0x00,0x00	@ 00076a78 data
.org 0x76a7c
	.byte 0xff,0x1f,0x00,0x00	@ 00076a7c data
.org 0x76a80
	adds r0, r6, #1	@ 00076a80 701c
.org 0x76a82
	lsls r0, r0, #16	@ 00076a82 0004
.org 0x76a84
	lsrs r6, r0, #16	@ 00076a84 060c
.org 0x76a86
	cmp r6, r9	@ 00076a86 4e45
.org 0x76a88
	bls.n 0x76a4c	@ 00076a88 e0d9
.org 0x76a8a
	adds r0, r6, #0	@ 00076a8a 301c
.org 0x76a8c
	adds r0, #8	@ 00076a8c 0830
.org 0x76a8e
	lsls r0, r0, #16	@ 00076a8e 0004
.org 0x76a90
	lsrs r6, r0, #16	@ 00076a90 060c
.org 0x76a92
	cmp r6, r9	@ 00076a92 4e45
.org 0x76a94
	bls.n 0x76a08	@ 00076a94 b8d9
.org 0x76a96
	movs r6, #32	@ 00076a96 2026
.org 0x76a98
	ldr r0, [pc, #128]	@ 00076a98 2048
.org 0x76a9a
	ldr r5, [sp, #52]	@ 00076a9a 0d9d
.org 0x76a9c
	adds r1, r5, r0	@ 00076a9c 2918
.org 0x76a9e
	movs r3, #0	@ 00076a9e 0023
.org 0x76aa0
	ldrsh r2, [r1, r3]	@ 00076aa0 ca5e
.org 0x76aa2
	str r2, [sp, #44]	@ 00076aa2 0b92
.org 0x76aa4
	ldr r5, [pc, #120]	@ 00076aa4 1e4d
.org 0x76aa6
	mov r9, r5	@ 00076aa6 a946
.org 0x76aa8
	ldr r2, [sp, #56]	@ 00076aa8 0e9a
.org 0x76aaa
	lsls r1, r2, #24	@ 00076aaa 1106
.org 0x76aac
	lsrs r1, r1, #23	@ 00076aac c90d
.org 0x76aae
	str r1, [sp, #36]	@ 00076aae 0991
.org 0x76ab0
	adds r0, r1, r0	@ 00076ab0 0818
.org 0x76ab2
	movs r5, #0	@ 00076ab2 0025
.org 0x76ab4
	ldrsh r3, [r0, r5]	@ 00076ab4 435f
.org 0x76ab6
	str r3, [sp, #40]	@ 00076ab6 0a93
.org 0x76ab8
	ldr r0, [sp, #40]	@ 00076ab8 0a98
.org 0x76aba
	adds r1, r0, #0	@ 00076aba 011c
.org 0x76abc
	muls r1, r6	@ 00076abc 7143
.org 0x76abe
	ldr r0, [r7, #100]	@ 00076abe 786e
.org 0x76ac0
	adds r0, r0, r1	@ 00076ac0 4018
.org 0x76ac2
	str r0, [r7, #92]	@ 00076ac2 f865
.org 0x76ac4
	ldr r1, [sp, #44]	@ 00076ac4 0b99
.org 0x76ac6
	adds r2, r1, #0	@ 00076ac6 0a1c
.org 0x76ac8
	muls r2, r6	@ 00076ac8 7243
.org 0x76aca
	ldr r1, [r7, #104]	@ 00076aca b96e
.org 0x76acc
	adds r1, r1, r2	@ 00076acc 8918
.org 0x76ace
	str r1, [r7, #96]	@ 00076ace 3966
.org 0x76ad0
	bl 0x7c7c	@ 00076ad0 91f7d4f8
.org 0x76ad4
	lsls r0, r0, #16	@ 00076ad4 0004
.org 0x76ad6
	cmp r0, #0	@ 00076ad6 0028
.org 0x76ad8
	beq.n 0x76b32	@ 00076ad8 2bd0
.org 0x76ada
	adds r0, r6, #0	@ 00076ada 301c
.org 0x76adc
	subs r0, #16	@ 00076adc 1038
.org 0x76ade
	lsls r0, r0, #16	@ 00076ade 0004
.org 0x76ae0
	lsrs r6, r0, #16	@ 00076ae0 060c
.org 0x76ae2
	cmp r6, r9	@ 00076ae2 4e45
.org 0x76ae4
	bhi.n 0x76b32	@ 00076ae4 25d8
.org 0x76ae6
	ldr r1, [pc, #52]	@ 00076ae6 0d49
.org 0x76ae8
	ldr r2, [sp, #36]	@ 00076ae8 099a
.org 0x76aea
	adds r0, r2, r1	@ 00076aea 5018
.org 0x76aec
	movs r3, #0	@ 00076aec 0023
.org 0x76aee
	ldrsh r4, [r0, r3]	@ 00076aee c45e
.org 0x76af0
	ldr r5, [sp, #52]	@ 00076af0 0d9d
.org 0x76af2
	adds r1, r5, r1	@ 00076af2 6918
.org 0x76af4
	movs r0, #0	@ 00076af4 0020
.org 0x76af6
	ldrsh r5, [r1, r0]	@ 00076af6 0d5e
.org 0x76af8
	adds r1, r4, #0	@ 00076af8 211c
.org 0x76afa
	muls r1, r6	@ 00076afa 7143
.org 0x76afc
	ldr r0, [r7, #100]	@ 00076afc 786e
.org 0x76afe
	adds r0, r0, r1	@ 00076afe 4018
.org 0x76b00
	str r0, [r7, #92]	@ 00076b00 f865
.org 0x76b02
	adds r2, r5, #0	@ 00076b02 2a1c
.org 0x76b04
	muls r2, r6	@ 00076b04 7243
.org 0x76b06
	ldr r1, [r7, #104]	@ 00076b06 b96e
.org 0x76b08
	adds r1, r1, r2	@ 00076b08 8918
.org 0x76b0a
	str r1, [r7, #96]	@ 00076b0a 3966
.org 0x76b0c
	bl 0x7c7c	@ 00076b0c 91f7b6f8
.org 0x76b10
	lsls r0, r0, #16	@ 00076b10 0004
.org 0x76b12
	cmp r0, #0	@ 00076b12 0028
.org 0x76b14
	beq.n 0x76b28	@ 00076b14 08d0
.org 0x76b16
	ldr r6, [pc, #12]	@ 00076b16 034e
.org 0x76b18
	b.n 0x76b32	@ 00076b18 0be0
.org 0x76b1a
	.byte 0x00	@ 00076b1a data
.org 0x76b1b
	.byte 0x00	@ 00076b1b data
.org 0x76b1c
	.byte 0x0c,0x93,0x12,0x08	@ 00076b1c data
.org 0x76b20
	.byte 0x3f,0x01,0x00,0x00	@ 00076b20 data
.org 0x76b24
	.byte 0xff,0x1f,0x00,0x00	@ 00076b24 data
.org 0x76b28
	adds r0, r6, #1	@ 00076b28 701c
.org 0x76b2a
	lsls r0, r0, #16	@ 00076b2a 0004
.org 0x76b2c
	lsrs r6, r0, #16	@ 00076b2c 060c
.org 0x76b2e
	cmp r6, r9	@ 00076b2e 4e45
.org 0x76b30
	bls.n 0x76af8	@ 00076b30 e2d9
.org 0x76b32
	adds r0, r6, #0	@ 00076b32 301c
.org 0x76b34
	adds r0, #8	@ 00076b34 0830
.org 0x76b36
	lsls r0, r0, #16	@ 00076b36 0004
.org 0x76b38
	lsrs r6, r0, #16	@ 00076b38 060c
.org 0x76b3a
	cmp r6, r9	@ 00076b3a 4e45
.org 0x76b3c
	bls.n 0x76ab8	@ 00076b3c bcd9
.org 0x76b3e
	mov r1, sl	@ 00076b3e 5146
.org 0x76b40
	ldrh r0, [r1, #32]	@ 00076b40 088c
.org 0x76b42
	cmp r0, #0	@ 00076b42 0028
.org 0x76b44
	bne.n 0x76b6e	@ 00076b44 13d1
.org 0x76b46
	ldr r0, [r7, #92]	@ 00076b46 f86d
.org 0x76b48
	str r0, [sp, #8]	@ 00076b48 0290
.org 0x76b4a
	ldr r0, [r7, #96]	@ 00076b4a 386e
.org 0x76b4c
	add r4, sp, #8	@ 00076b4c 02ac
.org 0x76b4e
	str r0, [r4, #4]	@ 00076b4e 6060
.org 0x76b50
	adds r0, r4, #0	@ 00076b50 201c
.org 0x76b52
	movs r1, #0	@ 00076b52 0021
.org 0x76b54
	movs r2, #0	@ 00076b54 0022
.org 0x76b56
	bl 0xe2e8c	@ 00076b56 6cf099f9
.org 0x76b5a
	ldr r0, [r7, #124]	@ 00076b5a f86f
.org 0x76b5c
	str r0, [sp, #8]	@ 00076b5c 0290
.org 0x76b5e
	ldr r2, [sp, #60]	@ 00076b5e 0f9a
.org 0x76b60
	ldr r0, [r2, #0]	@ 00076b60 1068
.org 0x76b62
	str r0, [r4, #4]	@ 00076b62 6060
.org 0x76b64
	adds r0, r4, #0	@ 00076b64 201c
.org 0x76b66
	movs r1, #0	@ 00076b66 0021
.org 0x76b68
	movs r2, #0	@ 00076b68 0022
.org 0x76b6a
	bl 0xe2e8c	@ 00076b6a 6cf08ff9
.org 0x76b6e
	ldr r5, [sp, #16]	@ 00076b6e 049d
.org 0x76b70
	mov r3, sl	@ 00076b70 5346
.org 0x76b72
	ldrh r3, [r3, #34]	@ 00076b72 5b8c
