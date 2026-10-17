@ FUN_080e83c8  entry 0x080e83c8  size 98
.thumb
.org 0xe83c8
FUN_080e83c8:
	push {r4, r5, r6, r7, lr}	@ 000e83c8 f0b5
.org 0xe83ca
	adds r4, r0, #0	@ 000e83ca 041c
.org 0xe83cc
	adds r7, r1, #0	@ 000e83cc 0f1c
.org 0xe83ce
	lsls r2, r2, #24	@ 000e83ce 1206
.org 0xe83d0
	lsrs r6, r2, #24	@ 000e83d0 160e
.org 0xe83d2
	lsls r3, r3, #24	@ 000e83d2 1b06
.org 0xe83d4
	lsrs r5, r3, #24	@ 000e83d4 1d0e
.org 0xe83d6
	ldr r0, [pc, #84]	@ 000e83d6 1548
.org 0xe83d8
	ldr r0, [r0, #0]	@ 000e83d8 0068
.org 0xe83da
	bl 0x5500	@ 000e83da 1df791f8
.org 0xe83de
	adds r3, r0, #0	@ 000e83de 031c
.org 0xe83e0
	cmp r3, #0	@ 000e83e0 002b
.org 0xe83e2
	beq.n 0xe8422	@ 000e83e2 1ed0
.org 0xe83e4
	adds r1, r3, #0	@ 000e83e4 191c
.org 0xe83e6
	adds r1, #37	@ 000e83e6 2531
.org 0xe83e8
	movs r2, #0	@ 000e83e8 0022
.org 0xe83ea
	movs r0, #1	@ 000e83ea 0120
.org 0xe83ec
	strb r0, [r1, #0]	@ 000e83ec 0870
.org 0xe83ee
	ldr r0, [pc, #64]	@ 000e83ee 1048
.org 0xe83f0
	movs r1, #87	@ 000e83f0 5721
.org 0xe83f2
	strb r1, [r3, #9]	@ 000e83f2 5972
.org 0xe83f4
	movs r1, #174	@ 000e83f4 ae21
.org 0xe83f6
	lsls r1, r1, #1	@ 000e83f6 4900
.org 0xe83f8
	adds r0, r0, r1	@ 000e83f8 4018
.org 0xe83fa
	ldr r0, [r0, #0]	@ 000e83fa 0068
.org 0xe83fc
	ldr r0, [r0, #0]	@ 000e83fc 0068
.org 0xe83fe
	str r0, [r3, #20]	@ 000e83fe 5861
.org 0xe8400
	movs r0, #0	@ 000e8400 0020
.org 0xe8402
	strh r2, [r3, #32]	@ 000e8402 1a84
.org 0xe8404
	adds r1, r3, #0	@ 000e8404 191c
.org 0xe8406
	adds r1, #34	@ 000e8406 2231
.org 0xe8408
	strb r0, [r1, #0]	@ 000e8408 0870
.org 0xe840a
	str r4, [r3, #40]	@ 000e840a 9c62
.org 0xe840c
	ldr r0, [r7, #0]	@ 000e840c 3868
.org 0xe840e
	ldr r1, [r7, #4]	@ 000e840e 7968
.org 0xe8410
	str r0, [r3, #84]	@ 000e8410 5865
.org 0xe8412
	str r1, [r3, #88]	@ 000e8412 9965
.org 0xe8414
	strb r6, [r3, #16]	@ 000e8414 1e74
.org 0xe8416
	strb r5, [r3, #17]	@ 000e8416 5d74
.org 0xe8418
	adds r1, r4, #0	@ 000e8418 211c
.org 0xe841a
	adds r1, #204	@ 000e841a cc31
.org 0xe841c
	ldrh r0, [r1, #0]	@ 000e841c 0888
.org 0xe841e
	adds r0, #1	@ 000e841e 0130
.org 0xe8420
	strh r0, [r1, #0]	@ 000e8420 0880
.org 0xe8422
	adds r0, r3, #0	@ 000e8422 181c
.org 0xe8424
	pop {r4, r5, r6, r7}	@ 000e8424 f0bc
.org 0xe8426
	pop {r1}	@ 000e8426 02bc
.org 0xe8428
	bx r1	@ 000e8428 0847
