@ FUN_08024034  entry 0x08024034  size 524
.thumb
.org 0x24034
FUN_08024034:
	push {r4, r5, lr}	@ 00024034 30b5
.org 0x24036
	adds r2, r0, #0	@ 00024036 021c
.org 0x24038
	ldr r3, [r2, #32]	@ 00024038 136a
.org 0x2403a
	movs r0, #190	@ 0002403a be20
.org 0x2403c
	lsls r0, r0, #1	@ 0002403c 4000
.org 0x2403e
	adds r5, r2, r0	@ 0002403e 1518
.org 0x24040
	ldrb r0, [r5, #0]	@ 00024040 2878
.org 0x24042
	cmp r0, #0	@ 00024042 0028
.org 0x24044
	bne.n 0x240f8	@ 00024044 58d1
.org 0x24046
	ldr r3, [pc, #48]	@ 00024046 0c4b
.org 0x24048
	ldrh r1, [r3, #8]	@ 00024048 1989
.org 0x2404a
	movs r0, #1	@ 0002404a 0120
.org 0x2404c
	orrs r0, r1	@ 0002404c 0843
.org 0x2404e
	strh r0, [r3, #8]	@ 0002404e 1881
.org 0x24050
	ldr r2, [pc, #40]	@ 00024050 0a4a
.org 0x24052
	ldrb r1, [r2, #4]	@ 00024052 1179
.org 0x24054
	movs r0, #8	@ 00024054 0820
.org 0x24056
	orrs r0, r1	@ 00024056 0843
.org 0x24058
	strb r0, [r2, #4]	@ 00024058 1071
.org 0x2405a
	ldrb r4, [r3, #2]	@ 0002405a 9c78
.org 0x2405c
	cmp r4, #0	@ 0002405c 002c
.org 0x2405e
	bne.n 0x24084	@ 0002405e 11d1
.org 0x24060
	adds r0, r3, #0	@ 00024060 181c
.org 0x24062
	adds r0, #16	@ 00024062 1030
.org 0x24064
	ldr r1, [pc, #24]	@ 00024064 0649
.org 0x24066
	ldr r1, [r1, #36]	@ 00024066 496a
.org 0x24068
	ldr r1, [r1, #56]	@ 00024068 896b
.org 0x2406a
	bl 0x275f0	@ 0002406a 03f0c1fa
.org 0x2406e
	movs r0, #2	@ 0002406e 0220
.org 0x24070
	bl 0x1f63c	@ 00024070 fbf7e4fa
.org 0x24074
	movs r0, #2	@ 00024074 0220
.org 0x24076
	b.n 0x24296	@ 00024076 0ee1
.org 0x24078
	.byte 0x10,0xe9,0x02,0x02	@ 00024078 data
.org 0x2407c
	.byte 0xb0,0xe8,0x02,0x02	@ 0002407c data
.org 0x24080
	.byte 0xf8,0x2c,0x84,0x08	@ 00024080 data
.org 0x24084
	cmp r4, #2	@ 00024084 022c
.org 0x24086
	bne.n 0x240a0	@ 00024086 0bd1
.org 0x24088
	adds r0, r3, #0	@ 00024088 181c
.org 0x2408a
	adds r0, #16	@ 0002408a 1030
.org 0x2408c
	ldr r1, [pc, #12]	@ 0002408c 0349
.org 0x2408e
	ldr r1, [r1, #36]	@ 0002408e 496a
.org 0x24090
	ldr r1, [r1, #8]	@ 00024090 8968
.org 0x24092
	bl 0x275f0	@ 00024092 03f0adfa
.org 0x24096
	strb r4, [r5, #0]	@ 00024096 2c70
.org 0x24098
	b.n 0x24298	@ 00024098 fee0
.org 0x2409a
	.byte 0x00	@ 0002409a data
.org 0x2409b
	.byte 0x00	@ 0002409b data
.org 0x2409c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002409c data
.org 0x240a0
	cmp r4, #3	@ 000240a0 032c
.org 0x240a2
	bne.n 0x240c0	@ 000240a2 0dd1
.org 0x240a4
	adds r0, r3, #0	@ 000240a4 181c
.org 0x240a6
	adds r0, #16	@ 000240a6 1030
.org 0x240a8
	ldr r1, [pc, #16]	@ 000240a8 0449
.org 0x240aa
	ldr r1, [r1, #36]	@ 000240aa 496a
.org 0x240ac
	ldr r1, [r1, #16]	@ 000240ac 0969
.org 0x240ae
	bl 0x275f0	@ 000240ae 03f09ffa
.org 0x240b2
	movs r0, #4	@ 000240b2 0420
.org 0x240b4
	bl 0x1f63c	@ 000240b4 fbf7c2fa
.org 0x240b8
	movs r0, #4	@ 000240b8 0420
.org 0x240ba
	b.n 0x24296	@ 000240ba ece0
.org 0x240bc
	.byte 0xf8,0x2c,0x84,0x08	@ 000240bc data
.org 0x240c0
	cmp r4, #4	@ 000240c0 042c
.org 0x240c2
	bne.n 0x240dc	@ 000240c2 0bd1
.org 0x240c4
	adds r0, r3, #0	@ 000240c4 181c
.org 0x240c6
	adds r0, #16	@ 000240c6 1030
.org 0x240c8
	ldr r1, [pc, #12]	@ 000240c8 0349
.org 0x240ca
	ldr r1, [r1, #36]	@ 000240ca 496a
.org 0x240cc
	ldr r1, [r1, #24]	@ 000240cc 8969
.org 0x240ce
	bl 0x275f0	@ 000240ce 03f08ffa
.org 0x240d2
	movs r0, #5	@ 000240d2 0520
.org 0x240d4
	b.n 0x24296	@ 000240d4 dfe0
.org 0x240d6
	.byte 0x00	@ 000240d6 data
.org 0x240d7
	.byte 0x00	@ 000240d7 data
.org 0x240d8
	.byte 0xf8,0x2c,0x84,0x08	@ 000240d8 data
.org 0x240dc
	cmp r4, #5	@ 000240dc 052c
.org 0x240de
	beq.n 0x240e2	@ 000240de 00d0
.org 0x240e0
	b.n 0x24298	@ 000240e0 dae0
.org 0x240e2
	adds r0, r3, #0	@ 000240e2 181c
.org 0x240e4
	adds r0, #16	@ 000240e4 1030
.org 0x240e6
	ldr r1, [pc, #12]	@ 000240e6 0349
.org 0x240e8
	ldr r1, [r1, #36]	@ 000240e8 496a
.org 0x240ea
	ldr r1, [r1, #32]	@ 000240ea 096a
.org 0x240ec
	bl 0x275f0	@ 000240ec 03f080fa
.org 0x240f0
	movs r0, #9	@ 000240f0 0920
.org 0x240f2
	b.n 0x24296	@ 000240f2 d0e0
.org 0x240f4
	.byte 0xf8,0x2c,0x84,0x08	@ 000240f4 data
.org 0x240f8
	cmp r0, #2	@ 000240f8 0228
.org 0x240fa
	bne.n 0x2410c	@ 000240fa 07d1
.org 0x240fc
	ldr r1, [r3, #84]	@ 000240fc 596d
.org 0x240fe
	ldr r0, [pc, #8]	@ 000240fe 0248
.org 0x24100
	cmp r1, r0	@ 00024100 8142
.org 0x24102
	ble.n 0x2410c	@ 00024102 03dd
.org 0x24104
	movs r0, #3	@ 00024104 0320
.org 0x24106
	b.n 0x24296	@ 00024106 c6e0
.org 0x24108
	.byte 0x00,0x50,0x19,0x00	@ 00024108 data
.org 0x2410c
	movs r0, #190	@ 0002410c be20
.org 0x2410e
	lsls r0, r0, #1	@ 0002410e 4000
.org 0x24110
	adds r4, r2, r0	@ 00024110 1418
.org 0x24112
	ldrb r0, [r4, #0]	@ 00024112 2078
.org 0x24114
	cmp r0, #3	@ 00024114 0328
.org 0x24116
	bne.n 0x24122	@ 00024116 04d1
.org 0x24118
	ldr r1, [r3, #84]	@ 00024118 596d
.org 0x2411a
	movs r0, #210	@ 0002411a d220
.org 0x2411c
	lsls r0, r0, #13	@ 0002411c 4003
.org 0x2411e
	cmp r1, r0	@ 0002411e 8142
.org 0x24120
	bgt.n 0x24138	@ 00024120 0adc
.org 0x24122
	movs r0, #190	@ 00024122 be20
.org 0x24124
	lsls r0, r0, #1	@ 00024124 4000
.org 0x24126
	adds r4, r2, r0	@ 00024126 1418
.org 0x24128
	ldrb r0, [r4, #0]	@ 00024128 2078
.org 0x2412a
	cmp r0, #4	@ 0002412a 0428
.org 0x2412c
	bne.n 0x24168	@ 0002412c 1cd1
.org 0x2412e
	ldr r1, [r3, #84]	@ 0002412e 596d
.org 0x24130
	movs r0, #210	@ 00024130 d220
.org 0x24132
	lsls r0, r0, #13	@ 00024132 4003
.org 0x24134
	cmp r1, r0	@ 00024134 8142
.org 0x24136
	ble.n 0x24168	@ 00024136 17dd
.org 0x24138
	ldr r0, [pc, #32]	@ 00024138 0848
.org 0x2413a
	ldr r1, [pc, #36]	@ 0002413a 0949
.org 0x2413c
	ldr r1, [r1, #36]	@ 0002413c 496a
.org 0x2413e
	ldr r1, [r1, #20]	@ 0002413e 4969
.org 0x24140
	bl 0x275f0	@ 00024140 03f056fa
.org 0x24144
	movs r0, #4	@ 00024144 0420
.org 0x24146
	bl 0x1f63c	@ 00024146 fbf779fa
.org 0x2414a
	ldr r2, [pc, #24]	@ 0002414a 064a
.org 0x2414c
	ldrb r1, [r2, #4]	@ 0002414c 1179
.org 0x2414e
	movs r0, #8	@ 0002414e 0820
.org 0x24150
	orrs r0, r1	@ 00024150 0843
.org 0x24152
	strb r0, [r2, #4]	@ 00024152 1071
.org 0x24154
	movs r0, #5	@ 00024154 0520
.org 0x24156
	strb r0, [r4, #0]	@ 00024156 2070
.org 0x24158
	b.n 0x24298	@ 00024158 9ee0
.org 0x2415a
	.byte 0x00	@ 0002415a data
.org 0x2415b
	.byte 0x00	@ 0002415b data
.org 0x2415c
	.byte 0x20,0xe9,0x02,0x02	@ 0002415c data
.org 0x24160
	.byte 0xf8,0x2c,0x84,0x08	@ 00024160 data
.org 0x24164
	.byte 0xb0,0xe8,0x02,0x02	@ 00024164 data
.org 0x24168
	movs r0, #190	@ 00024168 be20
.org 0x2416a
	lsls r0, r0, #1	@ 0002416a 4000
.org 0x2416c
	adds r5, r2, r0	@ 0002416c 1518
.org 0x2416e
	ldrb r0, [r5, #0]	@ 0002416e 2878
.org 0x24170
	cmp r0, #5	@ 00024170 0528
.org 0x24172
	bne.n 0x2417e	@ 00024172 04d1
.org 0x24174
	movs r0, #3	@ 00024174 0320
.org 0x24176
	bl 0x1f63c	@ 00024176 fbf761fa
.org 0x2417a
	movs r0, #6	@ 0002417a 0620
.org 0x2417c
	b.n 0x24296	@ 0002417c 8be0
.org 0x2417e
	cmp r0, #6	@ 0002417e 0628
.org 0x24180
	bne.n 0x241e4	@ 00024180 30d1
.org 0x24182
	ldr r4, [pc, #76]	@ 00024182 134c
.org 0x24184
	ldrh r1, [r4, #8]	@ 00024184 2189
.org 0x24186
	movs r0, #16	@ 00024186 1020
.org 0x24188
	ands r0, r1	@ 00024188 0840
.org 0x2418a
	cmp r0, #0	@ 0002418a 0028
.org 0x2418c
	beq.n 0x241e4	@ 0002418c 2ad0
.org 0x2418e
	ldr r1, [pc, #68]	@ 0002418e 1149
.org 0x24190
	ldrb r2, [r1, #0]	@ 00024190 0a78
.org 0x24192
	movs r0, #128	@ 00024192 8020
.org 0x24194
	orrs r0, r2	@ 00024194 1043
.org 0x24196
	strb r0, [r1, #0]	@ 00024196 0870
.org 0x24198
	ldrb r2, [r1, #1]	@ 00024198 4a78
.org 0x2419a
	movs r0, #2	@ 0002419a 0220
.org 0x2419c
	orrs r0, r2	@ 0002419c 1043
.org 0x2419e
	strb r0, [r1, #1]	@ 0002419e 4870
.org 0x241a0
	adds r0, r4, #0	@ 000241a0 201c
.org 0x241a2
	adds r0, #16	@ 000241a2 1030
.org 0x241a4
	ldr r1, [pc, #48]	@ 000241a4 0c49
.org 0x241a6
	ldr r1, [r1, #36]	@ 000241a6 496a
.org 0x241a8
	ldr r1, [r1, #28]	@ 000241a8 c969
.org 0x241aa
	bl 0x275f0	@ 000241aa 03f021fa
.org 0x241ae
	ldrh r0, [r4, #8]	@ 000241ae 2089
.org 0x241b0
	ldr r2, [pc, #40]	@ 000241b0 0a4a
.org 0x241b2
	ands r2, r0	@ 000241b2 0240
.org 0x241b4
	ldrb r1, [r4, #18]	@ 000241b4 a17c
.org 0x241b6
	movs r0, #253	@ 000241b6 fd20
.org 0x241b8
	ands r0, r1	@ 000241b8 0840
.org 0x241ba
	strb r0, [r4, #18]	@ 000241ba a074
.org 0x241bc
	ldr r3, [pc, #32]	@ 000241bc 084b
.org 0x241be
	ldrb r1, [r3, #4]	@ 000241be 1979
.org 0x241c0
	movs r0, #247	@ 000241c0 f720
.org 0x241c2
	ands r0, r1	@ 000241c2 0840
.org 0x241c4
	strb r0, [r3, #4]	@ 000241c4 1871
.org 0x241c6
	movs r0, #1	@ 000241c6 0120
.org 0x241c8
	orrs r2, r0	@ 000241c8 0243
.org 0x241ca
	strh r2, [r4, #8]	@ 000241ca 2281
.org 0x241cc
	movs r0, #7	@ 000241cc 0720
.org 0x241ce
	b.n 0x24296	@ 000241ce 62e0
.org 0x241d0
	.byte 0x10,0xe9,0x02,0x02	@ 000241d0 data
.org 0x241d4
	.byte 0xe0,0x32,0x00,0x03	@ 000241d4 data
.org 0x241d8
	.byte 0xf8,0x2c,0x84,0x08	@ 000241d8 data
.org 0x241dc
	.byte 0xef,0xff,0x00,0x00	@ 000241dc data
.org 0x241e0
	.byte 0xb0,0xe8,0x02,0x02	@ 000241e0 data
.org 0x241e4
	movs r0, #190	@ 000241e4 be20
.org 0x241e6
	lsls r0, r0, #1	@ 000241e6 4000
.org 0x241e8
	adds r4, r2, r0	@ 000241e8 1418
.org 0x241ea
	ldrb r0, [r4, #0]	@ 000241ea 2078
.org 0x241ec
	cmp r0, #7	@ 000241ec 0728
.org 0x241ee
	bne.n 0x24208	@ 000241ee 0bd1
.org 0x241f0
	ldr r1, [pc, #16]	@ 000241f0 0449
.org 0x241f2
	ldrb r2, [r1, #0]	@ 000241f2 0a78
.org 0x241f4
	movs r0, #127	@ 000241f4 7f20
.org 0x241f6
	ands r0, r2	@ 000241f6 1040
.org 0x241f8
	movs r2, #0	@ 000241f8 0022
.org 0x241fa
	strb r0, [r1, #0]	@ 000241fa 0870
.org 0x241fc
	strb r2, [r1, #1]	@ 000241fc 4a70
.org 0x241fe
	movs r0, #8	@ 000241fe 0820
.org 0x24200
	strb r0, [r4, #0]	@ 00024200 2070
.org 0x24202
	b.n 0x24298	@ 00024202 49e0
.org 0x24204
	.byte 0xe0,0x32,0x00,0x03	@ 00024204 data
.org 0x24208
	cmp r0, #8	@ 00024208 0828
.org 0x2420a
	bne.n 0x24234	@ 0002420a 13d1
.org 0x2420c
	ldr r1, [r3, #84]	@ 0002420c 596d
.org 0x2420e
	ldr r0, [pc, #28]	@ 0002420e 0748
.org 0x24210
	cmp r1, r0	@ 00024210 8142
.org 0x24212
	ble.n 0x24234	@ 00024212 0fdd
.org 0x24214
	movs r0, #5	@ 00024214 0520
.org 0x24216
	bl 0x1f63c	@ 00024216 fbf711fa
.org 0x2421a
	ldr r2, [pc, #20]	@ 0002421a 054a
.org 0x2421c
	ldrb r1, [r2, #4]	@ 0002421c 1179
.org 0x2421e
	movs r0, #8	@ 0002421e 0820
.org 0x24220
	orrs r0, r1	@ 00024220 0843
.org 0x24222
	strb r0, [r2, #4]	@ 00024222 1071
.org 0x24224
	movs r0, #9	@ 00024224 0920
.org 0x24226
	strb r0, [r4, #0]	@ 00024226 2070
.org 0x24228
	b.n 0x24298	@ 00024228 36e0
.org 0x2422a
	.byte 0x00	@ 0002422a data
.org 0x2422b
	.byte 0x00	@ 0002422b data
.org 0x2422c
	.byte 0xff,0x3f,0x1b,0x00	@ 0002422c data
.org 0x24230
	.byte 0xb0,0xe8,0x02,0x02	@ 00024230 data
.org 0x24234
	movs r0, #190	@ 00024234 be20
.org 0x24236
	lsls r0, r0, #1	@ 00024236 4000
.org 0x24238
	adds r5, r2, r0	@ 00024238 1518
.org 0x2423a
	ldrb r0, [r5, #0]	@ 0002423a 2878
.org 0x2423c
	cmp r0, #9	@ 0002423c 0928
.org 0x2423e
	bne.n 0x24270	@ 0002423e 17d1
