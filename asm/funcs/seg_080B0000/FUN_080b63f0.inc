@ FUN_080b63f0  entry 0x080b63f0  size 126
.thumb
.org 0xb63f0
FUN_080b63f0:
	push {r4, r5, lr}	@ 000b63f0 30b5
.org 0xb63f2
	sub sp, #8	@ 000b63f2 82b0
.org 0xb63f4
	adds r5, r0, #0	@ 000b63f4 051c
.org 0xb63f6
	movs r0, #53	@ 000b63f6 3520
.org 0xb63f8
	bl 0x2b10	@ 000b63f8 4cf78afb
.org 0xb63fc
	ldr r0, [r5, #40]	@ 000b63fc a86a
.org 0xb63fe
	adds r1, r0, #0	@ 000b63fe 011c
.org 0xb6400
	adds r1, #204	@ 000b6400 cc31
.org 0xb6402
	ldrh r2, [r1, #0]	@ 000b6402 0a88
.org 0xb6404
	movs r3, #0	@ 000b6404 0023
.org 0xb6406
	ldrsh r0, [r1, r3]	@ 000b6406 c85e
.org 0xb6408
	cmp r0, #0	@ 000b6408 0028
.org 0xb640a
	beq.n 0xb6410	@ 000b640a 01d0
.org 0xb640c
	subs r0, r2, #1	@ 000b640c 501e
.org 0xb640e
	strh r0, [r1, #0]	@ 000b640e 0880
.org 0xb6410
	ldr r2, [r5, #40]	@ 000b6410 aa6a
.org 0xb6412
	adds r2, #206	@ 000b6412 ce32
.org 0xb6414
	adds r1, r5, #0	@ 000b6414 291c
.org 0xb6416
	adds r1, #181	@ 000b6416 b531
.org 0xb6418
	movs r0, #1	@ 000b6418 0120
.org 0xb641a
	ldrb r1, [r1, #0]	@ 000b641a 0978
.org 0xb641c
	lsls r0, r1	@ 000b641c 8840
.org 0xb641e
	ldrb r1, [r2, #0]	@ 000b641e 1178
.org 0xb6420
	bics r1, r0	@ 000b6420 8143
.org 0xb6422
	movs r4, #0	@ 000b6422 0024
.org 0xb6424
	strb r1, [r2, #0]	@ 000b6424 1170
.org 0xb6426
	ldr r0, [r5, #84]	@ 000b6426 686d
.org 0xb6428
	str r0, [sp, #0]	@ 000b6428 0090
.org 0xb642a
	ldr r0, [r5, #88]	@ 000b642a a86d
.org 0xb642c
	ldr r1, [pc, #64]	@ 000b642c 1049
.org 0xb642e
	adds r0, r0, r1	@ 000b642e 4018
.org 0xb6430
	str r0, [sp, #4]	@ 000b6430 0190
.org 0xb6432
	movs r0, #1	@ 000b6432 0120
.org 0xb6434
	mov r1, sp	@ 000b6434 6946
.org 0xb6436
	bl 0xd0c88	@ 000b6436 1af027fc
.org 0xb643a
	adds r0, r5, #0	@ 000b643a 281c
.org 0xb643c
	adds r0, #140	@ 000b643c 8c30
.org 0xb643e
	str r4, [r0, #0]	@ 000b643e 0460
.org 0xb6440
	adds r0, #4	@ 000b6440 0430
.org 0xb6442
	str r4, [r0, #0]	@ 000b6442 0460
.org 0xb6444
	adds r0, #4	@ 000b6444 0430
.org 0xb6446
	strb r4, [r0, #0]	@ 000b6446 0470
.org 0xb6448
	ldrb r1, [r5, #10]	@ 000b6448 a97a
.org 0xb644a
	movs r0, #251	@ 000b644a fb20
.org 0xb644c
	ands r0, r1	@ 000b644c 0840
.org 0xb644e
	movs r1, #254	@ 000b644e fe21
.org 0xb6450
	ands r0, r1	@ 000b6450 0840
.org 0xb6452
	strb r0, [r5, #10]	@ 000b6452 a872
.org 0xb6454
	ldr r1, [pc, #28]	@ 000b6454 0749
.org 0xb6456
	ldrb r0, [r5, #9]	@ 000b6456 687a
.org 0xb6458
	lsls r0, r0, #2	@ 000b6458 8000
.org 0xb645a
	adds r0, r0, r1	@ 000b645a 4018
.org 0xb645c
	movs r1, #4	@ 000b645c 0421
.org 0xb645e
	str r1, [r5, #12]	@ 000b645e e960
.org 0xb6460
	ldr r0, [r0, #0]	@ 000b6460 0068
.org 0xb6462
	ldr r0, [r0, #16]	@ 000b6462 0069
.org 0xb6464
	str r0, [r5, #20]	@ 000b6464 6861
.org 0xb6466
	add sp, #8	@ 000b6466 02b0
.org 0xb6468
	pop {r4, r5}	@ 000b6468 30bc
.org 0xb646a
	pop {r0}	@ 000b646a 01bc
.org 0xb646c
	bx r0	@ 000b646c 0047
