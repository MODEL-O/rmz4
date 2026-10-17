@ FUN_08055e58  entry 0x08055e58  size 148
.thumb
.org 0x55e58
FUN_08055e58:
	push {r4, lr}	@ 00055e58 10b5
.org 0x55e5a
	adds r4, r0, #0	@ 00055e5a 041c
.org 0x55e5c
	ldrb r0, [r4, #15]	@ 00055e5c e07b
.org 0x55e5e
	cmp r0, #0	@ 00055e5e 0028
.org 0x55e60
	bne.n 0x55e7e	@ 00055e60 0dd1
.org 0x55e62
	ldrb r1, [r4, #10]	@ 00055e62 a17a
.org 0x55e64
	movs r0, #254	@ 00055e64 fe20
.org 0x55e66
	ands r0, r1	@ 00055e66 0840
.org 0x55e68
	strb r0, [r4, #10]	@ 00055e68 a072
.org 0x55e6a
	adds r0, r4, #0	@ 00055e6a 201c
.org 0x55e6c
	adds r0, #116	@ 00055e6c 7430
.org 0x55e6e
	ldr r1, [pc, #100]	@ 00055e6e 1949
.org 0x55e70
	bl 0x5784	@ 00055e70 aff788fc
.org 0x55e74
	movs r0, #48	@ 00055e74 3020
.org 0x55e76
	strb r0, [r4, #18]	@ 00055e76 a074
.org 0x55e78
	ldrb r0, [r4, #15]	@ 00055e78 e07b
.org 0x55e7a
	adds r0, #1	@ 00055e7a 0130
.org 0x55e7c
	strb r0, [r4, #15]	@ 00055e7c e073
.org 0x55e7e
	ldrb r0, [r4, #18]	@ 00055e7e a07c
.org 0x55e80
	subs r0, #1	@ 00055e80 0138
.org 0x55e82
	strb r0, [r4, #18]	@ 00055e82 a074
.org 0x55e84
	lsls r0, r0, #24	@ 00055e84 0006
.org 0x55e86
	cmp r0, #0	@ 00055e86 0028
.org 0x55e88
	bne.n 0x55eee	@ 00055e88 31d1
.org 0x55e8a
	adds r0, r4, #0	@ 00055e8a 201c
.org 0x55e8c
	bl 0x59844	@ 00055e8c 03f0dafc
.org 0x55e90
	str r0, [r4, #84]	@ 00055e90 6065
.org 0x55e92
	movs r3, #0	@ 00055e92 0023
.org 0x55e94
	ldr r1, [pc, #64]	@ 00055e94 1049
.org 0x55e96
	ldr r2, [r1, #0]	@ 00055e96 0a68
.org 0x55e98
	ldr r1, [r2, #84]	@ 00055e98 516d
.org 0x55e9a
	cmp r0, r1	@ 00055e9a 8842
.org 0x55e9c
	bge.n 0x55ea0	@ 00055e9c 00da
.org 0x55e9e
	movs r3, #1	@ 00055e9e 0123
.org 0x55ea0
	adds r0, r4, #0	@ 00055ea0 201c
.org 0x55ea2
	adds r0, #76	@ 00055ea2 4c30
.org 0x55ea4
	strb r3, [r0, #0]	@ 00055ea4 0370
.org 0x55ea6
	movs r3, #0	@ 00055ea6 0023
.org 0x55ea8
	ldr r1, [r4, #84]	@ 00055ea8 616d
.org 0x55eaa
	ldr r0, [r2, #84]	@ 00055eaa 506d
.org 0x55eac
	cmp r1, r0	@ 00055eac 8142
.org 0x55eae
	bge.n 0x55eb2	@ 00055eae 00da
.org 0x55eb0
	movs r3, #1	@ 00055eb0 0123
.org 0x55eb2
	movs r0, #74	@ 00055eb2 4a20
.org 0x55eb4
	adds r0, r0, r4	@ 00055eb4 0019
.org 0x55eb6
	mov ip, r0	@ 00055eb6 8446
.org 0x55eb8
	lsls r2, r3, #4	@ 00055eb8 1a01
.org 0x55eba
	ldrb r1, [r0, #0]	@ 00055eba 0178
.org 0x55ebc
	movs r0, #17	@ 00055ebc 1120
.org 0x55ebe
	negs r0, r0	@ 00055ebe 4042
.org 0x55ec0
	ands r0, r1	@ 00055ec0 0840
.org 0x55ec2
	orrs r0, r2	@ 00055ec2 1043
.org 0x55ec4
	mov r1, ip	@ 00055ec4 6146
.org 0x55ec6
	strb r0, [r1, #0]	@ 00055ec6 0870
.org 0x55ec8
	cmp r3, #0	@ 00055ec8 002b
.org 0x55eca
	beq.n 0x55edc	@ 00055eca 07d0
.org 0x55ecc
	ldrb r0, [r4, #10]	@ 00055ecc a07a
.org 0x55ece
	movs r1, #16	@ 00055ece 1021
.org 0x55ed0
	orrs r0, r1	@ 00055ed0 0843
.org 0x55ed2
	b.n 0x55ee2	@ 00055ed2 06e0
.org 0x55ed4
	.byte 0xcc,0x84,0x85,0x08	@ 00055ed4 data
.org 0x55ed8
	.byte 0xf0,0xdb,0x02,0x02	@ 00055ed8 data
.org 0x55edc
	ldrb r1, [r4, #10]	@ 00055edc a17a
.org 0x55ede
	movs r0, #239	@ 00055ede ef20
.org 0x55ee0
	ands r0, r1	@ 00055ee0 0840
.org 0x55ee2
	strb r0, [r4, #10]	@ 00055ee2 a072
.org 0x55ee4
	movs r1, #0	@ 00055ee4 0021
.org 0x55ee6
	movs r0, #13	@ 00055ee6 0d20
.org 0x55ee8
	strb r0, [r4, #13]	@ 00055ee8 6073
.org 0x55eea
	strb r1, [r4, #14]	@ 00055eea a173
