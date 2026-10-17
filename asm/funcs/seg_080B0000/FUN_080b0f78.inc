@ FUN_080b0f78  entry 0x080b0f78  size 98
.thumb
.org 0xb0f78
FUN_080b0f78:
	push {r4, lr}	@ 000b0f78 10b5
.org 0xb0f7a
	adds r4, r0, #0	@ 000b0f7a 041c
.org 0xb0f7c
	ldrb r0, [r4, #15]	@ 000b0f7c e07b
.org 0xb0f7e
	cmp r0, #0	@ 000b0f7e 0028
.org 0xb0f80
	bne.n 0xb0f94	@ 000b0f80 08d1
.org 0xb0f82
	ldr r1, [pc, #60]	@ 000b0f82 0f49
.org 0xb0f84
	adds r0, r4, #0	@ 000b0f84 201c
.org 0xb0f86
	bl 0x1cf00	@ 000b0f86 6bf7bbff
.org 0xb0f8a
	movs r0, #24	@ 000b0f8a 1820
.org 0xb0f8c
	strb r0, [r4, #18]	@ 000b0f8c a074
.org 0xb0f8e
	ldrb r0, [r4, #15]	@ 000b0f8e e07b
.org 0xb0f90
	adds r0, #1	@ 000b0f90 0130
.org 0xb0f92
	strb r0, [r4, #15]	@ 000b0f92 e073
.org 0xb0f94
	adds r0, r4, #0	@ 000b0f94 201c
.org 0xb0f96
	adds r0, #115	@ 000b0f96 7330
.org 0xb0f98
	ldrb r0, [r0, #0]	@ 000b0f98 0078
.org 0xb0f9a
	cmp r0, #3	@ 000b0f9a 0328
.org 0xb0f9c
	bne.n 0xb0fc8	@ 000b0f9c 14d1
.org 0xb0f9e
	ldrb r0, [r4, #18]	@ 000b0f9e a07c
.org 0xb0fa0
	cmp r0, #0	@ 000b0fa0 0028
.org 0xb0fa2
	bne.n 0xb0fc8	@ 000b0fa2 11d1
.org 0xb0fa4
	ldr r1, [pc, #28]	@ 000b0fa4 0749
.org 0xb0fa6
	ldrb r0, [r4, #9]	@ 000b0fa6 607a
.org 0xb0fa8
	lsls r0, r0, #2	@ 000b0fa8 8000
.org 0xb0faa
	adds r0, r0, r1	@ 000b0faa 4018
.org 0xb0fac
	movs r1, #2	@ 000b0fac 0221
.org 0xb0fae
	str r1, [r4, #12]	@ 000b0fae e160
.org 0xb0fb0
	ldr r0, [r0, #0]	@ 000b0fb0 0068
.org 0xb0fb2
	ldr r0, [r0, #8]	@ 000b0fb2 8068
.org 0xb0fb4
	str r0, [r4, #20]	@ 000b0fb4 6061
.org 0xb0fb6
	adds r0, r4, #0	@ 000b0fb6 201c
.org 0xb0fb8
	bl 0xb0fe4	@ 000b0fb8 00f014f8
.org 0xb0fbc
	b.n 0xb0fde	@ 000b0fbc 0fe0
.org 0xb0fbe
	.byte 0x00	@ 000b0fbe data
.org 0xb0fbf
	.byte 0x00	@ 000b0fbf data
.org 0xb0fc0
	.byte 0x10,0xb4,0x00,0x00	@ 000b0fc0 data
.org 0xb0fc4
	.byte 0x40,0xdb,0x85,0x08	@ 000b0fc4 data
.org 0xb0fc8
	adds r0, r4, #0	@ 000b0fc8 201c
.org 0xb0fca
	bl 0x1d134	@ 000b0fca 6cf7b3f8
.org 0xb0fce
	ldrb r0, [r4, #18]	@ 000b0fce a07c
.org 0xb0fd0
	cmp r0, #0	@ 000b0fd0 0028
.org 0xb0fd2
	beq.n 0xb0fd8	@ 000b0fd2 01d0
.org 0xb0fd4
	subs r0, #1	@ 000b0fd4 0138
.org 0xb0fd6
	strb r0, [r4, #18]	@ 000b0fd6 a074
.org 0xb0fd8
	adds r0, r4, #0	@ 000b0fd8 201c
