@ FUN_08104ae4  entry 0x08104ae4  size 202
.thumb
.org 0x104ae4
FUN_08104ae4:
	push {r4, lr}	@ 00104ae4 10b5
.org 0x104ae6
	adds r4, r0, #0	@ 00104ae6 041c
.org 0x104ae8
	ldrb r2, [r4, #16]	@ 00104ae8 227c
.org 0x104aea
	cmp r2, #1	@ 00104aea 012a
.org 0x104aec
	bne.n 0x104b30	@ 00104aec 20d1
.org 0x104aee
	ldr r1, [pc, #52]	@ 00104aee 0d49
.org 0x104af0
	ldrb r0, [r4, #9]	@ 00104af0 607a
.org 0x104af2
	lsls r0, r0, #2	@ 00104af2 8000
.org 0x104af4
	adds r0, r0, r1	@ 00104af4 4018
.org 0x104af6
	str r2, [r4, #12]	@ 00104af6 e260
.org 0x104af8
	ldr r0, [r0, #0]	@ 00104af8 0068
.org 0x104afa
	ldr r0, [r0, #4]	@ 00104afa 4068
.org 0x104afc
	str r0, [r4, #20]	@ 00104afc 6061
.org 0x104afe
	ldrb r1, [r4, #11]	@ 00104afe e17a
.org 0x104b00
	movs r0, #8	@ 00104b00 0820
.org 0x104b02
	orrs r0, r1	@ 00104b02 0843
.org 0x104b04
	strb r0, [r4, #11]	@ 00104b04 e072
.org 0x104b06
	ldr r0, [pc, #32]	@ 00104b06 0848
.org 0x104b08
	str r0, [r4, #48]	@ 00104b08 2063
.org 0x104b0a
	ldr r0, [pc, #32]	@ 00104b0a 0848
.org 0x104b0c
	strh r0, [r4, #38]	@ 00104b0c e084
.org 0x104b0e
	adds r1, r4, #0	@ 00104b0e 211c
.org 0x104b10
	adds r1, #180	@ 00104b10 b431
.org 0x104b12
	ldr r0, [r4, #84]	@ 00104b12 606d
.org 0x104b14
	str r0, [r1, #0]	@ 00104b14 0860
.org 0x104b16
	adds r1, #4	@ 00104b16 0431
.org 0x104b18
	ldr r0, [r4, #88]	@ 00104b18 a06d
.org 0x104b1a
	str r0, [r1, #0]	@ 00104b1a 0860
.org 0x104b1c
	adds r0, r4, #0	@ 00104b1c 201c
.org 0x104b1e
	bl 0x104bcc	@ 00104b1e 00f055f8
.org 0x104b22
	b.n 0x104bb4	@ 00104b22 47e0
.org 0x104b24
	.byte 0xfc,0x92,0x86,0x08	@ 00104b24 data
.org 0x104b28
	.byte 0x24,0xc1,0x86,0x08	@ 00104b28 data
.org 0x104b2c
	.byte 0x01,0x08,0x00,0x00	@ 00104b2c data
.org 0x104b30
	adds r0, r4, #0	@ 00104b30 201c
.org 0x104b32
	bl 0x1cc9c	@ 00104b32 18f7b3f8
.org 0x104b36
	ldrb r1, [r4, #10]	@ 00104b36 a17a
.org 0x104b38
	movs r0, #1	@ 00104b38 0120
.org 0x104b3a
	orrs r0, r1	@ 00104b3a 0843
.org 0x104b3c
	movs r1, #2	@ 00104b3c 0221
.org 0x104b3e
	orrs r0, r1	@ 00104b3e 0843
.org 0x104b40
	strb r0, [r4, #10]	@ 00104b40 a072
.org 0x104b42
	ldr r1, [pc, #120]	@ 00104b42 1e49
.org 0x104b44
	adds r0, r4, #0	@ 00104b44 201c
.org 0x104b46
	bl 0x1cf00	@ 00104b46 18f7dbf9
.org 0x104b4a
	adds r0, r4, #0	@ 00104b4a 201c
.org 0x104b4c
	bl 0x1cff0	@ 00104b4c 18f750fa
.org 0x104b50
	movs r2, #0	@ 00104b50 0022
.org 0x104b52
	ldrb r1, [r4, #10]	@ 00104b52 a17a
.org 0x104b54
	movs r0, #239	@ 00104b54 ef20
.org 0x104b56
	ands r0, r1	@ 00104b56 0840
.org 0x104b58
	strb r0, [r4, #10]	@ 00104b58 a072
.org 0x104b5a
	movs r3, #1	@ 00104b5a 0123
.org 0x104b5c
	adds r0, r4, #0	@ 00104b5c 201c
.org 0x104b5e
	adds r0, #76	@ 00104b5e 4c30
.org 0x104b60
	strb r2, [r0, #0]	@ 00104b60 0270
.org 0x104b62
	adds r2, r4, #0	@ 00104b62 221c
.org 0x104b64
	adds r2, #74	@ 00104b64 4a32
.org 0x104b66
	ldrb r1, [r2, #0]	@ 00104b66 1178
.org 0x104b68
	movs r0, #17	@ 00104b68 1120
.org 0x104b6a
	negs r0, r0	@ 00104b6a 4042
.org 0x104b6c
	ands r0, r1	@ 00104b6c 0840
.org 0x104b6e
	strb r0, [r2, #0]	@ 00104b6e 1070
.org 0x104b70
	ldrb r1, [r4, #11]	@ 00104b70 e17a
.org 0x104b72
	movs r0, #8	@ 00104b72 0820
.org 0x104b74
	orrs r0, r1	@ 00104b74 0843
.org 0x104b76
	strb r0, [r4, #11]	@ 00104b76 e072
.org 0x104b78
	ldr r0, [pc, #68]	@ 00104b78 1148
.org 0x104b7a
	str r0, [r4, #48]	@ 00104b7a 2063
.org 0x104b7c
	ldr r0, [pc, #68]	@ 00104b7c 1148
.org 0x104b7e
	strh r0, [r4, #38]	@ 00104b7e e084
.org 0x104b80
	subs r2, #1	@ 00104b80 013a
.org 0x104b82
	ldrb r1, [r2, #0]	@ 00104b82 1178
.org 0x104b84
	movs r0, #13	@ 00104b84 0d20
.org 0x104b86
	negs r0, r0	@ 00104b86 4042
.org 0x104b88
	ands r0, r1	@ 00104b88 0840
.org 0x104b8a
	movs r1, #4	@ 00104b8a 0421
.org 0x104b8c
	orrs r0, r1	@ 00104b8c 0843
.org 0x104b8e
	strb r0, [r2, #0]	@ 00104b8e 1070
.org 0x104b90
	adds r1, r4, #0	@ 00104b90 211c
.org 0x104b92
	adds r1, #180	@ 00104b92 b431
.org 0x104b94
	ldr r0, [r4, #84]	@ 00104b94 606d
.org 0x104b96
	str r0, [r1, #0]	@ 00104b96 0860
.org 0x104b98
	adds r1, #4	@ 00104b98 0431
.org 0x104b9a
	ldr r0, [r4, #88]	@ 00104b9a a06d
.org 0x104b9c
	str r0, [r1, #0]	@ 00104b9c 0860
.org 0x104b9e
	ldr r1, [pc, #40]	@ 00104b9e 0a49
.org 0x104ba0
	ldrb r0, [r4, #9]	@ 00104ba0 607a
.org 0x104ba2
	lsls r0, r0, #2	@ 00104ba2 8000
.org 0x104ba4
	adds r0, r0, r1	@ 00104ba4 4018
.org 0x104ba6
	str r3, [r4, #12]	@ 00104ba6 e360
.org 0x104ba8
	ldr r0, [r0, #0]	@ 00104ba8 0068
.org 0x104baa
	ldr r0, [r0, #4]	@ 00104baa 4068
.org 0x104bac
	str r0, [r4, #20]	@ 00104bac 6061
