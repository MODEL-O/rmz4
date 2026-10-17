@ FUN_0802788c  entry 0x0802788c  size 94
.thumb
.org 0x2788c
FUN_0802788c:
	push {r4, r5, lr}	@ 0002788c 30b5
.org 0x2788e
	adds r4, r0, #0	@ 0002788e 041c
.org 0x27890
	adds r1, r4, #0	@ 00027890 211c
.org 0x27892
	adds r1, #212	@ 00027892 d431
.org 0x27894
	ldr r0, [r1, #0]	@ 00027894 0868
.org 0x27896
	cmp r0, #0	@ 00027896 0028
.org 0x27898
	beq.n 0x278ac	@ 00027898 08d0
.org 0x2789a
	subs r0, #1	@ 0002789a 0138
.org 0x2789c
	str r0, [r1, #0]	@ 0002789c 0860
.org 0x2789e
	movs r0, #0	@ 0002789e 0020
.org 0x278a0
	b.n 0x278e4	@ 000278a0 20e0
.org 0x278a2
	ldr r0, [r4, #12]	@ 000278a2 e068
.org 0x278a4
	adds r0, #8	@ 000278a4 0830
.org 0x278a6
	str r0, [r4, #12]	@ 000278a6 e060
.org 0x278a8
	movs r0, #0	@ 000278a8 0020
.org 0x278aa
	b.n 0x278e4	@ 000278aa 1be0
.org 0x278ac
	ldr r2, [r4, #12]	@ 000278ac e268
.org 0x278ae
	ldrb r0, [r2, #0]	@ 000278ae 1078
.org 0x278b0
	cmp r0, #255	@ 000278b0 ff28
.org 0x278b2
	beq.n 0x278d8	@ 000278b2 11d0
.org 0x278b4
	ldr r5, [pc, #52]	@ 000278b4 0d4d
.org 0x278b6
	ldrb r0, [r2, #0]	@ 000278b6 1078
.org 0x278b8
	lsls r0, r0, #2	@ 000278b8 8000
.org 0x278ba
	adds r0, r0, r5	@ 000278ba 4019
.org 0x278bc
	ldr r1, [r0, #0]	@ 000278bc 0168
.org 0x278be
	adds r0, r4, #0	@ 000278be 201c
.org 0x278c0
	bl 0x128f80	@ 000278c0 01f15efb
.org 0x278c4
	cmp r0, #0	@ 000278c4 0028
.org 0x278c6
	bne.n 0x278a2	@ 000278c6 ecd1
.org 0x278c8
	ldr r1, [r4, #12]	@ 000278c8 e168
.org 0x278ca
	adds r0, r1, #0	@ 000278ca 081c
.org 0x278cc
	adds r0, #8	@ 000278cc 0830
.org 0x278ce
	str r0, [r4, #12]	@ 000278ce e060
.org 0x278d0
	adds r2, r0, #0	@ 000278d0 021c
.org 0x278d2
	ldrb r0, [r1, #8]	@ 000278d2 087a
.org 0x278d4
	cmp r0, #255	@ 000278d4 ff28
.org 0x278d6
	bne.n 0x278b6	@ 000278d6 eed1
.org 0x278d8
	ldr r2, [pc, #20]	@ 000278d8 054a
.org 0x278da
	ldrb r1, [r2, #18]	@ 000278da 917c
.org 0x278dc
	movs r0, #254	@ 000278dc fe20
.org 0x278de
	ands r0, r1	@ 000278de 0840
.org 0x278e0
	strb r0, [r2, #18]	@ 000278e0 9074
.org 0x278e2
	movs r0, #1	@ 000278e2 0120
.org 0x278e4
	pop {r4, r5}	@ 000278e4 30bc
.org 0x278e6
	pop {r1}	@ 000278e6 02bc
.org 0x278e8
	bx r1	@ 000278e8 0847
