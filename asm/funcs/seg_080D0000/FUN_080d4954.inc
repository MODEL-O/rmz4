@ FUN_080d4954  entry 0x080d4954  size 362
.thumb
.org 0xd4954
FUN_080d4954:
	push {r4, r5, r6, r7, lr}	@ 000d4954 f0b5
.org 0xd4956
	mov r7, r8	@ 000d4956 4746
.org 0xd4958
	push {r7}	@ 000d4958 80b4
.org 0xd495a
	ldr r4, [r0, #8]	@ 000d495a 8468
.org 0xd495c
	ldr r0, [pc, #172]	@ 000d495c 2b48
.org 0xd495e
	mov r8, r0	@ 000d495e 8046
.org 0xd4960
	ldrb r0, [r4, #12]	@ 000d4960 207b
.org 0xd4962
	cmp r0, #1	@ 000d4962 0128
.org 0xd4964
	bls.n 0xd4968	@ 000d4964 00d9
.org 0xd4966
	b.n 0xd4ad0	@ 000d4966 b3e0
.org 0xd4968
	ldrb r0, [r4, #15]	@ 000d4968 e07b
.org 0xd496a
	cmp r0, #0	@ 000d496a 0028
.org 0xd496c
	bne.n 0xd4998	@ 000d496c 14d1
.org 0xd496e
	ldr r1, [pc, #160]	@ 000d496e 2849
.org 0xd4970
	ldrh r2, [r1, #0]	@ 000d4970 0a88
.org 0xd4972
	movs r3, #128	@ 000d4972 8023
.org 0xd4974
	lsls r3, r3, #1	@ 000d4974 5b00
.org 0xd4976
	adds r0, r3, #0	@ 000d4976 181c
.org 0xd4978
	orrs r0, r2	@ 000d4978 1043
.org 0xd497a
	strh r0, [r1, #0]	@ 000d497a 0880
.org 0xd497c
	ldr r0, [pc, #148]	@ 000d497c 2548
.org 0xd497e
	ldrh r2, [r1, #4]	@ 000d497e 8a88
.org 0xd4980
	movs r1, #12	@ 000d4980 0c21
.org 0xd4982
	ands r1, r2	@ 000d4982 1140
.org 0xd4984
	lsls r1, r1, #12	@ 000d4984 0903
.org 0xd4986
	bl 0x1d30	@ 000d4986 2df7d3f9
.org 0xd498a
	ldr r0, [pc, #140]	@ 000d498a 2348
.org 0xd498c
	movs r1, #0	@ 000d498c 0021
.org 0xd498e
	bl 0x2208	@ 000d498e 2df73bfc
.org 0xd4992
	ldrb r0, [r4, #15]	@ 000d4992 e07b
.org 0xd4994
	adds r0, #1	@ 000d4994 0130
.org 0xd4996
	strb r0, [r4, #15]	@ 000d4996 e073
.org 0xd4998
	ldrb r0, [r4, #13]	@ 000d4998 607b
.org 0xd499a
	cmp r0, #0	@ 000d499a 0028
.org 0xd499c
	bne.n 0xd4a20	@ 000d499c 40d1
.org 0xd499e
	ldrb r0, [r4, #18]	@ 000d499e a07c
.org 0xd49a0
	movs r1, #3	@ 000d49a0 0321
.org 0xd49a2
	bl 0x129120	@ 000d49a2 54f0bdfb
.org 0xd49a6
	lsls r0, r0, #24	@ 000d49a6 0006
.org 0xd49a8
	lsrs r0, r0, #24	@ 000d49a8 000e
.org 0xd49aa
	cmp r0, #9	@ 000d49aa 0928
.org 0xd49ac
	ble.n 0xd49b0	@ 000d49ac 00dd
.org 0xd49ae
	movs r0, #9	@ 000d49ae 0920
.org 0xd49b0
	ldr r1, [pc, #104]	@ 000d49b0 1a49
.org 0xd49b2
	lsls r0, r0, #2	@ 000d49b2 8000
.org 0xd49b4
	adds r0, r0, r1	@ 000d49b4 4018
.org 0xd49b6
	ldr r0, [r0, #0]	@ 000d49b6 0068
.org 0xd49b8
	ldrb r3, [r0, #0]	@ 000d49b8 0378
.org 0xd49ba
	ldrb r1, [r0, #1]	@ 000d49ba 4178
.org 0xd49bc
	movs r2, #0	@ 000d49bc 0022
.org 0xd49be
	lsls r7, r1, #16	@ 000d49be 0f04
.org 0xd49c0
	cmp r2, r1	@ 000d49c0 8a42
.org 0xd49c2
	blt.n 0xd49c6	@ 000d49c2 00db
.org 0xd49c4
	b.n 0xd4ad0	@ 000d49c4 84e0
.org 0xd49c6
	adds r6, r3, #0	@ 000d49c6 1e1c
.org 0xd49c8
	adds r4, r0, #0	@ 000d49c8 041c
.org 0xd49ca
	movs r0, #144	@ 000d49ca 9020
.org 0xd49cc
	lsls r0, r0, #5	@ 000d49cc 4001
.org 0xd49ce
	adds r5, r0, #0	@ 000d49ce 051c
.org 0xd49d0
	lsls r1, r2, #16	@ 000d49d0 1104
.org 0xd49d2
	asrs r1, r1, #16	@ 000d49d2 0914
.org 0xd49d4
	adds r0, r6, r1	@ 000d49d4 7018
.org 0xd49d6
	lsls r0, r0, #1	@ 000d49d6 4000
.org 0xd49d8
	mov r2, r8	@ 000d49d8 4246
.org 0xd49da
	adds r3, r0, r2	@ 000d49da 8318
.org 0xd49dc
	movs r0, #144	@ 000d49dc 9020
.org 0xd49de
	lsls r0, r0, #2	@ 000d49de 8000
.org 0xd49e0
	adds r2, r3, r0	@ 000d49e0 1a18
.org 0xd49e2
	adds r0, r1, r4	@ 000d49e2 0819
.org 0xd49e4
	ldrb r0, [r0, #2]	@ 000d49e4 8078
.org 0xd49e6
	orrs r0, r5	@ 000d49e6 2843
.org 0xd49e8
	strh r0, [r2, #0]	@ 000d49e8 1080
.org 0xd49ea
	movs r0, #160	@ 000d49ea a020
.org 0xd49ec
	lsls r0, r0, #2	@ 000d49ec 8000
.org 0xd49ee
	adds r2, r3, r0	@ 000d49ee 1a18
.org 0xd49f0
	asrs r3, r7, #16	@ 000d49f0 3b14
.org 0xd49f2
	adds r0, r1, r3	@ 000d49f2 c818
.org 0xd49f4
	adds r0, r0, r4	@ 000d49f4 0019
.org 0xd49f6
	ldrb r0, [r0, #2]	@ 000d49f6 8078
.org 0xd49f8
	orrs r0, r5	@ 000d49f8 2843
.org 0xd49fa
	strh r0, [r2, #0]	@ 000d49fa 1080
.org 0xd49fc
	adds r1, #1	@ 000d49fc 0131
.org 0xd49fe
	lsls r1, r1, #16	@ 000d49fe 0904
.org 0xd4a00
	lsrs r2, r1, #16	@ 000d4a00 0a0c
.org 0xd4a02
	asrs r1, r1, #16	@ 000d4a02 0914
.org 0xd4a04
	cmp r1, r3	@ 000d4a04 9942
.org 0xd4a06
	blt.n 0xd49d0	@ 000d4a06 e3db
.org 0xd4a08
	b.n 0xd4ad0	@ 000d4a08 62e0
.org 0xd4a0a
	.byte 0x00	@ 000d4a0a data
.org 0xd4a0b
	.byte 0x00	@ 000d4a0b data
.org 0xd4a0c
	.byte 0x20,0xf6,0x02,0x02	@ 000d4a0c data
.org 0xd4a10
	.byte 0x00,0x0a,0x00,0x02	@ 000d4a10 data
.org 0xd4a14
	.byte 0x40,0xc1,0xb6,0x08	@ 000d4a14 data
.org 0xd4a18
	.byte 0x4c,0xc1,0xb6,0x08	@ 000d4a18 data
.org 0xd4a1c
	.byte 0xf8,0x7d,0x86,0x08	@ 000d4a1c data
.org 0xd4a20
	cmp r0, #1	@ 000d4a20 0128
.org 0xd4a22
	bne.n 0xd4ad0	@ 000d4a22 55d1
.org 0xd4a24
	ldrb r0, [r4, #18]	@ 000d4a24 a07c
.org 0xd4a26
	lsls r1, r0, #24	@ 000d4a26 0106
.org 0xd4a28
	lsrs r0, r1, #24	@ 000d4a28 080e
.org 0xd4a2a
	cmp r0, #9	@ 000d4a2a 0928
.org 0xd4a2c
	bhi.n 0xd4a94	@ 000d4a2c 32d8
.org 0xd4a2e
	lsrs r0, r1, #25	@ 000d4a2e 480e
.org 0xd4a30
	cmp r0, #5	@ 000d4a30 0528
.org 0xd4a32
	ble.n 0xd4a36	@ 000d4a32 00dd
.org 0xd4a34
	movs r0, #5	@ 000d4a34 0520
.org 0xd4a36
	ldr r1, [pc, #88]	@ 000d4a36 1649
.org 0xd4a38
	lsls r0, r0, #2	@ 000d4a38 8000
.org 0xd4a3a
	adds r0, r0, r1	@ 000d4a3a 4018
.org 0xd4a3c
	ldr r0, [r0, #0]	@ 000d4a3c 0068
.org 0xd4a3e
	ldrb r3, [r0, #0]	@ 000d4a3e 0378
.org 0xd4a40
	ldrb r1, [r0, #1]	@ 000d4a40 4178
.org 0xd4a42
	movs r2, #0	@ 000d4a42 0022
.org 0xd4a44
	lsls r7, r1, #16	@ 000d4a44 0f04
.org 0xd4a46
	cmp r2, r1	@ 000d4a46 8a42
.org 0xd4a48
	bge.n 0xd4ad0	@ 000d4a48 42da
.org 0xd4a4a
	adds r6, r3, #0	@ 000d4a4a 1e1c
.org 0xd4a4c
	adds r4, r0, #0	@ 000d4a4c 041c
.org 0xd4a4e
	movs r3, #144	@ 000d4a4e 9023
.org 0xd4a50
	lsls r3, r3, #5	@ 000d4a50 5b01
.org 0xd4a52
	adds r5, r3, #0	@ 000d4a52 1d1c
.org 0xd4a54
	lsls r1, r2, #16	@ 000d4a54 1104
.org 0xd4a56
	asrs r1, r1, #16	@ 000d4a56 0914
.org 0xd4a58
	adds r0, r6, r1	@ 000d4a58 7018
.org 0xd4a5a
	lsls r0, r0, #1	@ 000d4a5a 4000
.org 0xd4a5c
	mov r2, r8	@ 000d4a5c 4246
.org 0xd4a5e
	adds r3, r0, r2	@ 000d4a5e 8318
.org 0xd4a60
	movs r0, #144	@ 000d4a60 9020
.org 0xd4a62
	lsls r0, r0, #2	@ 000d4a62 8000
.org 0xd4a64
	adds r2, r3, r0	@ 000d4a64 1a18
.org 0xd4a66
	adds r0, r1, r4	@ 000d4a66 0819
.org 0xd4a68
	ldrb r0, [r0, #2]	@ 000d4a68 8078
.org 0xd4a6a
	orrs r0, r5	@ 000d4a6a 2843
.org 0xd4a6c
	strh r0, [r2, #0]	@ 000d4a6c 1080
.org 0xd4a6e
	movs r0, #160	@ 000d4a6e a020
.org 0xd4a70
	lsls r0, r0, #2	@ 000d4a70 8000
.org 0xd4a72
	adds r2, r3, r0	@ 000d4a72 1a18
.org 0xd4a74
	asrs r3, r7, #16	@ 000d4a74 3b14
.org 0xd4a76
	adds r0, r1, r3	@ 000d4a76 c818
.org 0xd4a78
	adds r0, r0, r4	@ 000d4a78 0019
.org 0xd4a7a
	ldrb r0, [r0, #2]	@ 000d4a7a 8078
.org 0xd4a7c
	orrs r0, r5	@ 000d4a7c 2843
.org 0xd4a7e
	strh r0, [r2, #0]	@ 000d4a7e 1080
.org 0xd4a80
	adds r1, #1	@ 000d4a80 0131
.org 0xd4a82
	lsls r1, r1, #16	@ 000d4a82 0904
.org 0xd4a84
	lsrs r2, r1, #16	@ 000d4a84 0a0c
.org 0xd4a86
	asrs r1, r1, #16	@ 000d4a86 0914
.org 0xd4a88
	cmp r1, r3	@ 000d4a88 9942
.org 0xd4a8a
	blt.n 0xd4a54	@ 000d4a8a e3db
.org 0xd4a8c
	b.n 0xd4ad0	@ 000d4a8c 20e0
.org 0xd4a8e
	.byte 0x00	@ 000d4a8e data
.org 0xd4a8f
	.byte 0x00	@ 000d4a8f data
.org 0xd4a90
	.byte 0x20,0x7e,0x86,0x08	@ 000d4a90 data
.org 0xd4a94
	lsrs r0, r1, #25	@ 000d4a94 480e
.org 0xd4a96
	cmp r0, #10	@ 000d4a96 0a28
.org 0xd4a98
	ble.n 0xd4a9c	@ 000d4a98 00dd
.org 0xd4a9a
	movs r0, #10	@ 000d4a9a 0a20
.org 0xd4a9c
	movs r2, #0	@ 000d4a9c 0022
.org 0xd4a9e
	movs r5, #144	@ 000d4a9e 9025
.org 0xd4aa0
	lsls r5, r5, #2	@ 000d4aa0 ad00
.org 0xd4aa2
	ldr r1, [pc, #56]	@ 000d4aa2 0e49
.org 0xd4aa4
	subs r0, #4	@ 000d4aa4 0438
.org 0xd4aa6
	lsls r0, r0, #2	@ 000d4aa6 8000
.org 0xd4aa8
	adds r0, r0, r1	@ 000d4aa8 4018
.org 0xd4aaa
	ldr r3, [r0, #0]	@ 000d4aaa 0368
.org 0xd4aac
	movs r0, #144	@ 000d4aac 9020
.org 0xd4aae
	lsls r0, r0, #5	@ 000d4aae 4001
.org 0xd4ab0
	adds r4, r0, #0	@ 000d4ab0 041c
.org 0xd4ab2
	lsls r1, r2, #16	@ 000d4ab2 1104
.org 0xd4ab4
	asrs r1, r1, #16	@ 000d4ab4 0914
.org 0xd4ab6
	lsls r2, r1, #1	@ 000d4ab6 4a00
.org 0xd4ab8
	add r2, r8	@ 000d4ab8 4244
.org 0xd4aba
	adds r2, r2, r5	@ 000d4aba 5219
.org 0xd4abc
	adds r0, r3, r1	@ 000d4abc 5818
