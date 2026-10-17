@ FUN_080b269c  entry 0x080b269c  size 146
.thumb
.org 0xb269c
FUN_080b269c:
	push {r4, lr}	@ 000b269c 10b5
.org 0xb269e
	adds r4, r0, #0	@ 000b269e 041c
.org 0xb26a0
	ldrb r0, [r4, #14]	@ 000b26a0 a07b
.org 0xb26a2
	cmp r0, #0	@ 000b26a2 0028
.org 0xb26a4
	bne.n 0xb26da	@ 000b26a4 19d1
.org 0xb26a6
	adds r0, r4, #0	@ 000b26a6 201c
.org 0xb26a8
	adds r0, #181	@ 000b26a8 b530
.org 0xb26aa
	ldrb r1, [r0, #0]	@ 000b26aa 0178
.org 0xb26ac
	movs r2, #197	@ 000b26ac c522
.org 0xb26ae
	lsls r2, r2, #8	@ 000b26ae 1202
.org 0xb26b0
	adds r0, r2, #0	@ 000b26b0 101c
.org 0xb26b2
	orrs r1, r0	@ 000b26b2 0143
.org 0xb26b4
	adds r0, r4, #0	@ 000b26b4 201c
.org 0xb26b6
	bl 0x1cf00	@ 000b26b6 6af723fc
.org 0xb26ba
	movs r2, #176	@ 000b26ba b022
.org 0xb26bc
	lsls r2, r2, #2	@ 000b26bc 9200
.org 0xb26be
	str r2, [r4, #92]	@ 000b26be e265
.org 0xb26c0
	ldrb r1, [r4, #10]	@ 000b26c0 a17a
.org 0xb26c2
	movs r0, #16	@ 000b26c2 1020
.org 0xb26c4
	ands r0, r1	@ 000b26c4 0840
.org 0xb26c6
	cmp r0, #0	@ 000b26c6 0028
.org 0xb26c8
	bne.n 0xb26d4	@ 000b26c8 04d1
.org 0xb26ca
	lsls r0, r2, #8	@ 000b26ca 1002
.org 0xb26cc
	negs r0, r0	@ 000b26cc 4042
.org 0xb26ce
	adds r0, #255	@ 000b26ce ff30
.org 0xb26d0
	asrs r0, r0, #8	@ 000b26d0 0012
.org 0xb26d2
	str r0, [r4, #92]	@ 000b26d2 e065
.org 0xb26d4
	ldrb r0, [r4, #14]	@ 000b26d4 a07b
.org 0xb26d6
	adds r0, #1	@ 000b26d6 0130
.org 0xb26d8
	strb r0, [r4, #14]	@ 000b26d8 a073
.org 0xb26da
	ldrb r0, [r4, #17]	@ 000b26da 607c
.org 0xb26dc
	cmp r0, #1	@ 000b26dc 0128
.org 0xb26de
	bhi.n 0xb26fa	@ 000b26de 0cd8
.org 0xb26e0
	adds r0, r4, #0	@ 000b26e0 201c
.org 0xb26e2
	bl 0xb2d70	@ 000b26e2 00f045fb
.org 0xb26e6
	lsls r0, r0, #24	@ 000b26e6 0006
.org 0xb26e8
	cmp r0, #0	@ 000b26e8 0028
.org 0xb26ea
	beq.n 0xb26fa	@ 000b26ea 06d0
.org 0xb26ec
	movs r0, #0	@ 000b26ec 0020
.org 0xb26ee
	strb r0, [r4, #13]	@ 000b26ee 6073
.org 0xb26f0
	movs r1, #2	@ 000b26f0 0221
.org 0xb26f2
	strb r1, [r4, #15]	@ 000b26f2 e173
.org 0xb26f4
	strb r0, [r4, #14]	@ 000b26f4 a073
.org 0xb26f6
	movs r0, #32	@ 000b26f6 2020
.org 0xb26f8
	b.n 0xb2726	@ 000b26f8 15e0
.org 0xb26fa
	ldr r0, [r4, #84]	@ 000b26fa 606d
.org 0xb26fc
	ldr r1, [r4, #92]	@ 000b26fc e16d
.org 0xb26fe
	adds r0, r0, r1	@ 000b26fe 4018
.org 0xb2700
	str r0, [r4, #84]	@ 000b2700 6065
.org 0xb2702
	adds r0, r4, #0	@ 000b2702 201c
.org 0xb2704
	bl 0xb2cd4	@ 000b2704 00f0e6fa
.org 0xb2708
	lsls r0, r0, #24	@ 000b2708 0006
.org 0xb270a
	cmp r0, #0	@ 000b270a 0028
.org 0xb270c
	bne.n 0xb271a	@ 000b270c 05d1
.org 0xb270e
	adds r0, r4, #0	@ 000b270e 201c
.org 0xb2710
	bl 0xb2b94	@ 000b2710 00f040fa
.org 0xb2714
	lsls r0, r0, #24	@ 000b2714 0006
.org 0xb2716
	cmp r0, #0	@ 000b2716 0028
.org 0xb2718
	beq.n 0xb2728	@ 000b2718 06d0
.org 0xb271a
	movs r0, #0	@ 000b271a 0020
.org 0xb271c
	strb r0, [r4, #13]	@ 000b271c 6073
.org 0xb271e
	movs r1, #1	@ 000b271e 0121
.org 0xb2720
	strb r1, [r4, #15]	@ 000b2720 e173
.org 0xb2722
	strb r0, [r4, #14]	@ 000b2722 a073
.org 0xb2724
	movs r0, #24	@ 000b2724 1820
.org 0xb2726
	strb r0, [r4, #18]	@ 000b2726 a074
.org 0xb2728
	pop {r4}	@ 000b2728 10bc
.org 0xb272a
	pop {r0}	@ 000b272a 01bc
.org 0xb272c
	bx r0	@ 000b272c 0047
