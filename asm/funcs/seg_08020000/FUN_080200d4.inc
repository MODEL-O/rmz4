@ FUN_080200d4  entry 0x080200d4  size 738
.thumb
.org 0x200d4
FUN_080200d4:
	push {r4, r5, r6, r7, lr}	@ 000200d4 f0b5
.org 0x200d6
	mov r7, r9	@ 000200d6 4f46
.org 0x200d8
	mov r6, r8	@ 000200d8 4646
.org 0x200da
	push {r6, r7}	@ 000200da c0b4
.org 0x200dc
	adds r5, r0, #0	@ 000200dc 051c
.org 0x200de
	ldr r0, [r5, #32]	@ 000200de 286a
.org 0x200e0
	mov r9, r0	@ 000200e0 8146
.org 0x200e2
	movs r1, #190	@ 000200e2 be21
.org 0x200e4
	lsls r1, r1, #1	@ 000200e4 4900
.org 0x200e6
	adds r7, r5, r1	@ 000200e6 6f18
.org 0x200e8
	ldrb r0, [r7, #0]	@ 000200e8 3878
.org 0x200ea
	cmp r0, #0	@ 000200ea 0028
.org 0x200ec
	beq.n 0x200f0	@ 000200ec 00d0
.org 0x200ee
	b.n 0x20264	@ 000200ee b9e0
.org 0x200f0
	ldr r6, [pc, #88]	@ 000200f0 164e
.org 0x200f2
	ldrh r1, [r6, #8]	@ 000200f2 3189
.org 0x200f4
	movs r0, #1	@ 000200f4 0120
.org 0x200f6
	movs r2, #0	@ 000200f6 0022
.org 0x200f8
	mov r8, r2	@ 000200f8 9046
.org 0x200fa
	adds r3, r0, #0	@ 000200fa 031c
.org 0x200fc
	orrs r3, r1	@ 000200fc 0b43
.org 0x200fe
	strh r3, [r6, #8]	@ 000200fe 3381
.org 0x20100
	ldr r2, [pc, #76]	@ 00020100 134a
.org 0x20102
	ldrb r1, [r2, #4]	@ 00020102 1179
.org 0x20104
	movs r0, #8	@ 00020104 0820
.org 0x20106
	movs r4, #0	@ 00020106 0024
.org 0x20108
	mov ip, r4	@ 00020108 a446
.org 0x2010a
	orrs r0, r1	@ 0002010a 0843
.org 0x2010c
	strb r0, [r2, #4]	@ 0002010c 1071
.org 0x2010e
	ldrb r4, [r6, #2]	@ 0002010e b478
.org 0x20110
	cmp r4, #0	@ 00020110 002c
.org 0x20112
	bne.n 0x20164	@ 00020112 27d1
.org 0x20114
	ldr r0, [pc, #60]	@ 00020114 0f48
.org 0x20116
	ldr r1, [pc, #64]	@ 00020116 1049
.org 0x20118
	adds r0, r0, r1	@ 00020118 4018
.org 0x2011a
	ldr r0, [r0, #0]	@ 0002011a 0068
.org 0x2011c
	adds r0, #180	@ 0002011c b430
.org 0x2011e
	ldrb r2, [r0, #12]	@ 0002011e 027b
.org 0x20120
	movs r3, #196	@ 00020120 c423
.org 0x20122
	lsls r3, r3, #1	@ 00020122 5b00
.org 0x20124
	adds r1, r5, r3	@ 00020124 e918
.org 0x20126
	strb r2, [r1, #0]	@ 00020126 0a70
.org 0x20128
	ldrb r0, [r0, #13]	@ 00020128 407b
.org 0x2012a
	ldr r4, [pc, #48]	@ 0002012a 0c4c
.org 0x2012c
	adds r1, r5, r4	@ 0002012c 2919
.org 0x2012e
	strb r0, [r1, #0]	@ 0002012e 0870
.org 0x20130
	adds r0, r6, #0	@ 00020130 301c
.org 0x20132
	adds r0, #16	@ 00020132 1030
.org 0x20134
	ldr r1, [pc, #40]	@ 00020134 0a49
.org 0x20136
	ldr r1, [r1, #4]	@ 00020136 4968
.org 0x20138
	ldr r1, [r1, #4]	@ 00020138 4968
.org 0x2013a
	bl 0x275f0	@ 0002013a 07f059fa
.org 0x2013e
	movs r0, #2	@ 0002013e 0220
.org 0x20140
	bl 0x1f63c	@ 00020140 fff77cfa
.org 0x20144
	movs r0, #2	@ 00020144 0220
.org 0x20146
	strb r0, [r7, #0]	@ 00020146 3870
.org 0x20148
	b.n 0x20410	@ 00020148 62e1
.org 0x2014a
	.byte 0x00	@ 0002014a data
.org 0x2014b
	.byte 0x00	@ 0002014b data
.org 0x2014c
	.byte 0x10,0xe9,0x02,0x02	@ 0002014c data
.org 0x20150
	.byte 0xb0,0xe8,0x02,0x02	@ 00020150 data
.org 0x20154
	.byte 0x10,0xf6,0x02,0x02	@ 00020154 data
.org 0x20158
	.byte 0xa8,0x63,0x00,0x00	@ 00020158 data
.org 0x2015c
	.byte 0x89,0x01,0x00,0x00	@ 0002015c data
.org 0x20160
	.byte 0xf8,0x2c,0x84,0x08	@ 00020160 data
.org 0x20164
	cmp r4, #2	@ 00020164 022c
.org 0x20166
	bne.n 0x201a0	@ 00020166 1bd1
.org 0x20168
	adds r0, r6, #0	@ 00020168 301c
.org 0x2016a
	adds r0, #16	@ 0002016a 1030
.org 0x2016c
	ldr r1, [pc, #36]	@ 0002016c 0949
.org 0x2016e
	ldr r1, [r1, #4]	@ 0002016e 4968
.org 0x20170
	ldr r1, [r1, #8]	@ 00020170 8968
.org 0x20172
	bl 0x275f0	@ 00020172 07f03dfa
.org 0x20176
	movs r0, #3	@ 00020176 0320
.org 0x20178
	bl 0x1f63c	@ 00020178 fff760fa
.org 0x2017c
	ldr r1, [pc, #24]	@ 0002017c 0649
.org 0x2017e
	movs r2, #196	@ 0002017e c422
.org 0x20180
	lsls r2, r2, #1	@ 00020180 5200
.org 0x20182
	adds r0, r5, r2	@ 00020182 a818
.org 0x20184
	ldrb r0, [r0, #0]	@ 00020184 0078
.org 0x20186
	strb r0, [r1, #12]	@ 00020186 0873
.org 0x20188
	ldr r3, [pc, #16]	@ 00020188 044b
.org 0x2018a
	adds r0, r5, r3	@ 0002018a e818
.org 0x2018c
	ldrb r0, [r0, #0]	@ 0002018c 0078
.org 0x2018e
	strb r0, [r1, #13]	@ 0002018e 4873
.org 0x20190
	b.n 0x2026e	@ 00020190 6de0
.org 0x20192
	.byte 0x00	@ 00020192 data
.org 0x20193
	.byte 0x00	@ 00020193 data
.org 0x20194
	.byte 0xf8,0x2c,0x84,0x08	@ 00020194 data
.org 0x20198
	.byte 0x58,0x59,0x03,0x02	@ 00020198 data
.org 0x2019c
	.byte 0x89,0x01,0x00,0x00	@ 0002019c data
.org 0x201a0
	cmp r4, #3	@ 000201a0 032c
.org 0x201a2
	bne.n 0x201bc	@ 000201a2 0bd1
.org 0x201a4
	adds r0, r6, #0	@ 000201a4 301c
.org 0x201a6
	adds r0, #16	@ 000201a6 1030
.org 0x201a8
	ldr r1, [pc, #12]	@ 000201a8 0349
.org 0x201aa
	ldr r1, [r1, #4]	@ 000201aa 4968
.org 0x201ac
	ldr r1, [r1, #12]	@ 000201ac c968
.org 0x201ae
	bl 0x275f0	@ 000201ae 07f01ffa
.org 0x201b2
	strb r4, [r7, #0]	@ 000201b2 3c70
.org 0x201b4
	b.n 0x20410	@ 000201b4 2ce1
.org 0x201b6
	.byte 0x00	@ 000201b6 data
.org 0x201b7
	.byte 0x00	@ 000201b7 data
.org 0x201b8
	.byte 0xf8,0x2c,0x84,0x08	@ 000201b8 data
.org 0x201bc
	cmp r4, #4	@ 000201bc 042c
.org 0x201be
	bne.n 0x201d0	@ 000201be 07d1
.org 0x201c0
	adds r0, r6, #0	@ 000201c0 301c
.org 0x201c2
	adds r0, #16	@ 000201c2 1030
.org 0x201c4
	ldr r1, [pc, #4]	@ 000201c4 0149
.org 0x201c6
	ldr r1, [r1, #4]	@ 000201c6 4968
.org 0x201c8
	ldr r1, [r1, #20]	@ 000201c8 4969
.org 0x201ca
	b.n 0x201de	@ 000201ca 08e0
.org 0x201cc
	.byte 0xf8,0x2c,0x84,0x08	@ 000201cc data
.org 0x201d0
	cmp r4, #5	@ 000201d0 052c
.org 0x201d2
	bne.n 0x201f4	@ 000201d2 0fd1
.org 0x201d4
	adds r0, r6, #0	@ 000201d4 301c
.org 0x201d6
	adds r0, #16	@ 000201d6 1030
.org 0x201d8
	ldr r1, [pc, #20]	@ 000201d8 0549
.org 0x201da
	ldr r1, [r1, #4]	@ 000201da 4968
.org 0x201dc
	ldr r1, [r1, #24]	@ 000201dc 8969
.org 0x201de
	bl 0x275f0	@ 000201de 07f007fa
.org 0x201e2
	movs r0, #5	@ 000201e2 0520
.org 0x201e4
	bl 0x1f63c	@ 000201e4 fff72afa
.org 0x201e8
	movs r0, #6	@ 000201e8 0620
.org 0x201ea
	strb r0, [r7, #0]	@ 000201ea 3870
.org 0x201ec
	b.n 0x20410	@ 000201ec 10e1
.org 0x201ee
	.byte 0x00	@ 000201ee data
.org 0x201ef
	.byte 0x00	@ 000201ef data
.org 0x201f0
	.byte 0xf8,0x2c,0x84,0x08	@ 000201f0 data
.org 0x201f4
	cmp r4, #6	@ 000201f4 062c
.org 0x201f6
	bne.n 0x20210	@ 000201f6 0bd1
.org 0x201f8
	adds r0, r6, #0	@ 000201f8 301c
.org 0x201fa
	adds r0, #16	@ 000201fa 1030
.org 0x201fc
	ldr r1, [pc, #12]	@ 000201fc 0349
.org 0x201fe
	ldr r1, [r1, #4]	@ 000201fe 4968
.org 0x20200
	ldr r1, [r1, #32]	@ 00020200 096a
.org 0x20202
	bl 0x275f0	@ 00020202 07f0f5f9
.org 0x20206
	movs r0, #7	@ 00020206 0720
.org 0x20208
	strb r0, [r7, #0]	@ 00020208 3870
.org 0x2020a
	b.n 0x20410	@ 0002020a 01e1
.org 0x2020c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002020c data
.org 0x20210
	cmp r4, #7	@ 00020210 072c
.org 0x20212
	bne.n 0x20244	@ 00020212 17d1
.org 0x20214
	ldr r1, [pc, #32]	@ 00020214 0849
.org 0x20216
	ldr r4, [pc, #36]	@ 00020216 094c
.org 0x20218
	adds r1, r1, r4	@ 00020218 0919
.org 0x2021a
	ldrb r0, [r1, #0]	@ 0002021a 0878
.org 0x2021c
	movs r2, #1	@ 0002021c 0122
.org 0x2021e
	orrs r0, r2	@ 0002021e 1043
.org 0x20220
	strb r0, [r1, #0]	@ 00020220 0870
.org 0x20222
	adds r0, r6, #0	@ 00020222 301c
.org 0x20224
	adds r0, #16	@ 00020224 1030
.org 0x20226
	ldr r1, [pc, #24]	@ 00020226 0649
.org 0x20228
	ldr r1, [r1, #4]	@ 00020228 4968
.org 0x2022a
	ldr r1, [r1, #40]	@ 0002022a 896a
.org 0x2022c
	bl 0x275f0	@ 0002022c 07f0e0f9
.org 0x20230
	movs r0, #10	@ 00020230 0a20
.org 0x20232
	strb r0, [r7, #0]	@ 00020232 3870
.org 0x20234
	b.n 0x20410	@ 00020234 ece0
.org 0x20236
	.byte 0x00	@ 00020236 data
.org 0x20237
	.byte 0x00	@ 00020237 data
.org 0x20238
	.byte 0xb0,0x0a,0x00,0x02	@ 00020238 data
.org 0x2023c
	.byte 0x25,0xd0,0x02,0x00	@ 0002023c data
.org 0x20240
	.byte 0xf8,0x2c,0x84,0x08	@ 00020240 data
.org 0x20244
	cmp r4, #8	@ 00020244 082c
.org 0x20246
	beq.n 0x2024a	@ 00020246 00d0
.org 0x20248
	b.n 0x20410	@ 00020248 e2e0
.org 0x2024a
	movs r0, #4	@ 0002024a 0420
.org 0x2024c
	orrs r3, r0	@ 0002024c 0343
.org 0x2024e
	mov r0, r8	@ 0002024e 4046
.org 0x20250
	orrs r3, r0	@ 00020250 0343
.org 0x20252
	ldr r0, [pc, #12]	@ 00020252 0348
.org 0x20254
	ands r3, r0	@ 00020254 0340
.org 0x20256
	strh r3, [r6, #8]	@ 00020256 3381
.org 0x20258
	movs r0, #12	@ 00020258 0c20
.org 0x2025a
	strb r0, [r7, #0]	@ 0002025a 3870
.org 0x2025c
	b.n 0x20410	@ 0002025c d8e0
.org 0x2025e
	.byte 0x00	@ 0002025e data
.org 0x2025f
	.byte 0x00	@ 0002025f data
.org 0x20260
	.byte 0xfe,0xff,0x00,0x00	@ 00020260 data
.org 0x20264
	cmp r0, #2	@ 00020264 0228
.org 0x20266
	bne.n 0x20274	@ 00020266 05d1
.org 0x20268
	movs r0, #3	@ 00020268 0320
.org 0x2026a
	bl 0x1f63c	@ 0002026a fff7e7f9
.org 0x2026e
	movs r0, #3	@ 0002026e 0320
.org 0x20270
	strb r0, [r7, #0]	@ 00020270 3870
.org 0x20272
	b.n 0x20410	@ 00020272 cde0
.org 0x20274
	cmp r0, #3	@ 00020274 0328
.org 0x20276
	bne.n 0x202a4	@ 00020276 15d1
.org 0x20278
	mov r2, r9	@ 00020278 4a46
.org 0x2027a
	ldr r1, [r2, #84]	@ 0002027a 516d
.org 0x2027c
	ldr r0, [pc, #28]	@ 0002027c 0748
.org 0x2027e
	cmp r1, r0	@ 0002027e 8142
.org 0x20280
	ble.n 0x202a4	@ 00020280 10dd
.org 0x20282
	ldr r1, [pc, #28]	@ 00020282 0749
.org 0x20284
	ldrb r2, [r1, #1]	@ 00020284 4a78
.org 0x20286
	movs r0, #2	@ 00020286 0220
.org 0x20288
	orrs r0, r2	@ 00020288 1043
.org 0x2028a
	strb r0, [r1, #1]	@ 0002028a 4870
.org 0x2028c
	ldrb r2, [r1, #0]	@ 0002028c 0a78
.org 0x2028e
	movs r0, #128	@ 0002028e 8020
.org 0x20290
	orrs r0, r2	@ 00020290 1043
.org 0x20292
	strb r0, [r1, #0]	@ 00020292 0870
.org 0x20294
	movs r0, #4	@ 00020294 0420
.org 0x20296
	strb r0, [r7, #0]	@ 00020296 3870
.org 0x20298
	b.n 0x20410	@ 00020298 bae0
.org 0x2029a
	.byte 0x00	@ 0002029a data
.org 0x2029b
	.byte 0x00	@ 0002029b data
.org 0x2029c
	.byte 0x00,0x10,0x12,0x00	@ 0002029c data
.org 0x202a0
	.byte 0xe0,0x32,0x00,0x03	@ 000202a0 data
.org 0x202a4
	movs r3, #190	@ 000202a4 be23
.org 0x202a6
	lsls r3, r3, #1	@ 000202a6 5b00
.org 0x202a8
	adds r4, r5, r3	@ 000202a8 ec18
.org 0x202aa
	ldrb r0, [r4, #0]	@ 000202aa 2078
.org 0x202ac
	cmp r0, #4	@ 000202ac 0428
.org 0x202ae
	bne.n 0x202d0	@ 000202ae 0fd1
.org 0x202b0
	ldr r0, [pc, #20]	@ 000202b0 0548
.org 0x202b2
	ldr r1, [pc, #24]	@ 000202b2 0649
.org 0x202b4
	ldr r1, [r1, #4]	@ 000202b4 4968
.org 0x202b6
	ldr r1, [r1, #16]	@ 000202b6 0969
.org 0x202b8
	bl 0x275f0	@ 000202b8 07f09af9
.org 0x202bc
	movs r0, #4	@ 000202bc 0420
.org 0x202be
	bl 0x1f63c	@ 000202be fff7bdf9
.org 0x202c2
	movs r0, #5	@ 000202c2 0520
.org 0x202c4
	strb r0, [r4, #0]	@ 000202c4 2070
.org 0x202c6
	b.n 0x20410	@ 000202c6 a3e0
.org 0x202c8
	.byte 0x20,0xe9,0x02,0x02	@ 000202c8 data
.org 0x202cc
	.byte 0xf8,0x2c,0x84,0x08	@ 000202cc data
.org 0x202d0
	cmp r0, #5	@ 000202d0 0528
.org 0x202d2
	bne.n 0x202f4	@ 000202d2 0fd1
.org 0x202d4
	ldr r1, [pc, #24]	@ 000202d4 0649
.org 0x202d6
	ldrb r2, [r1, #0]	@ 000202d6 0a78
.org 0x202d8
	movs r0, #127	@ 000202d8 7f20
.org 0x202da
	ands r0, r2	@ 000202da 1040
.org 0x202dc
	movs r2, #0	@ 000202dc 0022
.org 0x202de
	strb r0, [r1, #0]	@ 000202de 0870
.org 0x202e0
	strb r2, [r1, #1]	@ 000202e0 4a70
.org 0x202e2
	movs r0, #5	@ 000202e2 0520
.org 0x202e4
	bl 0x1f63c	@ 000202e4 fff7aaf9
.org 0x202e8
	movs r0, #6	@ 000202e8 0620
.org 0x202ea
	strb r0, [r4, #0]	@ 000202ea 2070
.org 0x202ec
	b.n 0x20410	@ 000202ec 90e0
.org 0x202ee
	.byte 0x00	@ 000202ee data
.org 0x202ef
	.byte 0x00	@ 000202ef data
.org 0x202f0
	.byte 0xe0,0x32,0x00,0x03	@ 000202f0 data
.org 0x202f4
	cmp r0, #6	@ 000202f4 0628
.org 0x202f6
	bne.n 0x20320	@ 000202f6 13d1
.org 0x202f8
	mov r0, r9	@ 000202f8 4846
.org 0x202fa
	ldr r1, [r0, #84]	@ 000202fa 416d
.org 0x202fc
	movs r0, #225	@ 000202fc e120
.org 0x202fe
	lsls r0, r0, #13	@ 000202fe 4003
.org 0x20300
	cmp r1, r0	@ 00020300 8142
.org 0x20302
	ble.n 0x20320	@ 00020302 0ddd
.org 0x20304
	ldr r1, [pc, #20]	@ 00020304 0549
.org 0x20306
	ldrb r2, [r1, #1]	@ 00020306 4a78
.org 0x20308
	movs r0, #2	@ 00020308 0220
.org 0x2030a
	orrs r0, r2	@ 0002030a 1043
.org 0x2030c
	strb r0, [r1, #1]	@ 0002030c 4870
.org 0x2030e
	ldrb r2, [r1, #0]	@ 0002030e 0a78
.org 0x20310
	movs r0, #128	@ 00020310 8020
.org 0x20312
	orrs r0, r2	@ 00020312 1043
.org 0x20314
	strb r0, [r1, #0]	@ 00020314 0870
.org 0x20316
	movs r0, #8	@ 00020316 0820
.org 0x20318
	strb r0, [r4, #0]	@ 00020318 2070
.org 0x2031a
	b.n 0x20410	@ 0002031a 79e0
.org 0x2031c
	.byte 0xe0,0x32,0x00,0x03	@ 0002031c data
.org 0x20320
	movs r1, #190	@ 00020320 be21
.org 0x20322
	lsls r1, r1, #1	@ 00020322 4900
.org 0x20324
	adds r3, r5, r1	@ 00020324 6b18
.org 0x20326
	ldrb r0, [r3, #0]	@ 00020326 1878
.org 0x20328
	cmp r0, #7	@ 00020328 0728
.org 0x2032a
	bne.n 0x20354	@ 0002032a 13d1
.org 0x2032c
	mov r2, r9	@ 0002032c 4a46
.org 0x2032e
	ldr r1, [r2, #84]	@ 0002032e 516d
.org 0x20330
	movs r0, #225	@ 00020330 e120
.org 0x20332
	lsls r0, r0, #13	@ 00020332 4003
.org 0x20334
	cmp r1, r0	@ 00020334 8142
.org 0x20336
	ble.n 0x20354	@ 00020336 0ddd
.org 0x20338
	ldr r1, [pc, #20]	@ 00020338 0549
.org 0x2033a
	ldrb r2, [r1, #1]	@ 0002033a 4a78
.org 0x2033c
	movs r0, #2	@ 0002033c 0220
.org 0x2033e
	orrs r0, r2	@ 0002033e 1043
.org 0x20340
	strb r0, [r1, #1]	@ 00020340 4870
.org 0x20342
	ldrb r2, [r1, #0]	@ 00020342 0a78
.org 0x20344
	movs r0, #128	@ 00020344 8020
.org 0x20346
	orrs r0, r2	@ 00020346 1043
.org 0x20348
	strb r0, [r1, #0]	@ 00020348 0870
.org 0x2034a
	movs r0, #9	@ 0002034a 0920
.org 0x2034c
	strb r0, [r3, #0]	@ 0002034c 1870
.org 0x2034e
	b.n 0x20410	@ 0002034e 5fe0
.org 0x20350
	.byte 0xe0,0x32,0x00,0x03	@ 00020350 data
.org 0x20354
	movs r3, #190	@ 00020354 be23
.org 0x20356
	lsls r3, r3, #1	@ 00020356 5b00
.org 0x20358
	adds r5, r5, r3	@ 00020358 ed18
.org 0x2035a
	ldrb r0, [r5, #0]	@ 0002035a 2878
.org 0x2035c
	cmp r0, #8	@ 0002035c 0828
.org 0x2035e
	bne.n 0x20388	@ 0002035e 13d1
.org 0x20360
	ldr r1, [pc, #24]	@ 00020360 0649
.org 0x20362
	movs r0, #0	@ 00020362 0020
.org 0x20364
	strb r0, [r1, #1]	@ 00020364 4870
.org 0x20366
	ldr r0, [pc, #24]	@ 00020366 0648
.org 0x20368
	ldr r1, [pc, #24]	@ 00020368 0649
.org 0x2036a
	ldr r1, [r1, #4]	@ 0002036a 4968
.org 0x2036c
	ldr r1, [r1, #28]	@ 0002036c c969
.org 0x2036e
	bl 0x275f0	@ 0002036e 07f03ff9
.org 0x20372
	movs r0, #7	@ 00020372 0720
.org 0x20374
	bl 0x1f63c	@ 00020374 fff762f9
.org 0x20378
	movs r0, #10	@ 00020378 0a20
.org 0x2037a
	b.n 0x2040e	@ 0002037a 48e0
.org 0x2037c
	.byte 0xe0,0x32,0x00,0x03	@ 0002037c data
.org 0x20380
	.byte 0x20,0xe9,0x02,0x02	@ 00020380 data
.org 0x20384
	.byte 0xf8,0x2c,0x84,0x08	@ 00020384 data
.org 0x20388
	cmp r0, #9	@ 00020388 0928
.org 0x2038a
	bne.n 0x203b4	@ 0002038a 13d1
.org 0x2038c
	ldr r1, [pc, #24]	@ 0002038c 0649
.org 0x2038e
	movs r0, #0	@ 0002038e 0020
.org 0x20390
	strb r0, [r1, #1]	@ 00020390 4870
.org 0x20392
	ldr r0, [pc, #24]	@ 00020392 0648
.org 0x20394
	ldr r1, [pc, #24]	@ 00020394 0649
.org 0x20396
	ldr r1, [r1, #4]	@ 00020396 4968
.org 0x20398
	ldr r1, [r1, #36]	@ 00020398 496a
.org 0x2039a
	bl 0x275f0	@ 0002039a 07f029f9
.org 0x2039e
	movs r0, #7	@ 0002039e 0720
.org 0x203a0
	bl 0x1f63c	@ 000203a0 fff74cf9
.org 0x203a4
	movs r0, #10	@ 000203a4 0a20
.org 0x203a6
	b.n 0x2040e	@ 000203a6 32e0
.org 0x203a8
	.byte 0xe0,0x32,0x00,0x03	@ 000203a8 data
.org 0x203ac
	.byte 0x20,0xe9,0x02,0x02	@ 000203ac data
.org 0x203b0
	.byte 0xf8,0x2c,0x84,0x08	@ 000203b0 data
.org 0x203b4
	cmp r0, #10	@ 000203b4 0a28
