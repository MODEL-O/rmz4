@ FUN_080c3090  entry 0x080c3090  size 80
.thumb
.org 0xc3090
FUN_080c3090:
	push {r4, r5, r6, lr}	@ 000c3090 70b5
.org 0xc3092
	adds r6, r0, #0	@ 000c3092 061c
.org 0xc3094
	lsls r1, r1, #24	@ 000c3094 0906
.org 0xc3096
	lsrs r4, r1, #24	@ 000c3096 0c0e
.org 0xc3098
	lsls r2, r2, #24	@ 000c3098 1206
.org 0xc309a
	lsrs r5, r2, #24	@ 000c309a 150e
.org 0xc309c
	ldr r0, [pc, #64]	@ 000c309c 1048
.org 0xc309e
	ldr r0, [r0, #0]	@ 000c309e 0068
.org 0xc30a0
	bl 0x5500	@ 000c30a0 42f72efa
.org 0xc30a4
	adds r3, r0, #0	@ 000c30a4 031c
.org 0xc30a6
	cmp r3, #0	@ 000c30a6 002b
.org 0xc30a8
	beq.n 0xc30d8	@ 000c30a8 16d0
.org 0xc30aa
	adds r1, r3, #0	@ 000c30aa 191c
.org 0xc30ac
	adds r1, #37	@ 000c30ac 2531
.org 0xc30ae
	movs r2, #0	@ 000c30ae 0022
.org 0xc30b0
	movs r0, #8	@ 000c30b0 0820
.org 0xc30b2
	strb r0, [r1, #0]	@ 000c30b2 0870
.org 0xc30b4
	ldr r1, [pc, #44]	@ 000c30b4 0b49
.org 0xc30b6
	movs r0, #17	@ 000c30b6 1120
.org 0xc30b8
	strb r0, [r3, #9]	@ 000c30b8 5872
.org 0xc30ba
	ldr r0, [r1, #68]	@ 000c30ba 486c
.org 0xc30bc
	ldr r0, [r0, #0]	@ 000c30bc 0068
.org 0xc30be
	str r0, [r3, #20]	@ 000c30be 5861
.org 0xc30c0
	movs r0, #0	@ 000c30c0 0020
.org 0xc30c2
	strh r2, [r3, #32]	@ 000c30c2 1a84
.org 0xc30c4
	adds r1, r3, #0	@ 000c30c4 191c
.org 0xc30c6
	adds r1, #34	@ 000c30c6 2231
.org 0xc30c8
	strb r0, [r1, #0]	@ 000c30c8 0870
.org 0xc30ca
	str r6, [r3, #40]	@ 000c30ca 9e62
.org 0xc30cc
	movs r0, #1	@ 000c30cc 0120
.org 0xc30ce
	strb r0, [r3, #16]	@ 000c30ce 1874
.org 0xc30d0
	strb r4, [r3, #17]	@ 000c30d0 5c74
.org 0xc30d2
	adds r0, r3, #0	@ 000c30d2 181c
.org 0xc30d4
	adds r0, #180	@ 000c30d4 b430
.org 0xc30d6
	strb r5, [r0, #0]	@ 000c30d6 0570
.org 0xc30d8
	adds r0, r3, #0	@ 000c30d8 181c
.org 0xc30da
	pop {r4, r5, r6}	@ 000c30da 70bc
.org 0xc30dc
	pop {r1}	@ 000c30dc 02bc
.org 0xc30de
	bx r1	@ 000c30de 0847
