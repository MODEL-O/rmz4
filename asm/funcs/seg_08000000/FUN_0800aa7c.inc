@ FUN_0800aa7c  entry 0x0800aa7c  size 496
.thumb
.org 0xaa7c
FUN_0800aa7c:
	push {r4, r5, r6, r7, lr}	@ 0000aa7c f0b5
.org 0xaa7e
	mov r7, r8	@ 0000aa7e 4746
.org 0xaa80
	push {r7}	@ 0000aa80 80b4
.org 0xaa82
	sub sp, #8	@ 0000aa82 82b0
.org 0xaa84
	adds r7, r0, #0	@ 0000aa84 071c
.org 0xaa86
	ldrb r6, [r7, #14]	@ 0000aa86 be7b
.org 0xaa88
	cmp r6, #0	@ 0000aa88 002e
.org 0xaa8a
	bne.n 0xab18	@ 0000aa8a 45d1
.org 0xaa8c
	ldr r1, [r7, #92]	@ 0000aa8c f96d
.org 0xaa8e
	lsls r1, r1, #16	@ 0000aa8e 0904
.org 0xaa90
	lsrs r1, r1, #20	@ 0000aa90 090d
.org 0xaa92
	lsls r5, r1, #1	@ 0000aa92 4d00
.org 0xaa94
	ldr r3, [pc, #220]	@ 0000aa94 374b
.org 0xaa96
	adds r5, r5, r3	@ 0000aa96 ed18
.org 0xaa98
	ldr r0, [r7, #100]	@ 0000aa98 786e
.org 0xaa9a
	ldr r4, [pc, #220]	@ 0000aa9a 374c
.org 0xaa9c
	adds r2, r4, #0	@ 0000aa9c 221c
.org 0xaa9e
	orrs r0, r2	@ 0000aa9e 1043
.org 0xaaa0
	strh r0, [r5, #0]	@ 0000aaa0 2880
.org 0xaaa2
	lsls r1, r1, #2	@ 0000aaa2 8900
.org 0xaaa4
	adds r3, #8	@ 0000aaa4 0833
.org 0xaaa6
	adds r1, r1, r3	@ 0000aaa6 c918
.org 0xaaa8
	str r6, [r1, #0]	@ 0000aaa8 0e60
.org 0xaaaa
	adds r0, r7, #0	@ 0000aaaa 381c
.org 0xaaac
	adds r0, #118	@ 0000aaac 7630
.org 0xaaae
	strh r6, [r0, #0]	@ 0000aaae 0680
.org 0xaab0
	subs r0, #2	@ 0000aab0 0238
.org 0xaab2
	strh r6, [r0, #0]	@ 0000aab2 0680
.org 0xaab4
	subs r0, #2	@ 0000aab4 0238
.org 0xaab6
	strh r6, [r0, #0]	@ 0000aab6 0680
.org 0xaab8
	subs r0, #2	@ 0000aab8 0238
.org 0xaaba
	strh r6, [r0, #0]	@ 0000aaba 0680
.org 0xaabc
	subs r0, #2	@ 0000aabc 0238
.org 0xaabe
	strh r6, [r0, #0]	@ 0000aabe 0680
.org 0xaac0
	subs r0, #2	@ 0000aac0 0238
.org 0xaac2
	strh r6, [r0, #0]	@ 0000aac2 0680
.org 0xaac4
	subs r0, #2	@ 0000aac4 0238
.org 0xaac6
	strh r6, [r0, #0]	@ 0000aac6 0680
.org 0xaac8
	subs r0, #2	@ 0000aac8 0238
.org 0xaaca
	strh r6, [r0, #0]	@ 0000aaca 0680
.org 0xaacc
	adds r0, #16	@ 0000aacc 1030
.org 0xaace
	strh r6, [r0, #0]	@ 0000aace 0680
.org 0xaad0
	str r6, [r7, #124]	@ 0000aad0 fe67
.org 0xaad2
	ldr r0, [pc, #168]	@ 0000aad2 2a48
.org 0xaad4
	ldr r0, [r0, #0]	@ 0000aad4 0068
.org 0xaad6
	ldr r1, [pc, #168]	@ 0000aad6 2a49
.org 0xaad8
	adds r0, r0, r1	@ 0000aad8 4018
.org 0xaada
	ldrh r2, [r5, #0]	@ 0000aada 2a88
.org 0xaadc
	movs r4, #248	@ 0000aadc f824
.org 0xaade
	lsls r4, r4, #5	@ 0000aade 6401
.org 0xaae0
	adds r1, r4, #0	@ 0000aae0 211c
.org 0xaae2
	ands r1, r2	@ 0000aae2 1140
.org 0xaae4
	lsls r1, r1, #3	@ 0000aae4 c900
.org 0xaae6
	movs r2, #192	@ 0000aae6 c022
.org 0xaae8
	lsls r2, r2, #19	@ 0000aae8 d204
.org 0xaaea
	adds r1, r1, r2	@ 0000aaea 8918
.org 0xaaec
	movs r2, #128	@ 0000aaec 8022
.org 0xaaee
	lsls r2, r2, #2	@ 0000aaee 9200
.org 0xaaf0
	mov r8, r2	@ 0000aaf0 9046
.org 0xaaf2
	bl 0x128be0	@ 0000aaf2 1ef175f8
.org 0xaaf6
	ldr r0, [pc, #140]	@ 0000aaf6 2348
.org 0xaaf8
	ldr r0, [r0, #0]	@ 0000aaf8 0068
.org 0xaafa
	ldr r1, [pc, #140]	@ 0000aafa 2349
.org 0xaafc
	adds r0, r0, r1	@ 0000aafc 4018
.org 0xaafe
	ldrh r1, [r5, #0]	@ 0000aafe 2988
.org 0xab00
	ands r4, r1	@ 0000ab00 0c40
.org 0xab02
	lsls r4, r4, #3	@ 0000ab02 e400
.org 0xab04
	ldr r2, [pc, #132]	@ 0000ab04 214a
.org 0xab06
	adds r4, r4, r2	@ 0000ab06 a418
.org 0xab08
	adds r1, r4, #0	@ 0000ab08 211c
.org 0xab0a
	mov r2, r8	@ 0000ab0a 4246
.org 0xab0c
	bl 0x128be0	@ 0000ab0c 1ef168f8
.org 0xab10
	strh r6, [r7, #16]	@ 0000ab10 3e82
.org 0xab12
	ldrb r0, [r7, #14]	@ 0000ab12 b87b
.org 0xab14
	adds r0, #1	@ 0000ab14 0130
.org 0xab16
	strb r0, [r7, #14]	@ 0000ab16 b873
.org 0xab18
	adds r0, r7, #0	@ 0000ab18 381c
.org 0xab1a
	adds r0, #120	@ 0000ab1a 7830
.org 0xab1c
	ldrh r5, [r0, #0]	@ 0000ab1c 0588
.org 0xab1e
	adds r4, r0, #0	@ 0000ab1e 041c
.org 0xab20
	cmp r5, #0	@ 0000ab20 002d
.org 0xab22
	bne.n 0xabf0	@ 0000ab22 65d1
.org 0xab24
	ldr r1, [r7, #52]	@ 0000ab24 796b
.org 0xab26
	ldr r0, [pc, #104]	@ 0000ab26 1a48
.org 0xab28
	cmp r1, r0	@ 0000ab28 8142
.org 0xab2a
	bgt.n 0xabea	@ 0000ab2a 5edc
.org 0xab2c
	ldrh r6, [r7, #16]	@ 0000ab2c 3e8a
.org 0xab2e
	adds r3, r6, #1	@ 0000ab2e 731c
.org 0xab30
	strh r3, [r7, #16]	@ 0000ab30 3b82
.org 0xab32
	movs r0, #32	@ 0000ab32 2020
.org 0xab34
	ands r0, r3	@ 0000ab34 1840
.org 0xab36
	cmp r0, #0	@ 0000ab36 0028
.org 0xab38
	beq.n 0xabea	@ 0000ab38 57d0
.org 0xab3a
	ldr r2, [pc, #88]	@ 0000ab3a 164a
.org 0xab3c
	ldr r1, [pc, #88]	@ 0000ab3c 1649
.org 0xab3e
	adds r0, r2, r1	@ 0000ab3e 5018
.org 0xab40
	ldr r0, [r0, #0]	@ 0000ab40 0068
.org 0xab42
	ldr r1, [r0, #88]	@ 0000ab42 816d
.org 0xab44
	ldr r0, [pc, #84]	@ 0000ab44 1548
.org 0xab46
	cmp r1, r0	@ 0000ab46 8142
.org 0xab48
	bgt.n 0xabac	@ 0000ab48 30dc
.org 0xab4a
	lsls r0, r3, #16	@ 0000ab4a 1804
.org 0xab4c
	lsrs r0, r0, #16	@ 0000ab4c 000c
.org 0xab4e
	cmp r0, #32	@ 0000ab4e 2028
.org 0xab50
	bhi.n 0xabd0	@ 0000ab50 3ed8
.org 0xab52
	ldr r0, [pc, #76]	@ 0000ab52 1348
.org 0xab54
	adds r2, r2, r0	@ 0000ab54 1218
.org 0xab56
	ldr r1, [r2, #0]	@ 0000ab56 1168
.org 0xab58
	ldr r0, [pc, #72]	@ 0000ab58 1248
.org 0xab5a
	muls r0, r1	@ 0000ab5a 4843
.org 0xab5c
	ldr r1, [pc, #72]	@ 0000ab5c 1249
.org 0xab5e
	adds r0, r0, r1	@ 0000ab5e 4018
.org 0xab60
	str r0, [r2, #0]	@ 0000ab60 1060
.org 0xab62
	lsrs r0, r0, #16	@ 0000ab62 000c
.org 0xab64
	movs r1, #1	@ 0000ab64 0121
.org 0xab66
	ands r0, r1	@ 0000ab66 0840
.org 0xab68
	cmp r0, #0	@ 0000ab68 0028
.org 0xab6a
	bne.n 0xabd0	@ 0000ab6a 31d1
.org 0xab6c
	adds r0, r6, #0	@ 0000ab6c 301c
.org 0xab6e
	adds r0, #33	@ 0000ab6e 2130
.org 0xab70
	b.n 0xabe8	@ 0000ab70 3ae0
.org 0xab72
	.byte 0x00	@ 0000ab72 data
.org 0xab73
	.byte 0x00	@ 0000ab73 data
.org 0xab74
	.byte 0x04,0x0a,0x00,0x02	@ 0000ab74 data
.org 0xab78
	.byte 0x47,0x40,0x00,0x00	@ 0000ab78 data
.org 0xab7c
	.byte 0xa8,0xc0,0xb2,0x08	@ 0000ab7c data
.org 0xab80
	.byte 0xb0,0xc0,0xb2,0x08	@ 0000ab80 data
.org 0xab84
	.byte 0xac,0xc0,0xb2,0x08	@ 0000ab84 data
.org 0xab88
	.byte 0xb4,0xc0,0xb2,0x08	@ 0000ab88 data
.org 0xab8c
	.byte 0x00,0x08,0x00,0x06	@ 0000ab8c data
.org 0xab90
	.byte 0xcf,0x11,0x00,0x00	@ 0000ab90 data
.org 0xab94
	.byte 0x10,0xf6,0x02,0x02	@ 0000ab94 data
.org 0xab98
	.byte 0xa8,0x63,0x00,0x00	@ 0000ab98 data
.org 0xab9c
	.byte 0xff,0xdf,0x01,0x00	@ 0000ab9c data
.org 0xaba0
	.byte 0x6c,0x62,0x00,0x00	@ 0000aba0 data
.org 0xaba4
	.byte 0x6d,0x4e,0xc6,0x41	@ 0000aba4 data
.org 0xaba8
	.byte 0x39,0x30,0x00,0x00	@ 0000aba8 data
.org 0xabac
	lsls r1, r3, #16	@ 0000abac 1904
.org 0xabae
	movs r0, #128	@ 0000abae 8020
.org 0xabb0
	lsls r0, r0, #18	@ 0000abb0 8004
.org 0xabb2
	cmp r1, r0	@ 0000abb2 8142
.org 0xabb4
	bls.n 0xabe4	@ 0000abb4 16d9
.org 0xabb6
	ldr r0, [pc, #32]	@ 0000abb6 0848
.org 0xabb8
	adds r2, r2, r0	@ 0000abb8 1218
.org 0xabba
	ldr r1, [r2, #0]	@ 0000abba 1168
.org 0xabbc
	ldr r0, [pc, #28]	@ 0000abbc 0748
.org 0xabbe
	muls r0, r1	@ 0000abbe 4843
.org 0xabc0
	ldr r1, [pc, #28]	@ 0000abc0 0749
.org 0xabc2
	adds r0, r0, r1	@ 0000abc2 4018
.org 0xabc4
	str r0, [r2, #0]	@ 0000abc4 1060
.org 0xabc6
	lsrs r0, r0, #16	@ 0000abc6 000c
.org 0xabc8
	movs r1, #3	@ 0000abc8 0321
.org 0xabca
	ands r0, r1	@ 0000abca 0840
.org 0xabcc
	cmp r0, #0	@ 0000abcc 0028
.org 0xabce
	beq.n 0xabe4	@ 0000abce 09d0
.org 0xabd0
	movs r0, #98	@ 0000abd0 6220
.org 0xabd2
	strh r0, [r4, #0]	@ 0000abd2 2080
.org 0xabd4
	strh r5, [r7, #16]	@ 0000abd4 3d82
.org 0xabd6
	b.n 0xabea	@ 0000abd6 08e0
.org 0xabd8
	.byte 0x6c,0x62,0x00,0x00	@ 0000abd8 data
.org 0xabdc
	.byte 0x6d,0x4e,0xc6,0x41	@ 0000abdc data
.org 0xabe0
	.byte 0x39,0x30,0x00,0x00	@ 0000abe0 data
.org 0xabe4
	ldrh r0, [r7, #16]	@ 0000abe4 388a
.org 0xabe6
	adds r0, #32	@ 0000abe6 2030
.org 0xabe8
	strh r0, [r7, #16]	@ 0000abe8 3882
.org 0xabea
	ldrh r0, [r4, #0]	@ 0000abea 2088
.org 0xabec
	cmp r0, #0	@ 0000abec 0028
.org 0xabee
	beq.n 0xac52	@ 0000abee 30d0
.org 0xabf0
	ldrh r0, [r4, #0]	@ 0000abf0 2088
.org 0xabf2
	cmp r0, #98	@ 0000abf2 6228
.org 0xabf4
	bne.n 0xac0e	@ 0000abf4 0bd1
.org 0xabf6
	ldr r0, [r7, #52]	@ 0000abf6 786b
.org 0xabf8
	str r0, [r7, #124]	@ 0000abf8 f867
.org 0xabfa
	lsls r0, r0, #8	@ 0000abfa 0002
.org 0xabfc
	ldr r2, [pc, #40]	@ 0000abfc 0a4a
.org 0xabfe
	adds r0, r0, r2	@ 0000abfe 8018
.org 0xac00
	str r0, [sp, #0]	@ 0000ac00 0090
.org 0xac02
	movs r0, #136	@ 0000ac02 8820
.org 0xac04
	lsls r0, r0, #10	@ 0000ac04 8002
.org 0xac06
	str r0, [sp, #4]	@ 0000ac06 0190
.org 0xac08
	mov r0, sp	@ 0000ac08 6846
.org 0xac0a
	bl 0xda534	@ 0000ac0a cff093fc
.org 0xac0e
	ldrh r0, [r4, #0]	@ 0000ac0e 2088
.org 0xac10
	adds r0, #98	@ 0000ac10 6230
.org 0xac12
	strh r0, [r4, #0]	@ 0000ac12 2080
.org 0xac14
	ldr r0, [r7, #124]	@ 0000ac14 f86f
.org 0xac16
	ldr r2, [r7, #52]	@ 0000ac16 7a6b
.org 0xac18
	subs r1, r0, r2	@ 0000ac18 811a
.org 0xac1a
	cmp r1, #0	@ 0000ac1a 0029
.org 0xac1c
	blt.n 0xac2c	@ 0000ac1c 06db
.org 0xac1e
	movs r0, #192	@ 0000ac1e c020
.org 0xac20
	lsls r0, r0, #2	@ 0000ac20 8000
.org 0xac22
	cmp r1, r0	@ 0000ac22 8142
.org 0xac24
	bgt.n 0xac36	@ 0000ac24 07dc
.org 0xac26
	b.n 0xac3c	@ 0000ac26 09e0
.org 0xac28
	.byte 0x00,0xab,0x01,0x00	@ 0000ac28 data
.org 0xac2c
	subs r1, r2, r0	@ 0000ac2c 111a
.org 0xac2e
	movs r0, #192	@ 0000ac2e c020
.org 0xac30
	lsls r0, r0, #2	@ 0000ac30 8000
.org 0xac32
	cmp r1, r0	@ 0000ac32 8142
.org 0xac34
	ble.n 0xac3c	@ 0000ac34 02dd
.org 0xac36
	ldr r0, [r7, #52]	@ 0000ac36 786b
.org 0xac38
	str r0, [r7, #124]	@ 0000ac38 f867
.org 0xac3a
	adds r2, r0, #0	@ 0000ac3a 021c
.org 0xac3c
	ldrh r1, [r4, #0]	@ 0000ac3c 2188
.org 0xac3e
	ldr r0, [r7, #124]	@ 0000ac3e f86f
.org 0xac40
	subs r0, r0, r2	@ 0000ac40 801a
.org 0xac42
	lsls r0, r0, #4	@ 0000ac42 0001
.org 0xac44
	movs r2, #128	@ 0000ac44 8022
.org 0xac46
	lsls r2, r2, #6	@ 0000ac46 9201
.org 0xac48
	adds r0, r0, r2	@ 0000ac48 8018
.org 0xac4a
	cmp r1, r0	@ 0000ac4a 8142
.org 0xac4c
	ble.n 0xac52	@ 0000ac4c 01dd
.org 0xac4e
	movs r0, #0	@ 0000ac4e 0020
.org 0xac50
	strh r0, [r4, #0]	@ 0000ac50 2080
.org 0xac52
	adds r1, r7, #0	@ 0000ac52 391c
.org 0xac54
	adds r1, #118	@ 0000ac54 7631
.org 0xac56
	ldrh r0, [r1, #0]	@ 0000ac56 0888
.org 0xac58
	adds r0, #32	@ 0000ac58 2030
.org 0xac5a
	strh r0, [r1, #0]	@ 0000ac5a 0880
.org 0xac5c
	subs r1, #2	@ 0000ac5c 0239
.org 0xac5e
	ldrh r0, [r1, #0]	@ 0000ac5e 0888
.org 0xac60
	adds r0, #80	@ 0000ac60 5030
.org 0xac62
	strh r0, [r1, #0]	@ 0000ac62 0880
.org 0xac64
	subs r1, #2	@ 0000ac64 0239
.org 0xac66
	ldrh r0, [r1, #0]	@ 0000ac66 0888
.org 0xac68
	adds r0, #160	@ 0000ac68 a030
.org 0xac6a
	strh r0, [r1, #0]	@ 0000ac6a 0880
