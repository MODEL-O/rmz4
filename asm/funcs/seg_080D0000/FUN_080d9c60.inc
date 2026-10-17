@ FUN_080d9c60  entry 0x080d9c60  size 66
.thumb
.org 0xd9c60
FUN_080d9c60:
	push {r4, lr}	@ 000d9c60 10b5
.org 0xd9c62
	adds r4, r0, #0	@ 000d9c62 041c
.org 0xd9c64
	adds r0, #115	@ 000d9c64 7330
.org 0xd9c66
	ldrb r0, [r0, #0]	@ 000d9c66 0078
.org 0xd9c68
	cmp r0, #3	@ 000d9c68 0328
.org 0xd9c6a
	bne.n 0xd9c8c	@ 000d9c6a 0fd1
.org 0xd9c6c
	ldr r1, [pc, #24]	@ 000d9c6c 0649
.org 0xd9c6e
	ldrb r0, [r4, #9]	@ 000d9c6e 607a
.org 0xd9c70
	lsls r0, r0, #2	@ 000d9c70 8000
.org 0xd9c72
	adds r0, r0, r1	@ 000d9c72 4018
.org 0xd9c74
	movs r1, #2	@ 000d9c74 0221
.org 0xd9c76
	str r1, [r4, #12]	@ 000d9c76 e160
.org 0xd9c78
	ldr r0, [r0, #0]	@ 000d9c78 0068
.org 0xd9c7a
	ldr r0, [r0, #8]	@ 000d9c7a 8068
.org 0xd9c7c
	str r0, [r4, #20]	@ 000d9c7c 6061
.org 0xd9c7e
	adds r0, r4, #0	@ 000d9c7e 201c
.org 0xd9c80
	bl 0xd9ca8	@ 000d9c80 00f012f8
.org 0xd9c84
	b.n 0xd9ca2	@ 000d9c84 0de0
.org 0xd9c86
	.byte 0x00	@ 000d9c86 data
.org 0xd9c87
	.byte 0x00	@ 000d9c87 data
.org 0xd9c88
	.byte 0x64,0x6f,0x86,0x08	@ 000d9c88 data
.org 0xd9c8c
	adds r0, r4, #0	@ 000d9c8c 201c
.org 0xd9c8e
	bl 0x1cff0	@ 000d9c8e 43f7aff9
.org 0xd9c92
	ldr r0, [r4, #84]	@ 000d9c92 606d
.org 0xd9c94
	ldr r1, [r4, #92]	@ 000d9c94 e16d
.org 0xd9c96
	adds r0, r0, r1	@ 000d9c96 4018
.org 0xd9c98
	str r0, [r4, #84]	@ 000d9c98 6065
.org 0xd9c9a
	ldr r0, [r4, #88]	@ 000d9c9a a06d
.org 0xd9c9c
	ldr r1, [r4, #96]	@ 000d9c9c 216e
.org 0xd9c9e
	adds r0, r0, r1	@ 000d9c9e 4018
.org 0xd9ca0
	str r0, [r4, #88]	@ 000d9ca0 a065
