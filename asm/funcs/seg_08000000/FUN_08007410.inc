@ FUN_08007410  entry 0x08007410  size 158
.thumb
.org 0x7410
FUN_08007410:
	push {r4, r5, r6, r7, lr}	@ 00007410 f0b5
.org 0x7412
	mov r7, sl	@ 00007412 5746
.org 0x7414
	mov r6, r9	@ 00007414 4e46
.org 0x7416
	mov r5, r8	@ 00007416 4546
.org 0x7418
	push {r5, r6, r7}	@ 00007418 e0b4
.org 0x741a
	adds r6, r2, #0	@ 0000741a 161c
.org 0x741c
	ldr r4, [pc, #144]	@ 0000741c 244c
.org 0x741e
	movs r3, #232	@ 0000741e e823
.org 0x7420
	lsls r3, r3, #1	@ 00007420 5b00
.org 0x7422
	adds r2, r4, r3	@ 00007422 e218
.org 0x7424
	ldrb r2, [r2, #0]	@ 00007424 1278
.org 0x7426
	movs r3, #127	@ 00007426 7f23
.org 0x7428
	ands r3, r2	@ 00007428 1340
.org 0x742a
	ldr r5, [pc, #136]	@ 0000742a 224d
.org 0x742c
	ldr r7, [pc, #136]	@ 0000742c 224f
.org 0x742e
	adds r2, r4, r7	@ 0000742e e219
.org 0x7430
	ldrb r2, [r2, #0]	@ 00007430 1278
.org 0x7432
	lsrs r2, r2, #4	@ 00007432 1209
.org 0x7434
	lsls r2, r2, #2	@ 00007434 9200
.org 0x7436
	lsls r3, r3, #3	@ 00007436 db00
.org 0x7438
	adds r2, r2, r3	@ 00007438 d218
.org 0x743a
	adds r2, r2, r5	@ 0000743a 5219
.org 0x743c
	ldr r3, [r2, #0]	@ 0000743c 1368
.org 0x743e
	ldr r2, [pc, #124]	@ 0000743e 1f4a
.org 0x7440
	adds r7, r4, r2	@ 00007440 a718
.org 0x7442
	ldrh r2, [r6, #0]	@ 00007442 3288
.org 0x7444
	lsls r2, r2, #17	@ 00007444 5204
.org 0x7446
	lsrs r4, r2, #16	@ 00007446 140c
.org 0x7448
	adds r6, #2	@ 00007448 0236
.org 0x744a
	ldrh r2, [r6, #0]	@ 0000744a 3288
.org 0x744c
	mov r8, r2	@ 0000744c 9046
.org 0x744e
	adds r6, #2	@ 0000744e 0236
.org 0x7450
	ldr r2, [r3, #12]	@ 00007450 da68
.org 0x7452
	ldrb r3, [r2, #2]	@ 00007452 9378
.org 0x7454
	lsls r2, r3, #4	@ 00007454 1a01
.org 0x7456
	subs r2, r2, r3	@ 00007456 d21a
.org 0x7458
	muls r1, r2	@ 00007458 5143
.org 0x745a
	adds r1, r1, r0	@ 0000745a 0918
.org 0x745c
	lsls r1, r1, #1	@ 0000745c 4900
.org 0x745e
	adds r7, r1, r7	@ 0000745e cf19
.org 0x7460
	mov r3, r8	@ 00007460 4346
.org 0x7462
	lsls r0, r3, #16	@ 00007462 1804
.org 0x7464
	movs r5, #0	@ 00007464 0025
.org 0x7466
	cmp r0, #0	@ 00007466 0028
.org 0x7468
	ble.n 0x7494	@ 00007468 14dd
.org 0x746a
	lsls r4, r4, #16	@ 0000746a 2404
.org 0x746c
	asrs r0, r4, #16	@ 0000746c 2014
.org 0x746e
	mov sl, r0	@ 0000746e 8246
.org 0x7470
	lsls r2, r2, #1	@ 00007470 5200
.org 0x7472
	mov r9, r2	@ 00007472 9146
.org 0x7474
	adds r0, r6, #0	@ 00007474 301c
.org 0x7476
	adds r1, r7, #0	@ 00007476 391c
.org 0x7478
	asrs r2, r4, #16	@ 00007478 2214
.org 0x747a
	bl 0xb30	@ 0000747a f9f759fb
.org 0x747e
	add r6, sl	@ 0000747e 5644
.org 0x7480
	add r7, r9	@ 00007480 4f44
.org 0x7482
	lsls r1, r5, #16	@ 00007482 2904
.org 0x7484
	movs r2, #128	@ 00007484 8022
.org 0x7486
	lsls r2, r2, #9	@ 00007486 5202
.org 0x7488
	adds r1, r1, r2	@ 00007488 8918
.org 0x748a
	lsrs r5, r1, #16	@ 0000748a 0d0c
.org 0x748c
	mov r3, r8	@ 0000748c 4346
.org 0x748e
	lsls r0, r3, #16	@ 0000748e 1804
.org 0x7490
	cmp r1, r0	@ 00007490 8142
.org 0x7492
	blt.n 0x7474	@ 00007492 efdb
.org 0x7494
	ldr r0, [pc, #24]	@ 00007494 0648
.org 0x7496
	movs r7, #176	@ 00007496 b027
.org 0x7498
	lsls r7, r7, #10	@ 00007498 bf02
.org 0x749a
	adds r0, r0, r7	@ 0000749a c019
.org 0x749c
	movs r1, #1	@ 0000749c 0121
.org 0x749e
	strh r1, [r0, #0]	@ 0000749e 0180
.org 0x74a0
	pop {r3, r4, r5}	@ 000074a0 38bc
.org 0x74a2
	mov r8, r3	@ 000074a2 9846
.org 0x74a4
	mov r9, r4	@ 000074a4 a146
.org 0x74a6
	mov sl, r5	@ 000074a6 aa46
.org 0x74a8
	pop {r4, r5, r6, r7}	@ 000074a8 f0bc
.org 0x74aa
	pop {r0}	@ 000074aa 01bc
.org 0x74ac
	bx r0	@ 000074ac 0047
