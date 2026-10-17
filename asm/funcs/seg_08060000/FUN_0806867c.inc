@ FUN_0806867c  entry 0x0806867c  size 86
.thumb
.org 0x6867c
FUN_0806867c:
	push {r4, lr}	@ 0006867c 10b5
.org 0x6867e
	adds r4, r0, #0	@ 0006867e 041c
.org 0x68680
	ldrb r0, [r4, #14]	@ 00068680 a07b
.org 0x68682
	cmp r0, #0	@ 00068682 0028
.org 0x68684
	bne.n 0x6869e	@ 00068684 0bd1
.org 0x68686
	ldr r1, [pc, #76]	@ 00068686 1349
.org 0x68688
	adds r0, r4, #0	@ 00068688 201c
.org 0x6868a
	bl 0x1cf00	@ 0006868a b4f739fc
.org 0x6868e
	adds r0, r4, #0	@ 0006868e 201c
.org 0x68690
	adds r0, #116	@ 00068690 7430
.org 0x68692
	ldr r1, [pc, #68]	@ 00068692 1149
.org 0x68694
	bl 0x5784	@ 00068694 9df776f8
.org 0x68698
	ldrb r0, [r4, #14]	@ 00068698 a07b
.org 0x6869a
	adds r0, #1	@ 0006869a 0130
.org 0x6869c
	strb r0, [r4, #14]	@ 0006869c a073
.org 0x6869e
	adds r0, r4, #0	@ 0006869e 201c
.org 0x686a0
	bl 0x1cff0	@ 000686a0 b4f7a6fc
.org 0x686a4
	adds r0, r4, #0	@ 000686a4 201c
.org 0x686a6
	adds r0, #115	@ 000686a6 7330
.org 0x686a8
	ldrb r0, [r0, #0]	@ 000686a8 0078
.org 0x686aa
	cmp r0, #3	@ 000686aa 0328
.org 0x686ac
	bne.n 0x686cc	@ 000686ac 0ed1
.org 0x686ae
	ldr r0, [r4, #44]	@ 000686ae e06a
.org 0x686b0
	ldr r0, [r0, #84]	@ 000686b0 406d
.org 0x686b2
	ldr r1, [r4, #84]	@ 000686b2 616d
.org 0x686b4
	subs r0, r0, r1	@ 000686b4 401a
.org 0x686b6
	movs r1, #140	@ 000686b6 8c21
.org 0x686b8
	lsls r1, r1, #8	@ 000686b8 0902
.org 0x686ba
	adds r0, r0, r1	@ 000686ba 4018
.org 0x686bc
	movs r1, #140	@ 000686bc 8c21
.org 0x686be
	lsls r1, r1, #9	@ 000686be 4902
.org 0x686c0
	cmp r0, r1	@ 000686c0 8842
.org 0x686c2
	bhi.n 0x686cc	@ 000686c2 03d8
.org 0x686c4
	movs r1, #0	@ 000686c4 0021
.org 0x686c6
	movs r0, #38	@ 000686c6 2620
.org 0x686c8
	strb r0, [r4, #13]	@ 000686c8 6073
.org 0x686ca
	strb r1, [r4, #14]	@ 000686ca a173
.org 0x686cc
	pop {r4}	@ 000686cc 10bc
.org 0x686ce
	pop {r0}	@ 000686ce 01bc
.org 0x686d0
	bx r0	@ 000686d0 0047
