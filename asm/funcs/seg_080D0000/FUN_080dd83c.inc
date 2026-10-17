@ FUN_080dd83c  entry 0x080dd83c  size 92
.thumb
.org 0xdd83c
FUN_080dd83c:
	push {r4, lr}	@ 000dd83c 10b5
.org 0xdd83e
	adds r4, r0, #0	@ 000dd83e 041c
.org 0xdd840
	bl 0x1cc9c	@ 000dd840 3ff72cfa
.org 0xdd844
	ldrb r1, [r4, #10]	@ 000dd844 a17a
.org 0xdd846
	movs r0, #1	@ 000dd846 0120
.org 0xdd848
	orrs r0, r1	@ 000dd848 0843
.org 0xdd84a
	movs r1, #2	@ 000dd84a 0221
.org 0xdd84c
	orrs r0, r1	@ 000dd84c 0843
.org 0xdd84e
	strb r0, [r4, #10]	@ 000dd84e a072
.org 0xdd850
	ldr r1, [pc, #24]	@ 000dd850 0649
.org 0xdd852
	adds r0, r4, #0	@ 000dd852 201c
.org 0xdd854
	bl 0x1cf00	@ 000dd854 3ff754fb
.org 0xdd858
	adds r0, r4, #0	@ 000dd858 201c
.org 0xdd85a
	bl 0x1cff0	@ 000dd85a 3ff7c9fb
.org 0xdd85e
	ldrb r1, [r4, #10]	@ 000dd85e a17a
.org 0xdd860
	movs r0, #16	@ 000dd860 1020
.org 0xdd862
	ands r0, r1	@ 000dd862 0840
.org 0xdd864
	cmp r0, #0	@ 000dd864 0028
.org 0xdd866
	beq.n 0xdd874	@ 000dd866 05d0
.org 0xdd868
	ldr r0, [pc, #4]	@ 000dd868 0148
.org 0xdd86a
	b.n 0xdd878	@ 000dd86a 05e0
.org 0xdd86c
	.byte 0x02,0x86,0x00,0x00	@ 000dd86c data
.org 0xdd870
	.byte 0x40,0xfe,0xff,0xff	@ 000dd870 data
.org 0xdd874
	movs r0, #224	@ 000dd874 e020
.org 0xdd876
	lsls r0, r0, #1	@ 000dd876 4000
.org 0xdd878
	str r0, [r4, #92]	@ 000dd878 e065
.org 0xdd87a
	ldr r0, [pc, #36]	@ 000dd87a 0948
.org 0xdd87c
	str r0, [r4, #96]	@ 000dd87c 2066
.org 0xdd87e
	movs r0, #20	@ 000dd87e 1420
.org 0xdd880
	strb r0, [r4, #18]	@ 000dd880 a074
.org 0xdd882
	ldr r1, [pc, #32]	@ 000dd882 0849
.org 0xdd884
	ldrb r0, [r4, #9]	@ 000dd884 607a
.org 0xdd886
	lsls r0, r0, #2	@ 000dd886 8000
.org 0xdd888
	adds r0, r0, r1	@ 000dd888 4018
.org 0xdd88a
	movs r1, #1	@ 000dd88a 0121
.org 0xdd88c
	str r1, [r4, #12]	@ 000dd88c e160
.org 0xdd88e
	ldr r0, [r0, #0]	@ 000dd88e 0068
.org 0xdd890
	ldr r0, [r0, #4]	@ 000dd890 4068
.org 0xdd892
	str r0, [r4, #20]	@ 000dd892 6061
.org 0xdd894
	adds r0, r4, #0	@ 000dd894 201c
.org 0xdd896
	bl 0xdd6c8	@ 000dd896 fff717ff
