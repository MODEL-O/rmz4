@ FUN_0809fe88  entry 0x0809fe88  size 186
.thumb
.org 0x9fe88
FUN_0809fe88:
	push {r4, r5, r6, lr}	@ 0009fe88 70b5
.org 0x9fe8a
	adds r5, r0, #0	@ 0009fe8a 051c
.org 0x9fe8c
	ldr r0, [r5, #40]	@ 0009fe8c a86a
.org 0x9fe8e
	ldrb r4, [r0, #10]	@ 0009fe8e 847a
.org 0x9fe90
	lsrs r4, r4, #4	@ 0009fe90 2409
.org 0x9fe92
	movs r2, #1	@ 0009fe92 0122
.org 0x9fe94
	ands r4, r2	@ 0009fe94 1440
.org 0x9fe96
	ldr r1, [pc, #76]	@ 0009fe96 1349
.org 0x9fe98
	ldrb r0, [r5, #9]	@ 0009fe98 687a
.org 0x9fe9a
	lsls r0, r0, #2	@ 0009fe9a 8000
.org 0x9fe9c
	adds r0, r0, r1	@ 0009fe9c 4018
.org 0x9fe9e
	str r2, [r5, #12]	@ 0009fe9e ea60
.org 0x9fea0
	ldr r0, [r0, #0]	@ 0009fea0 0068
.org 0x9fea2
	ldr r0, [r0, #4]	@ 0009fea2 4068
.org 0x9fea4
	str r0, [r5, #20]	@ 0009fea4 6861
.org 0x9fea6
	movs r2, #0	@ 0009fea6 0022
.org 0x9fea8
	strb r2, [r5, #13]	@ 0009fea8 6a73
.org 0x9feaa
	strb r2, [r5, #14]	@ 0009feaa aa73
.org 0x9feac
	strb r2, [r5, #15]	@ 0009feac ea73
.org 0x9feae
	ldrb r0, [r5, #10]	@ 0009feae a87a
.org 0x9feb0
	movs r1, #1	@ 0009feb0 0121
.org 0x9feb2
	movs r6, #0	@ 0009feb2 0026
.org 0x9feb4
	orrs r0, r1	@ 0009feb4 0843
.org 0x9feb6
	movs r1, #2	@ 0009feb6 0221
.org 0x9feb8
	orrs r0, r1	@ 0009feb8 0843
.org 0x9feba
	strb r0, [r5, #10]	@ 0009feba a872
.org 0x9febc
	adds r1, r5, #0	@ 0009febc 291c
.org 0x9febe
	adds r1, #180	@ 0009febe b431
.org 0x9fec0
	movs r0, #150	@ 0009fec0 9620
.org 0x9fec2
	lsls r0, r0, #2	@ 0009fec2 8000
.org 0x9fec4
	str r0, [r1, #0]	@ 0009fec4 0860
.org 0x9fec6
	str r2, [r5, #44]	@ 0009fec6 ea62
.org 0x9fec8
	adds r0, r5, #0	@ 0009fec8 281c
.org 0x9feca
	adds r0, #184	@ 0009feca b830
.org 0x9fecc
	strb r2, [r0, #0]	@ 0009fecc 0270
.org 0x9fece
	adds r0, #1	@ 0009fece 0130
.org 0x9fed0
	strb r2, [r0, #0]	@ 0009fed0 0270
.org 0x9fed2
	adds r0, r5, #0	@ 0009fed2 281c
.org 0x9fed4
	bl 0x1cc9c	@ 0009fed4 7cf7e2fe
.org 0x9fed8
	cmp r4, #0	@ 0009fed8 002c
.org 0x9feda
	beq.n 0x9fee8	@ 0009feda 05d0
.org 0x9fedc
	ldrb r0, [r5, #10]	@ 0009fedc a87a
.org 0x9fede
	movs r1, #16	@ 0009fede 1021
.org 0x9fee0
	orrs r0, r1	@ 0009fee0 0843
.org 0x9fee2
	b.n 0x9feee	@ 0009fee2 04e0
.org 0x9fee4
	.byte 0x40,0xdb,0x85,0x08	@ 0009fee4 data
.org 0x9fee8
	ldrb r1, [r5, #10]	@ 0009fee8 a97a
.org 0x9feea
	movs r0, #239	@ 0009feea ef20
.org 0x9feec
	ands r0, r1	@ 0009feec 0840
.org 0x9feee
	strb r0, [r5, #10]	@ 0009feee a872
.org 0x9fef0
	adds r1, r4, #0	@ 0009fef0 211c
.org 0x9fef2
	adds r0, r5, #0	@ 0009fef2 281c
.org 0x9fef4
	adds r0, #76	@ 0009fef4 4c30
.org 0x9fef6
	strb r1, [r0, #0]	@ 0009fef6 0170
.org 0x9fef8
	adds r3, r5, #0	@ 0009fef8 2b1c
.org 0x9fefa
	adds r3, #74	@ 0009fefa 4a33
.org 0x9fefc
	lsls r1, r1, #4	@ 0009fefc 0901
.org 0x9fefe
	ldrb r2, [r3, #0]	@ 0009fefe 1a78
.org 0x9ff00
	movs r0, #17	@ 0009ff00 1120
.org 0x9ff02
	negs r0, r0	@ 0009ff02 4042
.org 0x9ff04
	ands r0, r2	@ 0009ff04 1040
.org 0x9ff06
	orrs r0, r1	@ 0009ff06 0843
.org 0x9ff08
	strb r0, [r3, #0]	@ 0009ff08 1870
.org 0x9ff0a
	movs r1, #130	@ 0009ff0a 8221
.org 0x9ff0c
	lsls r1, r1, #8	@ 0009ff0c 0902
.org 0x9ff0e
	adds r0, r5, #0	@ 0009ff0e 281c
.org 0x9ff10
	bl 0x1cf00	@ 0009ff10 7cf7f6ff
.org 0x9ff14
	adds r0, r5, #0	@ 0009ff14 281c
.org 0x9ff16
	bl 0x1cff0	@ 0009ff16 7df76bf8
.org 0x9ff1a
	ldrb r1, [r5, #10]	@ 0009ff1a a97a
.org 0x9ff1c
	movs r0, #4	@ 0009ff1c 0420
.org 0x9ff1e
	orrs r0, r1	@ 0009ff1e 0843
.org 0x9ff20
	strb r0, [r5, #10]	@ 0009ff20 a872
.org 0x9ff22
	adds r4, r5, #0	@ 0009ff22 2c1c
.org 0x9ff24
	adds r4, #116	@ 0009ff24 7434
.org 0x9ff26
	ldr r1, [pc, #32]	@ 0009ff26 0849
.org 0x9ff28
	adds r2, r5, #0	@ 0009ff28 2a1c
.org 0x9ff2a
	adds r2, #84	@ 0009ff2a 5432
.org 0x9ff2c
	adds r0, r4, #0	@ 0009ff2c 201c
.org 0x9ff2e
	movs r3, #6	@ 0009ff2e 0623
.org 0x9ff30
	bl 0x5760	@ 0009ff30 65f716fc
.org 0x9ff34
	str r5, [r4, #44]	@ 0009ff34 e562
.org 0x9ff36
	ldr r0, [pc, #20]	@ 0009ff36 0548
.org 0x9ff38
	str r0, [r4, #36]	@ 0009ff38 6062
.org 0x9ff3a
	adds r0, r5, #0	@ 0009ff3a 281c
.org 0x9ff3c
	bl 0x9ff50	@ 0009ff3c 00f008f8
.org 0x9ff40
	pop {r4, r5, r6}	@ 0009ff40 70bc
