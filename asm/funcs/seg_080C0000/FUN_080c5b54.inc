@ FUN_080c5b54  entry 0x080c5b54  size 262
.thumb
.org 0xc5b54
FUN_080c5b54:
	push {r4, r5, r6, r7, lr}	@ 000c5b54 f0b5
.org 0xc5b56
	adds r4, r0, #0	@ 000c5b56 041c
.org 0xc5b58
	ldr r0, [pc, #180]	@ 000c5b58 2d48
.org 0xc5b5a
	ldr r5, [r0, #0]	@ 000c5b5a 0568
.org 0xc5b5c
	movs r6, #0	@ 000c5b5c 0026
.org 0xc5b5e
	ldrb r0, [r4, #15]	@ 000c5b5e e07b
.org 0xc5b60
	cmp r0, #0	@ 000c5b60 0028
.org 0xc5b62
	bne.n 0xc5b92	@ 000c5b62 16d1
.org 0xc5b64
	movs r0, #64	@ 000c5b64 4020
.org 0xc5b66
	bl 0x2b10	@ 000c5b66 3cf7d3ff
.org 0xc5b6a
	ldrb r1, [r4, #10]	@ 000c5b6a a17a
.org 0xc5b6c
	movs r0, #1	@ 000c5b6c 0120
.org 0xc5b6e
	orrs r0, r1	@ 000c5b6e 0843
.org 0xc5b70
	strb r0, [r4, #10]	@ 000c5b70 a072
.org 0xc5b72
	adds r0, r4, #0	@ 000c5b72 201c
.org 0xc5b74
	adds r0, #116	@ 000c5b74 7430
.org 0xc5b76
	ldr r1, [pc, #156]	@ 000c5b76 2749
.org 0xc5b78
	bl 0x5784	@ 000c5b78 3ff704fe
.org 0xc5b7c
	movs r1, #172	@ 000c5b7c ac21
.org 0xc5b7e
	lsls r1, r1, #7	@ 000c5b7e c901
.org 0xc5b80
	adds r0, r4, #0	@ 000c5b80 201c
.org 0xc5b82
	bl 0x1cf00	@ 000c5b82 57f7bdf9
.org 0xc5b86
	movs r0, #150	@ 000c5b86 9620
.org 0xc5b88
	lsls r0, r0, #1	@ 000c5b88 4000
.org 0xc5b8a
	str r0, [r4, #100]	@ 000c5b8a 6066
.org 0xc5b8c
	ldrb r0, [r4, #15]	@ 000c5b8c e07b
.org 0xc5b8e
	adds r0, #1	@ 000c5b8e 0130
.org 0xc5b90
	strb r0, [r4, #15]	@ 000c5b90 e073
.org 0xc5b92
	adds r0, r4, #0	@ 000c5b92 201c
.org 0xc5b94
	bl 0x1cff0	@ 000c5b94 57f72cfa
.org 0xc5b98
	ldr r0, [r4, #100]	@ 000c5b98 606e
.org 0xc5b9a
	subs r0, #1	@ 000c5b9a 0138
.org 0xc5b9c
	str r0, [r4, #100]	@ 000c5b9c 6066
.org 0xc5b9e
	cmp r0, #0	@ 000c5b9e 0028
.org 0xc5ba0
	bne.n 0xc5ba4	@ 000c5ba0 00d1
.org 0xc5ba2
	movs r6, #1	@ 000c5ba2 0126
.org 0xc5ba4
	adds r0, r4, #0	@ 000c5ba4 201c
.org 0xc5ba6
	adds r0, #140	@ 000c5ba6 8c30
.org 0xc5ba8
	ldr r1, [r0, #0]	@ 000c5ba8 0168
.org 0xc5baa
	movs r2, #128	@ 000c5baa 8022
.org 0xc5bac
	lsls r2, r2, #4	@ 000c5bac 1201
.org 0xc5bae
	ands r1, r2	@ 000c5bae 1140
.org 0xc5bb0
	adds r7, r0, #0	@ 000c5bb0 071c
.org 0xc5bb2
	cmp r1, #0	@ 000c5bb2 0029
.org 0xc5bb4
	beq.n 0xc5bce	@ 000c5bb4 0bd0
.org 0xc5bb6
	cmp r5, #0	@ 000c5bb6 002d
.org 0xc5bb8
	beq.n 0xc5bce	@ 000c5bb8 09d0
.org 0xc5bba
	adds r0, r5, #0	@ 000c5bba 281c
.org 0xc5bbc
	adds r0, #140	@ 000c5bbc 8c30
.org 0xc5bbe
	ldr r0, [r0, #0]	@ 000c5bbe 0068
.org 0xc5bc0
	movs r2, #1	@ 000c5bc0 0122
.org 0xc5bc2
	ands r0, r2	@ 000c5bc2 1040
.org 0xc5bc4
	cmp r0, #0	@ 000c5bc4 0028
.org 0xc5bc6
	beq.n 0xc5bca	@ 000c5bc6 00d0
.org 0xc5bc8
	movs r6, #1	@ 000c5bc8 0126
.org 0xc5bca
	cmp r6, #0	@ 000c5bca 002e
.org 0xc5bcc
	beq.n 0xc5c1c	@ 000c5bcc 26d0
.org 0xc5bce
	movs r0, #63	@ 000c5bce 3f20
.org 0xc5bd0
	bl 0x2b10	@ 000c5bd0 3cf79eff
.org 0xc5bd4
	adds r0, r4, #0	@ 000c5bd4 201c
.org 0xc5bd6
	bl 0xc5fb8	@ 000c5bd6 00f0eff9
.org 0xc5bda
	ldrb r1, [r4, #10]	@ 000c5bda a17a
.org 0xc5bdc
	movs r0, #254	@ 000c5bdc fe20
.org 0xc5bde
	ands r0, r1	@ 000c5bde 0840
.org 0xc5be0
	movs r2, #0	@ 000c5be0 0022
.org 0xc5be2
	movs r1, #253	@ 000c5be2 fd21
.org 0xc5be4
	ands r0, r1	@ 000c5be4 0840
.org 0xc5be6
	strb r0, [r4, #10]	@ 000c5be6 a072
.org 0xc5be8
	str r2, [r7, #0]	@ 000c5be8 3a60
.org 0xc5bea
	adds r0, r4, #0	@ 000c5bea 201c
.org 0xc5bec
	adds r0, #144	@ 000c5bec 9030
.org 0xc5bee
	str r2, [r0, #0]	@ 000c5bee 0260
.org 0xc5bf0
	adds r0, #4	@ 000c5bf0 0430
.org 0xc5bf2
	strb r2, [r0, #0]	@ 000c5bf2 0270
.org 0xc5bf4
	ldrb r1, [r4, #10]	@ 000c5bf4 a17a
.org 0xc5bf6
	movs r0, #251	@ 000c5bf6 fb20
.org 0xc5bf8
	ands r0, r1	@ 000c5bf8 0840
.org 0xc5bfa
	strb r0, [r4, #10]	@ 000c5bfa a072
.org 0xc5bfc
	ldr r1, [pc, #24]	@ 000c5bfc 0649
.org 0xc5bfe
	ldrb r0, [r4, #9]	@ 000c5bfe 607a
.org 0xc5c00
	lsls r0, r0, #2	@ 000c5c00 8000
.org 0xc5c02
	adds r0, r0, r1	@ 000c5c02 4018
.org 0xc5c04
	movs r1, #3	@ 000c5c04 0321
.org 0xc5c06
	str r1, [r4, #12]	@ 000c5c06 e160
.org 0xc5c08
	ldr r0, [r0, #0]	@ 000c5c08 0068
.org 0xc5c0a
	ldr r0, [r0, #12]	@ 000c5c0a c068
.org 0xc5c0c
	str r0, [r4, #20]	@ 000c5c0c 6061
.org 0xc5c0e
	b.n 0xc5c66	@ 000c5c0e 2ae0
.org 0xc5c10
	.byte 0xf0,0xdb,0x02,0x02	@ 000c5c10 data
.org 0xc5c14
	.byte 0xd8,0x58,0x86,0x08	@ 000c5c14 data
.org 0xc5c18
	.byte 0xf4,0x49,0x86,0x08	@ 000c5c18 data
.org 0xc5c1c
	ldr r1, [pc, #32]	@ 000c5c1c 0849
.org 0xc5c1e
	adds r0, r5, r1	@ 000c5c1e 6818
.org 0xc5c20
	movs r7, #0	@ 000c5c20 0027
.org 0xc5c22
	movs r3, #1	@ 000c5c22 0123
.org 0xc5c24
	strb r2, [r0, #0]	@ 000c5c24 0270
.org 0xc5c26
	adds r1, #1	@ 000c5c26 0131
.org 0xc5c28
	adds r0, r5, r1	@ 000c5c28 6818
.org 0xc5c2a
	strb r6, [r0, #0]	@ 000c5c2a 0670
.org 0xc5c2c
	ldr r1, [r4, #100]	@ 000c5c2c 616e
.org 0xc5c2e
	cmp r1, #74	@ 000c5c2e 4a29
.org 0xc5c30
	bgt.n 0xc5c44	@ 000c5c30 08dc
.org 0xc5c32
	ands r1, r2	@ 000c5c32 1140
.org 0xc5c34
	cmp r1, #0	@ 000c5c34 0029
.org 0xc5c36
	beq.n 0xc5c52	@ 000c5c36 0cd0
.org 0xc5c38
	ldrb r0, [r4, #10]	@ 000c5c38 a07a
.org 0xc5c3a
	orrs r0, r3	@ 000c5c3a 1843
.org 0xc5c3c
	b.n 0xc5c58	@ 000c5c3c 0ce0
.org 0xc5c3e
	.byte 0x00	@ 000c5c3e data
.org 0xc5c3f
	.byte 0x00	@ 000c5c3f data
.org 0xc5c40
	.byte 0x71,0x01,0x00,0x00	@ 000c5c40 data
.org 0xc5c44
	movs r0, #3	@ 000c5c44 0320
.org 0xc5c46
	ands r1, r0	@ 000c5c46 0140
.org 0xc5c48
	cmp r1, #0	@ 000c5c48 0029
.org 0xc5c4a
	beq.n 0xc5c52	@ 000c5c4a 02d0
.org 0xc5c4c
	ldrb r0, [r4, #10]	@ 000c5c4c a07a
.org 0xc5c4e
	orrs r0, r3	@ 000c5c4e 1843
.org 0xc5c50
	b.n 0xc5c58	@ 000c5c50 02e0
.org 0xc5c52
	ldrb r1, [r4, #10]	@ 000c5c52 a17a
.org 0xc5c54
	movs r0, #254	@ 000c5c54 fe20
.org 0xc5c56
	ands r0, r1	@ 000c5c56 0840
.org 0xc5c58
	strb r0, [r4, #10]	@ 000c5c58 a072
