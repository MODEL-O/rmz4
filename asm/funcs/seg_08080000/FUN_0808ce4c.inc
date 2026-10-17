@ FUN_0808ce4c  entry 0x0808ce4c  size 352
.thumb
.org 0x8ce4c
FUN_0808ce4c:
	push {r4, r5, r6, r7, lr}	@ 0008ce4c f0b5
.org 0x8ce4e
	mov r7, r9	@ 0008ce4e 4f46
.org 0x8ce50
	mov r6, r8	@ 0008ce50 4646
.org 0x8ce52
	push {r6, r7}	@ 0008ce52 c0b4
.org 0x8ce54
	adds r5, r0, #0	@ 0008ce54 051c
.org 0x8ce56
	bl 0x1cc9c	@ 0008ce56 8ff721ff
.org 0x8ce5a
	ldrb r1, [r5, #10]	@ 0008ce5a a97a
.org 0x8ce5c
	movs r0, #1	@ 0008ce5c 0120
.org 0x8ce5e
	movs r6, #0	@ 0008ce5e 0026
.org 0x8ce60
	orrs r0, r1	@ 0008ce60 0843
.org 0x8ce62
	movs r1, #2	@ 0008ce62 0221
.org 0x8ce64
	orrs r0, r1	@ 0008ce64 0843
.org 0x8ce66
	movs r1, #4	@ 0008ce66 0421
.org 0x8ce68
	orrs r0, r1	@ 0008ce68 0843
.org 0x8ce6a
	strb r0, [r5, #10]	@ 0008ce6a a872
.org 0x8ce6c
	adds r4, r5, #0	@ 0008ce6c 2c1c
.org 0x8ce6e
	adds r4, #116	@ 0008ce6e 7434
.org 0x8ce70
	ldr r1, [pc, #176]	@ 0008ce70 2c49
.org 0x8ce72
	adds r2, r5, #0	@ 0008ce72 2a1c
.org 0x8ce74
	adds r2, #84	@ 0008ce74 5432
.org 0x8ce76
	adds r0, r4, #0	@ 0008ce76 201c
.org 0x8ce78
	movs r3, #8	@ 0008ce78 0823
.org 0x8ce7a
	bl 0x5760	@ 0008ce7a 78f771fc
.org 0x8ce7e
	str r5, [r4, #44]	@ 0008ce7e e562
.org 0x8ce80
	ldr r0, [pc, #164]	@ 0008ce80 2948
.org 0x8ce82
	str r0, [r4, #36]	@ 0008ce82 6062
.org 0x8ce84
	adds r1, r5, #0	@ 0008ce84 291c
.org 0x8ce86
	adds r1, #184	@ 0008ce86 b831
.org 0x8ce88
	ldr r0, [r5, #84]	@ 0008ce88 686d
.org 0x8ce8a
	str r0, [r1, #0]	@ 0008ce8a 0860
.org 0x8ce8c
	ldrb r1, [r5, #10]	@ 0008ce8c a97a
.org 0x8ce8e
	movs r0, #239	@ 0008ce8e ef20
.org 0x8ce90
	ands r0, r1	@ 0008ce90 0840
.org 0x8ce92
	movs r2, #0	@ 0008ce92 0022
.org 0x8ce94
	strb r0, [r5, #10]	@ 0008ce94 a872
.org 0x8ce96
	adds r0, r5, #0	@ 0008ce96 281c
.org 0x8ce98
	adds r0, #76	@ 0008ce98 4c30
.org 0x8ce9a
	strb r2, [r0, #0]	@ 0008ce9a 0270
.org 0x8ce9c
	adds r3, r5, #0	@ 0008ce9c 2b1c
.org 0x8ce9e
	adds r3, #74	@ 0008ce9e 4a33
.org 0x8cea0
	ldrb r1, [r3, #0]	@ 0008cea0 1978
.org 0x8cea2
	movs r0, #17	@ 0008cea2 1120
.org 0x8cea4
	negs r0, r0	@ 0008cea4 4042
.org 0x8cea6
	ands r0, r1	@ 0008cea6 0840
.org 0x8cea8
	strb r0, [r3, #0]	@ 0008cea8 1870
.org 0x8ceaa
	adds r0, r5, #0	@ 0008ceaa 281c
.org 0x8ceac
	adds r0, #188	@ 0008ceac bc30
.org 0x8ceae
	str r2, [r0, #0]	@ 0008ceae 0260
.org 0x8ceb0
	ldrb r0, [r5, #16]	@ 0008ceb0 287c
.org 0x8ceb2
	subs r2, #1	@ 0008ceb2 013a
.org 0x8ceb4
	adds r1, r2, #0	@ 0008ceb4 111c
.org 0x8ceb6
	cmp r0, #0	@ 0008ceb6 0028
.org 0x8ceb8
	beq.n 0x8cebc	@ 0008ceb8 00d0
.org 0x8ceba
	movs r1, #1	@ 0008ceba 0121
.org 0x8cebc
	adds r4, r5, #0	@ 0008cebc 2c1c
.org 0x8cebe
	adds r4, #192	@ 0008cebe c034
.org 0x8cec0
	strb r1, [r4, #0]	@ 0008cec0 2170
.org 0x8cec2
	adds r0, r5, #0	@ 0008cec2 281c
.org 0x8cec4
	adds r0, #195	@ 0008cec4 c330
.org 0x8cec6
	strb r6, [r0, #0]	@ 0008cec6 0670
.org 0x8cec8
	strb r6, [r5, #19]	@ 0008cec8 ee74
.org 0x8ceca
	ldr r0, [r5, #84]	@ 0008ceca 686d
.org 0x8cecc
	ldr r1, [r5, #88]	@ 0008cecc a96d
.org 0x8cece
	bl 0x8534	@ 0008cece 7bf731fb
.org 0x8ced2
	adds r1, r0, #0	@ 0008ced2 011c
.org 0x8ced4
	str r1, [r5, #88]	@ 0008ced4 a965
.org 0x8ced6
	ldr r0, [r5, #84]	@ 0008ced6 686d
.org 0x8ced8
	ldr r2, [pc, #80]	@ 0008ced8 144a
.org 0x8ceda
	adds r0, r0, r2	@ 0008ceda 8018
.org 0x8cedc
	ldr r2, [pc, #80]	@ 0008cedc 144a
.org 0x8cede
	mov r8, r2	@ 0008cede 9046
.org 0x8cee0
	add r1, r8	@ 0008cee0 4144
.org 0x8cee2
	bl 0x8988	@ 0008cee2 7bf751fd
.org 0x8cee6
	adds r6, r0, #0	@ 0008cee6 061c
.org 0x8cee8
	ldr r0, [r5, #84]	@ 0008cee8 686d
.org 0x8ceea
	subs r6, r0, r6	@ 0008ceea 861b
.org 0x8ceec
	movs r7, #160	@ 0008ceec a027
.org 0x8ceee
	lsls r7, r7, #6	@ 0008ceee bf01
.org 0x8cef0
	mov r9, r4	@ 0008cef0 a146
.org 0x8cef2
	cmp r6, r7	@ 0008cef2 be42
.org 0x8cef4
	ble.n 0x8cef8	@ 0008cef4 00dd
.org 0x8cef6
	adds r6, r7, #0	@ 0008cef6 3e1c
.org 0x8cef8
	movs r1, #176	@ 0008cef8 b021
.org 0x8cefa
	lsls r1, r1, #5	@ 0008cefa 4901
.org 0x8cefc
	adds r0, r0, r1	@ 0008cefc 4018
.org 0x8cefe
	ldr r1, [r5, #88]	@ 0008cefe a96d
.org 0x8cf00
	add r1, r8	@ 0008cf00 4144
.org 0x8cf02
	bl 0x8868	@ 0008cf02 7bf7b1fc
.org 0x8cf06
	adds r1, r0, #0	@ 0008cf06 011c
.org 0x8cf08
	ldr r0, [r5, #84]	@ 0008cf08 686d
.org 0x8cf0a
	subs r1, r1, r0	@ 0008cf0a 091a
.org 0x8cf0c
	cmp r1, r7	@ 0008cf0c b942
.org 0x8cf0e
	ble.n 0x8cf12	@ 0008cf0e 00dd
.org 0x8cf10
	adds r1, r7, #0	@ 0008cf10 391c
.org 0x8cf12
	adds r0, r6, #0	@ 0008cf12 301c
.org 0x8cf14
	cmp r0, r1	@ 0008cf14 8842
.org 0x8cf16
	ble.n 0x8cf1a	@ 0008cf16 00dd
.org 0x8cf18
	adds r0, r1, #0	@ 0008cf18 081c
.org 0x8cf1a
	str r0, [r5, #104]	@ 0008cf1a a866
.org 0x8cf1c
	cmp r0, r7	@ 0008cf1c b842
.org 0x8cf1e
	bne.n 0x8cf34	@ 0008cf1e 09d1
.org 0x8cf20
	movs r0, #9	@ 0008cf20 0920
.org 0x8cf22
	b.n 0x8cf3c	@ 0008cf22 0be0
.org 0x8cf24
	.byte 0x3c,0xf9,0x85,0x08	@ 0008cf24 data
.org 0x8cf28
	.byte 0x79,0xd0,0x08,0x08	@ 0008cf28 data
.org 0x8cf2c
	.byte 0x00,0xea,0xff,0xff	@ 0008cf2c data
.org 0x8cf30
	.byte 0x00,0xf8,0xff,0xff	@ 0008cf30 data
.org 0x8cf34
	movs r1, #144	@ 0008cf34 9021
.org 0x8cf36
	lsls r1, r1, #3	@ 0008cf36 c900
.org 0x8cf38
	bl 0x128fb8	@ 0008cf38 9cf03ef8
.org 0x8cf3c
	str r0, [r5, #96]	@ 0008cf3c 2866
.org 0x8cf3e
	ldr r0, [r5, #96]	@ 0008cf3e 286e
.org 0x8cf40
	cmp r0, #0	@ 0008cf40 0028
.org 0x8cf42
	bgt.n 0x8cf48	@ 0008cf42 01dc
.org 0x8cf44
	movs r0, #1	@ 0008cf44 0120
.org 0x8cf46
	str r0, [r5, #96]	@ 0008cf46 2866
.org 0x8cf48
	ldr r1, [r5, #96]	@ 0008cf48 296e
.org 0x8cf4a
	lsls r0, r1, #3	@ 0008cf4a c800
.org 0x8cf4c
	adds r0, r0, r1	@ 0008cf4c 4018
.org 0x8cf4e
	lsls r0, r0, #7	@ 0008cf4e c001
.org 0x8cf50
	str r0, [r5, #104]	@ 0008cf50 a866
.org 0x8cf52
	lsls r4, r1, #1	@ 0008cf52 4c00
.org 0x8cf54
	adds r4, r4, r1	@ 0008cf54 6418
.org 0x8cf56
	lsls r4, r4, #4	@ 0008cf56 2401
.org 0x8cf58
	ldr r1, [pc, #96]	@ 0008cf58 1849
.org 0x8cf5a
	ldrb r0, [r5, #9]	@ 0008cf5a 687a
.org 0x8cf5c
	lsls r0, r0, #2	@ 0008cf5c 8000
.org 0x8cf5e
	adds r0, r0, r1	@ 0008cf5e 4018
.org 0x8cf60
	movs r1, #1	@ 0008cf60 0121
.org 0x8cf62
	str r1, [r5, #12]	@ 0008cf62 e960
.org 0x8cf64
	ldr r0, [r0, #0]	@ 0008cf64 0068
.org 0x8cf66
	ldr r0, [r0, #4]	@ 0008cf66 4068
.org 0x8cf68
	str r0, [r5, #20]	@ 0008cf68 6861
.org 0x8cf6a
	movs r2, #0	@ 0008cf6a 0022
.org 0x8cf6c
	strb r1, [r5, #13]	@ 0008cf6c 6973
.org 0x8cf6e
	movs r0, #2	@ 0008cf6e 0220
.org 0x8cf70
	strb r0, [r5, #14]	@ 0008cf70 a873
.org 0x8cf72
	strb r2, [r5, #15]	@ 0008cf72 ea73
.org 0x8cf74
	ldr r1, [pc, #72]	@ 0008cf74 1249
.org 0x8cf76
	adds r0, r5, #0	@ 0008cf76 281c
.org 0x8cf78
	bl 0x1cf00	@ 0008cf78 8ff7c2ff
.org 0x8cf7c
	mov r2, r9	@ 0008cf7c 4a46
.org 0x8cf7e
	movs r0, #0	@ 0008cf7e 0020
.org 0x8cf80
	ldrsb r0, [r2, r0]	@ 0008cf80 1056
.org 0x8cf82
	muls r0, r4	@ 0008cf82 6043
.org 0x8cf84
	str r0, [r5, #92]	@ 0008cf84 e865
.org 0x8cf86
	movs r1, #0	@ 0008cf86 0021
.org 0x8cf88
	ldrsb r1, [r2, r1]	@ 0008cf88 5156
.org 0x8cf8a
	ldr r0, [r5, #96]	@ 0008cf8a 286e
.org 0x8cf8c
	muls r0, r1	@ 0008cf8c 4843
.org 0x8cf8e
	str r0, [r5, #100]	@ 0008cf8e 6866
.org 0x8cf90
	adds r0, r5, #0	@ 0008cf90 281c
.org 0x8cf92
	bl 0x7f90c	@ 0008cf92 f2f7bbfc
.org 0x8cf96
	cmp r0, #0	@ 0008cf96 0028
.org 0x8cf98
	beq.n 0x8cfaa	@ 0008cf98 07d0
.org 0x8cf9a
	movs r1, #148	@ 0008cf9a 9421
.org 0x8cf9c
	lsls r1, r1, #6	@ 0008cf9c 8901
.org 0x8cf9e
	adds r0, r5, #0	@ 0008cf9e 281c
.org 0x8cfa0
	bl 0x1cf00	@ 0008cfa0 8ff7aeff
.org 0x8cfa4
	adds r0, r5, #0	@ 0008cfa4 281c
.org 0x8cfa6
	bl 0x1cff0	@ 0008cfa6 90f723f8
.org 0x8cfaa
	adds r0, r5, #0	@ 0008cfaa 281c
