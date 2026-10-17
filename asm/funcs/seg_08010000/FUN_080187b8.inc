@ FUN_080187b8  entry 0x080187b8  size 630
.thumb
.org 0x187b8
FUN_080187b8:
	push {r4, r5, r6, r7, lr}	@ 000187b8 f0b5
.org 0x187ba
	mov r7, sl	@ 000187ba 5746
.org 0x187bc
	mov r6, r9	@ 000187bc 4e46
.org 0x187be
	mov r5, r8	@ 000187be 4546
.org 0x187c0
	push {r5, r6, r7}	@ 000187c0 e0b4
.org 0x187c2
	sub sp, #8	@ 000187c2 82b0
.org 0x187c4
	adds r7, r0, #0	@ 000187c4 071c
.org 0x187c6
	movs r4, #159	@ 000187c6 9f24
.org 0x187c8
	movs r0, #160	@ 000187c8 a020
.org 0x187ca
	lsls r0, r0, #2	@ 000187ca 8000
.org 0x187cc
	bl 0xa70	@ 000187cc e8f750f9
.org 0x187d0
	mov r8, r0	@ 000187d0 8046
.org 0x187d2
	cmp r0, #0	@ 000187d2 0028
.org 0x187d4
	bne.n 0x187d8	@ 000187d4 00d1
.org 0x187d6
	b.n 0x18998	@ 000187d6 dfe0
