@ FUN_080dd6f8  entry 0x080dd6f8  size 94
.thumb
.org 0xdd6f8
FUN_080dd6f8:
	push {r4, lr}	@ 000dd6f8 10b5
.org 0xdd6fa
	adds r4, r0, #0	@ 000dd6fa 041c
.org 0xdd6fc
	bl 0x1cc9c	@ 000dd6fc 3ff7cefa
.org 0xdd700
	ldrb r1, [r4, #10]	@ 000dd700 a17a
.org 0xdd702
	movs r0, #1	@ 000dd702 0120
.org 0xdd704
	orrs r0, r1	@ 000dd704 0843
.org 0xdd706
	movs r1, #2	@ 000dd706 0221
.org 0xdd708
	orrs r0, r1	@ 000dd708 0843
.org 0xdd70a
	strb r0, [r4, #10]	@ 000dd70a a072
.org 0xdd70c
	ldr r1, [pc, #28]	@ 000dd70c 0749
.org 0xdd70e
	adds r0, r4, #0	@ 000dd70e 201c
.org 0xdd710
	bl 0x1cf00	@ 000dd710 3ff7f6fb
.org 0xdd714
	adds r0, r4, #0	@ 000dd714 201c
.org 0xdd716
	bl 0x1cff0	@ 000dd716 3ff76bfc
.org 0xdd71a
	ldrb r1, [r4, #10]	@ 000dd71a a17a
.org 0xdd71c
	movs r2, #16	@ 000dd71c 1022
.org 0xdd71e
	adds r0, r2, #0	@ 000dd71e 101c
.org 0xdd720
	ands r0, r1	@ 000dd720 0840
.org 0xdd722
	cmp r0, #0	@ 000dd722 0028
.org 0xdd724
	beq.n 0xdd730	@ 000dd724 04d0
.org 0xdd726
	str r2, [r4, #100]	@ 000dd726 6266
.org 0xdd728
	b.n 0xdd736	@ 000dd728 05e0
.org 0xdd72a
	.byte 0x00	@ 000dd72a data
.org 0xdd72b
	.byte 0x00	@ 000dd72b data
.org 0xdd72c
	.byte 0x07,0x50,0x00,0x00	@ 000dd72c data
.org 0xdd730
	movs r0, #16	@ 000dd730 1020
.org 0xdd732
	negs r0, r0	@ 000dd732 4042
.org 0xdd734
	str r0, [r4, #100]	@ 000dd734 6066
.org 0xdd736
	ldr r0, [r4, #100]	@ 000dd736 606e
.org 0xdd738
	lsls r0, r0, #4	@ 000dd738 0001
.org 0xdd73a
	negs r0, r0	@ 000dd73a 4042
.org 0xdd73c
	str r0, [r4, #92]	@ 000dd73c e065
.org 0xdd73e
	ldr r1, [pc, #28]	@ 000dd73e 0749
.org 0xdd740
	ldrb r0, [r4, #9]	@ 000dd740 607a
.org 0xdd742
	lsls r0, r0, #2	@ 000dd742 8000
.org 0xdd744
	adds r0, r0, r1	@ 000dd744 4018
.org 0xdd746
	movs r1, #1	@ 000dd746 0121
.org 0xdd748
	str r1, [r4, #12]	@ 000dd748 e160
.org 0xdd74a
	ldr r0, [r0, #0]	@ 000dd74a 0068
.org 0xdd74c
	ldr r0, [r0, #4]	@ 000dd74c 4068
.org 0xdd74e
	str r0, [r4, #20]	@ 000dd74e 6061
.org 0xdd750
	adds r0, r4, #0	@ 000dd750 201c
.org 0xdd752
	bl 0xdd6c8	@ 000dd752 fff7b9ff
