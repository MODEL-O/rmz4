@ FUN_0808b85c  entry 0x0808b85c  size 182
.thumb
.org 0x8b85c
FUN_0808b85c:
	push {r4, r5, r6, r7, lr}	@ 0008b85c f0b5
.org 0x8b85e
	sub sp, #8	@ 0008b85e 82b0
.org 0x8b860
	adds r7, r0, #0	@ 0008b860 071c
.org 0x8b862
	movs r0, #42	@ 0008b862 2a20
.org 0x8b864
	bl 0x2b10	@ 0008b864 77f754f9
.org 0x8b868
	ldrb r1, [r7, #10]	@ 0008b868 b97a
.org 0x8b86a
	movs r0, #254	@ 0008b86a fe20
.org 0x8b86c
	ands r0, r1	@ 0008b86c 0840
.org 0x8b86e
	movs r1, #0	@ 0008b86e 0021
.org 0x8b870
	strb r0, [r7, #10]	@ 0008b870 b872
.org 0x8b872
	adds r0, r7, #0	@ 0008b872 381c
.org 0x8b874
	adds r0, #140	@ 0008b874 8c30
.org 0x8b876
	str r1, [r0, #0]	@ 0008b876 0160
.org 0x8b878
	adds r0, #4	@ 0008b878 0430
.org 0x8b87a
	str r1, [r0, #0]	@ 0008b87a 0160
.org 0x8b87c
	adds r0, #4	@ 0008b87c 0430
.org 0x8b87e
	strb r1, [r0, #0]	@ 0008b87e 0170
.org 0x8b880
	ldrb r1, [r7, #10]	@ 0008b880 b97a
.org 0x8b882
	movs r0, #251	@ 0008b882 fb20
.org 0x8b884
	ands r0, r1	@ 0008b884 0840
.org 0x8b886
	strb r0, [r7, #10]	@ 0008b886 b872
.org 0x8b888
	ldr r6, [pc, #136]	@ 0008b888 224e
.org 0x8b88a
	ldr r0, [r6, #0]	@ 0008b88a 3068
.org 0x8b88c
	ldr r5, [pc, #136]	@ 0008b88c 224d
.org 0x8b88e
	muls r0, r5	@ 0008b88e 6843
.org 0x8b890
	ldr r2, [pc, #136]	@ 0008b890 224a
.org 0x8b892
	adds r0, r0, r2	@ 0008b892 8018
.org 0x8b894
	lsls r0, r0, #1	@ 0008b894 4000
.org 0x8b896
	lsrs r4, r0, #1	@ 0008b896 4408
.org 0x8b898
	lsrs r0, r0, #17	@ 0008b898 400c
.org 0x8b89a
	movs r3, #7	@ 0008b89a 0723
.org 0x8b89c
	ands r0, r3	@ 0008b89c 1840
.org 0x8b89e
	subs r0, #3	@ 0008b89e 0338
.org 0x8b8a0
	lsls r0, r0, #8	@ 0008b8a0 0002
.org 0x8b8a2
	ldr r1, [r7, #84]	@ 0008b8a2 796d
.org 0x8b8a4
	adds r1, r1, r0	@ 0008b8a4 0918
.org 0x8b8a6
	str r1, [sp, #0]	@ 0008b8a6 0091
.org 0x8b8a8
	adds r0, r4, #0	@ 0008b8a8 201c
.org 0x8b8aa
	muls r0, r5	@ 0008b8aa 6843
.org 0x8b8ac
	adds r0, r0, r2	@ 0008b8ac 8018
.org 0x8b8ae
	lsls r0, r0, #1	@ 0008b8ae 4000
.org 0x8b8b0
	lsrs r1, r0, #1	@ 0008b8b0 4108
.org 0x8b8b2
	str r1, [r6, #0]	@ 0008b8b2 3160
.org 0x8b8b4
	lsrs r0, r0, #17	@ 0008b8b4 400c
.org 0x8b8b6
	ands r0, r3	@ 0008b8b6 1840
.org 0x8b8b8
	subs r0, #3	@ 0008b8b8 0338
.org 0x8b8ba
	lsls r0, r0, #8	@ 0008b8ba 0002
.org 0x8b8bc
	ldr r1, [r7, #88]	@ 0008b8bc b96d
.org 0x8b8be
	adds r1, r1, r0	@ 0008b8be 0918
.org 0x8b8c0
	ldr r0, [pc, #92]	@ 0008b8c0 1748
.org 0x8b8c2
	adds r1, r1, r0	@ 0008b8c2 0918
.org 0x8b8c4
	str r1, [sp, #4]	@ 0008b8c4 0191
.org 0x8b8c6
	movs r0, #1	@ 0008b8c6 0120
.org 0x8b8c8
	mov r1, sp	@ 0008b8c8 6946
.org 0x8b8ca
	bl 0xd0c88	@ 0008b8ca 45f0ddf9
.org 0x8b8ce
	adds r0, r7, #0	@ 0008b8ce 381c
.org 0x8b8d0
	bl 0x8bd6c	@ 0008b8d0 00f04cfa
.org 0x8b8d4
	adds r4, r7, #0	@ 0008b8d4 3c1c
.org 0x8b8d6
	adds r4, #84	@ 0008b8d6 5434
.org 0x8b8d8
	movs r0, #3	@ 0008b8d8 0320
.org 0x8b8da
	movs r1, #9	@ 0008b8da 0921
.org 0x8b8dc
	adds r2, r4, #0	@ 0008b8dc 221c
.org 0x8b8de
	bl 0x2ab88	@ 0008b8de 9ff753f9
.org 0x8b8e2
	ldr r2, [pc, #64]	@ 0008b8e2 104a
.org 0x8b8e4
	ldrh r1, [r2, #12]	@ 0008b8e4 9189
.org 0x8b8e6
	ldr r0, [pc, #64]	@ 0008b8e6 1048
.org 0x8b8e8
	cmp r1, r0	@ 0008b8e8 8142
.org 0x8b8ea
	bhi.n 0x8b8f0	@ 0008b8ea 01d8
.org 0x8b8ec
	adds r0, r1, #1	@ 0008b8ec 481c
.org 0x8b8ee
	strh r0, [r2, #12]	@ 0008b8ee 9081
.org 0x8b8f0
	adds r0, r7, #0	@ 0008b8f0 381c
.org 0x8b8f2
	adds r1, r4, #0	@ 0008b8f2 211c
.org 0x8b8f4
	bl 0x2abe0	@ 0008b8f4 9ff774f9
.org 0x8b8f8
	ldr r1, [pc, #48]	@ 0008b8f8 0c49
.org 0x8b8fa
	ldrb r0, [r7, #9]	@ 0008b8fa 787a
.org 0x8b8fc
	lsls r0, r0, #2	@ 0008b8fc 8000
.org 0x8b8fe
	adds r0, r0, r1	@ 0008b8fe 4018
.org 0x8b900
	movs r1, #4	@ 0008b900 0421
.org 0x8b902
	str r1, [r7, #12]	@ 0008b902 f960
.org 0x8b904
	ldr r0, [r0, #0]	@ 0008b904 0068
.org 0x8b906
	ldr r0, [r0, #16]	@ 0008b906 0069
.org 0x8b908
	str r0, [r7, #20]	@ 0008b908 7861
.org 0x8b90a
	add sp, #8	@ 0008b90a 02b0
.org 0x8b90c
	pop {r4, r5, r6, r7}	@ 0008b90c f0bc
.org 0x8b90e
	pop {r0}	@ 0008b90e 01bc
.org 0x8b910
	bx r0	@ 0008b910 0047
