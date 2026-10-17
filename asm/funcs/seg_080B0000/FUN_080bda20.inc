@ FUN_080bda20  entry 0x080bda20  size 268
.thumb
.org 0xbda20
FUN_080bda20:
	push {r4, r5, r6, r7, lr}	@ 000bda20 f0b5
.org 0xbda22
	mov r7, r9	@ 000bda22 4f46
.org 0xbda24
	mov r6, r8	@ 000bda24 4646
.org 0xbda26
	push {r6, r7}	@ 000bda26 c0b4
.org 0xbda28
	sub sp, #36	@ 000bda28 89b0
.org 0xbda2a
	adds r6, r0, #0	@ 000bda2a 061c
.org 0xbda2c
	mov r0, sp	@ 000bda2c 6846
.org 0xbda2e
	movs r1, #0	@ 000bda2e 0021
.org 0xbda30
	movs r2, #16	@ 000bda30 1022
.org 0xbda32
	bl 0x1292b8	@ 000bda32 6bf041fc
.org 0xbda36
	ldr r0, [pc, #244]	@ 000bda36 3d48
.org 0xbda38
	str r0, [sp, #0]	@ 000bda38 0090
.org 0xbda3a
	add r4, sp, #16	@ 000bda3a 04ac
.org 0xbda3c
	adds r0, r4, #0	@ 000bda3c 201c
.org 0xbda3e
	movs r1, #0	@ 000bda3e 0021
.org 0xbda40
	movs r2, #16	@ 000bda40 1022
.org 0xbda42
	bl 0x1292b8	@ 000bda42 6bf039fc
.org 0xbda46
	movs r0, #128	@ 000bda46 8020
.org 0xbda48
	lsls r0, r0, #2	@ 000bda48 8000
.org 0xbda4a
	str r0, [sp, #16]	@ 000bda4a 0490
.org 0xbda4c
	add r0, sp, #32	@ 000bda4c 08a8
.org 0xbda4e
	mov r8, r0	@ 000bda4e 8046
.org 0xbda50
	movs r1, #0	@ 000bda50 0021
.org 0xbda52
	movs r2, #4	@ 000bda52 0422
.org 0xbda54
	bl 0x1292b8	@ 000bda54 6bf030fc
.org 0xbda58
	ldrb r5, [r6, #16]	@ 000bda58 357c
.org 0xbda5a
	ldrb r0, [r6, #17]	@ 000bda5a 707c
.org 0xbda5c
	adds r2, r0, #0	@ 000bda5c 021c
.org 0xbda5e
	ldr r1, [pc, #208]	@ 000bda5e 3449
.org 0xbda60
	ldrb r0, [r6, #9]	@ 000bda60 707a
.org 0xbda62
	lsls r0, r0, #2	@ 000bda62 8000
.org 0xbda64
	adds r0, r0, r1	@ 000bda64 4018
.org 0xbda66
	movs r1, #1	@ 000bda66 0121
.org 0xbda68
	str r1, [r6, #12]	@ 000bda68 f160
.org 0xbda6a
	ldr r0, [r0, #0]	@ 000bda6a 0068
.org 0xbda6c
	ldr r0, [r0, #4]	@ 000bda6c 4068
.org 0xbda6e
	str r0, [r6, #20]	@ 000bda6e 7061
.org 0xbda70
	ldrb r1, [r6, #10]	@ 000bda70 b17a
.org 0xbda72
	movs r0, #1	@ 000bda72 0120
.org 0xbda74
	movs r3, #0	@ 000bda74 0023
.org 0xbda76
	mov r9, r3	@ 000bda76 9946
.org 0xbda78
	orrs r0, r1	@ 000bda78 0843
.org 0xbda7a
	movs r1, #2	@ 000bda7a 0221
.org 0xbda7c
	orrs r0, r1	@ 000bda7c 0843
.org 0xbda7e
	strb r0, [r6, #10]	@ 000bda7e b072
.org 0xbda80
	lsls r7, r5, #2	@ 000bda80 af00
.org 0xbda82
	adds r4, r4, r7	@ 000bda82 e419
.org 0xbda84
	ldr r1, [pc, #172]	@ 000bda84 2b49
.org 0xbda86
	adds r0, r2, #0	@ 000bda86 101c
.org 0xbda88
	adds r0, #64	@ 000bda88 4030
.org 0xbda8a
	lsls r0, r0, #24	@ 000bda8a 0006
.org 0xbda8c
	lsrs r0, r0, #23	@ 000bda8c c00d
.org 0xbda8e
	adds r0, r0, r1	@ 000bda8e 4018
.org 0xbda90
	movs r3, #0	@ 000bda90 0023
.org 0xbda92
	ldrsh r0, [r0, r3]	@ 000bda92 c05e
.org 0xbda94
	ldr r4, [r4, #0]	@ 000bda94 2468
.org 0xbda96
	muls r0, r4	@ 000bda96 6043
.org 0xbda98
	cmp r0, #0	@ 000bda98 0028
.org 0xbda9a
	bge.n 0xbda9e	@ 000bda9a 00da
.org 0xbda9c
	adds r0, #255	@ 000bda9c ff30
.org 0xbda9e
	asrs r0, r0, #8	@ 000bda9e 0012
.org 0xbdaa0
	str r0, [r6, #92]	@ 000bdaa0 f065
.org 0xbdaa2
	lsls r0, r2, #1	@ 000bdaa2 5000
.org 0xbdaa4
	adds r0, r0, r1	@ 000bdaa4 4018
.org 0xbdaa6
	movs r1, #0	@ 000bdaa6 0021
.org 0xbdaa8
	ldrsh r0, [r0, r1]	@ 000bdaa8 405e
.org 0xbdaaa
	muls r0, r4	@ 000bdaaa 6043
.org 0xbdaac
	cmp r0, #0	@ 000bdaac 0028
.org 0xbdaae
	bge.n 0xbdab2	@ 000bdaae 00da
.org 0xbdab0
	adds r0, #255	@ 000bdab0 ff30
.org 0xbdab2
	asrs r0, r0, #8	@ 000bdab2 0012
.org 0xbdab4
	str r0, [r6, #96]	@ 000bdab4 3066
.org 0xbdab6
	adds r0, r6, #0	@ 000bdab6 301c
.org 0xbdab8
	bl 0x1cc9c	@ 000bdab8 5ff7f0f8
.org 0xbdabc
	movs r3, #0	@ 000bdabc 0023
.org 0xbdabe
	mov r9, r3	@ 000bdabe 9946
.org 0xbdac0
	ldrb r1, [r6, #10]	@ 000bdac0 b17a
.org 0xbdac2
	movs r0, #239	@ 000bdac2 ef20
.org 0xbdac4
	ands r0, r1	@ 000bdac4 0840
.org 0xbdac6
	strb r0, [r6, #10]	@ 000bdac6 b072
.org 0xbdac8
	adds r0, r6, #0	@ 000bdac8 301c
.org 0xbdaca
	adds r0, #76	@ 000bdaca 4c30
.org 0xbdacc
	mov r1, r9	@ 000bdacc 4946
.org 0xbdace
	strb r1, [r0, #0]	@ 000bdace 0170
.org 0xbdad0
	adds r2, r6, #0	@ 000bdad0 321c
.org 0xbdad2
	adds r2, #74	@ 000bdad2 4a32
.org 0xbdad4
	ldrb r1, [r2, #0]	@ 000bdad4 1178
.org 0xbdad6
	movs r0, #17	@ 000bdad6 1120
.org 0xbdad8
	negs r0, r0	@ 000bdad8 4042
.org 0xbdada
	ands r0, r1	@ 000bdada 0840
.org 0xbdadc
	strb r0, [r2, #0]	@ 000bdadc 1070
.org 0xbdade
	mov r3, sp	@ 000bdade 6b46
.org 0xbdae0
	adds r0, r3, r7	@ 000bdae0 d819
.org 0xbdae2
	ldrh r1, [r0, #0]	@ 000bdae2 0188
.org 0xbdae4
	adds r0, r6, #0	@ 000bdae4 301c
.org 0xbdae6
	bl 0x1cf00	@ 000bdae6 5ff70bfa
.org 0xbdaea
	ldrb r0, [r6, #10]	@ 000bdaea b07a
.org 0xbdaec
	movs r1, #4	@ 000bdaec 0421
.org 0xbdaee
	orrs r0, r1	@ 000bdaee 0843
.org 0xbdaf0
	strb r0, [r6, #10]	@ 000bdaf0 b072
.org 0xbdaf2
	adds r4, r6, #0	@ 000bdaf2 341c
.org 0xbdaf4
	adds r4, #116	@ 000bdaf4 7434
.org 0xbdaf6
	mov r1, r8	@ 000bdaf6 4146
.org 0xbdaf8
	adds r0, r1, r5	@ 000bdaf8 4819
.org 0xbdafa
	ldrb r0, [r0, #0]	@ 000bdafa 0078
.org 0xbdafc
	lsls r1, r0, #1	@ 000bdafc 4100
.org 0xbdafe
	adds r1, r1, r0	@ 000bdafe 0918
.org 0xbdb00
	lsls r1, r1, #3	@ 000bdb00 c900
.org 0xbdb02
	ldr r0, [pc, #52]	@ 000bdb02 0d48
.org 0xbdb04
	adds r1, r1, r0	@ 000bdb04 0918
.org 0xbdb06
	adds r2, r6, #0	@ 000bdb06 321c
.org 0xbdb08
	adds r2, #84	@ 000bdb08 5432
.org 0xbdb0a
	adds r0, r4, #0	@ 000bdb0a 201c
.org 0xbdb0c
	movs r3, #64	@ 000bdb0c 4023
.org 0xbdb0e
	bl 0x5760	@ 000bdb0e 47f727fe
.org 0xbdb12
	str r6, [r4, #44]	@ 000bdb12 e662
.org 0xbdb14
	mov r3, r9	@ 000bdb14 4b46
.org 0xbdb16
	str r3, [r4, #36]	@ 000bdb16 6362
.org 0xbdb18
	adds r0, r6, #0	@ 000bdb18 301c
.org 0xbdb1a
	bl 0xbde3c	@ 000bdb1a 00f08ff9
.org 0xbdb1e
	add sp, #36	@ 000bdb1e 09b0
.org 0xbdb20
	pop {r3, r4}	@ 000bdb20 18bc
.org 0xbdb22
	mov r8, r3	@ 000bdb22 9846
.org 0xbdb24
	mov r9, r4	@ 000bdb24 a146
.org 0xbdb26
	pop {r4, r5, r6, r7}	@ 000bdb26 f0bc
.org 0xbdb28
	pop {r0}	@ 000bdb28 01bc
.org 0xbdb2a
	bx r0	@ 000bdb2a 0047
