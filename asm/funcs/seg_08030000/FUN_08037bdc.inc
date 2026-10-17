@ FUN_08037bdc  entry 0x08037bdc  size 112
.thumb
.org 0x37bdc
FUN_08037bdc:
	push {r4, r5, lr}	@ 00037bdc 30b5
.org 0x37bde
	adds r4, r0, #0	@ 00037bde 041c
.org 0x37be0
	ldrb r0, [r4, #14]	@ 00037be0 a07b
.org 0x37be2
	cmp r0, #1	@ 00037be2 0128
.org 0x37be4
	bls.n 0x37c56	@ 00037be4 37d9
.org 0x37be6
	movs r0, #162	@ 00037be6 a220
.org 0x37be8
	lsls r0, r0, #1	@ 00037be8 4000
.org 0x37bea
	adds r1, r4, r0	@ 00037bea 2118
.org 0x37bec
	adds r0, r4, #0	@ 00037bec 201c
.org 0x37bee
	bl 0x39fd8	@ 00037bee 02f0f3f9
.org 0x37bf2
	lsls r0, r0, #24	@ 00037bf2 0006
.org 0x37bf4
	lsrs r3, r0, #24	@ 00037bf4 030e
.org 0x37bf6
	cmp r3, #0	@ 00037bf6 002b
.org 0x37bf8
	beq.n 0x37c1c	@ 00037bf8 10d0
.org 0x37bfa
	ldr r5, [pc, #24]	@ 00037bfa 064d
.org 0x37bfc
	adds r1, r4, r5	@ 00037bfc 6119
.org 0x37bfe
	movs r0, #255	@ 00037bfe ff20
.org 0x37c00
	strb r0, [r1, #0]	@ 00037c00 0870
.org 0x37c02
	adds r0, #1	@ 00037c02 0130
.org 0x37c04
	adds r1, r4, r0	@ 00037c04 2118
.org 0x37c06
	movs r2, #0	@ 00037c06 0022
.org 0x37c08
	movs r0, #3	@ 00037c08 0320
.org 0x37c0a
	strb r0, [r1, #0]	@ 00037c0a 0870
.org 0x37c0c
	ldr r1, [pc, #8]	@ 00037c0c 0249
.org 0x37c0e
	adds r0, r4, r1	@ 00037c0e 6018
.org 0x37c10
	strb r2, [r0, #0]	@ 00037c10 0270
.org 0x37c12
	b.n 0x37c40	@ 00037c12 15e0
.org 0x37c14
	.byte 0x47,0x01,0x00,0x00	@ 00037c14 data
.org 0x37c18
	.byte 0x01,0x01,0x00,0x00	@ 00037c18 data
.org 0x37c1c
	ldr r5, [pc, #40]	@ 00037c1c 0a4d
.org 0x37c1e
	adds r2, r4, r5	@ 00037c1e 6219
.org 0x37c20
	ldrb r1, [r2, #0]	@ 00037c20 1178
.org 0x37c22
	adds r0, r1, #0	@ 00037c22 081c
.org 0x37c24
	cmp r0, #255	@ 00037c24 ff28
.org 0x37c26
	beq.n 0x37c50	@ 00037c26 13d0
.org 0x37c28
	subs r5, #3	@ 00037c28 033d
.org 0x37c2a
	adds r0, r4, r5	@ 00037c2a 6019
.org 0x37c2c
	strb r1, [r0, #0]	@ 00037c2c 0170
.org 0x37c2e
	movs r0, #255	@ 00037c2e ff20
.org 0x37c30
	strb r0, [r2, #0]	@ 00037c30 1070
.org 0x37c32
	adds r0, #1	@ 00037c32 0130
.org 0x37c34
	adds r1, r4, r0	@ 00037c34 2118
.org 0x37c36
	movs r0, #3	@ 00037c36 0320
.org 0x37c38
	strb r0, [r1, #0]	@ 00037c38 0870
.org 0x37c3a
	ldr r1, [pc, #16]	@ 00037c3a 0449
.org 0x37c3c
	adds r0, r4, r1	@ 00037c3c 6018
.org 0x37c3e
	strb r3, [r0, #0]	@ 00037c3e 0370
.org 0x37c40
	adds r0, r4, #0	@ 00037c40 201c
.org 0x37c42
	bl 0x37c60	@ 00037c42 00f00df8
.org 0x37c46
	b.n 0x37c56	@ 00037c46 06e0
.org 0x37c48
	.byte 0x47,0x01,0x00,0x00	@ 00037c48 data
