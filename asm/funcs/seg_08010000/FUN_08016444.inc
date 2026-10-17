@ FUN_08016444  entry 0x08016444  size 130
.thumb
.org 0x16444
FUN_08016444:
	push {r4, r5, r6, r7, lr}	@ 00016444 f0b5
.org 0x16446
	sub sp, #8	@ 00016446 82b0
.org 0x16448
	adds r7, r0, #0	@ 00016448 071c
.org 0x1644a
	ldrb r4, [r7, #14]	@ 0001644a bc7b
.org 0x1644c
	cmp r4, #0	@ 0001644c 002c
.org 0x1644e
	bne.n 0x164be	@ 0001644e 36d1
.org 0x16450
	ldr r0, [r7, #92]	@ 00016450 f86d
.org 0x16452
	lsls r0, r0, #16	@ 00016452 0004
.org 0x16454
	lsrs r0, r0, #20	@ 00016454 000d
.org 0x16456
	lsls r5, r0, #1	@ 00016456 4500
.org 0x16458
	ldr r3, [pc, #108]	@ 00016458 1b4b
.org 0x1645a
	adds r5, r5, r3	@ 0001645a ed18
.org 0x1645c
	ldr r1, [r7, #100]	@ 0001645c 796e
.org 0x1645e
	ldr r6, [pc, #108]	@ 0001645e 1b4e
.org 0x16460
	adds r2, r6, #0	@ 00016460 321c
.org 0x16462
	orrs r1, r2	@ 00016462 1143
.org 0x16464
	strh r1, [r5, #0]	@ 00016464 2980
.org 0x16466
	lsls r0, r0, #2	@ 00016466 8000
.org 0x16468
	adds r3, #8	@ 00016468 0833
.org 0x1646a
	adds r0, r0, r3	@ 0001646a c018
.org 0x1646c
	str r4, [r0, #0]	@ 0001646c 0460
.org 0x1646e
	ldr r0, [pc, #96]	@ 0001646e 1848
.org 0x16470
	ldr r0, [r0, #0]	@ 00016470 0068
.org 0x16472
	ldr r2, [pc, #96]	@ 00016472 184a
.org 0x16474
	adds r0, r0, r2	@ 00016474 8018
.org 0x16476
	movs r4, #248	@ 00016476 f824
.org 0x16478
	lsls r4, r4, #5	@ 00016478 6401
.org 0x1647a
	ands r1, r4	@ 0001647a 2140
.org 0x1647c
	lsls r1, r1, #3	@ 0001647c c900
.org 0x1647e
	movs r2, #192	@ 0001647e c022
.org 0x16480
	lsls r2, r2, #19	@ 00016480 d204
.org 0x16482
	adds r1, r1, r2	@ 00016482 8918
.org 0x16484
	movs r6, #128	@ 00016484 8026
.org 0x16486
	lsls r6, r6, #2	@ 00016486 b600
.org 0x16488
	adds r2, r6, #0	@ 00016488 321c
.org 0x1648a
	bl 0x128be0	@ 0001648a 12f1a9fb
.org 0x1648e
	ldr r1, [pc, #72]	@ 0001648e 1249
.org 0x16490
	ldrh r0, [r5, #0]	@ 00016490 2888
.org 0x16492
	ands r4, r0	@ 00016492 0440
.org 0x16494
	lsls r4, r4, #3	@ 00016494 e400
.org 0x16496
	ldr r0, [pc, #68]	@ 00016496 1148
.org 0x16498
	adds r4, r4, r0	@ 00016498 2418
.org 0x1649a
	str r1, [sp, #0]	@ 0001649a 0091
.org 0x1649c
	movs r2, #128	@ 0001649c 8022
.org 0x1649e
	lsls r2, r2, #17	@ 0001649e 5204
.org 0x164a0
	orrs r2, r6	@ 000164a0 3243
.org 0x164a2
	mov r0, sp	@ 000164a2 6846
.org 0x164a4
	adds r1, r4, #0	@ 000164a4 211c
.org 0x164a6
	bl 0x128be0	@ 000164a6 12f19bfb
.org 0x164aa
	movs r0, #240	@ 000164aa f020
.org 0x164ac
	str r0, [r7, #76]	@ 000164ac f864
.org 0x164ae
	movs r0, #216	@ 000164ae d820
.org 0x164b0
	str r0, [r7, #80]	@ 000164b0 3865
.org 0x164b2
	movs r0, #128	@ 000164b2 8020
.org 0x164b4
	str r0, [r7, #68]	@ 000164b4 7864
.org 0x164b6
	str r0, [r7, #72]	@ 000164b6 b864
.org 0x164b8
	ldrb r0, [r7, #14]	@ 000164b8 b87b
.org 0x164ba
	adds r0, #1	@ 000164ba 0130
.org 0x164bc
	strb r0, [r7, #14]	@ 000164bc b873
.org 0x164be
	add sp, #8	@ 000164be 02b0
.org 0x164c0
	pop {r4, r5, r6, r7}	@ 000164c0 f0bc
.org 0x164c2
	pop {r0}	@ 000164c2 01bc
.org 0x164c4
	bx r0	@ 000164c4 0047
