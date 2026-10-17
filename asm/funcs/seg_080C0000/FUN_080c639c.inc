@ FUN_080c639c  entry 0x080c639c  size 68
.thumb
.org 0xc639c
FUN_080c639c:
	push {r4, r5, lr}	@ 000c639c 30b5
.org 0xc639e
	adds r4, r0, #0	@ 000c639e 041c
.org 0xc63a0
	lsls r1, r1, #24	@ 000c63a0 0906
.org 0xc63a2
	lsrs r5, r1, #24	@ 000c63a2 0d0e
.org 0xc63a4
	ldr r0, [pc, #56]	@ 000c63a4 0e48
.org 0xc63a6
	ldr r0, [r0, #0]	@ 000c63a6 0068
.org 0xc63a8
	bl 0x5500	@ 000c63a8 3ff7aaf8
.org 0xc63ac
	adds r3, r0, #0	@ 000c63ac 031c
.org 0xc63ae
	cmp r3, #0	@ 000c63ae 002b
.org 0xc63b0
	beq.n 0xc63da	@ 000c63b0 13d0
.org 0xc63b2
	adds r1, r3, #0	@ 000c63b2 191c
.org 0xc63b4
	adds r1, #37	@ 000c63b4 2531
.org 0xc63b6
	movs r2, #0	@ 000c63b6 0022
.org 0xc63b8
	movs r0, #8	@ 000c63b8 0820
.org 0xc63ba
	strb r0, [r1, #0]	@ 000c63ba 0870
.org 0xc63bc
	ldr r1, [pc, #36]	@ 000c63bc 0949
.org 0xc63be
	movs r0, #26	@ 000c63be 1a20
.org 0xc63c0
	strb r0, [r3, #9]	@ 000c63c0 5872
.org 0xc63c2
	ldr r0, [r1, #104]	@ 000c63c2 886e
.org 0xc63c4
	ldr r0, [r0, #0]	@ 000c63c4 0068
.org 0xc63c6
	str r0, [r3, #20]	@ 000c63c6 5861
.org 0xc63c8
	movs r0, #0	@ 000c63c8 0020
.org 0xc63ca
	strh r2, [r3, #32]	@ 000c63ca 1a84
.org 0xc63cc
	adds r1, r3, #0	@ 000c63cc 191c
.org 0xc63ce
	adds r1, #34	@ 000c63ce 2231
.org 0xc63d0
	strb r0, [r1, #0]	@ 000c63d0 0870
.org 0xc63d2
	str r4, [r3, #40]	@ 000c63d2 9c62
.org 0xc63d4
	movs r0, #3	@ 000c63d4 0320
.org 0xc63d6
	strb r0, [r3, #16]	@ 000c63d6 1874
.org 0xc63d8
	strb r5, [r3, #17]	@ 000c63d8 5d74
.org 0xc63da
	pop {r4, r5}	@ 000c63da 30bc
.org 0xc63dc
	pop {r0}	@ 000c63dc 01bc
.org 0xc63de
	bx r0	@ 000c63de 0047
