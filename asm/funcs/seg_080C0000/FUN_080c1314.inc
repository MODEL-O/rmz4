@ FUN_080c1314  entry 0x080c1314  size 80
.thumb
.org 0xc1314
FUN_080c1314:
	push {r4, lr}	@ 000c1314 10b5
.org 0xc1316
	adds r4, r0, #0	@ 000c1316 041c
.org 0xc1318
	ldrb r0, [r4, #15]	@ 000c1318 e07b
.org 0xc131a
	cmp r0, #0	@ 000c131a 0028
.org 0xc131c
	bne.n 0xc1336	@ 000c131c 0bd1
.org 0xc131e
	adds r0, r4, #0	@ 000c131e 201c
.org 0xc1320
	adds r0, #116	@ 000c1320 7430
.org 0xc1322
	ldr r1, [pc, #64]	@ 000c1322 1049
.org 0xc1324
	bl 0x5784	@ 000c1324 44f72efa
.org 0xc1328
	ldr r1, [pc, #60]	@ 000c1328 0f49
.org 0xc132a
	adds r0, r4, #0	@ 000c132a 201c
.org 0xc132c
	bl 0x1cf00	@ 000c132c 5bf7e8fd
.org 0xc1330
	ldrb r0, [r4, #15]	@ 000c1330 e07b
.org 0xc1332
	adds r0, #1	@ 000c1332 0130
.org 0xc1334
	strb r0, [r4, #15]	@ 000c1334 e073
.org 0xc1336
	adds r0, r4, #0	@ 000c1336 201c
.org 0xc1338
	bl 0x1cff0	@ 000c1338 5bf75afe
.org 0xc133c
	adds r0, r4, #0	@ 000c133c 201c
.org 0xc133e
	adds r0, #115	@ 000c133e 7330
.org 0xc1340
	ldrb r0, [r0, #0]	@ 000c1340 0078
.org 0xc1342
	cmp r0, #3	@ 000c1342 0328
.org 0xc1344
	bne.n 0xc135e	@ 000c1344 0bd1
.org 0xc1346
	ldr r1, [pc, #36]	@ 000c1346 0949
.org 0xc1348
	ldrb r0, [r4, #9]	@ 000c1348 607a
.org 0xc134a
	lsls r0, r0, #2	@ 000c134a 8000
.org 0xc134c
	adds r0, r0, r1	@ 000c134c 4018
.org 0xc134e
	movs r1, #2	@ 000c134e 0221
.org 0xc1350
	str r1, [r4, #12]	@ 000c1350 e160
.org 0xc1352
	ldr r0, [r0, #0]	@ 000c1352 0068
.org 0xc1354
	ldr r0, [r0, #8]	@ 000c1354 8068
.org 0xc1356
	str r0, [r4, #20]	@ 000c1356 6061
.org 0xc1358
	adds r0, r4, #0	@ 000c1358 201c
.org 0xc135a
	bl 0xc1370	@ 000c135a 00f009f8
.org 0xc135e
	pop {r4}	@ 000c135e 10bc
.org 0xc1360
	pop {r0}	@ 000c1360 01bc
.org 0xc1362
	bx r0	@ 000c1362 0047
