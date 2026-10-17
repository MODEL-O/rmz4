@ FUN_0808b570  entry 0x0808b570  size 188
.thumb
.org 0x8b570
FUN_0808b570:
	push {r4, r5, r6, r7, lr}	@ 0008b570 f0b5
.org 0x8b572
	mov r7, r9	@ 0008b572 4f46
.org 0x8b574
	mov r6, r8	@ 0008b574 4646
.org 0x8b576
	push {r6, r7}	@ 0008b576 c0b4
.org 0x8b578
	adds r4, r0, #0	@ 0008b578 041c
.org 0x8b57a
	ldrb r0, [r4, #15]	@ 0008b57a e07b
.org 0x8b57c
	cmp r0, #0	@ 0008b57c 0028
.org 0x8b57e
	bne.n 0x8b58c	@ 0008b57e 05d1
.org 0x8b580
	adds r0, r4, #0	@ 0008b580 201c
.org 0x8b582
	bl 0x8bc98	@ 0008b582 00f089fb
.org 0x8b586
	ldrb r0, [r4, #15]	@ 0008b586 e07b
.org 0x8b588
	adds r0, #1	@ 0008b588 0130
.org 0x8b58a
	strb r0, [r4, #15]	@ 0008b58a e073
.org 0x8b58c
	adds r0, r4, #0	@ 0008b58c 201c
.org 0x8b58e
	bl 0x8bcb8	@ 0008b58e 00f093fb
.org 0x8b592
	adds r0, r4, #0	@ 0008b592 201c
.org 0x8b594
	bl 0x8bbd8	@ 0008b594 00f020fb
.org 0x8b598
	adds r0, r4, #0	@ 0008b598 201c
.org 0x8b59a
	adds r0, #185	@ 0008b59a b930
.org 0x8b59c
	ldrb r1, [r0, #0]	@ 0008b59c 0178
.org 0x8b59e
	adds r5, r0, #0	@ 0008b59e 051c
.org 0x8b5a0
	cmp r1, #0	@ 0008b5a0 0029
.org 0x8b5a2
	beq.n 0x8b5aa	@ 0008b5a2 02d0
.org 0x8b5a4
	adds r0, r1, #0	@ 0008b5a4 081c
.org 0x8b5a6
	adds r0, #255	@ 0008b5a6 ff30
.org 0x8b5a8
	strb r0, [r5, #0]	@ 0008b5a8 2870
.org 0x8b5aa
	ldrb r0, [r4, #10]	@ 0008b5aa a07a
.org 0x8b5ac
	lsrs r2, r0, #4	@ 0008b5ac 0209
.org 0x8b5ae
	movs r0, #1	@ 0008b5ae 0120
.org 0x8b5b0
	mov r9, r0	@ 0008b5b0 8146
.org 0x8b5b2
	ands r2, r0	@ 0008b5b2 0240
.org 0x8b5b4
	movs r3, #0	@ 0008b5b4 0023
.org 0x8b5b6
	ldr r1, [pc, #100]	@ 0008b5b6 1949
.org 0x8b5b8
	mov r8, r1	@ 0008b5b8 8846
.org 0x8b5ba
	ldr r0, [r1, #0]	@ 0008b5ba 0868
.org 0x8b5bc
	ldr r1, [r4, #84]	@ 0008b5bc 616d
.org 0x8b5be
	ldr r0, [r0, #84]	@ 0008b5be 406d
.org 0x8b5c0
	cmp r1, r0	@ 0008b5c0 8142
.org 0x8b5c2
	bge.n 0x8b5c6	@ 0008b5c2 00da
.org 0x8b5c4
	movs r3, #1	@ 0008b5c4 0123
.org 0x8b5c6
	cmp r2, r3	@ 0008b5c6 9a42
.org 0x8b5c8
	beq.n 0x8b5d2	@ 0008b5c8 03d0
.org 0x8b5ca
	movs r1, #0	@ 0008b5ca 0021
.org 0x8b5cc
	movs r0, #2	@ 0008b5cc 0220
.org 0x8b5ce
	strb r0, [r4, #14]	@ 0008b5ce a073
.org 0x8b5d0
	strb r1, [r4, #15]	@ 0008b5d0 e173
.org 0x8b5d2
	ldrb r6, [r5, #0]	@ 0008b5d2 2e78
.org 0x8b5d4
	cmp r6, #0	@ 0008b5d4 002e
.org 0x8b5d6
	bne.n 0x8b624	@ 0008b5d6 25d1
.org 0x8b5d8
	adds r0, r4, #0	@ 0008b5d8 201c
.org 0x8b5da
	movs r1, #60	@ 0008b5da 3c21
.org 0x8b5dc
	bl 0x7f9d8	@ 0008b5dc f4f7fcf9
.org 0x8b5e0
	lsls r0, r0, #16	@ 0008b5e0 0004
.org 0x8b5e2
	lsrs r7, r0, #16	@ 0008b5e2 070c
.org 0x8b5e4
	mov r1, r8	@ 0008b5e4 4146
.org 0x8b5e6
	ldr r0, [r1, #0]	@ 0008b5e6 0868
.org 0x8b5e8
	ldr r3, [r0, #84]	@ 0008b5e8 436d
.org 0x8b5ea
	ldr r2, [r4, #84]	@ 0008b5ea 626d
.org 0x8b5ec
	subs r0, r3, r2	@ 0008b5ec 981a
.org 0x8b5ee
	movs r1, #200	@ 0008b5ee c821
.org 0x8b5f0
	lsls r1, r1, #7	@ 0008b5f0 c901
.org 0x8b5f2
	adds r0, r0, r1	@ 0008b5f2 4018
.org 0x8b5f4
	movs r1, #200	@ 0008b5f4 c821
.org 0x8b5f6
	lsls r1, r1, #8	@ 0008b5f6 0902
.org 0x8b5f8
	cmp r0, r1	@ 0008b5f8 8842
.org 0x8b5fa
	bhi.n 0x8b620	@ 0008b5fa 11d8
.org 0x8b5fc
	ldrb r0, [r4, #10]	@ 0008b5fc a07a
.org 0x8b5fe
	lsrs r0, r0, #4	@ 0008b5fe 0009
.org 0x8b600
	mov r1, r9	@ 0008b600 4946
.org 0x8b602
	bics r1, r0	@ 0008b602 8143
.org 0x8b604
	movs r0, #0	@ 0008b604 0020
.org 0x8b606
	cmp r2, r3	@ 0008b606 9a42
.org 0x8b608
	bge.n 0x8b60c	@ 0008b608 00da
.org 0x8b60a
	movs r0, #1	@ 0008b60a 0120
.org 0x8b60c
	cmp r1, r0	@ 0008b60c 8142
.org 0x8b60e
	beq.n 0x8b620	@ 0008b60e 07d0
.org 0x8b610
	cmp r7, #2	@ 0008b610 022f
.org 0x8b612
	bgt.n 0x8b620	@ 0008b612 05dc
.org 0x8b614
	movs r0, #4	@ 0008b614 0420
.org 0x8b616
	strb r0, [r4, #14]	@ 0008b616 a073
.org 0x8b618
	strb r6, [r4, #15]	@ 0008b618 e673
.org 0x8b61a
	b.n 0x8b624	@ 0008b61a 03e0
.org 0x8b61c
	.byte 0xf0,0xdb,0x02,0x02	@ 0008b61c data
.org 0x8b620
	movs r0, #96	@ 0008b620 6020
.org 0x8b622
	strb r0, [r5, #0]	@ 0008b622 2870
.org 0x8b624
	pop {r3, r4}	@ 0008b624 18bc
.org 0x8b626
	mov r8, r3	@ 0008b626 9846
.org 0x8b628
	mov r9, r4	@ 0008b628 a146
.org 0x8b62a
	pop {r4, r5, r6, r7}	@ 0008b62a f0bc
