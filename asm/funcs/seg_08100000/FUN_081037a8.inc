@ FUN_081037a8  entry 0x081037a8  size 120
.thumb
.org 0x1037a8
FUN_081037a8:
	push {r4, r5, r6, lr}	@ 001037a8 70b5
.org 0x1037aa
	adds r2, r0, #0	@ 001037aa 021c
.org 0x1037ac
	ldr r1, [r2, #20]	@ 001037ac 5169
.org 0x1037ae
	movs r6, #1	@ 001037ae 0126
.org 0x1037b0
	adds r0, r1, #0	@ 001037b0 081c
.org 0x1037b2
	ands r0, r6	@ 001037b2 3040
.org 0x1037b4
	cmp r0, #0	@ 001037b4 0028
.org 0x1037b6
	beq.n 0x10381a	@ 001037b6 30d0
.org 0x1037b8
	ldr r5, [r2, #44]	@ 001037b8 d56a
.org 0x1037ba
	movs r0, #128	@ 001037ba 8020
.org 0x1037bc
	lsls r0, r0, #10	@ 001037bc 8002
.org 0x1037be
	ands r1, r0	@ 001037be 0140
.org 0x1037c0
	cmp r1, #0	@ 001037c0 0029
.org 0x1037c2
	beq.n 0x10381a	@ 001037c2 2ad0
.org 0x1037c4
	adds r0, r5, #0	@ 001037c4 281c
.org 0x1037c6
	adds r0, #180	@ 001037c6 b430
.org 0x1037c8
	strb r6, [r0, #0]	@ 001037c8 0670
.org 0x1037ca
	movs r0, #196	@ 001037ca c420
.org 0x1037cc
	lsls r0, r0, #1	@ 001037cc 4000
.org 0x1037ce
	bl 0x2b10	@ 001037ce fff69ff9
.org 0x1037d2
	ldr r1, [pc, #76]	@ 001037d2 1349
.org 0x1037d4
	ldr r4, [pc, #76]	@ 001037d4 134c
.org 0x1037d6
	ldrb r0, [r5, #17]	@ 001037d6 687c
.org 0x1037d8
	adds r0, r0, r4	@ 001037d8 0019
.org 0x1037da
	ldrb r0, [r0, #0]	@ 001037da 0078
.org 0x1037dc
	lsrs r2, r0, #3	@ 001037dc c208
.org 0x1037de
	adds r1, #4	@ 001037de 0431
.org 0x1037e0
	adds r2, r2, r1	@ 001037e0 5218
.org 0x1037e2
	movs r3, #7	@ 001037e2 0723
.org 0x1037e4
	adds r1, r3, #0	@ 001037e4 191c
.org 0x1037e6
	ands r1, r0	@ 001037e6 0140
.org 0x1037e8
	adds r0, r6, #0	@ 001037e8 301c
.org 0x1037ea
	lsls r0, r1	@ 001037ea 8840
.org 0x1037ec
	ldrb r1, [r2, #0]	@ 001037ec 1178
.org 0x1037ee
	orrs r0, r1	@ 001037ee 0843
.org 0x1037f0
	strb r0, [r2, #0]	@ 001037f0 1070
.org 0x1037f2
	ldr r1, [pc, #52]	@ 001037f2 0d49
.org 0x1037f4
	ldrb r0, [r5, #17]	@ 001037f4 687c
.org 0x1037f6
	adds r0, r0, r4	@ 001037f6 0019
.org 0x1037f8
	ldrb r0, [r0, #0]	@ 001037f8 0078
.org 0x1037fa
	lsrs r2, r0, #3	@ 001037fa c208
.org 0x1037fc
	adds r2, r2, r1	@ 001037fc 5218
.org 0x1037fe
	ands r3, r0	@ 001037fe 0340
.org 0x103800
	adds r0, r6, #0	@ 00103800 301c
.org 0x103802
	lsls r0, r3	@ 00103802 9840
.org 0x103804
	ldrb r1, [r2, #0]	@ 00103804 1178
.org 0x103806
	orrs r0, r1	@ 00103806 0843
.org 0x103808
	strb r0, [r2, #0]	@ 00103808 1070
.org 0x10380a
	ldr r0, [pc, #32]	@ 0010380a 0848
.org 0x10380c
	ldr r0, [r0, #0]	@ 0010380c 0068
.org 0x10380e
	cmp r0, #0	@ 0010380e 0028
.org 0x103810
	beq.n 0x10381a	@ 00103810 03d0
.org 0x103812
	movs r1, #8	@ 00103812 0821
.org 0x103814
	movs r2, #17	@ 00103814 1122
.org 0x103816
	bl 0x3a578	@ 00103816 36f7affe
.org 0x10381a
	pop {r4, r5, r6}	@ 0010381a 70bc
.org 0x10381c
	pop {r0}	@ 0010381c 01bc
.org 0x10381e
	bx r0	@ 0010381e 0047
