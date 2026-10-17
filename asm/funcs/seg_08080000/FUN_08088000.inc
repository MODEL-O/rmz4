@ FUN_08088000  entry 0x08088000  size 192
.thumb
.org 0x88000
FUN_08088000:
	push {r4, lr}	@ 00088000 10b5
.org 0x88002
	sub sp, #16	@ 00088002 84b0
.org 0x88004
	adds r4, r0, #0	@ 00088004 041c
.org 0x88006
	ldrb r0, [r4, #15]	@ 00088006 e07b
.org 0x88008
	cmp r0, #0	@ 00088008 0028
.org 0x8800a
	bne.n 0x88028	@ 0008800a 0dd1
.org 0x8800c
	adds r0, r4, #0	@ 0008800c 201c
.org 0x8800e
	adds r0, #116	@ 0008800e 7430
.org 0x88010
	ldr r1, [pc, #56]	@ 00088010 0e49
.org 0x88012
	bl 0x5784	@ 00088012 7df7b7fb
.org 0x88016
	ldr r1, [pc, #56]	@ 00088016 0e49
.org 0x88018
	adds r0, r4, #0	@ 00088018 201c
.org 0x8801a
	bl 0x1cf00	@ 0008801a 94f771ff
.org 0x8801e
	movs r0, #32	@ 0008801e 2020
.org 0x88020
	strb r0, [r4, #18]	@ 00088020 a074
.org 0x88022
	ldrb r0, [r4, #15]	@ 00088022 e07b
.org 0x88024
	adds r0, #1	@ 00088024 0130
.org 0x88026
	strb r0, [r4, #15]	@ 00088026 e073
.org 0x88028
	adds r0, r4, #0	@ 00088028 201c
.org 0x8802a
	bl 0x1cff0	@ 0008802a 94f7e1ff
.org 0x8802e
	ldrb r1, [r4, #18]	@ 0008802e a17c
.org 0x88030
	movs r0, #7	@ 00088030 0720
.org 0x88032
	ands r0, r1	@ 00088032 0840
.org 0x88034
	cmp r0, #0	@ 00088034 0028
.org 0x88036
	bne.n 0x88074	@ 00088036 1dd1
.org 0x88038
	ldr r2, [r4, #84]	@ 00088038 626d
.org 0x8803a
	ldrb r1, [r4, #10]	@ 0008803a a17a
.org 0x8803c
	movs r0, #16	@ 0008803c 1020
.org 0x8803e
	ands r0, r1	@ 0008803e 0840
.org 0x88040
	cmp r0, #0	@ 00088040 0028
.org 0x88042
	beq.n 0x88054	@ 00088042 07d0
.org 0x88044
	movs r1, #128	@ 00088044 8021
.org 0x88046
	lsls r1, r1, #3	@ 00088046 c900
.org 0x88048
	b.n 0x88056	@ 00088048 05e0
.org 0x8804a
	.byte 0x00	@ 0008804a data
.org 0x8804b
	.byte 0x00	@ 0008804b data
.org 0x8804c
	.byte 0x34,0xf0,0x85,0x08	@ 0008804c data
.org 0x88050
	.byte 0x0d,0x1d,0x00,0x00	@ 00088050 data
.org 0x88054
	ldr r1, [pc, #96]	@ 00088054 1849
.org 0x88056
	adds r0, r2, r1	@ 00088056 5018
.org 0x88058
	str r0, [sp, #0]	@ 00088058 0090
.org 0x8805a
	ldr r0, [r4, #88]	@ 0008805a a06d
.org 0x8805c
	str r0, [sp, #4]	@ 0008805c 0190
.org 0x8805e
	movs r0, #128	@ 0008805e 8020
.org 0x88060
	lsls r0, r0, #2	@ 00088060 8000
.org 0x88062
	str r0, [sp, #8]	@ 00088062 0290
.org 0x88064
	add r1, sp, #8	@ 00088064 02a9
.org 0x88066
	movs r0, #0	@ 00088066 0020
.org 0x88068
	str r0, [r1, #4]	@ 00088068 4860
.org 0x8806a
	mov r0, sp	@ 0008806a 6846
.org 0x8806c
	movs r2, #1	@ 0008806c 0122
.org 0x8806e
	movs r3, #2	@ 0008806e 0223
.org 0x88070
	bl 0x88ff0	@ 00088070 00f0beff
.org 0x88074
	ldrb r0, [r4, #18]	@ 00088074 a07c
.org 0x88076
	subs r0, #1	@ 00088076 0138
.org 0x88078
	strb r0, [r4, #18]	@ 00088078 a074
.org 0x8807a
	lsls r0, r0, #24	@ 0008807a 0006
.org 0x8807c
	lsrs r2, r0, #24	@ 0008807c 020e
.org 0x8807e
	cmp r2, #0	@ 0008807e 002a
.org 0x88080
	bne.n 0x880ca	@ 00088080 23d1
.org 0x88082
	ldr r0, [pc, #56]	@ 00088082 0e48
.org 0x88084
	ldr r3, [r0, #0]	@ 00088084 0368
.org 0x88086
	ldr r0, [r3, #84]	@ 00088086 586d
.org 0x88088
	ldr r1, [r4, #84]	@ 00088088 616d
.org 0x8808a
	subs r0, r0, r1	@ 0008808a 401a
.org 0x8808c
	movs r1, #208	@ 0008808c d021
.org 0x8808e
	lsls r1, r1, #7	@ 0008808e c901
.org 0x88090
	adds r0, r0, r1	@ 00088090 4018
.org 0x88092
	movs r1, #208	@ 00088092 d021
.org 0x88094
	lsls r1, r1, #8	@ 00088094 0902
.org 0x88096
	cmp r0, r1	@ 00088096 8842
.org 0x88098
	bhi.n 0x880c0	@ 00088098 12d8
.org 0x8809a
	ldr r0, [r3, #88]	@ 0008809a 986d
.org 0x8809c
	ldr r1, [r4, #88]	@ 0008809c a16d
.org 0x8809e
	subs r0, r0, r1	@ 0008809e 401a
.org 0x880a0
	movs r1, #160	@ 000880a0 a021
.org 0x880a2
	lsls r1, r1, #8	@ 000880a2 0902
.org 0x880a4
	adds r0, r0, r1	@ 000880a4 4018
.org 0x880a6
	movs r1, #160	@ 000880a6 a021
.org 0x880a8
	lsls r1, r1, #9	@ 000880a8 4902
.org 0x880aa
	cmp r0, r1	@ 000880aa 8842
.org 0x880ac
	bhi.n 0x880c0	@ 000880ac 08d8
.org 0x880ae
	movs r0, #9	@ 000880ae 0920
.org 0x880b0
	strb r0, [r4, #13]	@ 000880b0 6073
.org 0x880b2
	strb r2, [r4, #14]	@ 000880b2 a273
.org 0x880b4
	strb r2, [r4, #15]	@ 000880b4 e273
.org 0x880b6
	b.n 0x880ca	@ 000880b6 08e0
.org 0x880b8
	.byte 0x00,0xfc,0xff,0xff	@ 000880b8 data
.org 0x880bc
	.byte 0xf0,0xdb,0x02,0x02	@ 000880bc data
