@ FUN_08059c18  entry 0x08059c18  size 330
.thumb
.org 0x59c18
FUN_08059c18:
	push {r4, r5, r6, r7, lr}	@ 00059c18 f0b5
.org 0x59c1a
	mov r7, r8	@ 00059c1a 4746
.org 0x59c1c
	push {r7}	@ 00059c1c 80b4
.org 0x59c1e
	sub sp, #4	@ 00059c1e 81b0
.org 0x59c20
	adds r6, r0, #0	@ 00059c20 061c
.org 0x59c22
	ldr r1, [pc, #244]	@ 00059c22 3d49
.org 0x59c24
	mov r0, sp	@ 00059c24 6846
.org 0x59c26
	movs r2, #2	@ 00059c26 0222
.org 0x59c28
	bl 0x129258	@ 00059c28 cff016fb
.org 0x59c2c
	ldrb r0, [r6, #17]	@ 00059c2c 707c
.org 0x59c2e
	mov r8, r0	@ 00059c2e 8046
.org 0x59c30
	movs r7, #0	@ 00059c30 0027
.org 0x59c32
	ldr r0, [pc, #232]	@ 00059c32 3a48
.org 0x59c34
	ldr r0, [r0, #0]	@ 00059c34 0068
.org 0x59c36
	ldr r2, [r6, #84]	@ 00059c36 726d
.org 0x59c38
	ldr r0, [r0, #84]	@ 00059c38 406d
.org 0x59c3a
	cmp r2, r0	@ 00059c3a 8242
.org 0x59c3c
	bge.n 0x59c40	@ 00059c3c 00da
.org 0x59c3e
	movs r7, #1	@ 00059c3e 0127
.org 0x59c40
	ldr r1, [pc, #220]	@ 00059c40 3749
.org 0x59c42
	ldrb r0, [r6, #9]	@ 00059c42 707a
.org 0x59c44
	lsls r0, r0, #2	@ 00059c44 8000
.org 0x59c46
	adds r0, r0, r1	@ 00059c46 4018
.org 0x59c48
	movs r5, #1	@ 00059c48 0125
.org 0x59c4a
	str r5, [r6, #12]	@ 00059c4a f560
.org 0x59c4c
	ldr r0, [r0, #0]	@ 00059c4c 0068
.org 0x59c4e
	ldr r0, [r0, #4]	@ 00059c4e 4068
.org 0x59c50
	str r0, [r6, #20]	@ 00059c50 7061
.org 0x59c52
	movs r4, #0	@ 00059c52 0024
.org 0x59c54
	movs r1, #1	@ 00059c54 0121
.org 0x59c56
	strb r5, [r6, #13]	@ 00059c56 7573
.org 0x59c58
	mov r0, sp	@ 00059c58 6846
.org 0x59c5a
	add r0, r8	@ 00059c5a 4044
.org 0x59c5c
	ldrb r0, [r0, #0]	@ 00059c5c 0078
.org 0x59c5e
	strb r0, [r6, #14]	@ 00059c5e b073
.org 0x59c60
	strb r4, [r6, #15]	@ 00059c60 f473
.org 0x59c62
	ldrb r0, [r6, #10]	@ 00059c62 b07a
.org 0x59c64
	movs r3, #0	@ 00059c64 0023
.org 0x59c66
	mov r8, r3	@ 00059c66 9846
.org 0x59c68
	orrs r0, r1	@ 00059c68 0843
.org 0x59c6a
	movs r1, #2	@ 00059c6a 0221
.org 0x59c6c
	orrs r0, r1	@ 00059c6c 0843
.org 0x59c6e
	strb r0, [r6, #10]	@ 00059c6e b072
.org 0x59c70
	ldr r1, [r6, #88]	@ 00059c70 b16d
.org 0x59c72
	adds r0, r2, #0	@ 00059c72 101c
.org 0x59c74
	bl 0x8534	@ 00059c74 aef75efc
.org 0x59c78
	adds r1, r6, #0	@ 00059c78 311c
.org 0x59c7a
	adds r1, #180	@ 00059c7a b431
.org 0x59c7c
	str r0, [r1, #0]	@ 00059c7c 0860
.org 0x59c7e
	adds r1, #10	@ 00059c7e 0a31
.org 0x59c80
	movs r0, #255	@ 00059c80 ff20
.org 0x59c82
	strb r0, [r1, #0]	@ 00059c82 0870
.org 0x59c84
	adds r1, #17	@ 00059c84 1131
.org 0x59c86
	strb r0, [r1, #0]	@ 00059c86 0870
.org 0x59c88
	subs r1, #3	@ 00059c88 0339
.org 0x59c8a
	strb r0, [r1, #0]	@ 00059c8a 0870
.org 0x59c8c
	adds r0, r6, #0	@ 00059c8c 301c
.org 0x59c8e
	adds r0, #205	@ 00059c8e cd30
.org 0x59c90
	strb r4, [r0, #0]	@ 00059c90 0470
.org 0x59c92
	subs r0, #5	@ 00059c92 0538
.org 0x59c94
	str r4, [r0, #0]	@ 00059c94 0460
.org 0x59c96
	subs r1, #13	@ 00059c96 0d39
.org 0x59c98
	movs r0, #255	@ 00059c98 ff20
.org 0x59c9a
	strb r0, [r1, #0]	@ 00059c9a 0870
.org 0x59c9c
	str r4, [r6, #44]	@ 00059c9c f462
.org 0x59c9e
	adds r0, r6, #0	@ 00059c9e 301c
.org 0x59ca0
	adds r0, #206	@ 00059ca0 ce30
.org 0x59ca2
	strb r4, [r0, #0]	@ 00059ca2 0470
.org 0x59ca4
	subs r0, #18	@ 00059ca4 1238
.org 0x59ca6
	strb r4, [r0, #0]	@ 00059ca6 0470
.org 0x59ca8
	ldr r0, [pc, #120]	@ 00059ca8 1e48
.org 0x59caa
	ldr r1, [pc, #124]	@ 00059caa 1f49
.org 0x59cac
	adds r1, #212	@ 00059cac d431
.org 0x59cae
	ldrh r1, [r1, #0]	@ 00059cae 0988
.org 0x59cb0
	ldrh r2, [r0, #6]	@ 00059cb0 c288
.org 0x59cb2
	lsrs r2, r2, #6	@ 00059cb2 9209
.org 0x59cb4
	subs r1, r1, r2	@ 00059cb4 891a
.org 0x59cb6
	lsls r1, r1, #5	@ 00059cb6 4901
.org 0x59cb8
	movs r2, #128	@ 00059cb8 8022
.org 0x59cba
	lsls r2, r2, #9	@ 00059cba 5202
.org 0x59cbc
	adds r1, r1, r2	@ 00059cbc 8918
.org 0x59cbe
	bl 0x1d30	@ 00059cbe a8f737f8
.org 0x59cc2
	ldr r0, [pc, #104]	@ 00059cc2 1a48
.org 0x59cc4
	ldr r1, [pc, #104]	@ 00059cc4 1a49
.org 0x59cc6
	adds r1, #212	@ 00059cc6 d431
.org 0x59cc8
	ldrh r1, [r1, #0]	@ 00059cc8 0988
.org 0x59cca
	ldrb r2, [r0, #7]	@ 00059cca c279
.org 0x59ccc
	subs r1, r1, r2	@ 00059ccc 891a
.org 0x59cce
	lsls r1, r1, #5	@ 00059cce 4901
.org 0x59cd0
	movs r3, #128	@ 00059cd0 8023
.org 0x59cd2
	lsls r3, r3, #2	@ 00059cd2 9b00
.org 0x59cd4
	adds r1, r1, r3	@ 00059cd4 c918
.org 0x59cd6
	bl 0x2208	@ 00059cd6 a8f797fa
.org 0x59cda
	adds r0, r6, #0	@ 00059cda 301c
.org 0x59cdc
	bl 0x1cc9c	@ 00059cdc c2f7deff
.org 0x59ce0
	adds r0, r6, #0	@ 00059ce0 301c
.org 0x59ce2
	bl 0x1ceec	@ 00059ce2 c3f703f9
.org 0x59ce6
	adds r1, r6, #0	@ 00059ce6 311c
.org 0x59ce8
	adds r1, #37	@ 00059ce8 2531
.org 0x59cea
	movs r0, #24	@ 00059cea 1820
.org 0x59cec
	strb r0, [r1, #0]	@ 00059cec 0870
.org 0x59cee
	adds r1, r7, #0	@ 00059cee 391c
.org 0x59cf0
	ands r1, r5	@ 00059cf0 2940
.org 0x59cf2
	adds r0, r6, #0	@ 00059cf2 301c
.org 0x59cf4
	adds r0, #76	@ 00059cf4 4c30
.org 0x59cf6
	strb r1, [r0, #0]	@ 00059cf6 0170
.org 0x59cf8
	adds r3, r6, #0	@ 00059cf8 331c
.org 0x59cfa
	adds r3, #74	@ 00059cfa 4a33
.org 0x59cfc
	lsls r1, r1, #4	@ 00059cfc 0901
.org 0x59cfe
	ldrb r2, [r3, #0]	@ 00059cfe 1a78
.org 0x59d00
	movs r0, #17	@ 00059d00 1120
.org 0x59d02
	negs r0, r0	@ 00059d02 4042
.org 0x59d04
	ands r0, r2	@ 00059d04 1040
.org 0x59d06
	orrs r0, r1	@ 00059d06 0843
.org 0x59d08
	strb r0, [r3, #0]	@ 00059d08 1870
.org 0x59d0a
	ands r7, r5	@ 00059d0a 2f40
.org 0x59d0c
	cmp r7, #0	@ 00059d0c 002f
.org 0x59d0e
	beq.n 0x59d34	@ 00059d0e 11d0
.org 0x59d10
	ldrb r0, [r6, #10]	@ 00059d10 b07a
.org 0x59d12
	movs r1, #16	@ 00059d12 1021
.org 0x59d14
	orrs r0, r1	@ 00059d14 0843
.org 0x59d16
	b.n 0x59d3a	@ 00059d16 10e0
.org 0x59d18
	.byte 0xc4,0x96,0x12,0x08	@ 00059d18 data
.org 0x59d1c
	.byte 0xf0,0xdb,0x02,0x02	@ 00059d1c data
.org 0x59d20
	.byte 0x70,0x7d,0x85,0x08	@ 00059d20 data
.org 0x59d24
	.byte 0x48,0x48,0xc4,0x08	@ 00059d24 data
.org 0x59d28
	.byte 0x40,0xe0,0x02,0x02	@ 00059d28 data
.org 0x59d2c
	.byte 0x54,0x48,0xc4,0x08	@ 00059d2c data
.org 0x59d30
	.byte 0x40,0xde,0x02,0x02	@ 00059d30 data
.org 0x59d34
	ldrb r1, [r6, #10]	@ 00059d34 b17a
.org 0x59d36
	movs r0, #239	@ 00059d36 ef20
.org 0x59d38
	ands r0, r1	@ 00059d38 0840
.org 0x59d3a
	strb r0, [r6, #10]	@ 00059d3a b072
.org 0x59d3c
	movs r1, #163	@ 00059d3c a321
.org 0x59d3e
	lsls r1, r1, #8	@ 00059d3e 0902
.org 0x59d40
	adds r0, r6, #0	@ 00059d40 301c
.org 0x59d42
	bl 0x1cf00	@ 00059d42 c3f7ddf8
.org 0x59d46
	adds r1, r6, #0	@ 00059d46 311c
.org 0x59d48
	adds r1, #189	@ 00059d48 bd31
.org 0x59d4a
	movs r0, #1	@ 00059d4a 0120
.org 0x59d4c
	strb r0, [r1, #0]	@ 00059d4c 0870
.org 0x59d4e
	adds r0, r6, #0	@ 00059d4e 301c
.org 0x59d50
	bl 0x1cff0	@ 00059d50 c3f74ef9
.org 0x59d54
	ldr r1, [pc, #40]	@ 00059d54 0a49
.org 0x59d56
	adds r0, r6, #0	@ 00059d56 301c
.org 0x59d58
	movs r2, #64	@ 00059d58 4022
.org 0x59d5a
	bl 0x503cc	@ 00059d5a f6f737fb
.org 0x59d5e
	ldr r1, [pc, #36]	@ 00059d5e 0949
.org 0x59d60
	adds r0, r6, #0	@ 00059d60 301c
