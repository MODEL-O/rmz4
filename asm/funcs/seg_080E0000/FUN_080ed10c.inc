@ FUN_080ed10c  entry 0x080ed10c  size 166
.thumb
.org 0xed10c
FUN_080ed10c:
	push {r4, r5, r6, r7, lr}	@ 000ed10c f0b5
.org 0xed10e
	adds r7, r0, #0	@ 000ed10e 071c
.org 0xed110
	bl 0x1cc9c	@ 000ed110 2ff7c4fd
.org 0xed114
	ldrb r1, [r7, #10]	@ 000ed114 b97a
.org 0xed116
	movs r0, #1	@ 000ed116 0120
.org 0xed118
	orrs r0, r1	@ 000ed118 0843
.org 0xed11a
	movs r1, #2	@ 000ed11a 0221
.org 0xed11c
	orrs r0, r1	@ 000ed11c 0843
.org 0xed11e
	strb r0, [r7, #10]	@ 000ed11e b872
.org 0xed120
	ldr r1, [pc, #144]	@ 000ed120 2449
.org 0xed122
	ldrb r0, [r7, #16]	@ 000ed122 387c
.org 0xed124
	lsls r0, r0, #1	@ 000ed124 4000
.org 0xed126
	adds r0, r0, r1	@ 000ed126 4018
.org 0xed128
	ldrh r1, [r0, #0]	@ 000ed128 0188
.org 0xed12a
	adds r0, r7, #0	@ 000ed12a 381c
.org 0xed12c
	bl 0x1cf00	@ 000ed12c 2ff7e8fe
.org 0xed130
	movs r5, #0	@ 000ed130 0025
.org 0xed132
	ldrb r1, [r7, #10]	@ 000ed132 b97a
.org 0xed134
	movs r0, #239	@ 000ed134 ef20
.org 0xed136
	ands r0, r1	@ 000ed136 0840
.org 0xed138
	strb r0, [r7, #10]	@ 000ed138 b872
.org 0xed13a
	movs r6, #1	@ 000ed13a 0126
.org 0xed13c
	adds r0, r7, #0	@ 000ed13c 381c
.org 0xed13e
	adds r0, #76	@ 000ed13e 4c30
.org 0xed140
	strb r5, [r0, #0]	@ 000ed140 0570
.org 0xed142
	adds r2, r7, #0	@ 000ed142 3a1c
.org 0xed144
	adds r2, #74	@ 000ed144 4a32
.org 0xed146
	ldrb r1, [r2, #0]	@ 000ed146 1178
.org 0xed148
	movs r0, #17	@ 000ed148 1120
.org 0xed14a
	negs r0, r0	@ 000ed14a 4042
.org 0xed14c
	ands r0, r1	@ 000ed14c 0840
.org 0xed14e
	strb r0, [r2, #0]	@ 000ed14e 1070
.org 0xed150
	ldrb r0, [r7, #10]	@ 000ed150 b87a
.org 0xed152
	movs r1, #4	@ 000ed152 0421
.org 0xed154
	orrs r0, r1	@ 000ed154 0843
.org 0xed156
	strb r0, [r7, #10]	@ 000ed156 b872
.org 0xed158
	adds r4, r7, #0	@ 000ed158 3c1c
.org 0xed15a
	adds r4, #116	@ 000ed15a 7434
.org 0xed15c
	ldr r1, [pc, #88]	@ 000ed15c 1649
.org 0xed15e
	adds r2, #10	@ 000ed15e 0a32
.org 0xed160
	adds r0, r4, #0	@ 000ed160 201c
.org 0xed162
	movs r3, #1	@ 000ed162 0123
.org 0xed164
	bl 0x5760	@ 000ed164 18f7fcfa
.org 0xed168
	str r7, [r4, #44]	@ 000ed168 e762
.org 0xed16a
	ldr r0, [pc, #80]	@ 000ed16a 1448
.org 0xed16c
	str r0, [r4, #36]	@ 000ed16c 6062
.org 0xed16e
	ldrb r1, [r7, #11]	@ 000ed16e f97a
.org 0xed170
	movs r0, #8	@ 000ed170 0820
.org 0xed172
	orrs r0, r1	@ 000ed172 0843
.org 0xed174
	strb r0, [r7, #11]	@ 000ed174 f872
.org 0xed176
	ldr r0, [pc, #72]	@ 000ed176 1248
.org 0xed178
	str r0, [r7, #48]	@ 000ed178 3863
.org 0xed17a
	movs r0, #15	@ 000ed17a 0f20
.org 0xed17c
	strh r0, [r7, #38]	@ 000ed17c f884
.org 0xed17e
	adds r1, r7, #0	@ 000ed17e 391c
.org 0xed180
	adds r1, #180	@ 000ed180 b431
.org 0xed182
	ldr r0, [r7, #84]	@ 000ed182 786d
.org 0xed184
	str r0, [r1, #0]	@ 000ed184 0860
.org 0xed186
	adds r1, #4	@ 000ed186 0431
.org 0xed188
	ldr r0, [r7, #88]	@ 000ed188 b86d
.org 0xed18a
	str r0, [r1, #0]	@ 000ed18a 0860
.org 0xed18c
	adds r0, r7, #0	@ 000ed18c 381c
.org 0xed18e
	adds r0, #188	@ 000ed18e bc30
.org 0xed190
	str r5, [r0, #0]	@ 000ed190 0560
.org 0xed192
	adds r0, #4	@ 000ed192 0430
.org 0xed194
	strh r5, [r0, #0]	@ 000ed194 0580
.org 0xed196
	ldr r1, [pc, #44]	@ 000ed196 0b49
.org 0xed198
	ldrb r0, [r7, #9]	@ 000ed198 787a
.org 0xed19a
	lsls r0, r0, #2	@ 000ed19a 8000
.org 0xed19c
	adds r0, r0, r1	@ 000ed19c 4018
.org 0xed19e
	str r6, [r7, #12]	@ 000ed19e fe60
.org 0xed1a0
	ldr r0, [r0, #0]	@ 000ed1a0 0068
.org 0xed1a2
	ldr r0, [r0, #4]	@ 000ed1a2 4068
.org 0xed1a4
	str r0, [r7, #20]	@ 000ed1a4 7861
.org 0xed1a6
	adds r0, r7, #0	@ 000ed1a6 381c
.org 0xed1a8
	bl 0xed1c8	@ 000ed1a8 00f00ef8
.org 0xed1ac
	pop {r4, r5, r6, r7}	@ 000ed1ac f0bc
.org 0xed1ae
	pop {r0}	@ 000ed1ae 01bc
.org 0xed1b0
	bx r0	@ 000ed1b0 0047
