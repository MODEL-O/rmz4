@ FUN_0810418c  entry 0x0810418c  size 62
.thumb
.org 0x10418c
FUN_0810418c:
	push {r4, lr}	@ 0010418c 10b5
.org 0x10418e
	adds r2, r0, #0	@ 0010418e 021c
.org 0x104190
	movs r1, #0	@ 00104190 0021
.org 0x104192
	adds r3, r2, #0	@ 00104192 131c
.org 0x104194
	adds r3, #180	@ 00104194 b433
.org 0x104196
	movs r4, #0	@ 00104196 0024
.org 0x104198
	lsls r0, r1, #2	@ 00104198 8800
.org 0x10419a
	adds r0, r3, r0	@ 0010419a 1818
.org 0x10419c
	str r4, [r0, #0]	@ 0010419c 0460
.org 0x10419e
	adds r0, r1, #1	@ 0010419e 481c
.org 0x1041a0
	lsls r0, r0, #24	@ 001041a0 0006
.org 0x1041a2
	lsrs r1, r0, #24	@ 001041a2 010e
.org 0x1041a4
	cmp r1, #3	@ 001041a4 0329
.org 0x1041a6
	bls.n 0x104198	@ 001041a6 f7d9
.org 0x1041a8
	movs r1, #0	@ 001041a8 0021
.org 0x1041aa
	movs r3, #0	@ 001041aa 0023
.org 0x1041ac
	lsls r0, r1, #2	@ 001041ac 8800
.org 0x1041ae
	adds r0, r0, r2	@ 001041ae 8018
.org 0x1041b0
	str r3, [r0, #92]	@ 001041b0 c365
.org 0x1041b2
	adds r0, r1, #1	@ 001041b2 481c
.org 0x1041b4
	lsls r0, r0, #24	@ 001041b4 0006
.org 0x1041b6
	lsrs r1, r0, #24	@ 001041b6 010e
.org 0x1041b8
	cmp r1, #3	@ 001041b8 0329
.org 0x1041ba
	bls.n 0x1041ac	@ 001041ba f7d9
.org 0x1041bc
	movs r0, #0	@ 001041bc 0020
.org 0x1041be
	strb r0, [r2, #18]	@ 001041be 9074
.org 0x1041c0
	movs r0, #3	@ 001041c0 0320
.org 0x1041c2
	strb r0, [r2, #19]	@ 001041c2 d074
.org 0x1041c4
	pop {r4}	@ 001041c4 10bc
.org 0x1041c6
	pop {r0}	@ 001041c6 01bc
.org 0x1041c8
	bx r0	@ 001041c8 0047
