@ FUN_080897e4  entry 0x080897e4  size 162
.thumb
.org 0x897e4
FUN_080897e4:
	push {r4, r5, lr}	@ 000897e4 30b5
.org 0x897e6
	adds r5, r0, #0	@ 000897e6 051c
.org 0x897e8
	ldrb r0, [r5, #14]	@ 000897e8 a87b
.org 0x897ea
	cmp r0, #0	@ 000897ea 0028
.org 0x897ec
	beq.n 0x897f4	@ 000897ec 02d0
.org 0x897ee
	cmp r0, #1	@ 000897ee 0128
.org 0x897f0
	beq.n 0x8982a	@ 000897f0 1bd0
.org 0x897f2
	b.n 0x89894	@ 000897f2 4fe0
.org 0x897f4
	adds r4, r5, #0	@ 000897f4 2c1c
.org 0x897f6
	adds r4, #192	@ 000897f6 c034
.org 0x897f8
	ldr r0, [pc, #104]	@ 000897f8 1a48
.org 0x897fa
	adds r1, r0, #0	@ 000897fa 011c
.org 0x897fc
	ldrb r0, [r4, #0]	@ 000897fc 2078
.org 0x897fe
	adds r1, r1, r0	@ 000897fe 0918
.org 0x89800
	adds r0, r5, #0	@ 00089800 281c
.org 0x89802
	bl 0x1cf00	@ 00089802 93f77dfb
.org 0x89806
	adds r0, r5, #0	@ 00089806 281c
.org 0x89808
	adds r0, #116	@ 00089808 7430
.org 0x8980a
	ldr r2, [pc, #92]	@ 0008980a 174a
.org 0x8980c
	ldrb r1, [r4, #0]	@ 0008980c 2178
.org 0x8980e
	adds r1, r1, r2	@ 0008980e 8918
.org 0x89810
	ldrb r2, [r1, #0]	@ 00089810 0a78
.org 0x89812
	lsls r1, r2, #1	@ 00089812 5100
.org 0x89814
	adds r1, r1, r2	@ 00089814 8918
.org 0x89816
	lsls r1, r1, #3	@ 00089816 c900
.org 0x89818
	ldr r2, [pc, #80]	@ 00089818 144a
.org 0x8981a
	adds r1, r1, r2	@ 0008981a 8918
.org 0x8981c
	bl 0x5784	@ 0008981c 7bf7b2ff
.org 0x89820
	movs r0, #8	@ 00089820 0820
.org 0x89822
	strb r0, [r5, #18]	@ 00089822 a874
.org 0x89824
	ldrb r0, [r5, #14]	@ 00089824 a87b
.org 0x89826
	adds r0, #1	@ 00089826 0130
.org 0x89828
	strb r0, [r5, #14]	@ 00089828 a873
.org 0x8982a
	adds r0, r5, #0	@ 0008982a 281c
.org 0x8982c
	bl 0x1cff0	@ 0008982c 93f7e0fb
.org 0x89830
	adds r0, r5, #0	@ 00089830 281c
.org 0x89832
	adds r0, #115	@ 00089832 7330
.org 0x89834
	ldrb r0, [r0, #0]	@ 00089834 0078
.org 0x89836
	cmp r0, #3	@ 00089836 0328
.org 0x89838
	bne.n 0x89894	@ 00089838 2cd1
.org 0x8983a
	ldrb r0, [r5, #18]	@ 0008983a a87c
.org 0x8983c
	cmp r0, #0	@ 0008983c 0028
.org 0x8983e
	beq.n 0x8984a	@ 0008983e 04d0
.org 0x89840
	subs r0, #1	@ 00089840 0138
.org 0x89842
	strb r0, [r5, #18]	@ 00089842 a874
.org 0x89844
	lsls r0, r0, #24	@ 00089844 0006
.org 0x89846
	cmp r0, #0	@ 00089846 0028
.org 0x89848
	bne.n 0x89894	@ 00089848 24d1
.org 0x8984a
	ldrb r1, [r5, #10]	@ 0008984a a97a
.org 0x8984c
	movs r0, #16	@ 0008984c 1020
.org 0x8984e
	ands r0, r1	@ 0008984e 0840
.org 0x89850
	cmp r0, #0	@ 00089850 0028
.org 0x89852
	bne.n 0x89874	@ 00089852 0fd1
.org 0x89854
	ldr r0, [pc, #24]	@ 00089854 0648
.org 0x89856
	ldr r0, [r0, #0]	@ 00089856 0068
.org 0x89858
	ldr r0, [r0, #84]	@ 00089858 406d
.org 0x8985a
	ldr r1, [r5, #84]	@ 0008985a 696d
.org 0x8985c
	subs r0, r0, r1	@ 0008985c 401a
.org 0x8985e
	cmp r0, #0	@ 0008985e 0028
.org 0x89860
	bgt.n 0x89882	@ 00089860 0fdc
.org 0x89862
	b.n 0x8988c	@ 00089862 13e0
.org 0x89864
	.byte 0x04,0x1f,0x00,0x00	@ 00089864 data
.org 0x89868
	.byte 0xac,0xf2,0x85,0x08	@ 00089868 data
.org 0x8986c
	.byte 0x44,0xf1,0x85,0x08	@ 0008986c data
.org 0x89870
	.byte 0xf0,0xdb,0x02,0x02	@ 00089870 data
.org 0x89874
	ldr r0, [pc, #16]	@ 00089874 0448
.org 0x89876
	ldr r0, [r0, #0]	@ 00089876 0068
.org 0x89878
	ldr r0, [r0, #84]	@ 00089878 406d
.org 0x8987a
	ldr r1, [r5, #84]	@ 0008987a 696d
.org 0x8987c
	subs r0, r0, r1	@ 0008987c 401a
.org 0x8987e
	cmp r0, #0	@ 0008987e 0028
.org 0x89880
	bge.n 0x8988c	@ 00089880 04da
.org 0x89882
	movs r1, #0	@ 00089882 0021
.org 0x89884
	movs r0, #2	@ 00089884 0220
