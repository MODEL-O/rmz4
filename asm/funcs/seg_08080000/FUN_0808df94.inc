@ FUN_0808df94  entry 0x0808df94  size 194
.thumb
.org 0x8df94
FUN_0808df94:
	push {r4, lr}	@ 0008df94 10b5
.org 0x8df96
	adds r4, r0, #0	@ 0008df96 041c
.org 0x8df98
	ldr r1, [r4, #40]	@ 0008df98 a16a
.org 0x8df9a
	ldrb r0, [r1, #12]	@ 0008df9a 087b
.org 0x8df9c
	cmp r0, #1	@ 0008df9c 0128
.org 0x8df9e
	bls.n 0x8dfc0	@ 0008df9e 0fd9
.org 0x8dfa0
	ldr r1, [pc, #24]	@ 0008dfa0 0649
.org 0x8dfa2
	ldrb r0, [r4, #9]	@ 0008dfa2 607a
.org 0x8dfa4
	lsls r0, r0, #2	@ 0008dfa4 8000
.org 0x8dfa6
	adds r0, r0, r1	@ 0008dfa6 4018
.org 0x8dfa8
	movs r1, #2	@ 0008dfa8 0221
.org 0x8dfaa
	str r1, [r4, #12]	@ 0008dfaa e160
.org 0x8dfac
	ldr r0, [r0, #0]	@ 0008dfac 0068
.org 0x8dfae
	ldr r0, [r0, #8]	@ 0008dfae 8068
.org 0x8dfb0
	str r0, [r4, #20]	@ 0008dfb0 6061
.org 0x8dfb2
	adds r0, r4, #0	@ 0008dfb2 201c
.org 0x8dfb4
	bl 0x8e6e0	@ 0008dfb4 00f094fb
.org 0x8dfb8
	b.n 0x8e056	@ 0008dfb8 4de0
.org 0x8dfba
	.byte 0x00	@ 0008dfba data
.org 0x8dfbb
	.byte 0x00	@ 0008dfbb data
.org 0x8dfbc
	.byte 0x40,0xdb,0x85,0x08	@ 0008dfbc data
.org 0x8dfc0
	adds r0, r1, #0	@ 0008dfc0 081c
.org 0x8dfc2
	adds r0, #182	@ 0008dfc2 b630
.org 0x8dfc4
	ldrb r1, [r0, #0]	@ 0008dfc4 0178
.org 0x8dfc6
	movs r2, #1	@ 0008dfc6 0122
.org 0x8dfc8
	movs r0, #1	@ 0008dfc8 0120
.org 0x8dfca
	ands r0, r1	@ 0008dfca 0840
.org 0x8dfcc
	cmp r0, #0	@ 0008dfcc 0028
.org 0x8dfce
	beq.n 0x8dff0	@ 0008dfce 0fd0
.org 0x8dfd0
	ldrb r0, [r4, #10]	@ 0008dfd0 a07a
.org 0x8dfd2
	orrs r0, r2	@ 0008dfd2 1043
.org 0x8dfd4
	strb r0, [r4, #10]	@ 0008dfd4 a072
.org 0x8dfd6
	ldr r1, [r4, #100]	@ 0008dfd6 616e
.org 0x8dfd8
	ldrb r0, [r1, #10]	@ 0008dfd8 887a
.org 0x8dfda
	orrs r0, r2	@ 0008dfda 1043
.org 0x8dfdc
	strb r0, [r1, #10]	@ 0008dfdc 8872
.org 0x8dfde
	ldr r1, [r4, #104]	@ 0008dfde a16e
.org 0x8dfe0
	ldrb r0, [r1, #10]	@ 0008dfe0 887a
.org 0x8dfe2
	orrs r0, r2	@ 0008dfe2 1043
.org 0x8dfe4
	strb r0, [r1, #10]	@ 0008dfe4 8872
.org 0x8dfe6
	ldr r1, [r4, #44]	@ 0008dfe6 e16a
.org 0x8dfe8
	ldrb r0, [r1, #10]	@ 0008dfe8 887a
.org 0x8dfea
	orrs r0, r2	@ 0008dfea 1043
.org 0x8dfec
	strb r0, [r1, #10]	@ 0008dfec 8872
.org 0x8dfee
	b.n 0x8e016	@ 0008dfee 12e0
.org 0x8dff0
	ldrb r2, [r4, #10]	@ 0008dff0 a27a
.org 0x8dff2
	movs r1, #254	@ 0008dff2 fe21
.org 0x8dff4
	adds r0, r1, #0	@ 0008dff4 081c
.org 0x8dff6
	ands r0, r2	@ 0008dff6 1040
.org 0x8dff8
	strb r0, [r4, #10]	@ 0008dff8 a072
.org 0x8dffa
	ldr r3, [r4, #100]	@ 0008dffa 636e
.org 0x8dffc
	ldrb r2, [r3, #10]	@ 0008dffc 9a7a
.org 0x8dffe
	adds r0, r1, #0	@ 0008dffe 081c
.org 0x8e000
	ands r0, r2	@ 0008e000 1040
.org 0x8e002
	strb r0, [r3, #10]	@ 0008e002 9872
.org 0x8e004
	ldr r3, [r4, #104]	@ 0008e004 a36e
.org 0x8e006
	ldrb r2, [r3, #10]	@ 0008e006 9a7a
.org 0x8e008
	adds r0, r1, #0	@ 0008e008 081c
.org 0x8e00a
	ands r0, r2	@ 0008e00a 1040
.org 0x8e00c
	strb r0, [r3, #10]	@ 0008e00c 9872
.org 0x8e00e
	ldr r2, [r4, #44]	@ 0008e00e e26a
.org 0x8e010
	ldrb r0, [r2, #10]	@ 0008e010 907a
.org 0x8e012
	ands r1, r0	@ 0008e012 0140
.org 0x8e014
	strb r1, [r2, #10]	@ 0008e014 9172
.org 0x8e016
	adds r1, r4, #0	@ 0008e016 211c
.org 0x8e018
	adds r1, #184	@ 0008e018 b831
.org 0x8e01a
	ldrb r0, [r1, #0]	@ 0008e01a 0878
.org 0x8e01c
	ldrb r2, [r4, #13]	@ 0008e01c 627b
.org 0x8e01e
	cmp r0, r2	@ 0008e01e 9042
.org 0x8e020
	beq.n 0x8e046	@ 0008e020 11d0
.org 0x8e022
	movs r2, #0	@ 0008e022 0022
.org 0x8e024
	strb r0, [r4, #13]	@ 0008e024 6073
.org 0x8e026
	strb r2, [r4, #14]	@ 0008e026 a273
.org 0x8e028
	strb r2, [r4, #15]	@ 0008e028 e273
.org 0x8e02a
	strb r0, [r1, #0]	@ 0008e02a 0870
.org 0x8e02c
	ldr r1, [r4, #100]	@ 0008e02c 616e
.org 0x8e02e
	ldrb r0, [r4, #13]	@ 0008e02e 607b
.org 0x8e030
	strb r0, [r1, #13]	@ 0008e030 4873
.org 0x8e032
	ldr r0, [r4, #100]	@ 0008e032 606e
.org 0x8e034
	strb r2, [r0, #14]	@ 0008e034 8273
.org 0x8e036
	ldr r0, [r4, #100]	@ 0008e036 606e
.org 0x8e038
	strb r2, [r0, #15]	@ 0008e038 c273
.org 0x8e03a
	ldr r0, [r4, #100]	@ 0008e03a 606e
.org 0x8e03c
	adds r1, r4, #0	@ 0008e03c 211c
.org 0x8e03e
	adds r1, #188	@ 0008e03e bc31
.org 0x8e040
	ldrh r1, [r1, #0]	@ 0008e040 0988
.org 0x8e042
	adds r0, #186	@ 0008e042 ba30
.org 0x8e044
	strh r1, [r0, #0]	@ 0008e044 0180
.org 0x8e046
	ldr r0, [pc, #20]	@ 0008e046 0548
.org 0x8e048
	ldrb r1, [r4, #13]	@ 0008e048 617b
.org 0x8e04a
	lsls r1, r1, #2	@ 0008e04a 8900
.org 0x8e04c
	adds r1, r1, r0	@ 0008e04c 0918
.org 0x8e04e
	ldr r1, [r1, #0]	@ 0008e04e 0968
.org 0x8e050
	adds r0, r4, #0	@ 0008e050 201c
.org 0x8e052
	bl 0x128f80	@ 0008e052 9af095ff
