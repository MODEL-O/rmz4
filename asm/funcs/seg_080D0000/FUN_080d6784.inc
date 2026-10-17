@ FUN_080d6784  entry 0x080d6784  size 64
.thumb
.org 0xd6784
FUN_080d6784:
	push {r4, r5, lr}	@ 000d6784 30b5
.org 0xd6786
	adds r5, r0, #0	@ 000d6786 051c
.org 0xd6788
	lsls r1, r1, #24	@ 000d6788 0906
.org 0xd678a
	lsrs r4, r1, #24	@ 000d678a 0c0e
.org 0xd678c
	ldr r0, [pc, #52]	@ 000d678c 0d48
.org 0xd678e
	ldr r0, [r0, #0]	@ 000d678e 0068
.org 0xd6790
	bl 0x5500	@ 000d6790 2ef7b6fe
.org 0xd6794
	adds r3, r0, #0	@ 000d6794 031c
.org 0xd6796
	cmp r3, #0	@ 000d6796 002b
.org 0xd6798
	beq.n 0xd67be	@ 000d6798 11d0
.org 0xd679a
	adds r1, r3, #0	@ 000d679a 191c
.org 0xd679c
	adds r1, #37	@ 000d679c 2531
.org 0xd679e
	movs r2, #0	@ 000d679e 0022
.org 0xd67a0
	movs r0, #1	@ 000d67a0 0120
.org 0xd67a2
	strb r0, [r1, #0]	@ 000d67a2 0870
.org 0xd67a4
	ldr r1, [pc, #32]	@ 000d67a4 0849
.org 0xd67a6
	movs r0, #21	@ 000d67a6 1520
.org 0xd67a8
	strb r0, [r3, #9]	@ 000d67a8 5872
.org 0xd67aa
	ldr r0, [r1, #84]	@ 000d67aa 486d
.org 0xd67ac
	ldr r0, [r0, #0]	@ 000d67ac 0068
.org 0xd67ae
	str r0, [r3, #20]	@ 000d67ae 5861
.org 0xd67b0
	movs r0, #0	@ 000d67b0 0020
.org 0xd67b2
	strh r2, [r3, #32]	@ 000d67b2 1a84
.org 0xd67b4
	adds r1, r3, #0	@ 000d67b4 191c
.org 0xd67b6
	adds r1, #34	@ 000d67b6 2231
.org 0xd67b8
	strb r0, [r1, #0]	@ 000d67b8 0870
.org 0xd67ba
	str r5, [r3, #40]	@ 000d67ba 9d62
.org 0xd67bc
	strb r4, [r3, #19]	@ 000d67bc dc74
.org 0xd67be
	pop {r4, r5}	@ 000d67be 30bc
.org 0xd67c0
	pop {r0}	@ 000d67c0 01bc
.org 0xd67c2
	bx r0	@ 000d67c2 0047
