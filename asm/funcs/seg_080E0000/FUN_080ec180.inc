@ FUN_080ec180  entry 0x080ec180  size 100
.thumb
.org 0xec180
FUN_080ec180:
	push {r4, r5, lr}	@ 000ec180 30b5
.org 0xec182
	adds r5, r0, #0	@ 000ec182 051c
.org 0xec184
	ldrb r1, [r5, #10]	@ 000ec184 a97a
.org 0xec186
	movs r0, #2	@ 000ec186 0220
.org 0xec188
	movs r2, #0	@ 000ec188 0022
.org 0xec18a
	orrs r1, r0	@ 000ec18a 0143
.org 0xec18c
	strb r1, [r5, #10]	@ 000ec18c a972
.org 0xec18e
	ldrb r0, [r5, #17]	@ 000ec18e 687c
.org 0xec190
	cmp r0, #0	@ 000ec190 0028
.org 0xec192
	bne.n 0xec1c8	@ 000ec192 19d1
.org 0xec194
	movs r0, #4	@ 000ec194 0420
.org 0xec196
	orrs r1, r0	@ 000ec196 0143
.org 0xec198
	strb r1, [r5, #10]	@ 000ec198 a972
.org 0xec19a
	adds r4, r5, #0	@ 000ec19a 2c1c
.org 0xec19c
	adds r4, #116	@ 000ec19c 7434
.org 0xec19e
	ldr r1, [pc, #32]	@ 000ec19e 0849
.org 0xec1a0
	adds r2, r5, #0	@ 000ec1a0 2a1c
.org 0xec1a2
	adds r2, #84	@ 000ec1a2 5432
.org 0xec1a4
	adds r0, r4, #0	@ 000ec1a4 201c
.org 0xec1a6
	movs r3, #0	@ 000ec1a6 0023
.org 0xec1a8
	bl 0x5760	@ 000ec1a8 19f7dafa
.org 0xec1ac
	str r5, [r4, #44]	@ 000ec1ac e562
.org 0xec1ae
	ldr r0, [pc, #20]	@ 000ec1ae 0548
.org 0xec1b0
	str r0, [r4, #36]	@ 000ec1b0 6062
.org 0xec1b2
	ldrb r1, [r5, #11]	@ 000ec1b2 e97a
.org 0xec1b4
	movs r0, #239	@ 000ec1b4 ef20
.org 0xec1b6
	ands r0, r1	@ 000ec1b6 0840
.org 0xec1b8
	strb r0, [r5, #11]	@ 000ec1b8 e872
.org 0xec1ba
	ldrb r0, [r5, #28]	@ 000ec1ba 287f
.org 0xec1bc
	strb r0, [r5, #29]	@ 000ec1bc 6877
.org 0xec1be
	b.n 0xec1ce	@ 000ec1be 06e0
.org 0xec1c0
	.byte 0x64,0x97,0x86,0x08	@ 000ec1c0 data
.org 0xec1c4
	.byte 0x51,0xc3,0x0e,0x08	@ 000ec1c4 data
.org 0xec1c8
	adds r0, r5, #0	@ 000ec1c8 281c
.org 0xec1ca
	bl 0xebf6c	@ 000ec1ca fff7cffe
.org 0xec1ce
	ldr r1, [pc, #28]	@ 000ec1ce 0749
.org 0xec1d0
	ldrb r0, [r5, #9]	@ 000ec1d0 687a
.org 0xec1d2
	lsls r0, r0, #2	@ 000ec1d2 8000
.org 0xec1d4
	adds r0, r0, r1	@ 000ec1d4 4018
.org 0xec1d6
	movs r1, #1	@ 000ec1d6 0121
.org 0xec1d8
	str r1, [r5, #12]	@ 000ec1d8 e960
.org 0xec1da
	ldr r0, [r0, #0]	@ 000ec1da 0068
.org 0xec1dc
	ldr r0, [r0, #4]	@ 000ec1dc 4068
.org 0xec1de
	str r0, [r5, #20]	@ 000ec1de 6861
.org 0xec1e0
	adds r0, r5, #0	@ 000ec1e0 281c
.org 0xec1e2
	bl 0xec1f0	@ 000ec1e2 00f005f8
