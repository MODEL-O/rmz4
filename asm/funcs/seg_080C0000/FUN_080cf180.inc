@ FUN_080cf180  entry 0x080cf180  size 84
.thumb
.org 0xcf180
FUN_080cf180:
	push {r4, r5, lr}	@ 000cf180 30b5
.org 0xcf182
	adds r4, r0, #0	@ 000cf182 041c
.org 0xcf184
	ldrb r5, [r4, #13]	@ 000cf184 657b
.org 0xcf186
	cmp r5, #0	@ 000cf186 002d
.org 0xcf188
	bne.n 0xcf1ac	@ 000cf188 10d1
.org 0xcf18a
	ldr r1, [pc, #72]	@ 000cf18a 1249
.org 0xcf18c
	bl 0x1cf00	@ 000cf18c 4df7b8fe
.org 0xcf190
	adds r0, r4, #0	@ 000cf190 201c
.org 0xcf192
	adds r0, #140	@ 000cf192 8c30
.org 0xcf194
	str r5, [r0, #0]	@ 000cf194 0560
.org 0xcf196
	adds r0, #4	@ 000cf196 0430
.org 0xcf198
	str r5, [r0, #0]	@ 000cf198 0560
.org 0xcf19a
	adds r0, #4	@ 000cf19a 0430
.org 0xcf19c
	strb r5, [r0, #0]	@ 000cf19c 0570
.org 0xcf19e
	ldrb r1, [r4, #10]	@ 000cf19e a17a
.org 0xcf1a0
	movs r0, #251	@ 000cf1a0 fb20
.org 0xcf1a2
	ands r0, r1	@ 000cf1a2 0840
.org 0xcf1a4
	strb r0, [r4, #10]	@ 000cf1a4 a072
.org 0xcf1a6
	ldrb r0, [r4, #13]	@ 000cf1a6 607b
.org 0xcf1a8
	adds r0, #1	@ 000cf1a8 0130
.org 0xcf1aa
	strb r0, [r4, #13]	@ 000cf1aa 6073
.org 0xcf1ac
	adds r0, r4, #0	@ 000cf1ac 201c
.org 0xcf1ae
	bl 0x1cff0	@ 000cf1ae 4df71fff
.org 0xcf1b2
	adds r0, r4, #0	@ 000cf1b2 201c
.org 0xcf1b4
	adds r0, #115	@ 000cf1b4 7330
.org 0xcf1b6
	ldrb r0, [r0, #0]	@ 000cf1b6 0078
.org 0xcf1b8
	cmp r0, #3	@ 000cf1b8 0328
.org 0xcf1ba
	bne.n 0xcf1ce	@ 000cf1ba 08d1
.org 0xcf1bc
	ldr r1, [pc, #24]	@ 000cf1bc 0649
.org 0xcf1be
	ldrb r0, [r4, #9]	@ 000cf1be 607a
.org 0xcf1c0
	lsls r0, r0, #2	@ 000cf1c0 8000
.org 0xcf1c2
	adds r0, r0, r1	@ 000cf1c2 4018
.org 0xcf1c4
	movs r1, #4	@ 000cf1c4 0421
.org 0xcf1c6
	str r1, [r4, #12]	@ 000cf1c6 e160
.org 0xcf1c8
	ldr r0, [r0, #0]	@ 000cf1c8 0068
.org 0xcf1ca
	ldr r0, [r0, #16]	@ 000cf1ca 0069
.org 0xcf1cc
	str r0, [r4, #20]	@ 000cf1cc 6061
.org 0xcf1ce
	pop {r4, r5}	@ 000cf1ce 30bc
.org 0xcf1d0
	pop {r0}	@ 000cf1d0 01bc
.org 0xcf1d2
	bx r0	@ 000cf1d2 0047
