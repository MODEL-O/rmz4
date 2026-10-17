@ FUN_080d9a7c  entry 0x080d9a7c  size 68
.thumb
.org 0xd9a7c
FUN_080d9a7c:
	push {r4, lr}	@ 000d9a7c 10b5
.org 0xd9a7e
	adds r4, r0, #0	@ 000d9a7e 041c
.org 0xd9a80
	ldrb r0, [r4, #18]	@ 000d9a80 a07c
.org 0xd9a82
	subs r0, #1	@ 000d9a82 0138
.org 0xd9a84
	strb r0, [r4, #18]	@ 000d9a84 a074
.org 0xd9a86
	lsls r0, r0, #24	@ 000d9a86 0006
.org 0xd9a88
	cmp r0, #0	@ 000d9a88 0028
.org 0xd9a8a
	bne.n 0xd9aac	@ 000d9a8a 0fd1
.org 0xd9a8c
	ldr r1, [pc, #24]	@ 000d9a8c 0649
.org 0xd9a8e
	ldrb r0, [r4, #9]	@ 000d9a8e 607a
.org 0xd9a90
	lsls r0, r0, #2	@ 000d9a90 8000
.org 0xd9a92
	adds r0, r0, r1	@ 000d9a92 4018
.org 0xd9a94
	movs r1, #2	@ 000d9a94 0221
.org 0xd9a96
	str r1, [r4, #12]	@ 000d9a96 e160
.org 0xd9a98
	ldr r0, [r0, #0]	@ 000d9a98 0068
.org 0xd9a9a
	ldr r0, [r0, #8]	@ 000d9a9a 8068
.org 0xd9a9c
	str r0, [r4, #20]	@ 000d9a9c 6061
.org 0xd9a9e
	adds r0, r4, #0	@ 000d9a9e 201c
.org 0xd9aa0
	bl 0xd9ac8	@ 000d9aa0 00f012f8
.org 0xd9aa4
	b.n 0xd9ac0	@ 000d9aa4 0ce0
.org 0xd9aa6
	.byte 0x00	@ 000d9aa6 data
.org 0xd9aa7
	.byte 0x00	@ 000d9aa7 data
.org 0xd9aa8
	.byte 0x64,0x6f,0x86,0x08	@ 000d9aa8 data
.org 0xd9aac
	adds r0, r4, #0	@ 000d9aac 201c
.org 0xd9aae
	bl 0x1cff0	@ 000d9aae 43f79ffa
.org 0xd9ab2
	ldr r0, [r4, #84]	@ 000d9ab2 606d
.org 0xd9ab4
	ldr r1, [r4, #92]	@ 000d9ab4 e16d
.org 0xd9ab6
	adds r0, r0, r1	@ 000d9ab6 4018
.org 0xd9ab8
	str r0, [r4, #84]	@ 000d9ab8 6065
.org 0xd9aba
	ldr r0, [r4, #100]	@ 000d9aba 606e
.org 0xd9abc
	adds r1, r1, r0	@ 000d9abc 0918
.org 0xd9abe
	str r1, [r4, #92]	@ 000d9abe e165
