@ FUN_0808c988  entry 0x0808c988  size 114
.thumb
.org 0x8c988
FUN_0808c988:
	push {r4, lr}	@ 0008c988 10b5
.org 0x8c98a
	adds r4, r0, #0	@ 0008c98a 041c
.org 0x8c98c
	ldrb r1, [r4, #15]	@ 0008c98c e17b
.org 0x8c98e
	cmp r1, #0	@ 0008c98e 0029
.org 0x8c990
	bne.n 0x8c9b0	@ 0008c990 0ed1
.org 0x8c992
	adds r0, #140	@ 0008c992 8c30
.org 0x8c994
	str r1, [r0, #0]	@ 0008c994 0160
.org 0x8c996
	adds r0, #4	@ 0008c996 0430
.org 0x8c998
	str r1, [r0, #0]	@ 0008c998 0160
.org 0x8c99a
	adds r0, #4	@ 0008c99a 0430
.org 0x8c99c
	strb r1, [r0, #0]	@ 0008c99c 0170
.org 0x8c99e
	ldrb r1, [r4, #10]	@ 0008c99e a17a
.org 0x8c9a0
	movs r0, #251	@ 0008c9a0 fb20
.org 0x8c9a2
	ands r0, r1	@ 0008c9a2 0840
.org 0x8c9a4
	strb r0, [r4, #10]	@ 0008c9a4 a072
.org 0x8c9a6
	movs r0, #16	@ 0008c9a6 1020
.org 0x8c9a8
	strb r0, [r4, #18]	@ 0008c9a8 a074
.org 0x8c9aa
	ldrb r0, [r4, #15]	@ 0008c9aa e07b
.org 0x8c9ac
	adds r0, #1	@ 0008c9ac 0130
.org 0x8c9ae
	strb r0, [r4, #15]	@ 0008c9ae e073
.org 0x8c9b0
	adds r0, r4, #0	@ 0008c9b0 201c
.org 0x8c9b2
	bl 0x1cff0	@ 0008c9b2 90f71dfb
.org 0x8c9b6
	ldrb r0, [r4, #18]	@ 0008c9b6 a07c
.org 0x8c9b8
	subs r0, #1	@ 0008c9b8 0138
.org 0x8c9ba
	strb r0, [r4, #18]	@ 0008c9ba a074
.org 0x8c9bc
	lsls r0, r0, #24	@ 0008c9bc 0006
.org 0x8c9be
	cmp r0, #0	@ 0008c9be 0028
.org 0x8c9c0
	bne.n 0x8c9f4	@ 0008c9c0 18d1
.org 0x8c9c2
	ldrb r0, [r4, #10]	@ 0008c9c2 a07a
.org 0x8c9c4
	movs r1, #254	@ 0008c9c4 fe21
.org 0x8c9c6
	ands r1, r0	@ 0008c9c6 0140
.org 0x8c9c8
	strb r1, [r4, #10]	@ 0008c9c8 a172
.org 0x8c9ca
	ldr r2, [pc, #48]	@ 0008c9ca 0c4a
.org 0x8c9cc
	ldrh r1, [r2, #12]	@ 0008c9cc 9189
.org 0x8c9ce
	ldr r0, [pc, #48]	@ 0008c9ce 0c48
.org 0x8c9d0
	cmp r1, r0	@ 0008c9d0 8142
.org 0x8c9d2
	bhi.n 0x8c9d8	@ 0008c9d2 01d8
.org 0x8c9d4
	adds r0, r1, #1	@ 0008c9d4 481c
.org 0x8c9d6
	strh r0, [r2, #12]	@ 0008c9d6 9081
.org 0x8c9d8
	adds r1, r4, #0	@ 0008c9d8 211c
.org 0x8c9da
	adds r1, #84	@ 0008c9da 5431
.org 0x8c9dc
	adds r0, r4, #0	@ 0008c9dc 201c
.org 0x8c9de
	bl 0x2abe0	@ 0008c9de 9ef7fff8
.org 0x8c9e2
	ldr r1, [pc, #32]	@ 0008c9e2 0849
.org 0x8c9e4
	ldrb r0, [r4, #9]	@ 0008c9e4 607a
.org 0x8c9e6
	lsls r0, r0, #2	@ 0008c9e6 8000
.org 0x8c9e8
	adds r0, r0, r1	@ 0008c9e8 4018
.org 0x8c9ea
	movs r1, #4	@ 0008c9ea 0421
.org 0x8c9ec
	str r1, [r4, #12]	@ 0008c9ec e160
.org 0x8c9ee
	ldr r0, [r0, #0]	@ 0008c9ee 0068
.org 0x8c9f0
	ldr r0, [r0, #16]	@ 0008c9f0 0069
.org 0x8c9f2
	str r0, [r4, #20]	@ 0008c9f2 6061
.org 0x8c9f4
	pop {r4}	@ 0008c9f4 10bc
.org 0x8c9f6
	pop {r0}	@ 0008c9f6 01bc
.org 0x8c9f8
	bx r0	@ 0008c9f8 0047
