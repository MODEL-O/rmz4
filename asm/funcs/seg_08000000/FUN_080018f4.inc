@ FUN_080018f4  entry 0x080018f4  size 398
.thumb
.org 0x18f4
FUN_080018f4:
	push {r4, r5, r6, r7, lr}	@ 000018f4 f0b5
.org 0x18f6
	mov r7, sl	@ 000018f6 5746
.org 0x18f8
	mov r6, r9	@ 000018f8 4e46
.org 0x18fa
	mov r5, r8	@ 000018fa 4546
.org 0x18fc
	push {r5, r6, r7}	@ 000018fc e0b4
.org 0x18fe
	adds r5, r0, #0	@ 000018fe 051c
.org 0x1900
	bl 0x1aa0	@ 00001900 00f0cef8
.org 0x1904
	ldrb r1, [r5, #3]	@ 00001904 e978
.org 0x1906
	cmp r1, #1	@ 00001906 0129
.org 0x1908
	beq.n 0x1928	@ 00001908 0ed0
.org 0x190a
	cmp r1, #1	@ 0000190a 0129
.org 0x190c
	bgt.n 0x1914	@ 0000190c 02dc
.org 0x190e
	cmp r1, #0	@ 0000190e 0029
.org 0x1910
	beq.n 0x191e	@ 00001910 05d0
.org 0x1912
	b.n 0x1a8c	@ 00001912 bbe0
.org 0x1914
	cmp r1, #2	@ 00001914 0229
.org 0x1916
	beq.n 0x199c	@ 00001916 41d0
.org 0x1918
	cmp r1, #3	@ 00001918 0329
.org 0x191a
	beq.n 0x19ca	@ 0000191a 56d0
.org 0x191c
	b.n 0x1a8c	@ 0000191c b6e0
.org 0x191e
	movs r0, #3	@ 0000191e 0320
.org 0x1920
	strh r0, [r5, #4]	@ 00001920 a880
.org 0x1922
	strh r1, [r5, #6]	@ 00001922 e980
.org 0x1924
	movs r0, #1	@ 00001924 0120
.org 0x1926
	strb r0, [r5, #3]	@ 00001926 e870
.org 0x1928
	ldr r0, [r5, #8]	@ 00001928 a868
.org 0x192a
	str r0, [r5, #12]	@ 0000192a e860
.org 0x192c
	ldr r0, [r5, #20]	@ 0000192c 6869
.org 0x192e
	str r0, [r5, #24]	@ 0000192e a861
.org 0x1930
	ldrh r0, [r5, #6]	@ 00001930 e888
.org 0x1932
	lsls r1, r0, #1	@ 00001932 4100
.org 0x1934
	adds r1, r1, r0	@ 00001934 0918
.org 0x1936
	lsls r1, r1, #1	@ 00001936 4900
.org 0x1938
	ldrb r0, [r5, #1]	@ 00001938 6878
.org 0x193a
	adds r1, r1, r0	@ 0000193a 0918
.org 0x193c
	lsls r0, r1, #2	@ 0000193c 8800
.org 0x193e
	adds r0, r0, r1	@ 0000193e 4018
.org 0x1940
	lsls r1, r0, #4	@ 00001940 0101
.org 0x1942
	adds r0, r0, r1	@ 00001942 4018
.org 0x1944
	str r0, [r5, #16]	@ 00001944 2861
.org 0x1946
	lsls r0, r0, #16	@ 00001946 0004
.org 0x1948
	lsrs r0, r0, #16	@ 00001948 000c
.org 0x194a
	ldr r4, [pc, #52]	@ 0000194a 0d4c
.org 0x194c
	adds r1, r4, #0	@ 0000194c 211c
.org 0x194e
	movs r2, #16	@ 0000194e 1022
.org 0x1950
	bl 0x1b38	@ 00001950 00f0f2f8
.org 0x1954
	ldr r0, [pc, #44]	@ 00001954 0b48
.org 0x1956
	ldr r1, [r4, #0]	@ 00001956 2168
.org 0x1958
	ldr r0, [r0, #0]	@ 00001958 0068
.org 0x195a
	cmp r1, r0	@ 0000195a 8142
.org 0x195c
	beq.n 0x1990	@ 0000195c 18d0
.org 0x195e
	ldrh r0, [r5, #4]	@ 0000195e a888
.org 0x1960
	subs r0, #1	@ 00001960 0138
.org 0x1962
	strh r0, [r5, #4]	@ 00001962 a880
.org 0x1964
	ldr r1, [pc, #32]	@ 00001964 0849
.org 0x1966
	adds r2, r1, #0	@ 00001966 0a1c
.org 0x1968
	lsls r0, r0, #16	@ 00001968 0004
.org 0x196a
	cmp r0, #0	@ 0000196a 0028
.org 0x196c
	beq.n 0x1970	@ 0000196c 00d0
.org 0x196e
	b.n 0x1a8c	@ 0000196e 8de0
.org 0x1970
	ldr r0, [pc, #24]	@ 00001970 0648
.org 0x1972
	ldrh r1, [r0, #30]	@ 00001972 c18b
.org 0x1974
	orrs r1, r2	@ 00001974 1143
.org 0x1976
	strh r1, [r0, #30]	@ 00001976 c183
.org 0x1978
	movs r0, #3	@ 00001978 0320
.org 0x197a
	strb r0, [r5, #3]	@ 0000197a e870
.org 0x197c
	b.n 0x1a8c	@ 0000197c 86e0
.org 0x197e
	.byte 0x00	@ 0000197e data
.org 0x197f
	.byte 0x00	@ 0000197f data
.org 0x1980
	.byte 0x08,0x00,0x00,0x02	@ 00001980 data
.org 0x1984
	.byte 0x54,0x95,0x12,0x08	@ 00001984 data
.org 0x1988
	.byte 0xff,0xff,0x00,0x00	@ 00001988 data
.org 0x198c
	.byte 0x90,0x07,0x00,0x02	@ 0000198c data
.org 0x1990
	ldr r0, [r5, #16]	@ 00001990 2869
.org 0x1992
	adds r0, #2	@ 00001992 0230
.org 0x1994
	str r0, [r5, #16]	@ 00001994 2861
.org 0x1996
	movs r0, #2	@ 00001996 0220
.org 0x1998
	strb r0, [r5, #3]	@ 00001998 e870
.org 0x199a
	b.n 0x1a8c	@ 0000199a 77e0
.org 0x199c
	movs r6, #8	@ 0000199c 0826
.org 0x199e
	ldr r0, [r5, #24]	@ 0000199e a869
.org 0x19a0
	cmp r0, #8	@ 000019a0 0828
.org 0x19a2
	bhi.n 0x19aa	@ 000019a2 02d8
.org 0x19a4
	adds r6, r0, #0	@ 000019a4 061c
.org 0x19a6
	movs r0, #3	@ 000019a6 0320
.org 0x19a8
	strb r0, [r5, #3]	@ 000019a8 e870
.org 0x19aa
	ldrh r0, [r5, #16]	@ 000019aa 288a
.org 0x19ac
	ldr r1, [r5, #12]	@ 000019ac e968
.org 0x19ae
	lsls r2, r6, #16	@ 000019ae 3204
.org 0x19b0
	asrs r2, r2, #16	@ 000019b0 1214
.org 0x19b2
	bl 0x1b38	@ 000019b2 00f0c1f8
.org 0x19b6
	ldr r0, [r5, #12]	@ 000019b6 e868
.org 0x19b8
	adds r0, #8	@ 000019b8 0830
.org 0x19ba
	str r0, [r5, #12]	@ 000019ba e860
.org 0x19bc
	ldr r0, [r5, #16]	@ 000019bc 2869
.org 0x19be
	adds r0, #1	@ 000019be 0130
.org 0x19c0
	str r0, [r5, #16]	@ 000019c0 2861
.org 0x19c2
	ldr r0, [r5, #24]	@ 000019c2 a869
.org 0x19c4
	subs r0, r0, r6	@ 000019c4 801b
.org 0x19c6
	str r0, [r5, #24]	@ 000019c6 a861
.org 0x19c8
	b.n 0x1a8c	@ 000019c8 60e0
.org 0x19ca
	ldr r0, [pc, #116]	@ 000019ca 1d48
.org 0x19cc
	movs r2, #30	@ 000019cc 1e22
.org 0x19ce
	ldrsh r1, [r0, r2]	@ 000019ce 815e
.org 0x19d0
	mov ip, r0	@ 000019d0 8446
.org 0x19d2
	cmp r1, #0	@ 000019d2 0029
.org 0x19d4
	bne.n 0x1a5e	@ 000019d4 43d1
.org 0x19d6
	ldr r0, [r5, #8]	@ 000019d6 a868
.org 0x19d8
	str r0, [r5, #12]	@ 000019d8 e860
.org 0x19da
	ldr r6, [r5, #20]	@ 000019da 6e69
.org 0x19dc
	ldr r7, [pc, #100]	@ 000019dc 194f
.org 0x19de
	mov sl, r7	@ 000019de ba46
.org 0x19e0
	cmp r6, #0	@ 000019e0 002e
.org 0x19e2
	beq.n 0x1a1c	@ 000019e2 1bd0
.org 0x19e4
	mov r4, sl	@ 000019e4 5446
.org 0x19e6
	movs r0, #7	@ 000019e6 0720
.org 0x19e8
	mov r9, r0	@ 000019e8 8146
.org 0x19ea
	movs r1, #8	@ 000019ea 0821
.org 0x19ec
	mov r8, r1	@ 000019ec 8846
.org 0x19ee
	ldr r3, [r5, #12]	@ 000019ee eb68
.org 0x19f0
	ldrb r1, [r3, #0]	@ 000019f0 1978
.org 0x19f2
	ldr r0, [r4, #4]	@ 000019f2 6068
.org 0x19f4
	subs r0, r0, r1	@ 000019f4 401a
.org 0x19f6
	str r0, [r4, #4]	@ 000019f6 6060
.org 0x19f8
	ldrb r2, [r3, #0]	@ 000019f8 1a78
.org 0x19fa
	adds r1, r6, #0	@ 000019fa 311c
.org 0x19fc
	mov r7, r9	@ 000019fc 4f46
.org 0x19fe
	ands r1, r7	@ 000019fe 3940
.org 0x1a00
	adds r0, r2, #0	@ 00001a00 101c
.org 0x1a02
	lsls r0, r1	@ 00001a02 8840
.org 0x1a04
	mov r7, r8	@ 00001a04 4746
.org 0x1a06
	subs r1, r7, r1	@ 00001a06 791a
.org 0x1a08
	asrs r2, r1	@ 00001a08 0a41
.org 0x1a0a
	orrs r0, r2	@ 00001a0a 1043
.org 0x1a0c
	ldrb r1, [r4, #12]	@ 00001a0c 217b
.org 0x1a0e
	eors r0, r1	@ 00001a0e 4840
.org 0x1a10
	strb r0, [r4, #12]	@ 00001a10 2073
.org 0x1a12
	subs r6, #1	@ 00001a12 013e
.org 0x1a14
	adds r3, #1	@ 00001a14 0133
.org 0x1a16
	str r3, [r5, #12]	@ 00001a16 eb60
.org 0x1a18
	cmp r6, #0	@ 00001a18 002e
.org 0x1a1a
	bne.n 0x19ee	@ 00001a1a e8d1
.org 0x1a1c
	mov r1, sl	@ 00001a1c 5146
.org 0x1a1e
	ldr r0, [r1, #4]	@ 00001a1e 4868
.org 0x1a20
	cmp r0, #0	@ 00001a20 0028
.org 0x1a22
	bne.n 0x1a2a	@ 00001a22 02d1
.org 0x1a24
	ldrb r0, [r1, #12]	@ 00001a24 087b
.org 0x1a26
	cmp r0, #0	@ 00001a26 0028
.org 0x1a28
	beq.n 0x1a54	@ 00001a28 14d0
.org 0x1a2a
	ldrh r0, [r5, #4]	@ 00001a2a a888
.org 0x1a2c
	subs r0, #1	@ 00001a2c 0138
.org 0x1a2e
	strh r0, [r5, #4]	@ 00001a2e a880
.org 0x1a30
	ldr r2, [pc, #20]	@ 00001a30 054a
.org 0x1a32
	adds r1, r2, #0	@ 00001a32 111c
.org 0x1a34
	lsls r0, r0, #16	@ 00001a34 0004
.org 0x1a36
	cmp r0, #0	@ 00001a36 0028
.org 0x1a38
	beq.n 0x1a4c	@ 00001a38 08d0
.org 0x1a3a
	movs r0, #1	@ 00001a3a 0120
.org 0x1a3c
	strb r0, [r5, #3]	@ 00001a3c e870
.org 0x1a3e
	b.n 0x1a8c	@ 00001a3e 25e0
.org 0x1a40
	.byte 0x90,0x07,0x00,0x02	@ 00001a40 data
.org 0x1a44
	.byte 0x08,0x00,0x00,0x02	@ 00001a44 data
.org 0x1a48
	.byte 0xff,0xff,0x00,0x00	@ 00001a48 data
.org 0x1a4c
	mov r7, ip	@ 00001a4c 6746
.org 0x1a4e
	ldrh r0, [r7, #30]	@ 00001a4e f88b
.org 0x1a50
	orrs r0, r1	@ 00001a50 0843
.org 0x1a52
	strh r0, [r7, #30]	@ 00001a52 f883
.org 0x1a54
	mov r1, ip	@ 00001a54 6146
.org 0x1a56
	movs r2, #30	@ 00001a56 1e22
.org 0x1a58
	ldrsh r0, [r1, r2]	@ 00001a58 885e
.org 0x1a5a
	cmp r0, #0	@ 00001a5a 0028
.org 0x1a5c
	beq.n 0x1a80	@ 00001a5c 10d0
.org 0x1a5e
	ldrh r0, [r5, #6]	@ 00001a5e e888
.org 0x1a60
	cmp r0, #0	@ 00001a60 0028
.org 0x1a62
	bne.n 0x1a76	@ 00001a62 08d1
.org 0x1a64
	mov r7, ip	@ 00001a64 6746
.org 0x1a66
	strh r0, [r7, #30]	@ 00001a66 f883
.org 0x1a68
	movs r0, #3	@ 00001a68 0320
.org 0x1a6a
	strh r0, [r5, #4]	@ 00001a6a a880
.org 0x1a6c
	movs r1, #1	@ 00001a6c 0121
.org 0x1a6e
	movs r0, #1	@ 00001a6e 0120
.org 0x1a70
	strh r0, [r5, #6]	@ 00001a70 e880
.org 0x1a72
	strb r1, [r5, #3]	@ 00001a72 e970
.org 0x1a74
	b.n 0x1a8c	@ 00001a74 0ae0
.org 0x1a76
	mov r1, ip	@ 00001a76 6146
.org 0x1a78
	movs r2, #30	@ 00001a78 1e22
.org 0x1a7a
	ldrsh r0, [r1, r2]	@ 00001a7a 885e
.org 0x1a7c
	cmp r0, #0	@ 00001a7c 0028
.org 0x1a7e
	bne.n 0x1a86	@ 00001a7e 02d1
.org 0x1a80
	movs r0, #1	@ 00001a80 0120
