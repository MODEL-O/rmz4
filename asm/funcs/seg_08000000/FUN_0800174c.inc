@ FUN_0800174c  entry 0x0800174c  size 398
.thumb
.org 0x174c
FUN_0800174c:
	push {r4, r5, r6, r7, lr}	@ 0000174c f0b5
.org 0x174e
	mov r7, r9	@ 0000174e 4f46
.org 0x1750
	mov r6, r8	@ 00001750 4646
.org 0x1752
	push {r6, r7}	@ 00001752 c0b4
.org 0x1754
	sub sp, #16	@ 00001754 84b0
.org 0x1756
	adds r4, r0, #0	@ 00001756 041c
.org 0x1758
	movs r6, #8	@ 00001758 0826
.org 0x175a
	bl 0x1aa0	@ 0000175a 00f0a1f9
.org 0x175e
	ldrb r1, [r4, #3]	@ 0000175e e178
.org 0x1760
	cmp r1, #1	@ 00001760 0129
.org 0x1762
	beq.n 0x1784	@ 00001762 0fd0
.org 0x1764
	cmp r1, #1	@ 00001764 0129
.org 0x1766
	bgt.n 0x176e	@ 00001766 02dc
.org 0x1768
	cmp r1, #0	@ 00001768 0029
.org 0x176a
	beq.n 0x177a	@ 0000176a 06d0
.org 0x176c
	b.n 0x18da	@ 0000176c b5e0
.org 0x176e
	cmp r1, #2	@ 0000176e 0229
.org 0x1770
	beq.n 0x1854	@ 00001770 70d0
.org 0x1772
	cmp r1, #3	@ 00001772 0329
.org 0x1774
	bne.n 0x1778	@ 00001774 00d1
.org 0x1776
	b.n 0x18b4	@ 00001776 9de0
.org 0x1778
	b.n 0x18da	@ 00001778 afe0
.org 0x177a
	movs r0, #3	@ 0000177a 0320
.org 0x177c
	strh r0, [r4, #4]	@ 0000177c a080
.org 0x177e
	strh r1, [r4, #6]	@ 0000177e e180
.org 0x1780
	movs r0, #1	@ 00001780 0120
.org 0x1782
	strb r0, [r4, #3]	@ 00001782 e070
.org 0x1784
	ldrh r1, [r4, #6]	@ 00001784 e188
.org 0x1786
	lsls r0, r1, #1	@ 00001786 4800
.org 0x1788
	adds r0, r0, r1	@ 00001788 4018
.org 0x178a
	lsls r0, r0, #1	@ 0000178a 4000
.org 0x178c
	ldrb r1, [r4, #1]	@ 0000178c 6178
.org 0x178e
	adds r0, r0, r1	@ 0000178e 4018
.org 0x1790
	lsls r1, r0, #2	@ 00001790 8100
.org 0x1792
	adds r1, r1, r0	@ 00001792 0918
.org 0x1794
	lsls r0, r1, #4	@ 00001794 0801
.org 0x1796
	adds r1, r1, r0	@ 00001796 0918
.org 0x1798
	str r1, [r4, #16]	@ 00001798 2161
.org 0x179a
	ldr r0, [r4, #20]	@ 0000179a 6069
.org 0x179c
	str r0, [r4, #24]	@ 0000179c a061
.org 0x179e
	adds r6, r0, #0	@ 0000179e 061c
.org 0x17a0
	ldr r0, [pc, #152]	@ 000017a0 2648
.org 0x17a2
	ldr r0, [r0, #0]	@ 000017a2 0068
.org 0x17a4
	str r0, [sp, #0]	@ 000017a4 0090
.org 0x17a6
	ldr r0, [r4, #8]	@ 000017a6 a068
.org 0x17a8
	str r0, [r4, #12]	@ 000017a8 e060
.org 0x17aa
	movs r1, #0	@ 000017aa 0021
.org 0x17ac
	str r1, [sp, #4]	@ 000017ac 0191
.org 0x17ae
	mov r0, sp	@ 000017ae 6846
.org 0x17b0
	strb r1, [r0, #12]	@ 000017b0 0173
.org 0x17b2
	mov ip, r6	@ 000017b2 b446
.org 0x17b4
	ldrb r2, [r4, #1]	@ 000017b4 6278
.org 0x17b6
	mov r9, r2	@ 000017b6 9146
.org 0x17b8
	cmp r6, #0	@ 000017b8 002e
.org 0x17ba
	beq.n 0x17f0	@ 000017ba 19d0
.org 0x17bc
	mov r5, sp	@ 000017bc 6d46
.org 0x17be
	movs r0, #7	@ 000017be 0720
.org 0x17c0
	mov r8, r0	@ 000017c0 8046
.org 0x17c2
	movs r7, #8	@ 000017c2 0827
.org 0x17c4
	ldr r3, [r4, #12]	@ 000017c4 e368
.org 0x17c6
	ldrb r1, [r3, #0]	@ 000017c6 1978
.org 0x17c8
	ldr r0, [sp, #4]	@ 000017c8 0198
.org 0x17ca
	adds r0, r0, r1	@ 000017ca 4018
.org 0x17cc
	str r0, [sp, #4]	@ 000017cc 0190
.org 0x17ce
	ldrb r2, [r3, #0]	@ 000017ce 1a78
.org 0x17d0
	adds r1, r6, #0	@ 000017d0 311c
.org 0x17d2
	mov r0, r8	@ 000017d2 4046
.org 0x17d4
	ands r1, r0	@ 000017d4 0140
.org 0x17d6
	adds r0, r2, #0	@ 000017d6 101c
.org 0x17d8
	lsls r0, r1	@ 000017d8 8840
.org 0x17da
	subs r1, r7, r1	@ 000017da 791a
.org 0x17dc
	asrs r2, r1	@ 000017dc 0a41
.org 0x17de
	orrs r0, r2	@ 000017de 1043
.org 0x17e0
	ldrb r1, [r5, #12]	@ 000017e0 297b
.org 0x17e2
	eors r0, r1	@ 000017e2 4840
.org 0x17e4
	strb r0, [r5, #12]	@ 000017e4 2873
.org 0x17e6
	subs r6, #1	@ 000017e6 013e
.org 0x17e8
	adds r3, #1	@ 000017e8 0133
.org 0x17ea
	str r3, [r4, #12]	@ 000017ea e360
.org 0x17ec
	cmp r6, #0	@ 000017ec 002e
.org 0x17ee
	bne.n 0x17c4	@ 000017ee e9d1
.org 0x17f0
	mov r1, ip	@ 000017f0 6146
.org 0x17f2
	str r1, [sp, #8]	@ 000017f2 0291
.org 0x17f4
	mov r1, sp	@ 000017f4 6946
.org 0x17f6
	movs r0, #8	@ 000017f6 0820
.org 0x17f8
	strb r0, [r1, #13]	@ 000017f8 4873
.org 0x17fa
	movs r0, #6	@ 000017fa 0620
.org 0x17fc
	strb r0, [r1, #14]	@ 000017fc 8873
.org 0x17fe
	mov r3, sp	@ 000017fe 6b46
.org 0x1800
	movs r1, #127	@ 00001800 7f21
.org 0x1802
	mov r2, r9	@ 00001802 4a46
.org 0x1804
	ands r1, r2	@ 00001804 1140
.org 0x1806
	ldrb r2, [r3, #15]	@ 00001806 da7b
.org 0x1808
	subs r0, #134	@ 00001808 8638
.org 0x180a
	ands r0, r2	@ 0000180a 1040
.org 0x180c
	orrs r0, r1	@ 0000180c 0843
.org 0x180e
	strb r0, [r3, #15]	@ 0000180e d873
.org 0x1810
	mov r2, sp	@ 00001810 6a46
.org 0x1812
	movs r1, #128	@ 00001812 8021
.org 0x1814
	orrs r0, r1	@ 00001814 0843
.org 0x1816
	strb r0, [r2, #15]	@ 00001816 d073
.org 0x1818
	ldrh r1, [r4, #16]	@ 00001818 218a
.org 0x181a
	mov r0, sp	@ 0000181a 6846
.org 0x181c
	movs r2, #16	@ 0000181c 1022
.org 0x181e
	bl 0x1bb0	@ 0000181e 00f0c7f9
.org 0x1822
	lsls r0, r0, #16	@ 00001822 0004
.org 0x1824
	cmp r0, #0	@ 00001824 0028
.org 0x1826
	beq.n 0x1844	@ 00001826 0dd0
.org 0x1828
	ldrh r0, [r4, #4]	@ 00001828 a088
.org 0x182a
	subs r0, #1	@ 0000182a 0138
.org 0x182c
	strh r0, [r4, #4]	@ 0000182c a080
.org 0x182e
	ldr r1, [pc, #16]	@ 0000182e 0449
.org 0x1830
	adds r2, r1, #0	@ 00001830 0a1c
.org 0x1832
	lsls r0, r0, #16	@ 00001832 0004
.org 0x1834
	cmp r0, #0	@ 00001834 0028
.org 0x1836
	bne.n 0x18da	@ 00001836 50d1
.org 0x1838
	b.n 0x188c	@ 00001838 28e0
.org 0x183a
	.byte 0x00	@ 0000183a data
.org 0x183b
	.byte 0x00	@ 0000183b data
.org 0x183c
	.byte 0x54,0x95,0x12,0x08	@ 0000183c data
.org 0x1840
	.byte 0xff,0xff,0x00,0x00	@ 00001840 data
.org 0x1844
	ldr r0, [r4, #8]	@ 00001844 a068
.org 0x1846
	str r0, [r4, #12]	@ 00001846 e060
.org 0x1848
	ldr r0, [r4, #16]	@ 00001848 2069
.org 0x184a
	adds r0, #2	@ 0000184a 0230
.org 0x184c
	str r0, [r4, #16]	@ 0000184c 2061
.org 0x184e
	movs r0, #2	@ 0000184e 0220
.org 0x1850
	strb r0, [r4, #3]	@ 00001850 e070
.org 0x1852
	b.n 0x18da	@ 00001852 42e0
.org 0x1854
	ldr r0, [r4, #24]	@ 00001854 a069
.org 0x1856
	cmp r0, #8	@ 00001856 0828
.org 0x1858
	bhi.n 0x1860	@ 00001858 02d8
.org 0x185a
	adds r6, r0, #0	@ 0000185a 061c
.org 0x185c
	movs r0, #3	@ 0000185c 0320
.org 0x185e
	strb r0, [r4, #3]	@ 0000185e e070
.org 0x1860
	ldr r0, [r4, #12]	@ 00001860 e068
.org 0x1862
	ldrh r1, [r4, #16]	@ 00001862 218a
.org 0x1864
	lsls r2, r6, #16	@ 00001864 3204
.org 0x1866
	asrs r2, r2, #16	@ 00001866 1214
.org 0x1868
	bl 0x1bb0	@ 00001868 00f0a2f9
.org 0x186c
	lsls r0, r0, #16	@ 0000186c 0004
.org 0x186e
	cmp r0, #0	@ 0000186e 0028
.org 0x1870
	beq.n 0x18a0	@ 00001870 16d0
.org 0x1872
	ldrh r0, [r4, #4]	@ 00001872 a088
.org 0x1874
	subs r0, #1	@ 00001874 0138
.org 0x1876
	strh r0, [r4, #4]	@ 00001876 a080
.org 0x1878
	ldr r1, [pc, #12]	@ 00001878 0349
.org 0x187a
	adds r2, r1, #0	@ 0000187a 0a1c
.org 0x187c
	lsls r0, r0, #16	@ 0000187c 0004
.org 0x187e
	cmp r0, #0	@ 0000187e 0028
.org 0x1880
	beq.n 0x188c	@ 00001880 04d0
.org 0x1882
	movs r0, #1	@ 00001882 0120
.org 0x1884
	strb r0, [r4, #3]	@ 00001884 e070
.org 0x1886
	b.n 0x18da	@ 00001886 28e0
.org 0x1888
	.byte 0xff,0xff,0x00,0x00	@ 00001888 data
.org 0x188c
	ldr r0, [pc, #12]	@ 0000188c 0348
.org 0x188e
	ldrh r1, [r0, #28]	@ 0000188e 818b
.org 0x1890
	orrs r1, r2	@ 00001890 1143
.org 0x1892
	strh r1, [r0, #28]	@ 00001892 8183
.org 0x1894
	movs r0, #3	@ 00001894 0320
.org 0x1896
	strb r0, [r4, #3]	@ 00001896 e070
.org 0x1898
	b.n 0x18da	@ 00001898 1fe0
.org 0x189a
	.byte 0x00	@ 0000189a data
.org 0x189b
	.byte 0x00	@ 0000189b data
.org 0x189c
	.byte 0x90,0x07,0x00,0x02	@ 0000189c data
.org 0x18a0
	ldr r0, [r4, #12]	@ 000018a0 e068
.org 0x18a2
	adds r0, r0, r6	@ 000018a2 8019
.org 0x18a4
	str r0, [r4, #12]	@ 000018a4 e060
.org 0x18a6
	ldr r0, [r4, #16]	@ 000018a6 2069
.org 0x18a8
	adds r0, #1	@ 000018a8 0130
.org 0x18aa
	str r0, [r4, #16]	@ 000018aa 2061
.org 0x18ac
	ldr r0, [r4, #24]	@ 000018ac a069
.org 0x18ae
	subs r0, r0, r6	@ 000018ae 801b
.org 0x18b0
	str r0, [r4, #24]	@ 000018b0 a061
.org 0x18b2
	b.n 0x18da	@ 000018b2 12e0
.org 0x18b4
	ldrh r0, [r4, #6]	@ 000018b4 e088
.org 0x18b6
	cmp r0, #0	@ 000018b6 0028
.org 0x18b8
	bne.n 0x18c6	@ 000018b8 05d1
.org 0x18ba
	strh r1, [r4, #4]	@ 000018ba a180
.org 0x18bc
	movs r1, #1	@ 000018bc 0121
.org 0x18be
	movs r0, #1	@ 000018be 0120
.org 0x18c0
	strh r0, [r4, #6]	@ 000018c0 e080
.org 0x18c2
	strb r1, [r4, #3]	@ 000018c2 e170
.org 0x18c4
	b.n 0x18da	@ 000018c4 09e0
.org 0x18c6
	ldr r1, [pc, #40]	@ 000018c6 0a49
.org 0x18c8
	movs r2, #28	@ 000018c8 1c22
.org 0x18ca
	ldrsh r0, [r1, r2]	@ 000018ca 885e
.org 0x18cc
	cmp r0, #0	@ 000018cc 0028
.org 0x18ce
	bne.n 0x18d4	@ 000018ce 01d1
.org 0x18d0
	movs r0, #1	@ 000018d0 0120
.org 0x18d2
	strh r0, [r1, #28]	@ 000018d2 8883
.org 0x18d4
	movs r0, #0	@ 000018d4 0020
.org 0x18d6
	strb r0, [r4, #0]	@ 000018d6 2070
.org 0x18d8
	strh r0, [r4, #2]	@ 000018d8 6080
