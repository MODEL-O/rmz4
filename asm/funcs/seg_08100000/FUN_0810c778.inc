@ FUN_0810c778  entry 0x0810c778  size 70
.thumb
.org 0x10c778
FUN_0810c778:
	push {r4, r5, r6, lr}	@ 0010c778 70b5
.org 0x10c77a
	adds r6, r0, #0	@ 0010c77a 061c
.org 0x10c77c
	lsls r1, r1, #24	@ 0010c77c 0906
.org 0x10c77e
	lsrs r5, r1, #24	@ 0010c77e 0d0e
.org 0x10c780
	lsls r2, r2, #24	@ 0010c780 1206
.org 0x10c782
	lsrs r4, r2, #24	@ 0010c782 140e
.org 0x10c784
	ldr r0, [pc, #56]	@ 0010c784 0e48
.org 0x10c786
	ldr r0, [r0, #0]	@ 0010c786 0068
.org 0x10c788
	bl 0x5500	@ 0010c788 f8f6bafe
.org 0x10c78c
	adds r3, r0, #0	@ 0010c78c 031c
.org 0x10c78e
	cmp r3, #0	@ 0010c78e 002b
.org 0x10c790
	beq.n 0x10c7b8	@ 0010c790 12d0
.org 0x10c792
	adds r1, r3, #0	@ 0010c792 191c
.org 0x10c794
	adds r1, #37	@ 0010c794 2531
.org 0x10c796
	movs r2, #0	@ 0010c796 0022
.org 0x10c798
	movs r0, #16	@ 0010c798 1020
.org 0x10c79a
	strb r0, [r1, #0]	@ 0010c79a 0870
.org 0x10c79c
	ldr r1, [pc, #36]	@ 0010c79c 0949
.org 0x10c79e
	movs r0, #10	@ 0010c79e 0a20
.org 0x10c7a0
	strb r0, [r3, #9]	@ 0010c7a0 5872
.org 0x10c7a2
	ldr r0, [r1, #40]	@ 0010c7a2 886a
.org 0x10c7a4
	ldr r0, [r0, #0]	@ 0010c7a4 0068
.org 0x10c7a6
	str r0, [r3, #20]	@ 0010c7a6 5861
.org 0x10c7a8
	movs r0, #0	@ 0010c7a8 0020
.org 0x10c7aa
	strh r2, [r3, #32]	@ 0010c7aa 1a84
.org 0x10c7ac
	adds r1, r3, #0	@ 0010c7ac 191c
.org 0x10c7ae
	adds r1, #34	@ 0010c7ae 2231
.org 0x10c7b0
	strb r0, [r1, #0]	@ 0010c7b0 0870
.org 0x10c7b2
	str r6, [r3, #40]	@ 0010c7b2 9e62
.org 0x10c7b4
	strb r5, [r3, #16]	@ 0010c7b4 1d74
.org 0x10c7b6
	strb r4, [r3, #17]	@ 0010c7b6 5c74
.org 0x10c7b8
	pop {r4, r5, r6}	@ 0010c7b8 70bc
.org 0x10c7ba
	pop {r0}	@ 0010c7ba 01bc
.org 0x10c7bc
	bx r0	@ 0010c7bc 0047
