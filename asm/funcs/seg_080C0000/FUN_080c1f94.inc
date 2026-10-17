@ FUN_080c1f94  entry 0x080c1f94  size 542
.thumb
.org 0xc1f94
FUN_080c1f94:
	push {r4, r5, r6, r7, lr}	@ 000c1f94 f0b5
.org 0xc1f96
	adds r4, r0, #0	@ 000c1f96 041c
.org 0xc1f98
	ldr r0, [pc, #16]	@ 000c1f98 0448
.org 0xc1f9a
	ldr r7, [r0, #0]	@ 000c1f9a 0768
.org 0xc1f9c
	ldrb r5, [r4, #14]	@ 000c1f9c a57b
.org 0xc1f9e
	cmp r5, #1	@ 000c1f9e 012d
.org 0xc1fa0
	beq.n 0xc208a	@ 000c1fa0 73d0
.org 0xc1fa2
	cmp r5, #1	@ 000c1fa2 012d
.org 0xc1fa4
	bgt.n 0xc1fb0	@ 000c1fa4 04dc
.org 0xc1fa6
	cmp r5, #0	@ 000c1fa6 002d
.org 0xc1fa8
	beq.n 0xc1fbe	@ 000c1fa8 09d0
.org 0xc1faa
	b.n 0xc21d0	@ 000c1faa 11e1
.org 0xc1fac
	.byte 0xf0,0xdb,0x02,0x02	@ 000c1fac data
.org 0xc1fb0
	cmp r5, #2	@ 000c1fb0 022d
.org 0xc1fb2
	bne.n 0xc1fb6	@ 000c1fb2 00d1
.org 0xc1fb4
	b.n 0xc2100	@ 000c1fb4 a4e0
.org 0xc1fb6
	cmp r5, #3	@ 000c1fb6 032d
.org 0xc1fb8
	bne.n 0xc1fbc	@ 000c1fb8 00d1
.org 0xc1fba
	b.n 0xc216c	@ 000c1fba d7e0
.org 0xc1fbc
	b.n 0xc21d0	@ 000c1fbc 08e1
.org 0xc1fbe
	ldr r0, [r4, #84]	@ 000c1fbe 606d
.org 0xc1fc0
	ldr r2, [r4, #92]	@ 000c1fc0 e26d
.org 0xc1fc2
	adds r0, r0, r2	@ 000c1fc2 8018
.org 0xc1fc4
	str r0, [r4, #84]	@ 000c1fc4 6065
.org 0xc1fc6
	ldr r0, [r4, #88]	@ 000c1fc6 a06d
.org 0xc1fc8
	ldr r1, [r4, #96]	@ 000c1fc8 216e
.org 0xc1fca
	adds r0, r0, r1	@ 000c1fca 4018
.org 0xc1fcc
	str r0, [r4, #88]	@ 000c1fcc a065
.org 0xc1fce
	ldr r0, [r4, #100]	@ 000c1fce 606e
.org 0xc1fd0
	adds r2, r2, r0	@ 000c1fd0 1218
.org 0xc1fd2
	str r2, [r4, #92]	@ 000c1fd2 e265
.org 0xc1fd4
	ldr r0, [r4, #104]	@ 000c1fd4 a06e
.org 0xc1fd6
	adds r3, r1, r0	@ 000c1fd6 0b18
.org 0xc1fd8
	str r3, [r4, #96]	@ 000c1fd8 2366
.org 0xc1fda
	ldrb r5, [r4, #10]	@ 000c1fda a57a
.org 0xc1fdc
	movs r0, #32	@ 000c1fdc 2020
.org 0xc1fde
	ands r0, r5	@ 000c1fde 2840
.org 0xc1fe0
	cmp r0, #0	@ 000c1fe0 0028
.org 0xc1fe2
	beq.n 0xc200e	@ 000c1fe2 14d0
.org 0xc1fe4
	cmp r2, #0	@ 000c1fe4 002a
.org 0xc1fe6
	bge.n 0xc1fea	@ 000c1fe6 00da
.org 0xc1fe8
	negs r2, r2	@ 000c1fe8 5242
.org 0xc1fea
	ldr r1, [pc, #24]	@ 000c1fea 0649
.org 0xc1fec
	ldrb r0, [r4, #17]	@ 000c1fec 607c
.org 0xc1fee
	lsls r0, r0, #2	@ 000c1fee 8000
.org 0xc1ff0
	adds r0, r0, r1	@ 000c1ff0 4018
.org 0xc1ff2
	ldr r1, [r0, #0]	@ 000c1ff2 0168
.org 0xc1ff4
	cmp r2, r1	@ 000c1ff4 8a42
.org 0xc1ff6
	ble.n 0xc201e	@ 000c1ff6 12dd
.org 0xc1ff8
	movs r0, #16	@ 000c1ff8 1020
.org 0xc1ffa
	ands r0, r5	@ 000c1ffa 2840
.org 0xc1ffc
	cmp r0, #0	@ 000c1ffc 0028
.org 0xc1ffe
	beq.n 0xc2008	@ 000c1ffe 03d0
.org 0xc2000
	str r1, [r4, #92]	@ 000c2000 e165
.org 0xc2002
	b.n 0xc201e	@ 000c2002 0ce0
.org 0xc2004
	.byte 0xec,0x53,0x86,0x08	@ 000c2004 data
.org 0xc2008
	negs r0, r1	@ 000c2008 4842
.org 0xc200a
	str r0, [r4, #92]	@ 000c200a e065
.org 0xc200c
	b.n 0xc201e	@ 000c200c 07e0
.org 0xc200e
	ldr r1, [pc, #68]	@ 000c200e 1149
.org 0xc2010
	ldrb r0, [r4, #17]	@ 000c2010 607c
.org 0xc2012
	lsls r0, r0, #2	@ 000c2012 8000
.org 0xc2014
	adds r0, r0, r1	@ 000c2014 4018
.org 0xc2016
	ldr r0, [r0, #0]	@ 000c2016 0068
.org 0xc2018
	cmp r3, r0	@ 000c2018 8342
.org 0xc201a
	ble.n 0xc201e	@ 000c201a 00dd
.org 0xc201c
	str r0, [r4, #96]	@ 000c201c 2066
.org 0xc201e
	adds r6, r4, #0	@ 000c201e 261c
.org 0xc2020
	adds r6, #140	@ 000c2020 8c36
.org 0xc2022
	ldr r5, [r6, #0]	@ 000c2022 3568
.org 0xc2024
	movs r0, #4	@ 000c2024 0420
.org 0xc2026
	ands r5, r0	@ 000c2026 0540
.org 0xc2028
	cmp r5, #0	@ 000c2028 002d
.org 0xc202a
	beq.n 0xc205c	@ 000c202a 17d0
.org 0xc202c
	ldr r1, [pc, #40]	@ 000c202c 0a49
.org 0xc202e
	adds r0, r4, #0	@ 000c202e 201c
.org 0xc2030
	bl 0x1cf00	@ 000c2030 5af766ff
.org 0xc2034
	movs r0, #158	@ 000c2034 9e20
.org 0xc2036
	lsls r0, r0, #2	@ 000c2036 8000
.org 0xc2038
	adds r2, r7, r0	@ 000c2038 3a18
.org 0xc203a
	ldrb r0, [r2, #0]	@ 000c203a 1078
.org 0xc203c
	adds r0, #1	@ 000c203c 0130
.org 0xc203e
	movs r1, #0	@ 000c203e 0021
.org 0xc2040
	strb r0, [r2, #0]	@ 000c2040 1070
.org 0xc2042
	str r1, [r6, #0]	@ 000c2042 3160
.org 0xc2044
	adds r0, r4, #0	@ 000c2044 201c
.org 0xc2046
	adds r0, #144	@ 000c2046 9030
.org 0xc2048
	str r1, [r0, #0]	@ 000c2048 0160
.org 0xc204a
	adds r0, #4	@ 000c204a 0430
.org 0xc204c
	strb r1, [r0, #0]	@ 000c204c 0170
.org 0xc204e
	ldrb r1, [r4, #10]	@ 000c204e a17a
.org 0xc2050
	movs r0, #251	@ 000c2050 fb20
.org 0xc2052
	b.n 0xc20f0	@ 000c2052 4de0
.org 0xc2054
	.byte 0xec,0x53,0x86,0x08	@ 000c2054 data
.org 0xc2058
	.byte 0x01,0x3e,0x00,0x00	@ 000c2058 data
.org 0xc205c
	ldr r0, [r4, #84]	@ 000c205c 606d
.org 0xc205e
	ldr r1, [r4, #88]	@ 000c205e a16d
.org 0xc2060
	bl 0x7c7c	@ 000c2060 45f70cfe
.org 0xc2064
	lsls r0, r0, #16	@ 000c2064 0004
.org 0xc2066
	cmp r0, #0	@ 000c2066 0028
.org 0xc2068
	bne.n 0xc206c	@ 000c2068 00d1
.org 0xc206a
	b.n 0xc21d0	@ 000c206a b1e0
.org 0xc206c
	str r5, [r6, #0]	@ 000c206c 3560
.org 0xc206e
	adds r0, r4, #0	@ 000c206e 201c
.org 0xc2070
	adds r0, #144	@ 000c2070 9030
.org 0xc2072
	str r5, [r0, #0]	@ 000c2072 0560
.org 0xc2074
	adds r0, #4	@ 000c2074 0430
.org 0xc2076
	strb r5, [r0, #0]	@ 000c2076 0570
.org 0xc2078
	ldrb r1, [r4, #10]	@ 000c2078 a17a
.org 0xc207a
	movs r0, #251	@ 000c207a fb20
.org 0xc207c
	ands r0, r1	@ 000c207c 0840
.org 0xc207e
	strb r0, [r4, #10]	@ 000c207e a072
.org 0xc2080
	movs r0, #32	@ 000c2080 2020
.org 0xc2082
	strb r0, [r4, #18]	@ 000c2082 a074
.org 0xc2084
	movs r0, #3	@ 000c2084 0320
.org 0xc2086
	strb r0, [r4, #14]	@ 000c2086 a073
.org 0xc2088
	b.n 0xc21d0	@ 000c2088 a2e0
.org 0xc208a
	ldr r0, [pc, #24]	@ 000c208a 0648
.org 0xc208c
	ldrh r1, [r0, #8]	@ 000c208c 0189
.org 0xc208e
	movs r0, #8	@ 000c208e 0820
.org 0xc2090
	ands r0, r1	@ 000c2090 0840
.org 0xc2092
	lsls r0, r0, #16	@ 000c2092 0004
.org 0xc2094
	lsrs r5, r0, #16	@ 000c2094 050c
.org 0xc2096
	cmp r5, #0	@ 000c2096 002d
.org 0xc2098
	beq.n 0xc20a8	@ 000c2098 06d0
.org 0xc209a
	ldrb r1, [r4, #10]	@ 000c209a a17a
.org 0xc209c
	movs r0, #254	@ 000c209c fe20
.org 0xc209e
	ands r0, r1	@ 000c209e 0840
.org 0xc20a0
	movs r2, #0	@ 000c20a0 0022
.org 0xc20a2
	b.n 0xc219c	@ 000c20a2 7be0
.org 0xc20a4
	.byte 0x10,0xe9,0x02,0x02	@ 000c20a4 data
.org 0xc20a8
	ldr r0, [r7, #84]	@ 000c20a8 786d
.org 0xc20aa
	str r0, [r4, #84]	@ 000c20aa 6065
.org 0xc20ac
	ldr r0, [r7, #88]	@ 000c20ac b86d
.org 0xc20ae
	ldr r1, [pc, #76]	@ 000c20ae 1349
.org 0xc20b0
	adds r0, r0, r1	@ 000c20b0 4018
.org 0xc20b2
	str r0, [r4, #88]	@ 000c20b2 a065
.org 0xc20b4
	adds r0, r4, #0	@ 000c20b4 201c
.org 0xc20b6
	adds r0, #115	@ 000c20b6 7330
.org 0xc20b8
	ldrb r0, [r0, #0]	@ 000c20b8 0078
.org 0xc20ba
	cmp r0, #3	@ 000c20ba 0328
.org 0xc20bc
	beq.n 0xc20c0	@ 000c20bc 00d0
.org 0xc20be
	b.n 0xc21d0	@ 000c20be 87e0
.org 0xc20c0
	adds r0, r4, #0	@ 000c20c0 201c
.org 0xc20c2
	movs r1, #0	@ 000c20c2 0021
.org 0xc20c4
	bl 0xc1ad4	@ 000c20c4 fff706fd
.org 0xc20c8
	adds r0, r4, #0	@ 000c20c8 201c
.org 0xc20ca
	movs r1, #1	@ 000c20ca 0121
.org 0xc20cc
	bl 0xc1ad4	@ 000c20cc fff702fd
.org 0xc20d0
	adds r0, r4, #0	@ 000c20d0 201c
.org 0xc20d2
	movs r1, #2	@ 000c20d2 0221
.org 0xc20d4
	bl 0xc1ad4	@ 000c20d4 fff7fefc
.org 0xc20d8
	adds r0, r4, #0	@ 000c20d8 201c
.org 0xc20da
	movs r1, #3	@ 000c20da 0321
.org 0xc20dc
	bl 0xc1ad4	@ 000c20dc fff7fafc
.org 0xc20e0
	strb r5, [r4, #18]	@ 000c20e0 a574
.org 0xc20e2
	adds r1, r4, #0	@ 000c20e2 211c
.org 0xc20e4
	adds r1, #192	@ 000c20e4 c031
.org 0xc20e6
	movs r0, #240	@ 000c20e6 f020
.org 0xc20e8
	lsls r0, r0, #1	@ 000c20e8 4000
.org 0xc20ea
	str r0, [r1, #0]	@ 000c20ea 0860
.org 0xc20ec
	ldrb r1, [r4, #10]	@ 000c20ec a17a
.org 0xc20ee
	movs r0, #254	@ 000c20ee fe20
.org 0xc20f0
	ands r0, r1	@ 000c20f0 0840
.org 0xc20f2
	strb r0, [r4, #10]	@ 000c20f2 a072
.org 0xc20f4
	ldrb r0, [r4, #14]	@ 000c20f4 a07b
.org 0xc20f6
	adds r0, #1	@ 000c20f6 0130
.org 0xc20f8
	strb r0, [r4, #14]	@ 000c20f8 a073
.org 0xc20fa
	b.n 0xc21d0	@ 000c20fa 69e0
.org 0xc20fc
	.byte 0x00,0xec,0xff,0xff	@ 000c20fc data
.org 0xc2100
	ldr r0, [pc, #20]	@ 000c2100 0548
.org 0xc2102
	ldrh r1, [r0, #8]	@ 000c2102 0189
.org 0xc2104
	movs r0, #8	@ 000c2104 0820
.org 0xc2106
	ands r0, r1	@ 000c2106 0840
.org 0xc2108
	cmp r0, #0	@ 000c2108 0028
.org 0xc210a
	beq.n 0xc211c	@ 000c210a 07d0
.org 0xc210c
	ldrb r1, [r4, #10]	@ 000c210c a17a
.org 0xc210e
	movs r0, #254	@ 000c210e fe20
.org 0xc2110
	ands r0, r1	@ 000c2110 0840
.org 0xc2112
	movs r2, #0	@ 000c2112 0022
.org 0xc2114
	b.n 0xc219c	@ 000c2114 42e0
.org 0xc2116
	.byte 0x00	@ 000c2116 data
.org 0xc2117
	.byte 0x00	@ 000c2117 data
.org 0xc2118
	.byte 0x10,0xe9,0x02,0x02	@ 000c2118 data
.org 0xc211c
	ldr r0, [r7, #84]	@ 000c211c 786d
.org 0xc211e
	str r0, [r4, #84]	@ 000c211e 6065
.org 0xc2120
	ldr r0, [r7, #88]	@ 000c2120 b86d
.org 0xc2122
	ldr r1, [pc, #64]	@ 000c2122 1049
.org 0xc2124
	adds r0, r0, r1	@ 000c2124 4018
.org 0xc2126
	str r0, [r4, #88]	@ 000c2126 a065
.org 0xc2128
	adds r0, r7, #0	@ 000c2128 381c
.org 0xc212a
	bl 0x2b700	@ 000c212a 69f7e9fa
.org 0xc212e
	ldrb r1, [r4, #18]	@ 000c212e a17c
.org 0xc2130
	adds r0, r0, r1	@ 000c2130 4018
.org 0xc2132
	strb r0, [r4, #18]	@ 000c2132 a074
.org 0xc2134
	adds r1, r4, #0	@ 000c2134 211c
.org 0xc2136
	adds r1, #192	@ 000c2136 c031
.org 0xc2138
	ldr r0, [r1, #0]	@ 000c2138 0868
.org 0xc213a
	subs r0, #1	@ 000c213a 0138
.org 0xc213c
	str r0, [r1, #0]	@ 000c213c 0860
.org 0xc213e
	movs r1, #1	@ 000c213e 0121
.org 0xc2140
	negs r1, r1	@ 000c2140 4942
.org 0xc2142
	cmp r0, r1	@ 000c2142 8842
.org 0xc2144
	beq.n 0xc214c	@ 000c2144 02d0
.org 0xc2146
	ldrb r0, [r4, #18]	@ 000c2146 a07c
.org 0xc2148
	cmp r0, #64	@ 000c2148 4028
.org 0xc214a
	bls.n 0xc21d0	@ 000c214a 41d9
.org 0xc214c
	ldr r1, [pc, #24]	@ 000c214c 0649
.org 0xc214e
	ldrb r0, [r4, #9]	@ 000c214e 607a
.org 0xc2150
	lsls r0, r0, #2	@ 000c2150 8000
.org 0xc2152
	adds r0, r0, r1	@ 000c2152 4018
.org 0xc2154
	str r5, [r4, #12]	@ 000c2154 e560
.org 0xc2156
	ldr r0, [r0, #0]	@ 000c2156 0068
.org 0xc2158
	ldr r0, [r0, #8]	@ 000c2158 8068
.org 0xc215a
	str r0, [r4, #20]	@ 000c215a 6061
.org 0xc215c
	adds r0, r4, #0	@ 000c215c 201c
.org 0xc215e
	bl 0xc1bd8	@ 000c215e fff73bfd
.org 0xc2162
	b.n 0xc21d6	@ 000c2162 38e0
.org 0xc2164
	.byte 0x00,0xec,0xff,0xff	@ 000c2164 data
.org 0xc2168
	.byte 0xf4,0x49,0x86,0x08	@ 000c2168 data
.org 0xc216c
	ldrb r1, [r4, #18]	@ 000c216c a17c
.org 0xc216e
	movs r0, #1	@ 000c216e 0120
.org 0xc2170
	ands r0, r1	@ 000c2170 0840
.org 0xc2172
	adds r2, r1, #0	@ 000c2172 0a1c
.org 0xc2174
	cmp r0, #0	@ 000c2174 0028
.org 0xc2176
	beq.n 0xc2180	@ 000c2176 03d0
.org 0xc2178
	ldrb r1, [r4, #10]	@ 000c2178 a17a
.org 0xc217a
	movs r0, #254	@ 000c217a fe20
.org 0xc217c
	ands r0, r1	@ 000c217c 0840
.org 0xc217e
	b.n 0xc2186	@ 000c217e 02e0
.org 0xc2180
	ldrb r0, [r4, #10]	@ 000c2180 a07a
.org 0xc2182
	movs r1, #1	@ 000c2182 0121
.org 0xc2184
	orrs r0, r1	@ 000c2184 0843
.org 0xc2186
	strb r0, [r4, #10]	@ 000c2186 a072
.org 0xc2188
	subs r0, r2, #1	@ 000c2188 501e
.org 0xc218a
	movs r2, #0	@ 000c218a 0022
.org 0xc218c
	strb r0, [r4, #18]	@ 000c218c a074
.org 0xc218e
	lsls r0, r0, #24	@ 000c218e 0006
.org 0xc2190
	lsrs r0, r0, #24	@ 000c2190 000e
.org 0xc2192
	cmp r0, #255	@ 000c2192 ff28
.org 0xc2194
	bne.n 0xc21d0	@ 000c2194 1cd1
.org 0xc2196
	ldrb r1, [r4, #10]	@ 000c2196 a17a
.org 0xc2198
	movs r0, #254	@ 000c2198 fe20
.org 0xc219a
	ands r0, r1	@ 000c219a 0840
.org 0xc219c
	movs r1, #253	@ 000c219c fd21
.org 0xc219e
	ands r0, r1	@ 000c219e 0840
.org 0xc21a0
	strb r0, [r4, #10]	@ 000c21a0 a072
.org 0xc21a2
	adds r0, r4, #0	@ 000c21a2 201c
.org 0xc21a4
	adds r0, #140	@ 000c21a4 8c30
.org 0xc21a6
	str r2, [r0, #0]	@ 000c21a6 0260
.org 0xc21a8
	adds r0, #4	@ 000c21a8 0430
.org 0xc21aa
	str r2, [r0, #0]	@ 000c21aa 0260
.org 0xc21ac
	adds r0, #4	@ 000c21ac 0430
.org 0xc21ae
	strb r2, [r0, #0]	@ 000c21ae 0270
.org 0xc21b0
	ldrb r1, [r4, #10]	@ 000c21b0 a17a
