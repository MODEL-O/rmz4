@ FUN_080a73f8  entry 0x080a73f8  size 128
.thumb
.org 0xa73f8
FUN_080a73f8:
	push {lr}	@ 000a73f8 00b5
.org 0xa73fa
	adds r2, r0, #0	@ 000a73fa 021c
.org 0xa73fc
	ldrb r0, [r2, #14]	@ 000a73fc 907b
.org 0xa73fe
	adds r1, r0, #0	@ 000a73fe 011c
.org 0xa7400
	cmp r1, #0	@ 000a7400 0029
.org 0xa7402
	bne.n 0xa740a	@ 000a7402 02d1
.org 0xa7404
	strb r1, [r2, #15]	@ 000a7404 d173
.org 0xa7406
	adds r0, #1	@ 000a7406 0130
.org 0xa7408
	strb r0, [r2, #14]	@ 000a7408 9073
.org 0xa740a
	ldrb r0, [r2, #15]	@ 000a740a d07b
.org 0xa740c
	cmp r0, #1	@ 000a740c 0128
.org 0xa740e
	beq.n 0xa7436	@ 000a740e 12d0
.org 0xa7410
	cmp r0, #1	@ 000a7410 0128
.org 0xa7412
	bgt.n 0xa741a	@ 000a7412 02dc
.org 0xa7414
	cmp r0, #0	@ 000a7414 0028
.org 0xa7416
	beq.n 0xa7420	@ 000a7416 03d0
.org 0xa7418
	b.n 0xa746e	@ 000a7418 29e0
.org 0xa741a
	cmp r0, #2	@ 000a741a 0228
.org 0xa741c
	beq.n 0xa7458	@ 000a741c 1cd0
.org 0xa741e
	b.n 0xa746e	@ 000a741e 26e0
.org 0xa7420
	adds r3, r2, #0	@ 000a7420 131c
.org 0xa7422
	adds r3, #189	@ 000a7422 bd33
.org 0xa7424
	ldrb r0, [r3, #0]	@ 000a7424 1878
.org 0xa7426
	adds r1, r0, #3	@ 000a7426 c11c
.org 0xa7428
	strb r1, [r3, #0]	@ 000a7428 1970
.org 0xa742a
	subs r0, #114	@ 000a742a 7238
.org 0xa742c
	lsls r0, r0, #24	@ 000a742c 0006
.org 0xa742e
	lsrs r0, r0, #24	@ 000a742e 000e
.org 0xa7430
	cmp r0, #74	@ 000a7430 4a28
.org 0xa7432
	bhi.n 0xa746e	@ 000a7432 1cd8
.org 0xa7434
	b.n 0xa7450	@ 000a7434 0ce0
.org 0xa7436
	adds r1, r2, #0	@ 000a7436 111c
.org 0xa7438
	adds r1, #189	@ 000a7438 bd31
.org 0xa743a
	ldrb r0, [r1, #0]	@ 000a743a 0878
.org 0xa743c
	subs r0, #2	@ 000a743c 0238
.org 0xa743e
	strb r0, [r1, #0]	@ 000a743e 0870
.org 0xa7440
	lsls r0, r0, #24	@ 000a7440 0006
.org 0xa7442
	lsrs r0, r0, #24	@ 000a7442 000e
.org 0xa7444
	cmp r0, #112	@ 000a7444 7028
.org 0xa7446
	bhi.n 0xa746e	@ 000a7446 12d8
.org 0xa7448
	movs r0, #112	@ 000a7448 7020
.org 0xa744a
	strb r0, [r1, #0]	@ 000a744a 0870
.org 0xa744c
	movs r0, #8	@ 000a744c 0820
.org 0xa744e
	strb r0, [r2, #18]	@ 000a744e 9074
.org 0xa7450
	ldrb r0, [r2, #15]	@ 000a7450 d07b
.org 0xa7452
	adds r0, #1	@ 000a7452 0130
.org 0xa7454
	strb r0, [r2, #15]	@ 000a7454 d073
.org 0xa7456
	b.n 0xa746e	@ 000a7456 0ae0
.org 0xa7458
	ldrb r0, [r2, #18]	@ 000a7458 907c
.org 0xa745a
	subs r0, #1	@ 000a745a 0138
.org 0xa745c
	strb r0, [r2, #18]	@ 000a745c 9074
.org 0xa745e
	lsls r0, r0, #24	@ 000a745e 0006
.org 0xa7460
	lsrs r0, r0, #24	@ 000a7460 000e
.org 0xa7462
	cmp r0, #255	@ 000a7462 ff28
.org 0xa7464
	bne.n 0xa746e	@ 000a7464 03d1
.org 0xa7466
	movs r0, #4	@ 000a7466 0420
.org 0xa7468
	strb r0, [r2, #13]	@ 000a7468 5073
.org 0xa746a
	movs r0, #0	@ 000a746a 0020
.org 0xa746c
	strb r0, [r2, #14]	@ 000a746c 9073
.org 0xa746e
	adds r0, r2, #0	@ 000a746e 101c
.org 0xa7470
	bl 0x1cff0	@ 000a7470 75f7befd
.org 0xa7474
	pop {r0}	@ 000a7474 01bc
.org 0xa7476
	bx r0	@ 000a7476 0047
