@ FUN_0809ec80  entry 0x0809ec80  size 116
.thumb
.org 0x9ec80
FUN_0809ec80:
	push {lr}	@ 0009ec80 00b5
.org 0x9ec82
	adds r2, r0, #0	@ 0009ec82 021c
.org 0x9ec84
	ldr r1, [r2, #40]	@ 0009ec84 916a
.org 0x9ec86
	adds r0, #180	@ 0009ec86 b430
.org 0x9ec88
	ldrb r3, [r0, #0]	@ 0009ec88 0378
.org 0x9ec8a
	cmp r3, #0	@ 0009ec8a 002b
.org 0x9ec8c
	beq.n 0x9ecb0	@ 0009ec8c 10d0
.org 0x9ec8e
	ldr r1, [pc, #28]	@ 0009ec8e 0749
.org 0x9ec90
	ldrb r0, [r2, #9]	@ 0009ec90 507a
.org 0x9ec92
	lsls r0, r0, #2	@ 0009ec92 8000
.org 0x9ec94
	adds r0, r0, r1	@ 0009ec94 4018
.org 0x9ec96
	movs r1, #2	@ 0009ec96 0221
.org 0x9ec98
	str r1, [r2, #12]	@ 0009ec98 d160
.org 0x9ec9a
	ldr r0, [r0, #0]	@ 0009ec9a 0068
.org 0x9ec9c
	ldr r0, [r0, #8]	@ 0009ec9c 8068
.org 0x9ec9e
	str r0, [r2, #20]	@ 0009ec9e 5061
.org 0x9eca0
	movs r0, #0	@ 0009eca0 0020
.org 0x9eca2
	strb r1, [r2, #13]	@ 0009eca2 5173
.org 0x9eca4
	strb r0, [r2, #14]	@ 0009eca4 9073
.org 0x9eca6
	strb r0, [r2, #15]	@ 0009eca6 d073
.org 0x9eca8
	b.n 0x9ecde	@ 0009eca8 19e0
.org 0x9ecaa
	.byte 0x00	@ 0009ecaa data
.org 0x9ecab
	.byte 0x00	@ 0009ecab data
.org 0x9ecac
	.byte 0x40,0xdb,0x85,0x08	@ 0009ecac data
.org 0x9ecb0
	ldrb r0, [r1, #12]	@ 0009ecb0 087b
.org 0x9ecb2
	cmp r0, #1	@ 0009ecb2 0128
.org 0x9ecb4
	bhi.n 0x9ecc6	@ 0009ecb4 07d8
.org 0x9ecb6
	adds r0, r2, #0	@ 0009ecb6 101c
.org 0x9ecb8
	adds r0, #140	@ 0009ecb8 8c30
.org 0x9ecba
	ldr r0, [r0, #0]	@ 0009ecba 0068
.org 0x9ecbc
	movs r1, #128	@ 0009ecbc 8021
.org 0x9ecbe
	lsls r1, r1, #2	@ 0009ecbe 8900
.org 0x9ecc0
	ands r0, r1	@ 0009ecc0 0840
.org 0x9ecc2
	cmp r0, #0	@ 0009ecc2 0028
.org 0x9ecc4
	beq.n 0x9ecec	@ 0009ecc4 12d0
.org 0x9ecc6
	ldr r1, [pc, #32]	@ 0009ecc6 0849
.org 0x9ecc8
	ldrb r0, [r2, #9]	@ 0009ecc8 507a
.org 0x9ecca
	lsls r0, r0, #2	@ 0009ecca 8000
.org 0x9eccc
	adds r0, r0, r1	@ 0009eccc 4018
.org 0x9ecce
	movs r1, #2	@ 0009ecce 0221
.org 0x9ecd0
	str r1, [r2, #12]	@ 0009ecd0 d160
.org 0x9ecd2
	ldr r0, [r0, #0]	@ 0009ecd2 0068
.org 0x9ecd4
	ldr r0, [r0, #8]	@ 0009ecd4 8068
.org 0x9ecd6
	str r0, [r2, #20]	@ 0009ecd6 5061
.org 0x9ecd8
	strb r3, [r2, #13]	@ 0009ecd8 5373
.org 0x9ecda
	strb r3, [r2, #14]	@ 0009ecda 9373
.org 0x9ecdc
	strb r3, [r2, #15]	@ 0009ecdc d373
.org 0x9ecde
	adds r0, r2, #0	@ 0009ecde 101c
.org 0x9ece0
	bl 0x9ee54	@ 0009ece0 00f0b8f8
.org 0x9ece4
	b.n 0x9ecfc	@ 0009ece4 0ae0
.org 0x9ece6
	.byte 0x00	@ 0009ece6 data
.org 0x9ece7
	.byte 0x00	@ 0009ece7 data
.org 0x9ece8
	.byte 0x40,0xdb,0x85,0x08	@ 0009ece8 data
.org 0x9ecec
	ldr r0, [pc, #16]	@ 0009ecec 0448
.org 0x9ecee
	ldrb r1, [r2, #13]	@ 0009ecee 517b
.org 0x9ecf0
	lsls r1, r1, #2	@ 0009ecf0 8900
.org 0x9ecf2
	adds r1, r1, r0	@ 0009ecf2 0918
