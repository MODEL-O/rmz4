@ FUN_080a185c  entry 0x080a185c  size 212
.thumb
.org 0xa185c
FUN_080a185c:
	push {r4, r5, r6, r7, lr}	@ 000a185c f0b5
.org 0xa185e
	mov r7, r8	@ 000a185e 4746
.org 0xa1860
	push {r7}	@ 000a1860 80b4
.org 0xa1862
	sub sp, #8	@ 000a1862 82b0
.org 0xa1864
	adds r7, r0, #0	@ 000a1864 071c
.org 0xa1866
	ldrb r0, [r7, #16]	@ 000a1866 387c
.org 0xa1868
	mov r8, r0	@ 000a1868 8046
.org 0xa186a
	movs r0, #42	@ 000a186a 2a20
.org 0xa186c
	bl 0x2b10	@ 000a186c 61f750f9
.org 0xa1870
	ldr r6, [pc, #188]	@ 000a1870 2f4e
.org 0xa1872
	ldr r0, [r6, #0]	@ 000a1872 3068
.org 0xa1874
	ldr r5, [pc, #188]	@ 000a1874 2f4d
.org 0xa1876
	muls r0, r5	@ 000a1876 6843
.org 0xa1878
	ldr r2, [pc, #188]	@ 000a1878 2f4a
.org 0xa187a
	adds r0, r0, r2	@ 000a187a 8018
.org 0xa187c
	lsls r0, r0, #1	@ 000a187c 4000
.org 0xa187e
	lsrs r4, r0, #1	@ 000a187e 4408
.org 0xa1880
	lsrs r0, r0, #17	@ 000a1880 400c
.org 0xa1882
	movs r3, #7	@ 000a1882 0723
.org 0xa1884
	ands r0, r3	@ 000a1884 1840
.org 0xa1886
	subs r0, #3	@ 000a1886 0338
.org 0xa1888
	lsls r0, r0, #8	@ 000a1888 0002
.org 0xa188a
	ldr r1, [r7, #84]	@ 000a188a 796d
.org 0xa188c
	adds r1, r1, r0	@ 000a188c 0918
.org 0xa188e
	str r1, [sp, #0]	@ 000a188e 0091
.org 0xa1890
	adds r0, r4, #0	@ 000a1890 201c
.org 0xa1892
	muls r0, r5	@ 000a1892 6843
.org 0xa1894
	adds r0, r0, r2	@ 000a1894 8018
.org 0xa1896
	lsls r0, r0, #1	@ 000a1896 4000
.org 0xa1898
	lsrs r1, r0, #1	@ 000a1898 4108
.org 0xa189a
	str r1, [r6, #0]	@ 000a189a 3160
.org 0xa189c
	lsrs r0, r0, #17	@ 000a189c 400c
.org 0xa189e
	ands r0, r3	@ 000a189e 1840
.org 0xa18a0
	subs r0, #3	@ 000a18a0 0338
.org 0xa18a2
	lsls r0, r0, #8	@ 000a18a2 0002
.org 0xa18a4
	ldr r1, [r7, #88]	@ 000a18a4 b96d
.org 0xa18a6
	adds r1, r1, r0	@ 000a18a6 0918
.org 0xa18a8
	str r1, [sp, #4]	@ 000a18a8 0191
.org 0xa18aa
	movs r0, #1	@ 000a18aa 0120
.org 0xa18ac
	mov r1, sp	@ 000a18ac 6946
.org 0xa18ae
	bl 0xd0c88	@ 000a18ae 2ff0ebf9
.org 0xa18b2
	adds r0, r7, #0	@ 000a18b2 381c
.org 0xa18b4
	bl 0xa1cac	@ 000a18b4 00f0faf9
.org 0xa18b8
	adds r2, r7, #0	@ 000a18b8 3a1c
.org 0xa18ba
	adds r2, #84	@ 000a18ba 5432
.org 0xa18bc
	movs r0, #4	@ 000a18bc 0420
.org 0xa18be
	movs r1, #5	@ 000a18be 0521
.org 0xa18c0
	bl 0x2ab88	@ 000a18c0 89f762f9
.org 0xa18c4
	mov r0, r8	@ 000a18c4 4046
.org 0xa18c6
	cmp r0, #1	@ 000a18c6 0128
.org 0xa18c8
	bne.n 0xa18da	@ 000a18c8 07d1
.org 0xa18ca
	ldr r0, [pc, #112]	@ 000a18ca 1c48
.org 0xa18cc
	adds r1, r0, #0	@ 000a18cc 011c
.org 0xa18ce
	adds r1, #38	@ 000a18ce 2631
.org 0xa18d0
	ldrb r0, [r1, #0]	@ 000a18d0 0878
.org 0xa18d2
	cmp r0, #0	@ 000a18d2 0028
.org 0xa18d4
	beq.n 0xa18da	@ 000a18d4 01d0
.org 0xa18d6
	adds r0, #255	@ 000a18d6 ff30
.org 0xa18d8
	strb r0, [r1, #0]	@ 000a18d8 0870
.org 0xa18da
	ldrb r1, [r7, #10]	@ 000a18da b97a
.org 0xa18dc
	movs r0, #254	@ 000a18dc fe20
.org 0xa18de
	ands r0, r1	@ 000a18de 0840
.org 0xa18e0
	movs r1, #0	@ 000a18e0 0021
.org 0xa18e2
	strb r0, [r7, #10]	@ 000a18e2 b872
.org 0xa18e4
	adds r0, r7, #0	@ 000a18e4 381c
.org 0xa18e6
	adds r0, #140	@ 000a18e6 8c30
.org 0xa18e8
	str r1, [r0, #0]	@ 000a18e8 0160
.org 0xa18ea
	adds r0, #4	@ 000a18ea 0430
.org 0xa18ec
	str r1, [r0, #0]	@ 000a18ec 0160
.org 0xa18ee
	adds r0, #4	@ 000a18ee 0430
.org 0xa18f0
	strb r1, [r0, #0]	@ 000a18f0 0170
.org 0xa18f2
	ldrb r1, [r7, #10]	@ 000a18f2 b97a
.org 0xa18f4
	movs r0, #251	@ 000a18f4 fb20
.org 0xa18f6
	ands r0, r1	@ 000a18f6 0840
.org 0xa18f8
	strb r0, [r7, #10]	@ 000a18f8 b872
.org 0xa18fa
	ldr r2, [pc, #68]	@ 000a18fa 114a
.org 0xa18fc
	ldrh r1, [r2, #12]	@ 000a18fc 9189
.org 0xa18fe
	ldr r0, [pc, #68]	@ 000a18fe 1148
.org 0xa1900
	cmp r1, r0	@ 000a1900 8142
.org 0xa1902
	bhi.n 0xa1908	@ 000a1902 01d8
.org 0xa1904
	adds r0, r1, #1	@ 000a1904 481c
.org 0xa1906
	strh r0, [r2, #12]	@ 000a1906 9081
.org 0xa1908
	adds r1, r7, #0	@ 000a1908 391c
.org 0xa190a
	adds r1, #84	@ 000a190a 5431
.org 0xa190c
	adds r0, r7, #0	@ 000a190c 381c
.org 0xa190e
	bl 0x2abe0	@ 000a190e 89f767f9
.org 0xa1912
	ldr r1, [pc, #52]	@ 000a1912 0d49
.org 0xa1914
	ldrb r0, [r7, #9]	@ 000a1914 787a
.org 0xa1916
	lsls r0, r0, #2	@ 000a1916 8000
.org 0xa1918
	adds r0, r0, r1	@ 000a1918 4018
.org 0xa191a
	movs r1, #4	@ 000a191a 0421
.org 0xa191c
	str r1, [r7, #12]	@ 000a191c f960
.org 0xa191e
	ldr r0, [r0, #0]	@ 000a191e 0068
.org 0xa1920
	ldr r0, [r0, #16]	@ 000a1920 0069
.org 0xa1922
	str r0, [r7, #20]	@ 000a1922 7861
.org 0xa1924
	add sp, #8	@ 000a1924 02b0
.org 0xa1926
	pop {r3}	@ 000a1926 08bc
.org 0xa1928
	mov r8, r3	@ 000a1928 9846
.org 0xa192a
	pop {r4, r5, r6, r7}	@ 000a192a f0bc
.org 0xa192c
	pop {r0}	@ 000a192c 01bc
.org 0xa192e
	bx r0	@ 000a192e 0047
