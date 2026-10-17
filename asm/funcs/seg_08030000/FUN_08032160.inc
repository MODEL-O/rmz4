@ FUN_08032160  entry 0x08032160  size 110
.thumb
.org 0x32160
FUN_08032160:
	push {r4, lr}	@ 00032160 10b5
.org 0x32162
	adds r4, r0, #0	@ 00032162 041c
.org 0x32164
	ldrb r0, [r4, #15]	@ 00032164 e07b
.org 0x32166
	cmp r0, #0	@ 00032166 0028
.org 0x32168
	bne.n 0x32178	@ 00032168 06d1
.org 0x3216a
	ldr r1, [pc, #72]	@ 0003216a 1249
.org 0x3216c
	adds r0, r4, #0	@ 0003216c 201c
.org 0x3216e
	bl 0x1cf00	@ 0003216e eaf7c7fe
.org 0x32172
	ldrb r0, [r4, #15]	@ 00032172 e07b
.org 0x32174
	adds r0, #1	@ 00032174 0130
.org 0x32176
	strb r0, [r4, #15]	@ 00032176 e073
.org 0x32178
	movs r1, #226	@ 00032178 e221
.org 0x3217a
	lsls r1, r1, #1	@ 0003217a 4900
.org 0x3217c
	adds r0, r4, r1	@ 0003217c 6018
.org 0x3217e
	ldr r0, [r0, #0]	@ 0003217e 0068
.org 0x32180
	str r0, [r4, #84]	@ 00032180 6065
.org 0x32182
	movs r3, #228	@ 00032182 e423
.org 0x32184
	lsls r3, r3, #1	@ 00032184 5b00
.org 0x32186
	adds r0, r4, r3	@ 00032186 e018
.org 0x32188
	ldr r0, [r0, #0]	@ 00032188 0068
.org 0x3218a
	movs r1, #180	@ 0003218a b421
.org 0x3218c
	lsls r1, r1, #6	@ 0003218c 8901
.org 0x3218e
	adds r0, r0, r1	@ 0003218e 4018
.org 0x32190
	str r0, [r4, #88]	@ 00032190 a065
.org 0x32192
	ldrb r1, [r4, #10]	@ 00032192 a17a
.org 0x32194
	movs r2, #16	@ 00032194 1022
.org 0x32196
	adds r0, r2, #0	@ 00032196 101c
.org 0x32198
	ands r0, r1	@ 00032198 0840
.org 0x3219a
	lsls r0, r0, #24	@ 0003219a 0006
.org 0x3219c
	lsrs r1, r0, #24	@ 0003219c 010e
.org 0x3219e
	cmp r1, #0	@ 0003219e 0029
.org 0x321a0
	beq.n 0x321b8	@ 000321a0 0ad0
.org 0x321a2
	adds r3, #144	@ 000321a2 9033
.org 0x321a4
	adds r0, r4, r3	@ 000321a4 e018
.org 0x321a6
	ldr r0, [r0, #0]	@ 000321a6 0068
.org 0x321a8
	movs r1, #32	@ 000321a8 2021
.org 0x321aa
	ands r0, r1	@ 000321aa 0840
.org 0x321ac
	cmp r0, #0	@ 000321ac 0028
.org 0x321ae
	beq.n 0x321cc	@ 000321ae 0dd0
.org 0x321b0
	movs r1, #0	@ 000321b0 0021
.org 0x321b2
	b.n 0x321c6	@ 000321b2 08e0
.org 0x321b4
	.byte 0x10,0x28,0x00,0x00	@ 000321b4 data
.org 0x321b8
	movs r3, #150	@ 000321b8 9623
.org 0x321ba
	lsls r3, r3, #2	@ 000321ba 9b00
.org 0x321bc
	adds r0, r4, r3	@ 000321bc e018
.org 0x321be
	ldr r0, [r0, #0]	@ 000321be 0068
.org 0x321c0
	ands r0, r2	@ 000321c0 1040
.org 0x321c2
	cmp r0, #0	@ 000321c2 0028
.org 0x321c4
	beq.n 0x321cc	@ 000321c4 02d0
.org 0x321c6
	movs r0, #3	@ 000321c6 0320
.org 0x321c8
	strb r0, [r4, #14]	@ 000321c8 a073
.org 0x321ca
	strb r1, [r4, #15]	@ 000321ca e173
.org 0x321cc
	pop {r4}	@ 000321cc 10bc
