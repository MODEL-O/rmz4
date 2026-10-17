@ FUN_080ebf6c  entry 0x080ebf6c  size 92
.thumb
.org 0xebf6c
FUN_080ebf6c:
	push {r4, lr}	@ 000ebf6c 10b5
.org 0xebf6e
	adds r4, r0, #0	@ 000ebf6e 041c
.org 0xebf70
	ldrb r1, [r4, #10]	@ 000ebf70 a17a
.org 0xebf72
	movs r0, #1	@ 000ebf72 0120
.org 0xebf74
	orrs r0, r1	@ 000ebf74 0843
.org 0xebf76
	strb r0, [r4, #10]	@ 000ebf76 a072
.org 0xebf78
	adds r0, r4, #0	@ 000ebf78 201c
.org 0xebf7a
	bl 0x1cc9c	@ 000ebf7a 30f78ffe
.org 0xebf7e
	movs r1, #152	@ 000ebf7e 9821
.org 0xebf80
	lsls r1, r1, #6	@ 000ebf80 8901
.org 0xebf82
	adds r0, r4, #0	@ 000ebf82 201c
.org 0xebf84
	bl 0x1cf00	@ 000ebf84 30f7bcff
.org 0xebf88
	adds r2, r4, #0	@ 000ebf88 221c
.org 0xebf8a
	adds r2, #73	@ 000ebf8a 4932
.org 0xebf8c
	ldrb r1, [r2, #0]	@ 000ebf8c 1178
.org 0xebf8e
	movs r0, #13	@ 000ebf8e 0d20
.org 0xebf90
	negs r0, r0	@ 000ebf90 4042
.org 0xebf92
	ands r0, r1	@ 000ebf92 0840
.org 0xebf94
	strb r0, [r2, #0]	@ 000ebf94 1070
.org 0xebf96
	ldrb r0, [r4, #16]	@ 000ebf96 207c
.org 0xebf98
	cmp r0, #1	@ 000ebf98 0128
.org 0xebf9a
	bne.n 0xebfb8	@ 000ebf9a 0dd1
.org 0xebf9c
	ldr r0, [r4, #88]	@ 000ebf9c a06d
.org 0xebf9e
	asrs r1, r0, #12	@ 000ebf9e 0113
.org 0xebfa0
	adds r0, r1, #0	@ 000ebfa0 081c
.org 0xebfa2
	cmp r1, #0	@ 000ebfa2 0029
.org 0xebfa4
	bge.n 0xebfa8	@ 000ebfa4 00da
.org 0xebfa6
	adds r0, #31	@ 000ebfa6 1f30
.org 0xebfa8
	asrs r0, r0, #5	@ 000ebfa8 4011
.org 0xebfaa
	lsls r0, r0, #5	@ 000ebfaa 4001
.org 0xebfac
	subs r0, r1, r0	@ 000ebfac 081a
.org 0xebfae
	movs r1, #31	@ 000ebfae 1f21
.org 0xebfb0
	subs r1, r1, r0	@ 000ebfb0 091a
.org 0xebfb2
	adds r2, r4, #0	@ 000ebfb2 221c
.org 0xebfb4
	adds r2, #37	@ 000ebfb4 2532
.org 0xebfb6
	strb r1, [r2, #0]	@ 000ebfb6 1170
.org 0xebfb8
	ldrb r1, [r4, #17]	@ 000ebfb8 617c
.org 0xebfba
	movs r0, #3	@ 000ebfba 0320
.org 0xebfbc
	ands r0, r1	@ 000ebfbc 0840
.org 0xebfbe
	adds r0, #5	@ 000ebfbe 0530
.org 0xebfc0
	strb r0, [r4, #18]	@ 000ebfc0 a074
.org 0xebfc2
	pop {r4}	@ 000ebfc2 10bc
.org 0xebfc4
	pop {r0}	@ 000ebfc4 01bc
.org 0xebfc6
	bx r0	@ 000ebfc6 0047
