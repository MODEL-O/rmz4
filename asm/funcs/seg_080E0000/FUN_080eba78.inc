@ FUN_080eba78  entry 0x080eba78  size 112
.thumb
.org 0xeba78
FUN_080eba78:
	push {r4, lr}	@ 000eba78 10b5
.org 0xeba7a
	adds r4, r0, #0	@ 000eba7a 041c
.org 0xeba7c
	ldr r0, [pc, #104]	@ 000eba7c 1a48
.org 0xeba7e
	ldr r0, [r0, #0]	@ 000eba7e 0068
.org 0xeba80
	bl 0x5500	@ 000eba80 19f73efd
.org 0xeba84
	mov ip, r0	@ 000eba84 8446
.org 0xeba86
	cmp r0, #0	@ 000eba86 0028
.org 0xeba88
	beq.n 0xebae2	@ 000eba88 2bd0
.org 0xeba8a
	mov r1, ip	@ 000eba8a 6146
.org 0xeba8c
	adds r1, #37	@ 000eba8c 2531
.org 0xeba8e
	movs r3, #0	@ 000eba8e 0023
.org 0xeba90
	movs r0, #30	@ 000eba90 1e20
.org 0xeba92
	strb r0, [r1, #0]	@ 000eba92 0870
.org 0xeba94
	ldr r1, [pc, #84]	@ 000eba94 1549
.org 0xeba96
	movs r0, #5	@ 000eba96 0520
.org 0xeba98
	mov r2, ip	@ 000eba98 6246
.org 0xeba9a
	strb r0, [r2, #9]	@ 000eba9a 5072
.org 0xeba9c
	ldr r0, [r1, #20]	@ 000eba9c 4869
.org 0xeba9e
	ldr r0, [r0, #0]	@ 000eba9e 0068
.org 0xebaa0
	str r0, [r2, #20]	@ 000ebaa0 5061
.org 0xebaa2
	movs r2, #0	@ 000ebaa2 0022
.org 0xebaa4
	mov r0, ip	@ 000ebaa4 6046
.org 0xebaa6
	strh r3, [r0, #32]	@ 000ebaa6 0384
.org 0xebaa8
	adds r0, #34	@ 000ebaa8 2230
.org 0xebaaa
	strb r2, [r0, #0]	@ 000ebaaa 0270
.org 0xebaac
	mov r3, ip	@ 000ebaac 6346
.org 0xebaae
	ldrb r1, [r3, #11]	@ 000ebaae d97a
.org 0xebab0
	movs r0, #16	@ 000ebab0 1020
.org 0xebab2
	orrs r0, r1	@ 000ebab2 0843
.org 0xebab4
	strb r0, [r3, #11]	@ 000ebab4 d872
.org 0xebab6
	ldrb r0, [r3, #28]	@ 000ebab6 187f
.org 0xebab8
	strb r0, [r3, #29]	@ 000ebab8 5877
.org 0xebaba
	str r4, [r3, #40]	@ 000ebaba 9c62
.org 0xebabc
	ldr r0, [r4, #84]	@ 000ebabc 606d
.org 0xebabe
	ldr r1, [r4, #88]	@ 000ebabe a16d
.org 0xebac0
	str r0, [r3, #84]	@ 000ebac0 5865
.org 0xebac2
	str r1, [r3, #88]	@ 000ebac2 9965
.org 0xebac4
	adds r0, r4, #0	@ 000ebac4 201c
.org 0xebac6
	adds r0, #164	@ 000ebac6 a430
.org 0xebac8
	ldrh r0, [r0, #0]	@ 000ebac8 0088
.org 0xebaca
	mov r1, ip	@ 000ebaca 6146
.org 0xebacc
	adds r1, #189	@ 000ebacc bd31
.org 0xebace
	strb r0, [r1, #0]	@ 000ebace 0870
.org 0xebad0
	ldrb r0, [r4, #10]	@ 000ebad0 a07a
.org 0xebad2
	lsrs r0, r0, #4	@ 000ebad2 0009
.org 0xebad4
	movs r1, #1	@ 000ebad4 0121
.org 0xebad6
	ands r0, r1	@ 000ebad6 0840
.org 0xebad8
	mov r1, ip	@ 000ebad8 6146
.org 0xebada
	adds r1, #190	@ 000ebada be31
.org 0xebadc
	strb r0, [r1, #0]	@ 000ebadc 0870
.org 0xebade
	strb r2, [r3, #16]	@ 000ebade 1a74
.org 0xebae0
	strb r2, [r3, #17]	@ 000ebae0 5a74
.org 0xebae2
	pop {r4}	@ 000ebae2 10bc
.org 0xebae4
	pop {r0}	@ 000ebae4 01bc
.org 0xebae6
	bx r0	@ 000ebae6 0047
