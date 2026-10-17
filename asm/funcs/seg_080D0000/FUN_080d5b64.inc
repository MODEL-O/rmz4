@ FUN_080d5b64  entry 0x080d5b64  size 280
.thumb
.org 0xd5b64
FUN_080d5b64:
	push {r4, r5, r6, lr}	@ 000d5b64 70b5
.org 0xd5b66
	adds r5, r0, #0	@ 000d5b66 051c
.org 0xd5b68
	ldrb r0, [r5, #14]	@ 000d5b68 a87b
.org 0xd5b6a
	cmp r0, #0	@ 000d5b6a 0028
.org 0xd5b6c
	bne.n 0xd5ba2	@ 000d5b6c 19d1
.org 0xd5b6e
	ldr r1, [pc, #76]	@ 000d5b6e 1349
.org 0xd5b70
	ldrh r2, [r1, #0]	@ 000d5b70 0a88
.org 0xd5b72
	movs r3, #128	@ 000d5b72 8023
.org 0xd5b74
	lsls r3, r3, #7	@ 000d5b74 db01
.org 0xd5b76
	adds r0, r3, #0	@ 000d5b76 181c
.org 0xd5b78
	movs r3, #0	@ 000d5b78 0023
.org 0xd5b7a
	orrs r0, r2	@ 000d5b7a 1043
.org 0xd5b7c
	strh r0, [r1, #0]	@ 000d5b7c 0880
.org 0xd5b7e
	movs r0, #49	@ 000d5b7e 3120
.org 0xd5b80
	strb r0, [r1, #13]	@ 000d5b80 4873
.org 0xd5b82
	ldrb r2, [r1, #14]	@ 000d5b82 8a7b
.org 0xd5b84
	movs r0, #14	@ 000d5b84 0e20
.org 0xd5b86
	orrs r0, r2	@ 000d5b86 1043
.org 0xd5b88
	strb r0, [r1, #14]	@ 000d5b88 8873
.org 0xd5b8a
	adds r0, r5, #0	@ 000d5b8a 281c
.org 0xd5b8c
	adds r0, #116	@ 000d5b8c 7430
.org 0xd5b8e
	strb r3, [r0, #0]	@ 000d5b8e 0370
.org 0xd5b90
	adds r0, #1	@ 000d5b90 0130
.org 0xd5b92
	strb r3, [r0, #0]	@ 000d5b92 0370
.org 0xd5b94
	adds r0, #1	@ 000d5b94 0130
.org 0xd5b96
	strb r3, [r0, #0]	@ 000d5b96 0370
.org 0xd5b98
	adds r0, #4	@ 000d5b98 0430
.org 0xd5b9a
	strb r3, [r0, #0]	@ 000d5b9a 0370
.org 0xd5b9c
	ldrb r0, [r5, #14]	@ 000d5b9c a87b
.org 0xd5b9e
	adds r0, #1	@ 000d5b9e 0130
.org 0xd5ba0
	strb r0, [r5, #14]	@ 000d5ba0 a873
.org 0xd5ba2
	ldr r1, [pc, #28]	@ 000d5ba2 0749
.org 0xd5ba4
	ldrh r2, [r1, #6]	@ 000d5ba4 ca88
.org 0xd5ba6
	movs r0, #128	@ 000d5ba6 8020
.org 0xd5ba8
	lsls r0, r0, #2	@ 000d5ba8 8000
.org 0xd5baa
	ands r0, r2	@ 000d5baa 1040
.org 0xd5bac
	adds r6, r1, #0	@ 000d5bac 0e1c
.org 0xd5bae
	cmp r0, #0	@ 000d5bae 0028
.org 0xd5bb0
	beq.n 0xd5bc4	@ 000d5bb0 08d0
.org 0xd5bb2
	adds r4, r5, #0	@ 000d5bb2 2c1c
.org 0xd5bb4
	adds r4, #122	@ 000d5bb4 7a34
.org 0xd5bb6
	ldrb r0, [r4, #0]	@ 000d5bb6 2078
.org 0xd5bb8
	adds r0, #2	@ 000d5bb8 0230
.org 0xd5bba
	b.n 0xd5bd6	@ 000d5bba 0ce0
.org 0xd5bbc
	.byte 0x50,0x0a,0x00,0x02	@ 000d5bbc data
.org 0xd5bc0
	.byte 0x60,0x07,0x00,0x02	@ 000d5bc0 data
.org 0xd5bc4
	movs r0, #128	@ 000d5bc4 8020
.org 0xd5bc6
	lsls r0, r0, #1	@ 000d5bc6 4000
.org 0xd5bc8
	ands r0, r2	@ 000d5bc8 1040
.org 0xd5bca
	adds r4, r5, #0	@ 000d5bca 2c1c
.org 0xd5bcc
	adds r4, #122	@ 000d5bcc 7a34
.org 0xd5bce
	cmp r0, #0	@ 000d5bce 0028
.org 0xd5bd0
	beq.n 0xd5bde	@ 000d5bd0 05d0
.org 0xd5bd2
	ldrb r0, [r4, #0]	@ 000d5bd2 2078
.org 0xd5bd4
	adds r0, #1	@ 000d5bd4 0130
.org 0xd5bd6
	movs r1, #3	@ 000d5bd6 0321
.org 0xd5bd8
	bl 0x129050	@ 000d5bd8 53f03afa
.org 0xd5bdc
	strb r0, [r4, #0]	@ 000d5bdc 2070
.org 0xd5bde
	ldrb r4, [r4, #0]	@ 000d5bde 2478
.org 0xd5be0
	cmp r4, #1	@ 000d5be0 012c
.org 0xd5be2
	beq.n 0xd5bf2	@ 000d5be2 06d0
.org 0xd5be4
	cmp r4, #1	@ 000d5be4 012c
.org 0xd5be6
	bgt.n 0xd5bf8	@ 000d5be6 07dc
.org 0xd5be8
	cmp r4, #0	@ 000d5be8 002c
.org 0xd5bea
	bne.n 0xd5bf8	@ 000d5bea 05d1
.org 0xd5bec
	adds r2, r5, #0	@ 000d5bec 2a1c
.org 0xd5bee
	adds r2, #84	@ 000d5bee 5432
.org 0xd5bf0
	b.n 0xd5bfc	@ 000d5bf0 04e0
.org 0xd5bf2
	adds r2, r5, #0	@ 000d5bf2 2a1c
.org 0xd5bf4
	adds r2, #100	@ 000d5bf4 6432
.org 0xd5bf6
	b.n 0xd5bfc	@ 000d5bf6 01e0
.org 0xd5bf8
	adds r2, r5, #0	@ 000d5bf8 2a1c
.org 0xd5bfa
	adds r2, #92	@ 000d5bfa 5c32
.org 0xd5bfc
	adds r3, r6, #0	@ 000d5bfc 331c
.org 0xd5bfe
	ldrh r1, [r3, #6]	@ 000d5bfe d988
.org 0xd5c00
	movs r0, #64	@ 000d5c00 4020
.org 0xd5c02
	ands r0, r1	@ 000d5c02 0840
.org 0xd5c04
	cmp r0, #0	@ 000d5c04 0028
.org 0xd5c06
	beq.n 0xd5c10	@ 000d5c06 03d0
.org 0xd5c08
	ldr r0, [r2, #4]	@ 000d5c08 5068
.org 0xd5c0a
	ldr r1, [pc, #92]	@ 000d5c0a 1749
.org 0xd5c0c
	adds r0, r0, r1	@ 000d5c0c 4018
.org 0xd5c0e
	str r0, [r2, #4]	@ 000d5c0e 5060
.org 0xd5c10
	ldrh r1, [r3, #6]	@ 000d5c10 d988
.org 0xd5c12
	movs r0, #128	@ 000d5c12 8020
.org 0xd5c14
	ands r0, r1	@ 000d5c14 0840
.org 0xd5c16
	cmp r0, #0	@ 000d5c16 0028
.org 0xd5c18
	beq.n 0xd5c24	@ 000d5c18 04d0
.org 0xd5c1a
	ldr r0, [r2, #4]	@ 000d5c1a 5068
.org 0xd5c1c
	movs r1, #128	@ 000d5c1c 8021
.org 0xd5c1e
	lsls r1, r1, #1	@ 000d5c1e 4900
.org 0xd5c20
	adds r0, r0, r1	@ 000d5c20 4018
.org 0xd5c22
	str r0, [r2, #4]	@ 000d5c22 5060
.org 0xd5c24
	ldrh r1, [r3, #6]	@ 000d5c24 d988
.org 0xd5c26
	movs r0, #32	@ 000d5c26 2020
.org 0xd5c28
	ands r0, r1	@ 000d5c28 0840
.org 0xd5c2a
	cmp r0, #0	@ 000d5c2a 0028
.org 0xd5c2c
	beq.n 0xd5c36	@ 000d5c2c 03d0
.org 0xd5c2e
	ldr r0, [r2, #0]	@ 000d5c2e 1068
.org 0xd5c30
	ldr r3, [pc, #52]	@ 000d5c30 0d4b
.org 0xd5c32
	adds r0, r0, r3	@ 000d5c32 c018
.org 0xd5c34
	str r0, [r2, #0]	@ 000d5c34 1060
.org 0xd5c36
	ldrh r1, [r6, #6]	@ 000d5c36 f188
.org 0xd5c38
	movs r0, #16	@ 000d5c38 1020
.org 0xd5c3a
	ands r0, r1	@ 000d5c3a 0840
.org 0xd5c3c
	cmp r0, #0	@ 000d5c3c 0028
.org 0xd5c3e
	beq.n 0xd5c4a	@ 000d5c3e 04d0
.org 0xd5c40
	ldr r0, [r2, #0]	@ 000d5c40 1068
.org 0xd5c42
	movs r1, #128	@ 000d5c42 8021
.org 0xd5c44
	lsls r1, r1, #1	@ 000d5c44 4900
.org 0xd5c46
	adds r0, r0, r1	@ 000d5c46 4018
.org 0xd5c48
	str r0, [r2, #0]	@ 000d5c48 1060
.org 0xd5c4a
	ldrb r0, [r5, #19]	@ 000d5c4a e87c
.org 0xd5c4c
	adds r0, #1	@ 000d5c4c 0130
.org 0xd5c4e
	strb r0, [r5, #19]	@ 000d5c4e e874
.org 0xd5c50
	movs r1, #1	@ 000d5c50 0121
.org 0xd5c52
	ands r0, r1	@ 000d5c52 0840
.org 0xd5c54
	cmp r0, #0	@ 000d5c54 0028
.org 0xd5c56
	beq.n 0xd5c6c	@ 000d5c56 09d0
.org 0xd5c58
	adds r0, r5, #0	@ 000d5c58 281c
.org 0xd5c5a
	adds r0, #116	@ 000d5c5a 7430
.org 0xd5c5c
	movs r1, #31	@ 000d5c5c 1f21
.org 0xd5c5e
	strb r1, [r0, #0]	@ 000d5c5e 0170
.org 0xd5c60
	adds r0, #1	@ 000d5c60 0130
.org 0xd5c62
	strb r1, [r0, #0]	@ 000d5c62 0170
.org 0xd5c64
	adds r0, #1	@ 000d5c64 0130
.org 0xd5c66
	b.n 0xd5c80	@ 000d5c66 0be0
.org 0xd5c68
	.byte 0x00,0xff,0xff,0xff	@ 000d5c68 data
.org 0xd5c6c
	adds r0, r5, #0	@ 000d5c6c 281c
.org 0xd5c6e
	adds r0, #116	@ 000d5c6e 7430
.org 0xd5c70
	movs r1, #24	@ 000d5c70 1821
.org 0xd5c72
	strb r1, [r0, #0]	@ 000d5c72 0170
.org 0xd5c74
	adds r2, r5, #0	@ 000d5c74 2a1c
.org 0xd5c76
	adds r2, #117	@ 000d5c76 7532
.org 0xd5c78
	movs r0, #31	@ 000d5c78 1f20
.org 0xd5c7a
	strb r0, [r2, #0]	@ 000d5c7a 1070
