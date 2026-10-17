@ FUN_0811a7d8  entry 0x0811a7d8  size 422
.thumb
.org 0x11a7d8
FUN_0811a7d8:
	push {r4, r5, r6, r7, lr}	@ 0011a7d8 f0b5
.org 0x11a7da
	mov r7, r9	@ 0011a7da 4f46
.org 0x11a7dc
	mov r6, r8	@ 0011a7dc 4646
.org 0x11a7de
	push {r6, r7}	@ 0011a7de c0b4
.org 0x11a7e0
	adds r5, r0, #0	@ 0011a7e0 051c
.org 0x11a7e2
	ldr r1, [pc, #80]	@ 0011a7e2 1449
.org 0x11a7e4
	adds r0, r5, r1	@ 0011a7e4 6818
.org 0x11a7e6
	ldr r7, [r0, #0]	@ 0011a7e6 0768
.org 0x11a7e8
	ldr r2, [pc, #76]	@ 0011a7e8 134a
.org 0x11a7ea
	adds r4, r5, r2	@ 0011a7ea ac18
.org 0x11a7ec
	ldrb r1, [r4, #0]	@ 0011a7ec 2178
.org 0x11a7ee
	cmp r1, #0	@ 0011a7ee 0029
.org 0x11a7f0
	bne.n 0x11a802	@ 0011a7f0 07d1
.org 0x11a7f2
	movs r3, #221	@ 0011a7f2 dd23
.org 0x11a7f4
	lsls r3, r3, #4	@ 0011a7f4 1b01
.org 0x11a7f6
	adds r0, r5, r3	@ 0011a7f6 e818
.org 0x11a7f8
	strb r1, [r0, #3]	@ 0011a7f8 c170
.org 0x11a7fa
	strb r1, [r0, #11]	@ 0011a7fa c172
.org 0x11a7fc
	ldrb r0, [r4, #0]	@ 0011a7fc 2078
.org 0x11a7fe
	adds r0, #1	@ 0011a7fe 0130
.org 0x11a800
	strb r0, [r4, #0]	@ 0011a800 2070
.org 0x11a802
	movs r0, #21	@ 0011a802 1520
.org 0x11a804
	bl 0x25d8	@ 0011a804 e7f6e8fe
.org 0x11a808
	adds r0, r5, #0	@ 0011a808 281c
.org 0x11a80a
	bl 0x11af28	@ 0011a80a 00f08dfb
.org 0x11a80e
	ldr r2, [pc, #44]	@ 0011a80e 0b4a
.org 0x11a810
	ldrh r1, [r2, #4]	@ 0011a810 9188
.org 0x11a812
	movs r0, #2	@ 0011a812 0220
.org 0x11a814
	mov r8, r0	@ 0011a814 8046
.org 0x11a816
	movs r0, #2	@ 0011a816 0220
.org 0x11a818
	ands r0, r1	@ 0011a818 0840
.org 0x11a81a
	lsls r0, r0, #16	@ 0011a81a 0004
.org 0x11a81c
	lsrs r6, r0, #16	@ 0011a81c 060c
.org 0x11a81e
	cmp r6, #0	@ 0011a81e 002e
.org 0x11a820
	beq.n 0x11a840	@ 0011a820 0ed0
.org 0x11a822
	movs r0, #3	@ 0011a822 0320
.org 0x11a824
	bl 0x2b10	@ 0011a824 e8f674f9
.org 0x11a828
	movs r0, #0	@ 0011a828 0020
.org 0x11a82a
	mov r1, r8	@ 0011a82a 4146
.org 0x11a82c
	strb r1, [r5, #3]	@ 0011a82c e970
.org 0x11a82e
	strb r0, [r4, #0]	@ 0011a82e 2070
.org 0x11a830
	b.n 0x11a9a6	@ 0011a830 b9e0
.org 0x11a832
	.byte 0x00	@ 0011a832 data
.org 0x11a833
	.byte 0x00	@ 0011a833 data
.org 0x11a834
	.byte 0xa8,0x63,0x00,0x00	@ 0011a834 data
.org 0x11a838
	.byte 0xf7,0x0d,0x00,0x00	@ 0011a838 data
.org 0x11a83c
	.byte 0x60,0x07,0x00,0x02	@ 0011a83c data
.org 0x11a840
	movs r0, #1	@ 0011a840 0120
.org 0x11a842
	ands r0, r1	@ 0011a842 0840
.org 0x11a844
	cmp r0, #0	@ 0011a844 0028
.org 0x11a846
	beq.n 0x11a86e	@ 0011a846 12d0
.org 0x11a848
	movs r0, #2	@ 0011a848 0220
.org 0x11a84a
	bl 0x2b10	@ 0011a84a e8f661f9
.org 0x11a84e
	adds r2, r7, #0	@ 0011a84e 3a1c
.org 0x11a850
	adds r2, #180	@ 0011a850 b432
.org 0x11a852
	movs r3, #221	@ 0011a852 dd23
.org 0x11a854
	lsls r3, r3, #4	@ 0011a854 1b01
.org 0x11a856
	adds r0, r5, r3	@ 0011a856 e818
.org 0x11a858
	ldrb r0, [r0, #3]	@ 0011a858 c078
.org 0x11a85a
	adds r3, #4	@ 0011a85a 0433
.org 0x11a85c
	adds r1, r5, r3	@ 0011a85c e918
.org 0x11a85e
	adds r0, r1, r0	@ 0011a85e 0818
.org 0x11a860
	ldrb r0, [r0, #0]	@ 0011a860 0078
.org 0x11a862
	strb r0, [r2, #17]	@ 0011a862 5074
.org 0x11a864
	mov r0, r8	@ 0011a864 4046
.org 0x11a866
	strb r0, [r5, #3]	@ 0011a866 e870
.org 0x11a868
	strb r6, [r4, #0]	@ 0011a868 2670
.org 0x11a86a
	adds r6, r1, #0	@ 0011a86a 0e1c
.org 0x11a86c
	b.n 0x11a8fa	@ 0011a86c 45e0
.org 0x11a86e
	ldrh r1, [r2, #6]	@ 0011a86e d188
.org 0x11a870
	movs r0, #64	@ 0011a870 4020
.org 0x11a872
	ands r0, r1	@ 0011a872 0840
.org 0x11a874
	cmp r0, #0	@ 0011a874 0028
.org 0x11a876
	beq.n 0x11a8b8	@ 0011a876 1fd0
.org 0x11a878
	movs r1, #221	@ 0011a878 dd21
.org 0x11a87a
	lsls r1, r1, #4	@ 0011a87a 0901
.org 0x11a87c
	adds r4, r5, r1	@ 0011a87c 6c18
.org 0x11a87e
	ldrb r0, [r4, #3]	@ 0011a87e e078
.org 0x11a880
	cmp r0, #0	@ 0011a880 0028
.org 0x11a882
	beq.n 0x11a89c	@ 0011a882 0bd0
.org 0x11a884
	movs r0, #1	@ 0011a884 0120
.org 0x11a886
	bl 0x2b10	@ 0011a886 e8f643f9
.org 0x11a88a
	ldrb r0, [r4, #3]	@ 0011a88a e078
.org 0x11a88c
	subs r0, #1	@ 0011a88c 0138
.org 0x11a88e
	strb r0, [r4, #3]	@ 0011a88e e070
.org 0x11a890
	ldr r2, [pc, #4]	@ 0011a890 014a
.org 0x11a892
	adds r6, r5, r2	@ 0011a892 ae18
.org 0x11a894
	b.n 0x11a8fa	@ 0011a894 31e0
.org 0x11a896
	.byte 0x00	@ 0011a896 data
.org 0x11a897
	.byte 0x00	@ 0011a897 data
.org 0x11a898
	.byte 0xd4,0x0d,0x00,0x00	@ 0011a898 data
.org 0x11a89c
	ldrb r0, [r4, #12]	@ 0011a89c 207b
.org 0x11a89e
	ldr r3, [pc, #20]	@ 0011a89e 054b
.org 0x11a8a0
	adds r6, r5, r3	@ 0011a8a0 ee18
.org 0x11a8a2
	cmp r0, #0	@ 0011a8a2 0028
.org 0x11a8a4
	beq.n 0x11a8fa	@ 0011a8a4 29d0
.org 0x11a8a6
	movs r0, #1	@ 0011a8a6 0120
.org 0x11a8a8
	bl 0x2b10	@ 0011a8a8 e8f632f9
.org 0x11a8ac
	ldrb r0, [r4, #11]	@ 0011a8ac e07a
.org 0x11a8ae
	subs r0, #1	@ 0011a8ae 0138
.org 0x11a8b0
	b.n 0x11a8f8	@ 0011a8b0 22e0
.org 0x11a8b2
	.byte 0x00	@ 0011a8b2 data
.org 0x11a8b3
	.byte 0x00	@ 0011a8b3 data
.org 0x11a8b4
	.byte 0xd4,0x0d,0x00,0x00	@ 0011a8b4 data
.org 0x11a8b8
	movs r0, #128	@ 0011a8b8 8020
.org 0x11a8ba
	ands r0, r1	@ 0011a8ba 0840
.org 0x11a8bc
	ldr r1, [pc, #36]	@ 0011a8bc 0949
.org 0x11a8be
	adds r6, r5, r1	@ 0011a8be 6e18
.org 0x11a8c0
	cmp r0, #0	@ 0011a8c0 0028
.org 0x11a8c2
	beq.n 0x11a8fa	@ 0011a8c2 1ad0
.org 0x11a8c4
	movs r2, #221	@ 0011a8c4 dd22
.org 0x11a8c6
	lsls r2, r2, #4	@ 0011a8c6 1201
.org 0x11a8c8
	adds r4, r5, r2	@ 0011a8c8 ac18
.org 0x11a8ca
	ldrb r0, [r4, #3]	@ 0011a8ca e078
.org 0x11a8cc
	adds r0, #1	@ 0011a8cc 0130
.org 0x11a8ce
	ldrb r3, [r4, #10]	@ 0011a8ce a37a
.org 0x11a8d0
	cmp r0, r3	@ 0011a8d0 9842
.org 0x11a8d2
	bge.n 0x11a8e8	@ 0011a8d2 09da
.org 0x11a8d4
	movs r0, #1	@ 0011a8d4 0120
.org 0x11a8d6
	bl 0x2b10	@ 0011a8d6 e8f61bf9
.org 0x11a8da
	ldrb r0, [r4, #3]	@ 0011a8da e078
.org 0x11a8dc
	adds r0, #1	@ 0011a8dc 0130
.org 0x11a8de
	strb r0, [r4, #3]	@ 0011a8de e070
.org 0x11a8e0
	b.n 0x11a8fa	@ 0011a8e0 0be0
.org 0x11a8e2
	.byte 0x00	@ 0011a8e2 data
.org 0x11a8e3
	.byte 0x00	@ 0011a8e3 data
.org 0x11a8e4
	.byte 0xd4,0x0d,0x00,0x00	@ 0011a8e4 data
.org 0x11a8e8
	ldrb r0, [r4, #13]	@ 0011a8e8 607b
.org 0x11a8ea
	cmp r0, #0	@ 0011a8ea 0028
.org 0x11a8ec
	beq.n 0x11a8fa	@ 0011a8ec 05d0
.org 0x11a8ee
	movs r0, #1	@ 0011a8ee 0120
.org 0x11a8f0
	bl 0x2b10	@ 0011a8f0 e8f60ef9
.org 0x11a8f4
	ldrb r0, [r4, #11]	@ 0011a8f4 e07a
.org 0x11a8f6
	adds r0, #1	@ 0011a8f6 0130
.org 0x11a8f8
	strb r0, [r4, #11]	@ 0011a8f8 e072
.org 0x11a8fa
	adds r0, r5, #0	@ 0011a8fa 281c
.org 0x11a8fc
	bl 0x11af28	@ 0011a8fc 00f014fb
.org 0x11a900
	movs r4, #0	@ 0011a900 0024
.org 0x11a902
	ldr r0, [pc, #12]	@ 0011a902 0348
.org 0x11a904
	mov r8, r0	@ 0011a904 8046
.org 0x11a906
	ldr r1, [pc, #12]	@ 0011a906 0349
.org 0x11a908
	add r1, r8	@ 0011a908 4144
.org 0x11a90a
	mov r9, r1	@ 0011a90a 8946
.org 0x11a90c
	ldr r7, [pc, #8]	@ 0011a90c 024f
.org 0x11a90e
	b.n 0x11a93c	@ 0011a90e 15e0
.org 0x11a910
	.byte 0xf8,0xcf,0x86,0x08	@ 0011a910 data
.org 0x11a914
	.byte 0xae,0x03,0x00,0x00	@ 0011a914 data
.org 0x11a918
	.byte 0x5f,0x0e,0x01,0x09	@ 0011a918 data
.org 0x11a91c
	ldrb r0, [r1, #0]	@ 0011a91c 0878
.org 0x11a91e
	movs r2, #200	@ 0011a91e c822
.org 0x11a920
	lsls r2, r2, #1	@ 0011a920 5200
.org 0x11a922
	adds r0, r0, r2	@ 0011a922 8018
.org 0x11a924
	lsls r0, r0, #1	@ 0011a924 4000
.org 0x11a926
	add r0, r8	@ 0011a926 4044
.org 0x11a928
	ldrh r0, [r0, #0]	@ 0011a928 0088
.org 0x11a92a
	adds r0, r0, r7	@ 0011a92a c019
.org 0x11a92c
	lsls r2, r4, #1	@ 0011a92c 6200
.org 0x11a92e
	adds r2, #2	@ 0011a92e 0232
.org 0x11a930
	movs r1, #3	@ 0011a930 0321
.org 0x11a932
	bl 0x10d85c	@ 0011a932 f2f793ff
.org 0x11a936
	adds r0, r4, #1	@ 0011a936 601c
.org 0x11a938
	lsls r0, r0, #24	@ 0011a938 0006
.org 0x11a93a
	lsrs r4, r0, #24	@ 0011a93a 040e
.org 0x11a93c
	cmp r4, #5	@ 0011a93c 052c
.org 0x11a93e
	bhi.n 0x11a95c	@ 0011a93e 0dd8
.org 0x11a940
	adds r1, r6, r4	@ 0011a940 3119
.org 0x11a942
	ldrb r0, [r1, #0]	@ 0011a942 0878
.org 0x11a944
	cmp r0, #255	@ 0011a944 ff28
.org 0x11a946
	bne.n 0x11a91c	@ 0011a946 e9d1
.org 0x11a948
	cmp r4, #0	@ 0011a948 002c
.org 0x11a94a
	bne.n 0x11a95c	@ 0011a94a 07d1
.org 0x11a94c
	mov r3, r9	@ 0011a94c 4b46
.org 0x11a94e
	ldrh r0, [r3, #0]	@ 0011a94e 1888
.org 0x11a950
	adds r0, r0, r7	@ 0011a950 c019
.org 0x11a952
	movs r1, #3	@ 0011a952 0321
.org 0x11a954
	movs r2, #2	@ 0011a954 0222
.org 0x11a956
	bl 0x10d85c	@ 0011a956 f2f781ff
.org 0x11a95a
	b.n 0x11a936	@ 0011a95a ece7
.org 0x11a95c
	movs r1, #221	@ 0011a95c dd21
.org 0x11a95e
	lsls r1, r1, #4	@ 0011a95e 0901
.org 0x11a960
	adds r0, r5, r1	@ 0011a960 6818
.org 0x11a962
	ldrb r0, [r0, #3]	@ 0011a962 c078
.org 0x11a964
	adds r2, r6, r0	@ 0011a964 3218
.org 0x11a966
	ldrb r0, [r2, #0]	@ 0011a966 1078
.org 0x11a968
	cmp r0, #255	@ 0011a968 ff28
.org 0x11a96a
	bne.n 0x11a98c	@ 0011a96a 0fd1
.org 0x11a96c
	ldr r0, [pc, #20]	@ 0011a96c 0548
.org 0x11a96e
	movs r2, #237	@ 0011a96e ed22
.org 0x11a970
	lsls r2, r2, #2	@ 0011a970 9200
.org 0x11a972
	adds r0, r0, r2	@ 0011a972 8018
.org 0x11a974
	ldrh r0, [r0, #0]	@ 0011a974 0088
.org 0x11a976
	ldr r1, [pc, #16]	@ 0011a976 0449
.org 0x11a978
	adds r0, r0, r1	@ 0011a978 4018
.org 0x11a97a
	movs r1, #1	@ 0011a97a 0121
.org 0x11a97c
	movs r2, #18	@ 0011a97c 1222
