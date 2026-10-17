@ FUN_080cb6e8  entry 0x080cb6e8  size 194
.thumb
.org 0xcb6e8
FUN_080cb6e8:
	push {r4, r5, lr}	@ 000cb6e8 30b5
.org 0xcb6ea
	adds r4, r0, #0	@ 000cb6ea 041c
.org 0xcb6ec
	ldr r5, [r4, #40]	@ 000cb6ec a56a
.org 0xcb6ee
	bl 0x1cff0	@ 000cb6ee 51f77ffc
.org 0xcb6f2
	ldrb r0, [r4, #13]	@ 000cb6f2 607b
.org 0xcb6f4
	cmp r0, #0	@ 000cb6f4 0028
.org 0xcb6f6
	bne.n 0xcb768	@ 000cb6f6 37d1
.org 0xcb6f8
	ldr r0, [r5, #84]	@ 000cb6f8 686d
.org 0xcb6fa
	ldr r1, [r5, #88]	@ 000cb6fa a96d
.org 0xcb6fc
	str r0, [r4, #84]	@ 000cb6fc 6065
.org 0xcb6fe
	str r1, [r4, #88]	@ 000cb6fe a165
.org 0xcb700
	adds r0, r4, #0	@ 000cb700 201c
.org 0xcb702
	adds r0, #113	@ 000cb702 7130
.org 0xcb704
	ldrb r0, [r0, #0]	@ 000cb704 0078
.org 0xcb706
	lsls r0, r0, #24	@ 000cb706 0006
.org 0xcb708
	asrs r0, r0, #24	@ 000cb708 0016
.org 0xcb70a
	cmp r0, #3	@ 000cb70a 0328
.org 0xcb70c
	ble.n 0xcb7ac	@ 000cb70c 4edd
.org 0xcb70e
	ldr r0, [pc, #80]	@ 000cb70e 1448
.org 0xcb710
	ldr r2, [r0, #0]	@ 000cb710 0268
.org 0xcb712
	ldr r0, [r4, #84]	@ 000cb712 606d
.org 0xcb714
	ldr r1, [r2, #84]	@ 000cb714 516d
.org 0xcb716
	subs r0, r0, r1	@ 000cb716 401a
.org 0xcb718
	lsls r0, r0, #8	@ 000cb718 0002
.org 0xcb71a
	asrs r0, r0, #16	@ 000cb71a 0014
.org 0xcb71c
	ldr r1, [r4, #88]	@ 000cb71c a16d
.org 0xcb71e
	movs r3, #240	@ 000cb71e f023
.org 0xcb720
	lsls r3, r3, #4	@ 000cb720 1b01
.org 0xcb722
	adds r1, r1, r3	@ 000cb722 c918
.org 0xcb724
	ldr r2, [r2, #88]	@ 000cb724 926d
.org 0xcb726
	subs r1, r1, r2	@ 000cb726 891a
.org 0xcb728
	lsls r1, r1, #8	@ 000cb728 0902
.org 0xcb72a
	asrs r1, r1, #16	@ 000cb72a 0914
.org 0xcb72c
	bl 0x128bdc	@ 000cb72c 5df056fa
.org 0xcb730
	lsls r0, r0, #16	@ 000cb730 0004
.org 0xcb732
	lsrs r0, r0, #24	@ 000cb732 000e
.org 0xcb734
	adds r0, #128	@ 000cb734 8030
.org 0xcb736
	lsls r0, r0, #24	@ 000cb736 0006
.org 0xcb738
	ldr r2, [pc, #40]	@ 000cb738 0a4a
.org 0xcb73a
	movs r3, #128	@ 000cb73a 8023
.org 0xcb73c
	lsls r3, r3, #23	@ 000cb73c db05
.org 0xcb73e
	adds r1, r0, r3	@ 000cb73e c118
.org 0xcb740
	lsrs r1, r1, #23	@ 000cb740 c90d
.org 0xcb742
	adds r1, r1, r2	@ 000cb742 8918
.org 0xcb744
	movs r3, #0	@ 000cb744 0023
.org 0xcb746
	ldrsh r1, [r1, r3]	@ 000cb746 c95e
.org 0xcb748
	lsls r1, r1, #2	@ 000cb748 8900
.org 0xcb74a
	str r1, [r4, #92]	@ 000cb74a e165
.org 0xcb74c
	lsrs r0, r0, #23	@ 000cb74c c00d
.org 0xcb74e
	adds r0, r0, r2	@ 000cb74e 8018
.org 0xcb750
	movs r1, #0	@ 000cb750 0021
.org 0xcb752
	ldrsh r0, [r0, r1]	@ 000cb752 405e
.org 0xcb754
	lsls r0, r0, #2	@ 000cb754 8000
.org 0xcb756
	str r0, [r4, #96]	@ 000cb756 2066
.org 0xcb758
	ldrb r0, [r4, #13]	@ 000cb758 607b
.org 0xcb75a
	adds r0, #1	@ 000cb75a 0130
.org 0xcb75c
	strb r0, [r4, #13]	@ 000cb75c 6073
.org 0xcb75e
	b.n 0xcb7ac	@ 000cb75e 25e0
.org 0xcb760
	.byte 0xf0,0xdb,0x02,0x02	@ 000cb760 data
.org 0xcb764
	.byte 0x0c,0x93,0x12,0x08	@ 000cb764 data
.org 0xcb768
	ldr r1, [r4, #84]	@ 000cb768 616d
.org 0xcb76a
	ldr r0, [r4, #92]	@ 000cb76a e06d
.org 0xcb76c
	adds r3, r1, r0	@ 000cb76c 0b18
.org 0xcb76e
	str r3, [r4, #84]	@ 000cb76e 6365
.org 0xcb770
	ldr r1, [r4, #88]	@ 000cb770 a16d
.org 0xcb772
	ldr r0, [r4, #96]	@ 000cb772 206e
.org 0xcb774
	adds r2, r1, r0	@ 000cb774 0a18
.org 0xcb776
	str r2, [r4, #88]	@ 000cb776 a265
.org 0xcb778
	adds r0, r4, #0	@ 000cb778 201c
.org 0xcb77a
	adds r0, #140	@ 000cb77a 8c30
.org 0xcb77c
	ldr r0, [r0, #0]	@ 000cb77c 0068
.org 0xcb77e
	movs r1, #4	@ 000cb77e 0421
.org 0xcb780
	ands r0, r1	@ 000cb780 0840
.org 0xcb782
	cmp r0, #0	@ 000cb782 0028
.org 0xcb784
	bne.n 0xcb794	@ 000cb784 06d1
.org 0xcb786
	adds r0, r3, #0	@ 000cb786 181c
.org 0xcb788
	adds r1, r2, #0	@ 000cb788 111c
.org 0xcb78a
	bl 0x7c7c	@ 000cb78a 3cf777fa
.org 0xcb78e
	lsls r0, r0, #16	@ 000cb78e 0004
.org 0xcb790
	cmp r0, #0	@ 000cb790 0028
.org 0xcb792
	beq.n 0xcb7ac	@ 000cb792 0bd0
.org 0xcb794
	ldr r1, [pc, #28]	@ 000cb794 0749
.org 0xcb796
	ldrb r0, [r4, #9]	@ 000cb796 607a
.org 0xcb798
	lsls r0, r0, #2	@ 000cb798 8000
.org 0xcb79a
	adds r0, r0, r1	@ 000cb79a 4018
.org 0xcb79c
	movs r1, #2	@ 000cb79c 0221
.org 0xcb79e
	str r1, [r4, #12]	@ 000cb79e e160
.org 0xcb7a0
	ldr r0, [r0, #0]	@ 000cb7a0 0068
.org 0xcb7a2
	ldr r0, [r0, #8]	@ 000cb7a2 8068
.org 0xcb7a4
	str r0, [r4, #20]	@ 000cb7a4 6061
.org 0xcb7a6
	adds r0, r4, #0	@ 000cb7a6 201c
.org 0xcb7a8
	bl 0xcb5a4	@ 000cb7a8 fff7fcfe
