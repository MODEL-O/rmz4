@ FUN_080db624  entry 0x080db624  size 294
.thumb
.org 0xdb624
FUN_080db624:
	push {r4, r5, r6, lr}	@ 000db624 70b5
.org 0xdb626
	adds r4, r0, #0	@ 000db626 041c
.org 0xdb628
	bl 0x1cff0	@ 000db628 41f7e2fc
.org 0xdb62c
	ldrb r0, [r4, #13]	@ 000db62c 607b
.org 0xdb62e
	cmp r0, #0	@ 000db62e 0028
.org 0xdb630
	beq.n 0xdb638	@ 000db630 02d0
.org 0xdb632
	cmp r0, #1	@ 000db632 0128
.org 0xdb634
	beq.n 0xdb64e	@ 000db634 0bd0
.org 0xdb636
	b.n 0xdb684	@ 000db636 25e0
.org 0xdb638
	ldr r0, [r4, #116]	@ 000db638 606f
.org 0xdb63a
	ldr r1, [r4, #120]	@ 000db63a a16f
.org 0xdb63c
	bl 0x7c7c	@ 000db63c 2cf71efb
.org 0xdb640
	lsls r0, r0, #16	@ 000db640 0004
.org 0xdb642
	cmp r0, #0	@ 000db642 0028
.org 0xdb644
	bne.n 0xdb684	@ 000db644 1ed1
.org 0xdb646
	ldrb r0, [r4, #13]	@ 000db646 607b
.org 0xdb648
	adds r0, #1	@ 000db648 0130
.org 0xdb64a
	strb r0, [r4, #13]	@ 000db64a 6073
.org 0xdb64c
	b.n 0xdb684	@ 000db64c 1ae0
.org 0xdb64e
	ldr r0, [r4, #96]	@ 000db64e 206e
.org 0xdb650
	adds r0, #64	@ 000db650 4030
.org 0xdb652
	str r0, [r4, #96]	@ 000db652 2066
.org 0xdb654
	ldr r1, [r4, #88]	@ 000db654 a16d
.org 0xdb656
	adds r1, r1, r0	@ 000db656 0918
.org 0xdb658
	str r1, [r4, #88]	@ 000db658 a165
.org 0xdb65a
	ldr r0, [r4, #84]	@ 000db65a 606d
.org 0xdb65c
	bl 0x7c7c	@ 000db65c 2cf70efb
.org 0xdb660
	lsls r0, r0, #16	@ 000db660 0004
.org 0xdb662
	cmp r0, #0	@ 000db662 0028
.org 0xdb664
	beq.n 0xdb74c	@ 000db664 72d0
.org 0xdb666
	ldr r1, [pc, #24]	@ 000db666 0649
.org 0xdb668
	ldrb r0, [r4, #9]	@ 000db668 607a
.org 0xdb66a
	lsls r0, r0, #2	@ 000db66a 8000
.org 0xdb66c
	adds r0, r0, r1	@ 000db66c 4018
.org 0xdb66e
	movs r1, #2	@ 000db66e 0221
.org 0xdb670
	str r1, [r4, #12]	@ 000db670 e160
.org 0xdb672
	ldr r0, [r0, #0]	@ 000db672 0068
.org 0xdb674
	ldr r0, [r0, #8]	@ 000db674 8068
.org 0xdb676
	str r0, [r4, #20]	@ 000db676 6061
.org 0xdb678
	adds r0, r4, #0	@ 000db678 201c
.org 0xdb67a
	bl 0xdb758	@ 000db67a 00f06df8
.org 0xdb67e
	b.n 0xdb74c	@ 000db67e 65e0
.org 0xdb680
	.byte 0x64,0x6f,0x86,0x08	@ 000db680 data
.org 0xdb684
	ldrb r5, [r4, #18]	@ 000db684 a57c
.org 0xdb686
	lsrs r1, r5, #5	@ 000db686 6909
.org 0xdb688
	ldrb r0, [r4, #19]	@ 000db688 e07c
.org 0xdb68a
	adds r1, r1, r0	@ 000db68a 0918
.org 0xdb68c
	strb r1, [r4, #19]	@ 000db68c e174
.org 0xdb68e
	adds r1, r5, r1	@ 000db68e 6918
.org 0xdb690
	lsls r1, r1, #24	@ 000db690 0906
.org 0xdb692
	ldr r3, [pc, #96]	@ 000db692 184b
.org 0xdb694
	movs r2, #128	@ 000db694 8022
.org 0xdb696
	lsls r2, r2, #23	@ 000db696 d205
.org 0xdb698
	adds r0, r1, r2	@ 000db698 8818
.org 0xdb69a
	lsrs r0, r0, #23	@ 000db69a c00d
.org 0xdb69c
	adds r0, r0, r3	@ 000db69c c018
.org 0xdb69e
	movs r6, #0	@ 000db69e 0026
.org 0xdb6a0
	ldrsh r2, [r0, r6]	@ 000db6a0 825f
.org 0xdb6a2
	adds r0, r5, #0	@ 000db6a2 281c
.org 0xdb6a4
	adds r0, #64	@ 000db6a4 4030
.org 0xdb6a6
	lsls r0, r0, #24	@ 000db6a6 0006
.org 0xdb6a8
	lsrs r0, r0, #23	@ 000db6a8 c00d
.org 0xdb6aa
	adds r0, r0, r3	@ 000db6aa c018
.org 0xdb6ac
	movs r6, #0	@ 000db6ac 0026
.org 0xdb6ae
	ldrsh r0, [r0, r6]	@ 000db6ae 805f
.org 0xdb6b0
	subs r2, r2, r0	@ 000db6b0 121a
.org 0xdb6b2
	lsls r2, r2, #19	@ 000db6b2 d204
.org 0xdb6b4
	lsrs r2, r2, #16	@ 000db6b4 120c
.org 0xdb6b6
	adds r6, r2, #0	@ 000db6b6 161c
.org 0xdb6b8
	lsrs r1, r1, #23	@ 000db6b8 c90d
.org 0xdb6ba
	adds r1, r1, r3	@ 000db6ba c918
.org 0xdb6bc
	movs r0, #0	@ 000db6bc 0020
.org 0xdb6be
	ldrsh r1, [r1, r0]	@ 000db6be 095e
.org 0xdb6c0
	ldrb r0, [r4, #18]	@ 000db6c0 a07c
.org 0xdb6c2
	lsls r0, r0, #1	@ 000db6c2 4000
.org 0xdb6c4
	adds r0, r0, r3	@ 000db6c4 c018
.org 0xdb6c6
	movs r3, #0	@ 000db6c6 0023
.org 0xdb6c8
	ldrsh r0, [r0, r3]	@ 000db6c8 c05e
.org 0xdb6ca
	subs r1, r1, r0	@ 000db6ca 091a
.org 0xdb6cc
	lsls r1, r1, #3	@ 000db6cc c900
.org 0xdb6ce
	ldr r0, [r4, #88]	@ 000db6ce a06d
.org 0xdb6d0
	subs r0, r0, r1	@ 000db6d0 401a
.org 0xdb6d2
	str r0, [r4, #88]	@ 000db6d2 a065
.org 0xdb6d4
	adds r3, r4, #0	@ 000db6d4 231c
.org 0xdb6d6
	adds r3, #124	@ 000db6d6 7c33
.org 0xdb6d8
	adds r1, r4, #0	@ 000db6d8 211c
.org 0xdb6da
	adds r1, #125	@ 000db6da 7d31
.org 0xdb6dc
	ldrb r0, [r3, #0]	@ 000db6dc 1878
.org 0xdb6de
	ldrb r1, [r1, #0]	@ 000db6de 0978
.org 0xdb6e0
	cmp r0, r1	@ 000db6e0 8842
.org 0xdb6e2
	bne.n 0xdb702	@ 000db6e2 0ed1
.org 0xdb6e4
	adds r0, r4, #0	@ 000db6e4 201c
.org 0xdb6e6
	adds r0, #36	@ 000db6e6 2430
.org 0xdb6e8
	strb r5, [r0, #0]	@ 000db6e8 0570
.org 0xdb6ea
	ldrb r0, [r3, #0]	@ 000db6ea 1878
.org 0xdb6ec
	cmp r0, #0	@ 000db6ec 0028
.org 0xdb6ee
	beq.n 0xdb6f8	@ 000db6ee 03d0
.org 0xdb6f0
	lsls r1, r2, #16	@ 000db6f0 1104
.org 0xdb6f2
	b.n 0xdb71c	@ 000db6f2 13e0
.org 0xdb6f4
	.byte 0x0c,0x93,0x12,0x08	@ 000db6f4 data
.org 0xdb6f8
	lsls r1, r2, #16	@ 000db6f8 1104
.org 0xdb6fa
	asrs r1, r1, #16	@ 000db6fa 0914
.org 0xdb6fc
	ldr r0, [r4, #84]	@ 000db6fc 606d
.org 0xdb6fe
	subs r0, r0, r1	@ 000db6fe 401a
.org 0xdb700
	b.n 0xdb722	@ 000db700 0fe0
.org 0xdb702
	mvns r0, r5	@ 000db702 e843
.org 0xdb704
	adds r1, r4, #0	@ 000db704 211c
.org 0xdb706
	adds r1, #36	@ 000db706 2431
.org 0xdb708
	strb r0, [r1, #0]	@ 000db708 0870
.org 0xdb70a
	ldrb r0, [r3, #0]	@ 000db70a 1878
.org 0xdb70c
	cmp r0, #0	@ 000db70c 0028
.org 0xdb70e
	beq.n 0xdb71a	@ 000db70e 04d0
.org 0xdb710
	lsls r1, r2, #16	@ 000db710 1104
.org 0xdb712
	asrs r1, r1, #16	@ 000db712 0914
.org 0xdb714
	ldr r0, [r4, #84]	@ 000db714 606d
.org 0xdb716
	subs r0, r0, r1	@ 000db716 401a
.org 0xdb718
	b.n 0xdb722	@ 000db718 03e0
.org 0xdb71a
	lsls r1, r6, #16	@ 000db71a 3104
.org 0xdb71c
	asrs r1, r1, #16	@ 000db71c 0914
.org 0xdb71e
	ldr r0, [r4, #84]	@ 000db71e 606d
.org 0xdb720
	adds r0, r0, r1	@ 000db720 4018
.org 0xdb722
	str r0, [r4, #84]	@ 000db722 6065
.org 0xdb724
	ldrb r0, [r4, #19]	@ 000db724 e07c
.org 0xdb726
	ldrb r6, [r4, #18]	@ 000db726 a67c
.org 0xdb728
	adds r0, r0, r6	@ 000db728 8019
.org 0xdb72a
	strb r0, [r4, #18]	@ 000db72a a074
.org 0xdb72c
	lsls r0, r0, #24	@ 000db72c 0006
.org 0xdb72e
	lsrs r0, r0, #24	@ 000db72e 000e
.org 0xdb730
	cmp r0, #64	@ 000db730 4028
.org 0xdb732
	bls.n 0xdb74c	@ 000db732 0bd9
.org 0xdb734
	ldr r1, [pc, #28]	@ 000db734 0749
.org 0xdb736
	ldrb r0, [r4, #9]	@ 000db736 607a
.org 0xdb738
	lsls r0, r0, #2	@ 000db738 8000
.org 0xdb73a
	adds r0, r0, r1	@ 000db73a 4018
.org 0xdb73c
	movs r1, #2	@ 000db73c 0221
.org 0xdb73e
	str r1, [r4, #12]	@ 000db73e e160
.org 0xdb740
	ldr r0, [r0, #0]	@ 000db740 0068
.org 0xdb742
	ldr r0, [r0, #8]	@ 000db742 8068
.org 0xdb744
	str r0, [r4, #20]	@ 000db744 6061
.org 0xdb746
	adds r0, r4, #0	@ 000db746 201c
.org 0xdb748
	bl 0xdb758	@ 000db748 00f006f8
