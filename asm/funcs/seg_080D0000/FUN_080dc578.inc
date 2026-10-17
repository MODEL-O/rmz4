@ FUN_080dc578  entry 0x080dc578  size 164
.thumb
.org 0xdc578
FUN_080dc578:
	push {r4, r5, r6, r7, lr}	@ 000dc578 f0b5
.org 0xdc57a
	mov r7, sl	@ 000dc57a 5746
.org 0xdc57c
	mov r6, r9	@ 000dc57c 4e46
.org 0xdc57e
	mov r5, r8	@ 000dc57e 4546
.org 0xdc580
	push {r5, r6, r7}	@ 000dc580 e0b4
.org 0xdc582
	sub sp, #8	@ 000dc582 82b0
.org 0xdc584
	str r0, [sp, #4]	@ 000dc584 0190
.org 0xdc586
	adds r5, r1, #0	@ 000dc586 0d1c
.org 0xdc588
	adds r6, r2, #0	@ 000dc588 161c
.org 0xdc58a
	str r3, [sp, #0]	@ 000dc58a 0093
.org 0xdc58c
	ldr r0, [sp, #44]	@ 000dc58c 0b98
.org 0xdc58e
	ldr r1, [sp, #48]	@ 000dc58e 0c99
.org 0xdc590
	ldr r2, [sp, #52]	@ 000dc590 0d9a
.org 0xdc592
	lsls r0, r0, #24	@ 000dc592 0006
.org 0xdc594
	lsrs r0, r0, #24	@ 000dc594 000e
.org 0xdc596
	mov sl, r0	@ 000dc596 8246
.org 0xdc598
	lsls r1, r1, #24	@ 000dc598 0906
.org 0xdc59a
	lsrs r1, r1, #24	@ 000dc59a 090e
.org 0xdc59c
	mov r9, r1	@ 000dc59c 8946
.org 0xdc59e
	lsls r2, r2, #24	@ 000dc59e 1206
.org 0xdc5a0
	lsrs r2, r2, #24	@ 000dc5a0 120e
.org 0xdc5a2
	mov r8, r2	@ 000dc5a2 9046
.org 0xdc5a4
	ldr r0, [pc, #116]	@ 000dc5a4 1d48
.org 0xdc5a6
	ldr r0, [r0, #0]	@ 000dc5a6 0068
.org 0xdc5a8
	bl 0x5500	@ 000dc5a8 28f7aaff
.org 0xdc5ac
	mov ip, r0	@ 000dc5ac 8446
.org 0xdc5ae
	cmp r0, #0	@ 000dc5ae 0028
.org 0xdc5b0
	beq.n 0xdc60c	@ 000dc5b0 2cd0
.org 0xdc5b2
	mov r4, ip	@ 000dc5b2 6446
.org 0xdc5b4
	adds r4, #37	@ 000dc5b4 2534
.org 0xdc5b6
	movs r2, #0	@ 000dc5b6 0022
.org 0xdc5b8
	movs r3, #1	@ 000dc5b8 0123
.org 0xdc5ba
	strb r3, [r4, #0]	@ 000dc5ba 2370
.org 0xdc5bc
	ldr r0, [pc, #96]	@ 000dc5bc 1848
.org 0xdc5be
	movs r1, #43	@ 000dc5be 2b21
.org 0xdc5c0
	mov r7, ip	@ 000dc5c0 6746
.org 0xdc5c2
	strb r1, [r7, #9]	@ 000dc5c2 7972
.org 0xdc5c4
	adds r0, #172	@ 000dc5c4 ac30
.org 0xdc5c6
	ldr r0, [r0, #0]	@ 000dc5c6 0068
.org 0xdc5c8
	ldr r0, [r0, #0]	@ 000dc5c8 0068
.org 0xdc5ca
	str r0, [r7, #20]	@ 000dc5ca 7861
.org 0xdc5cc
	movs r1, #0	@ 000dc5cc 0021
.org 0xdc5ce
	strh r2, [r7, #32]	@ 000dc5ce 3a84
.org 0xdc5d0
	mov r2, ip	@ 000dc5d0 6246
.org 0xdc5d2
	adds r2, #34	@ 000dc5d2 2232
.org 0xdc5d4
	strb r1, [r2, #0]	@ 000dc5d4 1170
.org 0xdc5d6
	movs r0, #4	@ 000dc5d6 0420
.org 0xdc5d8
	strb r0, [r7, #16]	@ 000dc5d8 3874
.org 0xdc5da
	ldr r0, [sp, #4]	@ 000dc5da 0198
.org 0xdc5dc
	str r0, [r7, #40]	@ 000dc5dc b862
.org 0xdc5de
	ldr r0, [sp, #40]	@ 000dc5de 0a98
.org 0xdc5e0
	str r0, [r7, #116]	@ 000dc5e0 7867
.org 0xdc5e2
	ldr r0, [r5, #0]	@ 000dc5e2 2868
.org 0xdc5e4
	str r0, [r7, #84]	@ 000dc5e4 7865
.org 0xdc5e6
	ldr r0, [r5, #4]	@ 000dc5e6 6868
.org 0xdc5e8
	str r0, [r7, #88]	@ 000dc5e8 b865
.org 0xdc5ea
	ldr r0, [r6, #0]	@ 000dc5ea 3068
.org 0xdc5ec
	str r0, [r7, #92]	@ 000dc5ec f865
.org 0xdc5ee
	ldr r0, [r6, #4]	@ 000dc5ee 7068
.org 0xdc5f0
	str r0, [r7, #96]	@ 000dc5f0 3866
.org 0xdc5f2
	ldr r5, [sp, #0]	@ 000dc5f2 009d
.org 0xdc5f4
	str r5, [r7, #104]	@ 000dc5f4 bd66
.org 0xdc5f6
	mov r0, sl	@ 000dc5f6 5046
.org 0xdc5f8
	strb r0, [r7, #18]	@ 000dc5f8 b874
.org 0xdc5fa
	mov r5, r9	@ 000dc5fa 4d46
.org 0xdc5fc
	strb r5, [r4, #0]	@ 000dc5fc 2570
.org 0xdc5fe
	mov r7, r8	@ 000dc5fe 4746
.org 0xdc600
	strb r7, [r2, #0]	@ 000dc600 1770
.org 0xdc602
	mov r0, ip	@ 000dc602 6046
.org 0xdc604
	adds r0, #120	@ 000dc604 7830
.org 0xdc606
	strb r3, [r0, #0]	@ 000dc606 0370
.org 0xdc608
	adds r0, #1	@ 000dc608 0130
.org 0xdc60a
	strb r1, [r0, #0]	@ 000dc60a 0170
.org 0xdc60c
	add sp, #8	@ 000dc60c 02b0
.org 0xdc60e
	pop {r3, r4, r5}	@ 000dc60e 38bc
.org 0xdc610
	mov r8, r3	@ 000dc610 9846
.org 0xdc612
	mov r9, r4	@ 000dc612 a146
.org 0xdc614
	mov sl, r5	@ 000dc614 aa46
.org 0xdc616
	pop {r4, r5, r6, r7}	@ 000dc616 f0bc
.org 0xdc618
	pop {r0}	@ 000dc618 01bc
.org 0xdc61a
	bx r0	@ 000dc61a 0047
