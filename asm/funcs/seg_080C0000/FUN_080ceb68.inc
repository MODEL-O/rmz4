@ FUN_080ceb68  entry 0x080ceb68  size 146
.thumb
.org 0xceb68
FUN_080ceb68:
	push {r4, r5, lr}	@ 000ceb68 30b5
.org 0xceb6a
	adds r4, r0, #0	@ 000ceb6a 041c
.org 0xceb6c
	adds r0, #185	@ 000ceb6c b930
.org 0xceb6e
	ldrb r0, [r0, #0]	@ 000ceb6e 0078
.org 0xceb70
	cmp r0, #0	@ 000ceb70 0028
.org 0xceb72
	bne.n 0xcebfa	@ 000ceb72 42d1
.org 0xceb74
	adds r0, r4, #0	@ 000ceb74 201c
.org 0xceb76
	adds r0, #180	@ 000ceb76 b430
.org 0xceb78
	ldr r3, [r4, #88]	@ 000ceb78 a36d
.org 0xceb7a
	ldr r2, [r0, #0]	@ 000ceb7a 0268
.org 0xceb7c
	subs r1, r3, r2	@ 000ceb7c 991a
.org 0xceb7e
	adds r5, r0, #0	@ 000ceb7e 051c
.org 0xceb80
	cmp r1, #0	@ 000ceb80 0029
.org 0xceb82
	blt.n 0xceb88	@ 000ceb82 01db
.org 0xceb84
	asrs r1, r1, #5	@ 000ceb84 4911
.org 0xceb86
	b.n 0xceb92	@ 000ceb86 04e0
.org 0xceb88
	subs r0, r2, r3	@ 000ceb88 d01a
.org 0xceb8a
	cmp r0, #0	@ 000ceb8a 0028
.org 0xceb8c
	bge.n 0xceb90	@ 000ceb8c 00da
.org 0xceb8e
	adds r0, #31	@ 000ceb8e 1f30
.org 0xceb90
	asrs r1, r0, #5	@ 000ceb90 4111
.org 0xceb92
	movs r0, #128	@ 000ceb92 8020
.org 0xceb94
	lsls r0, r0, #2	@ 000ceb94 8000
.org 0xceb96
	str r0, [r4, #92]	@ 000ceb96 e065
.org 0xceb98
	lsls r0, r1, #8	@ 000ceb98 0802
.org 0xceb9a
	negs r0, r0	@ 000ceb9a 4042
.org 0xceb9c
	cmp r0, #0	@ 000ceb9c 0028
.org 0xceb9e
	bge.n 0xceba2	@ 000ceb9e 00da
.org 0xceba0
	adds r0, #255	@ 000ceba0 ff30
.org 0xceba2
	asrs r1, r0, #8	@ 000ceba2 0112
.org 0xceba4
	str r1, [r4, #96]	@ 000ceba4 2166
.org 0xceba6
	movs r0, #224	@ 000ceba6 e020
.org 0xceba8
	lsls r0, r0, #3	@ 000ceba8 c000
.org 0xcebaa
	cmp r1, r0	@ 000cebaa 8142
.org 0xcebac
	ble.n 0xcebb2	@ 000cebac 01dd
.org 0xcebae
	ldr r0, [pc, #32]	@ 000cebae 0848
.org 0xcebb0
	str r0, [r4, #96]	@ 000cebb0 2066
.org 0xcebb2
	ldr r0, [r4, #96]	@ 000cebb2 206e
.org 0xcebb4
	cmp r0, #0	@ 000cebb4 0028
.org 0xcebb6
	bge.n 0xcebba	@ 000cebb6 00da
.org 0xcebb8
	negs r0, r0	@ 000cebb8 4042
.org 0xcebba
	cmp r0, #7	@ 000cebba 0728
.org 0xcebbc
	bgt.n 0xcebd4	@ 000cebbc 0adc
.org 0xcebbe
	movs r0, #0	@ 000cebbe 0020
.org 0xcebc0
	str r0, [r4, #96]	@ 000cebc0 2066
.org 0xcebc2
	str r0, [r4, #104]	@ 000cebc2 a066
.org 0xcebc4
	adds r1, r4, #0	@ 000cebc4 211c
.org 0xcebc6
	adds r1, #185	@ 000cebc6 b931
.org 0xcebc8
	movs r0, #1	@ 000cebc8 0120
.org 0xcebca
	strb r0, [r1, #0]	@ 000cebca 0870
.org 0xcebcc
	b.n 0xcebdc	@ 000cebcc 06e0
.org 0xcebce
	.byte 0x00	@ 000cebce data
.org 0xcebcf
	.byte 0x00	@ 000cebcf data
.org 0xcebd0
	.byte 0x00,0xf9,0xff,0xff	@ 000cebd0 data
.org 0xcebd4
	movs r0, #182	@ 000cebd4 b620
.org 0xcebd6
	lsls r0, r0, #1	@ 000cebd6 4000
.org 0xcebd8
	bl 0x2b10	@ 000cebd8 33f79aff
.org 0xcebdc
	movs r0, #0	@ 000cebdc 0020
.org 0xcebde
	str r0, [r5, #0]	@ 000cebde 2860
.org 0xcebe0
	ldrb r1, [r4, #10]	@ 000cebe0 a17a
.org 0xcebe2
	movs r0, #16	@ 000cebe2 1020
.org 0xcebe4
	ands r0, r1	@ 000cebe4 0840
.org 0xcebe6
	cmp r0, #0	@ 000cebe6 0028
.org 0xcebe8
	bne.n 0xcebfa	@ 000cebe8 07d1
.org 0xcebea
	ldr r0, [r4, #92]	@ 000cebea e06d
.org 0xcebec
	lsls r0, r0, #8	@ 000cebec 0002
.org 0xcebee
	negs r0, r0	@ 000cebee 4042
.org 0xcebf0
	cmp r0, #0	@ 000cebf0 0028
.org 0xcebf2
	bge.n 0xcebf6	@ 000cebf2 00da
.org 0xcebf4
	adds r0, #255	@ 000cebf4 ff30
.org 0xcebf6
	asrs r0, r0, #8	@ 000cebf6 0012
.org 0xcebf8
	str r0, [r4, #92]	@ 000cebf8 e065
