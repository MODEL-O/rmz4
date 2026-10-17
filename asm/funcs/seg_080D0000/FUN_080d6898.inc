@ FUN_080d6898  entry 0x080d6898  size 68
.thumb
.org 0xd6898
FUN_080d6898:
	push {r4, r5, lr}	@ 000d6898 30b5
.org 0xd689a
	adds r4, r0, #0	@ 000d689a 041c
.org 0xd689c
	adds r5, r1, #0	@ 000d689c 0d1c
.org 0xd689e
	ldr r0, [pc, #60]	@ 000d689e 0f48
.org 0xd68a0
	ldr r0, [r0, #0]	@ 000d68a0 0068
.org 0xd68a2
	bl 0x5500	@ 000d68a2 2ef72dfe
.org 0xd68a6
	adds r3, r0, #0	@ 000d68a6 031c
.org 0xd68a8
	cmp r3, #0	@ 000d68a8 002b
.org 0xd68aa
	beq.n 0xd68d6	@ 000d68aa 14d0
.org 0xd68ac
	adds r1, r3, #0	@ 000d68ac 191c
.org 0xd68ae
	adds r1, #37	@ 000d68ae 2531
.org 0xd68b0
	movs r2, #0	@ 000d68b0 0022
.org 0xd68b2
	movs r0, #1	@ 000d68b2 0120
.org 0xd68b4
	strb r0, [r1, #0]	@ 000d68b4 0870
.org 0xd68b6
	ldr r1, [pc, #40]	@ 000d68b6 0a49
.org 0xd68b8
	movs r0, #21	@ 000d68b8 1520
.org 0xd68ba
	strb r0, [r3, #9]	@ 000d68ba 5872
.org 0xd68bc
	ldr r0, [r1, #84]	@ 000d68bc 486d
.org 0xd68be
	ldr r0, [r0, #0]	@ 000d68be 0068
.org 0xd68c0
	str r0, [r3, #20]	@ 000d68c0 5861
.org 0xd68c2
	movs r1, #0	@ 000d68c2 0021
.org 0xd68c4
	strh r2, [r3, #32]	@ 000d68c4 1a84
.org 0xd68c6
	adds r0, r3, #0	@ 000d68c6 181c
.org 0xd68c8
	adds r0, #34	@ 000d68c8 2230
.org 0xd68ca
	strb r1, [r0, #0]	@ 000d68ca 0170
.org 0xd68cc
	movs r0, #3	@ 000d68cc 0320
.org 0xd68ce
	strb r0, [r3, #16]	@ 000d68ce 1874
.org 0xd68d0
	strb r1, [r3, #17]	@ 000d68d0 5974
.org 0xd68d2
	str r4, [r3, #84]	@ 000d68d2 5c65
.org 0xd68d4
	str r5, [r3, #88]	@ 000d68d4 9d65
.org 0xd68d6
	pop {r4, r5}	@ 000d68d6 30bc
.org 0xd68d8
	pop {r0}	@ 000d68d8 01bc
.org 0xd68da
	bx r0	@ 000d68da 0047
