@ FUN_080cf098  entry 0x080cf098  size 138
.thumb
.org 0xcf098
FUN_080cf098:
	push {r4, r5, r6, lr}	@ 000cf098 70b5
.org 0xcf09a
	adds r4, r0, #0	@ 000cf09a 041c
.org 0xcf09c
	bl 0x1cff0	@ 000cf09c 4df7a8ff
.org 0xcf0a0
	adds r6, r4, #0	@ 000cf0a0 261c
.org 0xcf0a2
	adds r6, #140	@ 000cf0a2 8c36
.org 0xcf0a4
	ldr r5, [r6, #0]	@ 000cf0a4 3568
.org 0xcf0a6
	movs r0, #4	@ 000cf0a6 0420
.org 0xcf0a8
	ands r5, r0	@ 000cf0a8 0540
.org 0xcf0aa
	cmp r5, #0	@ 000cf0aa 002d
.org 0xcf0ac
	beq.n 0xcf0cc	@ 000cf0ac 0ed0
.org 0xcf0ae
	ldr r1, [pc, #24]	@ 000cf0ae 0649
.org 0xcf0b0
	ldrb r0, [r4, #9]	@ 000cf0b0 607a
.org 0xcf0b2
	lsls r0, r0, #2	@ 000cf0b2 8000
.org 0xcf0b4
	adds r0, r0, r1	@ 000cf0b4 4018
.org 0xcf0b6
	movs r1, #2	@ 000cf0b6 0221
.org 0xcf0b8
	str r1, [r4, #12]	@ 000cf0b8 e160
.org 0xcf0ba
	ldr r0, [r0, #0]	@ 000cf0ba 0068
.org 0xcf0bc
	ldr r0, [r0, #8]	@ 000cf0bc 8068
.org 0xcf0be
	str r0, [r4, #20]	@ 000cf0be 6061
.org 0xcf0c0
	adds r0, r4, #0	@ 000cf0c0 201c
.org 0xcf0c2
	bl 0xcef3c	@ 000cf0c2 fff73bff
.org 0xcf0c6
	b.n 0xcf120	@ 000cf0c6 2be0
.org 0xcf0c8
	.byte 0xf4,0x49,0x86,0x08	@ 000cf0c8 data
.org 0xcf0cc
	ldr r0, [r4, #84]	@ 000cf0cc 606d
.org 0xcf0ce
	ldr r1, [r4, #92]	@ 000cf0ce e16d
.org 0xcf0d0
	adds r0, r0, r1	@ 000cf0d0 4018
.org 0xcf0d2
	str r0, [r4, #84]	@ 000cf0d2 6065
.org 0xcf0d4
	ldr r0, [r4, #88]	@ 000cf0d4 a06d
.org 0xcf0d6
	ldr r1, [r4, #96]	@ 000cf0d6 216e
.org 0xcf0d8
	adds r0, r0, r1	@ 000cf0d8 4018
.org 0xcf0da
	str r0, [r4, #88]	@ 000cf0da a065
.org 0xcf0dc
	adds r1, #64	@ 000cf0dc 4031
.org 0xcf0de
	str r1, [r4, #96]	@ 000cf0de 2166
.org 0xcf0e0
	ldr r0, [pc, #68]	@ 000cf0e0 1148
.org 0xcf0e2
	adds r1, r4, #0	@ 000cf0e2 211c
.org 0xcf0e4
	adds r1, #84	@ 000cf0e4 5431
.org 0xcf0e6
	bl 0x1fb14	@ 000cf0e6 50f715fd
.org 0xcf0ea
	cmp r0, #0	@ 000cf0ea 0028
.org 0xcf0ec
	beq.n 0xcf120	@ 000cf0ec 18d0
.org 0xcf0ee
	ldrb r1, [r4, #10]	@ 000cf0ee a17a
.org 0xcf0f0
	movs r0, #254	@ 000cf0f0 fe20
.org 0xcf0f2
	ands r0, r1	@ 000cf0f2 0840
.org 0xcf0f4
	movs r1, #253	@ 000cf0f4 fd21
.org 0xcf0f6
	ands r0, r1	@ 000cf0f6 0840
.org 0xcf0f8
	strb r0, [r4, #10]	@ 000cf0f8 a072
.org 0xcf0fa
	str r5, [r6, #0]	@ 000cf0fa 3560
.org 0xcf0fc
	adds r0, r4, #0	@ 000cf0fc 201c
.org 0xcf0fe
	adds r0, #144	@ 000cf0fe 9030
.org 0xcf100
	str r5, [r0, #0]	@ 000cf100 0560
.org 0xcf102
	adds r0, #4	@ 000cf102 0430
.org 0xcf104
	strb r5, [r0, #0]	@ 000cf104 0570
.org 0xcf106
	ldrb r1, [r4, #10]	@ 000cf106 a17a
.org 0xcf108
	movs r0, #251	@ 000cf108 fb20
.org 0xcf10a
	ands r0, r1	@ 000cf10a 0840
.org 0xcf10c
	strb r0, [r4, #10]	@ 000cf10c a072
.org 0xcf10e
	ldr r1, [pc, #28]	@ 000cf10e 0749
.org 0xcf110
	ldrb r0, [r4, #9]	@ 000cf110 607a
.org 0xcf112
	lsls r0, r0, #2	@ 000cf112 8000
.org 0xcf114
	adds r0, r0, r1	@ 000cf114 4018
.org 0xcf116
	movs r1, #3	@ 000cf116 0321
.org 0xcf118
	str r1, [r4, #12]	@ 000cf118 e160
.org 0xcf11a
	ldr r0, [r0, #0]	@ 000cf11a 0068
.org 0xcf11c
	ldr r0, [r0, #12]	@ 000cf11c c068
.org 0xcf11e
	str r0, [r4, #20]	@ 000cf11e 6061
.org 0xcf120
	pop {r4, r5, r6}	@ 000cf120 70bc
