@ FUN_08109090  entry 0x08109090  size 54
.thumb
.org 0x109090
FUN_08109090:
	push {r4, r5, lr}	@ 00109090 30b5
.org 0x109092
	movs r2, #0	@ 00109092 0022
.org 0x109094
	ldr r0, [pc, #28]	@ 00109094 0748
.org 0x109096
	ldr r3, [r0, #0]	@ 00109096 0368
.org 0x109098
	movs r5, #3	@ 00109098 0325
.org 0x10909a
	movs r4, #1	@ 0010909a 0124
.org 0x10909c
	lsrs r0, r2, #2	@ 0010909c 9008
.org 0x10909e
	adds r0, r3, r0	@ 0010909e 1818
.org 0x1090a0
	ldrb r1, [r0, #0]	@ 001090a0 0178
.org 0x1090a2
	adds r0, r2, #0	@ 001090a2 101c
.org 0x1090a4
	ands r0, r5	@ 001090a4 2840
.org 0x1090a6
	adds r0, #4	@ 001090a6 0430
.org 0x1090a8
	asrs r1, r0	@ 001090a8 0141
.org 0x1090aa
	ands r1, r4	@ 001090aa 2140
.org 0x1090ac
	cmp r1, #0	@ 001090ac 0029
.org 0x1090ae
	beq.n 0x1090b8	@ 001090ae 03d0
.org 0x1090b0
	movs r0, #0	@ 001090b0 0020
.org 0x1090b2
	b.n 0x1090c4	@ 001090b2 07e0
.org 0x1090b4
	.byte 0xac,0xed,0x02,0x02	@ 001090b4 data
.org 0x1090b8
	adds r0, r2, #1	@ 001090b8 501c
.org 0x1090ba
	lsls r0, r0, #24	@ 001090ba 0006
.org 0x1090bc
	lsrs r2, r0, #24	@ 001090bc 020e
.org 0x1090be
	cmp r2, #27	@ 001090be 1b2a
.org 0x1090c0
	bls.n 0x10909c	@ 001090c0 ecd9
.org 0x1090c2
	movs r0, #1	@ 001090c2 0120
.org 0x1090c4
	pop {r4, r5}	@ 001090c4 30bc
