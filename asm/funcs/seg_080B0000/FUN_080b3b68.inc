@ FUN_080b3b68  entry 0x080b3b68  size 142
.thumb
.org 0xb3b68
FUN_080b3b68:
	push {r4, lr}	@ 000b3b68 10b5
.org 0xb3b6a
	adds r4, r0, #0	@ 000b3b6a 041c
.org 0xb3b6c
	ldrb r0, [r4, #14]	@ 000b3b6c a07b
.org 0xb3b6e
	cmp r0, #0	@ 000b3b6e 0028
.org 0xb3b70
	bne.n 0xb3b8a	@ 000b3b70 0bd1
.org 0xb3b72
	ldr r1, [pc, #56]	@ 000b3b72 0e49
.org 0xb3b74
	adds r0, r4, #0	@ 000b3b74 201c
.org 0xb3b76
	bl 0x1cf00	@ 000b3b76 69f7c3f9
.org 0xb3b7a
	adds r0, r4, #0	@ 000b3b7a 201c
.org 0xb3b7c
	adds r0, #116	@ 000b3b7c 7430
.org 0xb3b7e
	ldr r1, [pc, #48]	@ 000b3b7e 0c49
.org 0xb3b80
	bl 0x5784	@ 000b3b80 51f700fe
.org 0xb3b84
	ldrb r0, [r4, #14]	@ 000b3b84 a07b
.org 0xb3b86
	adds r0, #1	@ 000b3b86 0130
.org 0xb3b88
	strb r0, [r4, #14]	@ 000b3b88 a073
.org 0xb3b8a
	adds r0, r4, #0	@ 000b3b8a 201c
.org 0xb3b8c
	adds r0, #115	@ 000b3b8c 7330
.org 0xb3b8e
	ldrb r0, [r0, #0]	@ 000b3b8e 0078
.org 0xb3b90
	cmp r0, #3	@ 000b3b90 0328
.org 0xb3b92
	bne.n 0xb3bfe	@ 000b3b92 34d1
.org 0xb3b94
	ldrb r1, [r4, #14]	@ 000b3b94 a17b
.org 0xb3b96
	cmp r1, #1	@ 000b3b96 0129
.org 0xb3b98
	bne.n 0xb3bec	@ 000b3b98 28d1
.org 0xb3b9a
	ldrb r2, [r4, #10]	@ 000b3b9a a27a
.org 0xb3b9c
	lsrs r0, r2, #4	@ 000b3b9c 1009
.org 0xb3b9e
	adds r3, r1, #0	@ 000b3b9e 0b1c
.org 0xb3ba0
	bics r3, r0	@ 000b3ba0 8343
.org 0xb3ba2
	cmp r3, #0	@ 000b3ba2 002b
.org 0xb3ba4
	beq.n 0xb3bb4	@ 000b3ba4 06d0
.org 0xb3ba6
	movs r0, #16	@ 000b3ba6 1020
.org 0xb3ba8
	orrs r0, r2	@ 000b3ba8 1043
.org 0xb3baa
	b.n 0xb3bb8	@ 000b3baa 05e0
.org 0xb3bac
	.byte 0x02,0xc7,0x00,0x00	@ 000b3bac data
.org 0xb3bb0
	.byte 0xb4,0x37,0x86,0x08	@ 000b3bb0 data
.org 0xb3bb4
	movs r0, #239	@ 000b3bb4 ef20
.org 0xb3bb6
	ands r0, r2	@ 000b3bb6 1040
.org 0xb3bb8
	strb r0, [r4, #10]	@ 000b3bb8 a072
.org 0xb3bba
	movs r1, #1	@ 000b3bba 0121
.org 0xb3bbc
	ands r1, r3	@ 000b3bbc 1940
.org 0xb3bbe
	adds r0, r4, #0	@ 000b3bbe 201c
.org 0xb3bc0
	adds r0, #76	@ 000b3bc0 4c30
.org 0xb3bc2
	strb r1, [r0, #0]	@ 000b3bc2 0170
.org 0xb3bc4
	adds r3, r4, #0	@ 000b3bc4 231c
.org 0xb3bc6
	adds r3, #74	@ 000b3bc6 4a33
.org 0xb3bc8
	lsls r1, r1, #4	@ 000b3bc8 0901
.org 0xb3bca
	ldrb r2, [r3, #0]	@ 000b3bca 1a78
.org 0xb3bcc
	movs r0, #17	@ 000b3bcc 1120
.org 0xb3bce
	negs r0, r0	@ 000b3bce 4042
.org 0xb3bd0
	ands r0, r2	@ 000b3bd0 1040
.org 0xb3bd2
	orrs r0, r1	@ 000b3bd2 0843
.org 0xb3bd4
	strb r0, [r3, #0]	@ 000b3bd4 1870
.org 0xb3bd6
	ldr r1, [pc, #16]	@ 000b3bd6 0449
.org 0xb3bd8
	adds r0, r4, #0	@ 000b3bd8 201c
.org 0xb3bda
	bl 0x1cf00	@ 000b3bda 69f791f9
.org 0xb3bde
	ldrb r0, [r4, #14]	@ 000b3bde a07b
.org 0xb3be0
	adds r0, #1	@ 000b3be0 0130
.org 0xb3be2
	strb r0, [r4, #14]	@ 000b3be2 a073
.org 0xb3be4
	b.n 0xb3bfe	@ 000b3be4 0be0
.org 0xb3be6
	.byte 0x00	@ 000b3be6 data
.org 0xb3be7
	.byte 0x00	@ 000b3be7 data
.org 0xb3be8
	.byte 0x03,0xc7,0x00,0x00	@ 000b3be8 data
.org 0xb3bec
	adds r0, r4, #0	@ 000b3bec 201c
.org 0xb3bee
	adds r0, #116	@ 000b3bee 7430
.org 0xb3bf0
	ldr r1, [pc, #16]	@ 000b3bf0 0449
.org 0xb3bf2
	bl 0x5784	@ 000b3bf2 51f7c7fd
