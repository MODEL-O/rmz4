@ FUN_080e94dc  entry 0x080e94dc  size 102
.thumb
.org 0xe94dc
FUN_080e94dc:
	push {r4, r5, r6, r7, lr}	@ 000e94dc f0b5
.org 0xe94de
	mov r7, r9	@ 000e94de 4f46
.org 0xe94e0
	mov r6, r8	@ 000e94e0 4646
.org 0xe94e2
	push {r6, r7}	@ 000e94e2 c0b4
.org 0xe94e4
	sub sp, #4	@ 000e94e4 81b0
.org 0xe94e6
	mov r8, r0	@ 000e94e6 8046
.org 0xe94e8
	adds r5, r1, #0	@ 000e94e8 0d1c
.org 0xe94ea
	lsls r2, r2, #16	@ 000e94ea 1204
.org 0xe94ec
	lsrs r0, r2, #16	@ 000e94ec 100c
.org 0xe94ee
	mov r9, r0	@ 000e94ee 8146
.org 0xe94f0
	asrs r4, r2, #16	@ 000e94f0 1414
.org 0xe94f2
	str r4, [sp, #0]	@ 000e94f2 0094
.org 0xe94f4
	mov r0, r8	@ 000e94f4 4046
.org 0xe94f6
	movs r1, #6	@ 000e94f6 0621
.org 0xe94f8
	adds r2, r5, #0	@ 000e94f8 2a1c
.org 0xe94fa
	movs r3, #196	@ 000e94fa c423
.org 0xe94fc
	bl 0x5440	@ 000e94fc 1bf7a0ff
.org 0xe9500
	movs r3, #0	@ 000e9500 0023
.org 0xe9502
	cmp r3, r4	@ 000e9502 a342
.org 0xe9504
	bge.n 0xe9526	@ 000e9504 0fda
.org 0xe9506
	movs r7, #196	@ 000e9506 c427
.org 0xe9508
	ldr r6, [pc, #56]	@ 000e9508 0e4e
.org 0xe950a
	lsls r0, r3, #16	@ 000e950a 1804
.org 0xe950c
	asrs r0, r0, #16	@ 000e950c 0014
.org 0xe950e
	adds r2, r0, #0	@ 000e950e 021c
.org 0xe9510
	muls r2, r7	@ 000e9510 7a43
.org 0xe9512
	adds r2, r2, r5	@ 000e9512 5219
.org 0xe9514
	ldrb r1, [r6, #0]	@ 000e9514 3178
.org 0xe9516
	adds r1, r1, r3	@ 000e9516 c918
.org 0xe9518
	strb r1, [r2, #28]	@ 000e9518 1177
.org 0xe951a
	adds r0, #1	@ 000e951a 0130
.org 0xe951c
	lsls r0, r0, #16	@ 000e951c 0004
.org 0xe951e
	lsrs r3, r0, #16	@ 000e951e 030c
.org 0xe9520
	asrs r0, r0, #16	@ 000e9520 0014
.org 0xe9522
	cmp r0, r4	@ 000e9522 a042
.org 0xe9524
	blt.n 0xe950a	@ 000e9524 f1db
.org 0xe9526
	ldr r0, [pc, #28]	@ 000e9526 0748
.org 0xe9528
	ldrb r1, [r0, #0]	@ 000e9528 0178
.org 0xe952a
	add r1, r9	@ 000e952a 4944
.org 0xe952c
	strb r1, [r0, #0]	@ 000e952c 0170
.org 0xe952e
	ldr r0, [pc, #24]	@ 000e952e 0648
.org 0xe9530
	mov r1, r8	@ 000e9530 4146
.org 0xe9532
	str r1, [r0, #0]	@ 000e9532 0160
.org 0xe9534
	add sp, #4	@ 000e9534 01b0
.org 0xe9536
	pop {r3, r4}	@ 000e9536 18bc
.org 0xe9538
	mov r8, r3	@ 000e9538 9846
.org 0xe953a
	mov r9, r4	@ 000e953a a146
.org 0xe953c
	pop {r4, r5, r6, r7}	@ 000e953c f0bc
.org 0xe953e
	pop {r0}	@ 000e953e 01bc
.org 0xe9540
	bx r0	@ 000e9540 0047
