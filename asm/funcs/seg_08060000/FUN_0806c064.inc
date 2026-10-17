@ FUN_0806c064  entry 0x0806c064  size 198
.thumb
.org 0x6c064
FUN_0806c064:
	push {r4, r5, lr}	@ 0006c064 30b5
.org 0x6c066
	adds r4, r0, #0	@ 0006c066 041c
.org 0x6c068
	ldrb r0, [r4, #14]	@ 0006c068 a07b
.org 0x6c06a
	cmp r0, #0	@ 0006c06a 0028
.org 0x6c06c
	bne.n 0x6c0b6	@ 0006c06c 23d1
.org 0x6c06e
	ldr r1, [pc, #48]	@ 0006c06e 0c49
.org 0x6c070
	adds r0, r4, #0	@ 0006c070 201c
.org 0x6c072
	bl 0x1cf00	@ 0006c072 b0f745ff
.org 0x6c076
	movs r0, #210	@ 0006c076 d220
.org 0x6c078
	bl 0x2b10	@ 0006c078 96f74afd
.org 0x6c07c
	adds r0, r4, #0	@ 0006c07c 201c
.org 0x6c07e
	adds r0, #116	@ 0006c07e 7430
.org 0x6c080
	ldr r1, [pc, #32]	@ 0006c080 0849
.org 0x6c082
	bl 0x5784	@ 0006c082 99f77ffb
.org 0x6c086
	movs r0, #192	@ 0006c086 c020
.org 0x6c088
	lsls r0, r0, #2	@ 0006c088 8000
.org 0x6c08a
	str r0, [r4, #92]	@ 0006c08a e065
.org 0x6c08c
	movs r0, #128	@ 0006c08c 8020
.org 0x6c08e
	str r0, [r4, #100]	@ 0006c08e 6066
.org 0x6c090
	ldrb r1, [r4, #10]	@ 0006c090 a17a
.org 0x6c092
	movs r0, #16	@ 0006c092 1020
.org 0x6c094
	ands r0, r1	@ 0006c094 0840
.org 0x6c096
	cmp r0, #0	@ 0006c096 0028
.org 0x6c098
	beq.n 0x6c0a8	@ 0006c098 06d0
.org 0x6c09a
	movs r0, #30	@ 0006c09a 1e20
.org 0x6c09c
	b.n 0x6c0aa	@ 0006c09c 05e0
.org 0x6c09e
	.byte 0x00	@ 0006c09e data
.org 0x6c09f
	.byte 0x00	@ 0006c09f data
.org 0x6c0a0
	.byte 0x10,0xaa,0x00,0x00	@ 0006c0a0 data
.org 0x6c0a4
	.byte 0x9c,0xc2,0x85,0x08	@ 0006c0a4 data
.org 0x6c0a8
	movs r0, #98	@ 0006c0a8 6220
.org 0x6c0aa
	strb r0, [r4, #18]	@ 0006c0aa a074
.org 0x6c0ac
	movs r0, #0	@ 0006c0ac 0020
.org 0x6c0ae
	strb r0, [r4, #15]	@ 0006c0ae e073
.org 0x6c0b0
	ldrb r0, [r4, #14]	@ 0006c0b0 a07b
.org 0x6c0b2
	adds r0, #1	@ 0006c0b2 0130
.org 0x6c0b4
	strb r0, [r4, #14]	@ 0006c0b4 a073
.org 0x6c0b6
	adds r0, r4, #0	@ 0006c0b6 201c
.org 0x6c0b8
	bl 0x1cff0	@ 0006c0b8 b0f79aff
.org 0x6c0bc
	ldr r5, [pc, #116]	@ 0006c0bc 1d4d
.org 0x6c0be
	ldrb r0, [r4, #18]	@ 0006c0be a07c
.org 0x6c0c0
	adds r0, #64	@ 0006c0c0 4030
.org 0x6c0c2
	lsls r0, r0, #24	@ 0006c0c2 0006
.org 0x6c0c4
	lsrs r0, r0, #23	@ 0006c0c4 c00d
.org 0x6c0c6
	adds r0, r0, r5	@ 0006c0c6 4019
.org 0x6c0c8
	movs r1, #0	@ 0006c0c8 0021
.org 0x6c0ca
	ldrsh r0, [r0, r1]	@ 0006c0ca 405e
.org 0x6c0cc
	ldr r2, [r4, #92]	@ 0006c0cc e26d
.org 0x6c0ce
	adds r1, r0, #0	@ 0006c0ce 011c
.org 0x6c0d0
	muls r1, r2	@ 0006c0d0 5143
.org 0x6c0d2
	asrs r1, r1, #8	@ 0006c0d2 0912
.org 0x6c0d4
	ldr r0, [r4, #84]	@ 0006c0d4 606d
.org 0x6c0d6
	adds r0, r0, r1	@ 0006c0d6 4018
.org 0x6c0d8
	str r0, [r4, #84]	@ 0006c0d8 6065
.org 0x6c0da
	ldrb r0, [r4, #18]	@ 0006c0da a07c
.org 0x6c0dc
	lsls r0, r0, #1	@ 0006c0dc 4000
.org 0x6c0de
	adds r0, r0, r5	@ 0006c0de 4019
.org 0x6c0e0
	movs r1, #0	@ 0006c0e0 0021
.org 0x6c0e2
	ldrsh r0, [r0, r1]	@ 0006c0e2 405e
.org 0x6c0e4
	adds r1, r0, #0	@ 0006c0e4 011c
.org 0x6c0e6
	muls r1, r2	@ 0006c0e6 5143
.org 0x6c0e8
	asrs r1, r1, #8	@ 0006c0e8 0912
.org 0x6c0ea
	ldr r0, [r4, #88]	@ 0006c0ea a06d
.org 0x6c0ec
	adds r0, r0, r1	@ 0006c0ec 4018
.org 0x6c0ee
	str r0, [r4, #88]	@ 0006c0ee a065
.org 0x6c0f0
	ldr r0, [pc, #68]	@ 0006c0f0 1148
.org 0x6c0f2
	cmp r2, r0	@ 0006c0f2 8242
.org 0x6c0f4
	bgt.n 0x6c0fc	@ 0006c0f4 02dc
.org 0x6c0f6
	ldr r0, [r4, #100]	@ 0006c0f6 606e
.org 0x6c0f8
	adds r0, r2, r0	@ 0006c0f8 1018
.org 0x6c0fa
	str r0, [r4, #92]	@ 0006c0fa e065
.org 0x6c0fc
	adds r0, r4, #0	@ 0006c0fc 201c
.org 0x6c0fe
	adds r0, #180	@ 0006c0fe b430
.org 0x6c100
	ldr r1, [r4, #88]	@ 0006c100 a16d
.org 0x6c102
	ldr r0, [r0, #4]	@ 0006c102 4068
.org 0x6c104
	cmp r1, r0	@ 0006c104 8142
.org 0x6c106
	ble.n 0x6c12e	@ 0006c106 12dd
.org 0x6c108
	str r0, [r4, #88]	@ 0006c108 a065
.org 0x6c10a
	movs r0, #211	@ 0006c10a d320
.org 0x6c10c
	bl 0x2b10	@ 0006c10c 96f700fd
.org 0x6c110
	ldrb r0, [r4, #18]	@ 0006c110 a07c
.org 0x6c112
	adds r0, #64	@ 0006c112 4030
.org 0x6c114
	lsls r0, r0, #24	@ 0006c114 0006
.org 0x6c116
	lsrs r0, r0, #23	@ 0006c116 c00d
.org 0x6c118
	adds r0, r0, r5	@ 0006c118 4019
.org 0x6c11a
	movs r2, #0	@ 0006c11a 0022
.org 0x6c11c
	ldrsh r1, [r0, r2]	@ 0006c11c 815e
.org 0x6c11e
	ldr r0, [r4, #92]	@ 0006c11e e06d
.org 0x6c120
	muls r0, r1	@ 0006c120 4843
.org 0x6c122
	asrs r0, r0, #8	@ 0006c122 0012
.org 0x6c124
	str r0, [r4, #92]	@ 0006c124 e065
.org 0x6c126
	movs r1, #0	@ 0006c126 0021
.org 0x6c128
	movs r0, #18	@ 0006c128 1220
