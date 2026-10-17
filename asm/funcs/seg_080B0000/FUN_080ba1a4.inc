@ FUN_080ba1a4  entry 0x080ba1a4  size 212
.thumb
.org 0xba1a4
FUN_080ba1a4:
	push {r4, r5, lr}	@ 000ba1a4 30b5
.org 0xba1a6
	adds r5, r0, #0	@ 000ba1a6 051c
.org 0xba1a8
	ldr r4, [r5, #40]	@ 000ba1a8 ac6a
.org 0xba1aa
	ldrb r0, [r5, #15]	@ 000ba1aa e87b
.org 0xba1ac
	cmp r0, #0	@ 000ba1ac 0028
.org 0xba1ae
	bne.n 0xba250	@ 000ba1ae 4fd1
.org 0xba1b0
	adds r0, r5, #0	@ 000ba1b0 281c
.org 0xba1b2
	adds r0, #116	@ 000ba1b2 7430
.org 0xba1b4
	ldr r1, [pc, #84]	@ 000ba1b4 1549
.org 0xba1b6
	bl 0x5784	@ 000ba1b6 4bf7e5fa
.org 0xba1ba
	ldr r1, [pc, #84]	@ 000ba1ba 1549
.org 0xba1bc
	ldr r0, [pc, #84]	@ 000ba1bc 1548
.org 0xba1be
	strh r0, [r1, #0]	@ 000ba1be 0880
.org 0xba1c0
	adds r2, r5, #0	@ 000ba1c0 2a1c
.org 0xba1c2
	adds r2, #69	@ 000ba1c2 4532
.org 0xba1c4
	ldrb r1, [r2, #0]	@ 000ba1c4 1178
.org 0xba1c6
	movs r0, #13	@ 000ba1c6 0d20
.org 0xba1c8
	negs r0, r0	@ 000ba1c8 4042
.org 0xba1ca
	ands r0, r1	@ 000ba1ca 0840
.org 0xba1cc
	movs r1, #4	@ 000ba1cc 0421
.org 0xba1ce
	orrs r0, r1	@ 000ba1ce 0843
.org 0xba1d0
	strb r0, [r2, #0]	@ 000ba1d0 1070
.org 0xba1d2
	adds r0, r5, #0	@ 000ba1d2 281c
.org 0xba1d4
	bl 0x1ceec	@ 000ba1d4 62f78afe
.org 0xba1d8
	movs r1, #191	@ 000ba1d8 bf21
.org 0xba1da
	lsls r1, r1, #8	@ 000ba1da 0902
.org 0xba1dc
	adds r0, r5, #0	@ 000ba1dc 281c
.org 0xba1de
	bl 0x1cf00	@ 000ba1de 62f78ffe
.org 0xba1e2
	adds r1, r5, #0	@ 000ba1e2 291c
.org 0xba1e4
	adds r1, #37	@ 000ba1e4 2531
.org 0xba1e6
	movs r0, #24	@ 000ba1e6 1820
.org 0xba1e8
	strb r0, [r1, #0]	@ 000ba1e8 0870
.org 0xba1ea
	movs r2, #0	@ 000ba1ea 0022
.org 0xba1ec
	adds r0, r4, #0	@ 000ba1ec 201c
.org 0xba1ee
	adds r0, #180	@ 000ba1ee b430
.org 0xba1f0
	ldr r0, [r0, #0]	@ 000ba1f0 0068
.org 0xba1f2
	movs r1, #240	@ 000ba1f2 f021
.org 0xba1f4
	lsls r1, r1, #7	@ 000ba1f4 c901
.org 0xba1f6
	adds r0, r0, r1	@ 000ba1f6 4018
.org 0xba1f8
	ldr r1, [r5, #84]	@ 000ba1f8 696d
.org 0xba1fa
	cmp r0, r1	@ 000ba1fa 8842
.org 0xba1fc
	blt.n 0xba200	@ 000ba1fc 00db
.org 0xba1fe
	movs r2, #1	@ 000ba1fe 0122
.org 0xba200
	cmp r2, #0	@ 000ba200 002a
.org 0xba202
	beq.n 0xba218	@ 000ba202 09d0
.org 0xba204
	ldrb r0, [r5, #10]	@ 000ba204 a87a
.org 0xba206
	movs r1, #16	@ 000ba206 1021
.org 0xba208
	orrs r0, r1	@ 000ba208 0843
.org 0xba20a
	b.n 0xba21e	@ 000ba20a 08e0
.org 0xba20c
	.byte 0xa0,0x44,0x86,0x08	@ 000ba20c data
.org 0xba210
	.byte 0x40,0x0a,0x00,0x02	@ 000ba210 data
.org 0xba214
	.byte 0x10,0x3f,0x00,0x00	@ 000ba214 data
.org 0xba218
	ldrb r1, [r5, #10]	@ 000ba218 a97a
.org 0xba21a
	movs r0, #239	@ 000ba21a ef20
.org 0xba21c
	ands r0, r1	@ 000ba21c 0840
.org 0xba21e
	strb r0, [r5, #10]	@ 000ba21e a872
.org 0xba220
	adds r1, r2, #0	@ 000ba220 111c
.org 0xba222
	adds r0, r5, #0	@ 000ba222 281c
.org 0xba224
	adds r0, #76	@ 000ba224 4c30
.org 0xba226
	strb r1, [r0, #0]	@ 000ba226 0170
.org 0xba228
	adds r3, r5, #0	@ 000ba228 2b1c
.org 0xba22a
	adds r3, #74	@ 000ba22a 4a33
.org 0xba22c
	lsls r1, r1, #4	@ 000ba22c 0901
.org 0xba22e
	ldrb r2, [r3, #0]	@ 000ba22e 1a78
.org 0xba230
	movs r0, #17	@ 000ba230 1120
.org 0xba232
	negs r0, r0	@ 000ba232 4042
.org 0xba234
	ands r0, r2	@ 000ba234 1040
.org 0xba236
	orrs r0, r1	@ 000ba236 0843
.org 0xba238
	strb r0, [r3, #0]	@ 000ba238 1870
.org 0xba23a
	adds r0, r4, #0	@ 000ba23a 201c
.org 0xba23c
	adds r0, #184	@ 000ba23c b830
.org 0xba23e
	ldr r0, [r0, #0]	@ 000ba23e 0068
.org 0xba240
	ldr r1, [pc, #64]	@ 000ba240 1049
.org 0xba242
	adds r0, r0, r1	@ 000ba242 4018
.org 0xba244
	str r0, [r5, #88]	@ 000ba244 a865
.org 0xba246
	movs r0, #16	@ 000ba246 1020
.org 0xba248
	strb r0, [r5, #18]	@ 000ba248 a874
.org 0xba24a
	ldrb r0, [r5, #15]	@ 000ba24a e87b
.org 0xba24c
	adds r0, #1	@ 000ba24c 0130
.org 0xba24e
	strb r0, [r5, #15]	@ 000ba24e e873
.org 0xba250
	adds r0, r5, #0	@ 000ba250 281c
.org 0xba252
	bl 0x1cff0	@ 000ba252 62f7cdfe
.org 0xba256
	ldrb r3, [r5, #18]	@ 000ba256 ab7c
.org 0xba258
	subs r3, #1	@ 000ba258 013b
.org 0xba25a
	strb r3, [r5, #18]	@ 000ba25a ab74
.org 0xba25c
	ldrb r2, [r5, #18]	@ 000ba25c aa7c
.org 0xba25e
	ldr r4, [pc, #40]	@ 000ba25e 0a4c
.org 0xba260
	movs r0, #16	@ 000ba260 1020
.org 0xba262
	subs r0, r0, r2	@ 000ba262 801a
.org 0xba264
	movs r1, #31	@ 000ba264 1f21
.org 0xba266
	ands r0, r1	@ 000ba266 0840
.org 0xba268
	lsls r2, r2, #8	@ 000ba268 1202
.org 0xba26a
	orrs r0, r2	@ 000ba26a 1043
.org 0xba26c
	movs r1, #0	@ 000ba26c 0021
.org 0xba26e
	strh r0, [r4, #2]	@ 000ba26e 6080
.org 0xba270
	lsls r3, r3, #24	@ 000ba270 1b06
.org 0xba272
	cmp r3, #0	@ 000ba272 002b
.org 0xba274
	bne.n 0xba27e	@ 000ba274 03d1
.org 0xba276
	movs r0, #3	@ 000ba276 0320
