@ FUN_0806919c  entry 0x0806919c  size 142
.thumb
.org 0x6919c
FUN_0806919c:
	push {r4, r5, r6, r7, lr}	@ 0006919c f0b5
.org 0x6919e
	mov r7, r8	@ 0006919e 4746
.org 0x691a0
	push {r7}	@ 000691a0 80b4
.org 0x691a2
	adds r5, r0, #0	@ 000691a2 051c
.org 0x691a4
	adds r0, #180	@ 000691a4 b430
.org 0x691a6
	ldr r6, [r0, #0]	@ 000691a6 0668
.org 0x691a8
	adds r0, #4	@ 000691a8 0430
.org 0x691aa
	ldr r7, [r0, #0]	@ 000691aa 0768
.org 0x691ac
	adds r0, #4	@ 000691ac 0430
.org 0x691ae
	ldr r0, [r0, #0]	@ 000691ae 0068
.org 0x691b0
	mov r8, r0	@ 000691b0 8046
.org 0x691b2
	adds r0, r5, #0	@ 000691b2 281c
.org 0x691b4
	adds r0, #192	@ 000691b4 c030
.org 0x691b6
	ldr r2, [r0, #0]	@ 000691b6 0268
.org 0x691b8
	ldrb r0, [r5, #15]	@ 000691b8 e87b
.org 0x691ba
	cmp r0, #0	@ 000691ba 0028
.org 0x691bc
	bne.n 0x691ea	@ 000691bc 15d1
.org 0x691be
	ldrb r1, [r2, #10]	@ 000691be 917a
.org 0x691c0
	movs r0, #254	@ 000691c0 fe20
.org 0x691c2
	ands r0, r1	@ 000691c2 0840
.org 0x691c4
	strb r0, [r2, #10]	@ 000691c4 9072
.org 0x691c6
	ldr r4, [pc, #100]	@ 000691c6 194c
.org 0x691c8
	ldrh r1, [r4, #0]	@ 000691c8 2188
.org 0x691ca
	adds r0, r6, #0	@ 000691ca 301c
.org 0x691cc
	bl 0x1cf00	@ 000691cc b3f798fe
.org 0x691d0
	ldrh r1, [r4, #8]	@ 000691d0 2189
.org 0x691d2
	adds r0, r7, #0	@ 000691d2 381c
.org 0x691d4
	bl 0x1cf00	@ 000691d4 b3f794fe
.org 0x691d8
	ldrh r1, [r4, #24]	@ 000691d8 218b
.org 0x691da
	mov r0, r8	@ 000691da 4046
.org 0x691dc
	bl 0x1cf00	@ 000691dc b3f790fe
.org 0x691e0
	movs r0, #32	@ 000691e0 2020
.org 0x691e2
	strb r0, [r5, #18]	@ 000691e2 a874
.org 0x691e4
	ldrb r0, [r5, #15]	@ 000691e4 e87b
.org 0x691e6
	adds r0, #1	@ 000691e6 0130
.org 0x691e8
	strb r0, [r5, #15]	@ 000691e8 e873
.org 0x691ea
	adds r0, r6, #0	@ 000691ea 301c
.org 0x691ec
	bl 0x1cff0	@ 000691ec b3f700ff
.org 0x691f0
	adds r0, r7, #0	@ 000691f0 381c
.org 0x691f2
	bl 0x1cff0	@ 000691f2 b3f7fdfe
.org 0x691f6
	mov r0, r8	@ 000691f6 4046
.org 0x691f8
	bl 0x1cff0	@ 000691f8 b3f7fafe
.org 0x691fc
	ldrb r0, [r5, #18]	@ 000691fc a87c
.org 0x691fe
	cmp r0, #0	@ 000691fe 0028
.org 0x69200
	beq.n 0x69206	@ 00069200 01d0
.org 0x69202
	subs r0, #1	@ 00069202 0138
.org 0x69204
	strb r0, [r5, #18]	@ 00069204 a874
.org 0x69206
	ldr r0, [pc, #40]	@ 00069206 0a48
.org 0x69208
	ldrh r1, [r0, #8]	@ 00069208 0189
.org 0x6920a
	movs r0, #8	@ 0006920a 0820
.org 0x6920c
	ands r0, r1	@ 0006920c 0840
.org 0x6920e
	cmp r0, #0	@ 0006920e 0028
.org 0x69210
	bne.n 0x69220	@ 00069210 06d1
.org 0x69212
	ldrb r1, [r5, #18]	@ 00069212 a97c
.org 0x69214
	cmp r1, #0	@ 00069214 0029
.org 0x69216
	bne.n 0x69220	@ 00069216 03d1
.org 0x69218
	movs r0, #1	@ 00069218 0120
.org 0x6921a
	strb r0, [r5, #13]	@ 0006921a 6873
.org 0x6921c
	strb r1, [r5, #14]	@ 0006921c a973
.org 0x6921e
	strb r1, [r5, #15]	@ 0006921e e973
.org 0x69220
	pop {r3}	@ 00069220 08bc
.org 0x69222
	mov r8, r3	@ 00069222 9846
.org 0x69224
	pop {r4, r5, r6, r7}	@ 00069224 f0bc
.org 0x69226
	pop {r0}	@ 00069226 01bc
.org 0x69228
	bx r0	@ 00069228 0047
