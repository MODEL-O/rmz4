@ FUN_0809d868  entry 0x0809d868  size 150
.thumb
.org 0x9d868
FUN_0809d868:
	push {r4, r5, lr}	@ 0009d868 30b5
.org 0x9d86a
	adds r4, r0, #0	@ 0009d86a 041c
.org 0x9d86c
	ldr r5, [r4, #40]	@ 0009d86c a56a
.org 0x9d86e
	bl 0x1cff0	@ 0009d86e 7ff7bffb
.org 0x9d872
	ldrb r2, [r4, #15]	@ 0009d872 e27b
.org 0x9d874
	adds r0, r2, #0	@ 0009d874 101c
.org 0x9d876
	cmp r0, #0	@ 0009d876 0028
.org 0x9d878
	bne.n 0x9d892	@ 0009d878 0bd1
.org 0x9d87a
	ldr r0, [r4, #88]	@ 0009d87a a06d
.org 0x9d87c
	ldr r1, [r4, #96]	@ 0009d87c 216e
.org 0x9d87e
	adds r0, r0, r1	@ 0009d87e 4018
.org 0x9d880
	str r0, [r4, #88]	@ 0009d880 a065
.org 0x9d882
	ldrb r0, [r4, #18]	@ 0009d882 a07c
.org 0x9d884
	adds r0, #1	@ 0009d884 0130
.org 0x9d886
	strb r0, [r4, #18]	@ 0009d886 a074
.org 0x9d888
	lsls r0, r0, #24	@ 0009d888 0006
.org 0x9d88a
	lsrs r0, r0, #24	@ 0009d88a 000e
.org 0x9d88c
	cmp r0, #18	@ 0009d88c 1228
.org 0x9d88e
	bls.n 0x9d8fe	@ 0009d88e 36d9
.org 0x9d890
	b.n 0x9d8a8	@ 0009d890 0ae0
.org 0x9d892
	cmp r0, #1	@ 0009d892 0128
.org 0x9d894
	bne.n 0x9d8b4	@ 0009d894 0ed1
.org 0x9d896
	ldrb r0, [r5, #30]	@ 0009d896 a87f
.org 0x9d898
	lsls r0, r0, #8	@ 0009d898 0002
.org 0x9d89a
	adds r1, r5, #0	@ 0009d89a 291c
.org 0x9d89c
	adds r1, #112	@ 0009d89c 7031
.org 0x9d89e
	ldrb r1, [r1, #0]	@ 0009d89e 0978
.org 0x9d8a0
	orrs r0, r1	@ 0009d8a0 0843
.org 0x9d8a2
	ldr r1, [pc, #12]	@ 0009d8a2 0349
.org 0x9d8a4
	cmp r0, r1	@ 0009d8a4 8842
.org 0x9d8a6
	bne.n 0x9d8fe	@ 0009d8a6 2ad1
.org 0x9d8a8
	adds r0, r2, #1	@ 0009d8a8 501c
.org 0x9d8aa
	strb r0, [r4, #15]	@ 0009d8aa e073
.org 0x9d8ac
	b.n 0x9d8fe	@ 0009d8ac 27e0
.org 0x9d8ae
	.byte 0x00	@ 0009d8ae data
.org 0x9d8af
	.byte 0x00	@ 0009d8af data
.org 0x9d8b0
	.byte 0x20,0xa9,0x00,0x00	@ 0009d8b0 data
.org 0x9d8b4
	ldr r0, [r4, #88]	@ 0009d8b4 a06d
.org 0x9d8b6
	ldr r1, [r4, #96]	@ 0009d8b6 216e
.org 0x9d8b8
	subs r0, r0, r1	@ 0009d8b8 401a
.org 0x9d8ba
	str r0, [r4, #88]	@ 0009d8ba a065
.org 0x9d8bc
	ldrb r0, [r4, #18]	@ 0009d8bc a07c
.org 0x9d8be
	subs r0, #1	@ 0009d8be 0138
.org 0x9d8c0
	strb r0, [r4, #18]	@ 0009d8c0 a074
.org 0x9d8c2
	lsls r0, r0, #24	@ 0009d8c2 0006
.org 0x9d8c4
	lsrs r2, r0, #24	@ 0009d8c4 020e
.org 0x9d8c6
	cmp r2, #0	@ 0009d8c6 002a
.org 0x9d8c8
	bne.n 0x9d8fe	@ 0009d8c8 19d1
.org 0x9d8ca
	ldrb r1, [r4, #10]	@ 0009d8ca a17a
.org 0x9d8cc
	movs r0, #254	@ 0009d8cc fe20
.org 0x9d8ce
	ands r0, r1	@ 0009d8ce 0840
.org 0x9d8d0
	movs r1, #253	@ 0009d8d0 fd21
.org 0x9d8d2
	ands r0, r1	@ 0009d8d2 0840
.org 0x9d8d4
	strb r0, [r4, #10]	@ 0009d8d4 a072
.org 0x9d8d6
	adds r0, r4, #0	@ 0009d8d6 201c
.org 0x9d8d8
	adds r0, #140	@ 0009d8d8 8c30
.org 0x9d8da
	str r2, [r0, #0]	@ 0009d8da 0260
.org 0x9d8dc
	adds r0, #4	@ 0009d8dc 0430
.org 0x9d8de
	str r2, [r0, #0]	@ 0009d8de 0260
.org 0x9d8e0
	adds r0, #4	@ 0009d8e0 0430
.org 0x9d8e2
	strb r2, [r0, #0]	@ 0009d8e2 0270
.org 0x9d8e4
	ldrb r1, [r4, #10]	@ 0009d8e4 a17a
.org 0x9d8e6
	movs r0, #251	@ 0009d8e6 fb20
.org 0x9d8e8
	ands r0, r1	@ 0009d8e8 0840
.org 0x9d8ea
	strb r0, [r4, #10]	@ 0009d8ea a072
.org 0x9d8ec
	ldr r1, [pc, #20]	@ 0009d8ec 0549
.org 0x9d8ee
	ldrb r0, [r4, #9]	@ 0009d8ee 607a
.org 0x9d8f0
	lsls r0, r0, #2	@ 0009d8f0 8000
.org 0x9d8f2
	adds r0, r0, r1	@ 0009d8f2 4018
.org 0x9d8f4
	movs r1, #3	@ 0009d8f4 0321
.org 0x9d8f6
	str r1, [r4, #12]	@ 0009d8f6 e160
.org 0x9d8f8
	ldr r0, [r0, #0]	@ 0009d8f8 0068
.org 0x9d8fa
	ldr r0, [r0, #12]	@ 0009d8fa c068
.org 0x9d8fc
	str r0, [r4, #20]	@ 0009d8fc 6061
