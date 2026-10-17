@ FUN_0808e680  entry 0x0808e680  size 94
.thumb
.org 0x8e680
FUN_0808e680:
	push {r4, r5, r6, r7, lr}	@ 0008e680 f0b5
.org 0x8e682
	mov r7, r8	@ 0008e682 4746
.org 0x8e684
	push {r7}	@ 0008e684 80b4
.org 0x8e686
	sub sp, #8	@ 0008e686 82b0
.org 0x8e688
	adds r7, r0, #0	@ 0008e688 071c
.org 0x8e68a
	ldr r6, [r7, #40]	@ 0008e68a be6a
.org 0x8e68c
	adds r0, #184	@ 0008e68c b830
.org 0x8e68e
	ldrb r0, [r0, #0]	@ 0008e68e 0078
.org 0x8e690
	mov r8, r0	@ 0008e690 8046
.org 0x8e692
	ldrb r0, [r7, #15]	@ 0008e692 f87b
.org 0x8e694
	cmp r0, #0	@ 0008e694 0028
.org 0x8e696
	bne.n 0x8e69c	@ 0008e696 01d1
.org 0x8e698
	adds r0, #1	@ 0008e698 0130
.org 0x8e69a
	strb r0, [r7, #15]	@ 0008e69a f873
.org 0x8e69c
	adds r0, r7, #0	@ 0008e69c 381c
.org 0x8e69e
	bl 0x1cff0	@ 0008e69e 8ef7a7fc
.org 0x8e6a2
	ldr r4, [r6, #84]	@ 0008e6a2 746d
.org 0x8e6a4
	ldr r5, [r6, #88]	@ 0008e6a4 b56d
.org 0x8e6a6
	ldr r0, [r6, #100]	@ 0008e6a6 706e
.org 0x8e6a8
	ldr r1, [r0, #84]	@ 0008e6a8 416d
.org 0x8e6aa
	ldr r2, [r0, #88]	@ 0008e6aa 826d
.org 0x8e6ac
	str r1, [sp, #0]	@ 0008e6ac 0091
.org 0x8e6ae
	str r2, [sp, #4]	@ 0008e6ae 0192
.org 0x8e6b0
	subs r0, r1, r4	@ 0008e6b0 081b
.org 0x8e6b2
	mov r6, r8	@ 0008e6b2 4646
.org 0x8e6b4
	adds r6, #2	@ 0008e6b4 0236
.org 0x8e6b6
	muls r0, r6	@ 0008e6b6 7043
.org 0x8e6b8
	movs r1, #6	@ 0008e6b8 0621
.org 0x8e6ba
	bl 0x128fb8	@ 0008e6ba 9af07dfc
.org 0x8e6be
	adds r0, r0, r4	@ 0008e6be 0019
.org 0x8e6c0
	str r0, [r7, #84]	@ 0008e6c0 7865
.org 0x8e6c2
	ldr r2, [sp, #4]	@ 0008e6c2 019a
.org 0x8e6c4
	subs r0, r2, r5	@ 0008e6c4 501b
.org 0x8e6c6
	muls r0, r6	@ 0008e6c6 7043
.org 0x8e6c8
	movs r1, #6	@ 0008e6c8 0621
.org 0x8e6ca
	bl 0x128fb8	@ 0008e6ca 9af075fc
.org 0x8e6ce
	adds r0, r0, r5	@ 0008e6ce 4019
.org 0x8e6d0
	str r0, [r7, #88]	@ 0008e6d0 b865
.org 0x8e6d2
	add sp, #8	@ 0008e6d2 02b0
.org 0x8e6d4
	pop {r3}	@ 0008e6d4 08bc
.org 0x8e6d6
	mov r8, r3	@ 0008e6d6 9846
.org 0x8e6d8
	pop {r4, r5, r6, r7}	@ 0008e6d8 f0bc
.org 0x8e6da
	pop {r0}	@ 0008e6da 01bc
.org 0x8e6dc
	bx r0	@ 0008e6dc 0047
