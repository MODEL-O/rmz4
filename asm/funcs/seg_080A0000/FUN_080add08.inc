@ FUN_080add08  entry 0x080add08  size 92
.thumb
.org 0xadd08
FUN_080add08:
	push {r4, r5, r6, lr}	@ 000add08 70b5
.org 0xadd0a
	adds r6, r0, #0	@ 000add0a 061c
.org 0xadd0c
	lsls r1, r1, #24	@ 000add0c 0906
.org 0xadd0e
	lsrs r5, r1, #24	@ 000add0e 0d0e
.org 0xadd10
	lsls r2, r2, #24	@ 000add10 1206
.org 0xadd12
	lsrs r4, r2, #24	@ 000add12 140e
.org 0xadd14
	ldr r0, [pc, #76]	@ 000add14 1348
.org 0xadd16
	ldr r0, [r0, #0]	@ 000add16 0068
.org 0xadd18
	bl 0x5500	@ 000add18 57f7f2fb
.org 0xadd1c
	adds r3, r0, #0	@ 000add1c 031c
.org 0xadd1e
	cmp r3, #0	@ 000add1e 002b
.org 0xadd20
	beq.n 0xadd5e	@ 000add20 1dd0
.org 0xadd22
	adds r1, r3, #0	@ 000add22 191c
.org 0xadd24
	adds r1, #37	@ 000add24 2531
.org 0xadd26
	movs r2, #0	@ 000add26 0022
.org 0xadd28
	movs r0, #24	@ 000add28 1820
.org 0xadd2a
	strb r0, [r1, #0]	@ 000add2a 0870
.org 0xadd2c
	ldr r0, [pc, #56]	@ 000add2c 0e48
.org 0xadd2e
	movs r1, #79	@ 000add2e 4f21
.org 0xadd30
	strb r1, [r3, #9]	@ 000add30 5972
.org 0xadd32
	adds r1, #237	@ 000add32 ed31
.org 0xadd34
	adds r0, r0, r1	@ 000add34 4018
.org 0xadd36
	ldr r0, [r0, #0]	@ 000add36 0068
.org 0xadd38
	ldr r0, [r0, #0]	@ 000add38 0068
.org 0xadd3a
	str r0, [r3, #20]	@ 000add3a 5861
.org 0xadd3c
	movs r0, #0	@ 000add3c 0020
.org 0xadd3e
	strh r2, [r3, #32]	@ 000add3e 1a84
.org 0xadd40
	adds r1, r3, #0	@ 000add40 191c
.org 0xadd42
	adds r1, #34	@ 000add42 2231
.org 0xadd44
	strb r0, [r1, #0]	@ 000add44 0870
.org 0xadd46
	ldrb r1, [r3, #11]	@ 000add46 d97a
.org 0xadd48
	movs r0, #16	@ 000add48 1020
.org 0xadd4a
	orrs r0, r1	@ 000add4a 0843
.org 0xadd4c
	strb r0, [r3, #11]	@ 000add4c d872
.org 0xadd4e
	ldrb r0, [r3, #28]	@ 000add4e 187f
.org 0xadd50
	strb r0, [r3, #29]	@ 000add50 5877
.org 0xadd52
	ldr r0, [r6, #0]	@ 000add52 3068
.org 0xadd54
	ldr r1, [r6, #4]	@ 000add54 7168
.org 0xadd56
	str r0, [r3, #84]	@ 000add56 5865
.org 0xadd58
	str r1, [r3, #88]	@ 000add58 9965
.org 0xadd5a
	strb r5, [r3, #16]	@ 000add5a 1d74
.org 0xadd5c
	strb r4, [r3, #17]	@ 000add5c 5c74
.org 0xadd5e
	pop {r4, r5, r6}	@ 000add5e 70bc
.org 0xadd60
	pop {r0}	@ 000add60 01bc
.org 0xadd62
	bx r0	@ 000add62 0047
