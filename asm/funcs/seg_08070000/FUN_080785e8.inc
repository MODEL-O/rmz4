@ FUN_080785e8  entry 0x080785e8  size 136
.thumb
.org 0x785e8
FUN_080785e8:
	push {r4, lr}	@ 000785e8 10b5
.org 0x785ea
	adds r4, r0, #0	@ 000785ea 041c
.org 0x785ec
	ldrb r0, [r4, #15]	@ 000785ec e07b
.org 0x785ee
	cmp r0, #0	@ 000785ee 0028
.org 0x785f0
	bne.n 0x78616	@ 000785f0 11d1
.org 0x785f2
	adds r2, r4, #0	@ 000785f2 221c
.org 0x785f4
	adds r2, #200	@ 000785f4 c832
.org 0x785f6
	ldr r0, [r2, #0]	@ 000785f6 1068
.org 0x785f8
	adds r0, #181	@ 000785f8 b530
.org 0x785fa
	movs r1, #1	@ 000785fa 0121
.org 0x785fc
	strb r1, [r0, #0]	@ 000785fc 0170
.org 0x785fe
	ldr r0, [r2, #0]	@ 000785fe 1068
.org 0x78600
	adds r0, #182	@ 00078600 b630
.org 0x78602
	strb r1, [r0, #0]	@ 00078602 0170
.org 0x78604
	adds r0, r4, #0	@ 00078604 201c
.org 0x78606
	movs r1, #0	@ 00078606 0021
.org 0x78608
	bl 0x78fdc	@ 00078608 00f0e8fc
.org 0x7860c
	movs r0, #64	@ 0007860c 4020
.org 0x7860e
	strb r0, [r4, #18]	@ 0007860e a074
.org 0x78610
	ldrb r0, [r4, #15]	@ 00078610 e07b
.org 0x78612
	adds r0, #1	@ 00078612 0130
.org 0x78614
	strb r0, [r4, #15]	@ 00078614 e073
.org 0x78616
	adds r0, r4, #0	@ 00078616 201c
.org 0x78618
	bl 0x1cff0	@ 00078618 a4f7eafc
.org 0x7861c
	adds r0, r4, #0	@ 0007861c 201c
.org 0x7861e
	adds r0, #116	@ 0007861e 7430
.org 0x78620
	ldr r3, [pc, #76]	@ 00078620 134b
.org 0x78622
	ldr r2, [pc, #80]	@ 00078622 144a
.org 0x78624
	adds r1, r4, #0	@ 00078624 211c
.org 0x78626
	adds r1, #196	@ 00078626 c431
.org 0x78628
	ldrb r1, [r1, #0]	@ 00078628 0978
.org 0x7862a
	lsls r1, r1, #1	@ 0007862a 4900
.org 0x7862c
	adds r1, r1, r2	@ 0007862c 8918
.org 0x7862e
	ldrh r2, [r1, #0]	@ 0007862e 0a88
.org 0x78630
	lsls r2, r2, #2	@ 00078630 9200
.org 0x78632
	adds r2, r2, r3	@ 00078632 d218
.org 0x78634
	adds r1, r4, #0	@ 00078634 211c
.org 0x78636
	adds r1, #113	@ 00078636 7131
.org 0x78638
	ldrb r1, [r1, #0]	@ 00078638 0978
.org 0x7863a
	lsls r1, r1, #24	@ 0007863a 0906
.org 0x7863c
	asrs r1, r1, #24	@ 0007863c 0916
.org 0x7863e
	ldr r2, [r2, #0]	@ 0007863e 1268
.org 0x78640
	lsls r1, r1, #2	@ 00078640 8900
.org 0x78642
	adds r1, r1, r2	@ 00078642 8918
.org 0x78644
	ldr r1, [r1, #0]	@ 00078644 0968
.org 0x78646
	bl 0x5784	@ 00078646 8df79df8
.org 0x7864a
	adds r0, r4, #0	@ 0007864a 201c
.org 0x7864c
	bl 0x78f28	@ 0007864c 00f06cfc
.org 0x78650
	ldrb r0, [r4, #18]	@ 00078650 a07c
.org 0x78652
	cmp r0, #0	@ 00078652 0028
.org 0x78654
	beq.n 0x78660	@ 00078654 04d0
.org 0x78656
	subs r0, #1	@ 00078656 0138
.org 0x78658
	strb r0, [r4, #18]	@ 00078658 a074
.org 0x7865a
	lsls r0, r0, #24	@ 0007865a 0006
.org 0x7865c
	cmp r0, #0	@ 0007865c 0028
.org 0x7865e
	bne.n 0x7866a	@ 0007865e 04d1
.org 0x78660
	ldrb r0, [r4, #14]	@ 00078660 a07b
.org 0x78662
	adds r0, #1	@ 00078662 0130
.org 0x78664
	movs r1, #0	@ 00078664 0021
.org 0x78666
	strb r0, [r4, #14]	@ 00078666 a073
.org 0x78668
	strb r1, [r4, #15]	@ 00078668 e173
.org 0x7866a
	pop {r4}	@ 0007866a 10bc
.org 0x7866c
	pop {r0}	@ 0007866c 01bc
.org 0x7866e
	bx r0	@ 0007866e 0047
