@ FUN_080df24c  entry 0x080df24c  size 136
.thumb
.org 0xdf24c
FUN_080df24c:
	push {r4, lr}	@ 000df24c 10b5
.org 0xdf24e
	adds r4, r0, #0	@ 000df24e 041c
.org 0xdf250
	ldr r0, [pc, #128]	@ 000df250 2048
.org 0xdf252
	ldr r3, [r0, #0]	@ 000df252 0368
.org 0xdf254
	ldrb r0, [r4, #13]	@ 000df254 607b
.org 0xdf256
	cmp r0, #0	@ 000df256 0028
.org 0xdf258
	bne.n 0xdf28e	@ 000df258 19d1
.org 0xdf25a
	movs r0, #32	@ 000df25a 2020
.org 0xdf25c
	strb r0, [r4, #18]	@ 000df25c a074
.org 0xdf25e
	ldr r2, [pc, #120]	@ 000df25e 1e4a
.org 0xdf260
	ldr r1, [r2, #0]	@ 000df260 1168
.org 0xdf262
	ldr r0, [pc, #120]	@ 000df262 1e48
.org 0xdf264
	muls r0, r1	@ 000df264 4843
.org 0xdf266
	ldr r1, [pc, #120]	@ 000df266 1e49
.org 0xdf268
	adds r0, r0, r1	@ 000df268 4018
.org 0xdf26a
	lsls r0, r0, #1	@ 000df26a 4000
.org 0xdf26c
	lsrs r1, r0, #1	@ 000df26c 4108
.org 0xdf26e
	str r1, [r2, #0]	@ 000df26e 1160
.org 0xdf270
	lsls r0, r0, #6	@ 000df270 8001
.org 0xdf272
	lsrs r0, r0, #23	@ 000df272 c00d
.org 0xdf274
	movs r1, #128	@ 000df274 8021
.org 0xdf276
	lsls r1, r1, #1	@ 000df276 4900
.org 0xdf278
	subs r1, r1, r0	@ 000df278 091a
.org 0xdf27a
	str r1, [r4, #92]	@ 000df27a e165
.org 0xdf27c
	ldr r0, [pc, #100]	@ 000df27c 1948
.org 0xdf27e
	str r0, [r4, #96]	@ 000df27e 2066
.org 0xdf280
	adds r0, r3, #0	@ 000df280 181c
.org 0xdf282
	movs r1, #8	@ 000df282 0821
.org 0xdf284
	bl 0x2b6d8	@ 000df284 4cf728fa
.org 0xdf288
	ldrb r0, [r4, #13]	@ 000df288 607b
.org 0xdf28a
	adds r0, #1	@ 000df28a 0130
.org 0xdf28c
	strb r0, [r4, #13]	@ 000df28c 6073
.org 0xdf28e
	ldr r1, [r4, #84]	@ 000df28e 616d
.org 0xdf290
	ldr r0, [r4, #92]	@ 000df290 e06d
.org 0xdf292
	adds r2, r1, r0	@ 000df292 0a18
.org 0xdf294
	str r2, [r4, #84]	@ 000df294 6265
.org 0xdf296
	ldr r1, [r4, #88]	@ 000df296 a16d
.org 0xdf298
	ldr r0, [r4, #96]	@ 000df298 206e
.org 0xdf29a
	adds r1, r1, r0	@ 000df29a 0918
.org 0xdf29c
	str r1, [r4, #88]	@ 000df29c a165
.org 0xdf29e
	adds r0, #64	@ 000df29e 4030
.org 0xdf2a0
	str r0, [r4, #96]	@ 000df2a0 2066
.org 0xdf2a2
	ldrb r0, [r4, #18]	@ 000df2a2 a07c
.org 0xdf2a4
	subs r0, #1	@ 000df2a4 0138
.org 0xdf2a6
	strb r0, [r4, #18]	@ 000df2a6 a074
.org 0xdf2a8
	lsls r0, r0, #24	@ 000df2a8 0006
.org 0xdf2aa
	lsrs r0, r0, #24	@ 000df2aa 000e
.org 0xdf2ac
	cmp r0, #255	@ 000df2ac ff28
.org 0xdf2ae
	beq.n 0xdf2bc	@ 000df2ae 05d0
.org 0xdf2b0
	adds r0, r2, #0	@ 000df2b0 101c
.org 0xdf2b2
	bl 0x7c7c	@ 000df2b2 28f7e3fc
.org 0xdf2b6
	lsls r0, r0, #16	@ 000df2b6 0004
.org 0xdf2b8
	cmp r0, #0	@ 000df2b8 0028
.org 0xdf2ba
	beq.n 0xdf2ce	@ 000df2ba 08d0
.org 0xdf2bc
	ldr r1, [pc, #40]	@ 000df2bc 0a49
.org 0xdf2be
	ldrb r0, [r4, #9]	@ 000df2be 607a
.org 0xdf2c0
	lsls r0, r0, #2	@ 000df2c0 8000
.org 0xdf2c2
	adds r0, r0, r1	@ 000df2c2 4018
.org 0xdf2c4
	movs r1, #4	@ 000df2c4 0421
.org 0xdf2c6
	str r1, [r4, #12]	@ 000df2c6 e160
.org 0xdf2c8
	ldr r0, [r0, #0]	@ 000df2c8 0068
.org 0xdf2ca
	ldr r0, [r0, #16]	@ 000df2ca 0069
.org 0xdf2cc
	str r0, [r4, #20]	@ 000df2cc 6061
.org 0xdf2ce
	pop {r4}	@ 000df2ce 10bc
.org 0xdf2d0
	pop {r0}	@ 000df2d0 01bc
.org 0xdf2d2
	bx r0	@ 000df2d2 0047
