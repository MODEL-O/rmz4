@ FUN_08094008  entry 0x08094008  size 354
.thumb
.org 0x94008
FUN_08094008:
	push {r4, r5, r6, r7, lr}	@ 00094008 f0b5
.org 0x9400a
	sub sp, #8	@ 0009400a 82b0
.org 0x9400c
	adds r7, r0, #0	@ 0009400c 071c
.org 0x9400e
	ldrb r0, [r7, #16]	@ 0009400e 387c
.org 0x94010
	ldrb r4, [r7, #17]	@ 00094010 7c7c
.org 0x94012
	ldrb r6, [r7, #15]	@ 00094012 fe7b
.org 0x94014
	cmp r6, #0	@ 00094014 002e
.org 0x94016
	bne.n 0x9409e	@ 00094016 42d1
.org 0x94018
	cmp r0, #2	@ 00094018 0228
.org 0x9401a
	bne.n 0x9404e	@ 0009401a 18d1
.org 0x9401c
	ldr r0, [pc, #100]	@ 0009401c 1948
.org 0x9401e
	ldr r1, [pc, #104]	@ 0009401e 1a49
.org 0x94020
	lsls r4, r4, #2	@ 00094020 a400
.org 0x94022
	adds r4, r4, r1	@ 00094022 6418
.org 0x94024
	ldr r1, [r4, #0]	@ 00094024 2168
.org 0x94026
	asrs r3, r1, #3	@ 00094026 cb10
.org 0x94028
	adds r0, #4	@ 00094028 0430
.org 0x9402a
	adds r3, r3, r0	@ 0009402a 1b18
.org 0x9402c
	movs r5, #7	@ 0009402c 0725
.org 0x9402e
	ands r1, r5	@ 0009402e 2940
.org 0x94030
	movs r2, #1	@ 00094030 0122
.org 0x94032
	adds r0, r2, #0	@ 00094032 101c
.org 0x94034
	lsls r0, r1	@ 00094034 8840
.org 0x94036
	ldrb r1, [r3, #0]	@ 00094036 1978
.org 0x94038
	orrs r0, r1	@ 00094038 0843
.org 0x9403a
	strb r0, [r3, #0]	@ 0009403a 1870
.org 0x9403c
	ldr r3, [pc, #76]	@ 0009403c 134b
.org 0x9403e
	ldr r0, [r4, #0]	@ 0009403e 2068
.org 0x94040
	asrs r1, r0, #3	@ 00094040 c110
.org 0x94042
	adds r1, r1, r3	@ 00094042 c918
.org 0x94044
	ands r0, r5	@ 00094044 2840
.org 0x94046
	lsls r2, r0	@ 00094046 8240
.org 0x94048
	ldrb r0, [r1, #0]	@ 00094048 0878
.org 0x9404a
	orrs r2, r0	@ 0009404a 0243
.org 0x9404c
	strb r2, [r1, #0]	@ 0009404c 0a70
.org 0x9404e
	adds r0, r7, #0	@ 0009404e 381c
.org 0x94050
	adds r0, #140	@ 00094050 8c30
.org 0x94052
	str r6, [r0, #0]	@ 00094052 0660
.org 0x94054
	adds r0, #4	@ 00094054 0430
.org 0x94056
	str r6, [r0, #0]	@ 00094056 0660
.org 0x94058
	adds r0, #4	@ 00094058 0430
.org 0x9405a
	strb r6, [r0, #0]	@ 0009405a 0670
.org 0x9405c
	ldrb r1, [r7, #10]	@ 0009405c b97a
.org 0x9405e
	movs r0, #251	@ 0009405e fb20
.org 0x94060
	ands r0, r1	@ 00094060 0840
.org 0x94062
	strb r0, [r7, #10]	@ 00094062 b872
.org 0x94064
	ldr r1, [pc, #40]	@ 00094064 0a49
.org 0x94066
	adds r0, r7, #0	@ 00094066 381c
.org 0x94068
	bl 0x1cf00	@ 00094068 88f74aff
.org 0x9406c
	movs r0, #8	@ 0009406c 0820
.org 0x9406e
	strb r0, [r7, #18]	@ 0009406e b874
.org 0x94070
	str r6, [r7, #96]	@ 00094070 3e66
.org 0x94072
	ldr r1, [r7, #84]	@ 00094072 796d
.org 0x94074
	ldr r2, [r7, #88]	@ 00094074 ba6d
.org 0x94076
	adds r0, r7, #0	@ 00094076 381c
.org 0x94078
	bl 0x947b4	@ 00094078 00f09cfb
.org 0x9407c
	cmp r0, #0	@ 0009407c 0028
.org 0x9407e
	beq.n 0x94094	@ 0009407e 09d0
.org 0x94080
	strb r6, [r7, #19]	@ 00094080 fe74
.org 0x94082
	b.n 0x94098	@ 00094082 09e0
.org 0x94084
	.byte 0xb0,0xe8,0x02,0x02	@ 00094084 data
.org 0x94088
	.byte 0x50,0x06,0x86,0x08	@ 00094088 data
.org 0x9408c
	.byte 0x80,0x58,0x03,0x02	@ 0009408c data
.org 0x94090
	.byte 0x0f,0x40,0x00,0x00	@ 00094090 data
.org 0x94094
	movs r0, #1	@ 00094094 0120
.org 0x94096
	strb r0, [r7, #19]	@ 00094096 f874
.org 0x94098
	ldrb r0, [r7, #15]	@ 00094098 f87b
.org 0x9409a
	adds r0, #1	@ 0009409a 0130
.org 0x9409c
	strb r0, [r7, #15]	@ 0009409c f873
.org 0x9409e
	adds r0, r7, #0	@ 0009409e 381c
.org 0x940a0
	bl 0x1cff0	@ 000940a0 88f7a6ff
.org 0x940a4
	ldrb r0, [r7, #19]	@ 000940a4 f87c
.org 0x940a6
	cmp r0, #0	@ 000940a6 0028
.org 0x940a8
	beq.n 0x940c4	@ 000940a8 0cd0
.org 0x940aa
	ldr r0, [r7, #96]	@ 000940aa 386e
.org 0x940ac
	adds r0, #64	@ 000940ac 4030
.org 0x940ae
	str r0, [r7, #96]	@ 000940ae 3866
.org 0x940b0
	movs r1, #224	@ 000940b0 e021
.org 0x940b2
	lsls r1, r1, #3	@ 000940b2 c900
.org 0x940b4
	cmp r0, r1	@ 000940b4 8842
.org 0x940b6
	ble.n 0x940ba	@ 000940b6 00dd
.org 0x940b8
	str r1, [r7, #96]	@ 000940b8 3966
.org 0x940ba
	ldr r0, [r7, #88]	@ 000940ba b86d
.org 0x940bc
	ldr r1, [r7, #96]	@ 000940bc 396e
.org 0x940be
	adds r0, r0, r1	@ 000940be 4018
.org 0x940c0
	str r0, [r7, #88]	@ 000940c0 b865
.org 0x940c2
	b.n 0x940ca	@ 000940c2 02e0
.org 0x940c4
	adds r0, r7, #0	@ 000940c4 381c
.org 0x940c6
	bl 0x94a38	@ 000940c6 00f0b7fc
.org 0x940ca
	ldrb r0, [r7, #18]	@ 000940ca b87c
.org 0x940cc
	subs r0, #1	@ 000940cc 0138
.org 0x940ce
	strb r0, [r7, #18]	@ 000940ce b874
.org 0x940d0
	lsls r0, r0, #24	@ 000940d0 0006
.org 0x940d2
	cmp r0, #0	@ 000940d2 0028
.org 0x940d4
	beq.n 0x940ea	@ 000940d4 09d0
.org 0x940d6
	ldrb r0, [r7, #19]	@ 000940d6 f87c
.org 0x940d8
	cmp r0, #0	@ 000940d8 0028
.org 0x940da
	beq.n 0x94172	@ 000940da 4ad0
.org 0x940dc
	ldr r1, [r7, #84]	@ 000940dc 796d
.org 0x940de
	ldr r2, [r7, #88]	@ 000940de ba6d
.org 0x940e0
	adds r0, r7, #0	@ 000940e0 381c
.org 0x940e2
	bl 0x947b4	@ 000940e2 00f067fb
.org 0x940e6
	cmp r0, #0	@ 000940e6 0028
.org 0x940e8
	beq.n 0x94172	@ 000940e8 43d0
.org 0x940ea
	movs r0, #42	@ 000940ea 2a20
.org 0x940ec
	bl 0x2b10	@ 000940ec 6ef710fd
.org 0x940f0
	ldrb r1, [r7, #10]	@ 000940f0 b97a
.org 0x940f2
	movs r0, #254	@ 000940f2 fe20
.org 0x940f4
	ands r0, r1	@ 000940f4 0840
.org 0x940f6
	strb r0, [r7, #10]	@ 000940f6 b872
.org 0x940f8
	ldr r6, [pc, #128]	@ 000940f8 204e
.org 0x940fa
	ldr r0, [r6, #0]	@ 000940fa 3068
.org 0x940fc
	ldr r5, [pc, #128]	@ 000940fc 204d
.org 0x940fe
	muls r0, r5	@ 000940fe 6843
.org 0x94100
	ldr r2, [pc, #128]	@ 00094100 204a
.org 0x94102
	adds r0, r0, r2	@ 00094102 8018
.org 0x94104
	lsls r0, r0, #1	@ 00094104 4000
.org 0x94106
	lsrs r4, r0, #1	@ 00094106 4408
.org 0x94108
	lsrs r0, r0, #17	@ 00094108 400c
.org 0x9410a
	movs r3, #7	@ 0009410a 0723
.org 0x9410c
	ands r0, r3	@ 0009410c 1840
.org 0x9410e
	subs r0, #3	@ 0009410e 0338
.org 0x94110
	lsls r0, r0, #8	@ 00094110 0002
.org 0x94112
	ldr r1, [r7, #84]	@ 00094112 796d
.org 0x94114
	adds r1, r1, r0	@ 00094114 0918
.org 0x94116
	str r1, [sp, #0]	@ 00094116 0091
.org 0x94118
	adds r0, r4, #0	@ 00094118 201c
.org 0x9411a
	muls r0, r5	@ 0009411a 6843
.org 0x9411c
	adds r0, r0, r2	@ 0009411c 8018
.org 0x9411e
	lsls r0, r0, #1	@ 0009411e 4000
.org 0x94120
	lsrs r1, r0, #1	@ 00094120 4108
.org 0x94122
	str r1, [r6, #0]	@ 00094122 3160
.org 0x94124
	lsrs r0, r0, #17	@ 00094124 400c
.org 0x94126
	ands r0, r3	@ 00094126 1840
.org 0x94128
	lsls r0, r0, #8	@ 00094128 0002
.org 0x9412a
	ldr r1, [pc, #92]	@ 0009412a 1749
.org 0x9412c
	adds r0, r0, r1	@ 0009412c 4018
.org 0x9412e
	ldr r1, [r7, #88]	@ 0009412e b96d
.org 0x94130
	adds r1, r1, r0	@ 00094130 0918
.org 0x94132
	str r1, [sp, #4]	@ 00094132 0191
.org 0x94134
	movs r0, #1	@ 00094134 0120
.org 0x94136
	mov r1, sp	@ 00094136 6946
.org 0x94138
	bl 0xd0c88	@ 00094138 3cf0a6fd
.org 0x9413c
	adds r0, r7, #0	@ 0009413c 381c
.org 0x9413e
	bl 0x94df0	@ 0009413e 00f057fe
.org 0x94142
	adds r0, r7, #0	@ 00094142 381c
.org 0x94144
	bl 0x94f00	@ 00094144 00f0dcfe
.org 0x94148
	ldr r2, [pc, #64]	@ 00094148 104a
.org 0x9414a
	ldrh r1, [r2, #12]	@ 0009414a 9189
.org 0x9414c
	ldr r0, [pc, #64]	@ 0009414c 1048
.org 0x9414e
	cmp r1, r0	@ 0009414e 8142
.org 0x94150
	bhi.n 0x94156	@ 00094150 01d8
.org 0x94152
	adds r0, r1, #1	@ 00094152 481c
.org 0x94154
	strh r0, [r2, #12]	@ 00094154 9081
.org 0x94156
	adds r1, r7, #0	@ 00094156 391c
.org 0x94158
	adds r1, #84	@ 00094158 5431
.org 0x9415a
	adds r0, r7, #0	@ 0009415a 381c
.org 0x9415c
	bl 0x2abe0	@ 0009415c 96f740fd
.org 0x94160
	ldr r1, [pc, #48]	@ 00094160 0c49
.org 0x94162
	ldrb r0, [r7, #9]	@ 00094162 787a
.org 0x94164
	lsls r0, r0, #2	@ 00094164 8000
.org 0x94166
	adds r0, r0, r1	@ 00094166 4018
.org 0x94168
	movs r1, #4	@ 00094168 0421
