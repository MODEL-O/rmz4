@ FUN_080fe7f4  entry 0x080fe7f4  size 234
.thumb
.org 0xfe7f4
FUN_080fe7f4:
	push {r4, r5, r6, r7, lr}	@ 000fe7f4 f0b5
.org 0xfe7f6
	adds r5, r0, #0	@ 000fe7f6 051c
.org 0xfe7f8
	ldr r2, [pc, #88]	@ 000fe7f8 164a
.org 0xfe7fa
	ldr r1, [pc, #92]	@ 000fe7fa 1749
.org 0xfe7fc
	ldrb r0, [r5, #16]	@ 000fe7fc 287c
.org 0xfe7fe
	lsls r0, r0, #2	@ 000fe7fe 8000
.org 0xfe800
	adds r0, r0, r1	@ 000fe800 4018
.org 0xfe802
	ldr r1, [r0, #0]	@ 000fe802 0168
.org 0xfe804
	lsrs r0, r1, #3	@ 000fe804 c808
.org 0xfe806
	adds r2, #4	@ 000fe806 0432
.org 0xfe808
	adds r0, r0, r2	@ 000fe808 8018
.org 0xfe80a
	ldrb r6, [r0, #0]	@ 000fe80a 0678
.org 0xfe80c
	movs r0, #7	@ 000fe80c 0720
.org 0xfe80e
	ands r1, r0	@ 000fe80e 0140
.org 0xfe810
	asrs r6, r1	@ 000fe810 0e41
.org 0xfe812
	movs r7, #1	@ 000fe812 0127
.org 0xfe814
	ands r6, r7	@ 000fe814 3e40
.org 0xfe816
	cmp r6, #0	@ 000fe816 002e
.org 0xfe818
	beq.n 0xfe860	@ 000fe818 22d0
.org 0xfe81a
	ldrb r1, [r5, #10]	@ 000fe81a a97a
.org 0xfe81c
	movs r0, #254	@ 000fe81c fe20
.org 0xfe81e
	ands r0, r1	@ 000fe81e 0840
.org 0xfe820
	movs r2, #0	@ 000fe820 0022
.org 0xfe822
	movs r1, #253	@ 000fe822 fd21
.org 0xfe824
	ands r0, r1	@ 000fe824 0840
.org 0xfe826
	strb r0, [r5, #10]	@ 000fe826 a872
.org 0xfe828
	adds r0, r5, #0	@ 000fe828 281c
.org 0xfe82a
	adds r0, #140	@ 000fe82a 8c30
.org 0xfe82c
	str r2, [r0, #0]	@ 000fe82c 0260
.org 0xfe82e
	adds r0, #4	@ 000fe82e 0430
.org 0xfe830
	str r2, [r0, #0]	@ 000fe830 0260
.org 0xfe832
	adds r0, #4	@ 000fe832 0430
.org 0xfe834
	strb r2, [r0, #0]	@ 000fe834 0270
.org 0xfe836
	ldrb r1, [r5, #10]	@ 000fe836 a97a
.org 0xfe838
	movs r0, #251	@ 000fe838 fb20
.org 0xfe83a
	ands r0, r1	@ 000fe83a 0840
.org 0xfe83c
	strb r0, [r5, #10]	@ 000fe83c a872
.org 0xfe83e
	ldr r1, [pc, #28]	@ 000fe83e 0749
.org 0xfe840
	ldrb r0, [r5, #9]	@ 000fe840 687a
.org 0xfe842
	lsls r0, r0, #2	@ 000fe842 8000
.org 0xfe844
	adds r0, r0, r1	@ 000fe844 4018
.org 0xfe846
	movs r1, #3	@ 000fe846 0321
.org 0xfe848
	str r1, [r5, #12]	@ 000fe848 e960
.org 0xfe84a
	ldr r0, [r0, #0]	@ 000fe84a 0068
.org 0xfe84c
	ldr r0, [r0, #12]	@ 000fe84c c068
.org 0xfe84e
	str r0, [r5, #20]	@ 000fe84e 6861
.org 0xfe850
	b.n 0xfe8e6	@ 000fe850 49e0
.org 0xfe852
	.byte 0x00	@ 000fe852 data
.org 0xfe853
	.byte 0x00	@ 000fe853 data
.org 0xfe854
	.byte 0xb0,0xe8,0x02,0x02	@ 000fe854 data
.org 0xfe858
	.byte 0x28,0xb3,0x86,0x08	@ 000fe858 data
.org 0xfe85c
	.byte 0xfc,0x92,0x86,0x08	@ 000fe85c data
.org 0xfe860
	adds r0, r5, #0	@ 000fe860 281c
.org 0xfe862
	bl 0x1cc9c	@ 000fe862 1ef71bfa
.org 0xfe866
	ldrb r1, [r5, #10]	@ 000fe866 a97a
.org 0xfe868
	movs r0, #1	@ 000fe868 0120
.org 0xfe86a
	orrs r0, r1	@ 000fe86a 0843
.org 0xfe86c
	movs r1, #2	@ 000fe86c 0221
.org 0xfe86e
	orrs r0, r1	@ 000fe86e 0843
.org 0xfe870
	strb r0, [r5, #10]	@ 000fe870 a872
.org 0xfe872
	ldr r1, [pc, #120]	@ 000fe872 1e49
.org 0xfe874
	adds r0, r5, #0	@ 000fe874 281c
.org 0xfe876
	bl 0x1cf00	@ 000fe876 1ef743fb
.org 0xfe87a
	adds r0, r5, #0	@ 000fe87a 281c
.org 0xfe87c
	bl 0x1cff0	@ 000fe87c 1ef7b8fb
.org 0xfe880
	ldrb r1, [r5, #10]	@ 000fe880 a97a
.org 0xfe882
	movs r0, #239	@ 000fe882 ef20
.org 0xfe884
	ands r0, r1	@ 000fe884 0840
.org 0xfe886
	strb r0, [r5, #10]	@ 000fe886 a872
.org 0xfe888
	adds r0, r5, #0	@ 000fe888 281c
.org 0xfe88a
	adds r0, #76	@ 000fe88a 4c30
.org 0xfe88c
	strb r6, [r0, #0]	@ 000fe88c 0670
.org 0xfe88e
	adds r2, r5, #0	@ 000fe88e 2a1c
.org 0xfe890
	adds r2, #74	@ 000fe890 4a32
.org 0xfe892
	ldrb r1, [r2, #0]	@ 000fe892 1178
.org 0xfe894
	movs r0, #17	@ 000fe894 1120
.org 0xfe896
	negs r0, r0	@ 000fe896 4042
.org 0xfe898
	ands r0, r1	@ 000fe898 0840
.org 0xfe89a
	strb r0, [r2, #0]	@ 000fe89a 1070
.org 0xfe89c
	ldrb r0, [r5, #10]	@ 000fe89c a87a
.org 0xfe89e
	movs r1, #4	@ 000fe89e 0421
.org 0xfe8a0
	orrs r0, r1	@ 000fe8a0 0843
.org 0xfe8a2
	strb r0, [r5, #10]	@ 000fe8a2 a872
.org 0xfe8a4
	adds r4, r5, #0	@ 000fe8a4 2c1c
.org 0xfe8a6
	adds r4, #116	@ 000fe8a6 7434
.org 0xfe8a8
	ldr r1, [pc, #68]	@ 000fe8a8 1149
.org 0xfe8aa
	adds r2, #10	@ 000fe8aa 0a32
.org 0xfe8ac
	adds r0, r4, #0	@ 000fe8ac 201c
.org 0xfe8ae
	movs r3, #8	@ 000fe8ae 0823
.org 0xfe8b0
	bl 0x5760	@ 000fe8b0 06f756ff
.org 0xfe8b4
	str r5, [r4, #44]	@ 000fe8b4 e562
.org 0xfe8b6
	str r6, [r4, #36]	@ 000fe8b6 6662
.org 0xfe8b8
	ldrb r1, [r5, #11]	@ 000fe8b8 e97a
.org 0xfe8ba
	movs r0, #8	@ 000fe8ba 0820
.org 0xfe8bc
	orrs r0, r1	@ 000fe8bc 0843
.org 0xfe8be
	strb r0, [r5, #11]	@ 000fe8be e872
.org 0xfe8c0
	ldr r0, [pc, #48]	@ 000fe8c0 0c48
.org 0xfe8c2
	str r0, [r5, #48]	@ 000fe8c2 2863
.org 0xfe8c4
	strh r7, [r5, #38]	@ 000fe8c4 ef84
.org 0xfe8c6
	ldr r0, [r5, #84]	@ 000fe8c6 686d
.org 0xfe8c8
	ldr r1, [r5, #88]	@ 000fe8c8 a96d
.org 0xfe8ca
	bl 0x8534	@ 000fe8ca 09f733fe
.org 0xfe8ce
	str r0, [r5, #88]	@ 000fe8ce a865
.org 0xfe8d0
	ldr r1, [pc, #36]	@ 000fe8d0 0949
.org 0xfe8d2
	ldrb r0, [r5, #9]	@ 000fe8d2 687a
.org 0xfe8d4
	lsls r0, r0, #2	@ 000fe8d4 8000
.org 0xfe8d6
	adds r0, r0, r1	@ 000fe8d6 4018
.org 0xfe8d8
	str r7, [r5, #12]	@ 000fe8d8 ef60
.org 0xfe8da
	ldr r0, [r0, #0]	@ 000fe8da 0068
.org 0xfe8dc
	ldr r0, [r0, #4]	@ 000fe8dc 4068
