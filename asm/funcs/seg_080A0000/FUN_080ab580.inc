@ FUN_080ab580  entry 0x080ab580  size 100
.thumb
.org 0xab580
FUN_080ab580:
	push {r4, lr}	@ 000ab580 10b5
.org 0xab582
	sub sp, #8	@ 000ab582 82b0
.org 0xab584
	adds r4, r0, #0	@ 000ab584 041c
.org 0xab586
	ldr r0, [r4, #40]	@ 000ab586 a06a
.org 0xab588
	adds r1, r0, #0	@ 000ab588 011c
.org 0xab58a
	adds r1, #187	@ 000ab58a bb31
.org 0xab58c
	ldrb r2, [r1, #0]	@ 000ab58c 0a78
.org 0xab58e
	movs r0, #0	@ 000ab58e 0020
.org 0xab590
	ldrsb r0, [r1, r0]	@ 000ab590 0856
.org 0xab592
	cmp r0, #0	@ 000ab592 0028
.org 0xab594
	beq.n 0xab59a	@ 000ab594 01d0
.org 0xab596
	subs r0, r2, #1	@ 000ab596 501e
.org 0xab598
	strb r0, [r1, #0]	@ 000ab598 0870
.org 0xab59a
	ldr r0, [r4, #84]	@ 000ab59a 606d
.org 0xab59c
	str r0, [sp, #0]	@ 000ab59c 0090
.org 0xab59e
	ldr r0, [r4, #88]	@ 000ab59e a06d
.org 0xab5a0
	ldr r1, [pc, #64]	@ 000ab5a0 1049
.org 0xab5a2
	adds r0, r0, r1	@ 000ab5a2 4018
.org 0xab5a4
	str r0, [sp, #4]	@ 000ab5a4 0190
.org 0xab5a6
	movs r0, #2	@ 000ab5a6 0220
.org 0xab5a8
	mov r1, sp	@ 000ab5a8 6946
.org 0xab5aa
	bl 0xd0c88	@ 000ab5aa 25f06dfb
.org 0xab5ae
	adds r0, r4, #0	@ 000ab5ae 201c
.org 0xab5b0
	adds r0, #140	@ 000ab5b0 8c30
.org 0xab5b2
	movs r1, #0	@ 000ab5b2 0021
.org 0xab5b4
	str r1, [r0, #0]	@ 000ab5b4 0160
.org 0xab5b6
	adds r0, #4	@ 000ab5b6 0430
.org 0xab5b8
	str r1, [r0, #0]	@ 000ab5b8 0160
.org 0xab5ba
	adds r0, #4	@ 000ab5ba 0430
.org 0xab5bc
	strb r1, [r0, #0]	@ 000ab5bc 0170
.org 0xab5be
	ldrb r1, [r4, #10]	@ 000ab5be a17a
.org 0xab5c0
	movs r0, #251	@ 000ab5c0 fb20
.org 0xab5c2
	ands r0, r1	@ 000ab5c2 0840
.org 0xab5c4
	movs r1, #254	@ 000ab5c4 fe21
.org 0xab5c6
	ands r0, r1	@ 000ab5c6 0840
.org 0xab5c8
	strb r0, [r4, #10]	@ 000ab5c8 a072
.org 0xab5ca
	ldr r1, [pc, #28]	@ 000ab5ca 0749
.org 0xab5cc
	ldrb r0, [r4, #9]	@ 000ab5cc 607a
.org 0xab5ce
	lsls r0, r0, #2	@ 000ab5ce 8000
.org 0xab5d0
	adds r0, r0, r1	@ 000ab5d0 4018
.org 0xab5d2
	movs r1, #4	@ 000ab5d2 0421
.org 0xab5d4
	str r1, [r4, #12]	@ 000ab5d4 e160
.org 0xab5d6
	ldr r0, [r0, #0]	@ 000ab5d6 0068
.org 0xab5d8
	ldr r0, [r0, #16]	@ 000ab5d8 0069
.org 0xab5da
	str r0, [r4, #20]	@ 000ab5da 6061
.org 0xab5dc
	add sp, #8	@ 000ab5dc 02b0
.org 0xab5de
	pop {r4}	@ 000ab5de 10bc
.org 0xab5e0
	pop {r0}	@ 000ab5e0 01bc
.org 0xab5e2
	bx r0	@ 000ab5e2 0047
