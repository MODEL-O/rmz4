@ FUN_080a7b94  entry 0x080a7b94  size 236
.thumb
.org 0xa7b94
FUN_080a7b94:
	push {r4, r5, lr}	@ 000a7b94 30b5
.org 0xa7b96
	adds r5, r0, #0	@ 000a7b96 051c
.org 0xa7b98
	bl 0x1cc9c	@ 000a7b98 75f780f8
.org 0xa7b9c
	ldrb r1, [r5, #10]	@ 000a7b9c a97a
.org 0xa7b9e
	movs r0, #1	@ 000a7b9e 0120
.org 0xa7ba0
	movs r4, #0	@ 000a7ba0 0024
.org 0xa7ba2
	orrs r0, r1	@ 000a7ba2 0843
.org 0xa7ba4
	movs r1, #2	@ 000a7ba4 0221
.org 0xa7ba6
	orrs r0, r1	@ 000a7ba6 0843
.org 0xa7ba8
	strb r0, [r5, #10]	@ 000a7ba8 a872
.org 0xa7baa
	adds r1, r5, #0	@ 000a7baa 291c
.org 0xa7bac
	adds r1, #34	@ 000a7bac 2231
.org 0xa7bae
	movs r0, #1	@ 000a7bae 0120
.org 0xa7bb0
	strb r0, [r1, #0]	@ 000a7bb0 0870
.org 0xa7bb2
	ldr r1, [pc, #28]	@ 000a7bb2 0749
.org 0xa7bb4
	adds r0, r5, #0	@ 000a7bb4 281c
.org 0xa7bb6
	bl 0x1cf00	@ 000a7bb6 75f7a3f9
.org 0xa7bba
	adds r0, r5, #0	@ 000a7bba 281c
.org 0xa7bbc
	bl 0x1cff0	@ 000a7bbc 75f718fa
.org 0xa7bc0
	ldrb r2, [r5, #17]	@ 000a7bc0 6a7c
.org 0xa7bc2
	cmp r2, #0	@ 000a7bc2 002a
.org 0xa7bc4
	beq.n 0xa7bd4	@ 000a7bc4 06d0
.org 0xa7bc6
	ldrb r0, [r5, #10]	@ 000a7bc6 a87a
.org 0xa7bc8
	movs r1, #16	@ 000a7bc8 1021
.org 0xa7bca
	orrs r0, r1	@ 000a7bca 0843
.org 0xa7bcc
	b.n 0xa7bda	@ 000a7bcc 05e0
.org 0xa7bce
	.byte 0x00	@ 000a7bce data
.org 0xa7bcf
	.byte 0x00	@ 000a7bcf data
.org 0xa7bd0
	.byte 0x05,0x8d,0x00,0x00	@ 000a7bd0 data
.org 0xa7bd4
	ldrb r1, [r5, #10]	@ 000a7bd4 a97a
.org 0xa7bd6
	movs r0, #239	@ 000a7bd6 ef20
.org 0xa7bd8
	ands r0, r1	@ 000a7bd8 0840
.org 0xa7bda
	strb r0, [r5, #10]	@ 000a7bda a872
.org 0xa7bdc
	movs r1, #1	@ 000a7bdc 0121
.org 0xa7bde
	ands r1, r2	@ 000a7bde 1140
.org 0xa7be0
	adds r0, r5, #0	@ 000a7be0 281c
.org 0xa7be2
	adds r0, #76	@ 000a7be2 4c30
.org 0xa7be4
	strb r1, [r0, #0]	@ 000a7be4 0170
.org 0xa7be6
	adds r3, r5, #0	@ 000a7be6 2b1c
.org 0xa7be8
	adds r3, #74	@ 000a7be8 4a33
.org 0xa7bea
	lsls r1, r1, #4	@ 000a7bea 0901
.org 0xa7bec
	ldrb r2, [r3, #0]	@ 000a7bec 1a78
.org 0xa7bee
	movs r0, #17	@ 000a7bee 1120
.org 0xa7bf0
	negs r0, r0	@ 000a7bf0 4042
.org 0xa7bf2
	ands r0, r2	@ 000a7bf2 1040
.org 0xa7bf4
	orrs r0, r1	@ 000a7bf4 0843
.org 0xa7bf6
	strb r0, [r3, #0]	@ 000a7bf6 1870
.org 0xa7bf8
	adds r1, r5, #0	@ 000a7bf8 291c
.org 0xa7bfa
	adds r1, #37	@ 000a7bfa 2531
.org 0xa7bfc
	movs r0, #20	@ 000a7bfc 1420
.org 0xa7bfe
	strb r0, [r1, #0]	@ 000a7bfe 0870
.org 0xa7c00
	ldrb r1, [r5, #10]	@ 000a7c00 a97a
.org 0xa7c02
	movs r0, #4	@ 000a7c02 0420
.org 0xa7c04
	orrs r0, r1	@ 000a7c04 0843
.org 0xa7c06
	strb r0, [r5, #10]	@ 000a7c06 a872
.org 0xa7c08
	adds r4, r5, #0	@ 000a7c08 2c1c
.org 0xa7c0a
	adds r4, #116	@ 000a7c0a 7434
.org 0xa7c0c
	ldr r1, [pc, #32]	@ 000a7c0c 0849
.org 0xa7c0e
	adds r2, r5, #0	@ 000a7c0e 2a1c
.org 0xa7c10
	adds r2, #84	@ 000a7c10 5432
.org 0xa7c12
	adds r0, r4, #0	@ 000a7c12 201c
.org 0xa7c14
	movs r3, #8	@ 000a7c14 0823
.org 0xa7c16
	bl 0x5760	@ 000a7c16 5df7a3fd
.org 0xa7c1a
	str r5, [r4, #44]	@ 000a7c1a e562
.org 0xa7c1c
	ldr r0, [pc, #20]	@ 000a7c1c 0548
.org 0xa7c1e
	str r0, [r4, #36]	@ 000a7c1e 6062
.org 0xa7c20
	ldrb r0, [r5, #17]	@ 000a7c20 687c
.org 0xa7c22
	cmp r0, #0	@ 000a7c22 0028
.org 0xa7c24
	beq.n 0xa7c38	@ 000a7c24 08d0
.org 0xa7c26
	ldr r0, [r5, #84]	@ 000a7c26 686d
.org 0xa7c28
	movs r1, #192	@ 000a7c28 c021
.org 0xa7c2a
	lsls r1, r1, #6	@ 000a7c2a 8901
.org 0xa7c2c
	b.n 0xa7c3c	@ 000a7c2c 06e0
.org 0xa7c2e
	.byte 0x00	@ 000a7c2e data
.org 0xa7c2f
	.byte 0x00	@ 000a7c2f data
.org 0xa7c30
	.byte 0x54,0x27,0x86,0x08	@ 000a7c30 data
.org 0xa7c34
	.byte 0x21,0x88,0x0a,0x08	@ 000a7c34 data
.org 0xa7c38
	ldr r0, [r5, #84]	@ 000a7c38 686d
.org 0xa7c3a
	ldr r1, [pc, #84]	@ 000a7c3a 1549
.org 0xa7c3c
	adds r0, r0, r1	@ 000a7c3c 4018
.org 0xa7c3e
	str r0, [r5, #84]	@ 000a7c3e 6865
.org 0xa7c40
	ldr r0, [r5, #88]	@ 000a7c40 a86d
.org 0xa7c42
	movs r1, #160	@ 000a7c42 a021
.org 0xa7c44
	lsls r1, r1, #6	@ 000a7c44 8901
.org 0xa7c46
	adds r0, r0, r1	@ 000a7c46 4018
.org 0xa7c48
	str r0, [r5, #88]	@ 000a7c48 a865
.org 0xa7c4a
	adds r1, r5, #0	@ 000a7c4a 291c
.org 0xa7c4c
	adds r1, #180	@ 000a7c4c b431
.org 0xa7c4e
	ldr r0, [r5, #84]	@ 000a7c4e 686d
.org 0xa7c50
	str r0, [r1, #0]	@ 000a7c50 0860
.org 0xa7c52
	adds r1, #4	@ 000a7c52 0431
.org 0xa7c54
	ldr r0, [r5, #88]	@ 000a7c54 a86d
.org 0xa7c56
	str r0, [r1, #0]	@ 000a7c56 0860
.org 0xa7c58
	adds r2, r5, #0	@ 000a7c58 2a1c
.org 0xa7c5a
	adds r2, #188	@ 000a7c5a bc32
.org 0xa7c5c
	movs r1, #0	@ 000a7c5c 0021
.org 0xa7c5e
	movs r0, #128	@ 000a7c5e 8020
.org 0xa7c60
	lsls r0, r0, #4	@ 000a7c60 0001
.org 0xa7c62
	strh r0, [r2, #0]	@ 000a7c62 1080
.org 0xa7c64
	adds r0, r5, #0	@ 000a7c64 281c
.org 0xa7c66
	adds r0, #190	@ 000a7c66 be30
.org 0xa7c68
	strb r1, [r0, #0]	@ 000a7c68 0170
.org 0xa7c6a
	adds r0, #1	@ 000a7c6a 0130
.org 0xa7c6c
	strb r1, [r0, #0]	@ 000a7c6c 0170
.org 0xa7c6e
	adds r0, #1	@ 000a7c6e 0130
.org 0xa7c70
	strb r1, [r0, #0]	@ 000a7c70 0170
.org 0xa7c72
	ldr r1, [pc, #32]	@ 000a7c72 0849
.org 0xa7c74
	ldrb r0, [r5, #9]	@ 000a7c74 687a
.org 0xa7c76
	lsls r0, r0, #2	@ 000a7c76 8000
.org 0xa7c78
	adds r0, r0, r1	@ 000a7c78 4018
.org 0xa7c7a
	movs r1, #1	@ 000a7c7a 0121
.org 0xa7c7c
	str r1, [r5, #12]	@ 000a7c7c e960
.org 0xa7c7e
	ldr r0, [r0, #0]	@ 000a7c7e 0068
