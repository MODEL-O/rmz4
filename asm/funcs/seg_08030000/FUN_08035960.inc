@ FUN_08035960  entry 0x08035960  size 192
.thumb
.org 0x35960
FUN_08035960:
	push {r4, r5, r6, lr}	@ 00035960 70b5
.org 0x35962
	sub sp, #4	@ 00035962 81b0
.org 0x35964
	adds r4, r0, #0	@ 00035964 041c
.org 0x35966
	movs r0, #129	@ 00035966 8120
.org 0x35968
	lsls r0, r0, #1	@ 00035968 4000
.org 0x3596a
	adds r5, r4, r0	@ 0003596a 2518
.org 0x3596c
	ldrb r6, [r5, #0]	@ 0003596c 2e78
.org 0x3596e
	cmp r6, #0	@ 0003596e 002e
.org 0x35970
	bne.n 0x35998	@ 00035970 12d1
.org 0x35972
	ldr r1, [pc, #32]	@ 00035972 0849
.org 0x35974
	adds r0, r4, #0	@ 00035974 201c
.org 0x35976
	bl 0x1cf00	@ 00035976 e7f7c3fa
.org 0x3597a
	movs r1, #163	@ 0003597a a321
.org 0x3597c
	lsls r1, r1, #1	@ 0003597c 4900
.org 0x3597e
	adds r0, r4, r1	@ 0003597e 6018
.org 0x35980
	strb r6, [r0, #0]	@ 00035980 0670
.org 0x35982
	adds r0, r4, #0	@ 00035982 201c
.org 0x35984
	movs r1, #21	@ 00035984 1521
.org 0x35986
	bl 0x3c464	@ 00035986 06f06dfd
.org 0x3598a
	ldrb r0, [r5, #0]	@ 0003598a 2878
.org 0x3598c
	adds r0, #1	@ 0003598c 0130
.org 0x3598e
	strb r0, [r5, #0]	@ 0003598e 2870
.org 0x35990
	b.n 0x359fe	@ 00035990 35e0
.org 0x35992
	.byte 0x00	@ 00035992 data
.org 0x35993
	.byte 0x00	@ 00035993 data
.org 0x35994
	.byte 0x01,0x1a,0x00,0x00	@ 00035994 data
.org 0x35998
	adds r0, r4, #0	@ 00035998 201c
.org 0x3599a
	mov r1, sp	@ 0003599a 6946
.org 0x3599c
	bl 0x39fd8	@ 0003599c 04f01cfb
.org 0x359a0
	lsls r0, r0, #24	@ 000359a0 0006
.org 0x359a2
	cmp r0, #0	@ 000359a2 0028
.org 0x359a4
	beq.n 0x359ba	@ 000359a4 09d0
.org 0x359a6
	mov r0, sp	@ 000359a6 6846
.org 0x359a8
	ldrb r0, [r0, #0]	@ 000359a8 0078
.org 0x359aa
	cmp r0, #1	@ 000359aa 0128
.org 0x359ac
	bne.n 0x359ba	@ 000359ac 05d1
.org 0x359ae
	movs r2, #163	@ 000359ae a322
.org 0x359b0
	lsls r2, r2, #1	@ 000359b0 5200
.org 0x359b2
	adds r1, r4, r2	@ 000359b2 a118
.org 0x359b4
	ldrb r0, [r1, #0]	@ 000359b4 0878
.org 0x359b6
	adds r0, #1	@ 000359b6 0130
.org 0x359b8
	strb r0, [r1, #0]	@ 000359b8 0870
.org 0x359ba
	ldr r1, [pc, #44]	@ 000359ba 0b49
.org 0x359bc
	adds r0, r4, #0	@ 000359bc 201c
.org 0x359be
	bl 0x3a3b0	@ 000359be 04f0f7fc
.org 0x359c2
	adds r0, r4, #0	@ 000359c2 201c
.org 0x359c4
	adds r0, #115	@ 000359c4 7330
.org 0x359c6
	ldrb r0, [r0, #0]	@ 000359c6 0078
.org 0x359c8
	cmp r0, #4	@ 000359c8 0428
.org 0x359ca
	bne.n 0x359fe	@ 000359ca 18d1
.org 0x359cc
	adds r1, r4, #0	@ 000359cc 211c
.org 0x359ce
	adds r1, #180	@ 000359ce b431
.org 0x359d0
	movs r0, #163	@ 000359d0 a320
.org 0x359d2
	lsls r0, r0, #1	@ 000359d2 4000
.org 0x359d4
	adds r2, r4, r0	@ 000359d4 2218
.org 0x359d6
	ldrb r0, [r2, #0]	@ 000359d6 1078
.org 0x359d8
	cmp r0, #0	@ 000359d8 0028
.org 0x359da
	beq.n 0x359ec	@ 000359da 07d0
.org 0x359dc
	ldrb r0, [r1, #17]	@ 000359dc 487c
.org 0x359de
	cmp r0, #11	@ 000359de 0b28
.org 0x359e0
	bne.n 0x359ec	@ 000359e0 04d1
.org 0x359e2
	movs r0, #0	@ 000359e2 0020
.org 0x359e4
	strb r0, [r2, #0]	@ 000359e4 1070
.org 0x359e6
	b.n 0x359fe	@ 000359e6 0ae0
.org 0x359e8
	.byte 0x01,0x1a,0x00,0x00	@ 000359e8 data
.org 0x359ec
	ldr r1, [pc, #36]	@ 000359ec 0949
.org 0x359ee
	adds r2, r4, r1	@ 000359ee 6218
.org 0x359f0
	movs r1, #0	@ 000359f0 0021
.org 0x359f2
	movs r0, #1	@ 000359f2 0120
.org 0x359f4
	strb r0, [r2, #0]	@ 000359f4 1070
.org 0x359f6
	movs r2, #129	@ 000359f6 8122
.org 0x359f8
	lsls r2, r2, #1	@ 000359f8 5200
.org 0x359fa
	adds r0, r4, r2	@ 000359fa a018
.org 0x359fc
	strb r1, [r0, #0]	@ 000359fc 0170
.org 0x359fe
	ldrb r1, [r4, #10]	@ 000359fe a17a
.org 0x35a00
	movs r0, #16	@ 00035a00 1020
.org 0x35a02
	ands r0, r1	@ 00035a02 0840
.org 0x35a04
	cmp r0, #0	@ 00035a04 0028
.org 0x35a06
	beq.n 0x35a18	@ 00035a06 07d0
.org 0x35a08
	adds r0, r4, #0	@ 00035a08 201c
.org 0x35a0a
	bl 0x38790	@ 00035a0a 02f0c1fe
.org 0x35a0e
	lsls r0, r0, #16	@ 00035a0e 0004
.org 0x35a10
	asrs r0, r0, #16	@ 00035a10 0014
.org 0x35a12
	b.n 0x35a24	@ 00035a12 07e0
.org 0x35a14
	.byte 0x01,0x01,0x00,0x00	@ 00035a14 data
.org 0x35a18
	adds r0, r4, #0	@ 00035a18 201c
.org 0x35a1a
	bl 0x38790	@ 00035a1a 02f0b9fe
.org 0x35a1e
	lsls r0, r0, #16	@ 00035a1e 0004
