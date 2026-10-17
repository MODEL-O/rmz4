@ FUN_08094c64  entry 0x08094c64  size 314
.thumb
.org 0x94c64
FUN_08094c64:
	push {r4, r5, r6, r7, lr}	@ 00094c64 f0b5
.org 0x94c66
	mov r7, r9	@ 00094c66 4f46
.org 0x94c68
	mov r6, r8	@ 00094c68 4646
.org 0x94c6a
	push {r6, r7}	@ 00094c6a c0b4
.org 0x94c6c
	sub sp, #8	@ 00094c6c 82b0
.org 0x94c6e
	mov r9, r0	@ 00094c6e 8146
.org 0x94c70
	movs r0, #224	@ 00094c70 e020
.org 0x94c72
	lsls r0, r0, #3	@ 00094c72 c000
.org 0x94c74
	adds r7, r1, r0	@ 00094c74 0f18
.org 0x94c76
	str r7, [sp, #0]	@ 00094c76 0097
.org 0x94c78
	mov r2, r9	@ 00094c78 4a46
.org 0x94c7a
	ldr r1, [r2, #88]	@ 00094c7a 916d
.org 0x94c7c
	ldr r0, [pc, #120]	@ 00094c7c 1e48
.org 0x94c7e
	adds r6, r1, r0	@ 00094c7e 0e18
.org 0x94c80
	str r6, [sp, #4]	@ 00094c80 0196
.org 0x94c82
	ldr r2, [pc, #120]	@ 00094c82 1e4a
.org 0x94c84
	mov r8, r2	@ 00094c84 9046
.org 0x94c86
	mov r2, r9	@ 00094c86 4a46
.org 0x94c88
	ldr r0, [r2, #84]	@ 00094c88 506d
.org 0x94c8a
	bl 0x7020	@ 00094c8a 72f7c9f9
.org 0x94c8e
	lsls r0, r0, #16	@ 00094c8e 0004
.org 0x94c90
	lsrs r2, r0, #16	@ 00094c90 020c
.org 0x94c92
	movs r0, #15	@ 00094c92 0f20
.org 0x94c94
	ands r2, r0	@ 00094c94 0240
.org 0x94c96
	subs r0, r2, #2	@ 00094c96 901e
.org 0x94c98
	lsls r0, r0, #16	@ 00094c98 0004
.org 0x94c9a
	lsrs r0, r0, #16	@ 00094c9a 000c
.org 0x94c9c
	cmp r0, #5	@ 00094c9c 0528
.org 0x94c9e
	bhi.n 0x94d00	@ 00094c9e 2fd8
.org 0x94ca0
	adds r4, r7, #0	@ 00094ca0 3c1c
.org 0x94ca2
	movs r7, #2	@ 00094ca2 0227
.org 0x94ca4
	adds r0, r4, #0	@ 00094ca4 201c
.org 0x94ca6
	adds r1, r6, #0	@ 00094ca6 311c
.org 0x94ca8
	bl 0x7020	@ 00094ca8 72f7baf9
.org 0x94cac
	lsls r0, r0, #16	@ 00094cac 0004
.org 0x94cae
	lsrs r2, r0, #16	@ 00094cae 020c
.org 0x94cb0
	cmp r2, #0	@ 00094cb0 002a
.org 0x94cb2
	beq.n 0x94cea	@ 00094cb2 1ad0
.org 0x94cb4
	movs r0, #128	@ 00094cb4 8020
.org 0x94cb6
	lsls r0, r0, #8	@ 00094cb6 0002
.org 0x94cb8
	adds r1, r0, #0	@ 00094cb8 011c
.org 0x94cba
	adds r0, r2, #0	@ 00094cba 101c
.org 0x94cbc
	ands r0, r1	@ 00094cbc 0840
.org 0x94cbe
	cmp r0, #0	@ 00094cbe 0028
.org 0x94cc0
	bne.n 0x94cea	@ 00094cc0 13d1
.org 0x94cc2
	movs r0, #15	@ 00094cc2 0f20
.org 0x94cc4
	ands r0, r2	@ 00094cc4 1040
.org 0x94cc6
	cmp r0, #15	@ 00094cc6 0f28
.org 0x94cc8
	beq.n 0x94cea	@ 00094cc8 0fd0
.org 0x94cca
	subs r0, #2	@ 00094cca 0238
.org 0x94ccc
	lsls r0, r0, #16	@ 00094ccc 0004
.org 0x94cce
	lsrs r0, r0, #16	@ 00094cce 000c
.org 0x94cd0
	cmp r0, #5	@ 00094cd0 0528
.org 0x94cd2
	bls.n 0x94cea	@ 00094cd2 0ad9
.org 0x94cd4
	adds r0, r4, #0	@ 00094cd4 201c
.org 0x94cd6
	adds r1, r6, #0	@ 00094cd6 311c
.org 0x94cd8
	bl 0x816c	@ 00094cd8 73f748fa
.org 0x94cdc
	cmp r0, #0	@ 00094cdc 0028
.org 0x94cde
	bge.n 0x94cea	@ 00094cde 04da
.org 0x94ce0
	adds r0, r0, r4	@ 00094ce0 0019
.org 0x94ce2
	cmp r0, r8	@ 00094ce2 4045
.org 0x94ce4
	bge.n 0x94cea	@ 00094ce4 01da
.org 0x94ce6
	adds r4, r0, #0	@ 00094ce6 041c
.org 0x94ce8
	mov r8, r0	@ 00094ce8 8046
.org 0x94cea
	movs r1, #128	@ 00094cea 8021
.org 0x94cec
	lsls r1, r1, #5	@ 00094cec 4901
.org 0x94cee
	adds r6, r6, r1	@ 00094cee 7618
.org 0x94cf0
	subs r7, #1	@ 00094cf0 013f
.org 0x94cf2
	cmp r7, #0	@ 00094cf2 002f
.org 0x94cf4
	bne.n 0x94ca4	@ 00094cf4 d6d1
.org 0x94cf6
	b.n 0x94d8a	@ 00094cf6 48e0
.org 0x94cf8
	.byte 0x00,0xe0,0xff,0xff	@ 00094cf8 data
.org 0x94cfc
	.byte 0xff,0xff,0xff,0x7f	@ 00094cfc data
.org 0x94d00
	adds r4, r7, #0	@ 00094d00 3c1c
.org 0x94d02
	movs r7, #2	@ 00094d02 0227
.org 0x94d04
	adds r0, r4, #0	@ 00094d04 201c
.org 0x94d06
	adds r1, r6, #0	@ 00094d06 311c
.org 0x94d08
	bl 0x7020	@ 00094d08 72f78af9
.org 0x94d0c
	lsls r0, r0, #16	@ 00094d0c 0004
.org 0x94d0e
	lsrs r2, r0, #16	@ 00094d0e 020c
.org 0x94d10
	cmp r2, #0	@ 00094d10 002a
.org 0x94d12
	beq.n 0x94d40	@ 00094d12 15d0
.org 0x94d14
	movs r0, #128	@ 00094d14 8020
.org 0x94d16
	lsls r0, r0, #8	@ 00094d16 0002
.org 0x94d18
	adds r1, r0, #0	@ 00094d18 011c
.org 0x94d1a
	adds r0, r2, #0	@ 00094d1a 101c
.org 0x94d1c
	ands r0, r1	@ 00094d1c 0840
.org 0x94d1e
	cmp r0, #0	@ 00094d1e 0028
.org 0x94d20
	bne.n 0x94d40	@ 00094d20 0ed1
.org 0x94d22
	movs r0, #15	@ 00094d22 0f20
.org 0x94d24
	ands r2, r0	@ 00094d24 0240
.org 0x94d26
	cmp r2, #15	@ 00094d26 0f2a
.org 0x94d28
	beq.n 0x94d40	@ 00094d28 0ad0
.org 0x94d2a
	adds r0, r4, #0	@ 00094d2a 201c
.org 0x94d2c
	adds r1, r6, #0	@ 00094d2c 311c
.org 0x94d2e
	bl 0x816c	@ 00094d2e 73f71dfa
.org 0x94d32
	cmp r0, #0	@ 00094d32 0028
.org 0x94d34
	bge.n 0x94d40	@ 00094d34 04da
.org 0x94d36
	adds r0, r0, r4	@ 00094d36 0019
.org 0x94d38
	cmp r0, r8	@ 00094d38 4045
.org 0x94d3a
	bge.n 0x94d40	@ 00094d3a 01da
.org 0x94d3c
	adds r4, r0, #0	@ 00094d3c 041c
.org 0x94d3e
	mov r8, r0	@ 00094d3e 8046
.org 0x94d40
	movs r1, #128	@ 00094d40 8021
.org 0x94d42
	lsls r1, r1, #5	@ 00094d42 4901
.org 0x94d44
	adds r6, r6, r1	@ 00094d44 7618
.org 0x94d46
	subs r7, #1	@ 00094d46 013f
.org 0x94d48
	cmp r7, #0	@ 00094d48 002f
.org 0x94d4a
	bne.n 0x94d04	@ 00094d4a dbd1
.org 0x94d4c
	ldr r4, [sp, #0]	@ 00094d4c 009c
.org 0x94d4e
	ldr r2, [sp, #4]	@ 00094d4e 019a
.org 0x94d50
	ldr r0, [pc, #84]	@ 00094d50 1548
.org 0x94d52
	adds r6, r2, r0	@ 00094d52 1618
.org 0x94d54
	adds r0, r4, #0	@ 00094d54 201c
.org 0x94d56
	adds r1, r6, #0	@ 00094d56 311c
.org 0x94d58
	bl 0x7c7c	@ 00094d58 72f790ff
.org 0x94d5c
	lsls r0, r0, #16	@ 00094d5c 0004
.org 0x94d5e
	lsrs r2, r0, #16	@ 00094d5e 020c
.org 0x94d60
	cmp r2, #0	@ 00094d60 002a
.org 0x94d62
	beq.n 0x94d8a	@ 00094d62 12d0
.org 0x94d64
	movs r0, #128	@ 00094d64 8020
.org 0x94d66
	lsls r0, r0, #8	@ 00094d66 0002
.org 0x94d68
	ands r0, r2	@ 00094d68 1040
.org 0x94d6a
	cmp r0, #0	@ 00094d6a 0028
.org 0x94d6c
	bne.n 0x94d8a	@ 00094d6c 0dd1
.org 0x94d6e
	movs r0, #15	@ 00094d6e 0f20
.org 0x94d70
	ands r2, r0	@ 00094d70 0240
.org 0x94d72
	cmp r2, #15	@ 00094d72 0f2a
.org 0x94d74
	beq.n 0x94d8a	@ 00094d74 09d0
.org 0x94d76
	ldr r0, [sp, #0]	@ 00094d76 0098
.org 0x94d78
	adds r1, r6, #0	@ 00094d78 311c
.org 0x94d7a
	bl 0x816c	@ 00094d7a 73f7f7f9
.org 0x94d7e
	cmp r0, #0	@ 00094d7e 0028
.org 0x94d80
	bge.n 0x94d8a	@ 00094d80 03da
.org 0x94d82
	adds r0, r0, r4	@ 00094d82 0019
.org 0x94d84
	cmp r0, r8	@ 00094d84 4045
.org 0x94d86
	bge.n 0x94d8a	@ 00094d86 00da
.org 0x94d88
	mov r8, r0	@ 00094d88 8046
.org 0x94d8a
	ldr r0, [pc, #32]	@ 00094d8a 0848
.org 0x94d8c
	cmp r8, r0	@ 00094d8c 8045
.org 0x94d8e
	beq.n 0x94d98	@ 00094d8e 03d0
.org 0x94d90
	ldr r0, [pc, #28]	@ 00094d90 0748
.org 0x94d92
	add r0, r8	@ 00094d92 4044
.org 0x94d94
	mov r1, r9	@ 00094d94 4946
.org 0x94d96
	str r0, [r1, #84]	@ 00094d96 4865
.org 0x94d98
	add sp, #8	@ 00094d98 02b0
.org 0x94d9a
	pop {r3, r4}	@ 00094d9a 18bc
.org 0x94d9c
	mov r8, r3	@ 00094d9c 9846
