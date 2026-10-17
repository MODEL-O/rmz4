@ FUN_0806d77c  entry 0x0806d77c  size 290
.thumb
.org 0x6d77c
FUN_0806d77c:
	push {r4, r5, lr}	@ 0006d77c 30b5
.org 0x6d77e
	sub sp, #12	@ 0006d77e 83b0
.org 0x6d780
	adds r4, r0, #0	@ 0006d780 041c
.org 0x6d782
	ldrb r1, [r4, #14]	@ 0006d782 a17b
.org 0x6d784
	cmp r1, #0	@ 0006d784 0029
.org 0x6d786
	bne.n 0x6d7a2	@ 0006d786 0cd1
.org 0x6d788
	strb r1, [r4, #18]	@ 0006d788 a174
.org 0x6d78a
	strb r1, [r4, #19]	@ 0006d78a e174
.org 0x6d78c
	adds r2, r4, #0	@ 0006d78c 221c
.org 0x6d78e
	adds r2, #219	@ 0006d78e db32
.org 0x6d790
	ldrb r0, [r2, #0]	@ 0006d790 1078
.org 0x6d792
	cmp r0, #99	@ 0006d792 6328
.org 0x6d794
	bhi.n 0x6d79a	@ 0006d794 01d8
.org 0x6d796
	adds r0, #1	@ 0006d796 0130
.org 0x6d798
	strb r0, [r2, #0]	@ 0006d798 1070
.org 0x6d79a
	str r1, [r4, #44]	@ 0006d79a e162
.org 0x6d79c
	ldrb r0, [r4, #14]	@ 0006d79c a07b
.org 0x6d79e
	adds r0, #1	@ 0006d79e 0130
.org 0x6d7a0
	strb r0, [r4, #14]	@ 0006d7a0 a073
.org 0x6d7a2
	adds r0, r4, #0	@ 0006d7a2 201c
.org 0x6d7a4
	bl 0x1cff0	@ 0006d7a4 aff724fc
.org 0x6d7a8
	adds r0, r4, #0	@ 0006d7a8 201c
.org 0x6d7aa
	adds r0, #180	@ 0006d7aa b430
.org 0x6d7ac
	adds r2, r4, #0	@ 0006d7ac 221c
.org 0x6d7ae
	adds r2, #216	@ 0006d7ae d832
.org 0x6d7b0
	ldrb r5, [r2, #0]	@ 0006d7b0 1578
.org 0x6d7b2
	lsls r1, r5, #2	@ 0006d7b2 a900
.org 0x6d7b4
	adds r0, r0, r1	@ 0006d7b4 4018
.org 0x6d7b6
	ldr r1, [r0, #0]	@ 0006d7b6 0168
.org 0x6d7b8
	cmp r1, #0	@ 0006d7b8 0029
.org 0x6d7ba
	beq.n 0x6d898	@ 0006d7ba 6dd0
.org 0x6d7bc
	ldr r0, [r4, #44]	@ 0006d7bc e06a
.org 0x6d7be
	cmp r0, #0	@ 0006d7be 0028
.org 0x6d7c0
	beq.n 0x6d86c	@ 0006d7c0 54d0
.org 0x6d7c2
	adds r3, r0, #0	@ 0006d7c2 031c
.org 0x6d7c4
	ldr r0, [r3, #84]	@ 0006d7c4 586d
.org 0x6d7c6
	ldr r1, [r3, #88]	@ 0006d7c6 996d
.org 0x6d7c8
	str r0, [sp, #4]	@ 0006d7c8 0190
.org 0x6d7ca
	str r1, [sp, #8]	@ 0006d7ca 0291
.org 0x6d7cc
	movs r5, #0	@ 0006d7cc 0025
.org 0x6d7ce
	ldrb r0, [r2, #0]	@ 0006d7ce 1078
.org 0x6d7d0
	cmp r0, #1	@ 0006d7d0 0128
.org 0x6d7d2
	beq.n 0x6d7fe	@ 0006d7d2 14d0
.org 0x6d7d4
	cmp r0, #1	@ 0006d7d4 0128
.org 0x6d7d6
	bgt.n 0x6d7de	@ 0006d7d6 02dc
.org 0x6d7d8
	cmp r0, #0	@ 0006d7d8 0028
.org 0x6d7da
	beq.n 0x6d7e8	@ 0006d7da 05d0
.org 0x6d7dc
	b.n 0x6d844	@ 0006d7dc 32e0
.org 0x6d7de
	cmp r0, #2	@ 0006d7de 0228
.org 0x6d7e0
	beq.n 0x6d810	@ 0006d7e0 16d0
.org 0x6d7e2
	cmp r0, #3	@ 0006d7e2 0328
.org 0x6d7e4
	beq.n 0x6d82c	@ 0006d7e4 22d0
.org 0x6d7e6
	b.n 0x6d844	@ 0006d7e6 2de0
.org 0x6d7e8
	ldr r0, [r4, #88]	@ 0006d7e8 a06d
.org 0x6d7ea
	ldr r1, [r3, #88]	@ 0006d7ea 996d
.org 0x6d7ec
	subs r0, r0, r1	@ 0006d7ec 401a
.org 0x6d7ee
	movs r1, #176	@ 0006d7ee b021
.org 0x6d7f0
	lsls r1, r1, #5	@ 0006d7f0 4901
.org 0x6d7f2
	cmp r0, r1	@ 0006d7f2 8842
.org 0x6d7f4
	ble.n 0x6d844	@ 0006d7f4 26dd
.org 0x6d7f6
	ldr r0, [sp, #8]	@ 0006d7f6 0298
.org 0x6d7f8
	adds r0, r0, r1	@ 0006d7f8 4018
.org 0x6d7fa
	str r0, [sp, #8]	@ 0006d7fa 0290
.org 0x6d7fc
	b.n 0x6d842	@ 0006d7fc 21e0
.org 0x6d7fe
	ldr r0, [r4, #84]	@ 0006d7fe 606d
.org 0x6d800
	ldr r1, [r3, #84]	@ 0006d800 596d
.org 0x6d802
	subs r0, r0, r1	@ 0006d802 401a
.org 0x6d804
	movs r1, #176	@ 0006d804 b021
.org 0x6d806
	lsls r1, r1, #5	@ 0006d806 4901
.org 0x6d808
	cmp r0, r1	@ 0006d808 8842
.org 0x6d80a
	ble.n 0x6d844	@ 0006d80a 1bdd
.org 0x6d80c
	ldr r0, [sp, #4]	@ 0006d80c 0198
.org 0x6d80e
	b.n 0x6d83e	@ 0006d80e 16e0
.org 0x6d810
	ldr r0, [r3, #88]	@ 0006d810 986d
.org 0x6d812
	ldr r1, [r4, #88]	@ 0006d812 a16d
.org 0x6d814
	subs r0, r0, r1	@ 0006d814 401a
.org 0x6d816
	movs r1, #176	@ 0006d816 b021
.org 0x6d818
	lsls r1, r1, #5	@ 0006d818 4901
.org 0x6d81a
	cmp r0, r1	@ 0006d81a 8842
.org 0x6d81c
	ble.n 0x6d844	@ 0006d81c 12dd
.org 0x6d81e
	ldr r0, [sp, #8]	@ 0006d81e 0298
.org 0x6d820
	ldr r1, [pc, #4]	@ 0006d820 0149
.org 0x6d822
	adds r0, r0, r1	@ 0006d822 4018
.org 0x6d824
	str r0, [sp, #8]	@ 0006d824 0290
.org 0x6d826
	b.n 0x6d842	@ 0006d826 0ce0
.org 0x6d828
	.byte 0x00,0xea,0xff,0xff	@ 0006d828 data
.org 0x6d82c
	ldr r0, [r3, #84]	@ 0006d82c 586d
.org 0x6d82e
	ldr r1, [r4, #84]	@ 0006d82e 616d
.org 0x6d830
	subs r0, r0, r1	@ 0006d830 401a
.org 0x6d832
	movs r1, #176	@ 0006d832 b021
.org 0x6d834
	lsls r1, r1, #5	@ 0006d834 4901
.org 0x6d836
	cmp r0, r1	@ 0006d836 8842
.org 0x6d838
	ble.n 0x6d844	@ 0006d838 04dd
.org 0x6d83a
	ldr r0, [sp, #4]	@ 0006d83a 0198
.org 0x6d83c
	ldr r1, [pc, #40]	@ 0006d83c 0a49
.org 0x6d83e
	adds r0, r0, r1	@ 0006d83e 4018
.org 0x6d840
	str r0, [sp, #4]	@ 0006d840 0190
.org 0x6d842
	movs r5, #1	@ 0006d842 0125
.org 0x6d844
	ldrb r0, [r3, #12]	@ 0006d844 187b
.org 0x6d846
	cmp r0, #1	@ 0006d846 0128
.org 0x6d848
	bls.n 0x6d84c	@ 0006d848 00d9
.org 0x6d84a
	movs r5, #1	@ 0006d84a 0125
.org 0x6d84c
	cmp r5, #0	@ 0006d84c 002d
.org 0x6d84e
	beq.n 0x6d890	@ 0006d84e 1fd0
.org 0x6d850
	ldrb r2, [r2, #0]	@ 0006d850 1278
.org 0x6d852
	adds r0, r4, #0	@ 0006d852 201c
.org 0x6d854
	adds r0, #219	@ 0006d854 db30
.org 0x6d856
	ldrb r3, [r0, #0]	@ 0006d856 0378
.org 0x6d858
	subs r3, #1	@ 0006d858 013b
.org 0x6d85a
	lsls r3, r3, #24	@ 0006d85a 1b06
.org 0x6d85c
	lsrs r3, r3, #24	@ 0006d85c 1b0e
.org 0x6d85e
	ldrb r0, [r4, #19]	@ 0006d85e e07c
.org 0x6d860
	str r0, [sp, #0]	@ 0006d860 0090
.org 0x6d862
	adds r0, r4, #0	@ 0006d862 201c
.org 0x6d864
	add r1, sp, #4	@ 0006d864 01a9
.org 0x6d866
	b.n 0x6d884	@ 0006d866 0de0
.org 0x6d868
	.byte 0x00,0xea,0xff,0xff	@ 0006d868 data
.org 0x6d86c
	adds r1, r4, #0	@ 0006d86c 211c
.org 0x6d86e
	adds r1, #84	@ 0006d86e 5431
.org 0x6d870
	adds r0, r4, #0	@ 0006d870 201c
.org 0x6d872
	adds r0, #219	@ 0006d872 db30
.org 0x6d874
	ldrb r3, [r0, #0]	@ 0006d874 0378
.org 0x6d876
	subs r3, #1	@ 0006d876 013b
.org 0x6d878
	lsls r3, r3, #24	@ 0006d878 1b06
.org 0x6d87a
	lsrs r3, r3, #24	@ 0006d87a 1b0e
.org 0x6d87c
	ldrb r0, [r4, #19]	@ 0006d87c e07c
.org 0x6d87e
	str r0, [sp, #0]	@ 0006d87e 0090
.org 0x6d880
	adds r0, r4, #0	@ 0006d880 201c
.org 0x6d882
	adds r2, r5, #0	@ 0006d882 2a1c
.org 0x6d884
	bl 0xa3a88	@ 0006d884 36f000f9
.org 0x6d888
	str r0, [r4, #44]	@ 0006d888 e062
.org 0x6d88a
	ldrb r0, [r4, #19]	@ 0006d88a e07c
.org 0x6d88c
	adds r0, #1	@ 0006d88c 0130
.org 0x6d88e
	strb r0, [r4, #19]	@ 0006d88e e074
.org 0x6d890
	ldrb r0, [r4, #19]	@ 0006d890 e07c
.org 0x6d892
	cmp r0, #5	@ 0006d892 0528
.org 0x6d894
	bls.n 0x6d89e	@ 0006d894 03d9
.org 0x6d896
	movs r1, #0	@ 0006d896 0021
.org 0x6d898
	movs r0, #5	@ 0006d898 0520
.org 0x6d89a
	strb r0, [r4, #13]	@ 0006d89a 6073
.org 0x6d89c
	strb r1, [r4, #14]	@ 0006d89c a173
