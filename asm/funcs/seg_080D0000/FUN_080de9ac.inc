@ FUN_080de9ac  entry 0x080de9ac  size 84
.thumb
.org 0xde9ac
FUN_080de9ac:
	push {r4, r5, r6, r7, lr}	@ 000de9ac f0b5
.org 0xde9ae
	adds r6, r0, #0	@ 000de9ae 061c
.org 0xde9b0
	adds r7, r1, #0	@ 000de9b0 0f1c
.org 0xde9b2
	lsls r2, r2, #24	@ 000de9b2 1206
.org 0xde9b4
	lsrs r4, r2, #24	@ 000de9b4 140e
.org 0xde9b6
	lsls r3, r3, #24	@ 000de9b6 1b06
.org 0xde9b8
	lsrs r5, r3, #24	@ 000de9b8 1d0e
.org 0xde9ba
	ldr r0, [pc, #68]	@ 000de9ba 1148
.org 0xde9bc
	ldr r0, [r0, #0]	@ 000de9bc 0068
.org 0xde9be
	bl 0x5500	@ 000de9be 26f79ffd
.org 0xde9c2
	adds r3, r0, #0	@ 000de9c2 031c
.org 0xde9c4
	cmp r3, #0	@ 000de9c4 002b
.org 0xde9c6
	beq.n 0xde9f8	@ 000de9c6 17d0
.org 0xde9c8
	adds r1, r3, #0	@ 000de9c8 191c
.org 0xde9ca
	adds r1, #37	@ 000de9ca 2531
.org 0xde9cc
	movs r2, #0	@ 000de9cc 0022
.org 0xde9ce
	movs r0, #1	@ 000de9ce 0120
.org 0xde9d0
	strb r0, [r1, #0]	@ 000de9d0 0870
.org 0xde9d2
	ldr r0, [pc, #48]	@ 000de9d2 0c48
.org 0xde9d4
	movs r1, #50	@ 000de9d4 3221
.org 0xde9d6
	strb r1, [r3, #9]	@ 000de9d6 5972
.org 0xde9d8
	adds r0, #200	@ 000de9d8 c830
.org 0xde9da
	ldr r0, [r0, #0]	@ 000de9da 0068
.org 0xde9dc
	ldr r0, [r0, #0]	@ 000de9dc 0068
.org 0xde9de
	str r0, [r3, #20]	@ 000de9de 5861
.org 0xde9e0
	movs r0, #0	@ 000de9e0 0020
.org 0xde9e2
	strh r2, [r3, #32]	@ 000de9e2 1a84
.org 0xde9e4
	adds r1, r3, #0	@ 000de9e4 191c
.org 0xde9e6
	adds r1, #34	@ 000de9e6 2231
.org 0xde9e8
	strb r0, [r1, #0]	@ 000de9e8 0870
.org 0xde9ea
	str r6, [r3, #40]	@ 000de9ea 9e62
.org 0xde9ec
	str r7, [r3, #116]	@ 000de9ec 5f67
.org 0xde9ee
	adds r0, r3, #0	@ 000de9ee 181c
.org 0xde9f0
	adds r0, #120	@ 000de9f0 7830
.org 0xde9f2
	strb r4, [r0, #0]	@ 000de9f2 0470
.org 0xde9f4
	adds r0, #1	@ 000de9f4 0130
.org 0xde9f6
	strb r5, [r0, #0]	@ 000de9f6 0570
.org 0xde9f8
	adds r0, r3, #0	@ 000de9f8 181c
.org 0xde9fa
	pop {r4, r5, r6, r7}	@ 000de9fa f0bc
.org 0xde9fc
	pop {r1}	@ 000de9fc 02bc
.org 0xde9fe
	bx r1	@ 000de9fe 0847
