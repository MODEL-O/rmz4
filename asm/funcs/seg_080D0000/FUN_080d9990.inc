@ FUN_080d9990  entry 0x080d9990  size 78
.thumb
.org 0xd9990
FUN_080d9990:
	push {r4, r5, r6, lr}	@ 000d9990 70b5
.org 0xd9992
	adds r6, r0, #0	@ 000d9992 061c
.org 0xd9994
	lsls r1, r1, #24	@ 000d9994 0906
.org 0xd9996
	lsrs r5, r1, #24	@ 000d9996 0d0e
.org 0xd9998
	lsls r2, r2, #24	@ 000d9998 1206
.org 0xd999a
	lsrs r4, r2, #24	@ 000d999a 140e
.org 0xd999c
	ldr r0, [pc, #64]	@ 000d999c 1048
.org 0xd999e
	ldr r0, [r0, #0]	@ 000d999e 0068
.org 0xd99a0
	bl 0x5500	@ 000d99a0 2bf7aefd
.org 0xd99a4
	adds r3, r0, #0	@ 000d99a4 031c
.org 0xd99a6
	cmp r3, #0	@ 000d99a6 002b
.org 0xd99a8
	beq.n 0xd99d6	@ 000d99a8 15d0
.org 0xd99aa
	adds r1, r3, #0	@ 000d99aa 191c
.org 0xd99ac
	adds r1, #37	@ 000d99ac 2531
.org 0xd99ae
	movs r2, #0	@ 000d99ae 0022
.org 0xd99b0
	movs r0, #1	@ 000d99b0 0120
.org 0xd99b2
	strb r0, [r1, #0]	@ 000d99b2 0870
.org 0xd99b4
	ldr r1, [pc, #44]	@ 000d99b4 0b49
.org 0xd99b6
	movs r0, #30	@ 000d99b6 1e20
.org 0xd99b8
	strb r0, [r3, #9]	@ 000d99b8 5872
.org 0xd99ba
	ldr r0, [r1, #120]	@ 000d99ba 886f
.org 0xd99bc
	ldr r0, [r0, #0]	@ 000d99bc 0068
.org 0xd99be
	str r0, [r3, #20]	@ 000d99be 5861
.org 0xd99c0
	movs r0, #0	@ 000d99c0 0020
.org 0xd99c2
	strh r2, [r3, #32]	@ 000d99c2 1a84
.org 0xd99c4
	adds r1, r3, #0	@ 000d99c4 191c
.org 0xd99c6
	adds r1, #34	@ 000d99c6 2231
.org 0xd99c8
	strb r0, [r1, #0]	@ 000d99c8 0870
.org 0xd99ca
	ldr r0, [r6, #0]	@ 000d99ca 3068
.org 0xd99cc
	ldr r1, [r6, #4]	@ 000d99cc 7168
.org 0xd99ce
	str r0, [r3, #84]	@ 000d99ce 5865
.org 0xd99d0
	str r1, [r3, #88]	@ 000d99d0 9965
.org 0xd99d2
	strb r5, [r3, #16]	@ 000d99d2 1d74
.org 0xd99d4
	strb r4, [r3, #17]	@ 000d99d4 5c74
.org 0xd99d6
	adds r0, r3, #0	@ 000d99d6 181c
.org 0xd99d8
	pop {r4, r5, r6}	@ 000d99d8 70bc
.org 0xd99da
	pop {r1}	@ 000d99da 02bc
.org 0xd99dc
	bx r1	@ 000d99dc 0847
