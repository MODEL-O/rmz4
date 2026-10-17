@ FUN_08069770  entry 0x08069770  size 120
.thumb
.org 0x69770
FUN_08069770:
	push {r4, r5, r6, r7, lr}	@ 00069770 f0b5
.org 0x69772
	mov r7, r8	@ 00069772 4746
.org 0x69774
	push {r7}	@ 00069774 80b4
.org 0x69776
	adds r5, r0, #0	@ 00069776 051c
.org 0x69778
	adds r0, #180	@ 00069778 b430
.org 0x6977a
	ldr r6, [r0, #0]	@ 0006977a 0668
.org 0x6977c
	adds r0, #4	@ 0006977c 0430
.org 0x6977e
	ldr r7, [r0, #0]	@ 0006977e 0768
.org 0x69780
	adds r0, #4	@ 00069780 0430
.org 0x69782
	ldr r0, [r0, #0]	@ 00069782 0068
.org 0x69784
	mov r8, r0	@ 00069784 8046
.org 0x69786
	adds r0, r5, #0	@ 00069786 281c
.org 0x69788
	adds r0, #192	@ 00069788 c030
.org 0x6978a
	ldr r2, [r0, #0]	@ 0006978a 0268
.org 0x6978c
	ldrb r0, [r5, #15]	@ 0006978c e87b
.org 0x6978e
	cmp r0, #0	@ 0006978e 0028
.org 0x69790
	bne.n 0x697ba	@ 00069790 13d1
.org 0x69792
	ldrb r1, [r2, #10]	@ 00069792 917a
.org 0x69794
	movs r0, #254	@ 00069794 fe20
.org 0x69796
	ands r0, r1	@ 00069796 0840
.org 0x69798
	strb r0, [r2, #10]	@ 00069798 9072
.org 0x6979a
	ldr r4, [pc, #76]	@ 0006979a 134c
.org 0x6979c
	ldrh r1, [r4, #0]	@ 0006979c 2188
.org 0x6979e
	adds r0, r6, #0	@ 0006979e 301c
.org 0x697a0
	bl 0x1cf00	@ 000697a0 b3f7aefb
.org 0x697a4
	ldrh r1, [r4, #8]	@ 000697a4 2189
.org 0x697a6
	adds r0, r7, #0	@ 000697a6 381c
.org 0x697a8
	bl 0x1cf00	@ 000697a8 b3f7aafb
.org 0x697ac
	ldrh r1, [r4, #24]	@ 000697ac 218b
.org 0x697ae
	mov r0, r8	@ 000697ae 4046
.org 0x697b0
	bl 0x1cf00	@ 000697b0 b3f7a6fb
.org 0x697b4
	ldrb r0, [r5, #15]	@ 000697b4 e87b
.org 0x697b6
	adds r0, #1	@ 000697b6 0130
.org 0x697b8
	strb r0, [r5, #15]	@ 000697b8 e873
.org 0x697ba
	adds r0, r6, #0	@ 000697ba 301c
.org 0x697bc
	bl 0x1cff0	@ 000697bc b3f718fc
.org 0x697c0
	adds r0, r7, #0	@ 000697c0 381c
.org 0x697c2
	bl 0x1cff0	@ 000697c2 b3f715fc
.org 0x697c6
	mov r0, r8	@ 000697c6 4046
.org 0x697c8
	bl 0x1cff0	@ 000697c8 b3f712fc
.org 0x697cc
	ldr r0, [pc, #28]	@ 000697cc 0748
.org 0x697ce
	ldrb r0, [r0, #18]	@ 000697ce 807c
.org 0x697d0
	movs r1, #1	@ 000697d0 0121
.org 0x697d2
	ands r1, r0	@ 000697d2 0140
.org 0x697d4
	cmp r1, #0	@ 000697d4 0029
.org 0x697d6
	bne.n 0x697de	@ 000697d6 02d1
.org 0x697d8
	strb r1, [r5, #13]	@ 000697d8 6973
.org 0x697da
	strb r1, [r5, #14]	@ 000697da a973
.org 0x697dc
	strb r1, [r5, #15]	@ 000697dc e973
.org 0x697de
	pop {r3}	@ 000697de 08bc
.org 0x697e0
	mov r8, r3	@ 000697e0 9846
.org 0x697e2
	pop {r4, r5, r6, r7}	@ 000697e2 f0bc
.org 0x697e4
	pop {r0}	@ 000697e4 01bc
.org 0x697e6
	bx r0	@ 000697e6 0047
