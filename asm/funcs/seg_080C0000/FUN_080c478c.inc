@ FUN_080c478c  entry 0x080c478c  size 120
.thumb
.org 0xc478c
FUN_080c478c:
	push {r4, r5, r6, lr}	@ 000c478c 70b5
.org 0xc478e
	adds r4, r0, #0	@ 000c478e 041c
.org 0xc4790
	ldrb r0, [r4, #10]	@ 000c4790 a07a
.org 0xc4792
	lsrs r5, r0, #4	@ 000c4792 0509
.org 0xc4794
	movs r0, #1	@ 000c4794 0120
.org 0xc4796
	ands r5, r0	@ 000c4796 0540
.org 0xc4798
	ldrb r6, [r4, #15]	@ 000c4798 e67b
.org 0xc479a
	cmp r6, #0	@ 000c479a 002e
.org 0xc479c
	bne.n 0xc47c2	@ 000c479c 11d1
.org 0xc479e
	adds r0, r4, #0	@ 000c479e 201c
.org 0xc47a0
	adds r0, #116	@ 000c47a0 7430
.org 0xc47a2
	ldr r1, [pc, #96]	@ 000c47a2 1849
.org 0xc47a4
	bl 0x5784	@ 000c47a4 40f7eeff
.org 0xc47a8
	movs r1, #166	@ 000c47a8 a621
.org 0xc47aa
	lsls r1, r1, #7	@ 000c47aa c901
.org 0xc47ac
	adds r0, r4, #0	@ 000c47ac 201c
.org 0xc47ae
	bl 0x1cf00	@ 000c47ae 58f7a7fb
.org 0xc47b2
	lsls r0, r5, #1	@ 000c47b2 6800
.org 0xc47b4
	subs r0, #1	@ 000c47b4 0138
.org 0xc47b6
	lsls r0, r0, #7	@ 000c47b6 c001
.org 0xc47b8
	str r0, [r4, #92]	@ 000c47b8 e065
.org 0xc47ba
	str r6, [r4, #96]	@ 000c47ba 2666
.org 0xc47bc
	ldrb r0, [r4, #15]	@ 000c47bc e07b
.org 0xc47be
	adds r0, #1	@ 000c47be 0130
.org 0xc47c0
	strb r0, [r4, #15]	@ 000c47c0 e073
.org 0xc47c2
	adds r0, r4, #0	@ 000c47c2 201c
.org 0xc47c4
	bl 0x1cff0	@ 000c47c4 58f714fc
.org 0xc47c8
	ldr r0, [r4, #84]	@ 000c47c8 606d
.org 0xc47ca
	ldr r1, [r4, #92]	@ 000c47ca e16d
.org 0xc47cc
	adds r0, r0, r1	@ 000c47cc 4018
.org 0xc47ce
	str r0, [r4, #84]	@ 000c47ce 6065
.org 0xc47d0
	ldr r0, [r4, #88]	@ 000c47d0 a06d
.org 0xc47d2
	ldr r1, [r4, #96]	@ 000c47d2 216e
.org 0xc47d4
	adds r0, r0, r1	@ 000c47d4 4018
.org 0xc47d6
	str r0, [r4, #88]	@ 000c47d6 a065
.org 0xc47d8
	adds r1, #64	@ 000c47d8 4031
.org 0xc47da
	str r1, [r4, #96]	@ 000c47da 2166
.org 0xc47dc
	movs r0, #224	@ 000c47dc e020
.org 0xc47de
	lsls r0, r0, #3	@ 000c47de c000
.org 0xc47e0
	cmp r1, r0	@ 000c47e0 8142
.org 0xc47e2
	ble.n 0xc47e6	@ 000c47e2 00dd
.org 0xc47e4
	str r0, [r4, #96]	@ 000c47e4 2066
.org 0xc47e6
	adds r0, r4, #0	@ 000c47e6 201c
.org 0xc47e8
	adds r0, #180	@ 000c47e8 b430
.org 0xc47ea
	ldr r1, [r4, #88]	@ 000c47ea a16d
.org 0xc47ec
	ldr r0, [r0, #0]	@ 000c47ec 0068
.org 0xc47ee
	cmp r1, r0	@ 000c47ee 8142
.org 0xc47f0
	blt.n 0xc47fe	@ 000c47f0 05db
.org 0xc47f2
	str r0, [r4, #88]	@ 000c47f2 a065
.org 0xc47f4
	movs r1, #0	@ 000c47f4 0021
.org 0xc47f6
	movs r0, #2	@ 000c47f6 0220
.org 0xc47f8
	strb r0, [r4, #13]	@ 000c47f8 6073
.org 0xc47fa
	strb r1, [r4, #14]	@ 000c47fa a173
.org 0xc47fc
	strb r1, [r4, #15]	@ 000c47fc e173
.org 0xc47fe
	pop {r4, r5, r6}	@ 000c47fe 70bc
.org 0xc4800
	pop {r0}	@ 000c4800 01bc
.org 0xc4802
	bx r0	@ 000c4802 0047
