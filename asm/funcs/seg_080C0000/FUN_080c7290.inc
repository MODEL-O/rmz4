@ FUN_080c7290  entry 0x080c7290  size 228
.thumb
.org 0xc7290
FUN_080c7290:
	push {r4, r5, r6, r7, lr}	@ 000c7290 f0b5
.org 0xc7292
	sub sp, #12	@ 000c7292 83b0
.org 0xc7294
	adds r6, r0, #0	@ 000c7294 061c
.org 0xc7296
	mov r1, sp	@ 000c7296 6946
.org 0xc7298
	ldr r0, [pc, #216]	@ 000c7298 3648
.org 0xc729a
	ldmia r0!, {r2, r3, r4}	@ 000c729a 1cc8
.org 0xc729c
	stmia r1!, {r2, r3, r4}	@ 000c729c 1cc1
.org 0xc729e
	ldr r0, [r6, #40]	@ 000c729e b06a
.org 0xc72a0
	movs r7, #0	@ 000c72a0 0027
.org 0xc72a2
	ldrb r1, [r6, #17]	@ 000c72a2 717c
.org 0xc72a4
	adds r4, r1, #0	@ 000c72a4 0c1c
.org 0xc72a6
	bl 0x66160	@ 000c72a6 9ef75bff
.org 0xc72aa
	lsls r0, r0, #24	@ 000c72aa 0006
.org 0xc72ac
	ldr r2, [pc, #200]	@ 000c72ac 324a
.org 0xc72ae
	ldrb r1, [r6, #9]	@ 000c72ae 717a
.org 0xc72b0
	lsls r1, r1, #2	@ 000c72b0 8900
.org 0xc72b2
	adds r1, r1, r2	@ 000c72b2 8918
.org 0xc72b4
	movs r2, #1	@ 000c72b4 0122
.org 0xc72b6
	str r2, [r6, #12]	@ 000c72b6 f260
.org 0xc72b8
	ldr r1, [r1, #0]	@ 000c72b8 0968
.org 0xc72ba
	ldr r1, [r1, #4]	@ 000c72ba 4968
.org 0xc72bc
	str r1, [r6, #20]	@ 000c72bc 7161
.org 0xc72be
	ldrb r2, [r6, #10]	@ 000c72be b27a
.org 0xc72c0
	movs r1, #1	@ 000c72c0 0121
.org 0xc72c2
	movs r5, #0	@ 000c72c2 0025
.org 0xc72c4
	orrs r1, r2	@ 000c72c4 1143
.org 0xc72c6
	movs r2, #2	@ 000c72c6 0222
.org 0xc72c8
	orrs r1, r2	@ 000c72c8 1143
.org 0xc72ca
	strb r1, [r6, #10]	@ 000c72ca b172
.org 0xc72cc
	lsrs r0, r0, #22	@ 000c72cc 800d
.org 0xc72ce
	mov r2, sp	@ 000c72ce 6a46
.org 0xc72d0
	adds r1, r2, r0	@ 000c72d0 1118
.org 0xc72d2
	ldr r2, [pc, #168]	@ 000c72d2 2a4a
.org 0xc72d4
	adds r0, r4, #0	@ 000c72d4 201c
.org 0xc72d6
	adds r0, #64	@ 000c72d6 4030
.org 0xc72d8
	lsls r0, r0, #24	@ 000c72d8 0006
.org 0xc72da
	lsrs r0, r0, #23	@ 000c72da c00d
.org 0xc72dc
	adds r0, r0, r2	@ 000c72dc 8018
.org 0xc72de
	movs r3, #0	@ 000c72de 0023
.org 0xc72e0
	ldrsh r0, [r0, r3]	@ 000c72e0 c05e
.org 0xc72e2
	ldr r1, [r1, #0]	@ 000c72e2 0968
.org 0xc72e4
	muls r0, r1	@ 000c72e4 4843
.org 0xc72e6
	cmp r0, #0	@ 000c72e6 0028
.org 0xc72e8
	bge.n 0xc72ec	@ 000c72e8 00da
.org 0xc72ea
	adds r0, #255	@ 000c72ea ff30
.org 0xc72ec
	asrs r0, r0, #8	@ 000c72ec 0012
.org 0xc72ee
	str r0, [r6, #92]	@ 000c72ee f065
.org 0xc72f0
	lsls r0, r4, #1	@ 000c72f0 6000
.org 0xc72f2
	adds r0, r0, r2	@ 000c72f2 8018
.org 0xc72f4
	movs r4, #0	@ 000c72f4 0024
.org 0xc72f6
	ldrsh r0, [r0, r4]	@ 000c72f6 005f
.org 0xc72f8
	muls r0, r1	@ 000c72f8 4843
.org 0xc72fa
	cmp r0, #0	@ 000c72fa 0028
.org 0xc72fc
	bge.n 0xc7300	@ 000c72fc 00da
.org 0xc72fe
	adds r0, #255	@ 000c72fe ff30
.org 0xc7300
	asrs r0, r0, #8	@ 000c7300 0012
.org 0xc7302
	str r0, [r6, #96]	@ 000c7302 3066
.org 0xc7304
	adds r1, r6, #0	@ 000c7304 311c
.org 0xc7306
	adds r1, #180	@ 000c7306 b431
.org 0xc7308
	movs r0, #6	@ 000c7308 0620
.org 0xc730a
	strb r0, [r1, #0]	@ 000c730a 0870
.org 0xc730c
	adds r0, r6, #0	@ 000c730c 301c
.org 0xc730e
	adds r0, #181	@ 000c730e b530
.org 0xc7310
	strb r7, [r0, #0]	@ 000c7310 0770
.org 0xc7312
	adds r0, r6, #0	@ 000c7312 301c
.org 0xc7314
	bl 0x1cc9c	@ 000c7314 55f7c2fc
.org 0xc7318
	ldrb r1, [r6, #10]	@ 000c7318 b17a
.org 0xc731a
	movs r0, #239	@ 000c731a ef20
.org 0xc731c
	ands r0, r1	@ 000c731c 0840
.org 0xc731e
	strb r0, [r6, #10]	@ 000c731e b072
.org 0xc7320
	adds r0, r6, #0	@ 000c7320 301c
.org 0xc7322
	adds r0, #76	@ 000c7322 4c30
.org 0xc7324
	strb r7, [r0, #0]	@ 000c7324 0770
.org 0xc7326
	adds r2, r6, #0	@ 000c7326 321c
.org 0xc7328
	adds r2, #74	@ 000c7328 4a32
.org 0xc732a
	ldrb r1, [r2, #0]	@ 000c732a 1178
.org 0xc732c
	movs r0, #17	@ 000c732c 1120
.org 0xc732e
	negs r0, r0	@ 000c732e 4042
.org 0xc7330
	ands r0, r1	@ 000c7330 0840
.org 0xc7332
	strb r0, [r2, #0]	@ 000c7332 1070
.org 0xc7334
	ldr r1, [pc, #72]	@ 000c7334 1249
.org 0xc7336
	adds r0, r6, #0	@ 000c7336 301c
.org 0xc7338
	bl 0x1cf00	@ 000c7338 55f7e2fd
.org 0xc733c
	ldrb r0, [r6, #10]	@ 000c733c b07a
.org 0xc733e
	movs r1, #4	@ 000c733e 0421
.org 0xc7340
	orrs r0, r1	@ 000c7340 0843
.org 0xc7342
	strb r0, [r6, #10]	@ 000c7342 b072
.org 0xc7344
	adds r4, r6, #0	@ 000c7344 341c
.org 0xc7346
	adds r4, #116	@ 000c7346 7434
.org 0xc7348
	ldr r1, [pc, #56]	@ 000c7348 0e49
.org 0xc734a
	adds r5, r6, #0	@ 000c734a 351c
.org 0xc734c
	adds r5, #84	@ 000c734c 5435
.org 0xc734e
	adds r0, r4, #0	@ 000c734e 201c
.org 0xc7350
	adds r2, r5, #0	@ 000c7350 2a1c
.org 0xc7352
	movs r3, #64	@ 000c7352 4023
.org 0xc7354
	bl 0x5760	@ 000c7354 3ef704fa
.org 0xc7358
	str r6, [r4, #44]	@ 000c7358 e662
.org 0xc735a
	str r7, [r4, #36]	@ 000c735a 6762
.org 0xc735c
	adds r0, r6, #0	@ 000c735c 301c
.org 0xc735e
	adds r1, r5, #0	@ 000c735e 291c
.org 0xc7360
	movs r2, #4	@ 000c7360 0422
.org 0xc7362
	bl 0xc7220	@ 000c7362 fff75dff
.org 0xc7366
	adds r0, r6, #0	@ 000c7366 301c
.org 0xc7368
	bl 0xc7468	@ 000c7368 00f07ef8
.org 0xc736c
	add sp, #12	@ 000c736c 03b0
.org 0xc736e
	pop {r4, r5, r6, r7}	@ 000c736e f0bc
.org 0xc7370
	pop {r0}	@ 000c7370 01bc
.org 0xc7372
	bx r0	@ 000c7372 0047
