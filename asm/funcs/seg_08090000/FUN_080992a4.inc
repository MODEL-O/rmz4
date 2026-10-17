@ FUN_080992a4  entry 0x080992a4  size 126
.thumb
.org 0x992a4
FUN_080992a4:
	push {r4, lr}	@ 000992a4 10b5
.org 0x992a6
	adds r4, r0, #0	@ 000992a6 041c
.org 0x992a8
	ldrb r0, [r4, #14]	@ 000992a8 a07b
.org 0x992aa
	cmp r0, #0	@ 000992aa 0028
.org 0x992ac
	bne.n 0x992c6	@ 000992ac 0bd1
.org 0x992ae
	movs r1, #208	@ 000992ae d021
.org 0x992b0
	lsls r1, r1, #7	@ 000992b0 c901
.org 0x992b2
	adds r0, r4, #0	@ 000992b2 201c
.org 0x992b4
	bl 0x1cf00	@ 000992b4 83f724fe
.org 0x992b8
	ldr r0, [pc, #104]	@ 000992b8 1a48
.org 0x992ba
	str r0, [r4, #96]	@ 000992ba 2066
.org 0x992bc
	movs r0, #24	@ 000992bc 1820
.org 0x992be
	strb r0, [r4, #18]	@ 000992be a074
.org 0x992c0
	ldrb r0, [r4, #14]	@ 000992c0 a07b
.org 0x992c2
	adds r0, #1	@ 000992c2 0130
.org 0x992c4
	strb r0, [r4, #14]	@ 000992c4 a073
.org 0x992c6
	adds r0, r4, #0	@ 000992c6 201c
.org 0x992c8
	bl 0x1cff0	@ 000992c8 83f792fe
.org 0x992cc
	ldr r0, [r4, #88]	@ 000992cc a06d
.org 0x992ce
	ldr r1, [r4, #96]	@ 000992ce 216e
.org 0x992d0
	adds r0, r0, r1	@ 000992d0 4018
.org 0x992d2
	str r0, [r4, #88]	@ 000992d2 a065
.org 0x992d4
	ldr r0, [pc, #80]	@ 000992d4 1448
.org 0x992d6
	adds r1, r4, #0	@ 000992d6 211c
.org 0x992d8
	adds r1, #84	@ 000992d8 5431
.org 0x992da
	bl 0x1fb14	@ 000992da 86f71bfc
.org 0x992de
	movs r1, #128	@ 000992de 8021
.org 0x992e0
	lsls r1, r1, #6	@ 000992e0 8901
.org 0x992e2
	cmp r0, r1	@ 000992e2 8842
.org 0x992e4
	bls.n 0x9931c	@ 000992e4 1ad9
.org 0x992e6
	ldrb r1, [r4, #10]	@ 000992e6 a17a
.org 0x992e8
	movs r0, #254	@ 000992e8 fe20
.org 0x992ea
	ands r0, r1	@ 000992ea 0840
.org 0x992ec
	movs r2, #0	@ 000992ec 0022
.org 0x992ee
	movs r1, #253	@ 000992ee fd21
.org 0x992f0
	ands r0, r1	@ 000992f0 0840
.org 0x992f2
	strb r0, [r4, #10]	@ 000992f2 a072
.org 0x992f4
	adds r0, r4, #0	@ 000992f4 201c
.org 0x992f6
	adds r0, #140	@ 000992f6 8c30
.org 0x992f8
	str r2, [r0, #0]	@ 000992f8 0260
.org 0x992fa
	adds r0, #4	@ 000992fa 0430
.org 0x992fc
	str r2, [r0, #0]	@ 000992fc 0260
.org 0x992fe
	adds r0, #4	@ 000992fe 0430
.org 0x99300
	strb r2, [r0, #0]	@ 00099300 0270
.org 0x99302
	ldrb r1, [r4, #10]	@ 00099302 a17a
.org 0x99304
	movs r0, #251	@ 00099304 fb20
.org 0x99306
	ands r0, r1	@ 00099306 0840
.org 0x99308
	strb r0, [r4, #10]	@ 00099308 a072
.org 0x9930a
	ldr r1, [pc, #32]	@ 0009930a 0849
.org 0x9930c
	ldrb r0, [r4, #9]	@ 0009930c 607a
.org 0x9930e
	lsls r0, r0, #2	@ 0009930e 8000
.org 0x99310
	adds r0, r0, r1	@ 00099310 4018
.org 0x99312
	movs r1, #3	@ 00099312 0321
.org 0x99314
	str r1, [r4, #12]	@ 00099314 e160
.org 0x99316
	ldr r0, [r0, #0]	@ 00099316 0068
.org 0x99318
	ldr r0, [r0, #12]	@ 00099318 c068
.org 0x9931a
	str r0, [r4, #20]	@ 0009931a 6061
.org 0x9931c
	pop {r4}	@ 0009931c 10bc
.org 0x9931e
	pop {r0}	@ 0009931e 01bc
.org 0x99320
	bx r0	@ 00099320 0047
