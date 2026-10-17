@ FUN_080ab848  entry 0x080ab848  size 154
.thumb
.org 0xab848
FUN_080ab848:
	push {r4, lr}	@ 000ab848 10b5
.org 0xab84a
	adds r4, r0, #0	@ 000ab84a 041c
.org 0xab84c
	ldr r0, [pc, #96]	@ 000ab84c 1848
.org 0xab84e
	ldr r0, [r0, #0]	@ 000ab84e 0068
.org 0xab850
	bl 0x5500	@ 000ab850 59f756fe
.org 0xab854
	mov ip, r0	@ 000ab854 8446
.org 0xab856
	cmp r0, #0	@ 000ab856 0028
.org 0xab858
	beq.n 0xab8e4	@ 000ab858 44d0
.org 0xab85a
	mov r1, ip	@ 000ab85a 6146
.org 0xab85c
	adds r1, #37	@ 000ab85c 2531
.org 0xab85e
	movs r2, #0	@ 000ab85e 0022
.org 0xab860
	movs r0, #24	@ 000ab860 1820
.org 0xab862
	strb r0, [r1, #0]	@ 000ab862 0870
.org 0xab864
	ldr r0, [pc, #76]	@ 000ab864 1348
.org 0xab866
	movs r1, #73	@ 000ab866 4921
.org 0xab868
	mov r3, ip	@ 000ab868 6346
.org 0xab86a
	strb r1, [r3, #9]	@ 000ab86a 5972
.org 0xab86c
	adds r1, #219	@ 000ab86c db31
.org 0xab86e
	adds r0, r0, r1	@ 000ab86e 4018
.org 0xab870
	ldr r0, [r0, #0]	@ 000ab870 0068
.org 0xab872
	ldr r0, [r0, #0]	@ 000ab872 0068
.org 0xab874
	str r0, [r3, #20]	@ 000ab874 5861
.org 0xab876
	movs r0, #0	@ 000ab876 0020
.org 0xab878
	strh r2, [r3, #32]	@ 000ab878 1a84
.org 0xab87a
	mov r1, ip	@ 000ab87a 6146
.org 0xab87c
	adds r1, #34	@ 000ab87c 2231
.org 0xab87e
	strb r0, [r1, #0]	@ 000ab87e 0870
.org 0xab880
	ldrb r0, [r3, #11]	@ 000ab880 d87a
.org 0xab882
	movs r3, #16	@ 000ab882 1023
.org 0xab884
	orrs r0, r3	@ 000ab884 1843
.org 0xab886
	mov r2, ip	@ 000ab886 6246
.org 0xab888
	strb r0, [r2, #11]	@ 000ab888 d072
.org 0xab88a
	ldrb r0, [r2, #28]	@ 000ab88a 107f
.org 0xab88c
	strb r0, [r2, #29]	@ 000ab88c 5077
.org 0xab88e
	str r4, [r2, #40]	@ 000ab88e 9462
.org 0xab890
	ldr r0, [r4, #84]	@ 000ab890 606d
.org 0xab892
	ldr r1, [r4, #88]	@ 000ab892 a16d
.org 0xab894
	str r0, [r2, #84]	@ 000ab894 5065
.org 0xab896
	str r1, [r2, #88]	@ 000ab896 9165
.org 0xab898
	ldrb r0, [r4, #10]	@ 000ab898 a07a
.org 0xab89a
	lsrs r2, r0, #4	@ 000ab89a 0209
.org 0xab89c
	movs r0, #1	@ 000ab89c 0120
.org 0xab89e
	ands r2, r0	@ 000ab89e 0240
.org 0xab8a0
	cmp r2, #0	@ 000ab8a0 002a
.org 0xab8a2
	beq.n 0xab8b8	@ 000ab8a2 09d0
.org 0xab8a4
	mov r1, ip	@ 000ab8a4 6146
.org 0xab8a6
	ldrb r0, [r1, #10]	@ 000ab8a6 887a
.org 0xab8a8
	orrs r0, r3	@ 000ab8a8 1843
.org 0xab8aa
	strb r0, [r1, #10]	@ 000ab8aa 8872
.org 0xab8ac
	b.n 0xab8c2	@ 000ab8ac 09e0
.org 0xab8ae
	.byte 0x00	@ 000ab8ae data
.org 0xab8af
	.byte 0x00	@ 000ab8af data
.org 0xab8b0
	.byte 0x90,0xed,0x02,0x02	@ 000ab8b0 data
.org 0xab8b4
	.byte 0x40,0xdb,0x85,0x08	@ 000ab8b4 data
.org 0xab8b8
	mov r3, ip	@ 000ab8b8 6346
.org 0xab8ba
	ldrb r1, [r3, #10]	@ 000ab8ba 997a
.org 0xab8bc
	movs r0, #239	@ 000ab8bc ef20
.org 0xab8be
	ands r0, r1	@ 000ab8be 0840
.org 0xab8c0
	strb r0, [r3, #10]	@ 000ab8c0 9872
.org 0xab8c2
	adds r1, r2, #0	@ 000ab8c2 111c
.org 0xab8c4
	mov r0, ip	@ 000ab8c4 6046
.org 0xab8c6
	adds r0, #76	@ 000ab8c6 4c30
.org 0xab8c8
	movs r3, #0	@ 000ab8c8 0023
.org 0xab8ca
	strb r1, [r0, #0]	@ 000ab8ca 0170
.org 0xab8cc
	mov r4, ip	@ 000ab8cc 6446
.org 0xab8ce
	adds r4, #74	@ 000ab8ce 4a34
.org 0xab8d0
	lsls r1, r1, #4	@ 000ab8d0 0901
.org 0xab8d2
	ldrb r2, [r4, #0]	@ 000ab8d2 2278
.org 0xab8d4
	movs r0, #17	@ 000ab8d4 1120
.org 0xab8d6
	negs r0, r0	@ 000ab8d6 4042
.org 0xab8d8
	ands r0, r2	@ 000ab8d8 1040
.org 0xab8da
	orrs r0, r1	@ 000ab8da 0843
.org 0xab8dc
	strb r0, [r4, #0]	@ 000ab8dc 2070
.org 0xab8de
	mov r0, ip	@ 000ab8de 6046
.org 0xab8e0
	strb r3, [r0, #16]	@ 000ab8e0 0374
