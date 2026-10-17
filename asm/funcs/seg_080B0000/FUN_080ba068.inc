@ FUN_080ba068  entry 0x080ba068  size 212
.thumb
.org 0xba068
FUN_080ba068:
	push {r4, r5, r6, r7, lr}	@ 000ba068 f0b5
.org 0xba06a
	mov r7, r8	@ 000ba06a 4746
.org 0xba06c
	push {r7}	@ 000ba06c 80b4
.org 0xba06e
	adds r4, r0, #0	@ 000ba06e 041c
.org 0xba070
	ldr r0, [r4, #40]	@ 000ba070 a06a
.org 0xba072
	mov r8, r0	@ 000ba072 8046
.org 0xba074
	ldrb r0, [r4, #15]	@ 000ba074 e07b
.org 0xba076
	cmp r0, #0	@ 000ba076 0028
.org 0xba078
	bne.n 0xba0e0	@ 000ba078 32d1
.org 0xba07a
	movs r0, #202	@ 000ba07a ca20
.org 0xba07c
	lsls r0, r0, #1	@ 000ba07c 4000
.org 0xba07e
	bl 0x2b10	@ 000ba07e 48f747fd
.org 0xba082
	adds r0, r4, #0	@ 000ba082 201c
.org 0xba084
	adds r0, #116	@ 000ba084 7430
.org 0xba086
	ldr r1, [pc, #180]	@ 000ba086 2d49
.org 0xba088
	bl 0x5784	@ 000ba088 4bf77cfb
.org 0xba08c
	ldr r1, [pc, #176]	@ 000ba08c 2c49
.org 0xba08e
	adds r0, r4, #0	@ 000ba08e 201c
.org 0xba090
	bl 0x1cf00	@ 000ba090 62f736ff
.org 0xba094
	mov r0, r8	@ 000ba094 4046
.org 0xba096
	adds r0, #180	@ 000ba096 b430
.org 0xba098
	ldr r3, [r0, #0]	@ 000ba098 0368
.org 0xba09a
	movs r7, #240	@ 000ba09a f027
.org 0xba09c
	lsls r7, r7, #7	@ 000ba09c ff01
.org 0xba09e
	adds r1, r3, r7	@ 000ba09e d919
.org 0xba0a0
	ldr r0, [pc, #160]	@ 000ba0a0 2848
.org 0xba0a2
	ldr r0, [r0, #0]	@ 000ba0a2 0068
.org 0xba0a4
	ldr r0, [r0, #84]	@ 000ba0a4 406d
.org 0xba0a6
	movs r2, #1	@ 000ba0a6 0122
.org 0xba0a8
	cmp r1, r0	@ 000ba0a8 8142
.org 0xba0aa
	bge.n 0xba0ae	@ 000ba0aa 00da
.org 0xba0ac
	subs r2, #2	@ 000ba0ac 023a
.org 0xba0ae
	lsls r0, r2, #1	@ 000ba0ae 5000
.org 0xba0b0
	adds r0, r0, r2	@ 000ba0b0 8018
.org 0xba0b2
	lsls r0, r0, #2	@ 000ba0b2 8000
.org 0xba0b4
	subs r0, r0, r2	@ 000ba0b4 801a
.org 0xba0b6
	lsls r0, r0, #11	@ 000ba0b6 c002
.org 0xba0b8
	adds r0, r0, r7	@ 000ba0b8 c019
.org 0xba0ba
	adds r5, r3, r0	@ 000ba0ba 1d18
.org 0xba0bc
	mov r0, r8	@ 000ba0bc 4046
.org 0xba0be
	adds r0, #184	@ 000ba0be b830
.org 0xba0c0
	ldr r0, [r0, #0]	@ 000ba0c0 0068
.org 0xba0c2
	ldr r1, [pc, #132]	@ 000ba0c2 2149
.org 0xba0c4
	adds r6, r0, r1	@ 000ba0c4 4618
.org 0xba0c6
	ldr r0, [r4, #84]	@ 000ba0c6 606d
.org 0xba0c8
	str r0, [r4, #92]	@ 000ba0c8 e065
.org 0xba0ca
	subs r0, r5, r0	@ 000ba0ca 281a
.org 0xba0cc
	str r0, [r4, #100]	@ 000ba0cc 6066
.org 0xba0ce
	ldr r0, [r4, #88]	@ 000ba0ce a06d
.org 0xba0d0
	str r0, [r4, #96]	@ 000ba0d0 2066
.org 0xba0d2
	subs r0, r6, r0	@ 000ba0d2 301a
.org 0xba0d4
	str r0, [r4, #104]	@ 000ba0d4 a066
.org 0xba0d6
	movs r0, #16	@ 000ba0d6 1020
.org 0xba0d8
	strb r0, [r4, #18]	@ 000ba0d8 a074
.org 0xba0da
	ldrb r0, [r4, #15]	@ 000ba0da e07b
.org 0xba0dc
	adds r0, #1	@ 000ba0dc 0130
.org 0xba0de
	strb r0, [r4, #15]	@ 000ba0de e073
.org 0xba0e0
	adds r0, r4, #0	@ 000ba0e0 201c
.org 0xba0e2
	bl 0x1cff0	@ 000ba0e2 62f785ff
.org 0xba0e6
	ldrb r0, [r4, #18]	@ 000ba0e6 a07c
.org 0xba0e8
	subs r3, r0, #1	@ 000ba0e8 431e
.org 0xba0ea
	strb r3, [r4, #18]	@ 000ba0ea a374
.org 0xba0ec
	ldrb r1, [r4, #18]	@ 000ba0ec a17c
.org 0xba0ee
	movs r0, #16	@ 000ba0ee 1020
.org 0xba0f0
	subs r0, r0, r1	@ 000ba0f0 401a
.org 0xba0f2
	lsls r0, r0, #26	@ 000ba0f2 8006
.org 0xba0f4
	ldr r1, [pc, #84]	@ 000ba0f4 1549
.org 0xba0f6
	lsrs r0, r0, #23	@ 000ba0f6 c00d
.org 0xba0f8
	adds r0, r0, r1	@ 000ba0f8 4018
.org 0xba0fa
	movs r1, #0	@ 000ba0fa 0021
.org 0xba0fc
	ldrsh r2, [r0, r1]	@ 000ba0fc 425e
.org 0xba0fe
	ldr r0, [r4, #100]	@ 000ba0fe 606e
.org 0xba100
	muls r0, r2	@ 000ba100 5043
.org 0xba102
	cmp r0, #0	@ 000ba102 0028
.org 0xba104
	bge.n 0xba108	@ 000ba104 00da
.org 0xba106
	adds r0, #255	@ 000ba106 ff30
.org 0xba108
	asrs r0, r0, #8	@ 000ba108 0012
.org 0xba10a
	ldr r1, [r4, #92]	@ 000ba10a e16d
.org 0xba10c
	adds r1, r1, r0	@ 000ba10c 0918
.org 0xba10e
	str r1, [r4, #84]	@ 000ba10e 6165
.org 0xba110
	ldr r0, [r4, #104]	@ 000ba110 a06e
.org 0xba112
	muls r0, r2	@ 000ba112 5043
.org 0xba114
	cmp r0, #0	@ 000ba114 0028
.org 0xba116
	bge.n 0xba11a	@ 000ba116 00da
.org 0xba118
	adds r0, #255	@ 000ba118 ff30
.org 0xba11a
	asrs r0, r0, #8	@ 000ba11a 0012
.org 0xba11c
	ldr r1, [r4, #96]	@ 000ba11c 216e
.org 0xba11e
	adds r1, r1, r0	@ 000ba11e 0918
.org 0xba120
	str r1, [r4, #88]	@ 000ba120 a165
.org 0xba122
	lsls r0, r3, #24	@ 000ba122 1806
.org 0xba124
	lsrs r1, r0, #24	@ 000ba124 010e
.org 0xba126
	cmp r1, #0	@ 000ba126 0029
.org 0xba128
	bne.n 0xba132	@ 000ba128 03d1
.org 0xba12a
	movs r0, #1	@ 000ba12a 0120
.org 0xba12c
	strb r0, [r4, #13]	@ 000ba12c 6073
.org 0xba12e
	strb r1, [r4, #14]	@ 000ba12e a173
.org 0xba130
	strb r1, [r4, #15]	@ 000ba130 e173
.org 0xba132
	pop {r3}	@ 000ba132 08bc
.org 0xba134
	mov r8, r3	@ 000ba134 9846
.org 0xba136
	pop {r4, r5, r6, r7}	@ 000ba136 f0bc
.org 0xba138
	pop {r0}	@ 000ba138 01bc
.org 0xba13a
	bx r0	@ 000ba13a 0047
