@ FUN_080d3988  entry 0x080d3988  size 208
.thumb
.org 0xd3988
FUN_080d3988:
	push {r4, r5, lr}	@ 000d3988 30b5
.org 0xd398a
	adds r4, r0, #0	@ 000d398a 041c
.org 0xd398c
	ldr r5, [r4, #40]	@ 000d398c a56a
.org 0xd398e
	ldrb r0, [r5, #12]	@ 000d398e 287b
.org 0xd3990
	cmp r0, #1	@ 000d3990 0128
.org 0xd3992
	bls.n 0xd39a0	@ 000d3992 05d9
.org 0xd3994
	ldrb r1, [r4, #18]	@ 000d3994 a17c
.org 0xd3996
	cmp r1, #15	@ 000d3996 0f29
.org 0xd3998
	bls.n 0xd39a0	@ 000d3998 02d9
.org 0xd399a
	movs r0, #15	@ 000d399a 0f20
.org 0xd399c
	ands r0, r1	@ 000d399c 0840
.org 0xd399e
	strb r0, [r4, #18]	@ 000d399e a074
.org 0xd39a0
	ldrb r0, [r4, #18]	@ 000d39a0 a07c
.org 0xd39a2
	subs r1, r0, #1	@ 000d39a2 411e
.org 0xd39a4
	strb r1, [r4, #18]	@ 000d39a4 a174
.org 0xd39a6
	adds r0, r4, #0	@ 000d39a6 201c
.org 0xd39a8
	adds r0, #124	@ 000d39a8 7c30
.org 0xd39aa
	ldrb r0, [r0, #0]	@ 000d39aa 0078
.org 0xd39ac
	lsls r2, r0, #24	@ 000d39ac 0206
.org 0xd39ae
	lsls r0, r1, #24	@ 000d39ae 0806
.org 0xd39b0
	lsrs r3, r0, #24	@ 000d39b0 030e
.org 0xd39b2
	lsrs r0, r2, #25	@ 000d39b2 500e
.org 0xd39b4
	cmp r3, r0	@ 000d39b4 8342
.org 0xd39b6
	bhi.n 0xd39ce	@ 000d39b6 0ad8
.org 0xd39b8
	lsrs r0, r2, #26	@ 000d39b8 900e
.org 0xd39ba
	cmp r3, r0	@ 000d39ba 8342
.org 0xd39bc
	bls.n 0xd39c6	@ 000d39bc 03d9
.org 0xd39be
	movs r0, #1	@ 000d39be 0120
.org 0xd39c0
	ands r0, r1	@ 000d39c0 0840
.org 0xd39c2
	cmp r0, #0	@ 000d39c2 0028
.org 0xd39c4
	beq.n 0xd39ce	@ 000d39c4 03d0
.org 0xd39c6
	movs r0, #3	@ 000d39c6 0320
.org 0xd39c8
	ands r1, r0	@ 000d39c8 0140
.org 0xd39ca
	cmp r1, #0	@ 000d39ca 0029
.org 0xd39cc
	bne.n 0xd39d6	@ 000d39cc 03d1
.org 0xd39ce
	ldrb r1, [r4, #10]	@ 000d39ce a17a
.org 0xd39d0
	movs r0, #1	@ 000d39d0 0120
.org 0xd39d2
	orrs r0, r1	@ 000d39d2 0843
.org 0xd39d4
	b.n 0xd39dc	@ 000d39d4 02e0
.org 0xd39d6
	ldrb r1, [r4, #10]	@ 000d39d6 a17a
.org 0xd39d8
	movs r0, #254	@ 000d39d8 fe20
.org 0xd39da
	ands r0, r1	@ 000d39da 0840
.org 0xd39dc
	strb r0, [r4, #10]	@ 000d39dc a072
.org 0xd39de
	ldrb r1, [r5, #10]	@ 000d39de a97a
.org 0xd39e0
	movs r0, #64	@ 000d39e0 4020
.org 0xd39e2
	ands r0, r1	@ 000d39e2 0840
.org 0xd39e4
	cmp r0, #0	@ 000d39e4 0028
.org 0xd39e6
	beq.n 0xd39f0	@ 000d39e6 03d0
.org 0xd39e8
	ldr r0, [r5, #84]	@ 000d39e8 686d
.org 0xd39ea
	str r0, [r4, #84]	@ 000d39ea 6065
.org 0xd39ec
	ldr r0, [r5, #88]	@ 000d39ec a86d
.org 0xd39ee
	b.n 0xd3a2c	@ 000d39ee 1de0
.org 0xd39f0
	movs r0, #48	@ 000d39f0 3020
.org 0xd39f2
	ands r0, r1	@ 000d39f2 0840
.org 0xd39f4
	lsrs r0, r0, #4	@ 000d39f4 0009
.org 0xd39f6
	movs r1, #1	@ 000d39f6 0121
.org 0xd39f8
	ands r0, r1	@ 000d39f8 0840
.org 0xd39fa
	cmp r0, #0	@ 000d39fa 0028
.org 0xd39fc
	beq.n 0xd3a06	@ 000d39fc 03d0
.org 0xd39fe
	ldr r0, [r5, #84]	@ 000d39fe 686d
.org 0xd3a00
	ldr r1, [r4, #116]	@ 000d3a00 616f
.org 0xd3a02
	subs r0, r0, r1	@ 000d3a02 401a
.org 0xd3a04
	b.n 0xd3a0c	@ 000d3a04 02e0
.org 0xd3a06
	ldr r0, [r5, #84]	@ 000d3a06 686d
.org 0xd3a08
	ldr r1, [r4, #116]	@ 000d3a08 616f
.org 0xd3a0a
	adds r0, r0, r1	@ 000d3a0a 4018
.org 0xd3a0c
	str r0, [r4, #84]	@ 000d3a0c 6065
.org 0xd3a0e
	ldrb r0, [r5, #10]	@ 000d3a0e a87a
.org 0xd3a10
	movs r1, #48	@ 000d3a10 3021
.org 0xd3a12
	ands r1, r0	@ 000d3a12 0140
.org 0xd3a14
	lsrs r1, r1, #4	@ 000d3a14 0909
.org 0xd3a16
	movs r0, #2	@ 000d3a16 0220
.org 0xd3a18
	ands r1, r0	@ 000d3a18 0140
.org 0xd3a1a
	cmp r1, #0	@ 000d3a1a 0029
.org 0xd3a1c
	beq.n 0xd3a26	@ 000d3a1c 03d0
.org 0xd3a1e
	ldr r0, [r5, #88]	@ 000d3a1e a86d
.org 0xd3a20
	ldr r1, [r4, #120]	@ 000d3a20 a16f
.org 0xd3a22
	subs r0, r0, r1	@ 000d3a22 401a
.org 0xd3a24
	b.n 0xd3a2c	@ 000d3a24 02e0
.org 0xd3a26
	ldr r0, [r5, #88]	@ 000d3a26 a86d
.org 0xd3a28
	ldr r1, [r4, #120]	@ 000d3a28 a16f
.org 0xd3a2a
	adds r0, r0, r1	@ 000d3a2a 4018
.org 0xd3a2c
	str r0, [r4, #88]	@ 000d3a2c a065
.org 0xd3a2e
	adds r0, r4, #0	@ 000d3a2e 201c
.org 0xd3a30
	bl 0x1cff0	@ 000d3a30 49f7defa
.org 0xd3a34
	ldrb r0, [r4, #18]	@ 000d3a34 a07c
.org 0xd3a36
	cmp r0, #0	@ 000d3a36 0028
.org 0xd3a38
	beq.n 0xd3a40	@ 000d3a38 02d0
.org 0xd3a3a
	ldrb r0, [r5, #12]	@ 000d3a3a 287b
.org 0xd3a3c
	cmp r0, #2	@ 000d3a3c 0228
.org 0xd3a3e
	bls.n 0xd3a52	@ 000d3a3e 08d9
.org 0xd3a40
	ldr r1, [pc, #20]	@ 000d3a40 0549
.org 0xd3a42
	ldrb r0, [r4, #9]	@ 000d3a42 607a
.org 0xd3a44
	lsls r0, r0, #2	@ 000d3a44 8000
.org 0xd3a46
	adds r0, r0, r1	@ 000d3a46 4018
.org 0xd3a48
	movs r1, #2	@ 000d3a48 0221
.org 0xd3a4a
	str r1, [r4, #12]	@ 000d3a4a e160
.org 0xd3a4c
	ldr r0, [r0, #0]	@ 000d3a4c 0068
.org 0xd3a4e
	ldr r0, [r0, #8]	@ 000d3a4e 8068
.org 0xd3a50
	str r0, [r4, #20]	@ 000d3a50 6061
.org 0xd3a52
	pop {r4, r5}	@ 000d3a52 30bc
.org 0xd3a54
	pop {r0}	@ 000d3a54 01bc
.org 0xd3a56
	bx r0	@ 000d3a56 0047
