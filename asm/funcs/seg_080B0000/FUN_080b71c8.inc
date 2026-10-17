@ FUN_080b71c8  entry 0x080b71c8  size 110
.thumb
.org 0xb71c8
FUN_080b71c8:
	push {r4, r5, r6, lr}	@ 000b71c8 70b5
.org 0xb71ca
	adds r4, r0, #0	@ 000b71ca 041c
.org 0xb71cc
	ldr r0, [r4, #40]	@ 000b71cc a06a
.org 0xb71ce
	ldr r6, [r0, #40]	@ 000b71ce 866a
.org 0xb71d0
	ldrb r5, [r4, #15]	@ 000b71d0 e57b
.org 0xb71d2
	cmp r5, #0	@ 000b71d2 002d
.org 0xb71d4
	bne.n 0xb7200	@ 000b71d4 14d1
.org 0xb71d6
	adds r0, r4, #0	@ 000b71d6 201c
.org 0xb71d8
	bl 0xb7548	@ 000b71d8 00f0b6f9
.org 0xb71dc
	adds r0, r4, #0	@ 000b71dc 201c
.org 0xb71de
	adds r0, #140	@ 000b71de 8c30
.org 0xb71e0
	str r5, [r0, #0]	@ 000b71e0 0560
.org 0xb71e2
	adds r0, #4	@ 000b71e2 0430
.org 0xb71e4
	str r5, [r0, #0]	@ 000b71e4 0560
.org 0xb71e6
	adds r0, #4	@ 000b71e6 0430
.org 0xb71e8
	strb r5, [r0, #0]	@ 000b71e8 0570
.org 0xb71ea
	ldrb r1, [r4, #10]	@ 000b71ea a17a
.org 0xb71ec
	movs r0, #251	@ 000b71ec fb20
.org 0xb71ee
	ands r0, r1	@ 000b71ee 0840
.org 0xb71f0
	movs r1, #254	@ 000b71f0 fe21
.org 0xb71f2
	ands r0, r1	@ 000b71f2 0840
.org 0xb71f4
	strb r0, [r4, #10]	@ 000b71f4 a072
.org 0xb71f6
	movs r0, #64	@ 000b71f6 4020
.org 0xb71f8
	strb r0, [r4, #18]	@ 000b71f8 a074
.org 0xb71fa
	ldrb r0, [r4, #15]	@ 000b71fa e07b
.org 0xb71fc
	adds r0, #1	@ 000b71fc 0130
.org 0xb71fe
	strb r0, [r4, #15]	@ 000b71fe e073
.org 0xb7200
	ldrb r0, [r4, #18]	@ 000b7200 a07c
.org 0xb7202
	subs r0, #1	@ 000b7202 0138
.org 0xb7204
	strb r0, [r4, #18]	@ 000b7204 a074
.org 0xb7206
	lsls r0, r0, #24	@ 000b7206 0006
.org 0xb7208
	cmp r0, #0	@ 000b7208 0028
.org 0xb720a
	bne.n 0xb7230	@ 000b720a 11d1
.org 0xb720c
	adds r1, r6, #0	@ 000b720c 311c
.org 0xb720e
	adds r1, #204	@ 000b720e cc31
.org 0xb7210
	ldrh r2, [r1, #0]	@ 000b7210 0a88
.org 0xb7212
	movs r3, #0	@ 000b7212 0023
.org 0xb7214
	ldrsh r0, [r1, r3]	@ 000b7214 c85e
.org 0xb7216
	cmp r0, #0	@ 000b7216 0028
.org 0xb7218
	beq.n 0xb721e	@ 000b7218 01d0
.org 0xb721a
	subs r0, r2, #1	@ 000b721a 501e
.org 0xb721c
	strh r0, [r1, #0]	@ 000b721c 0880
.org 0xb721e
	ldr r1, [pc, #24]	@ 000b721e 0649
.org 0xb7220
	ldrb r0, [r4, #9]	@ 000b7220 607a
.org 0xb7222
	lsls r0, r0, #2	@ 000b7222 8000
.org 0xb7224
	adds r0, r0, r1	@ 000b7224 4018
.org 0xb7226
	movs r1, #4	@ 000b7226 0421
.org 0xb7228
	str r1, [r4, #12]	@ 000b7228 e160
.org 0xb722a
	ldr r0, [r0, #0]	@ 000b722a 0068
.org 0xb722c
	ldr r0, [r0, #16]	@ 000b722c 0069
.org 0xb722e
	str r0, [r4, #20]	@ 000b722e 6061
.org 0xb7230
	pop {r4, r5, r6}	@ 000b7230 70bc
.org 0xb7232
	pop {r0}	@ 000b7232 01bc
.org 0xb7234
	bx r0	@ 000b7234 0047
