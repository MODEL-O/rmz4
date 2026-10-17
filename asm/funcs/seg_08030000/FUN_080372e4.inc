@ FUN_080372e4  entry 0x080372e4  size 112
.thumb
.org 0x372e4
FUN_080372e4:
	push {r4, r5, lr}	@ 000372e4 30b5
.org 0x372e6
	adds r4, r0, #0	@ 000372e6 041c
.org 0x372e8
	movs r5, #0	@ 000372e8 0025
.org 0x372ea
	adds r0, #180	@ 000372ea b430
.org 0x372ec
	ldrb r0, [r0, #12]	@ 000372ec 007b
.org 0x372ee
	cmp r0, #2	@ 000372ee 0228
.org 0x372f0
	bne.n 0x372f8	@ 000372f0 02d1
.org 0x372f2
	adds r0, r4, #0	@ 000372f2 201c
.org 0x372f4
	movs r1, #0	@ 000372f4 0021
.org 0x372f6
	b.n 0x372fc	@ 000372f6 01e0
.org 0x372f8
	adds r0, r4, #0	@ 000372f8 201c
.org 0x372fa
	movs r1, #1	@ 000372fa 0121
.org 0x372fc
	bl 0x3a428	@ 000372fc 03f094f8
.org 0x37300
	lsls r0, r0, #24	@ 00037300 0006
.org 0x37302
	lsrs r0, r0, #24	@ 00037302 000e
.org 0x37304
	cmp r0, #2	@ 00037304 0228
.org 0x37306
	bne.n 0x3730a	@ 00037306 00d1
.org 0x37308
	movs r5, #1	@ 00037308 0125
.org 0x3730a
	movs r1, #164	@ 0003730a a421
.org 0x3730c
	lsls r1, r1, #6	@ 0003730c 8901
.org 0x3730e
	adds r0, r4, #0	@ 0003730e 201c
.org 0x37310
	bl 0x1cf00	@ 00037310 e5f7f6fd
.org 0x37314
	cmp r5, #0	@ 00037314 002d
.org 0x37316
	bne.n 0x37324	@ 00037316 05d1
.org 0x37318
	ldr r1, [pc, #56]	@ 00037318 0e49
.org 0x3731a
	adds r0, r4, r1	@ 0003731a 6018
.org 0x3731c
	ldrb r0, [r0, #0]	@ 0003731c 0078
.org 0x3731e
	cmp r0, #3	@ 0003731e 0328
.org 0x37320
	bne.n 0x37324	@ 00037320 00d1
.org 0x37322
	movs r5, #1	@ 00037322 0125
.org 0x37324
	adds r0, r4, #0	@ 00037324 201c
.org 0x37326
	adds r1, r5, #0	@ 00037326 291c
.org 0x37328
	bl 0x40664	@ 00037328 09f09cf9
.org 0x3732c
	ldr r0, [pc, #40]	@ 0003732c 0a48
.org 0x3732e
	adds r1, r4, r0	@ 0003732e 2118
.org 0x37330
	movs r0, #14	@ 00037330 0e20
.org 0x37332
	strb r0, [r1, #0]	@ 00037332 0870
.org 0x37334
	ldr r1, [pc, #36]	@ 00037334 0949
.org 0x37336
	adds r2, r4, r1	@ 00037336 6218
.org 0x37338
	ldrb r1, [r2, #0]	@ 00037338 1178
.org 0x3733a
	subs r0, #23	@ 0003733a 1738
.org 0x3733c
	ands r0, r1	@ 0003733c 0840
.org 0x3733e
	strb r0, [r2, #0]	@ 0003733e 1070
.org 0x37340
	ldr r0, [pc, #28]	@ 00037340 0748
.org 0x37342
	adds r1, r4, r0	@ 00037342 2118
.org 0x37344
	movs r0, #1	@ 00037344 0120
.org 0x37346
	strb r0, [r1, #0]	@ 00037346 0870
.org 0x37348
	adds r0, r4, #0	@ 00037348 201c
.org 0x3734a
	bl 0x37364	@ 0003734a 00f00bf8
.org 0x3734e
	pop {r4, r5}	@ 0003734e 30bc
.org 0x37350
	pop {r0}	@ 00037350 01bc
.org 0x37352
	bx r0	@ 00037352 0047
