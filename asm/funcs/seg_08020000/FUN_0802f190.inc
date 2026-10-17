@ FUN_0802f190  entry 0x0802f190  size 54
.thumb
.org 0x2f190
FUN_0802f190:
	push {r4, lr}	@ 0002f190 10b5
.org 0x2f192
	adds r4, r0, #0	@ 0002f192 041c
.org 0x2f194
	bl 0x2b478	@ 0002f194 fcf770f9
.org 0x2f198
	adds r3, r0, #0	@ 0002f198 031c
.org 0x2f19a
	cmp r3, #0	@ 0002f19a 002b
.org 0x2f19c
	beq.n 0x2f1be	@ 0002f19c 0fd0
.org 0x2f19e
	adds r1, r3, #0	@ 0002f19e 191c
.org 0x2f1a0
	adds r1, #37	@ 0002f1a0 2531
.org 0x2f1a2
	movs r2, #0	@ 0002f1a2 0022
.org 0x2f1a4
	movs r0, #16	@ 0002f1a4 1020
.org 0x2f1a6
	strb r0, [r1, #0]	@ 0002f1a6 0870
.org 0x2f1a8
	ldr r0, [pc, #28]	@ 0002f1a8 0748
.org 0x2f1aa
	strb r2, [r3, #9]	@ 0002f1aa 5a72
.org 0x2f1ac
	ldr r0, [r0, #0]	@ 0002f1ac 0068
.org 0x2f1ae
	ldr r0, [r0, #0]	@ 0002f1ae 0068
.org 0x2f1b0
	str r0, [r3, #20]	@ 0002f1b0 5861
.org 0x2f1b2
	ldr r0, [r4, #0]	@ 0002f1b2 2068
.org 0x2f1b4
	ldr r1, [r4, #4]	@ 0002f1b4 6168
.org 0x2f1b6
	str r0, [r3, #84]	@ 0002f1b6 5865
.org 0x2f1b8
	str r1, [r3, #88]	@ 0002f1b8 9965
.org 0x2f1ba
	strb r2, [r3, #16]	@ 0002f1ba 1a74
.org 0x2f1bc
	strb r2, [r3, #17]	@ 0002f1bc 5a74
.org 0x2f1be
	adds r0, r3, #0	@ 0002f1be 181c
.org 0x2f1c0
	pop {r4}	@ 0002f1c0 10bc
.org 0x2f1c2
	pop {r1}	@ 0002f1c2 02bc
.org 0x2f1c4
	bx r1	@ 0002f1c4 0847
