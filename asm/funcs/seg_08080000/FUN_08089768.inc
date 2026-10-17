@ FUN_08089768  entry 0x08089768  size 116
.thumb
.org 0x89768
FUN_08089768:
	push {r4, r5, lr}	@ 00089768 30b5
.org 0x8976a
	adds r5, r0, #0	@ 0008976a 051c
.org 0x8976c
	ldrb r0, [r5, #14]	@ 0008976c a87b
.org 0x8976e
	cmp r0, #0	@ 0008976e 0028
.org 0x89770
	beq.n 0x89778	@ 00089770 02d0
.org 0x89772
	cmp r0, #1	@ 00089772 0128
.org 0x89774
	beq.n 0x897ac	@ 00089774 1ad0
.org 0x89776
	b.n 0x897d6	@ 00089776 2ee0
.org 0x89778
	adds r4, r5, #0	@ 00089778 2c1c
.org 0x8977a
	adds r4, #192	@ 0008977a c034
.org 0x8977c
	ldrb r1, [r4, #0]	@ 0008977c 2178
.org 0x8977e
	movs r2, #248	@ 0008977e f822
.org 0x89780
	lsls r2, r2, #5	@ 00089780 5201
.org 0x89782
	adds r0, r2, #0	@ 00089782 101c
.org 0x89784
	orrs r1, r0	@ 00089784 0143
.org 0x89786
	adds r0, r5, #0	@ 00089786 281c
.org 0x89788
	bl 0x1cf00	@ 00089788 93f7bafb
.org 0x8978c
	adds r0, r5, #0	@ 0008978c 281c
.org 0x8978e
	adds r0, #116	@ 0008978e 7430
.org 0x89790
	ldr r2, [pc, #72]	@ 00089790 124a
.org 0x89792
	ldrb r1, [r4, #0]	@ 00089792 2178
.org 0x89794
	adds r1, r1, r2	@ 00089794 8918
.org 0x89796
	ldrb r2, [r1, #0]	@ 00089796 0a78
.org 0x89798
	lsls r1, r2, #1	@ 00089798 5100
.org 0x8979a
	adds r1, r1, r2	@ 0008979a 8918
.org 0x8979c
	lsls r1, r1, #3	@ 0008979c c900
.org 0x8979e
	ldr r2, [pc, #64]	@ 0008979e 104a
.org 0x897a0
	adds r1, r1, r2	@ 000897a0 8918
.org 0x897a2
	bl 0x5784	@ 000897a2 7bf7efff
.org 0x897a6
	ldrb r0, [r5, #14]	@ 000897a6 a87b
.org 0x897a8
	adds r0, #1	@ 000897a8 0130
.org 0x897aa
	strb r0, [r5, #14]	@ 000897aa a873
.org 0x897ac
	ldrb r0, [r5, #18]	@ 000897ac a87c
.org 0x897ae
	movs r1, #31	@ 000897ae 1f21
.org 0x897b0
	ands r0, r1	@ 000897b0 0840
.org 0x897b2
	cmp r0, #0	@ 000897b2 0028
.org 0x897b4
	bne.n 0x897be	@ 000897b4 03d1
.org 0x897b6
	movs r0, #158	@ 000897b6 9e20
.org 0x897b8
	lsls r0, r0, #1	@ 000897b8 4000
.org 0x897ba
	bl 0x2b10	@ 000897ba 79f7a9f9
.org 0x897be
	adds r0, r5, #0	@ 000897be 281c
.org 0x897c0
	bl 0x1cff0	@ 000897c0 93f716fc
.org 0x897c4
	adds r0, r5, #0	@ 000897c4 281c
.org 0x897c6
	adds r0, #115	@ 000897c6 7330
.org 0x897c8
	ldrb r0, [r0, #0]	@ 000897c8 0078
.org 0x897ca
	cmp r0, #3	@ 000897ca 0328
.org 0x897cc
	bne.n 0x897d6	@ 000897cc 03d1
.org 0x897ce
	movs r1, #0	@ 000897ce 0021
.org 0x897d0
	movs r0, #1	@ 000897d0 0120
.org 0x897d2
	strb r0, [r5, #13]	@ 000897d2 6873
.org 0x897d4
	strb r1, [r5, #14]	@ 000897d4 a973
.org 0x897d6
	pop {r4, r5}	@ 000897d6 30bc
.org 0x897d8
	pop {r0}	@ 000897d8 01bc
.org 0x897da
	bx r0	@ 000897da 0047
