@ FUN_080da740  entry 0x080da740  size 132
.thumb
.org 0xda740
FUN_080da740:
	push {r4, r5, r6, lr}	@ 000da740 70b5
.org 0xda742
	adds r5, r0, #0	@ 000da742 051c
.org 0xda744
	ldrb r4, [r5, #17]	@ 000da744 6c7c
.org 0xda746
	ldr r1, [pc, #68]	@ 000da746 1149
.org 0xda748
	ldrb r0, [r5, #9]	@ 000da748 687a
.org 0xda74a
	lsls r0, r0, #2	@ 000da74a 8000
.org 0xda74c
	adds r0, r0, r1	@ 000da74c 4018
.org 0xda74e
	movs r1, #1	@ 000da74e 0121
.org 0xda750
	str r1, [r5, #12]	@ 000da750 e960
.org 0xda752
	ldr r0, [r0, #0]	@ 000da752 0068
.org 0xda754
	ldr r0, [r0, #4]	@ 000da754 4068
.org 0xda756
	str r0, [r5, #20]	@ 000da756 6861
.org 0xda758
	ldrb r1, [r5, #10]	@ 000da758 a97a
.org 0xda75a
	movs r0, #1	@ 000da75a 0120
.org 0xda75c
	movs r6, #0	@ 000da75c 0026
.org 0xda75e
	orrs r0, r1	@ 000da75e 0843
.org 0xda760
	movs r1, #2	@ 000da760 0221
.org 0xda762
	orrs r0, r1	@ 000da762 0843
.org 0xda764
	strb r0, [r5, #10]	@ 000da764 a872
.org 0xda766
	adds r0, r5, #0	@ 000da766 281c
.org 0xda768
	bl 0x1cc9c	@ 000da768 42f798fa
.org 0xda76c
	adds r2, r5, #0	@ 000da76c 2a1c
.org 0xda76e
	adds r2, #73	@ 000da76e 4932
.org 0xda770
	ldrb r0, [r2, #0]	@ 000da770 1078
.org 0xda772
	movs r1, #12	@ 000da772 0c21
.org 0xda774
	orrs r0, r1	@ 000da774 0843
.org 0xda776
	strb r0, [r2, #0]	@ 000da776 1070
.org 0xda778
	adds r1, r5, #0	@ 000da778 291c
.org 0xda77a
	adds r1, #37	@ 000da77a 2531
.org 0xda77c
	movs r0, #27	@ 000da77c 1b20
.org 0xda77e
	strb r0, [r1, #0]	@ 000da77e 0870
.org 0xda780
	cmp r4, #0	@ 000da780 002c
.org 0xda782
	beq.n 0xda790	@ 000da782 05d0
.org 0xda784
	ldrb r0, [r5, #10]	@ 000da784 a87a
.org 0xda786
	movs r1, #16	@ 000da786 1021
.org 0xda788
	orrs r0, r1	@ 000da788 0843
.org 0xda78a
	b.n 0xda796	@ 000da78a 04e0
.org 0xda78c
	.byte 0x64,0x6f,0x86,0x08	@ 000da78c data
.org 0xda790
	ldrb r1, [r5, #10]	@ 000da790 a97a
.org 0xda792
	movs r0, #239	@ 000da792 ef20
.org 0xda794
	ands r0, r1	@ 000da794 0840
.org 0xda796
	strb r0, [r5, #10]	@ 000da796 a872
.org 0xda798
	movs r1, #1	@ 000da798 0121
.org 0xda79a
	ands r1, r4	@ 000da79a 2140
.org 0xda79c
	adds r0, r5, #0	@ 000da79c 281c
.org 0xda79e
	adds r0, #76	@ 000da79e 4c30
.org 0xda7a0
	strb r1, [r0, #0]	@ 000da7a0 0170
.org 0xda7a2
	adds r3, r5, #0	@ 000da7a2 2b1c
.org 0xda7a4
	adds r3, #74	@ 000da7a4 4a33
.org 0xda7a6
	lsls r1, r1, #4	@ 000da7a6 0901
.org 0xda7a8
	ldrb r2, [r3, #0]	@ 000da7a8 1a78
.org 0xda7aa
	movs r0, #17	@ 000da7aa 1120
.org 0xda7ac
	negs r0, r0	@ 000da7ac 4042
.org 0xda7ae
	ands r0, r2	@ 000da7ae 1040
.org 0xda7b0
	orrs r0, r1	@ 000da7b0 0843
.org 0xda7b2
	strb r0, [r3, #0]	@ 000da7b2 1870
.org 0xda7b4
	ldr r1, [pc, #16]	@ 000da7b4 0449
.org 0xda7b6
	adds r0, r5, #0	@ 000da7b6 281c
.org 0xda7b8
	bl 0x1cf00	@ 000da7b8 42f7a2fb
.org 0xda7bc
	adds r0, r5, #0	@ 000da7bc 281c
.org 0xda7be
	bl 0xda7cc	@ 000da7be 00f005f8
.org 0xda7c2
	pop {r4, r5, r6}	@ 000da7c2 70bc
