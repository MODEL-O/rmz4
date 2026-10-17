@ FUN_0804da6c  entry 0x0804da6c  size 356
.thumb
.org 0x4da6c
FUN_0804da6c:
	push {r4, r5, r6, lr}	@ 0004da6c 70b5
.org 0x4da6e
	adds r5, r0, #0	@ 0004da6e 051c
.org 0x4da70
	ldr r6, [r5, #40]	@ 0004da70 ae6a
.org 0x4da72
	movs r1, #168	@ 0004da72 a821
.org 0x4da74
	lsls r1, r1, #1	@ 0004da74 4900
.org 0x4da76
	adds r0, r6, r1	@ 0004da76 7018
.org 0x4da78
	ldrb r0, [r0, #0]	@ 0004da78 0078
.org 0x4da7a
	cmp r0, #255	@ 0004da7a ff28
.org 0x4da7c
	bne.n 0x4dacc	@ 0004da7c 26d1
.org 0x4da7e
	ldr r0, [pc, #68]	@ 0004da7e 1148
.org 0x4da80
	adds r2, r6, r0	@ 0004da80 3218
.org 0x4da82
	ldrb r0, [r2, #0]	@ 0004da82 1078
.org 0x4da84
	movs r1, #64	@ 0004da84 4021
.org 0x4da86
	orrs r0, r1	@ 0004da86 0843
.org 0x4da88
	strb r0, [r2, #0]	@ 0004da88 1070
.org 0x4da8a
	ldrb r1, [r5, #10]	@ 0004da8a a97a
.org 0x4da8c
	movs r0, #254	@ 0004da8c fe20
.org 0x4da8e
	ands r0, r1	@ 0004da8e 0840
.org 0x4da90
	movs r2, #0	@ 0004da90 0022
.org 0x4da92
	movs r1, #253	@ 0004da92 fd21
.org 0x4da94
	ands r0, r1	@ 0004da94 0840
.org 0x4da96
	strb r0, [r5, #10]	@ 0004da96 a872
.org 0x4da98
	adds r0, r5, #0	@ 0004da98 281c
.org 0x4da9a
	adds r0, #140	@ 0004da9a 8c30
.org 0x4da9c
	str r2, [r0, #0]	@ 0004da9c 0260
.org 0x4da9e
	adds r0, #4	@ 0004da9e 0430
.org 0x4daa0
	str r2, [r0, #0]	@ 0004daa0 0260
.org 0x4daa2
	adds r0, #4	@ 0004daa2 0430
.org 0x4daa4
	strb r2, [r0, #0]	@ 0004daa4 0270
.org 0x4daa6
	ldrb r1, [r5, #10]	@ 0004daa6 a97a
.org 0x4daa8
	movs r0, #251	@ 0004daa8 fb20
.org 0x4daaa
	ands r0, r1	@ 0004daaa 0840
.org 0x4daac
	strb r0, [r5, #10]	@ 0004daac a872
.org 0x4daae
	ldr r1, [pc, #24]	@ 0004daae 0649
.org 0x4dab0
	ldrb r0, [r5, #9]	@ 0004dab0 687a
.org 0x4dab2
	lsls r0, r0, #2	@ 0004dab2 8000
.org 0x4dab4
	adds r0, r0, r1	@ 0004dab4 4018
.org 0x4dab6
	movs r1, #3	@ 0004dab6 0321
.org 0x4dab8
	str r1, [r5, #12]	@ 0004dab8 e960
.org 0x4daba
	ldr r0, [r0, #0]	@ 0004daba 0068
.org 0x4dabc
	ldr r0, [r0, #12]	@ 0004dabc c068
.org 0x4dabe
	str r0, [r5, #20]	@ 0004dabe 6861
.org 0x4dac0
	b.n 0x4dbea	@ 0004dac0 93e0
.org 0x4dac2
	.byte 0x00	@ 0004dac2 data
.org 0x4dac3
	.byte 0x00	@ 0004dac3 data
.org 0x4dac4
	.byte 0x53,0x01,0x00,0x00	@ 0004dac4 data
.org 0x4dac8
	.byte 0xf8,0x39,0x85,0x08	@ 0004dac8 data
.org 0x4dacc
	ldrb r4, [r5, #13]	@ 0004dacc 6c7b
.org 0x4dace
	cmp r4, #0	@ 0004dace 002c
.org 0x4dad0
	beq.n 0x4db08	@ 0004dad0 1ad0
.org 0x4dad2
	ldrb r0, [r5, #18]	@ 0004dad2 a87c
.org 0x4dad4
	adds r1, r0, #1	@ 0004dad4 411c
.org 0x4dad6
	strb r1, [r5, #18]	@ 0004dad6 a974
.org 0x4dad8
	lsls r0, r0, #24	@ 0004dad8 0006
.org 0x4dada
	lsrs r0, r0, #24	@ 0004dada 000e
.org 0x4dadc
	cmp r0, #3	@ 0004dadc 0328
.org 0x4dade
	bls.n 0x4db30	@ 0004dade 27d9
.org 0x4dae0
	ldr r1, [pc, #28]	@ 0004dae0 0749
.org 0x4dae2
	adds r2, r6, r1	@ 0004dae2 7218
.org 0x4dae4
	ldrb r0, [r2, #0]	@ 0004dae4 1078
.org 0x4dae6
	movs r1, #64	@ 0004dae6 4021
.org 0x4dae8
	orrs r0, r1	@ 0004dae8 0843
.org 0x4daea
	strb r0, [r2, #0]	@ 0004daea 1070
.org 0x4daec
	ldr r1, [pc, #20]	@ 0004daec 0549
.org 0x4daee
	ldrb r0, [r5, #9]	@ 0004daee 687a
.org 0x4daf0
	lsls r0, r0, #2	@ 0004daf0 8000
.org 0x4daf2
	adds r0, r0, r1	@ 0004daf2 4018
.org 0x4daf4
	movs r1, #2	@ 0004daf4 0221
.org 0x4daf6
	str r1, [r5, #12]	@ 0004daf6 e960
.org 0x4daf8
	ldr r0, [r0, #0]	@ 0004daf8 0068
.org 0x4dafa
	ldr r0, [r0, #8]	@ 0004dafa 8068
.org 0x4dafc
	str r0, [r5, #20]	@ 0004dafc 6861
.org 0x4dafe
	b.n 0x4dbea	@ 0004dafe 74e0
.org 0x4db00
	.byte 0x53,0x01,0x00,0x00	@ 0004db00 data
.org 0x4db04
	.byte 0xf8,0x39,0x85,0x08	@ 0004db04 data
.org 0x4db08
	ldrb r0, [r5, #18]	@ 0004db08 a87c
.org 0x4db0a
	adds r1, r0, #1	@ 0004db0a 411c
.org 0x4db0c
	strb r1, [r5, #18]	@ 0004db0c a974
.org 0x4db0e
	lsls r0, r0, #24	@ 0004db0e 0006
.org 0x4db10
	lsrs r0, r0, #24	@ 0004db10 000e
.org 0x4db12
	cmp r0, #3	@ 0004db12 0328
.org 0x4db14
	bls.n 0x4db30	@ 0004db14 0cd9
.org 0x4db16
	ldr r1, [pc, #52]	@ 0004db16 0d49
.org 0x4db18
	adds r0, r5, #0	@ 0004db18 281c
.org 0x4db1a
	bl 0x1cf00	@ 0004db1a cff7f1f9
.org 0x4db1e
	adds r0, r5, #0	@ 0004db1e 281c
.org 0x4db20
	adds r0, #116	@ 0004db20 7430
.org 0x4db22
	ldr r1, [pc, #44]	@ 0004db22 0b49
.org 0x4db24
	bl 0x5784	@ 0004db24 b7f72efe
.org 0x4db28
	strb r4, [r5, #18]	@ 0004db28 ac74
.org 0x4db2a
	ldrb r0, [r5, #13]	@ 0004db2a 687b
.org 0x4db2c
	adds r0, #1	@ 0004db2c 0130
.org 0x4db2e
	strb r0, [r5, #13]	@ 0004db2e 6873
.org 0x4db30
	adds r0, r5, #0	@ 0004db30 281c
.org 0x4db32
	bl 0x1cff0	@ 0004db32 cff75dfa
.org 0x4db36
	ldrb r0, [r6, #10]	@ 0004db36 b07a
.org 0x4db38
	lsrs r2, r0, #4	@ 0004db38 0209
.org 0x4db3a
	movs r0, #1	@ 0004db3a 0120
.org 0x4db3c
	ands r2, r0	@ 0004db3c 0240
.org 0x4db3e
	cmp r2, #0	@ 0004db3e 002a
.org 0x4db40
	beq.n 0x4db54	@ 0004db40 08d0
.org 0x4db42
	ldrb r1, [r5, #10]	@ 0004db42 a97a
.org 0x4db44
	movs r0, #16	@ 0004db44 1020
.org 0x4db46
	orrs r0, r1	@ 0004db46 0843
.org 0x4db48
	b.n 0x4db5a	@ 0004db48 07e0
.org 0x4db4a
	.byte 0x00	@ 0004db4a data
.org 0x4db4b
	.byte 0x00	@ 0004db4b data
.org 0x4db4c
	.byte 0x3c,0x80,0x00,0x00	@ 0004db4c data
.org 0x4db50
	.byte 0xc0,0x79,0x85,0x08	@ 0004db50 data
.org 0x4db54
	ldrb r1, [r5, #10]	@ 0004db54 a97a
.org 0x4db56
	movs r0, #239	@ 0004db56 ef20
.org 0x4db58
	ands r0, r1	@ 0004db58 0840
.org 0x4db5a
	strb r0, [r5, #10]	@ 0004db5a a872
.org 0x4db5c
	adds r1, r2, #0	@ 0004db5c 111c
.org 0x4db5e
	adds r0, r5, #0	@ 0004db5e 281c
.org 0x4db60
	adds r0, #76	@ 0004db60 4c30
.org 0x4db62
	strb r1, [r0, #0]	@ 0004db62 0170
.org 0x4db64
	adds r3, r5, #0	@ 0004db64 2b1c
.org 0x4db66
	adds r3, #74	@ 0004db66 4a33
.org 0x4db68
	lsls r1, r1, #4	@ 0004db68 0901
.org 0x4db6a
	ldrb r2, [r3, #0]	@ 0004db6a 1a78
.org 0x4db6c
	movs r0, #17	@ 0004db6c 1120
.org 0x4db6e
	negs r0, r0	@ 0004db6e 4042
.org 0x4db70
	ands r0, r2	@ 0004db70 1040
.org 0x4db72
	orrs r0, r1	@ 0004db72 0843
.org 0x4db74
	strb r0, [r3, #0]	@ 0004db74 1870
.org 0x4db76
	adds r0, r6, #0	@ 0004db76 301c
.org 0x4db78
	adds r0, #113	@ 0004db78 7130
.org 0x4db7a
	ldrb r0, [r0, #0]	@ 0004db7a 0078
.org 0x4db7c
	lsls r0, r0, #24	@ 0004db7c 0006
.org 0x4db7e
	asrs r0, r0, #24	@ 0004db7e 0016
.org 0x4db80
	movs r4, #0	@ 0004db80 0024
.org 0x4db82
	cmp r0, #3	@ 0004db82 0328
.org 0x4db84
	bne.n 0x4db88	@ 0004db84 00d1
.org 0x4db86
	movs r4, #1	@ 0004db86 0124
.org 0x4db88
	ldrb r1, [r5, #10]	@ 0004db88 a97a
.org 0x4db8a
	movs r0, #16	@ 0004db8a 1020
.org 0x4db8c
	ands r0, r1	@ 0004db8c 0840
.org 0x4db8e
	cmp r0, #0	@ 0004db8e 0028
.org 0x4db90
	beq.n 0x4dbb0	@ 0004db90 0ed0
.org 0x4db92
	ldr r3, [pc, #24]	@ 0004db92 064b
.org 0x4db94
	lsls r4, r4, #3	@ 0004db94 e400
.org 0x4db96
	movs r0, #168	@ 0004db96 a820
.org 0x4db98
	lsls r0, r0, #1	@ 0004db98 4000
.org 0x4db9a
	adds r2, r6, r0	@ 0004db9a 3218
.org 0x4db9c
	ldrb r0, [r2, #0]	@ 0004db9c 1078
.org 0x4db9e
	lsls r0, r0, #4	@ 0004db9e 0001
.org 0x4dba0
	adds r0, r4, r0	@ 0004dba0 2018
.org 0x4dba2
	adds r0, r0, r3	@ 0004dba2 c018
.org 0x4dba4
	ldr r1, [r6, #84]	@ 0004dba4 716d
.org 0x4dba6
	ldr r0, [r0, #0]	@ 0004dba6 0068
.org 0x4dba8
	subs r1, r1, r0	@ 0004dba8 091a
.org 0x4dbaa
	b.n 0x4dbc8	@ 0004dbaa 0de0
.org 0x4dbac
	.byte 0x4c,0x35,0x85,0x08	@ 0004dbac data
.org 0x4dbb0
	ldr r3, [pc, #60]	@ 0004dbb0 0f4b
.org 0x4dbb2
	lsls r4, r4, #3	@ 0004dbb2 e400
.org 0x4dbb4
	movs r1, #168	@ 0004dbb4 a821
.org 0x4dbb6
	lsls r1, r1, #1	@ 0004dbb6 4900
.org 0x4dbb8
	adds r2, r6, r1	@ 0004dbb8 7218
.org 0x4dbba
	ldrb r0, [r2, #0]	@ 0004dbba 1078
.org 0x4dbbc
	lsls r0, r0, #4	@ 0004dbbc 0001
.org 0x4dbbe
	adds r0, r4, r0	@ 0004dbbe 2018
.org 0x4dbc0
	adds r0, r0, r3	@ 0004dbc0 c018
.org 0x4dbc2
	ldr r1, [r6, #84]	@ 0004dbc2 716d
.org 0x4dbc4
	ldr r0, [r0, #0]	@ 0004dbc4 0068
.org 0x4dbc6
	adds r1, r1, r0	@ 0004dbc6 0918
.org 0x4dbc8
	str r1, [r5, #84]	@ 0004dbc8 6965
.org 0x4dbca
	ldrb r0, [r2, #0]	@ 0004dbca 1078
.org 0x4dbcc
	lsls r0, r0, #4	@ 0004dbcc 0001
.org 0x4dbce
	adds r0, r4, r0	@ 0004dbce 2018
