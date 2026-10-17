@ FUN_0801b854  entry 0x0801b854  size 156
.thumb
.org 0x1b854
FUN_0801b854:
	push {r4, r5, r6, r7, lr}	@ 0001b854 f0b5
.org 0x1b856
	mov r7, r8	@ 0001b856 4746
.org 0x1b858
	push {r7}	@ 0001b858 80b4
.org 0x1b85a
	sub sp, #8	@ 0001b85a 82b0
.org 0x1b85c
	adds r7, r0, #0	@ 0001b85c 071c
.org 0x1b85e
	ldr r0, [r7, #92]	@ 0001b85e f86d
.org 0x1b860
	lsls r0, r0, #16	@ 0001b860 0004
.org 0x1b862
	mov r8, r0	@ 0001b862 8046
.org 0x1b864
	ldr r0, [pc, #136]	@ 0001b864 2248
.org 0x1b866
	ldr r1, [pc, #140]	@ 0001b866 2349
.org 0x1b868
	adds r0, r0, r1	@ 0001b868 4018
.org 0x1b86a
	ldrh r0, [r0, #0]	@ 0001b86a 0088
.org 0x1b86c
	cmp r0, #0	@ 0001b86c 0028
.org 0x1b86e
	beq.n 0x1b8ba	@ 0001b86e 24d0
.org 0x1b870
	ldr r0, [pc, #132]	@ 0001b870 2148
.org 0x1b872
	ldr r0, [r0, #0]	@ 0001b872 0068
.org 0x1b874
	ldr r1, [pc, #132]	@ 0001b874 2149
.org 0x1b876
	adds r0, r0, r1	@ 0001b876 4018
.org 0x1b878
	mov r1, r8	@ 0001b878 4146
.org 0x1b87a
	lsrs r5, r1, #20	@ 0001b87a 0d0d
.org 0x1b87c
	lsls r5, r5, #1	@ 0001b87c 6d00
.org 0x1b87e
	ldr r1, [pc, #128]	@ 0001b87e 2049
.org 0x1b880
	adds r5, r5, r1	@ 0001b880 6d18
.org 0x1b882
	ldrh r2, [r5, #0]	@ 0001b882 2a88
.org 0x1b884
	movs r4, #248	@ 0001b884 f824
.org 0x1b886
	lsls r4, r4, #5	@ 0001b886 6401
.org 0x1b888
	adds r1, r4, #0	@ 0001b888 211c
.org 0x1b88a
	ands r1, r2	@ 0001b88a 1140
.org 0x1b88c
	lsls r1, r1, #3	@ 0001b88c c900
.org 0x1b88e
	movs r2, #192	@ 0001b88e c022
.org 0x1b890
	lsls r2, r2, #19	@ 0001b890 d204
.org 0x1b892
	adds r1, r1, r2	@ 0001b892 8918
.org 0x1b894
	movs r6, #128	@ 0001b894 8026
.org 0x1b896
	lsls r6, r6, #2	@ 0001b896 b600
.org 0x1b898
	adds r2, r6, #0	@ 0001b898 321c
.org 0x1b89a
	bl 0x128be0	@ 0001b89a 0df1a1f9
.org 0x1b89e
	movs r1, #0	@ 0001b89e 0021
.org 0x1b8a0
	ldrh r0, [r5, #0]	@ 0001b8a0 2888
.org 0x1b8a2
	ands r4, r0	@ 0001b8a2 0440
.org 0x1b8a4
	lsls r4, r4, #3	@ 0001b8a4 e400
.org 0x1b8a6
	ldr r0, [pc, #92]	@ 0001b8a6 1748
.org 0x1b8a8
	adds r4, r4, r0	@ 0001b8a8 2418
.org 0x1b8aa
	str r1, [sp, #0]	@ 0001b8aa 0091
.org 0x1b8ac
	movs r2, #128	@ 0001b8ac 8022
.org 0x1b8ae
	lsls r2, r2, #17	@ 0001b8ae 5204
.org 0x1b8b0
	orrs r2, r6	@ 0001b8b0 3243
.org 0x1b8b2
	mov r0, sp	@ 0001b8b2 6846
.org 0x1b8b4
	adds r1, r4, #0	@ 0001b8b4 211c
.org 0x1b8b6
	bl 0x128be0	@ 0001b8b6 0df193f9
.org 0x1b8ba
	mov r1, r8	@ 0001b8ba 4146
.org 0x1b8bc
	lsrs r3, r1, #20	@ 0001b8bc 0b0d
.org 0x1b8be
	lsls r3, r3, #2	@ 0001b8be 9b00
.org 0x1b8c0
	ldr r2, [pc, #68]	@ 0001b8c0 114a
.org 0x1b8c2
	adds r4, r3, r2	@ 0001b8c2 9c18
.org 0x1b8c4
	ldr r1, [r7, #52]	@ 0001b8c4 796b
.org 0x1b8c6
	ldr r0, [r7, #68]	@ 0001b8c6 786c
.org 0x1b8c8
	muls r1, r0	@ 0001b8c8 4143
.org 0x1b8ca
	asrs r1, r1, #8	@ 0001b8ca 0912
.org 0x1b8cc
	ldr r0, [r7, #76]	@ 0001b8cc f86c
.org 0x1b8ce
	adds r0, r0, r1	@ 0001b8ce 4018
.org 0x1b8d0
	strh r0, [r4, #0]	@ 0001b8d0 2080
.org 0x1b8d2
	adds r2, #2	@ 0001b8d2 0232
.org 0x1b8d4
	adds r3, r3, r2	@ 0001b8d4 9b18
.org 0x1b8d6
	ldr r1, [r7, #56]	@ 0001b8d6 b96b
.org 0x1b8d8
	ldr r0, [r7, #72]	@ 0001b8d8 b86c
.org 0x1b8da
	muls r1, r0	@ 0001b8da 4143
.org 0x1b8dc
	asrs r1, r1, #8	@ 0001b8dc 0912
.org 0x1b8de
	ldr r0, [r7, #80]	@ 0001b8de 386d
.org 0x1b8e0
	adds r0, r0, r1	@ 0001b8e0 4018
.org 0x1b8e2
	strh r0, [r3, #0]	@ 0001b8e2 1880
.org 0x1b8e4
	add sp, #8	@ 0001b8e4 02b0
.org 0x1b8e6
	pop {r3}	@ 0001b8e6 08bc
.org 0x1b8e8
	mov r8, r3	@ 0001b8e8 9846
.org 0x1b8ea
	pop {r4, r5, r6, r7}	@ 0001b8ea f0bc
.org 0x1b8ec
	pop {r0}	@ 0001b8ec 01bc
.org 0x1b8ee
	bx r0	@ 0001b8ee 0047
