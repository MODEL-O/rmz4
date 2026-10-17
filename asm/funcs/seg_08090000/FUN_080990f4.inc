@ FUN_080990f4  entry 0x080990f4  size 324
.thumb
.org 0x990f4
FUN_080990f4:
	push {r4, r5, lr}	@ 000990f4 30b5
.org 0x990f6
	adds r4, r0, #0	@ 000990f6 041c
.org 0x990f8
	ldrb r0, [r4, #14]	@ 000990f8 a07b
.org 0x990fa
	cmp r0, #0	@ 000990fa 0028
.org 0x990fc
	bne.n 0x9915a	@ 000990fc 2dd1
.org 0x990fe
	movs r1, #208	@ 000990fe d021
.org 0x99100
	lsls r1, r1, #7	@ 00099100 c901
.org 0x99102
	adds r0, r4, #0	@ 00099102 201c
.org 0x99104
	bl 0x1cf00	@ 00099104 83f7fcfe
.org 0x99108
	ldr r2, [pc, #60]	@ 00099108 0f4a
.org 0x9910a
	adds r3, r4, #0	@ 0009910a 231c
.org 0x9910c
	adds r3, #190	@ 0009910c be33
.org 0x9910e
	ldrb r0, [r3, #0]	@ 0009910e 1878
.org 0x99110
	adds r0, #64	@ 00099110 4030
.org 0x99112
	lsls r0, r0, #24	@ 00099112 0006
.org 0x99114
	lsrs r0, r0, #23	@ 00099114 c00d
.org 0x99116
	adds r0, r0, r2	@ 00099116 8018
.org 0x99118
	movs r5, #0	@ 00099118 0025
.org 0x9911a
	ldrsh r1, [r0, r5]	@ 0009911a 415f
.org 0x9911c
	lsls r0, r1, #1	@ 0009911c 4800
.org 0x9911e
	adds r0, r0, r1	@ 0009911e 4018
.org 0x99120
	lsls r0, r0, #2	@ 00099120 8000
.org 0x99122
	adds r0, r0, r1	@ 00099122 4018
.org 0x99124
	asrs r0, r0, #2	@ 00099124 8010
.org 0x99126
	str r0, [r4, #92]	@ 00099126 e065
.org 0x99128
	ldrb r0, [r3, #0]	@ 00099128 1878
.org 0x9912a
	lsls r0, r0, #1	@ 0009912a 4000
.org 0x9912c
	adds r0, r0, r2	@ 0009912c 8018
.org 0x9912e
	movs r2, #0	@ 0009912e 0022
.org 0x99130
	ldrsh r1, [r0, r2]	@ 00099130 815e
.org 0x99132
	lsls r0, r1, #1	@ 00099132 4800
.org 0x99134
	adds r0, r0, r1	@ 00099134 4018
.org 0x99136
	lsls r0, r0, #2	@ 00099136 8000
.org 0x99138
	adds r0, r0, r1	@ 00099138 4018
.org 0x9913a
	asrs r0, r0, #2	@ 0009913a 8010
.org 0x9913c
	str r0, [r4, #96]	@ 0009913c 2066
.org 0x9913e
	ldrb r0, [r4, #19]	@ 0009913e e07c
.org 0x99140
	cmp r0, #2	@ 00099140 0228
.org 0x99142
	bls.n 0x9914c	@ 00099142 03d9
.org 0x99144
	movs r0, #8	@ 00099144 0820
.org 0x99146
	b.n 0x9914e	@ 00099146 02e0
.org 0x99148
	.byte 0x0c,0x93,0x12,0x08	@ 00099148 data
.org 0x9914c
	movs r0, #16	@ 0009914c 1020
.org 0x9914e
	strb r0, [r4, #18]	@ 0009914e a074
.org 0x99150
	movs r0, #0	@ 00099150 0020
.org 0x99152
	strb r0, [r4, #15]	@ 00099152 e073
.org 0x99154
	ldrb r0, [r4, #14]	@ 00099154 a07b
.org 0x99156
	adds r0, #1	@ 00099156 0130
.org 0x99158
	strb r0, [r4, #14]	@ 00099158 a073
.org 0x9915a
	ldrb r2, [r4, #15]	@ 0009915a e27b
.org 0x9915c
	cmp r2, #0	@ 0009915c 002a
.org 0x9915e
	bne.n 0x9921e	@ 0009915e 5ed1
.org 0x99160
	ldr r0, [r4, #84]	@ 00099160 606d
.org 0x99162
	ldr r1, [r4, #92]	@ 00099162 e16d
.org 0x99164
	adds r0, r0, r1	@ 00099164 4018
.org 0x99166
	str r0, [r4, #84]	@ 00099166 6065
.org 0x99168
	ldr r0, [r4, #88]	@ 00099168 a06d
.org 0x9916a
	ldr r1, [r4, #96]	@ 0009916a 216e
.org 0x9916c
	adds r0, r0, r1	@ 0009916c 4018
.org 0x9916e
	str r0, [r4, #88]	@ 0009916e a065
.org 0x99170
	ldrb r0, [r4, #18]	@ 00099170 a07c
.org 0x99172
	subs r0, #1	@ 00099172 0138
.org 0x99174
	strb r0, [r4, #18]	@ 00099174 a074
.org 0x99176
	lsls r0, r0, #24	@ 00099176 0006
.org 0x99178
	lsrs r0, r0, #24	@ 00099178 000e
.org 0x9917a
	cmp r0, #255	@ 0009917a ff28
.org 0x9917c
	bne.n 0x99230	@ 0009917c 58d1
.org 0x9917e
	ldrb r0, [r4, #19]	@ 0009917e e07c
.org 0x99180
	adds r0, #1	@ 00099180 0130
.org 0x99182
	strb r0, [r4, #19]	@ 00099182 e074
.org 0x99184
	lsls r0, r0, #24	@ 00099184 0006
.org 0x99186
	lsrs r1, r0, #24	@ 00099186 010e
.org 0x99188
	cmp r1, #3	@ 00099188 0329
.org 0x9918a
	bls.n 0x99194	@ 0009918a 03d9
.org 0x9918c
	movs r0, #2	@ 0009918c 0220
.org 0x9918e
	strb r0, [r4, #13]	@ 0009918e 6073
.org 0x99190
	strb r2, [r4, #14]	@ 00099190 a273
.org 0x99192
	b.n 0x99236	@ 00099192 50e0
.org 0x99194
	cmp r1, #2	@ 00099194 0229
.org 0x99196
	bls.n 0x991ba	@ 00099196 10d9
.org 0x99198
	adds r0, r4, #0	@ 00099198 201c
.org 0x9919a
	adds r0, #191	@ 0009919a bf30
.org 0x9919c
	ldrb r0, [r0, #0]	@ 0009919c 0078
.org 0x9919e
	cmp r0, #0	@ 0009919e 0028
.org 0x991a0
	beq.n 0x991ae	@ 000991a0 05d0
.org 0x991a2
	adds r1, r4, #0	@ 000991a2 211c
.org 0x991a4
	adds r1, #190	@ 000991a4 be31
.org 0x991a6
	ldrb r0, [r1, #0]	@ 000991a6 0878
.org 0x991a8
	adds r0, #106	@ 000991a8 6a30
.org 0x991aa
	strb r0, [r1, #0]	@ 000991aa 0870
.org 0x991ac
	b.n 0x991f0	@ 000991ac 20e0
.org 0x991ae
	adds r1, r4, #0	@ 000991ae 211c
.org 0x991b0
	adds r1, #190	@ 000991b0 be31
.org 0x991b2
	ldrb r0, [r1, #0]	@ 000991b2 0878
.org 0x991b4
	subs r0, #106	@ 000991b4 6a38
.org 0x991b6
	strb r0, [r1, #0]	@ 000991b6 0870
.org 0x991b8
	b.n 0x991f0	@ 000991b8 1ae0
.org 0x991ba
	adds r0, r4, #0	@ 000991ba 201c
.org 0x991bc
	adds r0, #191	@ 000991bc bf30
.org 0x991be
	ldrb r0, [r0, #0]	@ 000991be 0078
.org 0x991c0
	cmp r0, #0	@ 000991c0 0028
.org 0x991c2
	beq.n 0x991da	@ 000991c2 0ad0
.org 0x991c4
	adds r0, r4, #0	@ 000991c4 201c
.org 0x991c6
	adds r0, #190	@ 000991c6 be30
.org 0x991c8
	ldrb r2, [r0, #0]	@ 000991c8 0278
.org 0x991ca
	cmp r1, #2	@ 000991ca 0229
.org 0x991cc
	bne.n 0x991d4	@ 000991cc 02d1
.org 0x991ce
	adds r1, r2, #0	@ 000991ce 111c
.org 0x991d0
	adds r1, #86	@ 000991d0 5631
.org 0x991d2
	b.n 0x991ee	@ 000991d2 0ce0
.org 0x991d4
	adds r1, r2, #0	@ 000991d4 111c
.org 0x991d6
	adds r1, #85	@ 000991d6 5531
.org 0x991d8
	b.n 0x991ee	@ 000991d8 09e0
.org 0x991da
	adds r0, r4, #0	@ 000991da 201c
.org 0x991dc
	adds r0, #190	@ 000991dc be30
.org 0x991de
	ldrb r2, [r0, #0]	@ 000991de 0278
.org 0x991e0
	cmp r1, #2	@ 000991e0 0229
.org 0x991e2
	bne.n 0x991ea	@ 000991e2 02d1
.org 0x991e4
	adds r1, r2, #0	@ 000991e4 111c
.org 0x991e6
	subs r1, #86	@ 000991e6 5639
.org 0x991e8
	b.n 0x991ee	@ 000991e8 01e0
.org 0x991ea
	adds r1, r2, #0	@ 000991ea 111c
.org 0x991ec
	subs r1, #85	@ 000991ec 5539
.org 0x991ee
	strb r1, [r0, #0]	@ 000991ee 0170
.org 0x991f0
	ldrb r1, [r4, #19]	@ 000991f0 e17c
.org 0x991f2
	movs r5, #208	@ 000991f2 d025
.org 0x991f4
	lsls r5, r5, #7	@ 000991f4 ed01
.org 0x991f6
	adds r0, r5, #0	@ 000991f6 281c
.org 0x991f8
	orrs r1, r0	@ 000991f8 0143
.org 0x991fa
	adds r0, r4, #0	@ 000991fa 201c
.org 0x991fc
	bl 0x1cf00	@ 000991fc 83f780fe
.org 0x99200
	adds r0, r4, #0	@ 00099200 201c
.org 0x99202
	movs r1, #0	@ 00099202 0021
.org 0x99204
	movs r2, #0	@ 00099204 0022
.org 0x99206
	bl 0xc3c48	@ 00099206 2af01ffd
.org 0x9920a
	movs r0, #173	@ 0009920a ad20
.org 0x9920c
	lsls r0, r0, #1	@ 0009920c 4000
.org 0x9920e
	bl 0x2b10	@ 0009920e 69f77ffc
.org 0x99212
	movs r0, #16	@ 00099212 1020
.org 0x99214
	strb r0, [r4, #18]	@ 00099214 a074
.org 0x99216
	ldrb r0, [r4, #15]	@ 00099216 e07b
.org 0x99218
	adds r0, #1	@ 00099218 0130
.org 0x9921a
	strb r0, [r4, #15]	@ 0009921a e073
.org 0x9921c
	b.n 0x99230	@ 0009921c 08e0
.org 0x9921e
	ldrb r0, [r4, #18]	@ 0009921e a07c
.org 0x99220
	subs r0, #1	@ 00099220 0138
.org 0x99222
	strb r0, [r4, #18]	@ 00099222 a074
.org 0x99224
	lsls r0, r0, #24	@ 00099224 0006
.org 0x99226
	lsrs r0, r0, #24	@ 00099226 000e
.org 0x99228
	cmp r0, #255	@ 00099228 ff28
.org 0x9922a
	bne.n 0x99230	@ 0009922a 01d1
.org 0x9922c
	movs r0, #0	@ 0009922c 0020
.org 0x9922e
	strb r0, [r4, #14]	@ 0009922e a073
.org 0x99230
	adds r0, r4, #0	@ 00099230 201c
.org 0x99232
	bl 0x1cff0	@ 00099232 83f7ddfe
.org 0x99236
	pop {r4, r5}	@ 00099236 30bc
