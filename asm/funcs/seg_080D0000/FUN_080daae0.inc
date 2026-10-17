@ FUN_080daae0  entry 0x080daae0  size 80
.thumb
.org 0xdaae0
FUN_080daae0:
	push {r4, r5, r6, lr}	@ 000daae0 70b5
.org 0xdaae2
	adds r6, r0, #0	@ 000daae2 061c
.org 0xdaae4
	lsls r1, r1, #24	@ 000daae4 0906
.org 0xdaae6
	lsrs r5, r1, #24	@ 000daae6 0d0e
.org 0xdaae8
	lsls r2, r2, #24	@ 000daae8 1206
.org 0xdaaea
	lsrs r4, r2, #24	@ 000daaea 140e
.org 0xdaaec
	ldr r0, [pc, #64]	@ 000daaec 1048
.org 0xdaaee
	ldr r0, [r0, #0]	@ 000daaee 0068
.org 0xdaaf0
	bl 0x5500	@ 000daaf0 2af706fd
.org 0xdaaf4
	adds r3, r0, #0	@ 000daaf4 031c
.org 0xdaaf6
	cmp r3, #0	@ 000daaf6 002b
.org 0xdaaf8
	beq.n 0xdab28	@ 000daaf8 16d0
.org 0xdaafa
	adds r1, r3, #0	@ 000daafa 191c
.org 0xdaafc
	adds r1, #37	@ 000daafc 2531
.org 0xdaafe
	movs r2, #0	@ 000daafe 0022
.org 0xdab00
	movs r0, #1	@ 000dab00 0120
.org 0xdab02
	strb r0, [r1, #0]	@ 000dab02 0870
.org 0xdab04
	ldr r0, [pc, #44]	@ 000dab04 0b48
.org 0xdab06
	movs r1, #38	@ 000dab06 2621
.org 0xdab08
	strb r1, [r3, #9]	@ 000dab08 5972
.org 0xdab0a
	adds r0, #152	@ 000dab0a 9830
.org 0xdab0c
	ldr r0, [r0, #0]	@ 000dab0c 0068
.org 0xdab0e
	ldr r0, [r0, #0]	@ 000dab0e 0068
.org 0xdab10
	str r0, [r3, #20]	@ 000dab10 5861
.org 0xdab12
	movs r0, #0	@ 000dab12 0020
.org 0xdab14
	strh r2, [r3, #32]	@ 000dab14 1a84
.org 0xdab16
	adds r1, r3, #0	@ 000dab16 191c
.org 0xdab18
	adds r1, #34	@ 000dab18 2231
.org 0xdab1a
	strb r0, [r1, #0]	@ 000dab1a 0870
.org 0xdab1c
	ldr r0, [r6, #0]	@ 000dab1c 3068
.org 0xdab1e
	ldr r1, [r6, #4]	@ 000dab1e 7168
.org 0xdab20
	str r0, [r3, #84]	@ 000dab20 5865
.org 0xdab22
	str r1, [r3, #88]	@ 000dab22 9965
.org 0xdab24
	strb r5, [r3, #16]	@ 000dab24 1d74
.org 0xdab26
	strb r4, [r3, #17]	@ 000dab26 5c74
.org 0xdab28
	adds r0, r3, #0	@ 000dab28 181c
.org 0xdab2a
	pop {r4, r5, r6}	@ 000dab2a 70bc
.org 0xdab2c
	pop {r1}	@ 000dab2c 02bc
.org 0xdab2e
	bx r1	@ 000dab2e 0847
