@ FUN_080ae77c  entry 0x080ae77c  size 270
.thumb
.org 0xae77c
FUN_080ae77c:
	push {r4, r5, r6, lr}	@ 000ae77c 70b5
.org 0xae77e
	adds r5, r0, #0	@ 000ae77e 051c
.org 0xae780
	bl 0x1cc9c	@ 000ae780 6ef78cfa
.org 0xae784
	ldrb r1, [r5, #10]	@ 000ae784 a97a
.org 0xae786
	movs r0, #1	@ 000ae786 0120
.org 0xae788
	movs r4, #0	@ 000ae788 0024
.org 0xae78a
	movs r6, #0	@ 000ae78a 0026
.org 0xae78c
	orrs r0, r1	@ 000ae78c 0843
.org 0xae78e
	movs r1, #2	@ 000ae78e 0221
.org 0xae790
	orrs r0, r1	@ 000ae790 0843
.org 0xae792
	strb r0, [r5, #10]	@ 000ae792 a872
.org 0xae794
	ldrb r0, [r5, #16]	@ 000ae794 287c
.org 0xae796
	cmp r0, #0	@ 000ae796 0028
.org 0xae798
	bne.n 0xae7fc	@ 000ae798 30d1
.org 0xae79a
	movs r1, #213	@ 000ae79a d521
.org 0xae79c
	lsls r1, r1, #8	@ 000ae79c 0902
.org 0xae79e
	adds r0, r5, #0	@ 000ae79e 281c
.org 0xae7a0
	bl 0x1cf00	@ 000ae7a0 6ef7aefb
.org 0xae7a4
	ldrb r0, [r5, #10]	@ 000ae7a4 a87a
.org 0xae7a6
	movs r1, #4	@ 000ae7a6 0421
.org 0xae7a8
	orrs r0, r1	@ 000ae7a8 0843
.org 0xae7aa
	strb r0, [r5, #10]	@ 000ae7aa a872
.org 0xae7ac
	adds r4, r5, #0	@ 000ae7ac 2c1c
.org 0xae7ae
	adds r4, #116	@ 000ae7ae 7434
.org 0xae7b0
	ldr r1, [pc, #60]	@ 000ae7b0 0f49
.org 0xae7b2
	adds r2, r5, #0	@ 000ae7b2 2a1c
.org 0xae7b4
	adds r2, #84	@ 000ae7b4 5432
.org 0xae7b6
	adds r0, r4, #0	@ 000ae7b6 201c
.org 0xae7b8
	movs r3, #18	@ 000ae7b8 1223
.org 0xae7ba
	bl 0x5760	@ 000ae7ba 56f7d1ff
.org 0xae7be
	str r5, [r4, #44]	@ 000ae7be e562
.org 0xae7c0
	str r6, [r4, #36]	@ 000ae7c0 6662
.org 0xae7c2
	ldr r3, [pc, #48]	@ 000ae7c2 0c4b
.org 0xae7c4
	ldr r2, [pc, #48]	@ 000ae7c4 0c4a
.org 0xae7c6
	ldrb r0, [r5, #17]	@ 000ae7c6 687c
.org 0xae7c8
	adds r0, r0, r2	@ 000ae7c8 8018
.org 0xae7ca
	ldrb r0, [r0, #0]	@ 000ae7ca 0078
.org 0xae7cc
	adds r0, #64	@ 000ae7cc 4030
.org 0xae7ce
	lsls r0, r0, #24	@ 000ae7ce 0006
.org 0xae7d0
	lsrs r0, r0, #23	@ 000ae7d0 c00d
.org 0xae7d2
	adds r0, r0, r3	@ 000ae7d2 c018
.org 0xae7d4
	movs r6, #0	@ 000ae7d4 0026
.org 0xae7d6
	ldrsh r1, [r0, r6]	@ 000ae7d6 815f
.org 0xae7d8
	lsls r0, r1, #2	@ 000ae7d8 8800
.org 0xae7da
	adds r0, r0, r1	@ 000ae7da 4018
.org 0xae7dc
	asrs r0, r0, #2	@ 000ae7dc 8010
.org 0xae7de
	str r0, [r5, #92]	@ 000ae7de e865
.org 0xae7e0
	ldrb r0, [r5, #17]	@ 000ae7e0 687c
.org 0xae7e2
	adds r0, r0, r2	@ 000ae7e2 8018
.org 0xae7e4
	ldrb r0, [r0, #0]	@ 000ae7e4 0078
.org 0xae7e6
	lsls r0, r0, #1	@ 000ae7e6 4000
.org 0xae7e8
	adds r0, r0, r3	@ 000ae7e8 c018
.org 0xae7ea
	movs r2, #0	@ 000ae7ea 0022
.org 0xae7ec
	ldrsh r1, [r0, r2]	@ 000ae7ec 815e
.org 0xae7ee
	b.n 0xae844	@ 000ae7ee 29e0
.org 0xae7f0
	.byte 0x0c,0x30,0x86,0x08	@ 000ae7f0 data
.org 0xae7f4
	.byte 0x0c,0x93,0x12,0x08	@ 000ae7f4 data
.org 0xae7f8
	.byte 0x6c,0x30,0x86,0x08	@ 000ae7f8 data
.org 0xae7fc
	ldr r1, [pc, #152]	@ 000ae7fc 2649
.org 0xae7fe
	adds r0, r5, #0	@ 000ae7fe 281c
.org 0xae800
	bl 0x1cf00	@ 000ae800 6ef77efb
.org 0xae804
	ldrb r0, [r5, #10]	@ 000ae804 a87a
.org 0xae806
	movs r1, #4	@ 000ae806 0421
.org 0xae808
	orrs r0, r1	@ 000ae808 0843
.org 0xae80a
	strb r0, [r5, #10]	@ 000ae80a a872
.org 0xae80c
	adds r4, r5, #0	@ 000ae80c 2c1c
.org 0xae80e
	adds r4, #116	@ 000ae80e 7434
.org 0xae810
	ldr r1, [pc, #136]	@ 000ae810 2249
.org 0xae812
	adds r2, r5, #0	@ 000ae812 2a1c
.org 0xae814
	adds r2, #84	@ 000ae814 5432
.org 0xae816
	adds r0, r4, #0	@ 000ae816 201c
.org 0xae818
	movs r3, #9	@ 000ae818 0923
.org 0xae81a
	bl 0x5760	@ 000ae81a 56f7a1ff
.org 0xae81e
	str r5, [r4, #44]	@ 000ae81e e562
.org 0xae820
	str r6, [r4, #36]	@ 000ae820 6662
.org 0xae822
	ldr r2, [pc, #124]	@ 000ae822 1f4a
.org 0xae824
	ldrb r0, [r5, #17]	@ 000ae824 687c
.org 0xae826
	adds r0, #64	@ 000ae826 4030
.org 0xae828
	lsls r0, r0, #24	@ 000ae828 0006
.org 0xae82a
	lsrs r0, r0, #23	@ 000ae82a c00d
.org 0xae82c
	adds r0, r0, r2	@ 000ae82c 8018
.org 0xae82e
	movs r3, #0	@ 000ae82e 0023
.org 0xae830
	ldrsh r1, [r0, r3]	@ 000ae830 c15e
.org 0xae832
	lsls r0, r1, #2	@ 000ae832 8800
.org 0xae834
	adds r0, r0, r1	@ 000ae834 4018
.org 0xae836
	asrs r0, r0, #2	@ 000ae836 8010
.org 0xae838
	str r0, [r5, #92]	@ 000ae838 e865
.org 0xae83a
	ldrb r0, [r5, #17]	@ 000ae83a 687c
.org 0xae83c
	lsls r0, r0, #1	@ 000ae83c 4000
.org 0xae83e
	adds r0, r0, r2	@ 000ae83e 8018
.org 0xae840
	movs r6, #0	@ 000ae840 0026
.org 0xae842
	ldrsh r1, [r0, r6]	@ 000ae842 815f
.org 0xae844
	lsls r0, r1, #2	@ 000ae844 8800
.org 0xae846
	adds r0, r0, r1	@ 000ae846 4018
.org 0xae848
	asrs r0, r0, #2	@ 000ae848 8010
.org 0xae84a
	str r0, [r5, #96]	@ 000ae84a 2866
.org 0xae84c
	adds r0, r5, #0	@ 000ae84c 281c
.org 0xae84e
	bl 0x1cff0	@ 000ae84e 6ef7cffb
.org 0xae852
	movs r2, #0	@ 000ae852 0022
.org 0xae854
	ldrb r1, [r5, #10]	@ 000ae854 a97a
.org 0xae856
	movs r0, #239	@ 000ae856 ef20
.org 0xae858
	ands r0, r1	@ 000ae858 0840
.org 0xae85a
	strb r0, [r5, #10]	@ 000ae85a a872
.org 0xae85c
	movs r3, #1	@ 000ae85c 0123
.org 0xae85e
	adds r0, r5, #0	@ 000ae85e 281c
.org 0xae860
	adds r0, #76	@ 000ae860 4c30
.org 0xae862
	strb r2, [r0, #0]	@ 000ae862 0270
.org 0xae864
	adds r2, r5, #0	@ 000ae864 2a1c
.org 0xae866
	adds r2, #74	@ 000ae866 4a32
.org 0xae868
	ldrb r1, [r2, #0]	@ 000ae868 1178
.org 0xae86a
	movs r0, #17	@ 000ae86a 1120
.org 0xae86c
	negs r0, r0	@ 000ae86c 4042
.org 0xae86e
	ands r0, r1	@ 000ae86e 0840
.org 0xae870
	strb r0, [r2, #0]	@ 000ae870 1070
.org 0xae872
	ldr r0, [pc, #48]	@ 000ae872 0c48
.org 0xae874
	str r0, [r4, #36]	@ 000ae874 6062
.org 0xae876
	movs r0, #2	@ 000ae876 0220
.org 0xae878
	strb r0, [r5, #18]	@ 000ae878 a874
.org 0xae87a
	ldr r1, [pc, #44]	@ 000ae87a 0b49
.org 0xae87c
	ldrb r0, [r5, #9]	@ 000ae87c 687a
.org 0xae87e
	lsls r0, r0, #2	@ 000ae87e 8000
.org 0xae880
	adds r0, r0, r1	@ 000ae880 4018
.org 0xae882
	str r3, [r5, #12]	@ 000ae882 eb60
.org 0xae884
	ldr r0, [r0, #0]	@ 000ae884 0068
.org 0xae886
	ldr r0, [r0, #4]	@ 000ae886 4068
.org 0xae888
	str r0, [r5, #20]	@ 000ae888 6861
