@ FUN_0810b57c  entry 0x0810b57c  size 156
.thumb
.org 0x10b57c
FUN_0810b57c:
	push {r4, lr}	@ 0010b57c 10b5
.org 0x10b57e
	adds r4, r0, #0	@ 0010b57e 041c
.org 0x10b580
	ldr r1, [r4, #40]	@ 0010b580 a16a
.org 0x10b582
	ldrb r0, [r1, #2]	@ 0010b582 8878
.org 0x10b584
	cmp r0, #0	@ 0010b584 0028
.org 0x10b586
	beq.n 0x10b5ca	@ 0010b586 20d0
.org 0x10b588
	ldrb r2, [r1, #3]	@ 0010b588 ca78
.org 0x10b58a
	cmp r2, #2	@ 0010b58a 022a
.org 0x10b58c
	bls.n 0x10b5c8	@ 0010b58c 1cd9
.org 0x10b58e
	ldr r3, [pc, #24]	@ 0010b58e 064b
.org 0x10b590
	adds r0, r1, r3	@ 0010b590 c818
.org 0x10b592
	ldrb r0, [r0, #0]	@ 0010b592 0078
.org 0x10b594
	cmp r0, #0	@ 0010b594 0028
.org 0x10b596
	beq.n 0x10b5ca	@ 0010b596 18d0
.org 0x10b598
	cmp r2, #3	@ 0010b598 032a
.org 0x10b59a
	bne.n 0x10b5b0	@ 0010b59a 09d1
.org 0x10b59c
	movs r0, #221	@ 0010b59c dd20
.org 0x10b59e
	lsls r0, r0, #4	@ 0010b59e 0001
.org 0x10b5a0
	adds r1, r1, r0	@ 0010b5a0 0918
.org 0x10b5a2
	ldr r2, [pc, #8]	@ 0010b5a2 024a
.org 0x10b5a4
	b.n 0x10b5de	@ 0010b5a4 1be0
.org 0x10b5a6
	.byte 0x00	@ 0010b5a6 data
.org 0x10b5a7
	.byte 0x00	@ 0010b5a7 data
.org 0x10b5a8
	.byte 0xf7,0x0d,0x00,0x00	@ 0010b5a8 data
.org 0x10b5ac
	.byte 0x08,0x41,0x00,0x00	@ 0010b5ac data
.org 0x10b5b0
	cmp r2, #4	@ 0010b5b0 042a
.org 0x10b5b2
	bne.n 0x10b5c4	@ 0010b5b2 07d1
.org 0x10b5b4
	movs r3, #221	@ 0010b5b4 dd23
.org 0x10b5b6
	lsls r3, r3, #4	@ 0010b5b6 1b01
.org 0x10b5b8
	adds r1, r1, r3	@ 0010b5b8 c918
.org 0x10b5ba
	ldr r2, [pc, #4]	@ 0010b5ba 014a
.org 0x10b5bc
	b.n 0x10b5de	@ 0010b5bc 0fe0
.org 0x10b5be
	.byte 0x00	@ 0010b5be data
.org 0x10b5bf
	.byte 0x00	@ 0010b5bf data
.org 0x10b5c0
	.byte 0x0e,0x41,0x00,0x00	@ 0010b5c0 data
.org 0x10b5c4
	cmp r2, #5	@ 0010b5c4 052a
.org 0x10b5c6
	beq.n 0x10b5d6	@ 0010b5c6 06d0
.org 0x10b5c8
	movs r0, #0	@ 0010b5c8 0020
.org 0x10b5ca
	strb r0, [r4, #13]	@ 0010b5ca 6073
.org 0x10b5cc
	ldrb r1, [r4, #10]	@ 0010b5cc a17a
.org 0x10b5ce
	movs r0, #254	@ 0010b5ce fe20
.org 0x10b5d0
	ands r0, r1	@ 0010b5d0 0840
.org 0x10b5d2
	strb r0, [r4, #10]	@ 0010b5d2 a072
.org 0x10b5d4
	b.n 0x10b626	@ 0010b5d4 27e0
.org 0x10b5d6
	movs r3, #221	@ 0010b5d6 dd23
.org 0x10b5d8
	lsls r3, r3, #4	@ 0010b5d8 1b01
.org 0x10b5da
	adds r1, r1, r3	@ 0010b5da c918
.org 0x10b5dc
	ldr r2, [pc, #28]	@ 0010b5dc 074a
.org 0x10b5de
	adds r0, r2, #0	@ 0010b5de 101c
.org 0x10b5e0
	ldrb r1, [r1, #3]	@ 0010b5e0 c978
.org 0x10b5e2
	adds r0, r0, r1	@ 0010b5e2 4018
.org 0x10b5e4
	adds r2, r0, #0	@ 0010b5e4 021c
.org 0x10b5e6
	ldrb r0, [r4, #13]	@ 0010b5e6 607b
.org 0x10b5e8
	cmp r0, #0	@ 0010b5e8 0028
.org 0x10b5ea
	bne.n 0x10b600	@ 0010b5ea 09d1
.org 0x10b5ec
	adds r0, r4, #0	@ 0010b5ec 201c
.org 0x10b5ee
	adds r1, r2, #0	@ 0010b5ee 111c
.org 0x10b5f0
	bl 0x1cf00	@ 0010b5f0 11f786fc
.org 0x10b5f4
	ldrb r0, [r4, #13]	@ 0010b5f4 607b
.org 0x10b5f6
	adds r0, #1	@ 0010b5f6 0130
.org 0x10b5f8
	strb r0, [r4, #13]	@ 0010b5f8 6073
.org 0x10b5fa
	b.n 0x10b618	@ 0010b5fa 0de0
.org 0x10b5fc
	.byte 0x14,0x41,0x00,0x00	@ 0010b5fc data
.org 0x10b600
	ldrb r0, [r4, #30]	@ 0010b600 a07f
.org 0x10b602
	lsls r0, r0, #8	@ 0010b602 0002
.org 0x10b604
	adds r1, r4, #0	@ 0010b604 211c
.org 0x10b606
	adds r1, #112	@ 0010b606 7031
.org 0x10b608
	ldrb r1, [r1, #0]	@ 0010b608 0978
.org 0x10b60a
	orrs r0, r1	@ 0010b60a 0843
.org 0x10b60c
	cmp r0, r2	@ 0010b60c 9042
.org 0x10b60e
	beq.n 0x10b618	@ 0010b60e 03d0
.org 0x10b610
	adds r0, r4, #0	@ 0010b610 201c
.org 0x10b612
	adds r1, r2, #0	@ 0010b612 111c
.org 0x10b614
	bl 0x1cf00	@ 0010b614 11f774fc
