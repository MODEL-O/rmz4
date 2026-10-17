@ FUN_080c24a4  entry 0x080c24a4  size 64
.thumb
.org 0xc24a4
FUN_080c24a4:
	push {r4, lr}	@ 000c24a4 10b5
.org 0xc24a6
	adds r4, r0, #0	@ 000c24a6 041c
.org 0xc24a8
	ldr r0, [pc, #56]	@ 000c24a8 0e48
.org 0xc24aa
	ldr r0, [r0, #0]	@ 000c24aa 0068
.org 0xc24ac
	bl 0x5500	@ 000c24ac 43f728f8
.org 0xc24b0
	adds r3, r0, #0	@ 000c24b0 031c
.org 0xc24b2
	cmp r3, #0	@ 000c24b2 002b
.org 0xc24b4
	beq.n 0xc24dc	@ 000c24b4 12d0
.org 0xc24b6
	adds r1, r3, #0	@ 000c24b6 191c
.org 0xc24b8
	adds r1, #37	@ 000c24b8 2531
.org 0xc24ba
	movs r2, #0	@ 000c24ba 0022
.org 0xc24bc
	movs r0, #8	@ 000c24bc 0820
.org 0xc24be
	strb r0, [r1, #0]	@ 000c24be 0870
.org 0xc24c0
	ldr r1, [pc, #36]	@ 000c24c0 0949
.org 0xc24c2
	movs r0, #15	@ 000c24c2 0f20
.org 0xc24c4
	strb r0, [r3, #9]	@ 000c24c4 5872
.org 0xc24c6
	ldr r0, [r1, #60]	@ 000c24c6 c86b
.org 0xc24c8
	ldr r0, [r0, #0]	@ 000c24c8 0068
.org 0xc24ca
	str r0, [r3, #20]	@ 000c24ca 5861
.org 0xc24cc
	movs r0, #0	@ 000c24cc 0020
.org 0xc24ce
	strh r2, [r3, #32]	@ 000c24ce 1a84
.org 0xc24d0
	adds r1, r3, #0	@ 000c24d0 191c
.org 0xc24d2
	adds r1, #34	@ 000c24d2 2231
.org 0xc24d4
	strb r0, [r1, #0]	@ 000c24d4 0870
.org 0xc24d6
	str r4, [r3, #40]	@ 000c24d6 9c62
.org 0xc24d8
	movs r0, #1	@ 000c24d8 0120
.org 0xc24da
	strb r0, [r3, #16]	@ 000c24da 1874
.org 0xc24dc
	adds r0, r3, #0	@ 000c24dc 181c
.org 0xc24de
	pop {r4}	@ 000c24de 10bc
.org 0xc24e0
	pop {r1}	@ 000c24e0 02bc
.org 0xc24e2
	bx r1	@ 000c24e2 0847
