@ FUN_080a47a4  entry 0x080a47a4  size 98
.thumb
.org 0xa47a4
FUN_080a47a4:
	push {r4, r5, r6, r7, lr}	@ 000a47a4 f0b5
.org 0xa47a6
	adds r5, r0, #0	@ 000a47a6 051c
.org 0xa47a8
	adds r6, r1, #0	@ 000a47a8 0e1c
.org 0xa47aa
	lsls r2, r2, #24	@ 000a47aa 1206
.org 0xa47ac
	lsrs r7, r2, #24	@ 000a47ac 170e
.org 0xa47ae
	ldr r0, [pc, #88]	@ 000a47ae 1648
.org 0xa47b0
	ldr r0, [r0, #0]	@ 000a47b0 0068
.org 0xa47b2
	bl 0x5500	@ 000a47b2 60f7a5fe
.org 0xa47b6
	adds r4, r0, #0	@ 000a47b6 041c
.org 0xa47b8
	cmp r4, #0	@ 000a47b8 002c
.org 0xa47ba
	beq.n 0xa47fe	@ 000a47ba 20d0
.org 0xa47bc
	adds r1, r4, #0	@ 000a47bc 211c
.org 0xa47be
	adds r1, #37	@ 000a47be 2531
.org 0xa47c0
	movs r3, #0	@ 000a47c0 0023
.org 0xa47c2
	movs r0, #24	@ 000a47c2 1820
.org 0xa47c4
	strb r0, [r1, #0]	@ 000a47c4 0870
.org 0xa47c6
	ldr r0, [pc, #68]	@ 000a47c6 1148
.org 0xa47c8
	movs r1, #60	@ 000a47c8 3c21
.org 0xa47ca
	strb r1, [r4, #9]	@ 000a47ca 6172
.org 0xa47cc
	adds r0, #240	@ 000a47cc f030
.org 0xa47ce
	ldr r0, [r0, #0]	@ 000a47ce 0068
.org 0xa47d0
	ldr r0, [r0, #0]	@ 000a47d0 0068
.org 0xa47d2
	str r0, [r4, #20]	@ 000a47d2 6061
.org 0xa47d4
	movs r2, #0	@ 000a47d4 0022
.org 0xa47d6
	strh r3, [r4, #32]	@ 000a47d6 2384
.org 0xa47d8
	adds r0, r4, #0	@ 000a47d8 201c
.org 0xa47da
	adds r0, #34	@ 000a47da 2230
.org 0xa47dc
	strb r2, [r0, #0]	@ 000a47dc 0270
.org 0xa47de
	ldrb r1, [r4, #11]	@ 000a47de e17a
.org 0xa47e0
	movs r0, #16	@ 000a47e0 1020
.org 0xa47e2
	orrs r0, r1	@ 000a47e2 0843
.org 0xa47e4
	strb r0, [r4, #11]	@ 000a47e4 e072
.org 0xa47e6
	ldrb r0, [r4, #28]	@ 000a47e6 207f
.org 0xa47e8
	strb r0, [r4, #29]	@ 000a47e8 6077
.org 0xa47ea
	ldr r0, [r5, #0]	@ 000a47ea 2868
.org 0xa47ec
	ldr r1, [r5, #4]	@ 000a47ec 6968
.org 0xa47ee
	str r0, [r4, #84]	@ 000a47ee 6065
.org 0xa47f0
	str r1, [r4, #88]	@ 000a47f0 a165
.org 0xa47f2
	ldr r0, [r6, #0]	@ 000a47f2 3068
.org 0xa47f4
	ldr r1, [r6, #4]	@ 000a47f4 7168
.org 0xa47f6
	str r0, [r4, #92]	@ 000a47f6 e065
.org 0xa47f8
	str r1, [r4, #96]	@ 000a47f8 2166
.org 0xa47fa
	strb r2, [r4, #16]	@ 000a47fa 2274
.org 0xa47fc
	strb r7, [r4, #17]	@ 000a47fc 6774
.org 0xa47fe
	adds r0, r4, #0	@ 000a47fe 201c
.org 0xa4800
	pop {r4, r5, r6, r7}	@ 000a4800 f0bc
.org 0xa4802
	pop {r1}	@ 000a4802 02bc
.org 0xa4804
	bx r1	@ 000a4804 0847
