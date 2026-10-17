@ FUN_080fb7fc  entry 0x080fb7fc  size 202
.thumb
.org 0xfb7fc
FUN_080fb7fc:
	push {r4, r5, lr}	@ 000fb7fc 30b5
.org 0xfb7fe
	adds r4, r0, #0	@ 000fb7fe 041c
.org 0xfb800
	bl 0x1cff0	@ 000fb800 21f7f6fb
.org 0xfb804
	ldrb r0, [r4, #13]	@ 000fb804 607b
.org 0xfb806
	cmp r0, #0	@ 000fb806 0028
.org 0xfb808
	bne.n 0xfb848	@ 000fb808 1ed1
.org 0xfb80a
	adds r0, r4, #0	@ 000fb80a 201c
.org 0xfb80c
	adds r0, #189	@ 000fb80c bd30
.org 0xfb80e
	ldrb r1, [r0, #0]	@ 000fb80e 0178
.org 0xfb810
	adds r5, r0, #0	@ 000fb810 051c
.org 0xfb812
	cmp r1, #0	@ 000fb812 0029
.org 0xfb814
	beq.n 0xfb8c2	@ 000fb814 55d0
.org 0xfb816
	ldr r0, [pc, #20]	@ 000fb816 0548
.org 0xfb818
	bl 0x2b10	@ 000fb818 07f77af9
.org 0xfb81c
	ldrb r0, [r4, #16]	@ 000fb81c 207c
.org 0xfb81e
	cmp r0, #0	@ 000fb81e 0028
.org 0xfb820
	beq.n 0xfb834	@ 000fb820 08d0
.org 0xfb822
	ldr r1, [pc, #12]	@ 000fb822 0349
.org 0xfb824
	adds r0, r4, #0	@ 000fb824 201c
.org 0xfb826
	bl 0x1cf00	@ 000fb826 21f76bfb
.org 0xfb82a
	b.n 0xfb83c	@ 000fb82a 07e0
.org 0xfb82c
	.byte 0x87,0x01,0x00,0x00	@ 000fb82c data
.org 0xfb830
	.byte 0x04,0xbf,0x00,0x00	@ 000fb830 data
.org 0xfb834
	.byte 0x03,0x49	@ 000fb834 (raw)
.org 0xfb836
	adds r0, r4, #0	@ 000fb836 201c
.org 0xfb838
	bl 0x1cf00	@ 000fb838 21f762fb
.org 0xfb83c
	movs r0, #1	@ 000fb83c 0120
.org 0xfb83e
	strb r0, [r4, #13]	@ 000fb83e 6073
.org 0xfb840
	b.n 0xfb8c2	@ 000fb840 3fe0
.org 0xfb842
	.byte 0x00	@ 000fb842 data
.org 0xfb843
	.byte 0x00	@ 000fb843 data
.org 0xfb844
	.byte 0x01,0xbf,0x00,0x00	@ 000fb844 data
.org 0xfb848
	.byte 0x01,0x28	@ 000fb848 (raw)
.org 0xfb84a
	bne.n 0xfb88c	@ 000fb84a 1fd1
.org 0xfb84c
	.byte 0x20,0x1c	@ 000fb84c (raw)
.org 0xfb84e
	adds r0, #189	@ 000fb84e bd30
.org 0xfb850
	ldrb r1, [r0, #0]	@ 000fb850 0178
.org 0xfb852
	adds r5, r0, #0	@ 000fb852 051c
.org 0xfb854
	cmp r1, #0	@ 000fb854 0029
.org 0xfb856
	bne.n 0xfb8c2	@ 000fb856 34d1
.org 0xfb858
	ldr r0, [pc, #20]	@ 000fb858 0548
.org 0xfb85a
	bl 0x2b5c	@ 000fb85a 07f77ff9
.org 0xfb85e
	ldrb r0, [r4, #16]	@ 000fb85e 207c
.org 0xfb860
	cmp r0, #0	@ 000fb860 0028
.org 0xfb862
	beq.n 0xfb878	@ 000fb862 09d0
.org 0xfb864
	ldr r1, [pc, #12]	@ 000fb864 0349
.org 0xfb866
	adds r0, r4, #0	@ 000fb866 201c
.org 0xfb868
	bl 0x1cf00	@ 000fb868 21f74afb
.org 0xfb86c
	b.n 0xfb880	@ 000fb86c 08e0
.org 0xfb86e
	.byte 0x00	@ 000fb86e data
.org 0xfb86f
	.byte 0x00	@ 000fb86f data
.org 0xfb870
	.byte 0x87,0x01,0x00,0x00	@ 000fb870 data
.org 0xfb874
	.byte 0x05,0xbf,0x00,0x00	@ 000fb874 data
.org 0xfb878
	.byte 0x03,0x49	@ 000fb878 (raw)
.org 0xfb87a
	.byte 0x20,0x1c	@ 000fb87a (raw)
.org 0xfb87c
	.byte 0x21,0xf7,0x40,0xfb	@ 000fb87c (raw)
.org 0xfb880
	movs r0, #2	@ 000fb880 0220
.org 0xfb882
	strb r0, [r4, #13]	@ 000fb882 6073
.org 0xfb884
	b.n 0xfb8c2	@ 000fb884 1de0
.org 0xfb886
	.byte 0x00	@ 000fb886 data
.org 0xfb887
	.byte 0x00	@ 000fb887 data
.org 0xfb888
	.byte 0x02,0xbf,0x00,0x00	@ 000fb888 data
.org 0xfb88c
	.byte 0x20,0x1c	@ 000fb88c (raw)
.org 0xfb88e
	.byte 0x73,0x30	@ 000fb88e (raw)
.org 0xfb890
	ldrb r0, [r0, #0]	@ 000fb890 0078
.org 0xfb892
	adds r5, r4, #0	@ 000fb892 251c
.org 0xfb894
	adds r5, #189	@ 000fb894 bd35
.org 0xfb896
	cmp r0, #4	@ 000fb896 0428
.org 0xfb898
	bne.n 0xfb8c2	@ 000fb898 13d1
.org 0xfb89a
	ldrb r0, [r4, #16]	@ 000fb89a 207c
.org 0xfb89c
	cmp r0, #0	@ 000fb89c 0028
.org 0xfb89e
	beq.n 0xfb8b0	@ 000fb89e 07d0
.org 0xfb8a0
	ldr r1, [pc, #8]	@ 000fb8a0 0249
.org 0xfb8a2
	adds r0, r4, #0	@ 000fb8a2 201c
.org 0xfb8a4
	bl 0x1cf00	@ 000fb8a4 21f72cfb
.org 0xfb8a8
	b.n 0xfb8ba	@ 000fb8a8 07e0
.org 0xfb8aa
	.byte 0x00	@ 000fb8aa data
.org 0xfb8ab
	.byte 0x00	@ 000fb8ab data
.org 0xfb8ac
	.byte 0x03,0xbf,0x00,0x00	@ 000fb8ac data
.org 0xfb8b0
	.byte 0xbf,0x21	@ 000fb8b0 (raw)
.org 0xfb8b2
	.byte 0x09,0x02	@ 000fb8b2 (raw)
.org 0xfb8b4
	.byte 0x20,0x1c	@ 000fb8b4 (raw)
.org 0xfb8b6
	bl 0x1cf00	@ 000fb8b6 21f723fb
.org 0xfb8ba
	movs r0, #0	@ 000fb8ba 0020
.org 0xfb8bc
	strb r0, [r4, #13]	@ 000fb8bc 6073
.org 0xfb8be
	adds r5, r4, #0	@ 000fb8be 251c
.org 0xfb8c0
	adds r5, #189	@ 000fb8c0 bd35
.org 0xfb8c2
	ldrb r1, [r4, #18]	@ 000fb8c2 a17c
.org 0xfb8c4
	adds r0, r1, #1	@ 000fb8c4 481c
