@ FUN_080e2a0c  entry 0x080e2a0c  size 146
.thumb
.org 0xe2a0c
FUN_080e2a0c:
	push {r4, lr}	@ 000e2a0c 10b5
.org 0xe2a0e
	adds r4, r0, #0	@ 000e2a0e 041c
.org 0xe2a10
	ldrb r0, [r4, #17]	@ 000e2a10 607c
.org 0xe2a12
	cmp r0, #0	@ 000e2a12 0028
.org 0xe2a14
	bne.n 0xe2a38	@ 000e2a14 10d1
.org 0xe2a16
	movs r0, #128	@ 000e2a16 8020
.org 0xe2a18
	lsls r0, r0, #1	@ 000e2a18 4000
.org 0xe2a1a
	str r0, [r4, #92]	@ 000e2a1a e065
.org 0xe2a1c
	movs r0, #16	@ 000e2a1c 1020
.org 0xe2a1e
	negs r0, r0	@ 000e2a1e 4042
.org 0xe2a20
	str r0, [r4, #100]	@ 000e2a20 6066
.org 0xe2a22
	ldr r1, [pc, #16]	@ 000e2a22 0449
.org 0xe2a24
	adds r0, r4, #0	@ 000e2a24 201c
.org 0xe2a26
	bl 0x1cf00	@ 000e2a26 3af76bfa
.org 0xe2a2a
	adds r1, r4, #0	@ 000e2a2a 211c
.org 0xe2a2c
	adds r1, #37	@ 000e2a2c 2531
.org 0xe2a2e
	movs r0, #24	@ 000e2a2e 1820
.org 0xe2a30
	strb r0, [r1, #0]	@ 000e2a30 0870
.org 0xe2a32
	b.n 0xe2a48	@ 000e2a32 09e0
.org 0xe2a34
	.byte 0x09,0x94,0x00,0x00	@ 000e2a34 data
.org 0xe2a38
	ldr r0, [pc, #104]	@ 000e2a38 1a48
.org 0xe2a3a
	str r0, [r4, #92]	@ 000e2a3a e065
.org 0xe2a3c
	movs r0, #16	@ 000e2a3c 1020
.org 0xe2a3e
	str r0, [r4, #100]	@ 000e2a3e 6066
.org 0xe2a40
	ldr r1, [pc, #100]	@ 000e2a40 1949
.org 0xe2a42
	adds r0, r4, #0	@ 000e2a42 201c
.org 0xe2a44
	bl 0x1cf00	@ 000e2a44 3af75cfa
.org 0xe2a48
	adds r0, r4, #0	@ 000e2a48 201c
.org 0xe2a4a
	adds r0, #117	@ 000e2a4a 7530
.org 0xe2a4c
	ldrb r2, [r0, #0]	@ 000e2a4c 0278
.org 0xe2a4e
	cmp r2, #1	@ 000e2a4e 012a
.org 0xe2a50
	bne.n 0xe2a92	@ 000e2a50 1fd1
.org 0xe2a52
	ldr r0, [r4, #92]	@ 000e2a52 e06d
.org 0xe2a54
	lsls r0, r0, #8	@ 000e2a54 0002
.org 0xe2a56
	negs r0, r0	@ 000e2a56 4042
.org 0xe2a58
	cmp r0, #0	@ 000e2a58 0028
.org 0xe2a5a
	bge.n 0xe2a5e	@ 000e2a5a 00da
.org 0xe2a5c
	adds r0, #255	@ 000e2a5c ff30
.org 0xe2a5e
	asrs r0, r0, #8	@ 000e2a5e 0012
.org 0xe2a60
	str r0, [r4, #92]	@ 000e2a60 e065
.org 0xe2a62
	ldr r0, [r4, #100]	@ 000e2a62 606e
.org 0xe2a64
	lsls r0, r0, #8	@ 000e2a64 0002
.org 0xe2a66
	negs r0, r0	@ 000e2a66 4042
.org 0xe2a68
	cmp r0, #0	@ 000e2a68 0028
.org 0xe2a6a
	bge.n 0xe2a6e	@ 000e2a6a 00da
.org 0xe2a6c
	adds r0, #255	@ 000e2a6c ff30
.org 0xe2a6e
	asrs r0, r0, #8	@ 000e2a6e 0012
.org 0xe2a70
	str r0, [r4, #100]	@ 000e2a70 6066
.org 0xe2a72
	ldrb r1, [r4, #10]	@ 000e2a72 a17a
.org 0xe2a74
	movs r0, #16	@ 000e2a74 1020
.org 0xe2a76
	orrs r0, r1	@ 000e2a76 0843
.org 0xe2a78
	strb r0, [r4, #10]	@ 000e2a78 a072
.org 0xe2a7a
	adds r0, r4, #0	@ 000e2a7a 201c
.org 0xe2a7c
	adds r0, #76	@ 000e2a7c 4c30
.org 0xe2a7e
	strb r2, [r0, #0]	@ 000e2a7e 0270
.org 0xe2a80
	adds r3, r4, #0	@ 000e2a80 231c
.org 0xe2a82
	adds r3, #74	@ 000e2a82 4a33
.org 0xe2a84
	movs r2, #16	@ 000e2a84 1022
.org 0xe2a86
	ldrb r1, [r3, #0]	@ 000e2a86 1978
.org 0xe2a88
	movs r0, #17	@ 000e2a88 1120
.org 0xe2a8a
	negs r0, r0	@ 000e2a8a 4042
.org 0xe2a8c
	ands r0, r1	@ 000e2a8c 0840
.org 0xe2a8e
	orrs r0, r2	@ 000e2a8e 1043
.org 0xe2a90
	strb r0, [r3, #0]	@ 000e2a90 1870
.org 0xe2a92
	movs r0, #128	@ 000e2a92 8020
.org 0xe2a94
	lsls r0, r0, #1	@ 000e2a94 4000
.org 0xe2a96
	str r0, [r4, #120]	@ 000e2a96 a067
.org 0xe2a98
	movs r0, #0	@ 000e2a98 0020
.org 0xe2a9a
	strb r0, [r4, #13]	@ 000e2a9a 6073
.org 0xe2a9c
	pop {r4}	@ 000e2a9c 10bc
