@ FUN_080dcc28  entry 0x080dcc28  size 236
.thumb
.org 0xdcc28
FUN_080dcc28:
	push {r4, r5, r6, lr}	@ 000dcc28 70b5
.org 0xdcc2a
	adds r4, r0, #0	@ 000dcc2a 041c
.org 0xdcc2c
	ldr r0, [r4, #40]	@ 000dcc2c a06a
.org 0xdcc2e
	ldrb r0, [r0, #10]	@ 000dcc2e 807a
.org 0xdcc30
	lsls r0, r0, #24	@ 000dcc30 0006
.org 0xdcc32
	lsrs r3, r0, #28	@ 000dcc32 030f
.org 0xdcc34
	movs r1, #1	@ 000dcc34 0121
.org 0xdcc36
	ands r3, r1	@ 000dcc36 0b40
.org 0xdcc38
	lsrs r5, r0, #29	@ 000dcc38 450f
.org 0xdcc3a
	ands r5, r1	@ 000dcc3a 0d40
.org 0xdcc3c
	ldrb r0, [r4, #14]	@ 000dcc3c a07b
.org 0xdcc3e
	cmp r0, #0	@ 000dcc3e 0028
.org 0xdcc40
	beq.n 0xdcc48	@ 000dcc40 02d0
.org 0xdcc42
	cmp r0, #1	@ 000dcc42 0128
.org 0xdcc44
	beq.n 0xdccbc	@ 000dcc44 3ad0
.org 0xdcc46
	b.n 0xdcd0e	@ 000dcc46 62e0
.org 0xdcc48
	ldrb r1, [r4, #10]	@ 000dcc48 a17a
.org 0xdcc4a
	movs r0, #1	@ 000dcc4a 0120
.org 0xdcc4c
	movs r6, #0	@ 000dcc4c 0026
.org 0xdcc4e
	adds r2, r0, #0	@ 000dcc4e 021c
.org 0xdcc50
	orrs r2, r1	@ 000dcc50 0a43
.org 0xdcc52
	strb r2, [r4, #10]	@ 000dcc52 a272
.org 0xdcc54
	adds r1, r3, #0	@ 000dcc54 191c
.org 0xdcc56
	cmp r1, #0	@ 000dcc56 0029
.org 0xdcc58
	beq.n 0xdcc60	@ 000dcc58 02d0
.org 0xdcc5a
	movs r0, #16	@ 000dcc5a 1020
.org 0xdcc5c
	orrs r2, r0	@ 000dcc5c 0243
.org 0xdcc5e
	b.n 0xdcc64	@ 000dcc5e 01e0
.org 0xdcc60
	movs r0, #239	@ 000dcc60 ef20
.org 0xdcc62
	ands r2, r0	@ 000dcc62 0240
.org 0xdcc64
	strb r2, [r4, #10]	@ 000dcc64 a272
.org 0xdcc66
	adds r0, r4, #0	@ 000dcc66 201c
.org 0xdcc68
	adds r0, #76	@ 000dcc68 4c30
.org 0xdcc6a
	strb r1, [r0, #0]	@ 000dcc6a 0170
.org 0xdcc6c
	adds r2, r4, #0	@ 000dcc6c 221c
.org 0xdcc6e
	adds r2, #74	@ 000dcc6e 4a32
.org 0xdcc70
	lsls r1, r1, #4	@ 000dcc70 0901
.org 0xdcc72
	ldrb r3, [r2, #0]	@ 000dcc72 1378
.org 0xdcc74
	movs r0, #17	@ 000dcc74 1120
.org 0xdcc76
	negs r0, r0	@ 000dcc76 4042
.org 0xdcc78
	ands r0, r3	@ 000dcc78 1840
.org 0xdcc7a
	orrs r0, r1	@ 000dcc7a 0843
.org 0xdcc7c
	strb r0, [r2, #0]	@ 000dcc7c 1070
.org 0xdcc7e
	adds r3, r5, #0	@ 000dcc7e 2b1c
.org 0xdcc80
	adds r5, r2, #0	@ 000dcc80 151c
.org 0xdcc82
	cmp r3, #0	@ 000dcc82 002b
.org 0xdcc84
	beq.n 0xdcc8e	@ 000dcc84 03d0
.org 0xdcc86
	ldrb r0, [r4, #10]	@ 000dcc86 a07a
.org 0xdcc88
	movs r1, #32	@ 000dcc88 2021
.org 0xdcc8a
	orrs r0, r1	@ 000dcc8a 0843
.org 0xdcc8c
	b.n 0xdcc94	@ 000dcc8c 02e0
.org 0xdcc8e
	ldrb r1, [r4, #10]	@ 000dcc8e a17a
.org 0xdcc90
	movs r0, #223	@ 000dcc90 df20
.org 0xdcc92
	ands r0, r1	@ 000dcc92 0840
.org 0xdcc94
	strb r0, [r4, #10]	@ 000dcc94 a072
.org 0xdcc96
	adds r1, r3, #0	@ 000dcc96 191c
.org 0xdcc98
	adds r2, r4, #0	@ 000dcc98 221c
.org 0xdcc9a
	adds r2, #77	@ 000dcc9a 4d32
.org 0xdcc9c
	strb r1, [r2, #0]	@ 000dcc9c 1170
.org 0xdcc9e
	lsls r1, r1, #5	@ 000dcc9e 4901
.org 0xdcca0
	ldrb r2, [r5, #0]	@ 000dcca0 2a78
.org 0xdcca2
	movs r0, #33	@ 000dcca2 2120
.org 0xdcca4
	negs r0, r0	@ 000dcca4 4042
.org 0xdcca6
	ands r0, r2	@ 000dcca6 1040
.org 0xdcca8
	orrs r0, r1	@ 000dcca8 0843
.org 0xdccaa
	strb r0, [r5, #0]	@ 000dccaa 2870
.org 0xdccac
	ldr r0, [r4, #116]	@ 000dccac 606f
.org 0xdccae
	ldrh r1, [r0, #0]	@ 000dccae 0188
.org 0xdccb0
	adds r0, r4, #0	@ 000dccb0 201c
.org 0xdccb2
	bl 0x1cf00	@ 000dccb2 40f725f9
.org 0xdccb6
	ldrb r0, [r4, #14]	@ 000dccb6 a07b
.org 0xdccb8
	adds r0, #1	@ 000dccb8 0130
.org 0xdccba
	strb r0, [r4, #14]	@ 000dccba a073
.org 0xdccbc
	ldr r1, [r4, #84]	@ 000dccbc 616d
.org 0xdccbe
	ldr r0, [r4, #92]	@ 000dccbe e06d
.org 0xdccc0
	adds r3, r1, r0	@ 000dccc0 0b18
.org 0xdccc2
	str r3, [r4, #84]	@ 000dccc2 6365
.org 0xdccc4
	ldr r1, [r4, #88]	@ 000dccc4 a16d
.org 0xdccc6
	ldr r0, [r4, #96]	@ 000dccc6 206e
.org 0xdccc8
	adds r2, r1, r0	@ 000dccc8 0a18
.org 0xdccca
	str r2, [r4, #88]	@ 000dccca a265
.org 0xdcccc
	ldr r1, [r4, #104]	@ 000dcccc a16e
.org 0xdccce
	adds r0, r0, r1	@ 000dccce 4018
.org 0xdccd0
	str r0, [r4, #96]	@ 000dccd0 2066
.org 0xdccd2
	ldrb r0, [r4, #18]	@ 000dccd2 a07c
.org 0xdccd4
	subs r0, #1	@ 000dccd4 0138
.org 0xdccd6
	strb r0, [r4, #18]	@ 000dccd6 a074
.org 0xdccd8
	lsls r0, r0, #24	@ 000dccd8 0006
.org 0xdccda
	cmp r0, #0	@ 000dccda 0028
.org 0xdccdc
	beq.n 0xdccec	@ 000dccdc 06d0
.org 0xdccde
	adds r0, r3, #0	@ 000dccde 181c
.org 0xdcce0
	adds r1, r2, #0	@ 000dcce0 111c
.org 0xdcce2
	bl 0x7c7c	@ 000dcce2 2af7cbff
.org 0xdcce6
	lsls r0, r0, #16	@ 000dcce6 0004
.org 0xdcce8
	cmp r0, #0	@ 000dcce8 0028
.org 0xdccea
	beq.n 0xdcd08	@ 000dccea 0dd0
.org 0xdccec
	adds r1, r4, #0	@ 000dccec 211c
.org 0xdccee
	adds r1, #84	@ 000dccee 5431
.org 0xdccf0
	movs r0, #1	@ 000dccf0 0120
.org 0xdccf2
	bl 0xd0c88	@ 000dccf2 f3f7c9ff
.org 0xdccf6
	ldr r1, [pc, #28]	@ 000dccf6 0749
.org 0xdccf8
	ldrb r0, [r4, #9]	@ 000dccf8 607a
.org 0xdccfa
	lsls r0, r0, #2	@ 000dccfa 8000
.org 0xdccfc
	adds r0, r0, r1	@ 000dccfc 4018
.org 0xdccfe
	movs r1, #2	@ 000dccfe 0221
.org 0xdcd00
	str r1, [r4, #12]	@ 000dcd00 e160
.org 0xdcd02
	ldr r0, [r0, #0]	@ 000dcd02 0068
.org 0xdcd04
	ldr r0, [r0, #8]	@ 000dcd04 8068
.org 0xdcd06
	str r0, [r4, #20]	@ 000dcd06 6061
.org 0xdcd08
	adds r0, r4, #0	@ 000dcd08 201c
.org 0xdcd0a
	bl 0x1cff0	@ 000dcd0a 40f771f9
.org 0xdcd0e
	pop {r4, r5, r6}	@ 000dcd0e 70bc
.org 0xdcd10
	pop {r0}	@ 000dcd10 01bc
.org 0xdcd12
	bx r0	@ 000dcd12 0047
