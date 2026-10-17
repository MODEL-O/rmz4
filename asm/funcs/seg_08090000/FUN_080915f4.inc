@ FUN_080915f4  entry 0x080915f4  size 96
.thumb
.org 0x915f4
FUN_080915f4:
	push {r4, r5, lr}	@ 000915f4 30b5
.org 0x915f6
	sub sp, #8	@ 000915f6 82b0
.org 0x915f8
	adds r5, r0, #0	@ 000915f8 051c
.org 0x915fa
	ldr r1, [r5, #40]	@ 000915fa a96a
.org 0x915fc
	adds r1, #213	@ 000915fc d531
.org 0x915fe
	ldrb r0, [r1, #0]	@ 000915fe 0878
.org 0x91600
	subs r0, #1	@ 00091600 0138
.org 0x91602
	movs r4, #0	@ 00091602 0024
.org 0x91604
	strb r0, [r1, #0]	@ 00091604 0870
.org 0x91606
	ldr r0, [r5, #84]	@ 00091606 686d
.org 0x91608
	str r0, [sp, #0]	@ 00091608 0090
.org 0x9160a
	ldr r0, [r5, #88]	@ 0009160a a86d
.org 0x9160c
	ldr r1, [pc, #68]	@ 0009160c 1149
.org 0x9160e
	adds r0, r0, r1	@ 0009160e 4018
.org 0x91610
	str r0, [sp, #4]	@ 00091610 0190
.org 0x91612
	movs r0, #1	@ 00091612 0120
.org 0x91614
	mov r1, sp	@ 00091614 6946
.org 0x91616
	bl 0xd0c88	@ 00091616 3ff037fb
.org 0x9161a
	movs r0, #53	@ 0009161a 3520
.org 0x9161c
	bl 0x2b10	@ 0009161c 71f778fa
.org 0x91620
	adds r0, r5, #0	@ 00091620 281c
.org 0x91622
	adds r0, #140	@ 00091622 8c30
.org 0x91624
	str r4, [r0, #0]	@ 00091624 0460
.org 0x91626
	adds r0, #4	@ 00091626 0430
.org 0x91628
	str r4, [r0, #0]	@ 00091628 0460
.org 0x9162a
	adds r0, #4	@ 0009162a 0430
.org 0x9162c
	strb r4, [r0, #0]	@ 0009162c 0470
.org 0x9162e
	ldrb r1, [r5, #10]	@ 0009162e a97a
.org 0x91630
	movs r0, #251	@ 00091630 fb20
.org 0x91632
	ands r0, r1	@ 00091632 0840
.org 0x91634
	movs r1, #254	@ 00091634 fe21
.org 0x91636
	ands r0, r1	@ 00091636 0840
.org 0x91638
	strb r0, [r5, #10]	@ 00091638 a872
.org 0x9163a
	ldr r1, [pc, #28]	@ 0009163a 0749
.org 0x9163c
	ldrb r0, [r5, #9]	@ 0009163c 687a
.org 0x9163e
	lsls r0, r0, #2	@ 0009163e 8000
.org 0x91640
	adds r0, r0, r1	@ 00091640 4018
.org 0x91642
	movs r1, #4	@ 00091642 0421
.org 0x91644
	str r1, [r5, #12]	@ 00091644 e960
.org 0x91646
	ldr r0, [r0, #0]	@ 00091646 0068
.org 0x91648
	ldr r0, [r0, #16]	@ 00091648 0069
.org 0x9164a
	str r0, [r5, #20]	@ 0009164a 6861
.org 0x9164c
	add sp, #8	@ 0009164c 02b0
.org 0x9164e
	pop {r4, r5}	@ 0009164e 30bc
.org 0x91650
	pop {r0}	@ 00091650 01bc
.org 0x91652
	bx r0	@ 00091652 0047
