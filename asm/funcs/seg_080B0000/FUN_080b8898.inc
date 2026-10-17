@ FUN_080b8898  entry 0x080b8898  size 126
.thumb
.org 0xb8898
FUN_080b8898:
	push {r4, lr}	@ 000b8898 10b5
.org 0xb889a
	adds r4, r0, #0	@ 000b889a 041c
.org 0xb889c
	ldrb r0, [r4, #15]	@ 000b889c e07b
.org 0xb889e
	cmp r0, #0	@ 000b889e 0028
.org 0xb88a0
	bne.n 0xb88d0	@ 000b88a0 16d1
.org 0xb88a2
	movs r0, #202	@ 000b88a2 ca20
.org 0xb88a4
	lsls r0, r0, #1	@ 000b88a4 4000
.org 0xb88a6
	bl 0x2b10	@ 000b88a6 4af733f9
.org 0xb88aa
	adds r0, r4, #0	@ 000b88aa 201c
.org 0xb88ac
	adds r0, #116	@ 000b88ac 7430
.org 0xb88ae
	ldr r1, [pc, #104]	@ 000b88ae 1a49
.org 0xb88b0
	bl 0x5784	@ 000b88b0 4cf768ff
.org 0xb88b4
	ldr r1, [pc, #100]	@ 000b88b4 1949
.org 0xb88b6
	adds r0, r4, #0	@ 000b88b6 201c
.org 0xb88b8
	bl 0x1cf00	@ 000b88b8 64f722fb
.org 0xb88bc
	ldr r0, [r4, #88]	@ 000b88bc a06d
.org 0xb88be
	str r0, [r4, #96]	@ 000b88be 2066
.org 0xb88c0
	movs r0, #128	@ 000b88c0 8020
.org 0xb88c2
	lsls r0, r0, #6	@ 000b88c2 8001
.org 0xb88c4
	str r0, [r4, #104]	@ 000b88c4 a066
.org 0xb88c6
	movs r0, #16	@ 000b88c6 1020
.org 0xb88c8
	strb r0, [r4, #18]	@ 000b88c8 a074
.org 0xb88ca
	ldrb r0, [r4, #15]	@ 000b88ca e07b
.org 0xb88cc
	adds r0, #1	@ 000b88cc 0130
.org 0xb88ce
	strb r0, [r4, #15]	@ 000b88ce e073
.org 0xb88d0
	adds r0, r4, #0	@ 000b88d0 201c
.org 0xb88d2
	bl 0x1cff0	@ 000b88d2 64f78dfb
.org 0xb88d6
	ldrb r0, [r4, #18]	@ 000b88d6 a07c
.org 0xb88d8
	subs r2, r0, #1	@ 000b88d8 421e
.org 0xb88da
	strb r2, [r4, #18]	@ 000b88da a274
.org 0xb88dc
	ldrb r1, [r4, #18]	@ 000b88dc a17c
.org 0xb88de
	movs r0, #16	@ 000b88de 1020
.org 0xb88e0
	subs r0, r0, r1	@ 000b88e0 401a
.org 0xb88e2
	lsls r0, r0, #26	@ 000b88e2 8006
.org 0xb88e4
	ldr r1, [pc, #56]	@ 000b88e4 0e49
.org 0xb88e6
	lsrs r0, r0, #23	@ 000b88e6 c00d
.org 0xb88e8
	adds r0, r0, r1	@ 000b88e8 4018
.org 0xb88ea
	movs r3, #0	@ 000b88ea 0023
.org 0xb88ec
	ldrsh r1, [r0, r3]	@ 000b88ec c15e
.org 0xb88ee
	ldr r0, [r4, #104]	@ 000b88ee a06e
.org 0xb88f0
	muls r0, r1	@ 000b88f0 4843
.org 0xb88f2
	cmp r0, #0	@ 000b88f2 0028
.org 0xb88f4
	bge.n 0xb88f8	@ 000b88f4 00da
.org 0xb88f6
	adds r0, #255	@ 000b88f6 ff30
.org 0xb88f8
	asrs r0, r0, #8	@ 000b88f8 0012
.org 0xb88fa
	ldr r1, [r4, #96]	@ 000b88fa 216e
.org 0xb88fc
	adds r1, r1, r0	@ 000b88fc 0918
.org 0xb88fe
	str r1, [r4, #88]	@ 000b88fe a165
.org 0xb8900
	lsls r0, r2, #24	@ 000b8900 1006
.org 0xb8902
	lsrs r1, r0, #24	@ 000b8902 010e
.org 0xb8904
	cmp r1, #0	@ 000b8904 0029
.org 0xb8906
	bne.n 0xb8910	@ 000b8906 03d1
.org 0xb8908
	movs r0, #1	@ 000b8908 0120
.org 0xb890a
	strb r0, [r4, #13]	@ 000b890a 6073
.org 0xb890c
	strb r1, [r4, #14]	@ 000b890c a173
.org 0xb890e
	strb r1, [r4, #15]	@ 000b890e e173
.org 0xb8910
	pop {r4}	@ 000b8910 10bc
.org 0xb8912
	pop {r0}	@ 000b8912 01bc
.org 0xb8914
	bx r0	@ 000b8914 0047
