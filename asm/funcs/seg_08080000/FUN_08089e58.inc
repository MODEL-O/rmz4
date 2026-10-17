@ FUN_08089e58  entry 0x08089e58  size 94
.thumb
.org 0x89e58
FUN_08089e58:
	push {r4, r5, r6, lr}	@ 00089e58 70b5
.org 0x89e5a
	sub sp, #8	@ 00089e5a 82b0
.org 0x89e5c
	adds r4, r0, #0	@ 00089e5c 041c
.org 0x89e5e
	ldr r0, [pc, #72]	@ 00089e5e 1248
.org 0x89e60
	ldr r1, [r0, #4]	@ 00089e60 4168
.org 0x89e62
	ldr r0, [r0, #0]	@ 00089e62 0068
.org 0x89e64
	str r0, [sp, #0]	@ 00089e64 0090
.org 0x89e66
	str r1, [sp, #4]	@ 00089e66 0191
.org 0x89e68
	adds r6, r4, #0	@ 00089e68 261c
.org 0x89e6a
	adds r6, #188	@ 00089e6a bc36
.org 0x89e6c
	ldr r5, [r6, #0]	@ 00089e6c 3568
.org 0x89e6e
	cmp r5, #0	@ 00089e6e 002d
.org 0x89e70
	bne.n 0x89eb2	@ 00089e70 1fd1
.org 0x89e72
	adds r0, r4, #0	@ 00089e72 201c
.org 0x89e74
	adds r0, #140	@ 00089e74 8c30
.org 0x89e76
	ldr r0, [r0, #0]	@ 00089e76 0068
.org 0x89e78
	movs r1, #1	@ 00089e78 0121
.org 0x89e7a
	ands r0, r1	@ 00089e7a 0840
.org 0x89e7c
	cmp r0, #0	@ 00089e7c 0028
.org 0x89e7e
	beq.n 0x89eb2	@ 00089e7e 18d0
.org 0x89e80
	movs r0, #0	@ 00089e80 0020
.org 0x89e82
	adds r1, r4, #0	@ 00089e82 211c
.org 0x89e84
	mov r2, sp	@ 00089e84 6a46
.org 0x89e86
	bl 0x2adac	@ 00089e86 a0f791ff
.org 0x89e8a
	str r0, [r6, #0]	@ 00089e8a 3060
.org 0x89e8c
	cmp r0, #0	@ 00089e8c 0028
.org 0x89e8e
	beq.n 0x89eb2	@ 00089e8e 10d0
.org 0x89e90
	adds r0, r4, #0	@ 00089e90 201c
.org 0x89e92
	adds r0, #151	@ 00089e92 9730
.org 0x89e94
	ldrb r0, [r0, #0]	@ 00089e94 0078
.org 0x89e96
	movs r1, #240	@ 00089e96 f021
.org 0x89e98
	ands r1, r0	@ 00089e98 0140
.org 0x89e9a
	cmp r1, #16	@ 00089e9a 1029
.org 0x89e9c
	beq.n 0x89eac	@ 00089e9c 06d0
.org 0x89e9e
	cmp r1, #48	@ 00089e9e 3029
.org 0x89ea0
	bne.n 0x89eac	@ 00089ea0 04d1
.org 0x89ea2
	movs r0, #9	@ 00089ea2 0920
.org 0x89ea4
	b.n 0x89eae	@ 00089ea4 03e0
.org 0x89ea6
	.byte 0x00	@ 00089ea6 data
.org 0x89ea7
	.byte 0x00	@ 00089ea7 data
.org 0x89ea8
	.byte 0x28,0x9b,0x12,0x08	@ 00089ea8 data
.org 0x89eac
	movs r0, #8	@ 00089eac 0820
.org 0x89eae
	strb r0, [r4, #13]	@ 00089eae 6073
.org 0x89eb0
	strb r5, [r4, #14]	@ 00089eb0 a573
.org 0x89eb2
	movs r0, #1	@ 00089eb2 0120
.org 0x89eb4
	add sp, #8	@ 00089eb4 02b0
