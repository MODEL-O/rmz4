@ FUN_080e41b8  entry 0x080e41b8  size 80
.thumb
.org 0xe41b8
FUN_080e41b8:
	push {r4, r5, r6, lr}	@ 000e41b8 70b5
.org 0xe41ba
	adds r6, r0, #0	@ 000e41ba 061c
.org 0xe41bc
	lsls r1, r1, #24	@ 000e41bc 0906
.org 0xe41be
	lsrs r5, r1, #24	@ 000e41be 0d0e
.org 0xe41c0
	lsls r2, r2, #24	@ 000e41c0 1206
.org 0xe41c2
	lsrs r4, r2, #24	@ 000e41c2 140e
.org 0xe41c4
	ldr r0, [pc, #64]	@ 000e41c4 1048
.org 0xe41c6
	ldr r0, [r0, #0]	@ 000e41c6 0068
.org 0xe41c8
	bl 0x5500	@ 000e41c8 21f79af9
.org 0xe41cc
	adds r3, r0, #0	@ 000e41cc 031c
.org 0xe41ce
	cmp r3, #0	@ 000e41ce 002b
.org 0xe41d0
	beq.n 0xe4202	@ 000e41d0 17d0
.org 0xe41d2
	adds r1, r3, #0	@ 000e41d2 191c
.org 0xe41d4
	adds r1, #37	@ 000e41d4 2531
.org 0xe41d6
	movs r2, #0	@ 000e41d6 0022
.org 0xe41d8
	movs r0, #1	@ 000e41d8 0120
.org 0xe41da
	strb r0, [r1, #0]	@ 000e41da 0870
.org 0xe41dc
	ldr r0, [pc, #44]	@ 000e41dc 0b48
.org 0xe41de
	movs r1, #73	@ 000e41de 4921
.org 0xe41e0
	strb r1, [r3, #9]	@ 000e41e0 5972
.org 0xe41e2
	adds r1, #219	@ 000e41e2 db31
.org 0xe41e4
	adds r0, r0, r1	@ 000e41e4 4018
.org 0xe41e6
	ldr r0, [r0, #0]	@ 000e41e6 0068
.org 0xe41e8
	ldr r0, [r0, #0]	@ 000e41e8 0068
.org 0xe41ea
	str r0, [r3, #20]	@ 000e41ea 5861
.org 0xe41ec
	movs r0, #0	@ 000e41ec 0020
.org 0xe41ee
	strh r2, [r3, #32]	@ 000e41ee 1a84
.org 0xe41f0
	adds r1, r3, #0	@ 000e41f0 191c
.org 0xe41f2
	adds r1, #34	@ 000e41f2 2231
.org 0xe41f4
	strb r0, [r1, #0]	@ 000e41f4 0870
.org 0xe41f6
	ldr r0, [r6, #0]	@ 000e41f6 3068
.org 0xe41f8
	ldr r1, [r6, #4]	@ 000e41f8 7168
.org 0xe41fa
	str r0, [r3, #84]	@ 000e41fa 5865
.org 0xe41fc
	str r1, [r3, #88]	@ 000e41fc 9965
.org 0xe41fe
	strb r5, [r3, #16]	@ 000e41fe 1d74
.org 0xe4200
	strb r4, [r3, #17]	@ 000e4200 5c74
.org 0xe4202
	pop {r4, r5, r6}	@ 000e4202 70bc
.org 0xe4204
	pop {r0}	@ 000e4204 01bc
.org 0xe4206
	bx r0	@ 000e4206 0047
