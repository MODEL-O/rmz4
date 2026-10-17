@ FUN_0808a054  entry 0x0808a054  size 148
.thumb
.org 0x8a054
FUN_0808a054:
	push {r4, lr}	@ 0008a054 10b5
.org 0x8a056
	adds r4, r0, #0	@ 0008a056 041c
.org 0x8a058
	adds r2, r4, #0	@ 0008a058 221c
.org 0x8a05a
	adds r2, #140	@ 0008a05a 8c32
.org 0x8a05c
	ldr r0, [r2, #0]	@ 0008a05c 1068
.org 0x8a05e
	movs r1, #128	@ 0008a05e 8021
.org 0x8a060
	lsls r1, r1, #2	@ 0008a060 8900
.org 0x8a062
	ands r0, r1	@ 0008a062 0840
.org 0x8a064
	cmp r0, #0	@ 0008a064 0028
.org 0x8a066
	beq.n 0x8a0a6	@ 0008a066 1ed0
.org 0x8a068
	ldr r1, [pc, #44]	@ 0008a068 0b49
.org 0x8a06a
	ldrb r0, [r4, #9]	@ 0008a06a 607a
.org 0x8a06c
	lsls r0, r0, #2	@ 0008a06c 8000
.org 0x8a06e
	adds r0, r0, r1	@ 0008a06e 4018
.org 0x8a070
	movs r1, #2	@ 0008a070 0221
.org 0x8a072
	str r1, [r4, #12]	@ 0008a072 e160
.org 0x8a074
	ldr r0, [r0, #0]	@ 0008a074 0068
.org 0x8a076
	ldr r0, [r0, #8]	@ 0008a076 8068
.org 0x8a078
	str r0, [r4, #20]	@ 0008a078 6061
.org 0x8a07a
	adds r0, r4, #0	@ 0008a07a 201c
.org 0x8a07c
	adds r0, #195	@ 0008a07c c330
.org 0x8a07e
	ldrb r0, [r0, #0]	@ 0008a07e 0078
.org 0x8a080
	cmp r0, #0	@ 0008a080 0028
.org 0x8a082
	bne.n 0x8a09c	@ 0008a082 0bd1
.org 0x8a084
	ldr r1, [r2, #0]	@ 0008a084 1168
.org 0x8a086
	movs r0, #128	@ 0008a086 8020
.org 0x8a088
	lsls r0, r0, #9	@ 0008a088 4002
.org 0x8a08a
	ands r1, r0	@ 0008a08a 0140
.org 0x8a08c
	cmp r1, #0	@ 0008a08c 0029
.org 0x8a08e
	beq.n 0x8a09c	@ 0008a08e 05d0
.org 0x8a090
	movs r0, #1	@ 0008a090 0120
.org 0x8a092
	strb r0, [r4, #13]	@ 0008a092 6073
.org 0x8a094
	b.n 0x8a09e	@ 0008a094 03e0
.org 0x8a096
	.byte 0x00	@ 0008a096 data
.org 0x8a097
	.byte 0x00	@ 0008a097 data
.org 0x8a098
	.byte 0x40,0xdb,0x85,0x08	@ 0008a098 data
.org 0x8a09c
	strb r1, [r4, #13]	@ 0008a09c 6173
.org 0x8a09e
	adds r0, r4, #0	@ 0008a09e 201c
.org 0x8a0a0
	bl 0x8a0f8	@ 0008a0a0 00f02af8
.org 0x8a0a4
	b.n 0x8a0e8	@ 0008a0a4 20e0
.org 0x8a0a6
	adds r0, r4, #0	@ 0008a0a6 201c
.org 0x8a0a8
	bl 0x7f90c	@ 0008a0a8 f5f730fc
.org 0x8a0ac
	cmp r0, #0	@ 0008a0ac 0028
.org 0x8a0ae
	beq.n 0x8a0c2	@ 0008a0ae 08d0
.org 0x8a0b0
	adds r0, r4, #0	@ 0008a0b0 201c
.org 0x8a0b2
	adds r0, #188	@ 0008a0b2 bc30
.org 0x8a0b4
	ldr r1, [r0, #0]	@ 0008a0b4 0168
.org 0x8a0b6
	cmp r1, #0	@ 0008a0b6 0029
.org 0x8a0b8
	bne.n 0x8a0c2	@ 0008a0b8 03d1
.org 0x8a0ba
	adds r0, #4	@ 0008a0ba 0430
.org 0x8a0bc
	ldrb r0, [r0, #0]	@ 0008a0bc 0078
.org 0x8a0be
	strb r0, [r4, #13]	@ 0008a0be 6073
.org 0x8a0c0
	strb r1, [r4, #14]	@ 0008a0c0 a173
.org 0x8a0c2
	ldr r1, [pc, #44]	@ 0008a0c2 0b49
.org 0x8a0c4
	ldrb r0, [r4, #13]	@ 0008a0c4 607b
.org 0x8a0c6
	lsls r0, r0, #2	@ 0008a0c6 8000
.org 0x8a0c8
	adds r0, r0, r1	@ 0008a0c8 4018
.org 0x8a0ca
	ldr r1, [r0, #0]	@ 0008a0ca 0168
.org 0x8a0cc
	adds r0, r4, #0	@ 0008a0cc 201c
.org 0x8a0ce
	bl 0x128f80	@ 0008a0ce 9ef057ff
.org 0x8a0d2
	adds r0, r4, #0	@ 0008a0d2 201c
.org 0x8a0d4
	bl 0x8b138	@ 0008a0d4 01f030f8
.org 0x8a0d8
	ldr r1, [pc, #24]	@ 0008a0d8 0649
.org 0x8a0da
	ldrb r0, [r4, #13]	@ 0008a0da 607b
.org 0x8a0dc
	lsls r0, r0, #2	@ 0008a0dc 8000
.org 0x8a0de
	adds r0, r0, r1	@ 0008a0de 4018
.org 0x8a0e0
	ldr r1, [r0, #0]	@ 0008a0e0 0168
.org 0x8a0e2
	adds r0, r4, #0	@ 0008a0e2 201c
.org 0x8a0e4
	bl 0x128f80	@ 0008a0e4 9ef04cff
