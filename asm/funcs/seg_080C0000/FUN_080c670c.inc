@ FUN_080c670c  entry 0x080c670c  size 98
.thumb
.org 0xc670c
FUN_080c670c:
	push {r4, r5, r6, lr}	@ 000c670c 70b5
.org 0xc670e
	adds r4, r0, #0	@ 000c670e 041c
.org 0xc6710
	bl 0x1cc9c	@ 000c6710 56f7c4fa
.org 0xc6714
	ldrb r1, [r4, #10]	@ 000c6714 a17a
.org 0xc6716
	movs r0, #1	@ 000c6716 0120
.org 0xc6718
	movs r6, #0	@ 000c6718 0026
.org 0xc671a
	orrs r0, r1	@ 000c671a 0843
.org 0xc671c
	movs r1, #2	@ 000c671c 0221
.org 0xc671e
	orrs r0, r1	@ 000c671e 0843
.org 0xc6720
	strb r0, [r4, #10]	@ 000c6720 a072
.org 0xc6722
	adds r0, r4, #0	@ 000c6722 201c
.org 0xc6724
	bl 0x1ceec	@ 000c6724 56f7e2fb
.org 0xc6728
	movs r1, #166	@ 000c6728 a621
.org 0xc672a
	lsls r1, r1, #8	@ 000c672a 0902
.org 0xc672c
	adds r0, r4, #0	@ 000c672c 201c
.org 0xc672e
	bl 0x1cf00	@ 000c672e 56f7e7fb
.org 0xc6732
	ldrb r1, [r4, #10]	@ 000c6732 a17a
.org 0xc6734
	movs r0, #4	@ 000c6734 0420
.org 0xc6736
	orrs r0, r1	@ 000c6736 0843
.org 0xc6738
	strb r0, [r4, #10]	@ 000c6738 a072
.org 0xc673a
	adds r5, r4, #0	@ 000c673a 251c
.org 0xc673c
	adds r5, #116	@ 000c673c 7435
.org 0xc673e
	ldr r1, [pc, #48]	@ 000c673e 0c49
.org 0xc6740
	adds r2, r4, #0	@ 000c6740 221c
.org 0xc6742
	adds r2, #84	@ 000c6742 5432
.org 0xc6744
	adds r0, r5, #0	@ 000c6744 281c
.org 0xc6746
	movs r3, #8	@ 000c6746 0823
.org 0xc6748
	bl 0x5760	@ 000c6748 3ff70af8
.org 0xc674c
	str r4, [r5, #44]	@ 000c674c ec62
.org 0xc674e
	str r6, [r5, #36]	@ 000c674e 6e62
.org 0xc6750
	ldr r1, [pc, #32]	@ 000c6750 0849
.org 0xc6752
	ldrb r0, [r4, #9]	@ 000c6752 607a
.org 0xc6754
	lsls r0, r0, #2	@ 000c6754 8000
.org 0xc6756
	adds r0, r0, r1	@ 000c6756 4018
.org 0xc6758
	movs r1, #1	@ 000c6758 0121
.org 0xc675a
	str r1, [r4, #12]	@ 000c675a e160
.org 0xc675c
	ldr r0, [r0, #0]	@ 000c675c 0068
.org 0xc675e
	ldr r0, [r0, #4]	@ 000c675e 4068
.org 0xc6760
	str r0, [r4, #20]	@ 000c6760 6061
.org 0xc6762
	adds r0, r4, #0	@ 000c6762 201c
.org 0xc6764
	bl 0xc6518	@ 000c6764 fff7d8fe
.org 0xc6768
	pop {r4, r5, r6}	@ 000c6768 70bc
.org 0xc676a
	pop {r0}	@ 000c676a 01bc
.org 0xc676c
	bx r0	@ 000c676c 0047
