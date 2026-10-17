@ FUN_080fe6b8  entry 0x080fe6b8  size 84
.thumb
.org 0xfe6b8
FUN_080fe6b8:
	push {r4, r5, r6, lr}	@ 000fe6b8 70b5
.org 0xfe6ba
	adds r6, r0, #0	@ 000fe6ba 061c
.org 0xfe6bc
	lsls r1, r1, #24	@ 000fe6bc 0906
.org 0xfe6be
	lsrs r5, r1, #24	@ 000fe6be 0d0e
.org 0xfe6c0
	lsls r2, r2, #24	@ 000fe6c0 1206
.org 0xfe6c2
	lsrs r4, r2, #24	@ 000fe6c2 140e
.org 0xfe6c4
	ldr r0, [pc, #68]	@ 000fe6c4 1148
.org 0xfe6c6
	ldr r0, [r0, #0]	@ 000fe6c6 0068
.org 0xfe6c8
	bl 0x5500	@ 000fe6c8 06f71aff
.org 0xfe6cc
	adds r3, r0, #0	@ 000fe6cc 031c
.org 0xfe6ce
	cmp r3, #0	@ 000fe6ce 002b
.org 0xfe6d0
	beq.n 0xfe706	@ 000fe6d0 19d0
.org 0xfe6d2
	adds r1, r3, #0	@ 000fe6d2 191c
.org 0xfe6d4
	adds r1, #37	@ 000fe6d4 2531
.org 0xfe6d6
	movs r2, #0	@ 000fe6d6 0022
.org 0xfe6d8
	movs r0, #30	@ 000fe6d8 1e20
.org 0xfe6da
	strb r0, [r1, #0]	@ 000fe6da 0870
.org 0xfe6dc
	ldr r0, [pc, #48]	@ 000fe6dc 0c48
.org 0xfe6de
	movs r1, #48	@ 000fe6de 3021
.org 0xfe6e0
	strb r1, [r3, #9]	@ 000fe6e0 5972
.org 0xfe6e2
	adds r0, #192	@ 000fe6e2 c030
.org 0xfe6e4
	ldr r0, [r0, #0]	@ 000fe6e4 0068
.org 0xfe6e6
	ldr r0, [r0, #0]	@ 000fe6e6 0068
.org 0xfe6e8
	str r0, [r3, #20]	@ 000fe6e8 5861
.org 0xfe6ea
	movs r0, #0	@ 000fe6ea 0020
.org 0xfe6ec
	strh r2, [r3, #32]	@ 000fe6ec 1a84
.org 0xfe6ee
	adds r1, r3, #0	@ 000fe6ee 191c
.org 0xfe6f0
	adds r1, #34	@ 000fe6f0 2231
.org 0xfe6f2
	strb r0, [r1, #0]	@ 000fe6f2 0870
.org 0xfe6f4
	ldrb r1, [r3, #11]	@ 000fe6f4 d97a
.org 0xfe6f6
	movs r0, #16	@ 000fe6f6 1020
.org 0xfe6f8
	orrs r0, r1	@ 000fe6f8 0843
.org 0xfe6fa
	strb r0, [r3, #11]	@ 000fe6fa d872
.org 0xfe6fc
	ldrb r0, [r3, #28]	@ 000fe6fc 187f
.org 0xfe6fe
	strb r0, [r3, #29]	@ 000fe6fe 5877
.org 0xfe700
	str r6, [r3, #40]	@ 000fe700 9e62
.org 0xfe702
	strb r5, [r3, #16]	@ 000fe702 1d74
.org 0xfe704
	strb r4, [r3, #17]	@ 000fe704 5c74
.org 0xfe706
	pop {r4, r5, r6}	@ 000fe706 70bc
.org 0xfe708
	pop {r0}	@ 000fe708 01bc
.org 0xfe70a
	bx r0	@ 000fe70a 0047
