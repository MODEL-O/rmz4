@ FUN_08084b58  entry 0x08084b58  size 180
.thumb
.org 0x84b58
FUN_08084b58:
	push {r4, r5, r6, lr}	@ 00084b58 70b5
.org 0x84b5a
	adds r5, r0, #0	@ 00084b5a 051c
.org 0x84b5c
	ldr r1, [pc, #108]	@ 00084b5c 1b49
.org 0x84b5e
	ldrb r0, [r5, #9]	@ 00084b5e 687a
.org 0x84b60
	lsls r0, r0, #2	@ 00084b60 8000
.org 0x84b62
	adds r0, r0, r1	@ 00084b62 4018
.org 0x84b64
	movs r1, #1	@ 00084b64 0121
.org 0x84b66
	str r1, [r5, #12]	@ 00084b66 e960
.org 0x84b68
	ldr r0, [r0, #0]	@ 00084b68 0068
.org 0x84b6a
	ldr r0, [r0, #4]	@ 00084b6a 4068
.org 0x84b6c
	str r0, [r5, #20]	@ 00084b6c 6861
.org 0x84b6e
	ldr r1, [pc, #96]	@ 00084b6e 1849
.org 0x84b70
	ldrb r0, [r5, #16]	@ 00084b70 287c
.org 0x84b72
	adds r0, r0, r1	@ 00084b72 4018
.org 0x84b74
	ldrb r0, [r0, #0]	@ 00084b74 0078
.org 0x84b76
	strb r0, [r5, #13]	@ 00084b76 6873
.org 0x84b78
	ldrb r0, [r5, #10]	@ 00084b78 a87a
.org 0x84b7a
	movs r1, #2	@ 00084b7a 0221
.org 0x84b7c
	orrs r0, r1	@ 00084b7c 0843
.org 0x84b7e
	movs r1, #1	@ 00084b7e 0121
.org 0x84b80
	movs r4, #0	@ 00084b80 0024
.org 0x84b82
	orrs r0, r1	@ 00084b82 0843
.org 0x84b84
	strb r0, [r5, #10]	@ 00084b84 a872
.org 0x84b86
	adds r0, r5, #0	@ 00084b86 281c
.org 0x84b88
	bl 0x1cc9c	@ 00084b88 98f788f8
.org 0x84b8c
	ldrb r0, [r5, #16]	@ 00084b8c 287c
.org 0x84b8e
	cmp r0, #1	@ 00084b8e 0128
.org 0x84b90
	bls.n 0x84bdc	@ 00084b90 24d9
.org 0x84b92
	ldrb r0, [r5, #10]	@ 00084b92 a87a
.org 0x84b94
	movs r6, #4	@ 00084b94 0426
.org 0x84b96
	orrs r0, r6	@ 00084b96 3043
.org 0x84b98
	strb r0, [r5, #10]	@ 00084b98 a872
.org 0x84b9a
	adds r4, r5, #0	@ 00084b9a 2c1c
.org 0x84b9c
	adds r4, #116	@ 00084b9c 7434
.org 0x84b9e
	ldr r1, [pc, #52]	@ 00084b9e 0d49
.org 0x84ba0
	adds r2, r5, #0	@ 00084ba0 2a1c
.org 0x84ba2
	adds r2, #84	@ 00084ba2 5432
.org 0x84ba4
	adds r0, r4, #0	@ 00084ba4 201c
.org 0x84ba6
	movs r3, #2	@ 00084ba6 0223
.org 0x84ba8
	bl 0x5760	@ 00084ba8 80f7dafd
.org 0x84bac
	str r5, [r4, #44]	@ 00084bac e562
.org 0x84bae
	movs r0, #0	@ 00084bae 0020
.org 0x84bb0
	str r0, [r4, #36]	@ 00084bb0 6062
.org 0x84bb2
	ldr r0, [pc, #36]	@ 00084bb2 0948
.org 0x84bb4
	ldrh r0, [r0, #0]	@ 00084bb4 0088
.org 0x84bb6
	cmp r0, #14	@ 00084bb6 0e28
.org 0x84bb8
	bne.n 0x84bfc	@ 00084bb8 20d1
.org 0x84bba
	adds r2, r5, #0	@ 00084bba 2a1c
.org 0x84bbc
	adds r2, #73	@ 00084bbc 4932
.org 0x84bbe
	ldrb r1, [r2, #0]	@ 00084bbe 1178
.org 0x84bc0
	movs r0, #13	@ 00084bc0 0d20
.org 0x84bc2
	negs r0, r0	@ 00084bc2 4042
.org 0x84bc4
	ands r0, r1	@ 00084bc4 0840
.org 0x84bc6
	orrs r0, r6	@ 00084bc6 3043
.org 0x84bc8
	strb r0, [r2, #0]	@ 00084bc8 1070
.org 0x84bca
	b.n 0x84bfc	@ 00084bca 17e0
.org 0x84bcc
	.byte 0x40,0xdb,0x85,0x08	@ 00084bcc data
.org 0x84bd0
	.byte 0xa0,0xeb,0x85,0x08	@ 00084bd0 data
.org 0x84bd4
	.byte 0x00,0xeb,0x85,0x08	@ 00084bd4 data
.org 0x84bd8
	.byte 0x10,0xe9,0x02,0x02	@ 00084bd8 data
.org 0x84bdc
	ldrb r0, [r5, #10]	@ 00084bdc a87a
.org 0x84bde
	movs r1, #4	@ 00084bde 0421
.org 0x84be0
	orrs r0, r1	@ 00084be0 0843
.org 0x84be2
	strb r0, [r5, #10]	@ 00084be2 a872
.org 0x84be4
	adds r4, r5, #0	@ 00084be4 2c1c
.org 0x84be6
	adds r4, #116	@ 00084be6 7434
.org 0x84be8
	ldr r1, [pc, #48]	@ 00084be8 0c49
.org 0x84bea
	adds r2, r5, #0	@ 00084bea 2a1c
.org 0x84bec
	adds r2, #84	@ 00084bec 5432
.org 0x84bee
	adds r0, r4, #0	@ 00084bee 201c
.org 0x84bf0
	movs r3, #4	@ 00084bf0 0423
.org 0x84bf2
	bl 0x5760	@ 00084bf2 80f7b5fd
.org 0x84bf6
	str r5, [r4, #44]	@ 00084bf6 e562
.org 0x84bf8
	ldr r0, [pc, #36]	@ 00084bf8 0948
.org 0x84bfa
	str r0, [r4, #36]	@ 00084bfa 6062
.org 0x84bfc
	adds r1, r5, #0	@ 00084bfc 291c
.org 0x84bfe
	adds r1, #180	@ 00084bfe b431
.org 0x84c00
	movs r0, #0	@ 00084c00 0020
.org 0x84c02
	str r0, [r1, #0]	@ 00084c02 0860
.org 0x84c04
	adds r1, #4	@ 00084c04 0431
.org 0x84c06
	movs r0, #1	@ 00084c06 0120
.org 0x84c08
	strb r0, [r1, #0]	@ 00084c08 0870
.org 0x84c0a
	subs r1, #147	@ 00084c0a 9339
