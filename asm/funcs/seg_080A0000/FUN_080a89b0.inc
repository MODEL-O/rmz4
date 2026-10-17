@ FUN_080a89b0  entry 0x080a89b0  size 252
.thumb
.org 0xa89b0
FUN_080a89b0:
	push {r4, lr}	@ 000a89b0 10b5
.org 0xa89b2
	adds r4, r0, #0	@ 000a89b2 041c
.org 0xa89b4
	ldrb r2, [r4, #14]	@ 000a89b4 a27b
.org 0xa89b6
	cmp r2, #0	@ 000a89b6 002a
.org 0xa89b8
	bne.n 0xa89e2	@ 000a89b8 13d1
.org 0xa89ba
	ldr r1, [pc, #76]	@ 000a89ba 1349
.org 0xa89bc
	ldrb r0, [r4, #16]	@ 000a89bc 207c
.org 0xa89be
	adds r0, r0, r1	@ 000a89be 4018
.org 0xa89c0
	ldrb r0, [r0, #0]	@ 000a89c0 0078
.org 0xa89c2
	strb r0, [r4, #18]	@ 000a89c2 a074
.org 0xa89c4
	str r2, [r4, #96]	@ 000a89c4 2266
.org 0xa89c6
	adds r0, r4, #0	@ 000a89c6 201c
.org 0xa89c8
	adds r0, #140	@ 000a89c8 8c30
.org 0xa89ca
	str r2, [r0, #0]	@ 000a89ca 0260
.org 0xa89cc
	adds r0, #4	@ 000a89cc 0430
.org 0xa89ce
	str r2, [r0, #0]	@ 000a89ce 0260
.org 0xa89d0
	adds r0, #4	@ 000a89d0 0430
.org 0xa89d2
	strb r2, [r0, #0]	@ 000a89d2 0270
.org 0xa89d4
	ldrb r1, [r4, #10]	@ 000a89d4 a17a
.org 0xa89d6
	movs r0, #251	@ 000a89d6 fb20
.org 0xa89d8
	ands r0, r1	@ 000a89d8 0840
.org 0xa89da
	strb r0, [r4, #10]	@ 000a89da a072
.org 0xa89dc
	ldrb r0, [r4, #14]	@ 000a89dc a07b
.org 0xa89de
	adds r0, #1	@ 000a89de 0130
.org 0xa89e0
	strb r0, [r4, #14]	@ 000a89e0 a073
.org 0xa89e2
	adds r0, r4, #0	@ 000a89e2 201c
.org 0xa89e4
	bl 0x1cff0	@ 000a89e4 74f704fb
.org 0xa89e8
	ldrb r2, [r4, #15]	@ 000a89e8 e27b
.org 0xa89ea
	adds r1, r2, #0	@ 000a89ea 111c
.org 0xa89ec
	cmp r1, #0	@ 000a89ec 0029
.org 0xa89ee
	bne.n 0xa8a0c	@ 000a89ee 0dd1
.org 0xa89f0
	ldrb r0, [r4, #18]	@ 000a89f0 a07c
.org 0xa89f2
	subs r0, #1	@ 000a89f2 0138
.org 0xa89f4
	strb r0, [r4, #18]	@ 000a89f4 a074
.org 0xa89f6
	lsls r0, r0, #24	@ 000a89f6 0006
.org 0xa89f8
	lsrs r0, r0, #24	@ 000a89f8 000e
.org 0xa89fa
	cmp r0, #255	@ 000a89fa ff28
.org 0xa89fc
	bne.n 0xa8aba	@ 000a89fc 5dd1
.org 0xa89fe
	strb r1, [r4, #18]	@ 000a89fe a174
.org 0xa8a00
	adds r0, r2, #1	@ 000a8a00 501c
.org 0xa8a02
	strb r0, [r4, #15]	@ 000a8a02 e073
.org 0xa8a04
	b.n 0xa8aba	@ 000a8a04 59e0
.org 0xa8a06
	.byte 0x00	@ 000a8a06 data
.org 0xa8a07
	.byte 0x00	@ 000a8a07 data
.org 0xa8a08
	.byte 0xe0,0x27,0x86,0x08	@ 000a8a08 data
.org 0xa8a0c
	cmp r1, #1	@ 000a8a0c 0129
.org 0xa8a0e
	bne.n 0xa8a74	@ 000a8a0e 31d1
.org 0xa8a10
	ldrb r1, [r4, #18]	@ 000a8a10 a17c
.org 0xa8a12
	movs r0, #3	@ 000a8a12 0320
.org 0xa8a14
	ands r0, r1	@ 000a8a14 0840
.org 0xa8a16
	cmp r0, #0	@ 000a8a16 0028
.org 0xa8a18
	bne.n 0xa8a4a	@ 000a8a18 17d1
.org 0xa8a1a
	adds r0, r4, #0	@ 000a8a1a 201c
.org 0xa8a1c
	adds r0, #84	@ 000a8a1c 5430
.org 0xa8a1e
	ldr r3, [pc, #72]	@ 000a8a1e 124b
.org 0xa8a20
	ldr r2, [r3, #0]	@ 000a8a20 1a68
.org 0xa8a22
	ldr r1, [pc, #72]	@ 000a8a22 1249
.org 0xa8a24
	muls r1, r2	@ 000a8a24 5143
.org 0xa8a26
	ldr r2, [pc, #72]	@ 000a8a26 124a
.org 0xa8a28
	adds r1, r1, r2	@ 000a8a28 8918
.org 0xa8a2a
	lsls r1, r1, #1	@ 000a8a2a 4900
.org 0xa8a2c
	lsrs r2, r1, #1	@ 000a8a2c 4a08
.org 0xa8a2e
	str r2, [r3, #0]	@ 000a8a2e 1a60
.org 0xa8a30
	lsrs r1, r1, #17	@ 000a8a30 490c
.org 0xa8a32
	lsls r1, r1, #24	@ 000a8a32 0906
.org 0xa8a34
	lsrs r1, r1, #24	@ 000a8a34 090e
.org 0xa8a36
	movs r2, #128	@ 000a8a36 8022
.org 0xa8a38
	lsls r2, r2, #2	@ 000a8a38 9200
.org 0xa8a3a
	adds r3, r4, #0	@ 000a8a3a 231c
.org 0xa8a3c
	adds r3, #37	@ 000a8a3c 2533
.org 0xa8a3e
	ldrb r3, [r3, #0]	@ 000a8a3e 1b78
.org 0xa8a40
	adds r3, #1	@ 000a8a40 0133
.org 0xa8a42
	lsls r3, r3, #24	@ 000a8a42 1b06
.org 0xa8a44
	lsrs r3, r3, #24	@ 000a8a44 1b0e
.org 0xa8a46
	bl 0xe1b98	@ 000a8a46 39f0a7f8
.org 0xa8a4a
	ldrb r0, [r4, #18]	@ 000a8a4a a07c
.org 0xa8a4c
	adds r1, r0, #1	@ 000a8a4c 411c
.org 0xa8a4e
	strb r1, [r4, #18]	@ 000a8a4e a174
.org 0xa8a50
	lsls r0, r0, #24	@ 000a8a50 0006
.org 0xa8a52
	lsrs r0, r0, #24	@ 000a8a52 000e
.org 0xa8a54
	cmp r0, #32	@ 000a8a54 2028
.org 0xa8a56
	bls.n 0xa8aba	@ 000a8a56 30d9
.org 0xa8a58
	movs r0, #166	@ 000a8a58 a620
.org 0xa8a5a
	bl 0x2b10	@ 000a8a5a 5af759f8
.org 0xa8a5e
	ldrb r0, [r4, #15]	@ 000a8a5e e07b
.org 0xa8a60
	adds r0, #1	@ 000a8a60 0130
.org 0xa8a62
	strb r0, [r4, #15]	@ 000a8a62 e073
.org 0xa8a64
	b.n 0xa8aba	@ 000a8a64 29e0
.org 0xa8a66
	.byte 0x00	@ 000a8a66 data
.org 0xa8a67
	.byte 0x00	@ 000a8a67 data
.org 0xa8a68
	.byte 0x38,0xdc,0x02,0x02	@ 000a8a68 data
.org 0xa8a6c
	.byte 0xfd,0x43,0x03,0x00	@ 000a8a6c data
.org 0xa8a70
	.byte 0xc3,0x9e,0x26,0x00	@ 000a8a70 data
.org 0xa8a74
	ldr r0, [r4, #88]	@ 000a8a74 a06d
.org 0xa8a76
	ldr r1, [r4, #96]	@ 000a8a76 216e
.org 0xa8a78
	adds r0, r0, r1	@ 000a8a78 4018
.org 0xa8a7a
	str r0, [r4, #88]	@ 000a8a7a a065
.org 0xa8a7c
	adds r1, #64	@ 000a8a7c 4031
.org 0xa8a7e
	str r1, [r4, #96]	@ 000a8a7e 2166
.org 0xa8a80
	ldrb r1, [r4, #18]	@ 000a8a80 a17c
.org 0xa8a82
	movs r0, #1	@ 000a8a82 0120
.org 0xa8a84
	ands r0, r1	@ 000a8a84 0840
.org 0xa8a86
	adds r2, r1, #0	@ 000a8a86 0a1c
.org 0xa8a88
	cmp r0, #0	@ 000a8a88 0028
.org 0xa8a8a
	beq.n 0xa8a94	@ 000a8a8a 03d0
.org 0xa8a8c
	ldrb r1, [r4, #10]	@ 000a8a8c a17a
.org 0xa8a8e
	movs r0, #1	@ 000a8a8e 0120
.org 0xa8a90
	orrs r0, r1	@ 000a8a90 0843
.org 0xa8a92
	b.n 0xa8a9a	@ 000a8a92 02e0
.org 0xa8a94
	ldrb r1, [r4, #10]	@ 000a8a94 a17a
.org 0xa8a96
	movs r0, #254	@ 000a8a96 fe20
.org 0xa8a98
	ands r0, r1	@ 000a8a98 0840
.org 0xa8a9a
	strb r0, [r4, #10]	@ 000a8a9a a072
.org 0xa8a9c
	adds r0, r2, #1	@ 000a8a9c 501c
.org 0xa8a9e
	strb r0, [r4, #18]	@ 000a8a9e a074
.org 0xa8aa0
	lsls r0, r2, #24	@ 000a8aa0 1006
.org 0xa8aa2
	lsrs r0, r0, #24	@ 000a8aa2 000e
.org 0xa8aa4
	cmp r0, #120	@ 000a8aa4 7828
.org 0xa8aa6
	bls.n 0xa8aba	@ 000a8aa6 08d9
.org 0xa8aa8
	ldr r1, [pc, #20]	@ 000a8aa8 0549
.org 0xa8aaa
	ldrb r0, [r4, #9]	@ 000a8aaa 607a
