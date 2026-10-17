@ FUN_080b9470  entry 0x080b9470  size 100
.thumb
.org 0xb9470
FUN_080b9470:
	push {r4, r5, lr}	@ 000b9470 30b5
.org 0xb9472
	adds r3, r0, #0	@ 000b9472 031c
.org 0xb9474
	ldr r2, [r3, #40]	@ 000b9474 9a6a
.org 0xb9476
	ldr r0, [pc, #92]	@ 000b9476 1748
.org 0xb9478
	movs r4, #0	@ 000b9478 0024
.org 0xb947a
	strh r4, [r0, #0]	@ 000b947a 0480
.org 0xb947c
	movs r0, #69	@ 000b947c 4520
.org 0xb947e
	adds r0, r0, r3	@ 000b947e c018
.org 0xb9480
	mov ip, r0	@ 000b9480 8446
.org 0xb9482
	ldrb r1, [r0, #0]	@ 000b9482 0178
.org 0xb9484
	movs r0, #13	@ 000b9484 0d20
.org 0xb9486
	negs r0, r0	@ 000b9486 4042
.org 0xb9488
	ands r0, r1	@ 000b9488 0840
.org 0xb948a
	mov r1, ip	@ 000b948a 6146
.org 0xb948c
	strb r0, [r1, #0]	@ 000b948c 0870
.org 0xb948e
	adds r2, #204	@ 000b948e cc32
.org 0xb9490
	ldrh r1, [r2, #0]	@ 000b9490 1188
.org 0xb9492
	movs r5, #0	@ 000b9492 0025
.org 0xb9494
	ldrsh r0, [r2, r5]	@ 000b9494 505f
.org 0xb9496
	cmp r0, #0	@ 000b9496 0028
.org 0xb9498
	beq.n 0xb949e	@ 000b9498 01d0
.org 0xb949a
	subs r0, r1, #1	@ 000b949a 481e
.org 0xb949c
	strh r0, [r2, #0]	@ 000b949c 1080
.org 0xb949e
	adds r0, r3, #0	@ 000b949e 181c
.org 0xb94a0
	adds r0, #140	@ 000b94a0 8c30
.org 0xb94a2
	str r4, [r0, #0]	@ 000b94a2 0460
.org 0xb94a4
	adds r0, #4	@ 000b94a4 0430
.org 0xb94a6
	str r4, [r0, #0]	@ 000b94a6 0460
.org 0xb94a8
	adds r1, r3, #0	@ 000b94a8 191c
.org 0xb94aa
	adds r1, #148	@ 000b94aa 9431
.org 0xb94ac
	movs r0, #0	@ 000b94ac 0020
.org 0xb94ae
	strb r0, [r1, #0]	@ 000b94ae 0870
.org 0xb94b0
	ldrb r1, [r3, #10]	@ 000b94b0 997a
.org 0xb94b2
	movs r0, #251	@ 000b94b2 fb20
.org 0xb94b4
	ands r0, r1	@ 000b94b4 0840
.org 0xb94b6
	movs r1, #254	@ 000b94b6 fe21
.org 0xb94b8
	ands r0, r1	@ 000b94b8 0840
.org 0xb94ba
	strb r0, [r3, #10]	@ 000b94ba 9872
.org 0xb94bc
	ldr r1, [pc, #24]	@ 000b94bc 0649
.org 0xb94be
	ldrb r0, [r3, #9]	@ 000b94be 587a
.org 0xb94c0
	lsls r0, r0, #2	@ 000b94c0 8000
.org 0xb94c2
	adds r0, r0, r1	@ 000b94c2 4018
.org 0xb94c4
	movs r1, #4	@ 000b94c4 0421
.org 0xb94c6
	str r1, [r3, #12]	@ 000b94c6 d960
.org 0xb94c8
	ldr r0, [r0, #0]	@ 000b94c8 0068
.org 0xb94ca
	ldr r0, [r0, #16]	@ 000b94ca 0069
.org 0xb94cc
	str r0, [r3, #20]	@ 000b94cc 5861
.org 0xb94ce
	pop {r4, r5}	@ 000b94ce 30bc
.org 0xb94d0
	pop {r0}	@ 000b94d0 01bc
.org 0xb94d2
	bx r0	@ 000b94d2 0047
