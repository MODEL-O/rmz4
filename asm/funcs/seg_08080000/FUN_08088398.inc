@ FUN_08088398  entry 0x08088398  size 72
.thumb
.org 0x88398
FUN_08088398:
	push {r4, r5, lr}	@ 00088398 30b5
.org 0x8839a
	adds r2, r0, #0	@ 0008839a 021c
.org 0x8839c
	ldrb r0, [r2, #10]	@ 0008839c 907a
.org 0x8839e
	lsrs r3, r0, #4	@ 0008839e 0309
.org 0x883a0
	movs r5, #1	@ 000883a0 0125
.org 0x883a2
	ands r3, r5	@ 000883a2 2b40
.org 0x883a4
	movs r4, #0	@ 000883a4 0024
.org 0x883a6
	ldr r0, [pc, #28]	@ 000883a6 0748
.org 0x883a8
	ldr r0, [r0, #0]	@ 000883a8 0068
.org 0x883aa
	ldr r1, [r2, #84]	@ 000883aa 516d
.org 0x883ac
	ldr r0, [r0, #84]	@ 000883ac 406d
.org 0x883ae
	cmp r1, r0	@ 000883ae 8142
.org 0x883b0
	bge.n 0x883b4	@ 000883b0 00da
.org 0x883b2
	movs r4, #1	@ 000883b2 0124
.org 0x883b4
	adds r1, r3, #0	@ 000883b4 191c
.org 0x883b6
	eors r1, r4	@ 000883b6 6140
.org 0x883b8
	cmp r1, #0	@ 000883b8 0029
.org 0x883ba
	beq.n 0x883c8	@ 000883ba 05d0
.org 0x883bc
	movs r0, #0	@ 000883bc 0020
.org 0x883be
	strb r5, [r2, #14]	@ 000883be 9573
.org 0x883c0
	strb r0, [r2, #15]	@ 000883c0 d073
.org 0x883c2
	b.n 0x883ce	@ 000883c2 04e0
.org 0x883c4
	.byte 0xf0,0xdb,0x02,0x02	@ 000883c4 data
.org 0x883c8
	movs r0, #2	@ 000883c8 0220
.org 0x883ca
	strb r0, [r2, #14]	@ 000883ca 9073
.org 0x883cc
	strb r1, [r2, #15]	@ 000883cc d173
.org 0x883ce
	ldr r0, [pc, #20]	@ 000883ce 0548
.org 0x883d0
	ldrb r1, [r2, #14]	@ 000883d0 917b
.org 0x883d2
	lsls r1, r1, #2	@ 000883d2 8900
.org 0x883d4
	adds r1, r1, r0	@ 000883d4 0918
.org 0x883d6
	ldr r1, [r1, #0]	@ 000883d6 0968
.org 0x883d8
	adds r0, r2, #0	@ 000883d8 101c
.org 0x883da
	bl 0x128f80	@ 000883da a0f0d1fd
.org 0x883de
	pop {r4, r5}	@ 000883de 30bc
