@ FUN_0808a78c  entry 0x0808a78c  size 242
.thumb
.org 0x8a78c
FUN_0808a78c:
	push {r4, r5, lr}	@ 0008a78c 30b5
.org 0x8a78e
	adds r5, r0, #0	@ 0008a78e 051c
.org 0x8a790
	ldrb r4, [r5, #14]	@ 0008a790 ac7b
.org 0x8a792
	cmp r4, #1	@ 0008a792 012c
.org 0x8a794
	beq.n 0x8a7d6	@ 0008a794 1fd0
.org 0x8a796
	cmp r4, #1	@ 0008a796 012c
.org 0x8a798
	bgt.n 0x8a7a0	@ 0008a798 02dc
.org 0x8a79a
	cmp r4, #0	@ 0008a79a 002c
.org 0x8a79c
	beq.n 0x8a7aa	@ 0008a79c 05d0
.org 0x8a79e
	b.n 0x8a884	@ 0008a79e 71e0
.org 0x8a7a0
	cmp r4, #2	@ 0008a7a0 022c
.org 0x8a7a2
	beq.n 0x8a7fc	@ 0008a7a2 2bd0
.org 0x8a7a4
	cmp r4, #3	@ 0008a7a4 032c
.org 0x8a7a6
	beq.n 0x8a83e	@ 0008a7a6 4ad0
.org 0x8a7a8
	b.n 0x8a884	@ 0008a7a8 6ce0
.org 0x8a7aa
	ldr r1, [pc, #68]	@ 0008a7aa 1149
.org 0x8a7ac
	adds r0, r5, #0	@ 0008a7ac 281c
.org 0x8a7ae
	bl 0x1cf00	@ 0008a7ae 92f7a7fb
.org 0x8a7b2
	adds r0, r5, #0	@ 0008a7b2 281c
.org 0x8a7b4
	adds r0, #116	@ 0008a7b4 7430
.org 0x8a7b6
	ldr r1, [pc, #60]	@ 0008a7b6 0f49
.org 0x8a7b8
	ldrb r2, [r1, #1]	@ 0008a7b8 4a78
.org 0x8a7ba
	lsls r1, r2, #1	@ 0008a7ba 5100
.org 0x8a7bc
	adds r1, r1, r2	@ 0008a7bc 8918
.org 0x8a7be
	lsls r1, r1, #3	@ 0008a7be c900
.org 0x8a7c0
	ldr r2, [pc, #52]	@ 0008a7c0 0d4a
.org 0x8a7c2
	adds r1, r1, r2	@ 0008a7c2 8918
.org 0x8a7c4
	bl 0x5784	@ 0008a7c4 7af7deff
.org 0x8a7c8
	str r4, [r5, #96]	@ 0008a7c8 2c66
.org 0x8a7ca
	str r4, [r5, #92]	@ 0008a7ca ec65
.org 0x8a7cc
	movs r0, #16	@ 0008a7cc 1020
.org 0x8a7ce
	strb r0, [r5, #18]	@ 0008a7ce a874
.org 0x8a7d0
	ldrb r0, [r5, #14]	@ 0008a7d0 a87b
.org 0x8a7d2
	adds r0, #1	@ 0008a7d2 0130
.org 0x8a7d4
	strb r0, [r5, #14]	@ 0008a7d4 a873
.org 0x8a7d6
	adds r0, r5, #0	@ 0008a7d6 281c
.org 0x8a7d8
	bl 0x1cff0	@ 0008a7d8 92f70afc
.org 0x8a7dc
	ldrb r0, [r5, #18]	@ 0008a7dc a87c
.org 0x8a7de
	subs r0, #1	@ 0008a7de 0138
.org 0x8a7e0
	strb r0, [r5, #18]	@ 0008a7e0 a874
.org 0x8a7e2
	lsls r0, r0, #24	@ 0008a7e2 0006
.org 0x8a7e4
	cmp r0, #0	@ 0008a7e4 0028
.org 0x8a7e6
	bne.n 0x8a884	@ 0008a7e6 4dd1
.org 0x8a7e8
	ldrb r0, [r5, #14]	@ 0008a7e8 a87b
.org 0x8a7ea
	adds r0, #1	@ 0008a7ea 0130
.org 0x8a7ec
	strb r0, [r5, #14]	@ 0008a7ec a873
.org 0x8a7ee
	b.n 0x8a884	@ 0008a7ee 49e0
.org 0x8a7f0
	.byte 0x01,0x20,0x00,0x00	@ 0008a7f0 data
.org 0x8a7f4
	.byte 0x1c,0xf5,0x85,0x08	@ 0008a7f4 data
.org 0x8a7f8
	.byte 0xcc,0xf3,0x85,0x08	@ 0008a7f8 data
.org 0x8a7fc
	adds r0, r5, #0	@ 0008a7fc 281c
.org 0x8a7fe
	adds r0, #192	@ 0008a7fe c030
.org 0x8a800
	movs r4, #0	@ 0008a800 0024
.org 0x8a802
	strb r4, [r0, #0]	@ 0008a802 0470
.org 0x8a804
	ldr r1, [pc, #132]	@ 0008a804 2149
.org 0x8a806
	adds r0, r5, #0	@ 0008a806 281c
.org 0x8a808
	bl 0x1cf00	@ 0008a808 92f77afb
.org 0x8a80c
	adds r0, r5, #0	@ 0008a80c 281c
.org 0x8a80e
	adds r0, #116	@ 0008a80e 7430
.org 0x8a810
	ldr r1, [pc, #124]	@ 0008a810 1f49
.org 0x8a812
	ldrb r2, [r1, #7]	@ 0008a812 ca79
.org 0x8a814
	lsls r1, r2, #1	@ 0008a814 5100
.org 0x8a816
	adds r1, r1, r2	@ 0008a816 8918
.org 0x8a818
	lsls r1, r1, #3	@ 0008a818 c900
.org 0x8a81a
	ldr r2, [pc, #120]	@ 0008a81a 1e4a
.org 0x8a81c
	adds r1, r1, r2	@ 0008a81c 8918
.org 0x8a81e
	bl 0x5784	@ 0008a81e 7af7b1ff
.org 0x8a822
	ldr r0, [r5, #88]	@ 0008a822 a86d
.org 0x8a824
	movs r1, #168	@ 0008a824 a821
.org 0x8a826
	lsls r1, r1, #6	@ 0008a826 8901
.org 0x8a828
	adds r0, r0, r1	@ 0008a828 4018
.org 0x8a82a
	str r0, [r5, #88]	@ 0008a82a a865
.org 0x8a82c
	adds r0, r5, #0	@ 0008a82c 281c
.org 0x8a82e
	adds r0, #92	@ 0008a82e 5c30
.org 0x8a830
	str r4, [r0, #4]	@ 0008a830 4460
.org 0x8a832
	str r4, [r5, #92]	@ 0008a832 ec65
.org 0x8a834
	movs r0, #12	@ 0008a834 0c20
.org 0x8a836
	strb r0, [r5, #18]	@ 0008a836 a874
.org 0x8a838
	ldrb r0, [r5, #14]	@ 0008a838 a87b
.org 0x8a83a
	adds r0, #1	@ 0008a83a 0130
.org 0x8a83c
	strb r0, [r5, #14]	@ 0008a83c a873
.org 0x8a83e
	ldr r0, [r5, #88]	@ 0008a83e a86d
.org 0x8a840
	ldr r1, [r5, #96]	@ 0008a840 296e
.org 0x8a842
	adds r0, r0, r1	@ 0008a842 4018
.org 0x8a844
	str r0, [r5, #88]	@ 0008a844 a865
.org 0x8a846
	adds r1, #64	@ 0008a846 4031
.org 0x8a848
	str r1, [r5, #96]	@ 0008a848 2966
.org 0x8a84a
	movs r0, #224	@ 0008a84a e020
.org 0x8a84c
	lsls r0, r0, #3	@ 0008a84c c000
.org 0x8a84e
	cmp r1, r0	@ 0008a84e 8142
.org 0x8a850
	ble.n 0x8a854	@ 0008a850 00dd
.org 0x8a852
	str r0, [r5, #96]	@ 0008a852 2866
.org 0x8a854
	adds r0, r5, #0	@ 0008a854 281c
.org 0x8a856
	bl 0x1cff0	@ 0008a856 92f7cbfb
.org 0x8a85a
	ldrb r0, [r5, #18]	@ 0008a85a a87c
.org 0x8a85c
	subs r0, #1	@ 0008a85c 0138
.org 0x8a85e
	strb r0, [r5, #18]	@ 0008a85e a874
.org 0x8a860
	lsls r0, r0, #24	@ 0008a860 0006
.org 0x8a862
	lsrs r4, r0, #24	@ 0008a862 040e
.org 0x8a864
	cmp r4, #0	@ 0008a864 002c
.org 0x8a866
	bne.n 0x8a884	@ 0008a866 0dd1
.org 0x8a868
	adds r0, r5, #0	@ 0008a868 281c
.org 0x8a86a
	adds r0, #116	@ 0008a86a 7430
.org 0x8a86c
	ldr r1, [pc, #32]	@ 0008a86c 0849
.org 0x8a86e
	ldrb r2, [r1, #0]	@ 0008a86e 0a78
.org 0x8a870
	lsls r1, r2, #1	@ 0008a870 5100
.org 0x8a872
	adds r1, r1, r2	@ 0008a872 8918
.org 0x8a874
	lsls r1, r1, #3	@ 0008a874 c900
.org 0x8a876
	ldr r2, [pc, #28]	@ 0008a876 074a
.org 0x8a878
	adds r1, r1, r2	@ 0008a878 8918
.org 0x8a87a
	bl 0x5784	@ 0008a87a 7af783ff
