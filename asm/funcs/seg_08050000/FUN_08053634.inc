@ FUN_08053634  entry 0x08053634  size 60
.thumb
.org 0x53634
FUN_08053634:
	push {r4, lr}	@ 00053634 10b5
.org 0x53636
	adds r4, r0, #0	@ 00053636 041c
.org 0x53638
	ldrb r1, [r4, #15]	@ 00053638 e17b
.org 0x5363a
	cmp r1, #0	@ 0005363a 0029
.org 0x5363c
	bne.n 0x53650	@ 0005363c 08d1
.org 0x5363e
	adds r0, #200	@ 0005363e c830
.org 0x53640
	ldr r0, [r0, #0]	@ 00053640 0068
.org 0x53642
	adds r0, #180	@ 00053642 b430
.org 0x53644
	strb r1, [r0, #0]	@ 00053644 0170
.org 0x53646
	movs r0, #48	@ 00053646 3020
.org 0x53648
	strb r0, [r4, #18]	@ 00053648 a074
.org 0x5364a
	ldrb r0, [r4, #15]	@ 0005364a e07b
.org 0x5364c
	adds r0, #1	@ 0005364c 0130
.org 0x5364e
	strb r0, [r4, #15]	@ 0005364e e073
.org 0x53650
	adds r0, r4, #0	@ 00053650 201c
.org 0x53652
	bl 0x1cff0	@ 00053652 c9f7cdfc
.org 0x53656
	ldrb r0, [r4, #18]	@ 00053656 a07c
.org 0x53658
	subs r0, #1	@ 00053658 0138
.org 0x5365a
	strb r0, [r4, #18]	@ 0005365a a074
.org 0x5365c
	lsls r0, r0, #24	@ 0005365c 0006
.org 0x5365e
	lsrs r1, r0, #24	@ 0005365e 010e
.org 0x53660
	cmp r1, #0	@ 00053660 0029
.org 0x53662
	bne.n 0x5366a	@ 00053662 02d1
.org 0x53664
	movs r0, #4	@ 00053664 0420
.org 0x53666
	strb r0, [r4, #14]	@ 00053666 a073
.org 0x53668
	strb r1, [r4, #15]	@ 00053668 e173
.org 0x5366a
	pop {r4}	@ 0005366a 10bc
.org 0x5366c
	pop {r0}	@ 0005366c 01bc
.org 0x5366e
	bx r0	@ 0005366e 0047
