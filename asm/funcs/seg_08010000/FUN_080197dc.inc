@ FUN_080197dc  entry 0x080197dc  size 1064
.thumb
.org 0x197dc
FUN_080197dc:
	push {r4, r5, lr}	@ 000197dc 30b5
.org 0x197de
	ldr r5, [pc, #140]	@ 000197de 234d
.org 0x197e0
	ldr r0, [pc, #140]	@ 000197e0 2348
.org 0x197e2
	adds r1, r5, r0	@ 000197e2 2918
.org 0x197e4
	ldr r0, [r1, #0]	@ 000197e4 0868
.org 0x197e6
	adds r0, #1	@ 000197e6 0130
.org 0x197e8
	str r0, [r1, #0]	@ 000197e8 0860
.org 0x197ea
	cmp r0, #159	@ 000197ea 9f28
.org 0x197ec
	bls.n 0x197f2	@ 000197ec 01d9
.org 0x197ee
	movs r0, #0	@ 000197ee 0020
.org 0x197f0
	str r0, [r1, #0]	@ 000197f0 0860
.org 0x197f2
	ldr r0, [pc, #128]	@ 000197f2 2048
.org 0x197f4
	adds r1, r5, r0	@ 000197f4 2918
.org 0x197f6
	ldrb r0, [r1, #0]	@ 000197f6 0878
.org 0x197f8
	adds r0, #1	@ 000197f8 0130
.org 0x197fa
	strb r0, [r1, #0]	@ 000197fa 0870
.org 0x197fc
	lsls r0, r0, #24	@ 000197fc 0006
.org 0x197fe
	lsrs r0, r0, #24	@ 000197fe 000e
.org 0x19800
	cmp r0, #29	@ 00019800 1d28
.org 0x19802
	bls.n 0x19808	@ 00019802 01d9
.org 0x19804
	movs r0, #0	@ 00019804 0020
.org 0x19806
	strb r0, [r1, #0]	@ 00019806 0870
.org 0x19808
	ldr r1, [pc, #108]	@ 00019808 1b49
.org 0x1980a
	adds r0, r5, r1	@ 0001980a 6818
.org 0x1980c
	ldrh r1, [r0, #0]	@ 0001980c 0188
.org 0x1980e
	lsrs r0, r1, #8	@ 0001980e 080a
.org 0x19810
	cmp r0, #14	@ 00019810 0e28
.org 0x19812
	bne.n 0x19884	@ 00019812 37d1
.org 0x19814
	movs r4, #255	@ 00019814 ff24
.org 0x19816
	ands r4, r1	@ 00019816 0c40
.org 0x19818
	cmp r4, #0	@ 00019818 002c
.org 0x1981a
	bne.n 0x19884	@ 0001981a 33d1
.org 0x1981c
	ldr r0, [pc, #92]	@ 0001981c 1748
.org 0x1981e
	adds r2, r5, r0	@ 0001981e 2a18
.org 0x19820
	ldrh r1, [r2, #0]	@ 00019820 1188
.org 0x19822
	movs r0, #1	@ 00019822 0120
.org 0x19824
	ands r0, r1	@ 00019824 0840
.org 0x19826
	cmp r0, #0	@ 00019826 0028
.org 0x19828
	bne.n 0x19846	@ 00019828 0dd1
.org 0x1982a
	movs r0, #1	@ 0001982a 0120
.org 0x1982c
	orrs r0, r1	@ 0001982c 0843
.org 0x1982e
	strh r0, [r2, #0]	@ 0001982e 1080
.org 0x19830
	movs r0, #183	@ 00019830 b720
.org 0x19832
	movs r1, #0	@ 00019832 0021
.org 0x19834
	bl 0x249c	@ 00019834 e8f732fe
.org 0x19838
	movs r0, #184	@ 00019838 b820
.org 0x1983a
	movs r1, #0	@ 0001983a 0021
.org 0x1983c
	bl 0x249c	@ 0001983c e8f72efe
.org 0x19840
	ldr r1, [pc, #60]	@ 00019840 0f49
.org 0x19842
	adds r0, r5, r1	@ 00019842 6818
.org 0x19844
	strh r4, [r0, #0]	@ 00019844 0480
.org 0x19846
	ldr r0, [pc, #56]	@ 00019846 0e48
.org 0x19848
	adds r2, r5, r0	@ 00019848 2a18
.org 0x1984a
	ldrh r0, [r2, #0]	@ 0001984a 1088
.org 0x1984c
	adds r0, #1	@ 0001984c 0130
.org 0x1984e
	strh r0, [r2, #0]	@ 0001984e 1080
.org 0x19850
	lsls r0, r0, #16	@ 00019850 0004
.org 0x19852
	movs r1, #248	@ 00019852 f821
.org 0x19854
	lsls r1, r1, #17	@ 00019854 4904
.org 0x19856
	cmp r0, r1	@ 00019856 8842
.org 0x19858
	bls.n 0x1985c	@ 00019858 00d9
.org 0x1985a
	strh r4, [r2, #0]	@ 0001985a 1480
.org 0x1985c
	movs r0, #183	@ 0001985c b720
.org 0x1985e
	bl 0x25d8	@ 0001985e e8f7bbfe
.org 0x19862
	movs r0, #184	@ 00019862 b820
.org 0x19864
	bl 0x25d8	@ 00019864 e8f7b8fe
.org 0x19868
	b.n 0x198a6	@ 00019868 1de0
.org 0x1986a
	.byte 0x00	@ 0001986a data
.org 0x1986b
	.byte 0x00	@ 0001986b data
.org 0x1986c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001986c data
.org 0x19870
	.byte 0x30,0xd0,0x02,0x00	@ 00019870 data
.org 0x19874
	.byte 0x34,0xd0,0x02,0x00	@ 00019874 data
.org 0x19878
	.byte 0xd4,0x07,0x00,0x00	@ 00019878 data
.org 0x1987c
	.byte 0x28,0xd0,0x02,0x00	@ 0001987c data
.org 0x19880
	.byte 0x36,0xd0,0x02,0x00	@ 00019880 data
.org 0x19884
	ldr r0, [pc, #88]	@ 00019884 1648
.org 0x19886
	ldr r1, [pc, #92]	@ 00019886 1749
.org 0x19888
	adds r2, r0, r1	@ 00019888 4218
.org 0x1988a
	ldrh r1, [r2, #0]	@ 0001988a 1188
.org 0x1988c
	movs r0, #1	@ 0001988c 0120
.org 0x1988e
	ands r0, r1	@ 0001988e 0840
.org 0x19890
	cmp r0, #0	@ 00019890 0028
.org 0x19892
	beq.n 0x198a6	@ 00019892 08d0
.org 0x19894
	movs r0, #1	@ 00019894 0120
.org 0x19896
	eors r0, r1	@ 00019896 4840
.org 0x19898
	strh r0, [r2, #0]	@ 00019898 1080
.org 0x1989a
	movs r0, #183	@ 0001989a b720
.org 0x1989c
	bl 0x2624	@ 0001989c e8f7c2fe
.org 0x198a0
	movs r0, #184	@ 000198a0 b820
.org 0x198a2
	bl 0x2624	@ 000198a2 e8f7bffe
.org 0x198a6
	ldr r2, [pc, #56]	@ 000198a6 0e4a
.org 0x198a8
	ldr r1, [pc, #60]	@ 000198a8 0f49
.org 0x198aa
	adds r0, r2, r1	@ 000198aa 5018
.org 0x198ac
	ldrh r1, [r0, #0]	@ 000198ac 0188
.org 0x198ae
	lsrs r0, r1, #8	@ 000198ae 080a
.org 0x198b0
	cmp r0, #14	@ 000198b0 0e28
.org 0x198b2
	bne.n 0x198ec	@ 000198b2 1bd1
.org 0x198b4
	movs r0, #255	@ 000198b4 ff20
.org 0x198b6
	ands r0, r1	@ 000198b6 0840
.org 0x198b8
	cmp r0, #1	@ 000198b8 0128
.org 0x198ba
	bne.n 0x198ec	@ 000198ba 17d1
.org 0x198bc
	ldr r0, [pc, #36]	@ 000198bc 0948
.org 0x198be
	adds r2, r2, r0	@ 000198be 1218
.org 0x198c0
	ldrh r1, [r2, #0]	@ 000198c0 1188
.org 0x198c2
	movs r0, #2	@ 000198c2 0220
.org 0x198c4
	ands r0, r1	@ 000198c4 0840
.org 0x198c6
	cmp r0, #0	@ 000198c6 0028
.org 0x198c8
	bne.n 0x198d8	@ 000198c8 06d1
.org 0x198ca
	movs r0, #2	@ 000198ca 0220
.org 0x198cc
	orrs r0, r1	@ 000198cc 0843
.org 0x198ce
	strh r0, [r2, #0]	@ 000198ce 1080
.org 0x198d0
	movs r0, #185	@ 000198d0 b920
.org 0x198d2
	movs r1, #0	@ 000198d2 0021
.org 0x198d4
	bl 0x249c	@ 000198d4 e8f7e2fd
.org 0x198d8
	movs r0, #185	@ 000198d8 b920
.org 0x198da
	bl 0x25d8	@ 000198da e8f77dfe
.org 0x198de
	b.n 0x19908	@ 000198de 13e0
.org 0x198e0
	.byte 0xb0,0x0a,0x00,0x02	@ 000198e0 data
.org 0x198e4
	.byte 0x28,0xd0,0x02,0x00	@ 000198e4 data
.org 0x198e8
	.byte 0xd6,0x07,0x00,0x00	@ 000198e8 data
.org 0x198ec
	ldr r0, [pc, #84]	@ 000198ec 1548
.org 0x198ee
	ldr r1, [pc, #88]	@ 000198ee 1649
.org 0x198f0
	adds r2, r0, r1	@ 000198f0 4218
.org 0x198f2
	ldrh r1, [r2, #0]	@ 000198f2 1188
.org 0x198f4
	movs r0, #2	@ 000198f4 0220
.org 0x198f6
	ands r0, r1	@ 000198f6 0840
.org 0x198f8
	cmp r0, #0	@ 000198f8 0028
.org 0x198fa
	beq.n 0x19908	@ 000198fa 05d0
.org 0x198fc
	movs r0, #2	@ 000198fc 0220
.org 0x198fe
	eors r0, r1	@ 000198fe 4840
.org 0x19900
	strh r0, [r2, #0]	@ 00019900 1080
.org 0x19902
	movs r0, #185	@ 00019902 b920
.org 0x19904
	bl 0x2624	@ 00019904 e8f78efe
.org 0x19908
	ldr r2, [pc, #56]	@ 00019908 0e4a
.org 0x1990a
	ldr r1, [pc, #64]	@ 0001990a 1049
.org 0x1990c
	adds r0, r2, r1	@ 0001990c 5018
.org 0x1990e
	ldrh r1, [r0, #0]	@ 0001990e 0188
.org 0x19910
	lsrs r0, r1, #8	@ 00019910 080a
.org 0x19912
	cmp r0, #14	@ 00019912 0e28
.org 0x19914
	bne.n 0x19950	@ 00019914 1cd1
.org 0x19916
	movs r0, #255	@ 00019916 ff20
.org 0x19918
	ands r0, r1	@ 00019918 0840
.org 0x1991a
	cmp r0, #3	@ 0001991a 0328
.org 0x1991c
	bne.n 0x19950	@ 0001991c 18d1
.org 0x1991e
	ldr r0, [pc, #40]	@ 0001991e 0a48
.org 0x19920
	adds r2, r2, r0	@ 00019920 1218
.org 0x19922
	ldrh r1, [r2, #0]	@ 00019922 1188
.org 0x19924
	movs r0, #4	@ 00019924 0420
.org 0x19926
	ands r0, r1	@ 00019926 0840
.org 0x19928
	cmp r0, #0	@ 00019928 0028
.org 0x1992a
	bne.n 0x1993a	@ 0001992a 06d1
.org 0x1992c
	movs r0, #4	@ 0001992c 0420
.org 0x1992e
	orrs r0, r1	@ 0001992e 0843
.org 0x19930
	strh r0, [r2, #0]	@ 00019930 1080
.org 0x19932
	movs r0, #186	@ 00019932 ba20
.org 0x19934
	movs r1, #0	@ 00019934 0021
.org 0x19936
	bl 0x249c	@ 00019936 e8f7b1fd
.org 0x1993a
	movs r0, #186	@ 0001993a ba20
.org 0x1993c
	bl 0x25d8	@ 0001993c e8f74cfe
.org 0x19940
	b.n 0x1996c	@ 00019940 14e0
.org 0x19942
	.byte 0x00	@ 00019942 data
.org 0x19943
	.byte 0x00	@ 00019943 data
.org 0x19944
	.byte 0xb0,0x0a,0x00,0x02	@ 00019944 data
.org 0x19948
	.byte 0x28,0xd0,0x02,0x00	@ 00019948 data
.org 0x1994c
	.byte 0xd6,0x07,0x00,0x00	@ 0001994c data
.org 0x19950
	ldr r0, [pc, #84]	@ 00019950 1548
.org 0x19952
	ldr r1, [pc, #88]	@ 00019952 1649
.org 0x19954
	adds r2, r0, r1	@ 00019954 4218
.org 0x19956
	ldrh r1, [r2, #0]	@ 00019956 1188
.org 0x19958
	movs r0, #4	@ 00019958 0420
.org 0x1995a
	ands r0, r1	@ 0001995a 0840
.org 0x1995c
	cmp r0, #0	@ 0001995c 0028
.org 0x1995e
	beq.n 0x1996c	@ 0001995e 05d0
.org 0x19960
	movs r0, #4	@ 00019960 0420
.org 0x19962
	eors r0, r1	@ 00019962 4840
.org 0x19964
	strh r0, [r2, #0]	@ 00019964 1080
.org 0x19966
	movs r0, #186	@ 00019966 ba20
.org 0x19968
	bl 0x2624	@ 00019968 e8f75cfe
.org 0x1996c
	ldr r2, [pc, #56]	@ 0001996c 0e4a
.org 0x1996e
	ldr r1, [pc, #64]	@ 0001996e 1049
.org 0x19970
	adds r0, r2, r1	@ 00019970 5018
.org 0x19972
	ldrh r1, [r0, #0]	@ 00019972 0188
.org 0x19974
	lsrs r0, r1, #8	@ 00019974 080a
.org 0x19976
	cmp r0, #14	@ 00019976 0e28
.org 0x19978
	bne.n 0x199b4	@ 00019978 1cd1
.org 0x1997a
	movs r0, #255	@ 0001997a ff20
.org 0x1997c
	ands r0, r1	@ 0001997c 0840
.org 0x1997e
	cmp r0, #4	@ 0001997e 0428
.org 0x19980
	bne.n 0x199b4	@ 00019980 18d1
.org 0x19982
	ldr r0, [pc, #40]	@ 00019982 0a48
.org 0x19984
	adds r2, r2, r0	@ 00019984 1218
.org 0x19986
	ldrh r1, [r2, #0]	@ 00019986 1188
.org 0x19988
	movs r0, #8	@ 00019988 0820
.org 0x1998a
	ands r0, r1	@ 0001998a 0840
.org 0x1998c
	cmp r0, #0	@ 0001998c 0028
.org 0x1998e
	bne.n 0x1999e	@ 0001998e 06d1
.org 0x19990
	movs r0, #8	@ 00019990 0820
.org 0x19992
	orrs r0, r1	@ 00019992 0843
.org 0x19994
	strh r0, [r2, #0]	@ 00019994 1080
.org 0x19996
	movs r0, #187	@ 00019996 bb20
.org 0x19998
	movs r1, #0	@ 00019998 0021
.org 0x1999a
	bl 0x249c	@ 0001999a e8f77ffd
.org 0x1999e
	movs r0, #187	@ 0001999e bb20
.org 0x199a0
	bl 0x25d8	@ 000199a0 e8f71afe
.org 0x199a4
	b.n 0x199d0	@ 000199a4 14e0
.org 0x199a6
	.byte 0x00	@ 000199a6 data
.org 0x199a7
	.byte 0x00	@ 000199a7 data
.org 0x199a8
	.byte 0xb0,0x0a,0x00,0x02	@ 000199a8 data
.org 0x199ac
	.byte 0x28,0xd0,0x02,0x00	@ 000199ac data
.org 0x199b0
	.byte 0xd4,0x07,0x00,0x00	@ 000199b0 data
.org 0x199b4
	ldr r0, [pc, #84]	@ 000199b4 1548
.org 0x199b6
	ldr r1, [pc, #88]	@ 000199b6 1649
.org 0x199b8
	adds r2, r0, r1	@ 000199b8 4218
.org 0x199ba
	ldrh r1, [r2, #0]	@ 000199ba 1188
.org 0x199bc
	movs r0, #8	@ 000199bc 0820
.org 0x199be
	ands r0, r1	@ 000199be 0840
.org 0x199c0
	cmp r0, #0	@ 000199c0 0028
.org 0x199c2
	beq.n 0x199d0	@ 000199c2 05d0
.org 0x199c4
	movs r0, #8	@ 000199c4 0820
.org 0x199c6
	eors r0, r1	@ 000199c6 4840
.org 0x199c8
	strh r0, [r2, #0]	@ 000199c8 1080
.org 0x199ca
	movs r0, #187	@ 000199ca bb20
.org 0x199cc
	bl 0x2624	@ 000199cc e8f72afe
.org 0x199d0
	ldr r2, [pc, #56]	@ 000199d0 0e4a
.org 0x199d2
	ldr r1, [pc, #64]	@ 000199d2 1049
.org 0x199d4
	adds r0, r2, r1	@ 000199d4 5018
.org 0x199d6
	ldrh r1, [r0, #0]	@ 000199d6 0188
.org 0x199d8
	lsrs r0, r1, #8	@ 000199d8 080a
.org 0x199da
	cmp r0, #14	@ 000199da 0e28
.org 0x199dc
	bne.n 0x19a18	@ 000199dc 1cd1
.org 0x199de
	movs r0, #255	@ 000199de ff20
.org 0x199e0
	ands r0, r1	@ 000199e0 0840
.org 0x199e2
	cmp r0, #5	@ 000199e2 0528
.org 0x199e4
	bne.n 0x19a18	@ 000199e4 18d1
.org 0x199e6
	ldr r0, [pc, #40]	@ 000199e6 0a48
.org 0x199e8
	adds r2, r2, r0	@ 000199e8 1218
.org 0x199ea
	ldrh r1, [r2, #0]	@ 000199ea 1188
.org 0x199ec
	movs r0, #16	@ 000199ec 1020
.org 0x199ee
	ands r0, r1	@ 000199ee 0840
.org 0x199f0
	cmp r0, #0	@ 000199f0 0028
.org 0x199f2
	bne.n 0x19a02	@ 000199f2 06d1
.org 0x199f4
	movs r0, #16	@ 000199f4 1020
.org 0x199f6
	orrs r0, r1	@ 000199f6 0843
.org 0x199f8
	strh r0, [r2, #0]	@ 000199f8 1080
.org 0x199fa
	movs r0, #188	@ 000199fa bc20
.org 0x199fc
	movs r1, #0	@ 000199fc 0021
.org 0x199fe
	bl 0x249c	@ 000199fe e8f74dfd
.org 0x19a02
	movs r0, #188	@ 00019a02 bc20
.org 0x19a04
	bl 0x25d8	@ 00019a04 e8f7e8fd
.org 0x19a08
	b.n 0x19a34	@ 00019a08 14e0
.org 0x19a0a
	.byte 0x00	@ 00019a0a data
.org 0x19a0b
	.byte 0x00	@ 00019a0b data
.org 0x19a0c
	.byte 0xb0,0x0a,0x00,0x02	@ 00019a0c data
.org 0x19a10
	.byte 0x28,0xd0,0x02,0x00	@ 00019a10 data
.org 0x19a14
	.byte 0xd6,0x07,0x00,0x00	@ 00019a14 data
.org 0x19a18
	ldr r0, [pc, #84]	@ 00019a18 1548
.org 0x19a1a
	ldr r1, [pc, #88]	@ 00019a1a 1649
.org 0x19a1c
	adds r2, r0, r1	@ 00019a1c 4218
.org 0x19a1e
	ldrh r1, [r2, #0]	@ 00019a1e 1188
.org 0x19a20
	movs r0, #16	@ 00019a20 1020
.org 0x19a22
	ands r0, r1	@ 00019a22 0840
.org 0x19a24
	cmp r0, #0	@ 00019a24 0028
.org 0x19a26
	beq.n 0x19a34	@ 00019a26 05d0
.org 0x19a28
	movs r0, #16	@ 00019a28 1020
.org 0x19a2a
	eors r0, r1	@ 00019a2a 4840
.org 0x19a2c
	strh r0, [r2, #0]	@ 00019a2c 1080
.org 0x19a2e
	movs r0, #188	@ 00019a2e bc20
.org 0x19a30
	bl 0x2624	@ 00019a30 e8f7f8fd
.org 0x19a34
	ldr r2, [pc, #56]	@ 00019a34 0e4a
.org 0x19a36
	ldr r1, [pc, #64]	@ 00019a36 1049
.org 0x19a38
	adds r0, r2, r1	@ 00019a38 5018
.org 0x19a3a
	ldrh r1, [r0, #0]	@ 00019a3a 0188
.org 0x19a3c
	lsrs r0, r1, #8	@ 00019a3c 080a
.org 0x19a3e
	cmp r0, #14	@ 00019a3e 0e28
.org 0x19a40
	bne.n 0x19a7c	@ 00019a40 1cd1
.org 0x19a42
	movs r0, #255	@ 00019a42 ff20
.org 0x19a44
	ands r0, r1	@ 00019a44 0840
.org 0x19a46
	cmp r0, #6	@ 00019a46 0628
.org 0x19a48
	bne.n 0x19a7c	@ 00019a48 18d1
.org 0x19a4a
	ldr r0, [pc, #40]	@ 00019a4a 0a48
.org 0x19a4c
	adds r2, r2, r0	@ 00019a4c 1218
.org 0x19a4e
	ldrh r1, [r2, #0]	@ 00019a4e 1188
.org 0x19a50
	movs r0, #32	@ 00019a50 2020
.org 0x19a52
	ands r0, r1	@ 00019a52 0840
.org 0x19a54
	cmp r0, #0	@ 00019a54 0028
.org 0x19a56
	bne.n 0x19a66	@ 00019a56 06d1
.org 0x19a58
	movs r0, #32	@ 00019a58 2020
.org 0x19a5a
	orrs r0, r1	@ 00019a5a 0843
.org 0x19a5c
	strh r0, [r2, #0]	@ 00019a5c 1080
.org 0x19a5e
	movs r0, #189	@ 00019a5e bd20
.org 0x19a60
	movs r1, #0	@ 00019a60 0021
.org 0x19a62
	bl 0x249c	@ 00019a62 e8f71bfd
.org 0x19a66
	movs r0, #189	@ 00019a66 bd20
.org 0x19a68
	bl 0x25d8	@ 00019a68 e8f7b6fd
.org 0x19a6c
	b.n 0x19a98	@ 00019a6c 14e0
.org 0x19a6e
	.byte 0x00	@ 00019a6e data
.org 0x19a6f
	.byte 0x00	@ 00019a6f data
.org 0x19a70
	.byte 0xb0,0x0a,0x00,0x02	@ 00019a70 data
.org 0x19a74
	.byte 0x28,0xd0,0x02,0x00	@ 00019a74 data
.org 0x19a78
	.byte 0xd4,0x07,0x00,0x00	@ 00019a78 data
.org 0x19a7c
	ldr r0, [pc, #84]	@ 00019a7c 1548
.org 0x19a7e
	ldr r1, [pc, #88]	@ 00019a7e 1649
.org 0x19a80
	adds r2, r0, r1	@ 00019a80 4218
.org 0x19a82
	ldrh r1, [r2, #0]	@ 00019a82 1188
.org 0x19a84
	movs r0, #32	@ 00019a84 2020
.org 0x19a86
	ands r0, r1	@ 00019a86 0840
.org 0x19a88
	cmp r0, #0	@ 00019a88 0028
.org 0x19a8a
	beq.n 0x19a98	@ 00019a8a 05d0
.org 0x19a8c
	movs r0, #32	@ 00019a8c 2020
.org 0x19a8e
	eors r0, r1	@ 00019a8e 4840
.org 0x19a90
	strh r0, [r2, #0]	@ 00019a90 1080
.org 0x19a92
	movs r0, #189	@ 00019a92 bd20
.org 0x19a94
	bl 0x2624	@ 00019a94 e8f7c6fd
.org 0x19a98
	ldr r2, [pc, #56]	@ 00019a98 0e4a
.org 0x19a9a
	ldr r1, [pc, #64]	@ 00019a9a 1049
.org 0x19a9c
	adds r0, r2, r1	@ 00019a9c 5018
.org 0x19a9e
	ldrh r1, [r0, #0]	@ 00019a9e 0188
.org 0x19aa0
	lsrs r0, r1, #8	@ 00019aa0 080a
.org 0x19aa2
	cmp r0, #14	@ 00019aa2 0e28
.org 0x19aa4
	bne.n 0x19ae0	@ 00019aa4 1cd1
.org 0x19aa6
	movs r0, #255	@ 00019aa6 ff20
.org 0x19aa8
	ands r0, r1	@ 00019aa8 0840
.org 0x19aaa
	cmp r0, #7	@ 00019aaa 0728
.org 0x19aac
	bne.n 0x19ae0	@ 00019aac 18d1
.org 0x19aae
	ldr r0, [pc, #40]	@ 00019aae 0a48
.org 0x19ab0
	adds r2, r2, r0	@ 00019ab0 1218
.org 0x19ab2
	ldrh r1, [r2, #0]	@ 00019ab2 1188
.org 0x19ab4
	movs r0, #64	@ 00019ab4 4020
.org 0x19ab6
	ands r0, r1	@ 00019ab6 0840
.org 0x19ab8
	cmp r0, #0	@ 00019ab8 0028
.org 0x19aba
	bne.n 0x19aca	@ 00019aba 06d1
.org 0x19abc
	movs r0, #64	@ 00019abc 4020
.org 0x19abe
	orrs r0, r1	@ 00019abe 0843
.org 0x19ac0
	strh r0, [r2, #0]	@ 00019ac0 1080
.org 0x19ac2
	movs r0, #190	@ 00019ac2 be20
.org 0x19ac4
	movs r1, #0	@ 00019ac4 0021
.org 0x19ac6
	bl 0x249c	@ 00019ac6 e8f7e9fc
.org 0x19aca
	movs r0, #190	@ 00019aca be20
.org 0x19acc
	bl 0x25d8	@ 00019acc e8f784fd
.org 0x19ad0
	b.n 0x19afc	@ 00019ad0 14e0
.org 0x19ad2
	.byte 0x00	@ 00019ad2 data
.org 0x19ad3
	.byte 0x00	@ 00019ad3 data
.org 0x19ad4
	.byte 0xb0,0x0a,0x00,0x02	@ 00019ad4 data
.org 0x19ad8
	.byte 0x28,0xd0,0x02,0x00	@ 00019ad8 data
.org 0x19adc
	.byte 0xd4,0x07,0x00,0x00	@ 00019adc data
.org 0x19ae0
	ldr r0, [pc, #84]	@ 00019ae0 1548
.org 0x19ae2
	ldr r1, [pc, #88]	@ 00019ae2 1649
.org 0x19ae4
	adds r2, r0, r1	@ 00019ae4 4218
.org 0x19ae6
	ldrh r1, [r2, #0]	@ 00019ae6 1188
.org 0x19ae8
	movs r0, #64	@ 00019ae8 4020
.org 0x19aea
	ands r0, r1	@ 00019aea 0840
.org 0x19aec
	cmp r0, #0	@ 00019aec 0028
.org 0x19aee
	beq.n 0x19afc	@ 00019aee 05d0
.org 0x19af0
	movs r0, #64	@ 00019af0 4020
.org 0x19af2
	eors r0, r1	@ 00019af2 4840
.org 0x19af4
	strh r0, [r2, #0]	@ 00019af4 1080
.org 0x19af6
	movs r0, #190	@ 00019af6 be20
.org 0x19af8
	bl 0x2624	@ 00019af8 e8f794fd
.org 0x19afc
	ldr r2, [pc, #56]	@ 00019afc 0e4a
.org 0x19afe
	ldr r1, [pc, #64]	@ 00019afe 1049
.org 0x19b00
	adds r0, r2, r1	@ 00019b00 5018
.org 0x19b02
	ldrh r1, [r0, #0]	@ 00019b02 0188
.org 0x19b04
	lsrs r0, r1, #8	@ 00019b04 080a
.org 0x19b06
	cmp r0, #14	@ 00019b06 0e28
.org 0x19b08
	bne.n 0x19b44	@ 00019b08 1cd1
.org 0x19b0a
	movs r0, #255	@ 00019b0a ff20
.org 0x19b0c
	ands r0, r1	@ 00019b0c 0840
.org 0x19b0e
	cmp r0, #8	@ 00019b0e 0828
.org 0x19b10
	bne.n 0x19b44	@ 00019b10 18d1
.org 0x19b12
	ldr r0, [pc, #40]	@ 00019b12 0a48
.org 0x19b14
	adds r2, r2, r0	@ 00019b14 1218
.org 0x19b16
	ldrh r1, [r2, #0]	@ 00019b16 1188
.org 0x19b18
	movs r0, #128	@ 00019b18 8020
.org 0x19b1a
	ands r0, r1	@ 00019b1a 0840
.org 0x19b1c
	cmp r0, #0	@ 00019b1c 0028
.org 0x19b1e
	bne.n 0x19b2e	@ 00019b1e 06d1
.org 0x19b20
	movs r0, #128	@ 00019b20 8020
.org 0x19b22
	orrs r0, r1	@ 00019b22 0843
.org 0x19b24
	strh r0, [r2, #0]	@ 00019b24 1080
.org 0x19b26
	movs r0, #191	@ 00019b26 bf20
.org 0x19b28
	movs r1, #0	@ 00019b28 0021
.org 0x19b2a
	bl 0x249c	@ 00019b2a e8f7b7fc
.org 0x19b2e
	movs r0, #191	@ 00019b2e bf20
.org 0x19b30
	bl 0x25d8	@ 00019b30 e8f752fd
.org 0x19b34
	b.n 0x19b60	@ 00019b34 14e0
.org 0x19b36
	.byte 0x00	@ 00019b36 data
.org 0x19b37
	.byte 0x00	@ 00019b37 data
.org 0x19b38
	.byte 0xb0,0x0a,0x00,0x02	@ 00019b38 data
.org 0x19b3c
	.byte 0x28,0xd0,0x02,0x00	@ 00019b3c data
.org 0x19b40
	.byte 0xd6,0x07,0x00,0x00	@ 00019b40 data
.org 0x19b44
	ldr r0, [pc, #88]	@ 00019b44 1648
.org 0x19b46
	ldr r1, [pc, #92]	@ 00019b46 1749
.org 0x19b48
	adds r2, r0, r1	@ 00019b48 4218
.org 0x19b4a
	ldrh r1, [r2, #0]	@ 00019b4a 1188
.org 0x19b4c
	movs r0, #128	@ 00019b4c 8020
.org 0x19b4e
	ands r0, r1	@ 00019b4e 0840
.org 0x19b50
	cmp r0, #0	@ 00019b50 0028
.org 0x19b52
	beq.n 0x19b60	@ 00019b52 05d0
.org 0x19b54
	movs r0, #128	@ 00019b54 8020
.org 0x19b56
	eors r0, r1	@ 00019b56 4840
.org 0x19b58
	strh r0, [r2, #0]	@ 00019b58 1080
.org 0x19b5a
	movs r0, #191	@ 00019b5a bf20
.org 0x19b5c
	bl 0x2624	@ 00019b5c e8f762fd
.org 0x19b60
	ldr r2, [pc, #60]	@ 00019b60 0f4a
.org 0x19b62
	ldr r1, [pc, #68]	@ 00019b62 1149
.org 0x19b64
	adds r0, r2, r1	@ 00019b64 5018
.org 0x19b66
	ldrh r1, [r0, #0]	@ 00019b66 0188
.org 0x19b68
	lsrs r0, r1, #8	@ 00019b68 080a
.org 0x19b6a
	cmp r0, #14	@ 00019b6a 0e28
.org 0x19b6c
	bne.n 0x19bac	@ 00019b6c 1ed1
.org 0x19b6e
	movs r0, #255	@ 00019b6e ff20
.org 0x19b70
	ands r0, r1	@ 00019b70 0840
.org 0x19b72
	cmp r0, #9	@ 00019b72 0928
.org 0x19b74
	bne.n 0x19bac	@ 00019b74 1ad1
.org 0x19b76
	ldr r0, [pc, #44]	@ 00019b76 0b48
.org 0x19b78
	adds r3, r2, r0	@ 00019b78 1318
.org 0x19b7a
	ldrh r1, [r3, #0]	@ 00019b7a 1988
.org 0x19b7c
	movs r2, #128	@ 00019b7c 8022
.org 0x19b7e
	lsls r2, r2, #1	@ 00019b7e 5200
.org 0x19b80
	adds r0, r2, #0	@ 00019b80 101c
.org 0x19b82
	ands r0, r1	@ 00019b82 0840
.org 0x19b84
	cmp r0, #0	@ 00019b84 0028
.org 0x19b86
	bne.n 0x19b96	@ 00019b86 06d1
.org 0x19b88
	adds r0, r2, #0	@ 00019b88 101c
.org 0x19b8a
	orrs r0, r1	@ 00019b8a 0843
.org 0x19b8c
	strh r0, [r3, #0]	@ 00019b8c 1880
.org 0x19b8e
	movs r0, #192	@ 00019b8e c020
.org 0x19b90
	movs r1, #0	@ 00019b90 0021
.org 0x19b92
	bl 0x249c	@ 00019b92 e8f783fc
.org 0x19b96
	movs r0, #192	@ 00019b96 c020
.org 0x19b98
	bl 0x25d8	@ 00019b98 e8f71efd
.org 0x19b9c
	b.n 0x19bcc	@ 00019b9c 16e0
.org 0x19b9e
	.byte 0x00	@ 00019b9e data
.org 0x19b9f
	.byte 0x00	@ 00019b9f data
.org 0x19ba0
	.byte 0xb0,0x0a,0x00,0x02	@ 00019ba0 data
.org 0x19ba4
	.byte 0x28,0xd0,0x02,0x00	@ 00019ba4 data
.org 0x19ba8
	.byte 0xd4,0x07,0x00,0x00	@ 00019ba8 data
.org 0x19bac
	ldr r0, [pc, #92]	@ 00019bac 1748
.org 0x19bae
	ldr r1, [pc, #96]	@ 00019bae 1849
.org 0x19bb0
	adds r3, r0, r1	@ 00019bb0 4318
.org 0x19bb2
	ldrh r1, [r3, #0]	@ 00019bb2 1988
.org 0x19bb4
	movs r2, #128	@ 00019bb4 8022
.org 0x19bb6
	lsls r2, r2, #1	@ 00019bb6 5200
.org 0x19bb8
	adds r0, r2, #0	@ 00019bb8 101c
.org 0x19bba
	ands r0, r1	@ 00019bba 0840
.org 0x19bbc
	cmp r0, #0	@ 00019bbc 0028
.org 0x19bbe
	beq.n 0x19bcc	@ 00019bbe 05d0
.org 0x19bc0
	adds r0, r2, #0	@ 00019bc0 101c
.org 0x19bc2
	eors r0, r1	@ 00019bc2 4840
.org 0x19bc4
	strh r0, [r3, #0]	@ 00019bc4 1880
.org 0x19bc6
	movs r0, #192	@ 00019bc6 c020
.org 0x19bc8
	bl 0x2624	@ 00019bc8 e8f72cfd
.org 0x19bcc
	ldr r2, [pc, #60]	@ 00019bcc 0f4a
.org 0x19bce
	ldr r1, [pc, #68]	@ 00019bce 1149
.org 0x19bd0
	adds r0, r2, r1	@ 00019bd0 5018
.org 0x19bd2
	ldrh r1, [r0, #0]	@ 00019bd2 0188
.org 0x19bd4
	lsrs r0, r1, #8	@ 00019bd4 080a
.org 0x19bd6
	cmp r0, #14	@ 00019bd6 0e28
.org 0x19bd8
	bne.n 0x19c18	@ 00019bd8 1ed1
.org 0x19bda
	movs r0, #255	@ 00019bda ff20
.org 0x19bdc
	ands r0, r1	@ 00019bdc 0840
.org 0x19bde
	cmp r0, #10	@ 00019bde 0a28
.org 0x19be0
	bne.n 0x19c18	@ 00019be0 1ad1
.org 0x19be2
	ldr r0, [pc, #44]	@ 00019be2 0b48
.org 0x19be4
	adds r3, r2, r0	@ 00019be4 1318
.org 0x19be6
	ldrh r1, [r3, #0]	@ 00019be6 1988
.org 0x19be8
	movs r2, #128	@ 00019be8 8022
.org 0x19bea
	lsls r2, r2, #2	@ 00019bea 9200
.org 0x19bec
	adds r0, r2, #0	@ 00019bec 101c
.org 0x19bee
	ands r0, r1	@ 00019bee 0840
.org 0x19bf0
	cmp r0, #0	@ 00019bf0 0028
.org 0x19bf2
	bne.n 0x19c02	@ 00019bf2 06d1
.org 0x19bf4
	adds r0, r2, #0	@ 00019bf4 101c
.org 0x19bf6
	orrs r0, r1	@ 00019bf6 0843
.org 0x19bf8
	strh r0, [r3, #0]	@ 00019bf8 1880
.org 0x19bfa
	movs r0, #195	@ 00019bfa c320
.org 0x19bfc
	movs r1, #0	@ 00019bfc 0021
.org 0x19bfe
	bl 0x249c	@ 00019bfe e8f74dfc
.org 0x19c02
	movs r0, #195	@ 00019c02 c320
