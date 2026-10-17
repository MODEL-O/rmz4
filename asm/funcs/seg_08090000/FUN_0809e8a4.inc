@ FUN_0809e8a4  entry 0x0809e8a4  size 102
.thumb
.org 0x9e8a4
FUN_0809e8a4:
	push {r4, lr}	@ 0009e8a4 10b5
.org 0x9e8a6
	adds r4, r0, #0	@ 0009e8a6 041c
.org 0x9e8a8
	adds r0, #180	@ 0009e8a8 b430
.org 0x9e8aa
	ldrb r0, [r0, #0]	@ 0009e8aa 0078
.org 0x9e8ac
	cmp r0, #0	@ 0009e8ac 0028
.org 0x9e8ae
	bne.n 0x9e8b8	@ 0009e8ae 03d1
.org 0x9e8b0
	ldr r0, [r4, #84]	@ 0009e8b0 606d
.org 0x9e8b2
	ldr r1, [r4, #92]	@ 0009e8b2 e16d
.org 0x9e8b4
	subs r0, r0, r1	@ 0009e8b4 401a
.org 0x9e8b6
	b.n 0x9e8be	@ 0009e8b6 02e0
.org 0x9e8b8
	ldr r0, [r4, #84]	@ 0009e8b8 606d
.org 0x9e8ba
	ldr r1, [r4, #92]	@ 0009e8ba e16d
.org 0x9e8bc
	adds r0, r0, r1	@ 0009e8bc 4018
.org 0x9e8be
	str r0, [r4, #84]	@ 0009e8be 6065
.org 0x9e8c0
	movs r0, #128	@ 0009e8c0 8020
.org 0x9e8c2
	lsls r0, r0, #2	@ 0009e8c2 8000
.org 0x9e8c4
	cmp r1, r0	@ 0009e8c4 8142
.org 0x9e8c6
	bne.n 0x9e8d0	@ 0009e8c6 03d1
.org 0x9e8c8
	adds r0, r4, #0	@ 0009e8c8 201c
.org 0x9e8ca
	bl 0x1d1f4	@ 0009e8ca 7ef793fc
.org 0x9e8ce
	b.n 0x9e8de	@ 0009e8ce 06e0
.org 0x9e8d0
	movs r0, #128	@ 0009e8d0 8020
.org 0x9e8d2
	lsls r0, r0, #1	@ 0009e8d2 4000
.org 0x9e8d4
	cmp r1, r0	@ 0009e8d4 8142
.org 0x9e8d6
	bne.n 0x9e8de	@ 0009e8d6 02d1
.org 0x9e8d8
	adds r0, r4, #0	@ 0009e8d8 201c
.org 0x9e8da
	bl 0x1cff0	@ 0009e8da 7ef789fb
.org 0x9e8de
	ldrb r0, [r4, #18]	@ 0009e8de a07c
.org 0x9e8e0
	adds r0, #1	@ 0009e8e0 0130
.org 0x9e8e2
	strb r0, [r4, #18]	@ 0009e8e2 a074
.org 0x9e8e4
	lsls r0, r0, #24	@ 0009e8e4 0006
.org 0x9e8e6
	lsrs r0, r0, #24	@ 0009e8e6 000e
.org 0x9e8e8
	cmp r0, #33	@ 0009e8e8 2128
.org 0x9e8ea
	bne.n 0x9e8f8	@ 0009e8ea 05d1
.org 0x9e8ec
	ldr r1, [pc, #28]	@ 0009e8ec 0749
.org 0x9e8ee
	adds r0, r4, #0	@ 0009e8ee 201c
.org 0x9e8f0
	bl 0x1cf00	@ 0009e8f0 7ef706fb
.org 0x9e8f4
	movs r0, #2	@ 0009e8f4 0220
.org 0x9e8f6
	strb r0, [r4, #13]	@ 0009e8f6 6073
.org 0x9e8f8
	ldrb r0, [r4, #18]	@ 0009e8f8 a07c
.org 0x9e8fa
	cmp r0, #16	@ 0009e8fa 1028
.org 0x9e8fc
	bne.n 0x9e904	@ 0009e8fc 02d1
.org 0x9e8fe
	movs r0, #128	@ 0009e8fe 8020
.org 0x9e900
	lsls r0, r0, #1	@ 0009e900 4000
.org 0x9e902
	str r0, [r4, #92]	@ 0009e902 e065
.org 0x9e904
	pop {r4}	@ 0009e904 10bc
.org 0x9e906
	pop {r0}	@ 0009e906 01bc
.org 0x9e908
	bx r0	@ 0009e908 0047
