@ FUN_0807d828  entry 0x0807d828  size 250
.thumb
.org 0x7d828
FUN_0807d828:
	push {r4, r5, r6, r7, lr}	@ 0007d828 f0b5
.org 0x7d82a
	sub sp, #8	@ 0007d82a 82b0
.org 0x7d82c
	adds r5, r0, #0	@ 0007d82c 051c
.org 0x7d82e
	ldrb r0, [r5, #10]	@ 0007d82e a87a
.org 0x7d830
	lsrs r6, r0, #4	@ 0007d830 0609
.org 0x7d832
	movs r7, #1	@ 0007d832 0127
.org 0x7d834
	ands r6, r7	@ 0007d834 3e40
.org 0x7d836
	ldrb r4, [r5, #15]	@ 0007d836 ec7b
.org 0x7d838
	cmp r4, #0	@ 0007d838 002c
.org 0x7d83a
	bne.n 0x7d858	@ 0007d83a 0dd1
.org 0x7d83c
	movs r0, #165	@ 0007d83c a520
.org 0x7d83e
	lsls r0, r0, #1	@ 0007d83e 4000
.org 0x7d840
	bl 0x2b10	@ 0007d840 85f766f9
.org 0x7d844
	adds r0, r5, #0	@ 0007d844 281c
.org 0x7d846
	movs r1, #17	@ 0007d846 1121
.org 0x7d848
	bl 0x7e8c8	@ 0007d848 01f03ef8
.org 0x7d84c
	movs r0, #90	@ 0007d84c 5a20
.org 0x7d84e
	str r0, [r5, #100]	@ 0007d84e 6866
.org 0x7d850
	strb r4, [r5, #19]	@ 0007d850 ec74
.org 0x7d852
	ldrb r0, [r5, #15]	@ 0007d852 e87b
.org 0x7d854
	adds r0, #1	@ 0007d854 0130
.org 0x7d856
	strb r0, [r5, #15]	@ 0007d856 e873
.org 0x7d858
	adds r4, r5, #0	@ 0007d858 2c1c
.org 0x7d85a
	adds r4, #188	@ 0007d85a bc34
.org 0x7d85c
	ldrb r0, [r4, #0]	@ 0007d85c 2078
.org 0x7d85e
	cmp r0, #0	@ 0007d85e 0028
.org 0x7d860
	beq.n 0x7d868	@ 0007d860 02d0
.org 0x7d862
	adds r0, r5, #0	@ 0007d862 281c
.org 0x7d864
	bl 0x1cff0	@ 0007d864 9ff7c4fb
.org 0x7d868
	adds r0, r5, #0	@ 0007d868 281c
.org 0x7d86a
	adds r0, #116	@ 0007d86a 7430
.org 0x7d86c
	ldr r3, [pc, #180]	@ 0007d86c 2d4b
.org 0x7d86e
	ldr r2, [pc, #184]	@ 0007d86e 2e4a
.org 0x7d870
	ldrb r1, [r4, #0]	@ 0007d870 2178
.org 0x7d872
	lsls r1, r1, #1	@ 0007d872 4900
.org 0x7d874
	adds r1, r1, r2	@ 0007d874 8918
.org 0x7d876
	ldrh r2, [r1, #0]	@ 0007d876 0a88
.org 0x7d878
	lsls r2, r2, #2	@ 0007d878 9200
.org 0x7d87a
	adds r2, r2, r3	@ 0007d87a d218
.org 0x7d87c
	adds r4, r5, #0	@ 0007d87c 2c1c
.org 0x7d87e
	adds r4, #113	@ 0007d87e 7134
.org 0x7d880
	movs r1, #0	@ 0007d880 0021
.org 0x7d882
	ldrsb r1, [r4, r1]	@ 0007d882 6156
.org 0x7d884
	ldr r2, [r2, #0]	@ 0007d884 1268
.org 0x7d886
	lsls r1, r1, #2	@ 0007d886 8900
.org 0x7d888
	adds r1, r1, r2	@ 0007d888 8918
.org 0x7d88a
	ldr r1, [r1, #0]	@ 0007d88a 0968
.org 0x7d88c
	bl 0x5784	@ 0007d88c 87f77aff
.org 0x7d890
	ldr r0, [r5, #100]	@ 0007d890 686e
.org 0x7d892
	cmp r0, #0	@ 0007d892 0028
.org 0x7d894
	beq.n 0x7d89a	@ 0007d894 01d0
.org 0x7d896
	subs r0, #1	@ 0007d896 0138
.org 0x7d898
	str r0, [r5, #100]	@ 0007d898 6866
.org 0x7d89a
	ldrb r0, [r5, #19]	@ 0007d89a e87c
.org 0x7d89c
	cmp r0, #0	@ 0007d89c 0028
.org 0x7d89e
	bne.n 0x7d906	@ 0007d89e 32d1
.org 0x7d8a0
	movs r0, #0	@ 0007d8a0 0020
.org 0x7d8a2
	ldrsb r0, [r4, r0]	@ 0007d8a2 2056
.org 0x7d8a4
	cmp r0, #3	@ 0007d8a4 0328
.org 0x7d8a6
	ble.n 0x7d906	@ 0007d8a6 2edd
.org 0x7d8a8
	ldr r0, [pc, #128]	@ 0007d8a8 2048
.org 0x7d8aa
	ldr r1, [pc, #132]	@ 0007d8aa 2149
.org 0x7d8ac
	movs r4, #181	@ 0007d8ac b524
.org 0x7d8ae
	lsls r4, r4, #1	@ 0007d8ae 6400
.org 0x7d8b0
	adds r1, r1, r4	@ 0007d8b0 0919
.org 0x7d8b2
	ldrh r1, [r1, #0]	@ 0007d8b2 0988
.org 0x7d8b4
	ldrh r2, [r0, #6]	@ 0007d8b4 c288
.org 0x7d8b6
	lsrs r2, r2, #6	@ 0007d8b6 9209
.org 0x7d8b8
	subs r1, r1, r2	@ 0007d8b8 891a
.org 0x7d8ba
	lsls r1, r1, #5	@ 0007d8ba 4901
.org 0x7d8bc
	movs r2, #128	@ 0007d8bc 8022
.org 0x7d8be
	lsls r2, r2, #9	@ 0007d8be 5202
.org 0x7d8c0
	adds r1, r1, r2	@ 0007d8c0 8918
.org 0x7d8c2
	bl 0x1d30	@ 0007d8c2 84f735fa
.org 0x7d8c6
	ldr r0, [pc, #108]	@ 0007d8c6 1b48
.org 0x7d8c8
	ldr r1, [pc, #108]	@ 0007d8c8 1b49
.org 0x7d8ca
	adds r1, r1, r4	@ 0007d8ca 0919
.org 0x7d8cc
	ldrh r1, [r1, #0]	@ 0007d8cc 0988
.org 0x7d8ce
	ldrb r2, [r0, #7]	@ 0007d8ce c279
.org 0x7d8d0
	subs r1, r1, r2	@ 0007d8d0 891a
.org 0x7d8d2
	lsls r1, r1, #5	@ 0007d8d2 4901
.org 0x7d8d4
	movs r2, #128	@ 0007d8d4 8022
.org 0x7d8d6
	lsls r2, r2, #2	@ 0007d8d6 9200
.org 0x7d8d8
	adds r1, r1, r2	@ 0007d8d8 8918
.org 0x7d8da
	bl 0x2208	@ 0007d8da 84f795fc
.org 0x7d8de
	lsls r1, r6, #1	@ 0007d8de 7100
.org 0x7d8e0
	subs r1, #1	@ 0007d8e0 0139
.org 0x7d8e2
	lsls r0, r1, #1	@ 0007d8e2 4800
.org 0x7d8e4
	adds r0, r0, r1	@ 0007d8e4 4018
.org 0x7d8e6
	lsls r0, r0, #2	@ 0007d8e6 8000
.org 0x7d8e8
	subs r0, r0, r1	@ 0007d8e8 401a
.org 0x7d8ea
	lsls r0, r0, #10	@ 0007d8ea 8002
.org 0x7d8ec
	ldr r1, [r5, #84]	@ 0007d8ec 696d
.org 0x7d8ee
	adds r1, r1, r0	@ 0007d8ee 0918
.org 0x7d8f0
	str r1, [sp, #0]	@ 0007d8f0 0091
.org 0x7d8f2
	ldr r0, [r5, #88]	@ 0007d8f2 a86d
.org 0x7d8f4
	ldr r1, [pc, #68]	@ 0007d8f4 1149
.org 0x7d8f6
	adds r0, r0, r1	@ 0007d8f6 4018
.org 0x7d8f8
	str r0, [sp, #4]	@ 0007d8f8 0190
.org 0x7d8fa
	adds r0, r5, #0	@ 0007d8fa 281c
.org 0x7d8fc
	mov r1, sp	@ 0007d8fc 6946
.org 0x7d8fe
	adds r2, r6, #0	@ 0007d8fe 321c
.org 0x7d900
	bl 0xb6ae0	@ 0007d900 39f0eef8
.org 0x7d904
	strb r7, [r5, #19]	@ 0007d904 ef74
.org 0x7d906
	ldr r1, [r5, #100]	@ 0007d906 696e
.org 0x7d908
	cmp r1, #0	@ 0007d908 0029
.org 0x7d90a
	bne.n 0x7d91a	@ 0007d90a 06d1
.org 0x7d90c
	ldrb r0, [r5, #19]	@ 0007d90c e87c
.org 0x7d90e
	cmp r0, #0	@ 0007d90e 0028
.org 0x7d910
	beq.n 0x7d91a	@ 0007d910 03d0
.org 0x7d912
	ldrb r0, [r5, #14]	@ 0007d912 a87b
.org 0x7d914
	adds r0, #1	@ 0007d914 0130
.org 0x7d916
	strb r0, [r5, #14]	@ 0007d916 a873
.org 0x7d918
	strb r1, [r5, #15]	@ 0007d918 e973
.org 0x7d91a
	add sp, #8	@ 0007d91a 02b0
.org 0x7d91c
	pop {r4, r5, r6, r7}	@ 0007d91c f0bc
.org 0x7d91e
	pop {r0}	@ 0007d91e 01bc
.org 0x7d920
	bx r0	@ 0007d920 0047
