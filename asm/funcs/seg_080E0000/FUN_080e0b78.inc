@ FUN_080e0b78  entry 0x080e0b78  size 96
.thumb
.org 0xe0b78
FUN_080e0b78:
	push {r4, lr}	@ 000e0b78 10b5
.org 0xe0b7a
	adds r4, r0, #0	@ 000e0b7a 041c
.org 0xe0b7c
	ldrb r0, [r4, #14]	@ 000e0b7c a07b
.org 0xe0b7e
	cmp r0, #1	@ 000e0b7e 0128
.org 0xe0b80
	bne.n 0xe0bac	@ 000e0b80 14d1
.org 0xe0b82
	ldr r1, [pc, #84]	@ 000e0b82 1549
.org 0xe0b84
	adds r0, r4, #0	@ 000e0b84 201c
.org 0xe0b86
	bl 0x1cf00	@ 000e0b86 3cf7bbf9
.org 0xe0b8a
	movs r0, #20	@ 000e0b8a 1420
.org 0xe0b8c
	strb r0, [r4, #18]	@ 000e0b8c a074
.org 0xe0b8e
	ldr r2, [pc, #76]	@ 000e0b8e 134a
.org 0xe0b90
	str r2, [r4, #92]	@ 000e0b90 e265
.org 0xe0b92
	str r2, [r4, #96]	@ 000e0b92 2266
.org 0xe0b94
	ldrb r1, [r4, #10]	@ 000e0b94 a17a
.org 0xe0b96
	movs r0, #16	@ 000e0b96 1020
.org 0xe0b98
	ands r0, r1	@ 000e0b98 0840
.org 0xe0b9a
	cmp r0, #0	@ 000e0b9a 0028
.org 0xe0b9c
	beq.n 0xe0ba6	@ 000e0b9c 03d0
.org 0xe0b9e
	lsls r0, r2, #8	@ 000e0b9e 1002
.org 0xe0ba0
	negs r0, r0	@ 000e0ba0 4042
.org 0xe0ba2
	asrs r0, r0, #8	@ 000e0ba2 0012
.org 0xe0ba4
	str r0, [r4, #92]	@ 000e0ba4 e065
.org 0xe0ba6
	ldrb r0, [r4, #14]	@ 000e0ba6 a07b
.org 0xe0ba8
	adds r0, #1	@ 000e0ba8 0130
.org 0xe0baa
	strb r0, [r4, #14]	@ 000e0baa a073
.org 0xe0bac
	adds r0, r4, #0	@ 000e0bac 201c
.org 0xe0bae
	bl 0xe0cd4	@ 000e0bae 00f091f8
.org 0xe0bb2
	lsls r0, r0, #24	@ 000e0bb2 0006
.org 0xe0bb4
	lsrs r0, r0, #24	@ 000e0bb4 000e
.org 0xe0bb6
	cmp r0, #1	@ 000e0bb6 0128
.org 0xe0bb8
	bne.n 0xe0bcc	@ 000e0bb8 08d1
.org 0xe0bba
	ldr r1, [pc, #36]	@ 000e0bba 0949
.org 0xe0bbc
	ldrb r0, [r4, #9]	@ 000e0bbc 607a
.org 0xe0bbe
	lsls r0, r0, #2	@ 000e0bbe 8000
.org 0xe0bc0
	adds r0, r0, r1	@ 000e0bc0 4018
.org 0xe0bc2
	movs r1, #2	@ 000e0bc2 0221
.org 0xe0bc4
	str r1, [r4, #12]	@ 000e0bc4 e160
.org 0xe0bc6
	ldr r0, [r0, #0]	@ 000e0bc6 0068
.org 0xe0bc8
	ldr r0, [r0, #8]	@ 000e0bc8 8068
.org 0xe0bca
	str r0, [r4, #20]	@ 000e0bca 6061
.org 0xe0bcc
	adds r0, r4, #0	@ 000e0bcc 201c
.org 0xe0bce
	bl 0xe0cbc	@ 000e0bce 00f075f8
.org 0xe0bd2
	pop {r4}	@ 000e0bd2 10bc
.org 0xe0bd4
	pop {r0}	@ 000e0bd4 01bc
.org 0xe0bd6
	bx r0	@ 000e0bd6 0047
