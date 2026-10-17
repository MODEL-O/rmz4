@ FUN_08040744  entry 0x08040744  size 354
.thumb
.org 0x40744
FUN_08040744:
	push {r4, r5, r6, r7, lr}	@ 00040744 f0b5
.org 0x40746
	mov r7, r8	@ 00040746 4746
.org 0x40748
	push {r7}	@ 00040748 80b4
.org 0x4074a
	sub sp, #8	@ 0004074a 82b0
.org 0x4074c
	adds r7, r0, #0	@ 0004074c 071c
.org 0x4074e
	ldr r5, [r7, #40]	@ 0004074e bd6a
.org 0x40750
	ldr r0, [pc, #64]	@ 00040750 1048
.org 0x40752
	adds r6, r5, r0	@ 00040752 2e18
.org 0x40754
	ldrb r0, [r6, #0]	@ 00040754 3078
.org 0x40756
	cmp r0, #255	@ 00040756 ff28
.org 0x40758
	bne.n 0x4079c	@ 00040758 20d1
.org 0x4075a
	ldrb r1, [r7, #10]	@ 0004075a b97a
.org 0x4075c
	movs r0, #254	@ 0004075c fe20
.org 0x4075e
	ands r0, r1	@ 0004075e 0840
.org 0x40760
	movs r2, #0	@ 00040760 0022
.org 0x40762
	movs r1, #253	@ 00040762 fd21
.org 0x40764
	ands r0, r1	@ 00040764 0840
.org 0x40766
	strb r0, [r7, #10]	@ 00040766 b872
.org 0x40768
	adds r0, r7, #0	@ 00040768 381c
.org 0x4076a
	adds r0, #140	@ 0004076a 8c30
.org 0x4076c
	str r2, [r0, #0]	@ 0004076c 0260
.org 0x4076e
	adds r0, #4	@ 0004076e 0430
.org 0x40770
	str r2, [r0, #0]	@ 00040770 0260
.org 0x40772
	adds r0, #4	@ 00040772 0430
.org 0x40774
	strb r2, [r0, #0]	@ 00040774 0270
.org 0x40776
	ldrb r1, [r7, #10]	@ 00040776 b97a
.org 0x40778
	movs r0, #251	@ 00040778 fb20
.org 0x4077a
	ands r0, r1	@ 0004077a 0840
.org 0x4077c
	strb r0, [r7, #10]	@ 0004077c b872
.org 0x4077e
	ldr r1, [pc, #24]	@ 0004077e 0649
.org 0x40780
	ldrb r0, [r7, #9]	@ 00040780 787a
.org 0x40782
	lsls r0, r0, #2	@ 00040782 8000
.org 0x40784
	adds r0, r0, r1	@ 00040784 4018
.org 0x40786
	movs r1, #3	@ 00040786 0321
.org 0x40788
	str r1, [r7, #12]	@ 00040788 f960
.org 0x4078a
	ldr r0, [r0, #0]	@ 0004078a 0068
.org 0x4078c
	ldr r0, [r0, #12]	@ 0004078c c068
.org 0x4078e
	str r0, [r7, #20]	@ 0004078e 7861
.org 0x40790
	b.n 0x408b4	@ 00040790 90e0
.org 0x40792
	.byte 0x00	@ 00040792 data
.org 0x40793
	.byte 0x00	@ 00040793 data
.org 0x40794
	.byte 0x4f,0x01,0x00,0x00	@ 00040794 data
.org 0x40798
	.byte 0xf8,0x39,0x85,0x08	@ 00040798 data
.org 0x4079c
	ldr r1, [pc, #92]	@ 0004079c 1749
.org 0x4079e
	ldrb r0, [r7, #9]	@ 0004079e 787a
.org 0x407a0
	lsls r0, r0, #2	@ 000407a0 8000
.org 0x407a2
	adds r0, r0, r1	@ 000407a2 4018
.org 0x407a4
	movs r1, #1	@ 000407a4 0121
.org 0x407a6
	str r1, [r7, #12]	@ 000407a6 f960
.org 0x407a8
	ldr r0, [r0, #0]	@ 000407a8 0068
.org 0x407aa
	ldr r0, [r0, #4]	@ 000407aa 4068
.org 0x407ac
	str r0, [r7, #20]	@ 000407ac 7861
.org 0x407ae
	ldrb r0, [r7, #17]	@ 000407ae 787c
.org 0x407b0
	cmp r0, #0	@ 000407b0 0028
.org 0x407b2
	beq.n 0x40804	@ 000407b2 27d0
.org 0x407b4
	movs r4, #1	@ 000407b4 0124
.org 0x407b6
	strb r1, [r7, #14]	@ 000407b6 b973
.org 0x407b8
	adds r0, r7, #0	@ 000407b8 381c
.org 0x407ba
	bl 0x1cc9c	@ 000407ba dcf76ffa
.org 0x407be
	adds r0, r7, #0	@ 000407be 381c
.org 0x407c0
	bl 0x1ceec	@ 000407c0 dcf794fb
.org 0x407c4
	ldrb r0, [r7, #10]	@ 000407c4 b87a
.org 0x407c6
	movs r1, #2	@ 000407c6 0221
.org 0x407c8
	orrs r0, r1	@ 000407c8 0843
.org 0x407ca
	orrs r0, r4	@ 000407ca 2043
.org 0x407cc
	strb r0, [r7, #10]	@ 000407cc b872
.org 0x407ce
	ldr r1, [pc, #48]	@ 000407ce 0c49
.org 0x407d0
	ldrb r0, [r6, #0]	@ 000407d0 3078
.org 0x407d2
	lsls r0, r0, #1	@ 000407d2 4000
.org 0x407d4
	adds r0, r0, r1	@ 000407d4 4018
.org 0x407d6
	ldrh r1, [r0, #0]	@ 000407d6 0188
.org 0x407d8
	adds r0, r7, #0	@ 000407d8 381c
.org 0x407da
	bl 0x1cf00	@ 000407da dcf791fb
.org 0x407de
	adds r0, r7, #0	@ 000407de 381c
.org 0x407e0
	adds r0, #100	@ 000407e0 6430
.org 0x407e2
	str r0, [r7, #64]	@ 000407e2 3864
.org 0x407e4
	adds r1, r7, #0	@ 000407e4 391c
.org 0x407e6
	adds r1, #37	@ 000407e6 2531
.org 0x407e8
	movs r0, #17	@ 000407e8 1120
.org 0x407ea
	strb r0, [r1, #0]	@ 000407ea 0870
.org 0x407ec
	movs r1, #14	@ 000407ec 0e21
.org 0x407ee
	mov r8, r1	@ 000407ee 8846
.org 0x407f0
	movs r0, #228	@ 000407f0 e420
.org 0x407f2
	lsls r0, r0, #1	@ 000407f2 4000
.org 0x407f4
	bl 0x2b10	@ 000407f4 c2f78cf9
.org 0x407f8
	b.n 0x4080e	@ 000407f8 09e0
.org 0x407fa
	.byte 0x00	@ 000407fa data
.org 0x407fb
	.byte 0x00	@ 000407fb data
.org 0x407fc
	.byte 0xf8,0x39,0x85,0x08	@ 000407fc data
.org 0x40800
	.byte 0x08,0x56,0x85,0x08	@ 00040800 data
.org 0x40804
	movs r0, #6	@ 00040804 0620
.org 0x40806
	mov r8, r0	@ 00040806 8046
.org 0x40808
	movs r0, #37	@ 00040808 2520
.org 0x4080a
	bl 0x2b10	@ 0004080a c2f781f9
.org 0x4080e
	ldrb r1, [r7, #10]	@ 0004080e b97a
.org 0x40810
	movs r0, #2	@ 00040810 0220
.org 0x40812
	orrs r0, r1	@ 00040812 0843
.org 0x40814
	strb r0, [r7, #10]	@ 00040814 b872
.org 0x40816
	adds r0, r5, #0	@ 00040816 281c
.org 0x40818
	bl 0x3a528	@ 00040818 f9f786fe
.org 0x4081c
	add r0, r8	@ 0004081c 4044
.org 0x4081e
	lsls r0, r0, #24	@ 0004081e 0006
.org 0x40820
	lsrs r0, r0, #24	@ 00040820 000e
.org 0x40822
	mov r8, r0	@ 00040822 8046
.org 0x40824
	adds r0, r5, #0	@ 00040824 281c
.org 0x40826
	bl 0x38a78	@ 00040826 f8f727f9
.org 0x4082a
	lsls r0, r0, #24	@ 0004082a 0006
.org 0x4082c
	cmp r0, #0	@ 0004082c 0028
.org 0x4082e
	beq.n 0x40838	@ 0004082e 03d0
.org 0x40830
	mov r1, r8	@ 00040830 4146
.org 0x40832
	lsls r0, r1, #25	@ 00040832 4806
.org 0x40834
	lsrs r0, r0, #24	@ 00040834 000e
.org 0x40836
	mov r8, r0	@ 00040836 8046
.org 0x40838
	ldr r0, [pc, #28]	@ 00040838 0748
.org 0x4083a
	adds r1, r5, r0	@ 0004083a 2918
.org 0x4083c
	ldrb r0, [r1, #0]	@ 0004083c 0878
.org 0x4083e
	strb r0, [r7, #16]	@ 0004083e 3874
.org 0x40840
	ldrb r0, [r1, #0]	@ 00040840 0878
.org 0x40842
	cmp r0, #3	@ 00040842 0328
.org 0x40844
	beq.n 0x4084a	@ 00040844 01d0
.org 0x40846
	cmp r0, #7	@ 00040846 0728
.org 0x40848
	bne.n 0x4085c	@ 00040848 08d1
.org 0x4084a
	ldrb r0, [r7, #17]	@ 0004084a 787c
.org 0x4084c
	movs r2, #2	@ 0004084c 0222
.org 0x4084e
	cmp r0, #0	@ 0004084e 0028
.org 0x40850
	beq.n 0x40868	@ 00040850 0ad0
.org 0x40852
	movs r2, #6	@ 00040852 0622
.org 0x40854
	b.n 0x40868	@ 00040854 08e0
.org 0x40856
	.byte 0x00	@ 00040856 data
.org 0x40857
	.byte 0x00	@ 00040857 data
.org 0x40858
	.byte 0x4f,0x01,0x00,0x00	@ 00040858 data
.org 0x4085c
	ldrb r0, [r7, #17]	@ 0004085c 787c
.org 0x4085e
	negs r1, r0	@ 0004085e 4142
.org 0x40860
	orrs r1, r0	@ 00040860 0143
.org 0x40862
	asrs r2, r1, #31	@ 00040862 ca17
.org 0x40864
	movs r0, #4	@ 00040864 0420
.org 0x40866
	ands r2, r0	@ 00040866 0240
.org 0x40868
	ldrb r1, [r7, #10]	@ 00040868 b97a
.org 0x4086a
	movs r0, #4	@ 0004086a 0420
.org 0x4086c
	movs r6, #0	@ 0004086c 0026
.org 0x4086e
	orrs r0, r1	@ 0004086e 0843
.org 0x40870
	strb r0, [r7, #10]	@ 00040870 b872
.org 0x40872
	adds r5, r7, #0	@ 00040872 3d1c
.org 0x40874
	adds r5, #116	@ 00040874 7435
.org 0x40876
	lsls r4, r2, #1	@ 00040876 5400
.org 0x40878
	adds r4, r4, r2	@ 00040878 a418
.org 0x4087a
	lsls r4, r4, #3	@ 0004087a e400
.org 0x4087c
	ldr r0, [pc, #64]	@ 0004087c 1048
.org 0x4087e
	adds r4, r4, r0	@ 0004087e 2418
.org 0x40880
	adds r2, r7, #0	@ 00040880 3a1c
.org 0x40882
	adds r2, #84	@ 00040882 5432
.org 0x40884
	adds r0, r5, #0	@ 00040884 281c
.org 0x40886
	adds r1, r4, #0	@ 00040886 211c
.org 0x40888
	movs r3, #8	@ 00040888 0823
.org 0x4088a
	bl 0x5760	@ 0004088a c4f769ff
.org 0x4088e
	str r7, [r5, #44]	@ 0004088e ef62
.org 0x40890
	str r6, [r5, #36]	@ 00040890 6e62
.org 0x40892
	movs r3, #1	@ 00040892 0123
.org 0x40894
	negs r3, r3	@ 00040894 5b42
.org 0x40896
	str r3, [sp, #0]	@ 00040896 0093
.org 0x40898
	str r3, [sp, #4]	@ 00040898 0193
.org 0x4089a
	adds r0, r5, #0	@ 0004089a 281c
.org 0x4089c
	adds r1, r4, #0	@ 0004089c 211c
.org 0x4089e
	mov r2, r8	@ 0004089e 4246
.org 0x408a0
	bl 0x5794	@ 000408a0 c4f778ff
.org 0x408a4
	ldr r0, [pc, #28]	@ 000408a4 0748
