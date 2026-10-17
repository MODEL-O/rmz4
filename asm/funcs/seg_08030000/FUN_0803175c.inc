@ FUN_0803175c  entry 0x0803175c  size 290
.thumb
.org 0x3175c
FUN_0803175c:
	push {r4, r5, r6, lr}	@ 0003175c 70b5
.org 0x3175e
	adds r4, r0, #0	@ 0003175e 041c
.org 0x31760
	ldrb r0, [r4, #30]	@ 00031760 a07f
.org 0x31762
	lsls r0, r0, #8	@ 00031762 0002
.org 0x31764
	adds r1, r4, #0	@ 00031764 211c
.org 0x31766
	adds r1, #112	@ 00031766 7031
.org 0x31768
	ldrb r1, [r1, #0]	@ 00031768 0978
.org 0x3176a
	orrs r1, r0	@ 0003176a 0143
.org 0x3176c
	movs r2, #128	@ 0003176c 8022
.org 0x3176e
	lsls r2, r2, #3	@ 0003176e d200
.org 0x31770
	cmp r1, r2	@ 00031770 9142
.org 0x31772
	beq.n 0x3178a	@ 00031772 0ad0
.org 0x31774
	adds r0, r4, #0	@ 00031774 201c
.org 0x31776
	adds r0, #115	@ 00031776 7330
.org 0x31778
	ldrb r0, [r0, #0]	@ 00031778 0078
.org 0x3177a
	cmp r0, #3	@ 0003177a 0328
.org 0x3177c
	bne.n 0x3178a	@ 0003177c 05d1
.org 0x3177e
	adds r0, r4, #0	@ 0003177e 201c
.org 0x31780
	adds r1, r2, #0	@ 00031780 111c
.org 0x31782
	movs r2, #1	@ 00031782 0122
.org 0x31784
	movs r3, #4	@ 00031784 0423
.org 0x31786
	bl 0x1cfc8	@ 00031786 ebf71ffc
.org 0x3178a
	movs r1, #150	@ 0003178a 9621
.org 0x3178c
	lsls r1, r1, #2	@ 0003178c 8900
.org 0x3178e
	adds r0, r4, r1	@ 0003178e 6018
.org 0x31790
	ldr r1, [r0, #0]	@ 00031790 0168
.org 0x31792
	movs r0, #32	@ 00031792 2020
.org 0x31794
	ands r0, r1	@ 00031794 0840
.org 0x31796
	cmp r0, #0	@ 00031796 0028
.org 0x31798
	beq.n 0x317c6	@ 00031798 15d0
.org 0x3179a
	ldr r0, [r4, #92]	@ 0003179a e06d
.org 0x3179c
	cmp r0, #0	@ 0003179c 0028
.org 0x3179e
	bge.n 0x317a2	@ 0003179e 00da
.org 0x317a0
	negs r0, r0	@ 000317a0 4042
.org 0x317a2
	negs r0, r0	@ 000317a2 4042
.org 0x317a4
	lsls r0, r0, #16	@ 000317a4 0004
.org 0x317a6
	lsrs r3, r0, #16	@ 000317a6 030c
.org 0x317a8
	adds r1, r4, #0	@ 000317a8 211c
.org 0x317aa
	adds r1, #76	@ 000317aa 4c31
.org 0x317ac
	movs r0, #0	@ 000317ac 0020
.org 0x317ae
	strb r0, [r1, #0]	@ 000317ae 0870
.org 0x317b0
	adds r2, r4, #0	@ 000317b0 221c
.org 0x317b2
	adds r2, #74	@ 000317b2 4a32
.org 0x317b4
	ldrb r1, [r2, #0]	@ 000317b4 1178
.org 0x317b6
	subs r0, #17	@ 000317b6 1138
.org 0x317b8
	ands r0, r1	@ 000317b8 0840
.org 0x317ba
	strb r0, [r2, #0]	@ 000317ba 1070
.org 0x317bc
	ldrb r1, [r4, #10]	@ 000317bc a17a
.org 0x317be
	movs r0, #239	@ 000317be ef20
.org 0x317c0
	ands r0, r1	@ 000317c0 0840
.org 0x317c2
	strb r0, [r4, #10]	@ 000317c2 a072
.org 0x317c4
	b.n 0x317f8	@ 000317c4 18e0
.org 0x317c6
	movs r0, #16	@ 000317c6 1020
.org 0x317c8
	ands r1, r0	@ 000317c8 0140
.org 0x317ca
	cmp r1, #0	@ 000317ca 0029
.org 0x317cc
	beq.n 0x317f6	@ 000317cc 13d0
.org 0x317ce
	ldr r0, [r4, #92]	@ 000317ce e06d
.org 0x317d0
	cmp r0, #0	@ 000317d0 0028
.org 0x317d2
	bge.n 0x317d6	@ 000317d2 00da
.org 0x317d4
	negs r0, r0	@ 000317d4 4042
.org 0x317d6
	lsls r0, r0, #16	@ 000317d6 0004
.org 0x317d8
	lsrs r3, r0, #16	@ 000317d8 030c
.org 0x317da
	adds r1, r4, #0	@ 000317da 211c
.org 0x317dc
	adds r1, #76	@ 000317dc 4c31
.org 0x317de
	movs r0, #1	@ 000317de 0120
.org 0x317e0
	strb r0, [r1, #0]	@ 000317e0 0870
.org 0x317e2
	adds r2, r4, #0	@ 000317e2 221c
.org 0x317e4
	adds r2, #74	@ 000317e4 4a32
.org 0x317e6
	ldrb r0, [r2, #0]	@ 000317e6 1078
.org 0x317e8
	movs r1, #16	@ 000317e8 1021
.org 0x317ea
	orrs r0, r1	@ 000317ea 0843
.org 0x317ec
	strb r0, [r2, #0]	@ 000317ec 1070
.org 0x317ee
	ldrb r0, [r4, #10]	@ 000317ee a07a
.org 0x317f0
	orrs r1, r0	@ 000317f0 0143
.org 0x317f2
	strb r1, [r4, #10]	@ 000317f2 a172
.org 0x317f4
	b.n 0x317f8	@ 000317f4 00e0
.org 0x317f6
	movs r3, #0	@ 000317f6 0023
.org 0x317f8
	lsls r1, r3, #16	@ 000317f8 1904
.org 0x317fa
	asrs r1, r1, #16	@ 000317fa 0914
.org 0x317fc
	ldr r0, [r4, #84]	@ 000317fc 606d
.org 0x317fe
	adds r0, r0, r1	@ 000317fe 4018
.org 0x31800
	str r0, [r4, #84]	@ 00031800 6065
.org 0x31802
	movs r0, #186	@ 00031802 ba20
.org 0x31804
	lsls r0, r0, #1	@ 00031804 4000
.org 0x31806
	adds r5, r4, r0	@ 00031806 2518
.org 0x31808
	ldrb r1, [r5, #0]	@ 00031808 2978
.org 0x3180a
	lsls r1, r1, #3	@ 0003180a c900
.org 0x3180c
	ldr r6, [pc, #112]	@ 0003180c 1c4e
.org 0x3180e
	adds r1, r1, r6	@ 0003180e 8919
.org 0x31810
	adds r0, r4, #0	@ 00031810 201c
.org 0x31812
	movs r2, #0	@ 00031812 0022
.org 0x31814
	bl 0x2b7f0	@ 00031814 f9f7ecff
.org 0x31818
	ldrb r1, [r5, #0]	@ 00031818 2978
.org 0x3181a
	lsls r1, r1, #3	@ 0003181a c900
.org 0x3181c
	adds r1, r1, r6	@ 0003181c 8919
.org 0x3181e
	adds r0, r4, #0	@ 0003181e 201c
.org 0x31820
	movs r2, #1	@ 00031820 0122
.org 0x31822
	bl 0x2b7f0	@ 00031822 f9f7e5ff
.org 0x31826
	ldr r0, [r4, #88]	@ 00031826 a06d
.org 0x31828
	ldr r1, [r4, #96]	@ 00031828 216e
.org 0x3182a
	adds r0, r0, r1	@ 0003182a 4018
.org 0x3182c
	str r0, [r4, #88]	@ 0003182c a065
.org 0x3182e
	adds r0, r4, #0	@ 0003182e 201c
.org 0x31830
	bl 0x3851c	@ 00031830 06f074fe
.org 0x31834
	lsls r0, r0, #16	@ 00031834 0004
.org 0x31836
	asrs r0, r0, #16	@ 00031836 0014
.org 0x31838
	ldr r1, [r4, #96]	@ 00031838 216e
.org 0x3183a
	adds r1, r1, r0	@ 0003183a 0918
.org 0x3183c
	str r1, [r4, #96]	@ 0003183c 2166
.org 0x3183e
	ldrb r1, [r5, #0]	@ 0003183e 2978
.org 0x31840
	lsls r1, r1, #3	@ 00031840 c900
.org 0x31842
	adds r1, r1, r6	@ 00031842 8919
.org 0x31844
	adds r0, r4, #0	@ 00031844 201c
.org 0x31846
	movs r2, #0	@ 00031846 0022
.org 0x31848
	bl 0x2bfe8	@ 00031848 faf7cefb
.org 0x3184c
	lsls r0, r0, #16	@ 0003184c 0004
.org 0x3184e
	lsrs r1, r0, #16	@ 0003184e 010c
.org 0x31850
	cmp r1, #0	@ 00031850 0029
.org 0x31852
	bne.n 0x31866	@ 00031852 08d1
.org 0x31854
	ldrb r1, [r5, #0]	@ 00031854 2978
.org 0x31856
	lsls r1, r1, #3	@ 00031856 c900
.org 0x31858
	adds r1, r1, r6	@ 00031858 8919
.org 0x3185a
	adds r0, r4, #0	@ 0003185a 201c
.org 0x3185c
	movs r2, #1	@ 0003185c 0122
.org 0x3185e
	bl 0x2c2d4	@ 0003185e faf739fd
.org 0x31862
	lsls r0, r0, #16	@ 00031862 0004
.org 0x31864
	lsrs r1, r0, #16	@ 00031864 010c
.org 0x31866
	ldr r0, [r4, #96]	@ 00031866 206e
.org 0x31868
	cmp r0, #0	@ 00031868 0028
.org 0x3186a
	bgt.n 0x31870	@ 0003186a 01dc
.org 0x3186c
	cmp r1, #0	@ 0003186c 0029
.org 0x3186e
	beq.n 0x31878	@ 0003186e 03d0
.org 0x31870
	movs r1, #0	@ 00031870 0021
.org 0x31872
	movs r0, #2	@ 00031872 0220
.org 0x31874
	strb r0, [r4, #14]	@ 00031874 a073
.org 0x31876
	strb r1, [r4, #15]	@ 00031876 e173
.org 0x31878
	pop {r4, r5, r6}	@ 00031878 70bc
.org 0x3187a
	pop {r0}	@ 0003187a 01bc
.org 0x3187c
	bx r0	@ 0003187c 0047
