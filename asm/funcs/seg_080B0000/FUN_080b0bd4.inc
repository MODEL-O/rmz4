@ FUN_080b0bd4  entry 0x080b0bd4  size 88
.thumb
.org 0xb0bd4
FUN_080b0bd4:
	push {r4, r5, lr}	@ 000b0bd4 30b5
.org 0xb0bd6
	adds r4, r0, #0	@ 000b0bd6 041c
.org 0xb0bd8
	adds r5, r4, #0	@ 000b0bd8 251c
.org 0xb0bda
	adds r5, #192	@ 000b0bda c035
.org 0xb0bdc
	ldr r0, [r5, #0]	@ 000b0bdc 2868
.org 0xb0bde
	cmp r0, #0	@ 000b0bde 0028
.org 0xb0be0
	bne.n 0xb0c30	@ 000b0be0 26d1
.org 0xb0be2
	adds r0, r4, #0	@ 000b0be2 201c
.org 0xb0be4
	adds r0, #140	@ 000b0be4 8c30
.org 0xb0be6
	ldr r0, [r0, #0]	@ 000b0be6 0068
.org 0xb0be8
	movs r1, #1	@ 000b0be8 0121
.org 0xb0bea
	ands r0, r1	@ 000b0bea 0840
.org 0xb0bec
	cmp r0, #0	@ 000b0bec 0028
.org 0xb0bee
	beq.n 0xb0c30	@ 000b0bee 1fd0
.org 0xb0bf0
	ldr r2, [pc, #32]	@ 000b0bf0 084a
.org 0xb0bf2
	movs r0, #0	@ 000b0bf2 0020
.org 0xb0bf4
	adds r1, r4, #0	@ 000b0bf4 211c
.org 0xb0bf6
	bl 0x2adac	@ 000b0bf6 7af7d9f8
.org 0xb0bfa
	str r0, [r5, #0]	@ 000b0bfa 2860
.org 0xb0bfc
	cmp r0, #0	@ 000b0bfc 0028
.org 0xb0bfe
	beq.n 0xb0c30	@ 000b0bfe 17d0
.org 0xb0c00
	ldrb r0, [r4, #18]	@ 000b0c00 a07c
.org 0xb0c02
	cmp r0, #255	@ 000b0c02 ff28
.org 0xb0c04
	beq.n 0xb0c1c	@ 000b0c04 0ad0
.org 0xb0c06
	adds r0, r4, #0	@ 000b0c06 201c
.org 0xb0c08
	adds r0, #116	@ 000b0c08 7430
.org 0xb0c0a
	ldr r1, [pc, #12]	@ 000b0c0a 0349
.org 0xb0c0c
	bl 0x5784	@ 000b0c0c 54f7bafd
.org 0xb0c10
	b.n 0xb0c30	@ 000b0c10 0ee0
.org 0xb0c12
	.byte 0x00	@ 000b0c12 data
.org 0xb0c13
	.byte 0x00	@ 000b0c13 data
.org 0xb0c14
	.byte 0xd0,0x33,0x86,0x08	@ 000b0c14 data
.org 0xb0c18
	.byte 0x84,0x33,0x86,0x08	@ 000b0c18 data
.org 0xb0c1c
	adds r0, r4, #0	@ 000b0c1c 201c
.org 0xb0c1e
	adds r0, #116	@ 000b0c1e 7430
.org 0xb0c20
	ldrb r2, [r4, #17]	@ 000b0c20 627c
.org 0xb0c22
	lsls r1, r2, #1	@ 000b0c22 5100
.org 0xb0c24
	adds r1, r1, r2	@ 000b0c24 8918
.org 0xb0c26
	lsls r1, r1, #4	@ 000b0c26 0901
.org 0xb0c28
	ldr r2, [pc, #12]	@ 000b0c28 034a
.org 0xb0c2a
	adds r1, r1, r2	@ 000b0c2a 8918
