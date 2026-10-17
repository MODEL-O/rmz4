@ FUN_080a0cc8  entry 0x080a0cc8  size 106
.thumb
.org 0xa0cc8
FUN_080a0cc8:
	push {r4, r5, r6, lr}	@ 000a0cc8 70b5
.org 0xa0cca
	adds r6, r0, #0	@ 000a0cca 061c
.org 0xa0ccc
	lsls r1, r1, #24	@ 000a0ccc 0906
.org 0xa0cce
	lsrs r4, r1, #24	@ 000a0cce 0c0e
.org 0xa0cd0
	lsls r2, r2, #24	@ 000a0cd0 1206
.org 0xa0cd2
	lsrs r5, r2, #24	@ 000a0cd2 150e
.org 0xa0cd4
	ldr r0, [pc, #92]	@ 000a0cd4 1748
.org 0xa0cd6
	ldr r0, [r0, #0]	@ 000a0cd6 0068
.org 0xa0cd8
	bl 0x5500	@ 000a0cd8 64f712fc
.org 0xa0cdc
	adds r3, r0, #0	@ 000a0cdc 031c
.org 0xa0cde
	cmp r3, #0	@ 000a0cde 002b
.org 0xa0ce0
	beq.n 0xa0d2a	@ 000a0ce0 23d0
.org 0xa0ce2
	adds r1, r3, #0	@ 000a0ce2 191c
.org 0xa0ce4
	adds r1, #37	@ 000a0ce4 2531
.org 0xa0ce6
	movs r2, #0	@ 000a0ce6 0022
.org 0xa0ce8
	movs r0, #24	@ 000a0ce8 1820
.org 0xa0cea
	strb r0, [r1, #0]	@ 000a0cea 0870
.org 0xa0cec
	ldr r0, [pc, #72]	@ 000a0cec 1248
.org 0xa0cee
	movs r1, #51	@ 000a0cee 3321
.org 0xa0cf0
	strb r1, [r3, #9]	@ 000a0cf0 5972
.org 0xa0cf2
	adds r0, #204	@ 000a0cf2 cc30
.org 0xa0cf4
	ldr r0, [r0, #0]	@ 000a0cf4 0068
.org 0xa0cf6
	ldr r0, [r0, #0]	@ 000a0cf6 0068
.org 0xa0cf8
	str r0, [r3, #20]	@ 000a0cf8 5861
.org 0xa0cfa
	movs r0, #0	@ 000a0cfa 0020
.org 0xa0cfc
	strh r2, [r3, #32]	@ 000a0cfc 1a84
.org 0xa0cfe
	adds r1, r3, #0	@ 000a0cfe 191c
.org 0xa0d00
	adds r1, #34	@ 000a0d00 2231
.org 0xa0d02
	strb r0, [r1, #0]	@ 000a0d02 0870
.org 0xa0d04
	ldrb r1, [r3, #11]	@ 000a0d04 d97a
.org 0xa0d06
	movs r0, #16	@ 000a0d06 1020
.org 0xa0d08
	orrs r0, r1	@ 000a0d08 0843
.org 0xa0d0a
	strb r0, [r3, #11]	@ 000a0d0a d872
.org 0xa0d0c
	ldrb r0, [r3, #28]	@ 000a0d0c 187f
.org 0xa0d0e
	strb r0, [r3, #29]	@ 000a0d0e 5877
.org 0xa0d10
	ldr r0, [r6, #0]	@ 000a0d10 3068
.org 0xa0d12
	ldr r1, [r6, #4]	@ 000a0d12 7168
.org 0xa0d14
	str r0, [r3, #84]	@ 000a0d14 5865
.org 0xa0d16
	str r1, [r3, #88]	@ 000a0d16 9965
.org 0xa0d18
	strb r4, [r3, #16]	@ 000a0d18 1c74
.org 0xa0d1a
	strb r5, [r3, #17]	@ 000a0d1a 5d74
.org 0xa0d1c
	cmp r4, #1	@ 000a0d1c 012c
.org 0xa0d1e
	bne.n 0xa0d2a	@ 000a0d1e 04d1
.org 0xa0d20
	ldr r1, [pc, #24]	@ 000a0d20 0649
.org 0xa0d22
	adds r1, #38	@ 000a0d22 2631
.org 0xa0d24
	ldrb r0, [r1, #0]	@ 000a0d24 0878
.org 0xa0d26
	adds r0, #1	@ 000a0d26 0130
.org 0xa0d28
	strb r0, [r1, #0]	@ 000a0d28 0870
.org 0xa0d2a
	adds r0, r3, #0	@ 000a0d2a 181c
.org 0xa0d2c
	pop {r4, r5, r6}	@ 000a0d2c 70bc
.org 0xa0d2e
	pop {r1}	@ 000a0d2e 02bc
.org 0xa0d30
	bx r1	@ 000a0d30 0847
