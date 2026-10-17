@ FUN_080b1b44  entry 0x080b1b44  size 108
.thumb
.org 0xb1b44
FUN_080b1b44:
	push {r4, lr}	@ 000b1b44 10b5
.org 0xb1b46
	adds r4, r0, #0	@ 000b1b46 041c
.org 0xb1b48
	adds r0, #140	@ 000b1b48 8c30
.org 0xb1b4a
	ldr r0, [r0, #0]	@ 000b1b4a 0068
.org 0xb1b4c
	movs r1, #128	@ 000b1b4c 8021
.org 0xb1b4e
	lsls r1, r1, #2	@ 000b1b4e 8900
.org 0xb1b50
	ands r0, r1	@ 000b1b50 0840
.org 0xb1b52
	cmp r0, #0	@ 000b1b52 0028
.org 0xb1b54
	beq.n 0xb1b74	@ 000b1b54 0ed0
.org 0xb1b56
	ldr r1, [pc, #24]	@ 000b1b56 0649
.org 0xb1b58
	ldrb r0, [r4, #9]	@ 000b1b58 607a
.org 0xb1b5a
	lsls r0, r0, #2	@ 000b1b5a 8000
.org 0xb1b5c
	adds r0, r0, r1	@ 000b1b5c 4018
.org 0xb1b5e
	movs r1, #2	@ 000b1b5e 0221
.org 0xb1b60
	str r1, [r4, #12]	@ 000b1b60 e160
.org 0xb1b62
	ldr r0, [r0, #0]	@ 000b1b62 0068
.org 0xb1b64
	ldr r0, [r0, #8]	@ 000b1b64 8068
.org 0xb1b66
	str r0, [r4, #20]	@ 000b1b66 6061
.org 0xb1b68
	adds r0, r4, #0	@ 000b1b68 201c
.org 0xb1b6a
	bl 0xb1bbc	@ 000b1b6a 00f027f8
.org 0xb1b6e
	b.n 0xb1bb4	@ 000b1b6e 21e0
.org 0xb1b70
	.byte 0x40,0xdb,0x85,0x08	@ 000b1b70 data
.org 0xb1b74
	adds r0, r4, #0	@ 000b1b74 201c
.org 0xb1b76
	bl 0xb20c4	@ 000b1b76 00f0a5fa
.org 0xb1b7a
	adds r0, r4, #0	@ 000b1b7a 201c
.org 0xb1b7c
	adds r0, #192	@ 000b1b7c c030
.org 0xb1b7e
	ldr r0, [r0, #0]	@ 000b1b7e 0068
.org 0xb1b80
	cmp r0, #0	@ 000b1b80 0028
.org 0xb1b82
	bne.n 0xb1b9c	@ 000b1b82 0bd1
.org 0xb1b84
	ldr r0, [pc, #16]	@ 000b1b84 0448
.org 0xb1b86
	ldrb r1, [r4, #13]	@ 000b1b86 617b
.org 0xb1b88
	lsls r1, r1, #2	@ 000b1b88 8900
.org 0xb1b8a
	adds r1, r1, r0	@ 000b1b8a 0918
.org 0xb1b8c
	ldr r1, [r1, #0]	@ 000b1b8c 0968
.org 0xb1b8e
	adds r0, r4, #0	@ 000b1b8e 201c
.org 0xb1b90
	bl 0x128f80	@ 000b1b90 77f0f6f9
.org 0xb1b94
	b.n 0xb1bae	@ 000b1b94 0be0
.org 0xb1b96
	.byte 0x00	@ 000b1b96 data
.org 0xb1b97
	.byte 0x00	@ 000b1b97 data
.org 0xb1b98
	.byte 0xec,0x34,0x86,0x08	@ 000b1b98 data
.org 0xb1b9c
	adds r0, r4, #0	@ 000b1b9c 201c
.org 0xb1b9e
	bl 0xb2120	@ 000b1b9e 00f0bffa
.org 0xb1ba2
	ldrb r0, [r4, #13]	@ 000b1ba2 607b
.org 0xb1ba4
	cmp r0, #5	@ 000b1ba4 0528
.org 0xb1ba6
	bne.n 0xb1bae	@ 000b1ba6 02d1
.org 0xb1ba8
	adds r0, r4, #0	@ 000b1ba8 201c
.org 0xb1baa
	bl 0xb1fd8	@ 000b1baa 00f015fa
.org 0xb1bae
	adds r0, r4, #0	@ 000b1bae 201c
