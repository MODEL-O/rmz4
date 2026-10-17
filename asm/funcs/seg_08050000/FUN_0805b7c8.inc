@ FUN_0805b7c8  entry 0x0805b7c8  size 332
.thumb
.org 0x5b7c8
FUN_0805b7c8:
	push {r4, r5, r6, lr}	@ 0005b7c8 70b5
.org 0x5b7ca
	adds r4, r0, #0	@ 0005b7ca 041c
.org 0x5b7cc
	ldrb r0, [r4, #15]	@ 0005b7cc e07b
.org 0x5b7ce
	cmp r0, #1	@ 0005b7ce 0128
.org 0x5b7d0
	beq.n 0x5b8ca	@ 0005b7d0 7bd0
.org 0x5b7d2
	cmp r0, #1	@ 0005b7d2 0128
.org 0x5b7d4
	bgt.n 0x5b7dc	@ 0005b7d4 02dc
.org 0x5b7d6
	cmp r0, #0	@ 0005b7d6 0028
.org 0x5b7d8
	beq.n 0x5b7e4	@ 0005b7d8 04d0
.org 0x5b7da
	b.n 0x5b91e	@ 0005b7da a0e0
.org 0x5b7dc
	cmp r0, #2	@ 0005b7dc 0228
.org 0x5b7de
	bne.n 0x5b7e2	@ 0005b7de 00d1
.org 0x5b7e0
	b.n 0x5b8f2	@ 0005b7e0 87e0
.org 0x5b7e2
	b.n 0x5b91e	@ 0005b7e2 9ce0
.org 0x5b7e4
	adds r0, r4, #0	@ 0005b7e4 201c
.org 0x5b7e6
	adds r0, #116	@ 0005b7e6 7430
.org 0x5b7e8
	ldr r1, [pc, #72]	@ 0005b7e8 1249
.org 0x5b7ea
	bl 0x5784	@ 0005b7ea a9f7cbff
.org 0x5b7ee
	ldrb r0, [r4, #30]	@ 0005b7ee a07f
.org 0x5b7f0
	lsls r0, r0, #8	@ 0005b7f0 0002
.org 0x5b7f2
	adds r1, r4, #0	@ 0005b7f2 211c
.org 0x5b7f4
	adds r1, #112	@ 0005b7f4 7031
.org 0x5b7f6
	ldrb r1, [r1, #0]	@ 0005b7f6 0978
.org 0x5b7f8
	orrs r0, r1	@ 0005b7f8 0843
.org 0x5b7fa
	ldr r1, [pc, #60]	@ 0005b7fa 0f49
.org 0x5b7fc
	cmp r0, r1	@ 0005b7fc 8842
.org 0x5b7fe
	beq.n 0x5b80e	@ 0005b7fe 06d0
.org 0x5b800
	adds r0, r4, #0	@ 0005b800 201c
.org 0x5b802
	bl 0x1cf00	@ 0005b802 c1f77dfb
.org 0x5b806
	adds r1, r4, #0	@ 0005b806 211c
.org 0x5b808
	adds r1, #189	@ 0005b808 bd31
.org 0x5b80a
	movs r0, #1	@ 0005b80a 0120
.org 0x5b80c
	strb r0, [r1, #0]	@ 0005b80c 0870
.org 0x5b80e
	adds r0, r4, #0	@ 0005b80e 201c
.org 0x5b810
	adds r0, #190	@ 0005b810 be30
.org 0x5b812
	ldrb r1, [r0, #0]	@ 0005b812 0178
.org 0x5b814
	adds r6, r0, #0	@ 0005b814 061c
.org 0x5b816
	cmp r1, #255	@ 0005b816 ff29
.org 0x5b818
	bne.n 0x5b83c	@ 0005b818 10d1
.org 0x5b81a
	adds r0, r4, #0	@ 0005b81a 201c
.org 0x5b81c
	bl 0x5c3a8	@ 0005b81c 00f0c4fd
.org 0x5b820
	movs r2, #0	@ 0005b820 0022
.org 0x5b822
	movs r1, #240	@ 0005b822 f021
.org 0x5b824
	lsls r1, r1, #7	@ 0005b824 c901
.org 0x5b826
	adds r0, r0, r1	@ 0005b826 4018
.org 0x5b828
	ldr r1, [r4, #84]	@ 0005b828 616d
.org 0x5b82a
	cmp r1, r0	@ 0005b82a 8142
.org 0x5b82c
	bge.n 0x5b830	@ 0005b82c 00da
.org 0x5b82e
	movs r2, #1	@ 0005b82e 0122
.org 0x5b830
	adds r5, r2, #0	@ 0005b830 151c
.org 0x5b832
	b.n 0x5b83e	@ 0005b832 04e0
.org 0x5b834
	.byte 0xe4,0x88,0x85,0x08	@ 0005b834 data
.org 0x5b838
	.byte 0x01,0xa3,0x00,0x00	@ 0005b838 data
.org 0x5b83c
	ldrb r5, [r6, #0]	@ 0005b83c 3578
.org 0x5b83e
	movs r0, #255	@ 0005b83e ff20
.org 0x5b840
	strb r0, [r6, #0]	@ 0005b840 3070
.org 0x5b842
	movs r2, #1	@ 0005b842 0122
.org 0x5b844
	adds r1, r5, #0	@ 0005b844 291c
.org 0x5b846
	ands r1, r2	@ 0005b846 1140
.org 0x5b848
	adds r0, r4, #0	@ 0005b848 201c
.org 0x5b84a
	adds r0, #76	@ 0005b84a 4c30
.org 0x5b84c
	strb r1, [r0, #0]	@ 0005b84c 0170
.org 0x5b84e
	movs r0, #74	@ 0005b84e 4a20
.org 0x5b850
	adds r0, r0, r4	@ 0005b850 0019
.org 0x5b852
	mov ip, r0	@ 0005b852 8446
.org 0x5b854
	lsls r1, r1, #4	@ 0005b854 0901
.org 0x5b856
	ldrb r3, [r0, #0]	@ 0005b856 0378
.org 0x5b858
	movs r0, #17	@ 0005b858 1120
.org 0x5b85a
	negs r0, r0	@ 0005b85a 4042
.org 0x5b85c
	ands r0, r3	@ 0005b85c 1840
.org 0x5b85e
	orrs r0, r1	@ 0005b85e 0843
.org 0x5b860
	mov r1, ip	@ 0005b860 6146
.org 0x5b862
	strb r0, [r1, #0]	@ 0005b862 0870
.org 0x5b864
	ands r2, r5	@ 0005b864 2a40
.org 0x5b866
	cmp r2, #0	@ 0005b866 002a
.org 0x5b868
	beq.n 0x5b872	@ 0005b868 03d0
.org 0x5b86a
	ldrb r0, [r4, #10]	@ 0005b86a a07a
.org 0x5b86c
	movs r1, #16	@ 0005b86c 1021
.org 0x5b86e
	orrs r0, r1	@ 0005b86e 0843
.org 0x5b870
	b.n 0x5b878	@ 0005b870 02e0
.org 0x5b872
	ldrb r1, [r4, #10]	@ 0005b872 a17a
.org 0x5b874
	movs r0, #239	@ 0005b874 ef20
.org 0x5b876
	ands r0, r1	@ 0005b876 0840
.org 0x5b878
	strb r0, [r4, #10]	@ 0005b878 a072
.org 0x5b87a
	cmp r5, #0	@ 0005b87a 002d
.org 0x5b87c
	bne.n 0x5b88c	@ 0005b87c 06d1
.org 0x5b87e
	adds r0, r4, #0	@ 0005b87e 201c
.org 0x5b880
	bl 0x5c3a8	@ 0005b880 00f092fd
.org 0x5b884
	movs r2, #208	@ 0005b884 d022
.org 0x5b886
	lsls r2, r2, #8	@ 0005b886 1202
.org 0x5b888
	adds r0, r0, r2	@ 0005b888 8018
.org 0x5b88a
	b.n 0x5b898	@ 0005b88a 05e0
.org 0x5b88c
	adds r0, r4, #0	@ 0005b88c 201c
.org 0x5b88e
	bl 0x5c3a8	@ 0005b88e 00f08bfd
.org 0x5b892
	movs r1, #128	@ 0005b892 8021
.org 0x5b894
	lsls r1, r1, #6	@ 0005b894 8901
.org 0x5b896
	adds r0, r0, r1	@ 0005b896 4018
.org 0x5b898
	str r0, [r4, #84]	@ 0005b898 6065
.org 0x5b89a
	adds r1, r4, #0	@ 0005b89a 211c
.org 0x5b89c
	adds r1, #180	@ 0005b89c b431
.org 0x5b89e
	ldr r0, [r1, #0]	@ 0005b89e 0868
.org 0x5b8a0
	ldr r2, [pc, #64]	@ 0005b8a0 104a
.org 0x5b8a2
	adds r0, r0, r2	@ 0005b8a2 8018
.org 0x5b8a4
	str r0, [r4, #88]	@ 0005b8a4 a065
.org 0x5b8a6
	movs r0, #128	@ 0005b8a6 8020
.org 0x5b8a8
	lsls r0, r0, #3	@ 0005b8a8 c000
.org 0x5b8aa
	str r0, [r4, #96]	@ 0005b8aa 2066
.org 0x5b8ac
	movs r0, #32	@ 0005b8ac 2020
.org 0x5b8ae
	negs r0, r0	@ 0005b8ae 4042
.org 0x5b8b0
	str r0, [r4, #104]	@ 0005b8b0 a066
.org 0x5b8b2
	ldr r0, [r1, #0]	@ 0005b8b2 0868
.org 0x5b8b4
	ldr r1, [pc, #48]	@ 0005b8b4 0c49
.org 0x5b8b6
	adds r0, r0, r1	@ 0005b8b6 4018
.org 0x5b8b8
	str r0, [r4, #92]	@ 0005b8b8 e065
.org 0x5b8ba
	movs r1, #33	@ 0005b8ba 2121
.org 0x5b8bc
	movs r0, #132	@ 0005b8bc 8420
.org 0x5b8be
	lsls r0, r0, #7	@ 0005b8be c001
.org 0x5b8c0
	str r0, [r4, #100]	@ 0005b8c0 6066
.org 0x5b8c2
	strb r1, [r4, #18]	@ 0005b8c2 a174
.org 0x5b8c4
	ldrb r0, [r4, #15]	@ 0005b8c4 e07b
.org 0x5b8c6
	adds r0, #1	@ 0005b8c6 0130
.org 0x5b8c8
	strb r0, [r4, #15]	@ 0005b8c8 e073
.org 0x5b8ca
	adds r0, r4, #0	@ 0005b8ca 201c
.org 0x5b8cc
	bl 0x1cff0	@ 0005b8cc c1f790fb
.org 0x5b8d0
	ldr r0, [r4, #92]	@ 0005b8d0 e06d
.org 0x5b8d2
	ldr r2, [r4, #88]	@ 0005b8d2 a26d
.org 0x5b8d4
	subs r0, r0, r2	@ 0005b8d4 801a
.org 0x5b8d6
	ldr r1, [r4, #100]	@ 0005b8d6 616e
.org 0x5b8d8
	cmp r0, r1	@ 0005b8d8 8842
.org 0x5b8da
	ble.n 0x5b8ec	@ 0005b8da 07dd
.org 0x5b8dc
	ldr r0, [r4, #96]	@ 0005b8dc 206e
.org 0x5b8de
	adds r0, r2, r0	@ 0005b8de 1018
.org 0x5b8e0
	str r0, [r4, #88]	@ 0005b8e0 a065
.org 0x5b8e2
	b.n 0x5b91e	@ 0005b8e2 1ce0
.org 0x5b8e4
	.byte 0x01,0x20,0xff,0xff	@ 0005b8e4 data
.org 0x5b8e8
	.byte 0x01,0xb8,0xff,0xff	@ 0005b8e8 data
.org 0x5b8ec
	ldrb r0, [r4, #15]	@ 0005b8ec e07b
.org 0x5b8ee
	adds r0, #1	@ 0005b8ee 0130
.org 0x5b8f0
	strb r0, [r4, #15]	@ 0005b8f0 e073
.org 0x5b8f2
	adds r0, r4, #0	@ 0005b8f2 201c
.org 0x5b8f4
	bl 0x1cff0	@ 0005b8f4 c1f77cfb
.org 0x5b8f8
	ldr r0, [r4, #88]	@ 0005b8f8 a06d
.org 0x5b8fa
	ldr r1, [r4, #96]	@ 0005b8fa 216e
.org 0x5b8fc
	adds r0, r0, r1	@ 0005b8fc 4018
.org 0x5b8fe
	str r0, [r4, #88]	@ 0005b8fe a065
.org 0x5b900
	ldrb r0, [r4, #18]	@ 0005b900 a07c
.org 0x5b902
	subs r0, #1	@ 0005b902 0138
.org 0x5b904
	strb r0, [r4, #18]	@ 0005b904 a074
.org 0x5b906
	lsls r0, r0, #24	@ 0005b906 0006
.org 0x5b908
	cmp r0, #0	@ 0005b908 0028
.org 0x5b90a
	bne.n 0x5b918	@ 0005b90a 05d1
.org 0x5b90c
	ldr r0, [r4, #92]	@ 0005b90c e06d
.org 0x5b90e
	str r0, [r4, #88]	@ 0005b90e a065
.org 0x5b910
	adds r0, r4, #0	@ 0005b910 201c
.org 0x5b912
	bl 0x5bf8c	@ 0005b912 00f03bfb
