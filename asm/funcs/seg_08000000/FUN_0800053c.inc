@ FUN_0800053c  entry 0x0800053c  size 82
.thumb
.org 0x53c
FUN_0800053c:
	push {r4, r5, r6, r7}	@ 0000053c f0b4
.org 0x53e
	ldr r2, [pc, #316]	@ 0000053e 4f4a
.org 0x540
	ldr r3, [r0, #16]	@ 00000540 0369
.org 0x542
	lsls r3, r3, #2	@ 00000542 9b00
.org 0x544
	lsrs r3, r3, #27	@ 00000544 db0e
.org 0x546
	lsls r3, r3, #5	@ 00000546 5b01
.org 0x548
	adds r2, r2, r3	@ 00000548 d218
.org 0x54a
	strb r1, [r0, #27]	@ 0000054a c176
.org 0x54c
	lsls r1, r1, #1	@ 0000054c 4900
.org 0x54e
	ldrb r7, [r0, #24]	@ 0000054e 077e
.org 0x550
	ldrb r6, [r0, #25]	@ 00000550 467e
.org 0x552
	eors r6, r7	@ 00000552 7e40
.org 0x554
	beq.n 0x55c	@ 00000554 02d0
.org 0x556
	negs r1, r1	@ 00000556 4942
.org 0x558
	lsls r1, r1, #23	@ 00000558 c905
.org 0x55a
	lsrs r1, r1, #23	@ 0000055a c90d
.org 0x55c
	ldr r3, [pc, #280]	@ 0000055c 464b
.org 0x55e
	movs r4, #128	@ 0000055e 8024
.org 0x560
	adds r4, r4, r1	@ 00000560 6418
.org 0x562
	lsls r4, r4, #23	@ 00000562 e405
.org 0x564
	lsrs r4, r4, #23	@ 00000564 e40d
.org 0x566
	ldrsh r5, [r3, r4]	@ 00000566 1d5f
.org 0x568
	ldrsh r6, [r3, r1]	@ 00000568 5e5e
.org 0x56a
	orrs r7, r7	@ 0000056a 3f43
.org 0x56c
	beq.n 0x572	@ 0000056c 01d0
.org 0x56e
	negs r5, r5	@ 0000056e 6d42
.org 0x570
	negs r6, r6	@ 00000570 7642
.org 0x572
	strh r5, [r2, #6]	@ 00000572 d580
.org 0x574
	strh r6, [r2, #14]	@ 00000574 d681
.org 0x576
	ldrsh r5, [r3, r4]	@ 00000576 1d5f
.org 0x578
	ldrsh r6, [r3, r1]	@ 00000578 5e5e
.org 0x57a
	ldrb r7, [r0, #25]	@ 0000057a 477e
.org 0x57c
	orrs r7, r7	@ 0000057c 3f43
.org 0x57e
	beq.n 0x584	@ 0000057e 01d0
.org 0x580
	negs r5, r5	@ 00000580 6d42
.org 0x582
	negs r6, r6	@ 00000582 7642
.org 0x584
	strh r5, [r2, #30]	@ 00000584 d583
.org 0x586
	negs r6, r6	@ 00000586 7642
.org 0x588
	strh r6, [r2, #22]	@ 00000588 d682
.org 0x58a
	pop {r4, r5, r6, r7}	@ 0000058a f0bc
.org 0x58c
	bx lr	@ 0000058c 7047
