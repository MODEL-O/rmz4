@ FUN_080dc4d8  entry 0x080dc4d8  size 152
.thumb
.org 0xdc4d8
FUN_080dc4d8:
	push {r4, r5, r6, r7, lr}	@ 000dc4d8 f0b5
.org 0xdc4da
	mov r7, sl	@ 000dc4da 5746
.org 0xdc4dc
	mov r6, r9	@ 000dc4dc 4e46
.org 0xdc4de
	mov r5, r8	@ 000dc4de 4546
.org 0xdc4e0
	push {r5, r6, r7}	@ 000dc4e0 e0b4
.org 0xdc4e2
	sub sp, #4	@ 000dc4e2 81b0
.org 0xdc4e4
	str r0, [sp, #0]	@ 000dc4e4 0090
.org 0xdc4e6
	adds r5, r1, #0	@ 000dc4e6 0d1c
.org 0xdc4e8
	adds r6, r2, #0	@ 000dc4e8 161c
.org 0xdc4ea
	mov sl, r3	@ 000dc4ea 9a46
.org 0xdc4ec
	ldr r0, [sp, #40]	@ 000dc4ec 0a98
.org 0xdc4ee
	ldr r1, [sp, #44]	@ 000dc4ee 0b99
.org 0xdc4f0
	lsls r0, r0, #24	@ 000dc4f0 0006
.org 0xdc4f2
	lsrs r0, r0, #24	@ 000dc4f2 000e
.org 0xdc4f4
	mov r9, r0	@ 000dc4f4 8146
.org 0xdc4f6
	lsls r1, r1, #24	@ 000dc4f6 0906
.org 0xdc4f8
	lsrs r1, r1, #24	@ 000dc4f8 090e
.org 0xdc4fa
	mov r8, r1	@ 000dc4fa 8846
.org 0xdc4fc
	ldr r0, [pc, #112]	@ 000dc4fc 1c48
.org 0xdc4fe
	ldr r0, [r0, #0]	@ 000dc4fe 0068
.org 0xdc500
	bl 0x5500	@ 000dc500 28f7feff
.org 0xdc504
	mov ip, r0	@ 000dc504 8446
.org 0xdc506
	cmp r0, #0	@ 000dc506 0028
.org 0xdc508
	beq.n 0xdc560	@ 000dc508 2ad0
.org 0xdc50a
	mov r4, ip	@ 000dc50a 6446
.org 0xdc50c
	adds r4, #37	@ 000dc50c 2534
.org 0xdc50e
	movs r2, #0	@ 000dc50e 0022
.org 0xdc510
	movs r3, #1	@ 000dc510 0123
.org 0xdc512
	strb r3, [r4, #0]	@ 000dc512 2370
.org 0xdc514
	ldr r0, [pc, #92]	@ 000dc514 1748
.org 0xdc516
	movs r1, #43	@ 000dc516 2b21
.org 0xdc518
	mov r7, ip	@ 000dc518 6746
.org 0xdc51a
	strb r1, [r7, #9]	@ 000dc51a 7972
.org 0xdc51c
	adds r0, #172	@ 000dc51c ac30
.org 0xdc51e
	ldr r0, [r0, #0]	@ 000dc51e 0068
.org 0xdc520
	ldr r0, [r0, #0]	@ 000dc520 0068
.org 0xdc522
	str r0, [r7, #20]	@ 000dc522 7861
.org 0xdc524
	movs r1, #0	@ 000dc524 0021
.org 0xdc526
	strh r2, [r7, #32]	@ 000dc526 3a84
.org 0xdc528
	mov r0, ip	@ 000dc528 6046
.org 0xdc52a
	adds r0, #34	@ 000dc52a 2230
.org 0xdc52c
	strb r1, [r0, #0]	@ 000dc52c 0170
.org 0xdc52e
	movs r0, #4	@ 000dc52e 0420
.org 0xdc530
	strb r0, [r7, #16]	@ 000dc530 3874
.org 0xdc532
	ldr r0, [sp, #0]	@ 000dc532 0098
.org 0xdc534
	str r0, [r7, #40]	@ 000dc534 b862
.org 0xdc536
	ldr r0, [sp, #36]	@ 000dc536 0998
.org 0xdc538
	str r0, [r7, #116]	@ 000dc538 7867
.org 0xdc53a
	ldr r0, [r5, #0]	@ 000dc53a 2868
.org 0xdc53c
	str r0, [r7, #84]	@ 000dc53c 7865
.org 0xdc53e
	ldr r0, [r5, #4]	@ 000dc53e 6868
.org 0xdc540
	str r0, [r7, #88]	@ 000dc540 b865
.org 0xdc542
	ldr r0, [r6, #0]	@ 000dc542 3068
.org 0xdc544
	str r0, [r7, #92]	@ 000dc544 f865
.org 0xdc546
	ldr r0, [r6, #4]	@ 000dc546 7068
.org 0xdc548
	str r0, [r7, #96]	@ 000dc548 3866
.org 0xdc54a
	mov r2, sl	@ 000dc54a 5246
.org 0xdc54c
	str r2, [r7, #104]	@ 000dc54c ba66
.org 0xdc54e
	mov r0, r9	@ 000dc54e 4846
.org 0xdc550
	strb r0, [r7, #18]	@ 000dc550 b874
.org 0xdc552
	mov r2, r8	@ 000dc552 4246
.org 0xdc554
	strb r2, [r4, #0]	@ 000dc554 2270
.org 0xdc556
	mov r0, ip	@ 000dc556 6046
.org 0xdc558
	adds r0, #120	@ 000dc558 7830
.org 0xdc55a
	strb r3, [r0, #0]	@ 000dc55a 0370
.org 0xdc55c
	adds r0, #1	@ 000dc55c 0130
.org 0xdc55e
	strb r1, [r0, #0]	@ 000dc55e 0170
.org 0xdc560
	add sp, #4	@ 000dc560 01b0
.org 0xdc562
	pop {r3, r4, r5}	@ 000dc562 38bc
.org 0xdc564
	mov r8, r3	@ 000dc564 9846
.org 0xdc566
	mov r9, r4	@ 000dc566 a146
.org 0xdc568
	mov sl, r5	@ 000dc568 aa46
.org 0xdc56a
	pop {r4, r5, r6, r7}	@ 000dc56a f0bc
.org 0xdc56c
	pop {r0}	@ 000dc56c 01bc
.org 0xdc56e
	bx r0	@ 000dc56e 0047
