@ FUN_080fc810  entry 0x080fc810  size 100
.thumb
.org 0xfc810
FUN_080fc810:
	push {r4, lr}	@ 000fc810 10b5
.org 0xfc812
	adds r4, r0, #0	@ 000fc812 041c
.org 0xfc814
	bl 0x1cc9c	@ 000fc814 20f742fa
.org 0xfc818
	ldrb r1, [r4, #10]	@ 000fc818 a17a
.org 0xfc81a
	movs r0, #1	@ 000fc81a 0120
.org 0xfc81c
	orrs r0, r1	@ 000fc81c 0843
.org 0xfc81e
	movs r1, #2	@ 000fc81e 0221
.org 0xfc820
	orrs r0, r1	@ 000fc820 0843
.org 0xfc822
	strb r0, [r4, #10]	@ 000fc822 a072
.org 0xfc824
	movs r1, #188	@ 000fc824 bc21
.org 0xfc826
	lsls r1, r1, #6	@ 000fc826 8901
.org 0xfc828
	adds r0, r4, #0	@ 000fc828 201c
.org 0xfc82a
	bl 0x1cf00	@ 000fc82a 20f769fb
.org 0xfc82e
	adds r0, r4, #0	@ 000fc82e 201c
.org 0xfc830
	bl 0x1cff0	@ 000fc830 20f7defb
.org 0xfc834
	movs r2, #0	@ 000fc834 0022
.org 0xfc836
	ldrb r1, [r4, #10]	@ 000fc836 a17a
.org 0xfc838
	movs r0, #239	@ 000fc838 ef20
.org 0xfc83a
	ands r0, r1	@ 000fc83a 0840
.org 0xfc83c
	strb r0, [r4, #10]	@ 000fc83c a072
.org 0xfc83e
	movs r3, #1	@ 000fc83e 0123
.org 0xfc840
	adds r0, r4, #0	@ 000fc840 201c
.org 0xfc842
	adds r0, #76	@ 000fc842 4c30
.org 0xfc844
	strb r2, [r0, #0]	@ 000fc844 0270
.org 0xfc846
	adds r2, r4, #0	@ 000fc846 221c
.org 0xfc848
	adds r2, #74	@ 000fc848 4a32
.org 0xfc84a
	ldrb r1, [r2, #0]	@ 000fc84a 1178
.org 0xfc84c
	movs r0, #17	@ 000fc84c 1120
.org 0xfc84e
	negs r0, r0	@ 000fc84e 4042
.org 0xfc850
	ands r0, r1	@ 000fc850 0840
.org 0xfc852
	strb r0, [r2, #0]	@ 000fc852 1070
.org 0xfc854
	movs r0, #60	@ 000fc854 3c20
.org 0xfc856
	strb r0, [r4, #18]	@ 000fc856 a074
.org 0xfc858
	ldr r1, [pc, #24]	@ 000fc858 0649
.org 0xfc85a
	ldrb r0, [r4, #9]	@ 000fc85a 607a
.org 0xfc85c
	lsls r0, r0, #2	@ 000fc85c 8000
.org 0xfc85e
	adds r0, r0, r1	@ 000fc85e 4018
.org 0xfc860
	str r3, [r4, #12]	@ 000fc860 e360
.org 0xfc862
	ldr r0, [r0, #0]	@ 000fc862 0068
.org 0xfc864
	ldr r0, [r0, #4]	@ 000fc864 4068
.org 0xfc866
	str r0, [r4, #20]	@ 000fc866 6061
.org 0xfc868
	adds r0, r4, #0	@ 000fc868 201c
.org 0xfc86a
	bl 0xfc878	@ 000fc86a 00f005f8
.org 0xfc86e
	pop {r4}	@ 000fc86e 10bc
.org 0xfc870
	pop {r0}	@ 000fc870 01bc
.org 0xfc872
	bx r0	@ 000fc872 0047
