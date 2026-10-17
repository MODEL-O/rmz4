@ FUN_080e6a6c  entry 0x080e6a6c  size 98
.thumb
.org 0xe6a6c
FUN_080e6a6c:
	push {r4, lr}	@ 000e6a6c 10b5
.org 0xe6a6e
	adds r4, r0, #0	@ 000e6a6e 041c
.org 0xe6a70
	ldr r0, [r4, #84]	@ 000e6a70 606d
.org 0xe6a72
	ldr r1, [r4, #92]	@ 000e6a72 e16d
.org 0xe6a74
	adds r0, r0, r1	@ 000e6a74 4018
.org 0xe6a76
	str r0, [r4, #84]	@ 000e6a76 6065
.org 0xe6a78
	ldr r0, [r4, #88]	@ 000e6a78 a06d
.org 0xe6a7a
	ldr r1, [r4, #96]	@ 000e6a7a 216e
.org 0xe6a7c
	adds r0, r0, r1	@ 000e6a7c 4018
.org 0xe6a7e
	str r0, [r4, #88]	@ 000e6a7e a065
.org 0xe6a80
	ldrb r0, [r4, #18]	@ 000e6a80 a07c
.org 0xe6a82
	cmp r0, #39	@ 000e6a82 2728
.org 0xe6a84
	bhi.n 0xe6aaa	@ 000e6a84 11d8
.org 0xe6a86
	adds r3, r4, #0	@ 000e6a86 231c
.org 0xe6a88
	adds r3, #116	@ 000e6a88 7433
.org 0xe6a8a
	ldrb r0, [r3, #0]	@ 000e6a8a 1878
.org 0xe6a8c
	cmp r0, #0	@ 000e6a8c 0028
.org 0xe6a8e
	bne.n 0xe6a9e	@ 000e6a8e 06d1
.org 0xe6a90
	ldrb r0, [r4, #10]	@ 000e6a90 a07a
.org 0xe6a92
	movs r1, #254	@ 000e6a92 fe21
.org 0xe6a94
	ands r1, r0	@ 000e6a94 0140
.org 0xe6a96
	strb r1, [r4, #10]	@ 000e6a96 a172
.org 0xe6a98
	movs r0, #1	@ 000e6a98 0120
.org 0xe6a9a
	strb r0, [r3, #0]	@ 000e6a9a 1870
.org 0xe6a9c
	b.n 0xe6aaa	@ 000e6a9c 05e0
.org 0xe6a9e
	ldrb r0, [r4, #10]	@ 000e6a9e a07a
.org 0xe6aa0
	movs r1, #1	@ 000e6aa0 0121
.org 0xe6aa2
	movs r2, #0	@ 000e6aa2 0022
.org 0xe6aa4
	orrs r1, r0	@ 000e6aa4 0143
.org 0xe6aa6
	strb r1, [r4, #10]	@ 000e6aa6 a172
.org 0xe6aa8
	strb r2, [r3, #0]	@ 000e6aa8 1a70
.org 0xe6aaa
	adds r0, r4, #0	@ 000e6aaa 201c
.org 0xe6aac
	bl 0xe6b44	@ 000e6aac 00f04af8
.org 0xe6ab0
	lsls r0, r0, #24	@ 000e6ab0 0006
.org 0xe6ab2
	cmp r0, #0	@ 000e6ab2 0028
.org 0xe6ab4
	beq.n 0xe6ac8	@ 000e6ab4 08d0
.org 0xe6ab6
	ldr r1, [pc, #24]	@ 000e6ab6 0649
.org 0xe6ab8
	ldrb r0, [r4, #9]	@ 000e6ab8 607a
.org 0xe6aba
	lsls r0, r0, #2	@ 000e6aba 8000
.org 0xe6abc
	adds r0, r0, r1	@ 000e6abc 4018
.org 0xe6abe
	movs r1, #2	@ 000e6abe 0221
.org 0xe6ac0
	str r1, [r4, #12]	@ 000e6ac0 e160
.org 0xe6ac2
	ldr r0, [r0, #0]	@ 000e6ac2 0068
.org 0xe6ac4
	ldr r0, [r0, #8]	@ 000e6ac4 8068
.org 0xe6ac6
	str r0, [r4, #20]	@ 000e6ac6 6061
.org 0xe6ac8
	pop {r4}	@ 000e6ac8 10bc
.org 0xe6aca
	pop {r0}	@ 000e6aca 01bc
.org 0xe6acc
	bx r0	@ 000e6acc 0047
