@ FUN_080c08e0  entry 0x080c08e0  size 328
.thumb
.org 0xc08e0
FUN_080c08e0:
	push {r4, r5, r6, r7, lr}	@ 000c08e0 f0b5
.org 0xc08e2
	adds r4, r0, #0	@ 000c08e2 041c
.org 0xc08e4
	ldr r6, [r4, #40]	@ 000c08e4 a66a
.org 0xc08e6
	ldrb r5, [r4, #17]	@ 000c08e6 657c
.org 0xc08e8
	ldrb r0, [r6, #10]	@ 000c08e8 b07a
.org 0xc08ea
	lsrs r7, r0, #4	@ 000c08ea 0709
.org 0xc08ec
	movs r0, #1	@ 000c08ec 0120
.org 0xc08ee
	ands r7, r0	@ 000c08ee 0740
.org 0xc08f0
	adds r0, r4, #0	@ 000c08f0 201c
.org 0xc08f2
	adds r0, #180	@ 000c08f2 b430
.org 0xc08f4
	ldrb r1, [r0, #0]	@ 000c08f4 0178
.org 0xc08f6
	adds r3, r1, #0	@ 000c08f6 0b1c
.org 0xc08f8
	ldrb r0, [r6, #12]	@ 000c08f8 307b
.org 0xc08fa
	cmp r0, #1	@ 000c08fa 0128
.org 0xc08fc
	bls.n 0xc091c	@ 000c08fc 0ed9
.org 0xc08fe
	ldr r1, [pc, #24]	@ 000c08fe 0649
.org 0xc0900
	ldrb r0, [r4, #9]	@ 000c0900 607a
.org 0xc0902
	lsls r0, r0, #2	@ 000c0902 8000
.org 0xc0904
	adds r0, r0, r1	@ 000c0904 4018
.org 0xc0906
	movs r1, #2	@ 000c0906 0221
.org 0xc0908
	str r1, [r4, #12]	@ 000c0908 e160
.org 0xc090a
	ldr r0, [r0, #0]	@ 000c090a 0068
.org 0xc090c
	ldr r0, [r0, #8]	@ 000c090c 8068
.org 0xc090e
	str r0, [r4, #20]	@ 000c090e 6061
.org 0xc0910
	adds r0, r4, #0	@ 000c0910 201c
.org 0xc0912
	bl 0xc0c74	@ 000c0912 00f0aff9
.org 0xc0916
	b.n 0xc0a52	@ 000c0916 9ce0
.org 0xc0918
	.byte 0xf4,0x49,0x86,0x08	@ 000c0918 data
.org 0xc091c
	ldrb r2, [r6, #13]	@ 000c091c 727b
.org 0xc091e
	ldrb r0, [r4, #13]	@ 000c091e 607b
.org 0xc0920
	cmp r0, r2	@ 000c0920 9042
.org 0xc0922
	beq.n 0xc092c	@ 000c0922 03d0
.org 0xc0924
	movs r0, #0	@ 000c0924 0020
.org 0xc0926
	strb r2, [r4, #13]	@ 000c0926 6273
.org 0xc0928
	strb r0, [r4, #14]	@ 000c0928 a073
.org 0xc092a
	strb r0, [r4, #15]	@ 000c092a e073
.org 0xc092c
	cmp r5, #0	@ 000c092c 002d
.org 0xc092e
	bne.n 0xc09c8	@ 000c092e 4bd1
.org 0xc0930
	adds r5, r1, #0	@ 000c0930 0d1c
.org 0xc0932
	cmp r7, #0	@ 000c0932 002f
.org 0xc0934
	bne.n 0xc0960	@ 000c0934 14d1
.org 0xc0936
	ldr r0, [pc, #20]	@ 000c0936 0548
.org 0xc0938
	ldr r3, [r0, #56]	@ 000c0938 836b
.org 0xc093a
	ldrb r1, [r6, #10]	@ 000c093a b17a
.org 0xc093c
	movs r0, #16	@ 000c093c 1020
.org 0xc093e
	ands r0, r1	@ 000c093e 0840
.org 0xc0940
	mov ip, r1	@ 000c0940 8c46
.org 0xc0942
	ldr r2, [r6, #84]	@ 000c0942 726d
.org 0xc0944
	cmp r0, #0	@ 000c0944 0028
.org 0xc0946
	beq.n 0xc0954	@ 000c0946 05d0
.org 0xc0948
	ldr r1, [pc, #4]	@ 000c0948 0149
.org 0xc094a
	b.n 0xc0956	@ 000c094a 04e0
.org 0xc094c
	.byte 0xf8,0xe9,0x02,0x02	@ 000c094c data
.org 0xc0950
	.byte 0xff,0x61,0x00,0x00	@ 000c0950 data
.org 0xc0954
	ldr r1, [pc, #4]	@ 000c0954 0149
.org 0xc0956
	adds r0, r3, r1	@ 000c0956 5818
.org 0xc0958
	subs r0, r2, r0	@ 000c0958 101a
.org 0xc095a
	b.n 0xc0986	@ 000c095a 14e0
.org 0xc095c
	.byte 0xff,0x8d,0x00,0x00	@ 000c095c data
.org 0xc0960
	ldr r0, [pc, #20]	@ 000c0960 0548
.org 0xc0962
	ldr r3, [r0, #56]	@ 000c0962 836b
.org 0xc0964
	ldrb r1, [r6, #10]	@ 000c0964 b17a
.org 0xc0966
	movs r0, #16	@ 000c0966 1020
.org 0xc0968
	ands r0, r1	@ 000c0968 0840
.org 0xc096a
	mov ip, r1	@ 000c096a 8c46
.org 0xc096c
	ldr r2, [r6, #84]	@ 000c096c 726d
.org 0xc096e
	cmp r0, #0	@ 000c096e 0028
.org 0xc0970
	beq.n 0xc0980	@ 000c0970 06d0
.org 0xc0972
	ldr r1, [pc, #8]	@ 000c0972 0249
.org 0xc0974
	b.n 0xc0982	@ 000c0974 05e0
.org 0xc0976
	.byte 0x00	@ 000c0976 data
.org 0xc0977
	.byte 0x00	@ 000c0977 data
.org 0xc0978
	.byte 0xf8,0xe9,0x02,0x02	@ 000c0978 data
.org 0xc097c
	.byte 0x00,0x72,0xff,0xff	@ 000c097c data
.org 0xc0980
	ldr r1, [pc, #36]	@ 000c0980 0949
.org 0xc0982
	adds r0, r3, r1	@ 000c0982 5818
.org 0xc0984
	subs r0, r0, r2	@ 000c0984 801a
.org 0xc0986
	cmp r0, #0	@ 000c0986 0028
.org 0xc0988
	ble.n 0xc098e	@ 000c0988 01dd
.org 0xc098a
	asrs r0, r0, #15	@ 000c098a c013
.org 0xc098c
	adds r5, r5, r0	@ 000c098c 2d18
.org 0xc098e
	lsls r0, r5, #15	@ 000c098e e803
.org 0xc0990
	lsls r1, r7, #1	@ 000c0990 7900
.org 0xc0992
	subs r1, #1	@ 000c0992 0139
.org 0xc0994
	muls r1, r0	@ 000c0994 4143
.org 0xc0996
	movs r0, #16	@ 000c0996 1020
.org 0xc0998
	mov r3, ip	@ 000c0998 6346
.org 0xc099a
	ands r0, r3	@ 000c099a 1840
.org 0xc099c
	cmp r0, #0	@ 000c099c 0028
.org 0xc099e
	beq.n 0xc09ac	@ 000c099e 05d0
.org 0xc09a0
	movs r0, #176	@ 000c09a0 b020
.org 0xc09a2
	lsls r0, r0, #5	@ 000c09a2 4001
.org 0xc09a4
	adds r0, r1, r0	@ 000c09a4 0818
.org 0xc09a6
	b.n 0xc09b0	@ 000c09a6 03e0
.org 0xc09a8
	.byte 0x00,0x9e,0xff,0xff	@ 000c09a8 data
.org 0xc09ac
	ldr r3, [pc, #16]	@ 000c09ac 044b
.org 0xc09ae
	adds r0, r1, r3	@ 000c09ae c818
.org 0xc09b0
	adds r0, r2, r0	@ 000c09b0 1018
.org 0xc09b2
	str r0, [r4, #84]	@ 000c09b2 6065
.org 0xc09b4
	ldr r0, [r6, #88]	@ 000c09b4 b06d
.org 0xc09b6
	ldr r1, [pc, #12]	@ 000c09b6 0349
.org 0xc09b8
	adds r0, r0, r1	@ 000c09b8 4018
.org 0xc09ba
	str r0, [r4, #88]	@ 000c09ba a065
.org 0xc09bc
	b.n 0xc0a0a	@ 000c09bc 25e0
.org 0xc09be
	.byte 0x00	@ 000c09be data
.org 0xc09bf
	.byte 0x00	@ 000c09bf data
.org 0xc09c0
	.byte 0x00,0xea,0xff,0xff	@ 000c09c0 data
.org 0xc09c4
	.byte 0x00,0xce,0xff,0xff	@ 000c09c4 data
.org 0xc09c8
	adds r5, r3, #0	@ 000c09c8 1d1c
.org 0xc09ca
	ldr r0, [pc, #76]	@ 000c09ca 1348
.org 0xc09cc
	ldr r1, [r6, #88]	@ 000c09cc b16d
.org 0xc09ce
	movs r2, #160	@ 000c09ce a022
.org 0xc09d0
	lsls r2, r2, #6	@ 000c09d0 9201
.org 0xc09d2
	adds r1, r1, r2	@ 000c09d2 8918
.org 0xc09d4
	ldr r0, [r0, #60]	@ 000c09d4 c06b
.org 0xc09d6
	subs r0, r0, r1	@ 000c09d6 401a
.org 0xc09d8
	cmp r0, #0	@ 000c09d8 0028
.org 0xc09da
	ble.n 0xc09e6	@ 000c09da 04dd
.org 0xc09dc
	movs r1, #192	@ 000c09dc c021
.org 0xc09de
	lsls r1, r1, #6	@ 000c09de 8901
.org 0xc09e0
	bl 0x128fb8	@ 000c09e0 68f0eafa
.org 0xc09e4
	adds r5, r5, r0	@ 000c09e4 2d18
.org 0xc09e6
	lsls r1, r7, #1	@ 000c09e6 7900
.org 0xc09e8
	subs r1, #1	@ 000c09e8 0139
.org 0xc09ea
	lsls r0, r1, #1	@ 000c09ea 4800
.org 0xc09ec
	adds r0, r0, r1	@ 000c09ec 4018
.org 0xc09ee
	lsls r0, r0, #12	@ 000c09ee 0003
.org 0xc09f0
	adds r1, r5, #0	@ 000c09f0 291c
.org 0xc09f2
	muls r1, r0	@ 000c09f2 4143
.org 0xc09f4
	ldr r0, [r6, #84]	@ 000c09f4 706d
.org 0xc09f6
	adds r0, r0, r1	@ 000c09f6 4018
.org 0xc09f8
	str r0, [r4, #84]	@ 000c09f8 6065
.org 0xc09fa
	lsls r0, r5, #1	@ 000c09fa 6800
.org 0xc09fc
	adds r0, r0, r5	@ 000c09fc 4019
.org 0xc09fe
	lsls r0, r0, #12	@ 000c09fe 0003
.org 0xc0a00
	ldr r3, [pc, #24]	@ 000c0a00 064b
.org 0xc0a02
	adds r0, r0, r3	@ 000c0a02 c018
.org 0xc0a04
	ldr r1, [r6, #88]	@ 000c0a04 b16d
.org 0xc0a06
	adds r1, r1, r0	@ 000c0a06 0918
.org 0xc0a08
	str r1, [r4, #88]	@ 000c0a08 a165
.org 0xc0a0a
	adds r2, r7, #0	@ 000c0a0a 3a1c
.org 0xc0a0c
	cmp r2, #0	@ 000c0a0c 002a
.org 0xc0a0e
	beq.n 0xc0a20	@ 000c0a0e 07d0
.org 0xc0a10
	ldrb r1, [r4, #10]	@ 000c0a10 a17a
.org 0xc0a12
	movs r0, #16	@ 000c0a12 1020
.org 0xc0a14
	orrs r0, r1	@ 000c0a14 0843
.org 0xc0a16
	b.n 0xc0a26	@ 000c0a16 06e0
.org 0xc0a18
	.byte 0xf8,0xe9,0x02,0x02	@ 000c0a18 data
.org 0xc0a1c
	.byte 0x00,0xd8,0xff,0xff	@ 000c0a1c data
.org 0xc0a20
	ldrb r1, [r4, #10]	@ 000c0a20 a17a
.org 0xc0a22
	movs r0, #239	@ 000c0a22 ef20
.org 0xc0a24
	ands r0, r1	@ 000c0a24 0840
.org 0xc0a26
	strb r0, [r4, #10]	@ 000c0a26 a072
