@ FUN_080b0c7c  entry 0x080b0c7c  size 68
.thumb
.org 0xb0c7c
FUN_080b0c7c:
	push {r4, lr}	@ 000b0c7c 10b5
.org 0xb0c7e
	adds r4, r0, #0	@ 000b0c7e 041c
.org 0xb0c80
	adds r0, #192	@ 000b0c80 c030
.org 0xb0c82
	ldr r0, [r0, #0]	@ 000b0c82 0068
.org 0xb0c84
	bl 0x2b3e4	@ 000b0c84 7af7aefb
.org 0xb0c88
	cmp r0, #0	@ 000b0c88 0028
.org 0xb0c8a
	beq.n 0xb0cc0	@ 000b0c8a 19d0
.org 0xb0c8c
	ldrb r0, [r4, #18]	@ 000b0c8c a07c
.org 0xb0c8e
	cmp r0, #255	@ 000b0c8e ff28
.org 0xb0c90
	beq.n 0xb0ca4	@ 000b0c90 08d0
.org 0xb0c92
	adds r0, r4, #0	@ 000b0c92 201c
.org 0xb0c94
	adds r0, #116	@ 000b0c94 7430
.org 0xb0c96
	ldr r1, [pc, #8]	@ 000b0c96 0249
.org 0xb0c98
	bl 0x5784	@ 000b0c98 54f774fd
.org 0xb0c9c
	b.n 0xb0cb8	@ 000b0c9c 0ce0
.org 0xb0c9e
	.byte 0x00	@ 000b0c9e data
.org 0xb0c9f
	.byte 0x00	@ 000b0c9f data
.org 0xb0ca0
	.byte 0x6c,0x33,0x86,0x08	@ 000b0ca0 data
.org 0xb0ca4
	adds r0, r4, #0	@ 000b0ca4 201c
.org 0xb0ca6
	adds r0, #116	@ 000b0ca6 7430
.org 0xb0ca8
	ldrb r2, [r4, #17]	@ 000b0ca8 627c
.org 0xb0caa
	lsls r1, r2, #1	@ 000b0caa 5100
.org 0xb0cac
	adds r1, r1, r2	@ 000b0cac 8918
.org 0xb0cae
	lsls r1, r1, #4	@ 000b0cae 0901
.org 0xb0cb0
	ldr r2, [pc, #20]	@ 000b0cb0 054a
.org 0xb0cb2
	adds r1, r1, r2	@ 000b0cb2 8918
.org 0xb0cb4
	bl 0x5784	@ 000b0cb4 54f766fd
.org 0xb0cb8
	adds r1, r4, #0	@ 000b0cb8 211c
.org 0xb0cba
	adds r1, #192	@ 000b0cba c031
.org 0xb0cbc
	movs r0, #0	@ 000b0cbc 0020
.org 0xb0cbe
	str r0, [r1, #0]	@ 000b0cbe 0860
