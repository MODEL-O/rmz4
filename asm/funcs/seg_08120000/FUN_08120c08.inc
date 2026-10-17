@ FUN_08120c08  entry 0x08120c08  size 156
.thumb
.org 0x120c08
FUN_08120c08:
	push {r4, r5, r6, r7, lr}	@ 00120c08 f0b5
.org 0x120c0a
	mov r7, r8	@ 00120c0a 4746
.org 0x120c0c
	push {r7}	@ 00120c0c 80b4
.org 0x120c0e
	adds r7, r0, #0	@ 00120c0e 071c
.org 0x120c10
	movs r3, #0	@ 00120c10 0023
.org 0x120c12
	ldr r0, [pc, #104]	@ 00120c12 1a48
.org 0x120c14
	adds r2, r7, r0	@ 00120c14 3a18
.org 0x120c16
	movs r4, #255	@ 00120c16 ff24
.org 0x120c18
	mov ip, r2	@ 00120c18 9446
.org 0x120c1a
	adds r0, r2, r3	@ 00120c1a d018
.org 0x120c1c
	ldrb r1, [r0, #0]	@ 00120c1c 0178
.org 0x120c1e
	orrs r1, r4	@ 00120c1e 2143
.org 0x120c20
	strb r1, [r0, #0]	@ 00120c20 0170
.org 0x120c22
	adds r0, r3, #1	@ 00120c22 581c
.org 0x120c24
	lsls r0, r0, #24	@ 00120c24 0006
.org 0x120c26
	lsrs r3, r0, #24	@ 00120c26 030e
.org 0x120c28
	cmp r3, #6	@ 00120c28 062b
.org 0x120c2a
	bls.n 0x120c1a	@ 00120c2a f6d9
.org 0x120c2c
	ldr r2, [pc, #80]	@ 00120c2c 144a
.org 0x120c2e
	adds r1, r7, r2	@ 00120c2e b918
.org 0x120c30
	movs r0, #0	@ 00120c30 0020
.org 0x120c32
	strb r0, [r1, #14]	@ 00120c32 8873
.org 0x120c34
	strb r0, [r1, #15]	@ 00120c34 c873
.org 0x120c36
	strb r0, [r1, #3]	@ 00120c36 c870
.org 0x120c38
	movs r3, #0	@ 00120c38 0023
.org 0x120c3a
	movs r5, #0	@ 00120c3a 0025
.org 0x120c3c
	movs r4, #0	@ 00120c3c 0024
.org 0x120c3e
	ldr r0, [pc, #68]	@ 00120c3e 1148
.org 0x120c40
	mov r8, r0	@ 00120c40 8046
.org 0x120c42
	movs r6, #1	@ 00120c42 0126
.org 0x120c44
	adds r2, r3, #4	@ 00120c44 1a1d
.org 0x120c46
	asrs r0, r2, #3	@ 00120c46 d010
.org 0x120c48
	add r0, r8	@ 00120c48 4044
.org 0x120c4a
	ldrb r1, [r0, #0]	@ 00120c4a 0178
.org 0x120c4c
	movs r0, #7	@ 00120c4c 0720
.org 0x120c4e
	ands r2, r0	@ 00120c4e 0240
.org 0x120c50
	asrs r1, r2	@ 00120c50 1141
.org 0x120c52
	ands r1, r6	@ 00120c52 3140
.org 0x120c54
	cmp r1, #0	@ 00120c54 0029
.org 0x120c56
	beq.n 0x120c9c	@ 00120c56 21d0
.org 0x120c58
	ldr r2, [pc, #36]	@ 00120c58 094a
.org 0x120c5a
	adds r1, r7, r2	@ 00120c5a b918
.org 0x120c5c
	ldrb r0, [r1, #13]	@ 00120c5c 487b
.org 0x120c5e
	adds r0, r0, r4	@ 00120c5e 0019
.org 0x120c60
	cmp r5, r0	@ 00120c60 8542
.org 0x120c62
	bne.n 0x120c88	@ 00120c62 11d1
.org 0x120c64
	mov r2, ip	@ 00120c64 6246
.org 0x120c66
	adds r0, r2, r4	@ 00120c66 1019
.org 0x120c68
	strb r3, [r0, #0]	@ 00120c68 0370
.org 0x120c6a
	ldrb r0, [r1, #3]	@ 00120c6a c878
.org 0x120c6c
	adds r0, #1	@ 00120c6c 0130
.org 0x120c6e
	strb r0, [r1, #3]	@ 00120c6e c870
.org 0x120c70
	cmp r4, #5	@ 00120c70 052c
.org 0x120c72
	bhi.n 0x120c96	@ 00120c72 10d8
.org 0x120c74
	adds r0, r4, #1	@ 00120c74 601c
.org 0x120c76
	lsls r0, r0, #24	@ 00120c76 0006
.org 0x120c78
	lsrs r4, r0, #24	@ 00120c78 040e
.org 0x120c7a
	b.n 0x120c96	@ 00120c7a 0ce0
.org 0x120c7c
	.byte 0xd2,0x0d,0x00,0x00	@ 00120c7c data
.org 0x120c80
	.byte 0xcc,0x0d,0x00,0x00	@ 00120c80 data
.org 0x120c84
	.byte 0x70,0x0a,0x00,0x02	@ 00120c84 data
.org 0x120c88
	cmp r4, #0	@ 00120c88 002c
.org 0x120c8a
	beq.n 0x120c94	@ 00120c8a 03d0
.org 0x120c8c
	cmp r4, #6	@ 00120c8c 062c
.org 0x120c8e
	bne.n 0x120c96	@ 00120c8e 02d1
.org 0x120c90
	strb r6, [r1, #15]	@ 00120c90 ce73
.org 0x120c92
	b.n 0x120ca6	@ 00120c92 08e0
.org 0x120c94
	strb r6, [r1, #14]	@ 00120c94 8e73
.org 0x120c96
	adds r0, r5, #1	@ 00120c96 681c
.org 0x120c98
	lsls r0, r0, #24	@ 00120c98 0006
.org 0x120c9a
	lsrs r5, r0, #24	@ 00120c9a 050e
.org 0x120c9c
	adds r0, r3, #1	@ 00120c9c 581c
.org 0x120c9e
	lsls r0, r0, #24	@ 00120c9e 0006
.org 0x120ca0
	lsrs r3, r0, #24	@ 00120ca0 030e
.org 0x120ca2
	cmp r3, #55	@ 00120ca2 372b
