@ FUN_0800580c  entry 0x0800580c  size 184
.thumb
.org 0x580c
FUN_0800580c:
	push {r4, r5, r6, r7, lr}	@ 0000580c f0b5
.org 0x580e
	adds r4, r0, #0	@ 0000580e 041c
.org 0x5810
	ldr r3, [r4, #0]	@ 00005810 2368
.org 0x5812
	ldr r6, [r4, #8]	@ 00005812 a668
.org 0x5814
	adds r5, r4, #0	@ 00005814 251c
.org 0x5816
	adds r5, #32	@ 00005816 2035
.org 0x5818
	ldrb r2, [r5, #0]	@ 00005818 2a78
.org 0x581a
	movs r1, #127	@ 0000581a 7f21
.org 0x581c
	ands r1, r2	@ 0000581c 1140
.org 0x581e
	cmp r1, #0	@ 0000581e 0029
.org 0x5820
	beq.n 0x582c	@ 00005820 04d0
.org 0x5822
	movs r0, #128	@ 00005822 8020
.org 0x5824
	ands r0, r2	@ 00005824 1040
.org 0x5826
	subs r1, #1	@ 00005826 0139
.org 0x5828
	orrs r0, r1	@ 00005828 0843
.org 0x582a
	strb r0, [r5, #0]	@ 0000582a 2870
.org 0x582c
	cmp r3, #0	@ 0000582c 002b
.org 0x582e
	beq.n 0x58be	@ 0000582e 46d0
.org 0x5830
	ldrb r0, [r3, #3]	@ 00005830 d878
.org 0x5832
	cmp r0, #0	@ 00005832 0028
.org 0x5834
	bne.n 0x5844	@ 00005834 06d1
.org 0x5836
	ldrb r1, [r3, #8]	@ 00005836 197a
.org 0x5838
	cmp r1, #0	@ 00005838 0029
.org 0x583a
	bne.n 0x5844	@ 0000583a 03d1
.org 0x583c
	ldr r0, [r4, #24]	@ 0000583c a069
.org 0x583e
	str r0, [r4, #28]	@ 0000583e e061
.org 0x5840
	str r1, [r4, #24]	@ 00005840 a161
.org 0x5842
	b.n 0x58be	@ 00005842 3ce0
.org 0x5844
	ldr r0, [pc, #124]	@ 00005844 1f48
.org 0x5846
	ldrb r1, [r0, #3]	@ 00005846 c178
.org 0x5848
	mov ip, r0	@ 00005848 8446
.org 0x584a
	cmp r1, #63	@ 0000584a 3f29
.org 0x584c
	bhi.n 0x58b6	@ 0000584c 33d8
.org 0x584e
	mov r5, ip	@ 0000584e 6546
.org 0x5850
	ldr r7, [pc, #116]	@ 00005850 1d4f
.org 0x5852
	add r7, ip	@ 00005852 6744
.org 0x5854
	ldrb r1, [r5, #3]	@ 00005854 e978
.org 0x5856
	lsls r2, r1, #1	@ 00005856 4a00
.org 0x5858
	adds r2, r2, r1	@ 00005858 5218
.org 0x585a
	lsls r2, r2, #3	@ 0000585a d200
.org 0x585c
	adds r0, r5, #4	@ 0000585c 281d
.org 0x585e
	adds r2, r2, r0	@ 0000585e 1218
.org 0x5860
	adds r1, #1	@ 00005860 0131
.org 0x5862
	strb r1, [r5, #3]	@ 00005862 e970
.org 0x5864
	str r4, [r2, #8]	@ 00005864 9460
.org 0x5866
	str r3, [r2, #4]	@ 00005866 5360
.org 0x5868
	movs r0, #16	@ 00005868 1020
.org 0x586a
	ldrsh r1, [r3, r0]	@ 0000586a 195e
.org 0x586c
	ldr r0, [r6, #0]	@ 0000586c 3068
.org 0x586e
	adds r0, r0, r1	@ 0000586e 4018
.org 0x5870
	str r0, [r2, #12]	@ 00005870 d060
.org 0x5872
	movs r0, #18	@ 00005872 1220
.org 0x5874
	ldrsh r1, [r3, r0]	@ 00005874 195e
.org 0x5876
	ldr r0, [r6, #4]	@ 00005876 7068
.org 0x5878
	adds r0, r0, r1	@ 00005878 4018
.org 0x587a
	str r0, [r2, #16]	@ 0000587a 1061
.org 0x587c
	ldrh r0, [r3, #20]	@ 0000587c 988a
.org 0x587e
	strh r0, [r2, #20]	@ 0000587e 9082
.org 0x5880
	ldrh r0, [r3, #22]	@ 00005880 d88a
.org 0x5882
	strh r0, [r2, #22]	@ 00005882 d082
.org 0x5884
	ldrb r1, [r3, #0]	@ 00005884 1978
.org 0x5886
	lsls r0, r1, #1	@ 00005886 4800
.org 0x5888
	adds r0, r0, r1	@ 00005888 4018
.org 0x588a
	ldrb r1, [r3, #1]	@ 0000588a 5978
.org 0x588c
	adds r0, r0, r1	@ 0000588c 4018
.org 0x588e
	lsls r0, r0, #2	@ 0000588e 8000
.org 0x5890
	adds r0, r0, r7	@ 00005890 c019
.org 0x5892
	ldr r0, [r0, #0]	@ 00005892 0068
.org 0x5894
	str r0, [r2, #0]	@ 00005894 1060
.org 0x5896
	ldrb r1, [r3, #0]	@ 00005896 1978
.org 0x5898
	lsls r0, r1, #1	@ 00005898 4800
.org 0x589a
	adds r0, r0, r1	@ 0000589a 4018
.org 0x589c
	ldrb r1, [r3, #1]	@ 0000589c 5978
.org 0x589e
	adds r0, r0, r1	@ 0000589e 4018
.org 0x58a0
	lsls r0, r0, #2	@ 000058a0 8000
.org 0x58a2
	adds r0, r0, r7	@ 000058a2 c019
.org 0x58a4
	str r2, [r0, #0]	@ 000058a4 0260
.org 0x58a6
	ldrb r0, [r3, #11]	@ 000058a6 d87a
.org 0x58a8
	cmp r0, #0	@ 000058a8 0028
.org 0x58aa
	beq.n 0x58b6	@ 000058aa 04d0
.org 0x58ac
	adds r3, #24	@ 000058ac 1833
.org 0x58ae
	mov r1, ip	@ 000058ae 6146
.org 0x58b0
	ldrb r0, [r1, #3]	@ 000058b0 c878
.org 0x58b2
	cmp r0, #63	@ 000058b2 3f28
.org 0x58b4
	bls.n 0x5854	@ 000058b4 ced9
.org 0x58b6
	ldr r0, [r4, #24]	@ 000058b6 a069
.org 0x58b8
	str r0, [r4, #28]	@ 000058b8 e061
.org 0x58ba
	movs r0, #0	@ 000058ba 0020
.org 0x58bc
	str r0, [r4, #24]	@ 000058bc a061
.org 0x58be
	pop {r4, r5, r6, r7}	@ 000058be f0bc
.org 0x58c0
	pop {r0}	@ 000058c0 01bc
.org 0x58c2
	bx r0	@ 000058c2 0047
