@ FUN_080cf8ac  entry 0x080cf8ac  size 78
.thumb
.org 0xcf8ac
FUN_080cf8ac:
	push {r4, r5, r6, lr}	@ 000cf8ac 70b5
.org 0xcf8ae
	adds r6, r0, #0	@ 000cf8ae 061c
.org 0xcf8b0
	lsls r1, r1, #24	@ 000cf8b0 0906
.org 0xcf8b2
	lsrs r5, r1, #24	@ 000cf8b2 0d0e
.org 0xcf8b4
	lsls r2, r2, #24	@ 000cf8b4 1206
.org 0xcf8b6
	lsrs r4, r2, #24	@ 000cf8b6 140e
.org 0xcf8b8
	ldr r0, [pc, #64]	@ 000cf8b8 1048
.org 0xcf8ba
	ldr r0, [r0, #0]	@ 000cf8ba 0068
.org 0xcf8bc
	bl 0x5500	@ 000cf8bc 35f720fe
.org 0xcf8c0
	adds r3, r0, #0	@ 000cf8c0 031c
.org 0xcf8c2
	cmp r3, #0	@ 000cf8c2 002b
.org 0xcf8c4
	beq.n 0xcf8f4	@ 000cf8c4 16d0
.org 0xcf8c6
	adds r1, r3, #0	@ 000cf8c6 191c
.org 0xcf8c8
	adds r1, #37	@ 000cf8c8 2531
.org 0xcf8ca
	movs r2, #0	@ 000cf8ca 0022
.org 0xcf8cc
	movs r0, #8	@ 000cf8cc 0820
.org 0xcf8ce
	strb r0, [r1, #0]	@ 000cf8ce 0870
.org 0xcf8d0
	ldr r0, [pc, #44]	@ 000cf8d0 0b48
.org 0xcf8d2
	movs r1, #59	@ 000cf8d2 3b21
.org 0xcf8d4
	strb r1, [r3, #9]	@ 000cf8d4 5972
.org 0xcf8d6
	adds r0, #236	@ 000cf8d6 ec30
.org 0xcf8d8
	ldr r0, [r0, #0]	@ 000cf8d8 0068
.org 0xcf8da
	ldr r0, [r0, #0]	@ 000cf8da 0068
.org 0xcf8dc
	str r0, [r3, #20]	@ 000cf8dc 5861
.org 0xcf8de
	movs r0, #0	@ 000cf8de 0020
.org 0xcf8e0
	strh r2, [r3, #32]	@ 000cf8e0 1a84
.org 0xcf8e2
	adds r1, r3, #0	@ 000cf8e2 191c
.org 0xcf8e4
	adds r1, #34	@ 000cf8e4 2231
.org 0xcf8e6
	strb r0, [r1, #0]	@ 000cf8e6 0870
.org 0xcf8e8
	ldr r0, [r6, #0]	@ 000cf8e8 3068
.org 0xcf8ea
	ldr r1, [r6, #4]	@ 000cf8ea 7168
.org 0xcf8ec
	str r0, [r3, #84]	@ 000cf8ec 5865
.org 0xcf8ee
	str r1, [r3, #88]	@ 000cf8ee 9965
.org 0xcf8f0
	strb r5, [r3, #16]	@ 000cf8f0 1d74
.org 0xcf8f2
	strb r4, [r3, #17]	@ 000cf8f2 5c74
.org 0xcf8f4
	pop {r4, r5, r6}	@ 000cf8f4 70bc
.org 0xcf8f6
	pop {r0}	@ 000cf8f6 01bc
.org 0xcf8f8
	bx r0	@ 000cf8f8 0047
