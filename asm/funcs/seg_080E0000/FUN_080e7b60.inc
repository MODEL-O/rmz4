@ FUN_080e7b60  entry 0x080e7b60  size 330
.thumb
.org 0xe7b60
FUN_080e7b60:
	push {r4, r5, r6, r7, lr}	@ 000e7b60 f0b5
.org 0xe7b62
	mov r7, r9	@ 000e7b62 4f46
.org 0xe7b64
	mov r6, r8	@ 000e7b64 4646
.org 0xe7b66
	push {r6, r7}	@ 000e7b66 c0b4
.org 0xe7b68
	sub sp, #64	@ 000e7b68 90b0
.org 0xe7b6a
	adds r6, r0, #0	@ 000e7b6a 061c
.org 0xe7b6c
	mov r0, sp	@ 000e7b6c 6846
.org 0xe7b6e
	movs r1, #0	@ 000e7b6e 0021
.org 0xe7b70
	movs r2, #32	@ 000e7b70 2022
.org 0xe7b72
	bl 0x1292b8	@ 000e7b72 41f0a1fb
.org 0xe7b76
	add r7, sp, #32	@ 000e7b76 08af
.org 0xe7b78
	adds r1, r7, #0	@ 000e7b78 391c
.org 0xe7b7a
	ldr r0, [pc, #236]	@ 000e7b7a 3b48
.org 0xe7b7c
	ldmia r0!, {r2, r3, r4}	@ 000e7b7c 1cc8
.org 0xe7b7e
	stmia r1!, {r2, r3, r4}	@ 000e7b7e 1cc1
.org 0xe7b80
	ldr r0, [r0, #0]	@ 000e7b80 0068
.org 0xe7b82
	str r0, [r1, #0]	@ 000e7b82 0860
.org 0xe7b84
	add r4, sp, #48	@ 000e7b84 0cac
.org 0xe7b86
	ldr r1, [pc, #228]	@ 000e7b86 3949
.org 0xe7b88
	adds r0, r4, #0	@ 000e7b88 201c
.org 0xe7b8a
	movs r2, #8	@ 000e7b8a 0822
.org 0xe7b8c
	bl 0x129258	@ 000e7b8c 41f064fb
.org 0xe7b90
	ldrb r0, [r6, #17]	@ 000e7b90 707c
.org 0xe7b92
	mov r9, r4	@ 000e7b92 a146
.org 0xe7b94
	cmp r0, #0	@ 000e7b94 0028
.org 0xe7b96
	bne.n 0xe7bda	@ 000e7b96 20d1
.org 0xe7b98
	ldr r0, [r6, #84]	@ 000e7b98 706d
.org 0xe7b9a
	str r0, [sp, #56]	@ 000e7b9a 0e90
.org 0xe7b9c
	ldr r0, [r6, #88]	@ 000e7b9c b06d
.org 0xe7b9e
	add r1, sp, #56	@ 000e7b9e 0ea9
.org 0xe7ba0
	str r0, [r1, #4]	@ 000e7ba0 4860
.org 0xe7ba2
	movs r0, #2	@ 000e7ba2 0220
.org 0xe7ba4
	bl 0xd0c88	@ 000e7ba4 e9f770f8
.org 0xe7ba8
	movs r4, #1	@ 000e7ba8 0124
.org 0xe7baa
	strb r4, [r6, #17]	@ 000e7baa 7474
.org 0xe7bac
	adds r5, r6, #0	@ 000e7bac 351c
.org 0xe7bae
	adds r5, #84	@ 000e7bae 5435
.org 0xe7bb0
	ldrb r2, [r6, #10]	@ 000e7bb0 b27a
.org 0xe7bb2
	lsrs r2, r2, #4	@ 000e7bb2 1209
.org 0xe7bb4
	ands r2, r4	@ 000e7bb4 2240
.org 0xe7bb6
	adds r0, r5, #0	@ 000e7bb6 281c
.org 0xe7bb8
	movs r1, #2	@ 000e7bb8 0221
.org 0xe7bba
	bl 0xe7a4c	@ 000e7bba fff747ff
.org 0xe7bbe
	ldrb r2, [r6, #10]	@ 000e7bbe b27a
.org 0xe7bc0
	lsrs r2, r2, #4	@ 000e7bc0 1209
.org 0xe7bc2
	ands r2, r4	@ 000e7bc2 2240
.org 0xe7bc4
	adds r0, r5, #0	@ 000e7bc4 281c
.org 0xe7bc6
	movs r1, #3	@ 000e7bc6 0321
.org 0xe7bc8
	bl 0xe7a4c	@ 000e7bc8 fff740ff
.org 0xe7bcc
	ldrb r2, [r6, #10]	@ 000e7bcc b27a
.org 0xe7bce
	lsrs r2, r2, #4	@ 000e7bce 1209
.org 0xe7bd0
	ands r2, r4	@ 000e7bd0 2240
.org 0xe7bd2
	adds r0, r5, #0	@ 000e7bd2 281c
.org 0xe7bd4
	movs r1, #4	@ 000e7bd4 0421
.org 0xe7bd6
	bl 0xe7a4c	@ 000e7bd6 fff739ff
.org 0xe7bda
	ldrb r2, [r6, #17]	@ 000e7bda 727c
.org 0xe7bdc
	subs r2, #1	@ 000e7bdc 013a
.org 0xe7bde
	lsls r2, r2, #2	@ 000e7bde 9200
.org 0xe7be0
	adds r2, r7, r2	@ 000e7be0 ba18
.org 0xe7be2
	ldr r4, [pc, #140]	@ 000e7be2 234c
.org 0xe7be4
	ldr r0, [r4, #0]	@ 000e7be4 2068
.org 0xe7be6
	ldr r1, [pc, #140]	@ 000e7be6 2349
.org 0xe7be8
	mov r8, r1	@ 000e7be8 8846
.org 0xe7bea
	mov r3, r8	@ 000e7bea 4346
.org 0xe7bec
	muls r3, r0	@ 000e7bec 4343
.org 0xe7bee
	adds r0, r3, #0	@ 000e7bee 181c
.org 0xe7bf0
	ldr r1, [pc, #132]	@ 000e7bf0 2149
.org 0xe7bf2
	mov ip, r1	@ 000e7bf2 8c46
.org 0xe7bf4
	add r0, ip	@ 000e7bf4 6044
.org 0xe7bf6
	lsls r0, r0, #1	@ 000e7bf6 4000
.org 0xe7bf8
	lsrs r3, r0, #1	@ 000e7bf8 4308
.org 0xe7bfa
	str r3, [r4, #0]	@ 000e7bfa 2360
.org 0xe7bfc
	lsrs r0, r0, #17	@ 000e7bfc 400c
.org 0xe7bfe
	movs r7, #255	@ 000e7bfe ff27
.org 0xe7c00
	ands r0, r7	@ 000e7c00 3840
.org 0xe7c02
	movs r1, #128	@ 000e7c02 8021
.org 0xe7c04
	lsls r1, r1, #1	@ 000e7c04 4900
.org 0xe7c06
	adds r0, r0, r1	@ 000e7c06 4018
.org 0xe7c08
	ldr r1, [r2, #0]	@ 000e7c08 1168
.org 0xe7c0a
	muls r0, r1	@ 000e7c0a 4843
.org 0xe7c0c
	ldrb r5, [r6, #17]	@ 000e7c0c 757c
.org 0xe7c0e
	cmp r0, #0	@ 000e7c0e 0028
.org 0xe7c10
	bge.n 0xe7c14	@ 000e7c10 00da
.org 0xe7c12
	adds r0, #255	@ 000e7c12 ff30
.org 0xe7c14
	asrs r2, r0, #8	@ 000e7c14 0212
.org 0xe7c16
	str r2, [r6, #92]	@ 000e7c16 f265
.org 0xe7c18
	mov r0, r8	@ 000e7c18 4046
.org 0xe7c1a
	muls r0, r3	@ 000e7c1a 5843
.org 0xe7c1c
	add r0, ip	@ 000e7c1c 6044
.org 0xe7c1e
	lsls r0, r0, #1	@ 000e7c1e 4000
.org 0xe7c20
	lsrs r1, r0, #1	@ 000e7c20 4108
.org 0xe7c22
	str r1, [r4, #0]	@ 000e7c22 2160
.org 0xe7c24
	lsrs r0, r0, #17	@ 000e7c24 400c
.org 0xe7c26
	ands r0, r7	@ 000e7c26 3840
.org 0xe7c28
	movs r3, #160	@ 000e7c28 a023
.org 0xe7c2a
	lsls r3, r3, #2	@ 000e7c2a 9b00
.org 0xe7c2c
	adds r0, r0, r3	@ 000e7c2c c018
.org 0xe7c2e
	lsls r0, r0, #8	@ 000e7c2e 0002
.org 0xe7c30
	negs r0, r0	@ 000e7c30 4042
.org 0xe7c32
	cmp r0, #0	@ 000e7c32 0028
.org 0xe7c34
	bge.n 0xe7c38	@ 000e7c34 00da
.org 0xe7c36
	adds r0, #255	@ 000e7c36 ff30
.org 0xe7c38
	asrs r0, r0, #8	@ 000e7c38 0012
.org 0xe7c3a
	str r0, [r6, #96]	@ 000e7c3a 3066
.org 0xe7c3c
	ldrb r1, [r6, #10]	@ 000e7c3c b17a
.org 0xe7c3e
	movs r0, #16	@ 000e7c3e 1020
.org 0xe7c40
	ands r0, r1	@ 000e7c40 0840
.org 0xe7c42
	cmp r0, #0	@ 000e7c42 0028
.org 0xe7c44
	beq.n 0xe7c7c	@ 000e7c44 1ad0
.org 0xe7c46
	subs r0, r5, #1	@ 000e7c46 681e
.org 0xe7c48
	lsls r0, r0, #3	@ 000e7c48 c000
.org 0xe7c4a
	add r0, sp	@ 000e7c4a 6844
.org 0xe7c4c
	ldr r1, [r0, #0]	@ 000e7c4c 0168
.org 0xe7c4e
	lsls r1, r1, #8	@ 000e7c4e 0902
.org 0xe7c50
	ldr r0, [r6, #84]	@ 000e7c50 706d
.org 0xe7c52
	subs r0, r0, r1	@ 000e7c52 401a
.org 0xe7c54
	str r0, [r6, #84]	@ 000e7c54 7065
.org 0xe7c56
	lsls r0, r2, #8	@ 000e7c56 1002
.org 0xe7c58
	negs r0, r0	@ 000e7c58 4042
.org 0xe7c5a
	cmp r0, #0	@ 000e7c5a 0028
.org 0xe7c5c
	bge.n 0xe7c60	@ 000e7c5c 00da
.org 0xe7c5e
	adds r0, #255	@ 000e7c5e ff30
.org 0xe7c60
	asrs r0, r0, #8	@ 000e7c60 0012
.org 0xe7c62
	str r0, [r6, #92]	@ 000e7c62 f065
.org 0xe7c64
	b.n 0xe7c8c	@ 000e7c64 12e0
.org 0xe7c66
	.byte 0x00	@ 000e7c66 data
.org 0xe7c67
	.byte 0x00	@ 000e7c67 data
.org 0xe7c68
	.byte 0x3c,0xa3,0x12,0x08	@ 000e7c68 data
.org 0xe7c6c
	.byte 0x4c,0xa3,0x12,0x08	@ 000e7c6c data
.org 0xe7c70
	.byte 0x38,0xdc,0x02,0x02	@ 000e7c70 data
.org 0xe7c74
	.byte 0xfd,0x43,0x03,0x00	@ 000e7c74 data
.org 0xe7c78
	.byte 0xc3,0x9e,0x26,0x00	@ 000e7c78 data
.org 0xe7c7c
	subs r0, r5, #1	@ 000e7c7c 681e
.org 0xe7c7e
	lsls r0, r0, #3	@ 000e7c7e c000
.org 0xe7c80
	add r0, sp	@ 000e7c80 6844
.org 0xe7c82
	ldr r1, [r0, #0]	@ 000e7c82 0168
.org 0xe7c84
	lsls r1, r1, #8	@ 000e7c84 0902
.org 0xe7c86
	ldr r0, [r6, #84]	@ 000e7c86 706d
.org 0xe7c88
	adds r0, r0, r1	@ 000e7c88 4018
.org 0xe7c8a
	str r0, [r6, #84]	@ 000e7c8a 7065
.org 0xe7c8c
	subs r1, r5, #1	@ 000e7c8c 691e
.org 0xe7c8e
	lsls r1, r1, #3	@ 000e7c8e c900
.org 0xe7c90
	add r0, sp, #4	@ 000e7c90 01a8
.org 0xe7c92
	adds r0, r0, r1	@ 000e7c92 4018
.org 0xe7c94
	ldr r1, [r0, #0]	@ 000e7c94 0168
.org 0xe7c96
	lsls r1, r1, #8	@ 000e7c96 0902
.org 0xe7c98
	ldr r0, [r6, #88]	@ 000e7c98 b06d
.org 0xe7c9a
	adds r0, r0, r1	@ 000e7c9a 4018
.org 0xe7c9c
	str r0, [r6, #88]	@ 000e7c9c b065
.org 0xe7c9e
	ldrb r0, [r6, #17]	@ 000e7c9e 707c
.org 0xe7ca0
	subs r0, #1	@ 000e7ca0 0138
.org 0xe7ca2
	lsls r0, r0, #1	@ 000e7ca2 4000
.org 0xe7ca4
	add r0, r9	@ 000e7ca4 4844
.org 0xe7ca6
	ldrh r1, [r0, #0]	@ 000e7ca6 0188
.org 0xe7ca8
	adds r0, r6, #0	@ 000e7ca8 301c
