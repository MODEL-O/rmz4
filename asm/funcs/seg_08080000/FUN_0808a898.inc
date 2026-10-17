@ FUN_0808a898  entry 0x0808a898  size 112
.thumb
.org 0x8a898
FUN_0808a898:
	push {r4, r5, lr}	@ 0008a898 30b5
.org 0x8a89a
	adds r4, r0, #0	@ 0008a89a 041c
.org 0x8a89c
	ldrb r5, [r4, #14]	@ 0008a89c a57b
.org 0x8a89e
	cmp r5, #0	@ 0008a89e 002d
.org 0x8a8a0
	beq.n 0x8a8a8	@ 0008a8a0 02d0
.org 0x8a8a2
	cmp r5, #1	@ 0008a8a2 012d
.org 0x8a8a4
	beq.n 0x8a8e2	@ 0008a8a4 1dd0
.org 0x8a8a6
	b.n 0x8a902	@ 0008a8a6 2ce0
.org 0x8a8a8
	ldr r0, [pc, #92]	@ 0008a8a8 1748
.org 0x8a8aa
	bl 0x2b10	@ 0008a8aa 78f731f9
.org 0x8a8ae
	ldr r1, [pc, #92]	@ 0008a8ae 1749
.org 0x8a8b0
	adds r0, r4, #0	@ 0008a8b0 201c
.org 0x8a8b2
	bl 0x1cf00	@ 0008a8b2 92f725fb
.org 0x8a8b6
	adds r0, r4, #0	@ 0008a8b6 201c
.org 0x8a8b8
	adds r0, #116	@ 0008a8b8 7430
.org 0x8a8ba
	ldr r1, [pc, #84]	@ 0008a8ba 1549
.org 0x8a8bc
	ldrb r2, [r1, #8]	@ 0008a8bc 0a7a
.org 0x8a8be
	lsls r1, r2, #1	@ 0008a8be 5100
.org 0x8a8c0
	adds r1, r1, r2	@ 0008a8c0 8918
.org 0x8a8c2
	lsls r1, r1, #3	@ 0008a8c2 c900
.org 0x8a8c4
	ldr r2, [pc, #76]	@ 0008a8c4 134a
.org 0x8a8c6
	adds r1, r1, r2	@ 0008a8c6 8918
.org 0x8a8c8
	bl 0x5784	@ 0008a8c8 7af75cff
.org 0x8a8cc
	ldr r0, [r4, #84]	@ 0008a8cc 606d
.org 0x8a8ce
	ldr r1, [r4, #88]	@ 0008a8ce a16d
.org 0x8a8d0
	bl 0x8534	@ 0008a8d0 7df730fe
.org 0x8a8d4
	str r0, [r4, #88]	@ 0008a8d4 a065
.org 0x8a8d6
	str r5, [r4, #96]	@ 0008a8d6 2566
.org 0x8a8d8
	movs r0, #30	@ 0008a8d8 1e20
.org 0x8a8da
	strb r0, [r4, #18]	@ 0008a8da a074
.org 0x8a8dc
	ldrb r0, [r4, #14]	@ 0008a8dc a07b
.org 0x8a8de
	adds r0, #1	@ 0008a8de 0130
.org 0x8a8e0
	strb r0, [r4, #14]	@ 0008a8e0 a073
.org 0x8a8e2
	adds r0, r4, #0	@ 0008a8e2 201c
.org 0x8a8e4
	bl 0x8b1a4	@ 0008a8e4 00f05efc
.org 0x8a8e8
	adds r0, r4, #0	@ 0008a8e8 201c
.org 0x8a8ea
	bl 0x1cff0	@ 0008a8ea 92f781fb
.org 0x8a8ee
	ldrb r0, [r4, #18]	@ 0008a8ee a07c
.org 0x8a8f0
	subs r0, #1	@ 0008a8f0 0138
.org 0x8a8f2
	strb r0, [r4, #18]	@ 0008a8f2 a074
.org 0x8a8f4
	lsls r0, r0, #24	@ 0008a8f4 0006
.org 0x8a8f6
	lsrs r1, r0, #24	@ 0008a8f6 010e
.org 0x8a8f8
	cmp r1, #0	@ 0008a8f8 0029
.org 0x8a8fa
	bne.n 0x8a902	@ 0008a8fa 02d1
.org 0x8a8fc
	movs r0, #4	@ 0008a8fc 0420
.org 0x8a8fe
	strb r0, [r4, #13]	@ 0008a8fe 6073
.org 0x8a900
	strb r1, [r4, #14]	@ 0008a900 a173
.org 0x8a902
	pop {r4, r5}	@ 0008a902 30bc
.org 0x8a904
	pop {r0}	@ 0008a904 01bc
.org 0x8a906
	bx r0	@ 0008a906 0047
