@ FUN_080007cc  entry 0x080007cc  size 186
.thumb
.org 0x7cc
FUN_080007cc:
	push {r4, r5, r6, lr}	@ 000007cc 70b5
.org 0x7ce
	ldr r0, [pc, #184]	@ 000007ce 2e48
.org 0x7d0
	ldr r2, [pc, #184]	@ 000007d0 2e4a
.org 0x7d2
	adds r1, r0, r2	@ 000007d2 8118
.org 0x7d4
	ldrb r0, [r1, #0]	@ 000007d4 0878
.org 0x7d6
	movs r5, #0	@ 000007d6 0025
.org 0x7d8
	movs r0, #1	@ 000007d8 0120
.org 0x7da
	strb r0, [r1, #0]	@ 000007da 0870
.org 0x7dc
	bl 0x2664	@ 000007dc 01f042ff
.org 0x7e0
	ldr r0, [pc, #172]	@ 000007e0 2b48
.org 0x7e2
	ldr r4, [pc, #176]	@ 000007e2 2c4c
.org 0x7e4
	ldrh r2, [r4, #0]	@ 000007e4 2288
.org 0x7e6
	movs r1, #248	@ 000007e6 f821
.org 0x7e8
	lsls r1, r1, #5	@ 000007e8 4901
.org 0x7ea
	ands r1, r2	@ 000007ea 1140
.org 0x7ec
	lsls r1, r1, #3	@ 000007ec c900
.org 0x7ee
	movs r2, #176	@ 000007ee b022
.org 0x7f0
	lsls r2, r2, #3	@ 000007f0 d200
.org 0x7f2
	movs r3, #240	@ 000007f2 f023
.org 0x7f4
	lsls r3, r3, #2	@ 000007f4 9b00
.org 0x7f6
	bl 0x1fd4	@ 000007f6 01f0edfb
.org 0x7fa
	ldr r1, [pc, #156]	@ 000007fa 2749
.org 0x7fc
	movs r2, #24	@ 000007fc 1822
.org 0x7fe
	strb r2, [r1, #20]	@ 000007fe 0a75
.org 0x800
	movs r3, #4	@ 00000800 0423
.org 0x802
	strb r3, [r1, #21]	@ 00000802 4b75
.org 0x804
	adds r0, r1, #0	@ 00000804 081c
.org 0x806
	adds r0, #44	@ 00000806 2c30
.org 0x808
	strb r2, [r0, #0]	@ 00000808 0270
.org 0x80a
	adds r1, #45	@ 0000080a 2d31
.org 0x80c
	strb r3, [r1, #0]	@ 0000080c 0b70
.org 0x80e
	ldr r6, [pc, #140]	@ 0000080e 234e
.org 0x810
	ldr r1, [pc, #140]	@ 00000810 2349
.org 0x812
	adds r0, r6, r1	@ 00000812 7018
.org 0x814
	movs r1, #32	@ 00000814 2021
.org 0x816
	strb r1, [r0, #0]	@ 00000816 0170
.org 0x818
	ldr r2, [pc, #136]	@ 00000818 224a
.org 0x81a
	adds r0, r6, r2	@ 0000081a b018
.org 0x81c
	strb r1, [r0, #0]	@ 0000081c 0170
.org 0x81e
	subs r2, #1	@ 0000081e 013a
.org 0x820
	adds r0, r6, r2	@ 00000820 b018
.org 0x822
	strb r1, [r0, #0]	@ 00000822 0170
.org 0x824
	movs r1, #129	@ 00000824 8121
.org 0x826
	lsls r1, r1, #3	@ 00000826 c900
.org 0x828
	adds r0, r6, r1	@ 00000828 7018
.org 0x82a
	str r5, [r0, #0]	@ 0000082a 0560
.org 0x82c
	bl 0x2348	@ 0000082c 01f08cfd
.org 0x830
	ldr r0, [pc, #116]	@ 00000830 1d48
.org 0x832
	strh r5, [r0, #0]	@ 00000832 0580
.org 0x834
	ldr r1, [pc, #116]	@ 00000834 1d49
.org 0x836
	strh r5, [r1, #0]	@ 00000836 0d80
.org 0x838
	movs r0, #255	@ 00000838 ff20
.org 0x83a
	strb r0, [r1, #14]	@ 0000083a 8873
.org 0x83c
	ldr r0, [pc, #112]	@ 0000083c 1c48
.org 0x83e
	strh r5, [r0, #0]	@ 0000083e 0580
.org 0x840
	strh r5, [r6, #0]	@ 00000840 3580
.org 0x842
	bl 0x29c0	@ 00000842 02f0bdf8
.org 0x846
	bl 0x10d4a8	@ 00000846 0cf12ffe
.org 0x84a
	bl 0x10d568	@ 0000084a 0cf18dfe
.org 0x84e
	subs r4, #4	@ 0000084e 043c
.org 0x850
	ldrh r1, [r4, #0]	@ 00000850 2188
.org 0x852
	ldr r0, [pc, #96]	@ 00000852 1848
.org 0x854
	ands r0, r1	@ 00000854 0840
.org 0x856
	ldr r1, [pc, #96]	@ 00000856 1849
.org 0x858
	ands r0, r1	@ 00000858 0840
.org 0x85a
	movs r2, #128	@ 0000085a 8022
.org 0x85c
	lsls r2, r2, #1	@ 0000085c 5200
.org 0x85e
	adds r1, r2, #0	@ 0000085e 111c
.org 0x860
	orrs r0, r1	@ 00000860 0843
.org 0x862
	strh r0, [r4, #0]	@ 00000862 2080
.org 0x864
	str r5, [r4, #12]	@ 00000864 e560
.org 0x866
	ldr r0, [pc, #84]	@ 00000866 1548
.org 0x868
	ldrb r0, [r0, #4]	@ 00000868 0079
.org 0x86a
	cmp r0, #0	@ 0000086a 0028
.org 0x86c
	bne.n 0x874	@ 0000086c 02d1
.org 0x86e
	ldr r1, [pc, #80]	@ 0000086e 1449
.org 0x870
	adds r0, r1, #0	@ 00000870 081c
.org 0x872
	strh r0, [r6, #0]	@ 00000872 3080
.org 0x874
	movs r0, #1	@ 00000874 0120
.org 0x876
	bl 0x12ec	@ 00000876 00f039fd
.org 0x87a
	ldr r0, [pc, #72]	@ 0000087a 1248
.org 0x87c
	bl 0x13b0	@ 0000087c 00f098fd
.org 0x880
	pop {r4, r5, r6}	@ 00000880 70bc
.org 0x882
	pop {r0}	@ 00000882 01bc
.org 0x884
	bx r0	@ 00000884 0047
