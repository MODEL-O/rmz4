@ FUN_080bb6f8  entry 0x080bb6f8  size 122
.thumb
.org 0xbb6f8
FUN_080bb6f8:
	push {r4, r5, r6, r7, lr}	@ 000bb6f8 f0b5
.org 0xbb6fa
	adds r4, r0, #0	@ 000bb6fa 041c
.org 0xbb6fc
	adds r7, r1, #0	@ 000bb6fc 0f1c
.org 0xbb6fe
	lsls r2, r2, #24	@ 000bb6fe 1206
.org 0xbb700
	lsrs r6, r2, #24	@ 000bb700 160e
.org 0xbb702
	lsls r3, r3, #24	@ 000bb702 1b06
.org 0xbb704
	lsrs r5, r3, #24	@ 000bb704 1d0e
.org 0xbb706
	ldr r0, [pc, #108]	@ 000bb706 1b48
.org 0xbb708
	ldr r0, [r0, #0]	@ 000bb708 0068
.org 0xbb70a
	bl 0x5500	@ 000bb70a 49f7f9fe
.org 0xbb70e
	adds r3, r0, #0	@ 000bb70e 031c
.org 0xbb710
	cmp r3, #0	@ 000bb710 002b
.org 0xbb712
	beq.n 0xbb76a	@ 000bb712 2ad0
.org 0xbb714
	adds r1, r3, #0	@ 000bb714 191c
.org 0xbb716
	adds r1, #37	@ 000bb716 2531
.org 0xbb718
	movs r2, #0	@ 000bb718 0022
.org 0xbb71a
	movs r0, #24	@ 000bb71a 1820
.org 0xbb71c
	strb r0, [r1, #0]	@ 000bb71c 0870
.org 0xbb71e
	ldr r0, [pc, #88]	@ 000bb71e 1648
.org 0xbb720
	movs r1, #113	@ 000bb720 7121
.org 0xbb722
	strb r1, [r3, #9]	@ 000bb722 5972
.org 0xbb724
	movs r1, #226	@ 000bb724 e221
.org 0xbb726
	lsls r1, r1, #1	@ 000bb726 4900
.org 0xbb728
	adds r0, r0, r1	@ 000bb728 4018
.org 0xbb72a
	ldr r0, [r0, #0]	@ 000bb72a 0068
.org 0xbb72c
	ldr r0, [r0, #0]	@ 000bb72c 0068
.org 0xbb72e
	str r0, [r3, #20]	@ 000bb72e 5861
.org 0xbb730
	movs r0, #0	@ 000bb730 0020
.org 0xbb732
	strh r2, [r3, #32]	@ 000bb732 1a84
.org 0xbb734
	adds r1, r3, #0	@ 000bb734 191c
.org 0xbb736
	adds r1, #34	@ 000bb736 2231
.org 0xbb738
	strb r0, [r1, #0]	@ 000bb738 0870
.org 0xbb73a
	ldrb r1, [r3, #11]	@ 000bb73a d97a
.org 0xbb73c
	movs r0, #16	@ 000bb73c 1020
.org 0xbb73e
	orrs r0, r1	@ 000bb73e 0843
.org 0xbb740
	strb r0, [r3, #11]	@ 000bb740 d872
.org 0xbb742
	ldrb r0, [r3, #28]	@ 000bb742 187f
.org 0xbb744
	strb r0, [r3, #29]	@ 000bb744 5877
.org 0xbb746
	str r4, [r3, #40]	@ 000bb746 9c62
.org 0xbb748
	ldr r0, [r7, #0]	@ 000bb748 3868
.org 0xbb74a
	ldr r1, [r7, #4]	@ 000bb74a 7968
.org 0xbb74c
	str r0, [r3, #84]	@ 000bb74c 5865
.org 0xbb74e
	str r1, [r3, #88]	@ 000bb74e 9965
.org 0xbb750
	strb r6, [r3, #16]	@ 000bb750 1e74
.org 0xbb752
	strb r5, [r3, #17]	@ 000bb752 5d74
.org 0xbb754
	adds r1, r4, #0	@ 000bb754 211c
.org 0xbb756
	adds r1, #204	@ 000bb756 cc31
.org 0xbb758
	ldrh r0, [r1, #0]	@ 000bb758 0888
.org 0xbb75a
	adds r0, #1	@ 000bb75a 0130
.org 0xbb75c
	strh r0, [r1, #0]	@ 000bb75c 0880
.org 0xbb75e
	adds r2, r4, #0	@ 000bb75e 221c
.org 0xbb760
	adds r2, #191	@ 000bb760 bf32
.org 0xbb762
	ldrb r1, [r2, #0]	@ 000bb762 1178
.org 0xbb764
	movs r0, #251	@ 000bb764 fb20
.org 0xbb766
	ands r0, r1	@ 000bb766 0840
.org 0xbb768
	strb r0, [r2, #0]	@ 000bb768 1070
.org 0xbb76a
	adds r0, r3, #0	@ 000bb76a 181c
.org 0xbb76c
	pop {r4, r5, r6, r7}	@ 000bb76c f0bc
.org 0xbb76e
	pop {r1}	@ 000bb76e 02bc
.org 0xbb770
	bx r1	@ 000bb770 0847
