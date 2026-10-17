@ FUN_080d6714  entry 0x080d6714  size 106
.thumb
.org 0xd6714
FUN_080d6714:
	push {r4, lr}	@ 000d6714 10b5
.org 0xd6716
	adds r4, r0, #0	@ 000d6716 041c
.org 0xd6718
	ldr r0, [r4, #84]	@ 000d6718 606d
.org 0xd671a
	ldr r1, [r4, #92]	@ 000d671a e16d
.org 0xd671c
	adds r0, r0, r1	@ 000d671c 4018
.org 0xd671e
	str r0, [r4, #84]	@ 000d671e 6065
.org 0xd6720
	ldr r0, [r4, #88]	@ 000d6720 a06d
.org 0xd6722
	ldr r1, [r4, #96]	@ 000d6722 216e
.org 0xd6724
	adds r0, r0, r1	@ 000d6724 4018
.org 0xd6726
	str r0, [r4, #88]	@ 000d6726 a065
.org 0xd6728
	adds r1, #64	@ 000d6728 4031
.org 0xd672a
	str r1, [r4, #96]	@ 000d672a 2166
.org 0xd672c
	adds r0, r4, #0	@ 000d672c 201c
.org 0xd672e
	bl 0x1cff0	@ 000d672e 46f75ffc
.org 0xd6732
	ldrb r0, [r4, #18]	@ 000d6732 a07c
.org 0xd6734
	adds r0, #1	@ 000d6734 0130
.org 0xd6736
	strb r0, [r4, #18]	@ 000d6736 a074
.org 0xd6738
	movs r1, #1	@ 000d6738 0121
.org 0xd673a
	ands r0, r1	@ 000d673a 0840
.org 0xd673c
	cmp r0, #0	@ 000d673c 0028
.org 0xd673e
	beq.n 0xd6746	@ 000d673e 02d0
.org 0xd6740
	ldrb r0, [r4, #10]	@ 000d6740 a07a
.org 0xd6742
	orrs r0, r1	@ 000d6742 0843
.org 0xd6744
	b.n 0xd674c	@ 000d6744 02e0
.org 0xd6746
	ldrb r1, [r4, #10]	@ 000d6746 a17a
.org 0xd6748
	movs r0, #254	@ 000d6748 fe20
.org 0xd674a
	ands r0, r1	@ 000d674a 0840
.org 0xd674c
	strb r0, [r4, #10]	@ 000d674c a072
.org 0xd674e
	ldr r0, [r4, #84]	@ 000d674e 606d
.org 0xd6750
	ldr r1, [r4, #88]	@ 000d6750 a16d
.org 0xd6752
	bl 0x7c7c	@ 000d6752 31f793fa
.org 0xd6756
	lsls r0, r0, #16	@ 000d6756 0004
.org 0xd6758
	cmp r0, #0	@ 000d6758 0028
.org 0xd675a
	beq.n 0xd6778	@ 000d675a 0dd0
.org 0xd675c
	adds r1, r4, #0	@ 000d675c 211c
.org 0xd675e
	adds r1, #84	@ 000d675e 5431
.org 0xd6760
	movs r0, #3	@ 000d6760 0320
.org 0xd6762
	bl 0xd0c88	@ 000d6762 faf791fa
.org 0xd6766
	ldr r1, [pc, #24]	@ 000d6766 0649
.org 0xd6768
	ldrb r0, [r4, #9]	@ 000d6768 607a
.org 0xd676a
	lsls r0, r0, #2	@ 000d676a 8000
.org 0xd676c
	adds r0, r0, r1	@ 000d676c 4018
.org 0xd676e
	movs r1, #2	@ 000d676e 0221
.org 0xd6770
	str r1, [r4, #12]	@ 000d6770 e160
.org 0xd6772
	ldr r0, [r0, #0]	@ 000d6772 0068
.org 0xd6774
	ldr r0, [r0, #8]	@ 000d6774 8068
.org 0xd6776
	str r0, [r4, #20]	@ 000d6776 6061
.org 0xd6778
	pop {r4}	@ 000d6778 10bc
.org 0xd677a
	pop {r0}	@ 000d677a 01bc
.org 0xd677c
	bx r0	@ 000d677c 0047
