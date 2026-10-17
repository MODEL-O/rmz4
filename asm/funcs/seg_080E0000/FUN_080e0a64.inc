@ FUN_080e0a64  entry 0x080e0a64  size 88
.thumb
.org 0xe0a64
FUN_080e0a64:
	push {r4, lr}	@ 000e0a64 10b5
.org 0xe0a66
	sub sp, #8	@ 000e0a66 82b0
.org 0xe0a68
	adds r4, r0, #0	@ 000e0a68 041c
.org 0xe0a6a
	ldrb r1, [r4, #10]	@ 000e0a6a a17a
.org 0xe0a6c
	movs r0, #16	@ 000e0a6c 1020
.org 0xe0a6e
	ands r0, r1	@ 000e0a6e 0840
.org 0xe0a70
	cmp r0, #0	@ 000e0a70 0028
.org 0xe0a72
	bne.n 0xe0a80	@ 000e0a72 05d1
.org 0xe0a74
	ldr r0, [r4, #84]	@ 000e0a74 606d
.org 0xe0a76
	ldr r1, [pc, #4]	@ 000e0a76 0149
.org 0xe0a78
	b.n 0xe0a86	@ 000e0a78 05e0
.org 0xe0a7a
	.byte 0x00	@ 000e0a7a data
.org 0xe0a7b
	.byte 0x00	@ 000e0a7b data
.org 0xe0a7c
	.byte 0x00,0xf6,0xff,0xff	@ 000e0a7c data
.org 0xe0a80
	ldr r0, [r4, #84]	@ 000e0a80 606d
.org 0xe0a82
	movs r1, #160	@ 000e0a82 a021
.org 0xe0a84
	lsls r1, r1, #4	@ 000e0a84 0901
.org 0xe0a86
	adds r0, r0, r1	@ 000e0a86 4018
.org 0xe0a88
	str r0, [sp, #0]	@ 000e0a88 0090
.org 0xe0a8a
	ldr r0, [r4, #88]	@ 000e0a8a a06d
.org 0xe0a8c
	movs r1, #128	@ 000e0a8c 8021
.org 0xe0a8e
	lsls r1, r1, #3	@ 000e0a8e c900
.org 0xe0a90
	adds r0, r0, r1	@ 000e0a90 4018
.org 0xe0a92
	str r0, [sp, #4]	@ 000e0a92 0190
.org 0xe0a94
	movs r0, #1	@ 000e0a94 0120
.org 0xe0a96
	mov r1, sp	@ 000e0a96 6946
.org 0xe0a98
	bl 0xd0c88	@ 000e0a98 f0f7f6f8
.org 0xe0a9c
	movs r0, #42	@ 000e0a9c 2a20
.org 0xe0a9e
	bl 0x2b10	@ 000e0a9e 22f737f8
.org 0xe0aa2
	movs r0, #3	@ 000e0aa2 0320
.org 0xe0aa4
	strb r0, [r4, #17]	@ 000e0aa4 6074
.org 0xe0aa6
	adds r0, r4, #0	@ 000e0aa6 201c
.org 0xe0aa8
	adds r0, #84	@ 000e0aa8 5430
.org 0xe0aaa
	ldrb r3, [r4, #10]	@ 000e0aaa a37a
.org 0xe0aac
	lsrs r3, r3, #4	@ 000e0aac 1b09
.org 0xe0aae
	movs r1, #1	@ 000e0aae 0121
.org 0xe0ab0
	ands r3, r1	@ 000e0ab0 0b40
.org 0xe0ab2
	movs r1, #3	@ 000e0ab2 0321
.org 0xe0ab4
	movs r2, #4	@ 000e0ab4 0422
.org 0xe0ab6
	bl 0xe08bc	@ 000e0ab6 fff701ff
.org 0xe0aba
	add sp, #8	@ 000e0aba 02b0
