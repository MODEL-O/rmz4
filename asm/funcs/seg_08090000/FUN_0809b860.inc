@ FUN_0809b860  entry 0x0809b860  size 96
.thumb
.org 0x9b860
FUN_0809b860:
	push {r4, r5, lr}	@ 0009b860 30b5
.org 0x9b862
	sub sp, #8	@ 0009b862 82b0
.org 0x9b864
	adds r4, r0, #0	@ 0009b864 041c
.org 0x9b866
	ldr r0, [pc, #64]	@ 0009b866 1048
.org 0x9b868
	ldr r1, [r0, #4]	@ 0009b868 4168
.org 0x9b86a
	ldr r0, [r0, #0]	@ 0009b86a 0068
.org 0x9b86c
	str r0, [sp, #0]	@ 0009b86c 0090
.org 0x9b86e
	str r1, [sp, #4]	@ 0009b86e 0191
.org 0x9b870
	ldrb r5, [r4, #16]	@ 0009b870 257c
.org 0x9b872
	ldrb r0, [r4, #15]	@ 0009b872 e07b
.org 0x9b874
	cmp r0, #0	@ 0009b874 0028
.org 0x9b876
	bne.n 0x9b890	@ 0009b876 0bd1
.org 0x9b878
	ldr r0, [pc, #48]	@ 0009b878 0c48
.org 0x9b87a
	bl 0x2b10	@ 0009b87a 67f749f9
.org 0x9b87e
	lsls r0, r5, #2	@ 0009b87e a800
.org 0x9b880
	add r0, sp	@ 0009b880 6844
.org 0x9b882
	ldrh r1, [r0, #0]	@ 0009b882 0188
.org 0x9b884
	adds r0, r4, #0	@ 0009b884 201c
.org 0x9b886
	bl 0x1cf00	@ 0009b886 81f73bfb
.org 0x9b88a
	ldrb r0, [r4, #15]	@ 0009b88a e07b
.org 0x9b88c
	adds r0, #1	@ 0009b88c 0130
.org 0x9b88e
	strb r0, [r4, #15]	@ 0009b88e e073
.org 0x9b890
	adds r0, r4, #0	@ 0009b890 201c
.org 0x9b892
	bl 0x1cff0	@ 0009b892 81f7adfb
.org 0x9b896
	adds r0, r4, #0	@ 0009b896 201c
.org 0x9b898
	adds r0, #181	@ 0009b898 b530
.org 0x9b89a
	ldrb r1, [r0, #0]	@ 0009b89a 0178
.org 0x9b89c
	cmp r1, #0	@ 0009b89c 0029
.org 0x9b89e
	beq.n 0x9b8b0	@ 0009b89e 07d0
.org 0x9b8a0
	movs r1, #0	@ 0009b8a0 0021
.org 0x9b8a2
	movs r0, #2	@ 0009b8a2 0220
.org 0x9b8a4
	b.n 0x9b8bc	@ 0009b8a4 0ae0
.org 0x9b8a6
	.byte 0x00	@ 0009b8a6 data
.org 0x9b8a7
	.byte 0x00	@ 0009b8a7 data
.org 0x9b8a8
	.byte 0x64,0x9c,0x12,0x08	@ 0009b8a8 data
.org 0x9b8ac
	.byte 0x07,0x01,0x00,0x00	@ 0009b8ac data
.org 0x9b8b0
	adds r0, r4, #0	@ 0009b8b0 201c
.org 0x9b8b2
	adds r0, #180	@ 0009b8b2 b430
.org 0x9b8b4
	ldrb r0, [r0, #0]	@ 0009b8b4 0078
.org 0x9b8b6
	cmp r0, #0	@ 0009b8b6 0028
.org 0x9b8b8
	beq.n 0x9b8c2	@ 0009b8b8 03d0
.org 0x9b8ba
	movs r0, #1	@ 0009b8ba 0120
.org 0x9b8bc
	strb r0, [r4, #13]	@ 0009b8bc 6073
.org 0x9b8be
	strb r1, [r4, #14]	@ 0009b8be a173
