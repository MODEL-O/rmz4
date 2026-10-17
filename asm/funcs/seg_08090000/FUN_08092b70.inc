@ FUN_08092b70  entry 0x08092b70  size 236
.thumb
.org 0x92b70
FUN_08092b70:
	push {r4, r5, r6, r7, lr}	@ 00092b70 f0b5
.org 0x92b72
	adds r7, r0, #0	@ 00092b72 071c
.org 0x92b74
	movs r3, #0	@ 00092b74 0023
.org 0x92b76
	ldr r1, [pc, #28]	@ 00092b76 0749
.org 0x92b78
	ldr r0, [r1, #0]	@ 00092b78 0868
.org 0x92b7a
	ldr r2, [r7, #84]	@ 00092b7a 7a6d
.org 0x92b7c
	ldr r0, [r0, #84]	@ 00092b7c 406d
.org 0x92b7e
	adds r4, r1, #0	@ 00092b7e 0c1c
.org 0x92b80
	cmp r2, r0	@ 00092b80 8242
.org 0x92b82
	bge.n 0x92b86	@ 00092b82 00da
.org 0x92b84
	movs r3, #1	@ 00092b84 0123
.org 0x92b86
	adds r2, r3, #0	@ 00092b86 1a1c
.org 0x92b88
	cmp r2, #0	@ 00092b88 002a
.org 0x92b8a
	beq.n 0x92b98	@ 00092b8a 05d0
.org 0x92b8c
	ldrb r1, [r7, #10]	@ 00092b8c b97a
.org 0x92b8e
	movs r0, #16	@ 00092b8e 1020
.org 0x92b90
	orrs r0, r1	@ 00092b90 0843
.org 0x92b92
	b.n 0x92b9e	@ 00092b92 04e0
.org 0x92b94
	.byte 0xf0,0xdb,0x02,0x02	@ 00092b94 data
.org 0x92b98
	ldrb r1, [r7, #10]	@ 00092b98 b97a
.org 0x92b9a
	movs r0, #239	@ 00092b9a ef20
.org 0x92b9c
	ands r0, r1	@ 00092b9c 0840
.org 0x92b9e
	strb r0, [r7, #10]	@ 00092b9e b872
.org 0x92ba0
	adds r1, r2, #0	@ 00092ba0 111c
.org 0x92ba2
	adds r0, r7, #0	@ 00092ba2 381c
.org 0x92ba4
	adds r0, #76	@ 00092ba4 4c30
.org 0x92ba6
	strb r1, [r0, #0]	@ 00092ba6 0170
.org 0x92ba8
	adds r3, r7, #0	@ 00092ba8 3b1c
.org 0x92baa
	adds r3, #74	@ 00092baa 4a33
.org 0x92bac
	lsls r1, r1, #4	@ 00092bac 0901
.org 0x92bae
	ldrb r2, [r3, #0]	@ 00092bae 1a78
.org 0x92bb0
	movs r0, #17	@ 00092bb0 1120
.org 0x92bb2
	negs r0, r0	@ 00092bb2 4042
.org 0x92bb4
	ands r0, r2	@ 00092bb4 1040
.org 0x92bb6
	orrs r0, r1	@ 00092bb6 0843
.org 0x92bb8
	strb r0, [r3, #0]	@ 00092bb8 1870
.org 0x92bba
	ldr r1, [r4, #0]	@ 00092bba 2168
.org 0x92bbc
	ldr r6, [r1, #84]	@ 00092bbc 4e6d
.org 0x92bbe
	ldr r0, [r7, #84]	@ 00092bbe 786d
.org 0x92bc0
	subs r6, r6, r0	@ 00092bc0 361a
.org 0x92bc2
	ldr r4, [r1, #88]	@ 00092bc2 8c6d
.org 0x92bc4
	ldr r0, [pc, #88]	@ 00092bc4 1648
.org 0x92bc6
	adds r4, r4, r0	@ 00092bc6 2418
.org 0x92bc8
	ldr r0, [r7, #88]	@ 00092bc8 b86d
.org 0x92bca
	subs r4, r4, r0	@ 00092bca 241a
.org 0x92bcc
	asrs r0, r6, #8	@ 00092bcc 3012
.org 0x92bce
	adds r5, r0, #0	@ 00092bce 051c
.org 0x92bd0
	muls r5, r0	@ 00092bd0 4543
.org 0x92bd2
	asrs r0, r4, #8	@ 00092bd2 2012
.org 0x92bd4
	adds r1, r0, #0	@ 00092bd4 011c
.org 0x92bd6
	muls r1, r0	@ 00092bd6 4143
.org 0x92bd8
	adds r0, r1, #0	@ 00092bd8 081c
.org 0x92bda
	adds r5, r5, r0	@ 00092bda 2d18
.org 0x92bdc
	adds r0, r5, #0	@ 00092bdc 281c
.org 0x92bde
	bl 0x128bf4	@ 00092bde 96f009f8
.org 0x92be2
	lsls r0, r0, #16	@ 00092be2 0004
.org 0x92be4
	lsrs r5, r0, #8	@ 00092be4 050a
.org 0x92be6
	lsls r0, r6, #8	@ 00092be6 3002
.org 0x92be8
	adds r1, r5, #0	@ 00092be8 291c
.org 0x92bea
	bl 0x128fb8	@ 00092bea 96f0e5f9
.org 0x92bee
	adds r6, r0, #0	@ 00092bee 061c
.org 0x92bf0
	lsls r0, r4, #8	@ 00092bf0 2002
.org 0x92bf2
	adds r1, r5, #0	@ 00092bf2 291c
.org 0x92bf4
	bl 0x128fb8	@ 00092bf4 96f0e0f9
.org 0x92bf8
	adds r4, r0, #0	@ 00092bf8 041c
.org 0x92bfa
	ldrb r0, [r7, #16]	@ 00092bfa 387c
.org 0x92bfc
	cmp r0, #1	@ 00092bfc 0128
.org 0x92bfe
	bne.n 0x92c24	@ 00092bfe 11d1
.org 0x92c00
	lsls r0, r6, #1	@ 00092c00 7000
.org 0x92c02
	adds r0, r0, r6	@ 00092c02 8019
.org 0x92c04
	lsls r0, r0, #7	@ 00092c04 c001
.org 0x92c06
	cmp r0, #0	@ 00092c06 0028
.org 0x92c08
	bge.n 0x92c0c	@ 00092c08 00da
.org 0x92c0a
	adds r0, #255	@ 00092c0a ff30
.org 0x92c0c
	asrs r6, r0, #8	@ 00092c0c 0612
.org 0x92c0e
	lsls r0, r4, #1	@ 00092c0e 6000
.org 0x92c10
	adds r0, r0, r4	@ 00092c10 0019
.org 0x92c12
	lsls r0, r0, #7	@ 00092c12 c001
.org 0x92c14
	cmp r0, #0	@ 00092c14 0028
.org 0x92c16
	bge.n 0x92c1a	@ 00092c16 00da
.org 0x92c18
	adds r0, #255	@ 00092c18 ff30
.org 0x92c1a
	asrs r4, r0, #8	@ 00092c1a 0412
.org 0x92c1c
	b.n 0x92c28	@ 00092c1c 04e0
.org 0x92c1e
	.byte 0x00	@ 00092c1e data
.org 0x92c1f
	.byte 0x00	@ 00092c1f data
.org 0x92c20
	.byte 0x00,0xe8,0xff,0xff	@ 00092c20 data
.org 0x92c24
	lsls r6, r6, #2	@ 00092c24 b600
.org 0x92c26
	lsls r4, r4, #2	@ 00092c26 a400
.org 0x92c28
	cmp r6, #0	@ 00092c28 002e
.org 0x92c2a
	bne.n 0x92c70	@ 00092c2a 21d1
.org 0x92c2c
	cmp r4, #0	@ 00092c2c 002c
.org 0x92c2e
	bne.n 0x92c70	@ 00092c2e 1fd1
.org 0x92c30
	ldr r2, [pc, #32]	@ 00092c30 084a
.org 0x92c32
	ldr r1, [r2, #0]	@ 00092c32 1168
.org 0x92c34
	ldr r0, [pc, #32]	@ 00092c34 0848
.org 0x92c36
	muls r0, r1	@ 00092c36 4843
.org 0x92c38
	ldr r1, [pc, #32]	@ 00092c38 0849
.org 0x92c3a
	adds r0, r0, r1	@ 00092c3a 4018
.org 0x92c3c
	lsls r0, r0, #1	@ 00092c3c 4000
.org 0x92c3e
	lsrs r1, r0, #1	@ 00092c3e 4108
.org 0x92c40
	str r1, [r2, #0]	@ 00092c40 1160
.org 0x92c42
	lsrs r0, r0, #17	@ 00092c42 400c
.org 0x92c44
	movs r1, #1	@ 00092c44 0121
.org 0x92c46
	ands r0, r1	@ 00092c46 0840
.org 0x92c48
	cmp r0, #0	@ 00092c48 0028
.org 0x92c4a
	beq.n 0x92c60	@ 00092c4a 09d0
.org 0x92c4c
	movs r0, #192	@ 00092c4c c020
.org 0x92c4e
	lsls r0, r0, #1	@ 00092c4e 4000
.org 0x92c50
	b.n 0x92c62	@ 00092c50 07e0
.org 0x92c52
	.byte 0x00	@ 00092c52 data
.org 0x92c53
	.byte 0x00	@ 00092c53 data
.org 0x92c54
	.byte 0x38,0xdc,0x02,0x02	@ 00092c54 data
.org 0x92c58
	.byte 0xfd,0x43,0x03,0x00	@ 00092c58 data
