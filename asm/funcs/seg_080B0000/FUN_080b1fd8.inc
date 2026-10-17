@ FUN_080b1fd8  entry 0x080b1fd8  size 212
.thumb
.org 0xb1fd8
FUN_080b1fd8:
	push {r4, r5, lr}	@ 000b1fd8 30b5
.org 0xb1fda
	adds r4, r0, #0	@ 000b1fda 041c
.org 0xb1fdc
	ldrb r5, [r4, #14]	@ 000b1fdc a57b
.org 0xb1fde
	cmp r5, #0	@ 000b1fde 002d
.org 0xb1fe0
	bne.n 0xb1ffa	@ 000b1fe0 0bd1
.org 0xb1fe2
	ldr r1, [pc, #200]	@ 000b1fe2 3249
.org 0xb1fe4
	bl 0x1cf00	@ 000b1fe4 6af78cff
.org 0xb1fe8
	str r5, [r4, #96]	@ 000b1fe8 2566
.org 0xb1fea
	adds r0, r4, #0	@ 000b1fea 201c
.org 0xb1fec
	adds r0, #116	@ 000b1fec 7430
.org 0xb1fee
	ldr r1, [pc, #192]	@ 000b1fee 3049
.org 0xb1ff0
	bl 0x5784	@ 000b1ff0 53f7c8fb
.org 0xb1ff4
	ldrb r0, [r4, #14]	@ 000b1ff4 a07b
.org 0xb1ff6
	adds r0, #1	@ 000b1ff6 0130
.org 0xb1ff8
	strb r0, [r4, #14]	@ 000b1ff8 a073
.org 0xb1ffa
	ldr r1, [r4, #88]	@ 000b1ffa a16d
.org 0xb1ffc
	ldr r0, [r4, #96]	@ 000b1ffc 206e
.org 0xb1ffe
	adds r1, r1, r0	@ 000b1ffe 0918
.org 0xb2000
	str r1, [r4, #88]	@ 000b2000 a165
.org 0xb2002
	adds r0, #64	@ 000b2002 4030
.org 0xb2004
	str r0, [r4, #96]	@ 000b2004 2066
.org 0xb2006
	ldr r0, [r4, #84]	@ 000b2006 606d
.org 0xb2008
	movs r2, #168	@ 000b2008 a822
.org 0xb200a
	lsls r2, r2, #6	@ 000b200a 9201
.org 0xb200c
	adds r1, r1, r2	@ 000b200c 8918
.org 0xb200e
	bl 0x7c7c	@ 000b200e 55f735fe
.org 0xb2012
	lsls r0, r0, #16	@ 000b2012 0004
.org 0xb2014
	lsrs r0, r0, #16	@ 000b2014 000c
.org 0xb2016
	adds r5, r4, #0	@ 000b2016 251c
.org 0xb2018
	adds r5, #84	@ 000b2018 5435
.org 0xb201a
	cmp r0, #15	@ 000b201a 0f28
.org 0xb201c
	beq.n 0xb204a	@ 000b201c 15d0
.org 0xb201e
	cmp r0, #0	@ 000b201e 0028
.org 0xb2020
	beq.n 0xb204a	@ 000b2020 13d0
.org 0xb2022
	ldr r2, [pc, #144]	@ 000b2022 244a
.org 0xb2024
	ldrh r1, [r2, #12]	@ 000b2024 9189
.org 0xb2026
	ldr r0, [pc, #144]	@ 000b2026 2448
.org 0xb2028
	cmp r1, r0	@ 000b2028 8142
.org 0xb202a
	bhi.n 0xb2030	@ 000b202a 01d8
.org 0xb202c
	adds r0, r1, #1	@ 000b202c 481c
.org 0xb202e
	strh r0, [r2, #12]	@ 000b202e 9081
.org 0xb2030
	adds r0, r4, #0	@ 000b2030 201c
.org 0xb2032
	adds r1, r5, #0	@ 000b2032 291c
.org 0xb2034
	bl 0x2abe0	@ 000b2034 78f7d4fd
.org 0xb2038
	ldr r1, [pc, #128]	@ 000b2038 2049
.org 0xb203a
	ldrb r0, [r4, #9]	@ 000b203a 607a
.org 0xb203c
	lsls r0, r0, #2	@ 000b203c 8000
.org 0xb203e
	adds r0, r0, r1	@ 000b203e 4018
.org 0xb2040
	movs r1, #2	@ 000b2040 0221
.org 0xb2042
	str r1, [r4, #12]	@ 000b2042 e160
.org 0xb2044
	ldr r0, [r0, #0]	@ 000b2044 0068
.org 0xb2046
	ldr r0, [r0, #8]	@ 000b2046 8068
.org 0xb2048
	str r0, [r4, #20]	@ 000b2048 6061
.org 0xb204a
	ldr r0, [pc, #116]	@ 000b204a 1d48
.org 0xb204c
	adds r1, r5, #0	@ 000b204c 291c
.org 0xb204e
	bl 0x1fb14	@ 000b204e 6df761fd
.org 0xb2052
	movs r1, #128	@ 000b2052 8021
.org 0xb2054
	lsls r1, r1, #7	@ 000b2054 c901
.org 0xb2056
	cmp r0, r1	@ 000b2056 8842
.org 0xb2058
	bls.n 0xb20a6	@ 000b2058 25d9
.org 0xb205a
	ldrb r1, [r4, #10]	@ 000b205a a17a
.org 0xb205c
	movs r0, #254	@ 000b205c fe20
.org 0xb205e
	ands r0, r1	@ 000b205e 0840
.org 0xb2060
	movs r2, #0	@ 000b2060 0022
.org 0xb2062
	movs r1, #253	@ 000b2062 fd21
.org 0xb2064
	ands r0, r1	@ 000b2064 0840
.org 0xb2066
	strb r0, [r4, #10]	@ 000b2066 a072
.org 0xb2068
	adds r0, r4, #0	@ 000b2068 201c
.org 0xb206a
	adds r0, #140	@ 000b206a 8c30
.org 0xb206c
	str r2, [r0, #0]	@ 000b206c 0260
.org 0xb206e
	adds r0, #4	@ 000b206e 0430
.org 0xb2070
	str r2, [r0, #0]	@ 000b2070 0260
.org 0xb2072
	adds r0, #4	@ 000b2072 0430
.org 0xb2074
	strb r2, [r0, #0]	@ 000b2074 0270
.org 0xb2076
	ldrb r1, [r4, #10]	@ 000b2076 a17a
.org 0xb2078
	movs r0, #251	@ 000b2078 fb20
.org 0xb207a
	ands r0, r1	@ 000b207a 0840
.org 0xb207c
	strb r0, [r4, #10]	@ 000b207c a072
.org 0xb207e
	ldr r1, [pc, #60]	@ 000b207e 0f49
.org 0xb2080
	ldrb r0, [r4, #9]	@ 000b2080 607a
.org 0xb2082
	lsls r0, r0, #2	@ 000b2082 8000
.org 0xb2084
	adds r0, r0, r1	@ 000b2084 4018
.org 0xb2086
	movs r1, #3	@ 000b2086 0321
.org 0xb2088
	str r1, [r4, #12]	@ 000b2088 e160
.org 0xb208a
	ldr r0, [r0, #0]	@ 000b208a 0068
.org 0xb208c
	ldr r0, [r0, #12]	@ 000b208c c068
.org 0xb208e
	str r0, [r4, #20]	@ 000b208e 6061
.org 0xb2090
	ldr r2, [pc, #32]	@ 000b2090 084a
.org 0xb2092
	ldrh r1, [r2, #12]	@ 000b2092 9189
.org 0xb2094
	ldr r0, [pc, #32]	@ 000b2094 0848
.org 0xb2096
	cmp r1, r0	@ 000b2096 8142
.org 0xb2098
	bhi.n 0xb209e	@ 000b2098 01d8
.org 0xb209a
	adds r0, r1, #1	@ 000b209a 481c
.org 0xb209c
	strh r0, [r2, #12]	@ 000b209c 9081
.org 0xb209e
	adds r0, r4, #0	@ 000b209e 201c
.org 0xb20a0
	adds r1, r5, #0	@ 000b20a0 291c
.org 0xb20a2
	bl 0x2abe0	@ 000b20a2 78f79dfd
.org 0xb20a6
	pop {r4, r5}	@ 000b20a6 30bc
.org 0xb20a8
	pop {r0}	@ 000b20a8 01bc
.org 0xb20aa
	bx r0	@ 000b20aa 0047