.org 0x187d8
	ldr r2, [pc, #596]	@ 000187d8 954a
.org 0x187da
	movs r1, #186	@ 000187da ba21
.org 0x187dc
	lsls r1, r1, #1	@ 000187dc 4900
.org 0x187de
	adds r0, r2, r1	@ 000187de 5018
.org 0x187e0
	mov r3, r8	@ 000187e0 4346
.org 0x187e2
	str r3, [r0, #0]	@ 000187e2 0360
.org 0x187e4
	movs r6, #188	@ 000187e4 bc26
.org 0x187e6
	lsls r6, r6, #1	@ 000187e6 7600
.org 0x187e8
	adds r1, r2, r6	@ 000187e8 9119
.org 0x187ea
	ldr r0, [pc, #584]	@ 000187ea 9248
.org 0x187ec
	str r0, [r1, #0]	@ 000187ec 0860
.org 0x187ee
	movs r0, #190	@ 000187ee be20
.org 0x187f0
	lsls r0, r0, #1	@ 000187f0 4000
.org 0x187f2
	adds r1, r2, r0	@ 000187f2 1118
.org 0x187f4
	ldr r0, [pc, #576]	@ 000187f4 9048
.org 0x187f6
	str r0, [r1, #0]	@ 000187f6 0860
.org 0x187f8
	ldr r3, [r7, #56]	@ 000187f8 bb6b
.org 0x187fa
	ldr r1, [pc, #576]	@ 000187fa 9049
.org 0x187fc
	adds r3, r3, r1	@ 000187fc 5b18
.org 0x187fe
	lsls r3, r3, #16	@ 000187fe 1b04
.org 0x18800
	adds r0, r7, #0	@ 00018800 381c
.org 0x18802
	adds r0, #104	@ 00018802 6830
.org 0x18804
	ldrh r0, [r0, #0]	@ 00018804 0088
.org 0x18806
	lsrs r0, r0, #4	@ 00018806 0009
.org 0x18808
	ldr r1, [r7, #112]	@ 00018808 396f
.org 0x1880a
	ldr r2, [r7, #52]	@ 0001880a 7a6b
.org 0x1880c
	subs r1, r1, r2	@ 0001880c 891a
.org 0x1880e
	subs r0, r0, r1	@ 0001880e 401a
.org 0x18810
	lsls r0, r0, #16	@ 00018810 0004
.org 0x18812
	lsrs r5, r0, #16	@ 00018812 050c
.org 0x18814
	lsrs r2, r3, #16	@ 00018814 1a0c
.org 0x18816
	mov r9, r2	@ 00018816 9146
.org 0x18818
	asrs r3, r3, #16	@ 00018818 1b14
.org 0x1881a
	adds r0, r3, #0	@ 0001881a 181c
.org 0x1881c
	adds r0, #159	@ 0001881c 9f30
.org 0x1881e
	movs r6, #106	@ 0001881e 6a26
.org 0x18820
	adds r6, r6, r7	@ 00018820 f619
.org 0x18822
	mov sl, r6	@ 00018822 b246
.org 0x18824
	adds r1, r7, #0	@ 00018824 391c
.org 0x18826
	adds r1, #108	@ 00018826 6c31
.org 0x18828
	str r1, [sp, #0]	@ 00018828 0091
.org 0x1882a
	adds r2, r7, #0	@ 0001882a 3a1c
.org 0x1882c
	adds r2, #110	@ 0001882c 6e32
.org 0x1882e
	str r2, [sp, #4]	@ 0001882e 0192
.org 0x18830
	cmp r0, #255	@ 00018830 ff28
.org 0x18832
	ble.n 0x1885a	@ 00018832 12dd
.org 0x18834
	adds r6, r5, #0	@ 00018834 2e1c
.org 0x18836
	ldr r2, [pc, #520]	@ 00018836 824a
.org 0x18838
	movs r1, #159	@ 00018838 9f21
.org 0x1883a
	lsls r1, r1, #2	@ 0001883a 8900
.org 0x1883c
	add r1, r8	@ 0001883c 4144
.org 0x1883e
	movs r0, #128	@ 0001883e 8020
.org 0x18840
	lsls r0, r0, #9	@ 00018840 4002
.org 0x18842
	mov ip, r0	@ 00018842 8446
.org 0x18844
	adds r0, r2, #0	@ 00018844 101c
.org 0x18846
	orrs r0, r6	@ 00018846 3043
.org 0x18848
	str r0, [r1, #0]	@ 00018848 0860
.org 0x1884a
	add r2, ip	@ 0001884a 6244
.org 0x1884c
	subs r1, #4	@ 0001884c 0439
.org 0x1884e
	subs r4, #1	@ 0001884e 013c
.org 0x18850
	adds r0, r3, r4	@ 00018850 1819
.org 0x18852
	cmp r0, #255	@ 00018852 ff28
.org 0x18854
	ble.n 0x1885a	@ 00018854 01dd
.org 0x18856
	cmp r4, #0	@ 00018856 002c
.org 0x18858
	bge.n 0x18844	@ 00018858 f4da
.org 0x1885a
	mov r1, r9	@ 0001885a 4946
.org 0x1885c
	lsls r3, r1, #16	@ 0001885c 0b04
.org 0x1885e
	asrs r0, r3, #16	@ 0001885e 1814
.org 0x18860
	adds r0, r0, r4	@ 00018860 0019
.org 0x18862
	cmp r0, #119	@ 00018862 7728
.org 0x18864
	ble.n 0x18886	@ 00018864 0fdd
.org 0x18866
	cmp r4, #0	@ 00018866 002c
.org 0x18868
	blt.n 0x18886	@ 00018868 0ddb
.org 0x1886a
	lsls r0, r4, #2	@ 0001886a a000
.org 0x1886c
	mov r6, r8	@ 0001886c 4646
.org 0x1886e
	adds r2, r0, r6	@ 0001886e 8219
.org 0x18870
	asrs r1, r3, #16	@ 00018870 1914
.org 0x18872
	adds r0, r3, #0	@ 00018872 181c
.org 0x18874
	orrs r0, r5	@ 00018874 2843
.org 0x18876
	str r0, [r2, #0]	@ 00018876 1060
.org 0x18878
	subs r2, #4	@ 00018878 043a
.org 0x1887a
	subs r4, #1	@ 0001887a 013c
.org 0x1887c
	adds r1, r1, r4	@ 0001887c 0919
.org 0x1887e
	cmp r1, #119	@ 0001887e 7729
.org 0x18880
	ble.n 0x18886	@ 00018880 01dd
.org 0x18882
	cmp r4, #0	@ 00018882 002c
.org 0x18884
	bge.n 0x18870	@ 00018884 f4da
.org 0x18886
	mov r1, sl	@ 00018886 5146
.org 0x18888
	ldrh r0, [r1, #0]	@ 00018888 0888
.org 0x1888a
	lsrs r0, r0, #4	@ 0001888a 0009
.org 0x1888c
	ldr r1, [r7, #52]	@ 0001888c 796b
.org 0x1888e
	asrs r1, r1, #6	@ 0001888e 8911
.org 0x18890
	adds r0, r0, r1	@ 00018890 4018
.org 0x18892
	lsls r0, r0, #16	@ 00018892 0004
.org 0x18894
	lsrs r5, r0, #16	@ 00018894 050c
.org 0x18896
	ldr r0, [r7, #56]	@ 00018896 b86b
.org 0x18898
	subs r0, #224	@ 00018898 e038
.org 0x1889a
	movs r1, #6	@ 0001889a 0621
.org 0x1889c
	bl 0x128fb8	@ 0001889c 10f18cfb
.org 0x188a0
	subs r0, #40	@ 000188a0 2838
.org 0x188a2
	lsls r0, r0, #16	@ 000188a2 0004
.org 0x188a4
	lsrs r2, r0, #16	@ 000188a4 020c
.org 0x188a6
	mov r9, r2	@ 000188a6 9146
.org 0x188a8
	asrs r1, r0, #16	@ 000188a8 0114
.org 0x188aa
	adds r0, r1, r4	@ 000188aa 0819
.org 0x188ac
	cmp r0, #63	@ 000188ac 3f28
.org 0x188ae
	ble.n 0x188da	@ 000188ae 14dd
.org 0x188b0
	cmp r4, #0	@ 000188b0 002c
.org 0x188b2
	blt.n 0x188da	@ 000188b2 12db
.org 0x188b4
	adds r3, r1, #0	@ 000188b4 0b1c
.org 0x188b6
	lsls r0, r4, #16	@ 000188b6 2004
.org 0x188b8
	movs r1, #160	@ 000188b8 a021
.org 0x188ba
	lsls r1, r1, #17	@ 000188ba 4904
.org 0x188bc
	subs r1, r1, r0	@ 000188bc 091a
.org 0x188be
	lsls r0, r4, #2	@ 000188be a000
.org 0x188c0
	mov r6, r8	@ 000188c0 4646
.org 0x188c2
	adds r2, r0, r6	@ 000188c2 8219
.org 0x188c4
	movs r6, #128	@ 000188c4 8026
.org 0x188c6
	lsls r6, r6, #9	@ 000188c6 7602
.org 0x188c8
	str r1, [r2, #0]	@ 000188c8 1160
.org 0x188ca
	adds r1, r1, r6	@ 000188ca 8919
.org 0x188cc
	subs r2, #4	@ 000188cc 043a
.org 0x188ce
	subs r4, #1	@ 000188ce 013c
.org 0x188d0
	adds r0, r3, r4	@ 000188d0 1819
.org 0x188d2
	cmp r0, #63	@ 000188d2 3f28
.org 0x188d4
	ble.n 0x188da	@ 000188d4 01dd
.org 0x188d6
	cmp r4, #0	@ 000188d6 002c
.org 0x188d8
	bge.n 0x188c8	@ 000188d8 f6da
.org 0x188da
	mov r0, r9	@ 000188da 4846
.org 0x188dc
	lsls r3, r0, #16	@ 000188dc 0304
.org 0x188de
	asrs r0, r3, #16	@ 000188de 1814
.org 0x188e0
	adds r0, r0, r4	@ 000188e0 0019
.org 0x188e2
	adds r6, r3, #0	@ 000188e2 1e1c
.org 0x188e4
	cmp r0, #55	@ 000188e4 3728
.org 0x188e6
	ble.n 0x18908	@ 000188e6 0fdd
.org 0x188e8
	cmp r4, #0	@ 000188e8 002c
.org 0x188ea
	blt.n 0x18908	@ 000188ea 0ddb
.org 0x188ec
	lsls r0, r4, #2	@ 000188ec a000
.org 0x188ee
	mov r1, r8	@ 000188ee 4146
.org 0x188f0
	adds r2, r0, r1	@ 000188f0 4218
.org 0x188f2
	asrs r1, r3, #16	@ 000188f2 1914
.org 0x188f4
	adds r0, r3, #0	@ 000188f4 181c
.org 0x188f6
	orrs r0, r5	@ 000188f6 2843
.org 0x188f8
	str r0, [r2, #0]	@ 000188f8 1060
.org 0x188fa
	subs r2, #4	@ 000188fa 043a
.org 0x188fc
	subs r4, #1	@ 000188fc 013c
.org 0x188fe
	adds r1, r1, r4	@ 000188fe 0919
.org 0x18900
	cmp r1, #55	@ 00018900 3729
.org 0x18902
	ble.n 0x18908	@ 00018902 01dd
.org 0x18904
	cmp r4, #0	@ 00018904 002c
.org 0x18906
	bge.n 0x188f2	@ 00018906 f4da
.org 0x18908
	ldr r2, [sp, #0]	@ 00018908 009a
.org 0x1890a
	ldrh r0, [r2, #0]	@ 0001890a 1088
.org 0x1890c
	lsrs r0, r0, #4	@ 0001890c 0009
.org 0x1890e
	ldr r1, [r7, #52]	@ 0001890e 796b
.org 0x18910
	asrs r1, r1, #5	@ 00018910 4911
.org 0x18912
	adds r0, r0, r1	@ 00018912 4018
.org 0x18914
	lsls r0, r0, #16	@ 00018914 0004
.org 0x18916
	lsrs r5, r0, #16	@ 00018916 050c
.org 0x18918
	adds r3, r6, #0	@ 00018918 331c
.org 0x1891a
	asrs r0, r6, #16	@ 0001891a 3014
.org 0x1891c
	adds r0, r0, r4	@ 0001891c 0019
.org 0x1891e
	cmp r0, #39	@ 0001891e 2728
.org 0x18920
	ble.n 0x18942	@ 00018920 0fdd
.org 0x18922
	cmp r4, #0	@ 00018922 002c
.org 0x18924
	blt.n 0x18942	@ 00018924 0ddb
.org 0x18926
	lsls r0, r4, #2	@ 00018926 a000
.org 0x18928
	mov r1, r8	@ 00018928 4146
.org 0x1892a
	adds r2, r0, r1	@ 0001892a 4218
.org 0x1892c
	asrs r1, r3, #16	@ 0001892c 1914
.org 0x1892e
	adds r0, r3, #0	@ 0001892e 181c
.org 0x18930
	orrs r0, r5	@ 00018930 2843
.org 0x18932
	str r0, [r2, #0]	@ 00018932 1060
.org 0x18934
	subs r2, #4	@ 00018934 043a
.org 0x18936
	subs r4, #1	@ 00018936 013c
.org 0x18938
	adds r1, r1, r4	@ 00018938 0919
.org 0x1893a
	cmp r1, #39	@ 0001893a 2729
.org 0x1893c
	ble.n 0x18942	@ 0001893c 01dd
.org 0x1893e
	cmp r4, #0	@ 0001893e 002c
.org 0x18940
	bge.n 0x1892c	@ 00018940 f4da
.org 0x18942
	ldr r2, [sp, #4]	@ 00018942 019a
.org 0x18944
	ldrh r0, [r2, #0]	@ 00018944 1088
.org 0x18946
	lsrs r0, r0, #4	@ 00018946 0009
.org 0x18948
	ldr r1, [r7, #52]	@ 00018948 796b
.org 0x1894a
	asrs r1, r1, #4	@ 0001894a 0911
.org 0x1894c
	adds r0, r0, r1	@ 0001894c 4018
.org 0x1894e
	lsls r0, r0, #16	@ 0001894e 0004
.org 0x18950
	lsrs r5, r0, #16	@ 00018950 050c
.org 0x18952
	adds r3, r6, #0	@ 00018952 331c
.org 0x18954
	asrs r0, r3, #16	@ 00018954 1814
.org 0x18956
	adds r0, r0, r4	@ 00018956 0019
.org 0x18958
	cmp r0, #7	@ 00018958 0728
.org 0x1895a
	ble.n 0x1897c	@ 0001895a 0fdd
.org 0x1895c
	cmp r4, #0	@ 0001895c 002c
.org 0x1895e
	blt.n 0x18998	@ 0001895e 1bdb
.org 0x18960
	lsls r0, r4, #2	@ 00018960 a000
.org 0x18962
	mov r6, r8	@ 00018962 4646
.org 0x18964
	adds r2, r0, r6	@ 00018964 8219
.org 0x18966
	asrs r1, r3, #16	@ 00018966 1914
.org 0x18968
	adds r0, r3, #0	@ 00018968 181c
.org 0x1896a
	orrs r0, r5	@ 0001896a 2843
.org 0x1896c
	str r0, [r2, #0]	@ 0001896c 1060
.org 0x1896e
	subs r2, #4	@ 0001896e 043a
.org 0x18970
	subs r4, #1	@ 00018970 013c
.org 0x18972
	adds r1, r1, r4	@ 00018972 0919
.org 0x18974
	cmp r1, #7	@ 00018974 0729
.org 0x18976
	ble.n 0x1897c	@ 00018976 01dd
.org 0x18978
	cmp r4, #0	@ 00018978 002c
.org 0x1897a
	bge.n 0x18966	@ 0001897a f4da
.org 0x1897c
	cmp r4, #0	@ 0001897c 002c
.org 0x1897e
	blt.n 0x18998	@ 0001897e 0bdb
.org 0x18980
	lsls r0, r4, #16	@ 00018980 2004
.org 0x18982
	negs r1, r0	@ 00018982 4142
.org 0x18984
	lsls r0, r4, #2	@ 00018984 a000
.org 0x18986
	add r0, r8	@ 00018986 4044
.org 0x18988
	movs r2, #128	@ 00018988 8022
.org 0x1898a
	lsls r2, r2, #9	@ 0001898a 5202
.org 0x1898c
	str r1, [r0, #0]	@ 0001898c 0160
.org 0x1898e
	adds r1, r1, r2	@ 0001898e 8918
.org 0x18990
	subs r0, #4	@ 00018990 0438
.org 0x18992
	subs r4, #1	@ 00018992 013c
.org 0x18994
	cmp r4, #0	@ 00018994 002c
.org 0x18996
	bge.n 0x1898c	@ 00018996 f9da
.org 0x18998
	movs r4, #159	@ 00018998 9f24
.org 0x1899a
	movs r0, #160	@ 0001899a a020
.org 0x1899c
	lsls r0, r0, #1	@ 0001899c 4000
.org 0x1899e
	bl 0xa70	@ 0001899e e8f767f8
.org 0x189a2
	adds r5, r0, #0	@ 000189a2 051c
.org 0x189a4
	cmp r5, #0	@ 000189a4 002d
.org 0x189a6
	beq.n 0x18a1e	@ 000189a6 3ad0
.org 0x189a8
	ldr r2, [pc, #132]	@ 000189a8 214a
.org 0x189aa
	movs r1, #200	@ 000189aa c821
.org 0x189ac
	lsls r1, r1, #1	@ 000189ac 4900
.org 0x189ae
	adds r0, r2, r1	@ 000189ae 5018
.org 0x189b0
	str r5, [r0, #0]	@ 000189b0 0560
.org 0x189b2
	movs r3, #202	@ 000189b2 ca23
.org 0x189b4
	lsls r3, r3, #1	@ 000189b4 5b00
.org 0x189b6
	adds r1, r2, r3	@ 000189b6 d118
.org 0x189b8
	ldr r0, [r7, #92]	@ 000189b8 f86d
.org 0x189ba
	lsrs r0, r0, #4	@ 000189ba 0009
.org 0x189bc
	lsls r0, r0, #1	@ 000189bc 4000
.org 0x189be
	ldr r6, [pc, #132]	@ 000189be 214e
.org 0x189c0
	adds r0, r0, r6	@ 000189c0 8019
.org 0x189c2
	str r0, [r1, #0]	@ 000189c2 0860
.org 0x189c4
	movs r0, #204	@ 000189c4 cc20
.org 0x189c6
	lsls r0, r0, #1	@ 000189c6 4000
.org 0x189c8
	adds r1, r2, r0	@ 000189c8 1118
.org 0x189ca
	ldr r0, [pc, #124]	@ 000189ca 1f48
.org 0x189cc
	str r0, [r1, #0]	@ 000189cc 0860
.org 0x189ce
	ldr r1, [r7, #100]	@ 000189ce 796e
.org 0x189d0
	movs r2, #71	@ 000189d0 4722
.org 0x189d2
	adds r0, r1, #0	@ 000189d2 081c
.org 0x189d4
	orrs r0, r2	@ 000189d4 1043
.org 0x189d6
	lsls r0, r0, #16	@ 000189d6 0004
.org 0x189d8
	lsrs r6, r0, #16	@ 000189d8 060c
.org 0x189da
	movs r0, #69	@ 000189da 4520
.org 0x189dc
	orrs r1, r0	@ 000189dc 0143
.org 0x189de
	lsls r1, r1, #16	@ 000189de 0904
.org 0x189e0
	lsrs r1, r1, #16	@ 000189e0 090c
.org 0x189e2
	ldr r0, [r7, #56]	@ 000189e2 b86b
.org 0x189e4
	ldr r2, [pc, #84]	@ 000189e4 154a
.org 0x189e6
	adds r0, r0, r2	@ 000189e6 8018
.org 0x189e8
	lsls r0, r0, #16	@ 000189e8 0004
.org 0x189ea
	asrs r2, r0, #16	@ 000189ea 0214
.org 0x189ec
	adds r0, r2, #0	@ 000189ec 101c
.org 0x189ee
	adds r0, #159	@ 000189ee 9f30
.org 0x189f0
	cmp r0, #119	@ 000189f0 7728
.org 0x189f2
	ble.n 0x18a0c	@ 000189f2 0bdd
.org 0x189f4
	adds r3, r2, #0	@ 000189f4 131c
.org 0x189f6
	movs r0, #159	@ 000189f6 9f20
.org 0x189f8
	lsls r0, r0, #1	@ 000189f8 4000
.org 0x189fa
	adds r2, r5, r0	@ 000189fa 2a18
.org 0x189fc
	strh r1, [r2, #0]	@ 000189fc 1180
.org 0x189fe
	subs r2, #2	@ 000189fe 023a
.org 0x18a00
	subs r4, #1	@ 00018a00 013c
.org 0x18a02
	adds r0, r3, r4	@ 00018a02 1819
.org 0x18a04
	cmp r0, #119	@ 00018a04 7728
.org 0x18a06
	ble.n 0x18a0c	@ 00018a06 01dd
.org 0x18a08
	cmp r4, #0	@ 00018a08 002c
.org 0x18a0a
	bge.n 0x189fc	@ 00018a0a f7da
.org 0x18a0c
	cmp r4, #0	@ 00018a0c 002c
.org 0x18a0e
	blt.n 0x18a1e	@ 00018a0e 06db
.org 0x18a10
	lsls r0, r4, #1	@ 00018a10 6000
.org 0x18a12
	adds r0, r0, r5	@ 00018a12 4019
.org 0x18a14
	strh r6, [r0, #0]	@ 00018a14 0680
.org 0x18a16
	subs r0, #2	@ 00018a16 0238
.org 0x18a18
	subs r4, #1	@ 00018a18 013c
.org 0x18a1a
	cmp r4, #0	@ 00018a1a 002c
.org 0x18a1c
	bge.n 0x18a14	@ 00018a1c fada
.org 0x18a1e
	add sp, #8	@ 00018a1e 02b0
.org 0x18a20
	pop {r3, r4, r5}	@ 00018a20 38bc
.org 0x18a22
	mov r8, r3	@ 00018a22 9846
.org 0x18a24
	mov r9, r4	@ 00018a24 a146
.org 0x18a26
	mov sl, r5	@ 00018a26 aa46
.org 0x18a28
	pop {r4, r5, r6, r7}	@ 00018a28 f0bc
.org 0x18a2a
	pop {r0}	@ 00018a2a 01bc
.org 0x18a2c
	bx r0	@ 00018a2c 0047
