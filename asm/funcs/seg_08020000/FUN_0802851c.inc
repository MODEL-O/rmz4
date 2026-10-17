@ FUN_0802851c  entry 0x0802851c  size 90
.thumb
.org 0x2851c
FUN_0802851c:
	push {r4, r5, lr}	@ 0002851c 30b5
.org 0x2851e
	adds r4, r0, #0	@ 0002851e 041c
.org 0x28520
	ldr r0, [r4, #12]	@ 00028520 e068
.org 0x28522
	ldrb r5, [r0, #1]	@ 00028522 4578
.org 0x28524
	ldr r1, [r0, #4]	@ 00028524 4168
.org 0x28526
	adds r0, r5, #0	@ 00028526 281c
.org 0x28528
	bl 0x276dc	@ 00028528 fff7d8f8
.org 0x2852c
	ldr r0, [r4, #12]	@ 0002852c e068
.org 0x2852e
	movs r1, #2	@ 0002852e 0221
.org 0x28530
	ldrsh r0, [r0, r1]	@ 00028530 405e
.org 0x28532
	cmp r0, #0	@ 00028532 0028
.org 0x28534
	bne.n 0x28576	@ 00028534 1fd1
.org 0x28536
	cmp r5, #0	@ 00028536 002d
.org 0x28538
	bne.n 0x28576	@ 00028538 1dd1
.org 0x2853a
	ldr r4, [r4, #16]	@ 0002853a 2469
.org 0x2853c
	ldr r0, [pc, #36]	@ 0002853c 0948
.org 0x2853e
	movs r1, #232	@ 0002853e e821
.org 0x28540
	lsls r1, r1, #1	@ 00028540 4900
.org 0x28542
	adds r0, r0, r1	@ 00028542 4018
.org 0x28544
	ldrh r1, [r0, #0]	@ 00028544 0188
.org 0x28546
	movs r0, #127	@ 00028546 7f20
.org 0x28548
	ands r0, r1	@ 00028548 0840
.org 0x2854a
	cmp r0, #4	@ 0002854a 0428
.org 0x2854c
	bne.n 0x2856c	@ 0002854c 0ed1
.org 0x2854e
	ldr r0, [r4, #84]	@ 0002854e 606d
.org 0x28550
	ldr r1, [pc, #20]	@ 00028550 0549
.org 0x28552
	adds r0, r0, r1	@ 00028552 4018
.org 0x28554
	movs r1, #240	@ 00028554 f021
.org 0x28556
	lsls r1, r1, #10	@ 00028556 8902
.org 0x28558
	bl 0x129050	@ 00028558 00f17afd
.org 0x2855c
	movs r1, #240	@ 0002855c f021
.org 0x2855e
	lsls r1, r1, #8	@ 0002855e 0902
.org 0x28560
	adds r0, r0, r1	@ 00028560 4018
.org 0x28562
	b.n 0x2856e	@ 00028562 04e0
.org 0x28564
	.byte 0xb0,0x0a,0x00,0x02	@ 00028564 data
.org 0x28568
	.byte 0x00,0x10,0xff,0xff	@ 00028568 data
.org 0x2856c
	ldr r0, [r4, #84]	@ 0002856c 606d
.org 0x2856e
	ldr r1, [r4, #88]	@ 0002856e a16d
.org 0x28570
	bl 0x8534	@ 00028570 dff7e0ff
.org 0x28574
	str r0, [r4, #88]	@ 00028574 a065
