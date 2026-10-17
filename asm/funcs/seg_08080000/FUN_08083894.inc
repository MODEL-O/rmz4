@ FUN_08083894  entry 0x08083894  size 84
.thumb
.org 0x83894
FUN_08083894:
	push {r4, r5, r6, lr}	@ 00083894 70b5
.org 0x83896
	adds r6, r0, #0	@ 00083896 061c
.org 0x83898
	lsls r1, r1, #24	@ 00083898 0906
.org 0x8389a
	lsrs r5, r1, #24	@ 0008389a 0d0e
.org 0x8389c
	lsls r2, r2, #24	@ 0008389c 1206
.org 0x8389e
	lsrs r4, r2, #24	@ 0008389e 140e
.org 0x838a0
	ldr r0, [pc, #68]	@ 000838a0 1148
.org 0x838a2
	ldr r0, [r0, #0]	@ 000838a2 0068
.org 0x838a4
	bl 0x5500	@ 000838a4 81f72cfe
.org 0x838a8
	adds r3, r0, #0	@ 000838a8 031c
.org 0x838aa
	cmp r3, #0	@ 000838aa 002b
.org 0x838ac
	beq.n 0x838e0	@ 000838ac 18d0
.org 0x838ae
	adds r1, r3, #0	@ 000838ae 191c
.org 0x838b0
	adds r1, #37	@ 000838b0 2531
.org 0x838b2
	movs r2, #0	@ 000838b2 0022
.org 0x838b4
	movs r0, #24	@ 000838b4 1820
.org 0x838b6
	strb r0, [r1, #0]	@ 000838b6 0870
.org 0x838b8
	ldr r1, [pc, #48]	@ 000838b8 0c49
.org 0x838ba
	movs r0, #4	@ 000838ba 0420
.org 0x838bc
	strb r0, [r3, #9]	@ 000838bc 5872
.org 0x838be
	ldr r0, [r1, #16]	@ 000838be 0869
.org 0x838c0
	ldr r0, [r0, #0]	@ 000838c0 0068
.org 0x838c2
	str r0, [r3, #20]	@ 000838c2 5861
.org 0x838c4
	movs r0, #0	@ 000838c4 0020
.org 0x838c6
	strh r2, [r3, #32]	@ 000838c6 1a84
.org 0x838c8
	adds r1, r3, #0	@ 000838c8 191c
.org 0x838ca
	adds r1, #34	@ 000838ca 2231
.org 0x838cc
	strb r0, [r1, #0]	@ 000838cc 0870
.org 0x838ce
	ldrb r1, [r3, #11]	@ 000838ce d97a
.org 0x838d0
	movs r0, #16	@ 000838d0 1020
.org 0x838d2
	orrs r0, r1	@ 000838d2 0843
.org 0x838d4
	strb r0, [r3, #11]	@ 000838d4 d872
.org 0x838d6
	ldrb r0, [r3, #28]	@ 000838d6 187f
.org 0x838d8
	strb r0, [r3, #29]	@ 000838d8 5877
.org 0x838da
	str r6, [r3, #40]	@ 000838da 9e62
.org 0x838dc
	strb r5, [r3, #16]	@ 000838dc 1d74
.org 0x838de
	strb r4, [r3, #17]	@ 000838de 5c74
.org 0x838e0
	adds r0, r3, #0	@ 000838e0 181c
.org 0x838e2
	pop {r4, r5, r6}	@ 000838e2 70bc
.org 0x838e4
	pop {r1}	@ 000838e4 02bc
.org 0x838e6
	bx r1	@ 000838e6 0847
