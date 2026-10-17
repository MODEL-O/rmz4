@ FUN_0808d7d0  entry 0x0808d7d0  size 302
.thumb
.org 0x8d7d0
FUN_0808d7d0:
	push {r4, r5, r6, lr}	@ 0008d7d0 70b5
.org 0x8d7d2
	sub sp, #12	@ 0008d7d2 83b0
.org 0x8d7d4
	adds r5, r0, #0	@ 0008d7d4 051c
.org 0x8d7d6
	ldrb r4, [r5, #14]	@ 0008d7d6 ac7b
.org 0x8d7d8
	cmp r4, #0	@ 0008d7d8 002c
.org 0x8d7da
	beq.n 0x8d7e2	@ 0008d7da 02d0
.org 0x8d7dc
	cmp r4, #1	@ 0008d7dc 012c
.org 0x8d7de
	beq.n 0x8d846	@ 0008d7de 32d0
.org 0x8d7e0
	b.n 0x8d8f6	@ 0008d7e0 89e0
.org 0x8d7e2
	ldr r1, [pc, #284]	@ 0008d7e2 4749
.org 0x8d7e4
	adds r0, r5, #0	@ 0008d7e4 281c
.org 0x8d7e6
	bl 0x1cf00	@ 0008d7e6 8ff78bfb
.org 0x8d7ea
	adds r0, r5, #0	@ 0008d7ea 281c
.org 0x8d7ec
	adds r0, #140	@ 0008d7ec 8c30
.org 0x8d7ee
	str r4, [r0, #0]	@ 0008d7ee 0460
.org 0x8d7f0
	adds r0, #4	@ 0008d7f0 0430
.org 0x8d7f2
	str r4, [r0, #0]	@ 0008d7f2 0460
.org 0x8d7f4
	adds r0, #4	@ 0008d7f4 0430
.org 0x8d7f6
	strb r4, [r0, #0]	@ 0008d7f6 0470
.org 0x8d7f8
	ldrb r1, [r5, #10]	@ 0008d7f8 a97a
.org 0x8d7fa
	movs r0, #251	@ 0008d7fa fb20
.org 0x8d7fc
	ands r0, r1	@ 0008d7fc 0840
.org 0x8d7fe
	strb r0, [r5, #10]	@ 0008d7fe a872
.org 0x8d800
	movs r3, #0	@ 0008d800 0023
.org 0x8d802
	adds r6, r5, #0	@ 0008d802 2e1c
.org 0x8d804
	adds r6, #180	@ 0008d804 b436
.org 0x8d806
	ldr r0, [r6, #0]	@ 0008d806 3068
.org 0x8d808
	cmp r0, #0	@ 0008d808 0028
.org 0x8d80a
	ble.n 0x8d80e	@ 0008d80a 00dd
.org 0x8d80c
	movs r3, #1	@ 0008d80c 0123
.org 0x8d80e
	ldr r0, [r5, #84]	@ 0008d80e 686d
.org 0x8d810
	ldr r1, [r5, #88]	@ 0008d810 a96d
.org 0x8d812
	str r0, [sp, #4]	@ 0008d812 0190
.org 0x8d814
	str r1, [sp, #8]	@ 0008d814 0291
.org 0x8d816
	ldr r0, [sp, #8]	@ 0008d816 0298
.org 0x8d818
	ldr r1, [pc, #232]	@ 0008d818 3a49
.org 0x8d81a
	adds r0, r0, r1	@ 0008d81a 4018
.org 0x8d81c
	str r0, [sp, #8]	@ 0008d81c 0290
.org 0x8d81e
	movs r2, #128	@ 0008d81e 8022
.org 0x8d820
	lsls r2, r2, #2	@ 0008d820 9200
.org 0x8d822
	movs r0, #0	@ 0008d822 0020
.org 0x8d824
	add r1, sp, #4	@ 0008d824 01a9
.org 0x8d826
	bl 0xd0dc4	@ 0008d826 43f0cdfa
.org 0x8d82a
	movs r1, #0	@ 0008d82a 0021
.org 0x8d82c
	ldr r0, [r6, #0]	@ 0008d82c 3068
.org 0x8d82e
	cmp r0, #0	@ 0008d82e 0028
.org 0x8d830
	ble.n 0x8d834	@ 0008d830 00dd
.org 0x8d832
	movs r1, #1	@ 0008d832 0121
.org 0x8d834
	adds r0, r5, #0	@ 0008d834 281c
.org 0x8d836
	bl 0xd9f1c	@ 0008d836 4cf071fb
.org 0x8d83a
	movs r0, #20	@ 0008d83a 1420
.org 0x8d83c
	strb r0, [r5, #18]	@ 0008d83c a874
.org 0x8d83e
	str r4, [r5, #92]	@ 0008d83e ec65
.org 0x8d840
	ldrb r0, [r5, #14]	@ 0008d840 a87b
.org 0x8d842
	adds r0, #1	@ 0008d842 0130
.org 0x8d844
	strb r0, [r5, #14]	@ 0008d844 a873
.org 0x8d846
	adds r0, r5, #0	@ 0008d846 281c
.org 0x8d848
	bl 0x1cff0	@ 0008d848 8ff7d2fb
.org 0x8d84c
	ldrb r0, [r5, #18]	@ 0008d84c a87c
.org 0x8d84e
	subs r0, #1	@ 0008d84e 0138
.org 0x8d850
	strb r0, [r5, #18]	@ 0008d850 a874
.org 0x8d852
	lsls r0, r0, #24	@ 0008d852 0006
.org 0x8d854
	lsrs r6, r0, #24	@ 0008d854 060e
.org 0x8d856
	cmp r6, #0	@ 0008d856 002e
.org 0x8d858
	bne.n 0x8d8f6	@ 0008d858 4dd1
.org 0x8d85a
	ldrb r1, [r5, #10]	@ 0008d85a a97a
.org 0x8d85c
	movs r0, #254	@ 0008d85c fe20
.org 0x8d85e
	ands r0, r1	@ 0008d85e 0840
.org 0x8d860
	strb r0, [r5, #10]	@ 0008d860 a872
.org 0x8d862
	ldr r0, [r5, #84]	@ 0008d862 686d
.org 0x8d864
	str r0, [sp, #4]	@ 0008d864 0190
.org 0x8d866
	ldr r0, [r5, #88]	@ 0008d866 a86d
.org 0x8d868
	ldr r1, [pc, #152]	@ 0008d868 2649
.org 0x8d86a
	adds r0, r0, r1	@ 0008d86a 4018
.org 0x8d86c
	str r0, [sp, #8]	@ 0008d86c 0290
.org 0x8d86e
	ldr r2, [pc, #152]	@ 0008d86e 264a
.org 0x8d870
	ldr r1, [r2, #0]	@ 0008d870 1168
.org 0x8d872
	ldr r0, [pc, #152]	@ 0008d872 2648
.org 0x8d874
	adds r4, r1, #0	@ 0008d874 0c1c
.org 0x8d876
	muls r4, r0	@ 0008d876 4443
.org 0x8d878
	ldr r0, [pc, #148]	@ 0008d878 2548
.org 0x8d87a
	adds r4, r4, r0	@ 0008d87a 2418
.org 0x8d87c
	lsls r4, r4, #1	@ 0008d87c 6400
.org 0x8d87e
	lsrs r0, r4, #1	@ 0008d87e 6008
.org 0x8d880
	str r0, [r2, #0]	@ 0008d880 1060
.org 0x8d882
	lsrs r4, r4, #17	@ 0008d882 640c
.org 0x8d884
	movs r0, #3	@ 0008d884 0320
.org 0x8d886
	ands r4, r0	@ 0008d886 0440
.org 0x8d888
	ldr r2, [pc, #136]	@ 0008d888 224a
.org 0x8d88a
	str r6, [sp, #0]	@ 0008d88a 0096
.org 0x8d88c
	add r0, sp, #4	@ 0008d88c 01a8
.org 0x8d88e
	movs r1, #0	@ 0008d88e 0021
.org 0x8d890
	adds r3, r4, #0	@ 0008d890 231c
.org 0x8d892
	bl 0xd9fbc	@ 0008d892 4cf093fb
.org 0x8d896
	ldr r2, [pc, #128]	@ 0008d896 204a
.org 0x8d898
	str r6, [sp, #0]	@ 0008d898 0096
.org 0x8d89a
	add r0, sp, #4	@ 0008d89a 01a8
.org 0x8d89c
	movs r1, #0	@ 0008d89c 0021
.org 0x8d89e
	adds r3, r4, #0	@ 0008d89e 231c
.org 0x8d8a0
	bl 0xd9fbc	@ 0008d8a0 4cf08cfb
.org 0x8d8a4
	ldr r2, [pc, #116]	@ 0008d8a4 1d4a
.org 0x8d8a6
	str r6, [sp, #0]	@ 0008d8a6 0096
.org 0x8d8a8
	add r0, sp, #4	@ 0008d8a8 01a8
.org 0x8d8aa
	movs r1, #0	@ 0008d8aa 0021
.org 0x8d8ac
	adds r3, r4, #0	@ 0008d8ac 231c
.org 0x8d8ae
	bl 0xd9fbc	@ 0008d8ae 4cf085fb
.org 0x8d8b2
	movs r0, #1	@ 0008d8b2 0120
.org 0x8d8b4
	add r1, sp, #4	@ 0008d8b4 01a9
.org 0x8d8b6
	bl 0xd0c88	@ 0008d8b6 43f0e7f9
.org 0x8d8ba
	movs r0, #42	@ 0008d8ba 2a20
.org 0x8d8bc
	bl 0x2b10	@ 0008d8bc 75f728f9
.org 0x8d8c0
	adds r4, r5, #0	@ 0008d8c0 2c1c
.org 0x8d8c2
	adds r4, #84	@ 0008d8c2 5434
.org 0x8d8c4
	movs r0, #3	@ 0008d8c4 0320
.org 0x8d8c6
	movs r1, #48	@ 0008d8c6 3021
.org 0x8d8c8
	adds r2, r4, #0	@ 0008d8c8 221c
.org 0x8d8ca
	bl 0x2ab88	@ 0008d8ca 9df75df9
.org 0x8d8ce
	ldr r2, [pc, #80]	@ 0008d8ce 144a
.org 0x8d8d0
	ldrh r1, [r2, #12]	@ 0008d8d0 9189
.org 0x8d8d2
	ldr r0, [pc, #80]	@ 0008d8d2 1448
.org 0x8d8d4
	cmp r1, r0	@ 0008d8d4 8142
.org 0x8d8d6
	bhi.n 0x8d8dc	@ 0008d8d6 01d8
.org 0x8d8d8
	adds r0, r1, #1	@ 0008d8d8 481c
.org 0x8d8da
	strh r0, [r2, #12]	@ 0008d8da 9081
.org 0x8d8dc
	adds r0, r5, #0	@ 0008d8dc 281c
.org 0x8d8de
	adds r1, r4, #0	@ 0008d8de 211c
.org 0x8d8e0
	bl 0x2abe0	@ 0008d8e0 9df77ef9
.org 0x8d8e4
	ldr r1, [pc, #64]	@ 0008d8e4 1049
.org 0x8d8e6
	ldrb r0, [r5, #9]	@ 0008d8e6 687a
.org 0x8d8e8
	lsls r0, r0, #2	@ 0008d8e8 8000
.org 0x8d8ea
	adds r0, r0, r1	@ 0008d8ea 4018
.org 0x8d8ec
	movs r1, #4	@ 0008d8ec 0421
.org 0x8d8ee
	str r1, [r5, #12]	@ 0008d8ee e960
.org 0x8d8f0
	ldr r0, [r0, #0]	@ 0008d8f0 0068
.org 0x8d8f2
	ldr r0, [r0, #16]	@ 0008d8f2 0069
.org 0x8d8f4
	str r0, [r5, #20]	@ 0008d8f4 6861
.org 0x8d8f6
	add sp, #12	@ 0008d8f6 03b0
.org 0x8d8f8
	pop {r4, r5, r6}	@ 0008d8f8 70bc
.org 0x8d8fa
	pop {r0}	@ 0008d8fa 01bc
.org 0x8d8fc
	bx r0	@ 0008d8fc 0047
