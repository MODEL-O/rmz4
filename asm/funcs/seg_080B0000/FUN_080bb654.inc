@ FUN_080bb654  entry 0x080bb654  size 100
.thumb
.org 0xbb654
FUN_080bb654:
	push {r4, r5, lr}	@ 000bb654 30b5
.org 0xbb656
	adds r3, r0, #0	@ 000bb656 031c
.org 0xbb658
	ldr r2, [r3, #40]	@ 000bb658 9a6a
.org 0xbb65a
	ldr r0, [pc, #92]	@ 000bb65a 1748
.org 0xbb65c
	movs r4, #0	@ 000bb65c 0024
.org 0xbb65e
	strh r4, [r0, #0]	@ 000bb65e 0480
.org 0xbb660
	movs r0, #69	@ 000bb660 4520
.org 0xbb662
	adds r0, r0, r3	@ 000bb662 c018
.org 0xbb664
	mov ip, r0	@ 000bb664 8446
.org 0xbb666
	ldrb r1, [r0, #0]	@ 000bb666 0178
.org 0xbb668
	movs r0, #13	@ 000bb668 0d20
.org 0xbb66a
	negs r0, r0	@ 000bb66a 4042
.org 0xbb66c
	ands r0, r1	@ 000bb66c 0840
.org 0xbb66e
	mov r1, ip	@ 000bb66e 6146
.org 0xbb670
	strb r0, [r1, #0]	@ 000bb670 0870
.org 0xbb672
	adds r2, #204	@ 000bb672 cc32
.org 0xbb674
	ldrh r1, [r2, #0]	@ 000bb674 1188
.org 0xbb676
	movs r5, #0	@ 000bb676 0025
.org 0xbb678
	ldrsh r0, [r2, r5]	@ 000bb678 505f
.org 0xbb67a
	cmp r0, #0	@ 000bb67a 0028
.org 0xbb67c
	beq.n 0xbb682	@ 000bb67c 01d0
.org 0xbb67e
	subs r0, r1, #1	@ 000bb67e 481e
.org 0xbb680
	strh r0, [r2, #0]	@ 000bb680 1080
.org 0xbb682
	adds r0, r3, #0	@ 000bb682 181c
.org 0xbb684
	adds r0, #140	@ 000bb684 8c30
.org 0xbb686
	str r4, [r0, #0]	@ 000bb686 0460
.org 0xbb688
	adds r0, #4	@ 000bb688 0430
.org 0xbb68a
	str r4, [r0, #0]	@ 000bb68a 0460
.org 0xbb68c
	adds r1, r3, #0	@ 000bb68c 191c
.org 0xbb68e
	adds r1, #148	@ 000bb68e 9431
.org 0xbb690
	movs r0, #0	@ 000bb690 0020
.org 0xbb692
	strb r0, [r1, #0]	@ 000bb692 0870
.org 0xbb694
	ldrb r1, [r3, #10]	@ 000bb694 997a
.org 0xbb696
	movs r0, #251	@ 000bb696 fb20
.org 0xbb698
	ands r0, r1	@ 000bb698 0840
.org 0xbb69a
	movs r1, #254	@ 000bb69a fe21
.org 0xbb69c
	ands r0, r1	@ 000bb69c 0840
.org 0xbb69e
	strb r0, [r3, #10]	@ 000bb69e 9872
.org 0xbb6a0
	ldr r1, [pc, #24]	@ 000bb6a0 0649
.org 0xbb6a2
	ldrb r0, [r3, #9]	@ 000bb6a2 587a
.org 0xbb6a4
	lsls r0, r0, #2	@ 000bb6a4 8000
.org 0xbb6a6
	adds r0, r0, r1	@ 000bb6a6 4018
.org 0xbb6a8
	movs r1, #4	@ 000bb6a8 0421
.org 0xbb6aa
	str r1, [r3, #12]	@ 000bb6aa d960
.org 0xbb6ac
	ldr r0, [r0, #0]	@ 000bb6ac 0068
.org 0xbb6ae
	ldr r0, [r0, #16]	@ 000bb6ae 0069
.org 0xbb6b0
	str r0, [r3, #20]	@ 000bb6b0 5861
.org 0xbb6b2
	pop {r4, r5}	@ 000bb6b2 30bc
.org 0xbb6b4
	pop {r0}	@ 000bb6b4 01bc
.org 0xbb6b6
	bx r0	@ 000bb6b6 0047
