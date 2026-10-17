@ FUN_08045098  entry 0x08045098  size 312
.thumb
.org 0x45098
FUN_08045098:
	push {r4, r5, r6, lr}	@ 00045098 70b5
.org 0x4509a
	adds r5, r0, #0	@ 0004509a 051c
.org 0x4509c
	ldr r1, [pc, #108]	@ 0004509c 1b49
.org 0x4509e
	ldrb r0, [r5, #9]	@ 0004509e 687a
.org 0x450a0
	lsls r0, r0, #2	@ 000450a0 8000
.org 0x450a2
	adds r0, r0, r1	@ 000450a2 4018
.org 0x450a4
	movs r1, #1	@ 000450a4 0121
.org 0x450a6
	str r1, [r5, #12]	@ 000450a6 e960
.org 0x450a8
	ldr r0, [r0, #0]	@ 000450a8 0068
.org 0x450aa
	ldr r0, [r0, #4]	@ 000450aa 4068
.org 0x450ac
	str r0, [r5, #20]	@ 000450ac 6861
.org 0x450ae
	adds r0, r5, #0	@ 000450ae 281c
.org 0x450b0
	bl 0x1cc9c	@ 000450b0 d7f7f4fd
.org 0x450b4
	adds r0, r5, #0	@ 000450b4 281c
.org 0x450b6
	bl 0x1ceec	@ 000450b6 d7f719ff
.org 0x450ba
	ldrb r1, [r5, #10]	@ 000450ba a97a
.org 0x450bc
	movs r0, #1	@ 000450bc 0120
.org 0x450be
	movs r4, #0	@ 000450be 0024
.org 0x450c0
	movs r6, #0	@ 000450c0 0026
.org 0x450c2
	orrs r0, r1	@ 000450c2 0843
.org 0x450c4
	movs r1, #2	@ 000450c4 0221
.org 0x450c6
	orrs r0, r1	@ 000450c6 0843
.org 0x450c8
	strb r0, [r5, #10]	@ 000450c8 a872
.org 0x450ca
	ldrb r0, [r5, #16]	@ 000450ca 287c
.org 0x450cc
	cmp r0, #0	@ 000450cc 0028
.org 0x450ce
	bne.n 0x45128	@ 000450ce 2bd1
.org 0x450d0
	ldr r1, [pc, #60]	@ 000450d0 0f49
.org 0x450d2
	adds r0, r5, #0	@ 000450d2 281c
.org 0x450d4
	bl 0x1cf00	@ 000450d4 d7f714ff
.org 0x450d8
	ldrb r0, [r5, #10]	@ 000450d8 a87a
.org 0x450da
	movs r1, #4	@ 000450da 0421
.org 0x450dc
	orrs r0, r1	@ 000450dc 0843
.org 0x450de
	strb r0, [r5, #10]	@ 000450de a872
.org 0x450e0
	adds r4, r5, #0	@ 000450e0 2c1c
.org 0x450e2
	adds r4, #116	@ 000450e2 7434
.org 0x450e4
	ldr r1, [pc, #44]	@ 000450e4 0b49
.org 0x450e6
	adds r2, r5, #0	@ 000450e6 2a1c
.org 0x450e8
	adds r2, #84	@ 000450e8 5432
.org 0x450ea
	adds r0, r4, #0	@ 000450ea 201c
.org 0x450ec
	movs r3, #8	@ 000450ec 0823
.org 0x450ee
	bl 0x5760	@ 000450ee c0f737fb
.org 0x450f2
	str r5, [r4, #44]	@ 000450f2 e562
.org 0x450f4
	str r6, [r4, #36]	@ 000450f4 6662
.org 0x450f6
	ldrb r1, [r5, #10]	@ 000450f6 a97a
.org 0x450f8
	movs r0, #16	@ 000450f8 1020
.org 0x450fa
	ands r0, r1	@ 000450fa 0840
.org 0x450fc
	cmp r0, #0	@ 000450fc 0028
.org 0x450fe
	beq.n 0x45118	@ 000450fe 0bd0
.org 0x45100
	movs r0, #128	@ 00045100 8020
.org 0x45102
	lsls r0, r0, #2	@ 00045102 8000
.org 0x45104
	str r0, [r5, #92]	@ 00045104 e865
.org 0x45106
	movs r0, #8	@ 00045106 0820
.org 0x45108
	negs r0, r0	@ 00045108 4042
.org 0x4510a
	b.n 0x4511e	@ 0004510a 08e0
.org 0x4510c
	.byte 0xf8,0x39,0x85,0x08	@ 0004510c data
.org 0x45110
	.byte 0x0e,0x82,0x00,0x00	@ 00045110 data
.org 0x45114
	.byte 0x80,0x6b,0x85,0x08	@ 00045114 data
.org 0x45118
	ldr r0, [pc, #8]	@ 00045118 0248
.org 0x4511a
	str r0, [r5, #92]	@ 0004511a e865
.org 0x4511c
	movs r0, #8	@ 0004511c 0820
.org 0x4511e
	str r0, [r5, #100]	@ 0004511e 6866
.org 0x45120
	b.n 0x451e0	@ 00045120 5ee0
.org 0x45122
	.byte 0x00	@ 00045122 data
.org 0x45123
	.byte 0x00	@ 00045123 data
.org 0x45124
	.byte 0x00,0xfe,0xff,0xff	@ 00045124 data
.org 0x45128
	ldr r1, [pc, #56]	@ 00045128 0e49
.org 0x4512a
	adds r0, r5, #0	@ 0004512a 281c
.org 0x4512c
	bl 0x1cf00	@ 0004512c d7f7e8fe
.org 0x45130
	ldrb r0, [r5, #10]	@ 00045130 a87a
.org 0x45132
	movs r1, #4	@ 00045132 0421
.org 0x45134
	orrs r0, r1	@ 00045134 0843
.org 0x45136
	strb r0, [r5, #10]	@ 00045136 a872
.org 0x45138
	adds r4, r5, #0	@ 00045138 2c1c
.org 0x4513a
	adds r4, #116	@ 0004513a 7434
.org 0x4513c
	ldr r1, [pc, #40]	@ 0004513c 0a49
.org 0x4513e
	adds r2, r5, #0	@ 0004513e 2a1c
.org 0x45140
	adds r2, #84	@ 00045140 5432
.org 0x45142
	adds r0, r4, #0	@ 00045142 201c
.org 0x45144
	movs r3, #8	@ 00045144 0823
.org 0x45146
	bl 0x5760	@ 00045146 c0f70bfb
.org 0x4514a
	str r5, [r4, #44]	@ 0004514a e562
.org 0x4514c
	str r6, [r4, #36]	@ 0004514c 6662
.org 0x4514e
	ldrb r1, [r5, #10]	@ 0004514e a97a
.org 0x45150
	movs r2, #16	@ 00045150 1022
.org 0x45152
	adds r0, r2, #0	@ 00045152 101c
.org 0x45154
	ands r0, r1	@ 00045154 0840
.org 0x45156
	cmp r0, #0	@ 00045156 0028
.org 0x45158
	beq.n 0x4516c	@ 00045158 08d0
.org 0x4515a
	movs r0, #128	@ 0004515a 8020
.org 0x4515c
	lsls r0, r0, #1	@ 0004515c 4000
.org 0x4515e
	str r0, [r5, #92]	@ 0004515e e865
.org 0x45160
	str r2, [r5, #100]	@ 00045160 6a66
.org 0x45162
	b.n 0x45174	@ 00045162 07e0
.org 0x45164
	.byte 0x10,0x82,0x00,0x00	@ 00045164 data
.org 0x45168
	.byte 0xb0,0x6b,0x85,0x08	@ 00045168 data
.org 0x4516c
	ldr r0, [pc, #20]	@ 0004516c 0548
.org 0x4516e
	str r0, [r5, #92]	@ 0004516e e865
.org 0x45170
	adds r0, #240	@ 00045170 f030
.org 0x45172
	str r0, [r5, #100]	@ 00045172 6866
.org 0x45174
	ldrb r0, [r5, #17]	@ 00045174 687c
.org 0x45176
	cmp r0, #1	@ 00045176 0128
.org 0x45178
	beq.n 0x451a0	@ 00045178 12d0
.org 0x4517a
	cmp r0, #1	@ 0004517a 0128
.org 0x4517c
	bgt.n 0x45188	@ 0004517c 04dc
.org 0x4517e
	cmp r0, #0	@ 0004517e 0028
.org 0x45180
	beq.n 0x4518e	@ 00045180 05d0
.org 0x45182
	b.n 0x451ce	@ 00045182 24e0
.org 0x45184
	.byte 0x00,0xff,0xff,0xff	@ 00045184 data
.org 0x45188
	cmp r0, #2	@ 00045188 0228
.org 0x4518a
	beq.n 0x451b8	@ 0004518a 15d0
.org 0x4518c
	b.n 0x451ce	@ 0004518c 1fe0
.org 0x4518e
	ldr r0, [r5, #88]	@ 0004518e a86d
.org 0x45190
	ldr r1, [pc, #8]	@ 00045190 0249
.org 0x45192
	adds r0, r0, r1	@ 00045192 4018
.org 0x45194
	str r0, [r5, #88]	@ 00045194 a865
.org 0x45196
	str r1, [r5, #96]	@ 00045196 2966
.org 0x45198
	movs r0, #48	@ 00045198 3020
.org 0x4519a
	b.n 0x451de	@ 0004519a 20e0
.org 0x4519c
	.byte 0x00,0xfd,0xff,0xff	@ 0004519c data
.org 0x451a0
	ldr r0, [r5, #88]	@ 000451a0 a86d
.org 0x451a2
	ldr r1, [pc, #12]	@ 000451a2 0349
.org 0x451a4
	adds r0, r0, r1	@ 000451a4 4018
.org 0x451a6
	str r0, [r5, #88]	@ 000451a6 a865
.org 0x451a8
	ldr r0, [pc, #8]	@ 000451a8 0248
.org 0x451aa
	str r0, [r5, #96]	@ 000451aa 2866
.org 0x451ac
	movs r0, #16	@ 000451ac 1020
.org 0x451ae
	b.n 0x451de	@ 000451ae 16e0
.org 0x451b0
	.byte 0x00,0xfd,0xff,0xff	@ 000451b0 data
.org 0x451b4
	.byte 0x00,0xff,0xff,0xff	@ 000451b4 data
.org 0x451b8
	ldr r0, [r5, #88]	@ 000451b8 a86d
.org 0x451ba
	movs r1, #192	@ 000451ba c021
.org 0x451bc
	lsls r1, r1, #2	@ 000451bc 8900
.org 0x451be
	adds r0, r0, r1	@ 000451be 4018
.org 0x451c0
	str r0, [r5, #88]	@ 000451c0 a865
.org 0x451c2
	movs r0, #128	@ 000451c2 8020
.org 0x451c4
	lsls r0, r0, #1	@ 000451c4 4000
.org 0x451c6
	str r0, [r5, #96]	@ 000451c6 2866
.org 0x451c8
	movs r0, #16	@ 000451c8 1020
.org 0x451ca
	negs r0, r0	@ 000451ca 4042
.org 0x451cc
	b.n 0x451de	@ 000451cc 07e0
.org 0x451ce
	ldr r0, [r5, #88]	@ 000451ce a86d
