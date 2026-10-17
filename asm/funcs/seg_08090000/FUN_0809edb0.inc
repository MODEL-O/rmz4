@ FUN_0809edb0  entry 0x0809edb0  size 62
.thumb
.org 0x9edb0
FUN_0809edb0:
	push {r4, lr}	@ 0009edb0 10b5
.org 0x9edb2
	adds r4, r0, #0	@ 0009edb2 041c
.org 0x9edb4
	ldrb r0, [r4, #15]	@ 0009edb4 e07b
.org 0x9edb6
	cmp r0, #0	@ 0009edb6 0028
.org 0x9edb8
	bne.n 0x9edcc	@ 0009edb8 08d1
.org 0x9edba
	ldr r1, [pc, #52]	@ 0009edba 0d49
.org 0x9edbc
	adds r0, r4, #0	@ 0009edbc 201c
.org 0x9edbe
	bl 0x1cf00	@ 0009edbe 7ef79ff8
.org 0x9edc2
	movs r0, #32	@ 0009edc2 2020
.org 0x9edc4
	strb r0, [r4, #18]	@ 0009edc4 a074
.org 0x9edc6
	ldrb r0, [r4, #15]	@ 0009edc6 e07b
.org 0x9edc8
	adds r0, #1	@ 0009edc8 0130
.org 0x9edca
	strb r0, [r4, #15]	@ 0009edca e073
.org 0x9edcc
	adds r0, r4, #0	@ 0009edcc 201c
.org 0x9edce
	bl 0x1cff0	@ 0009edce 7ef70ff9
.org 0x9edd2
	ldrb r0, [r4, #18]	@ 0009edd2 a07c
.org 0x9edd4
	subs r0, #1	@ 0009edd4 0138
.org 0x9edd6
	strb r0, [r4, #18]	@ 0009edd6 a074
.org 0x9edd8
	lsls r0, r0, #24	@ 0009edd8 0006
.org 0x9edda
	lsrs r1, r0, #24	@ 0009edda 010e
.org 0x9eddc
	cmp r1, #0	@ 0009eddc 0029
.org 0x9edde
	bne.n 0x9ede8	@ 0009edde 03d1
.org 0x9ede0
	movs r0, #3	@ 0009ede0 0320
.org 0x9ede2
	strb r0, [r4, #13]	@ 0009ede2 6073
.org 0x9ede4
	strb r1, [r4, #14]	@ 0009ede4 a173
.org 0x9ede6
	strb r1, [r4, #15]	@ 0009ede6 e173
.org 0x9ede8
	pop {r4}	@ 0009ede8 10bc
.org 0x9edea
	pop {r0}	@ 0009edea 01bc
.org 0x9edec
	bx r0	@ 0009edec 0047
