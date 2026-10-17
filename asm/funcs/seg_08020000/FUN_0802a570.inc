@ FUN_0802a570  entry 0x0802a570  size 128
.thumb
.org 0x2a570
FUN_0802a570:
	push {r4, r5, r6, lr}	@ 0002a570 70b5
.org 0x2a572
	adds r5, r0, #0	@ 0002a572 051c
.org 0x2a574
	ldr r0, [pc, #112]	@ 0002a574 1c48
.org 0x2a576
	ldr r1, [pc, #116]	@ 0002a576 1d49
.org 0x2a578
	adds r0, r0, r1	@ 0002a578 4018
.org 0x2a57a
	ldr r0, [r0, #0]	@ 0002a57a 0068
.org 0x2a57c
	adds r4, r0, #0	@ 0002a57c 041c
.org 0x2a57e
	adds r4, #180	@ 0002a57e b434
.org 0x2a580
	ldrb r0, [r4, #19]	@ 0002a580 e07c
.org 0x2a582
	cmp r0, #1	@ 0002a582 0128
.org 0x2a584
	beq.n 0x2a5e4	@ 0002a584 2ed0
.org 0x2a586
	cmp r0, #3	@ 0002a586 0328
.org 0x2a588
	beq.n 0x2a5e4	@ 0002a588 2cd0
.org 0x2a58a
	ldr r0, [pc, #100]	@ 0002a58a 1948
.org 0x2a58c
	ldrh r1, [r0, #0]	@ 0002a58c 0188
.org 0x2a58e
	subs r0, r1, #3	@ 0002a58e c81e
.org 0x2a590
	lsls r0, r0, #16	@ 0002a590 0004
.org 0x2a592
	lsrs r0, r0, #16	@ 0002a592 000c
.org 0x2a594
	cmp r0, #7	@ 0002a594 0728
.org 0x2a596
	bhi.n 0x2a5e4	@ 0002a596 25d8
.org 0x2a598
	subs r0, r1, #3	@ 0002a598 c81e
.org 0x2a59a
	lsls r0, r0, #24	@ 0002a59a 0006
.org 0x2a59c
	lsrs r6, r0, #24	@ 0002a59c 060e
.org 0x2a59e
	ldrb r0, [r5, #1]	@ 0002a59e 6878
.org 0x2a5a0
	cmp r0, #0	@ 0002a5a0 0028
.org 0x2a5a2
	bne.n 0x2a5dc	@ 0002a5a2 1bd1
.org 0x2a5a4
	ldr r0, [pc, #76]	@ 0002a5a4 1348
.org 0x2a5a6
	ldrb r0, [r0, #25]	@ 0002a5a6 407e
.org 0x2a5a8
	cmp r0, #0	@ 0002a5a8 0028
.org 0x2a5aa
	beq.n 0x2a5d6	@ 0002a5aa 14d0
.org 0x2a5ac
	ldrh r2, [r4, #22]	@ 0002a5ac e28a
.org 0x2a5ae
	ldr r1, [pc, #72]	@ 0002a5ae 1249
.org 0x2a5b0
	lsls r0, r6, #2	@ 0002a5b0 b000
.org 0x2a5b2
	adds r0, r0, r1	@ 0002a5b2 4018
.org 0x2a5b4
	ldr r1, [r0, #0]	@ 0002a5b4 0168
.org 0x2a5b6
	movs r3, #1	@ 0002a5b6 0123
.org 0x2a5b8
	lsls r3, r1	@ 0002a5b8 8b40
.org 0x2a5ba
	adds r0, r2, #0	@ 0002a5ba 101c
.org 0x2a5bc
	ands r0, r3	@ 0002a5bc 1840
.org 0x2a5be
	asrs r0, r1	@ 0002a5be 0841
.org 0x2a5c0
	cmp r0, #0	@ 0002a5c0 0028
.org 0x2a5c2
	bne.n 0x2a5e4	@ 0002a5c2 0fd1
.org 0x2a5c4
	orrs r2, r3	@ 0002a5c4 1a43
.org 0x2a5c6
	strh r2, [r4, #22]	@ 0002a5c6 e282
.org 0x2a5c8
	ldr r0, [pc, #48]	@ 0002a5c8 0c48
.org 0x2a5ca
	lsls r1, r6, #1	@ 0002a5ca 7100
.org 0x2a5cc
	adds r1, r1, r0	@ 0002a5cc 0918
.org 0x2a5ce
	ldrh r0, [r1, #0]	@ 0002a5ce 0888
.org 0x2a5d0
	movs r1, #0	@ 0002a5d0 0021
.org 0x2a5d2
	bl 0x10e608	@ 0002a5d2 e4f019f8
.org 0x2a5d6
	ldrb r0, [r5, #1]	@ 0002a5d6 6878
.org 0x2a5d8
	adds r0, #1	@ 0002a5d8 0130
.org 0x2a5da
	strb r0, [r5, #1]	@ 0002a5da 6870
.org 0x2a5dc
	ldr r0, [pc, #32]	@ 0002a5dc 0848
.org 0x2a5de
	ldrh r0, [r0, #2]	@ 0002a5de 4088
.org 0x2a5e0
	cmp r0, #0	@ 0002a5e0 0028
.org 0x2a5e2
	bne.n 0x2a604	@ 0002a5e2 0fd1
.org 0x2a5e4
	movs r0, #0	@ 0002a5e4 0020
.org 0x2a5e6
	b.n 0x2a606	@ 0002a5e6 0ee0
.org 0x2a5e8
	.byte 0x10,0xf6,0x02,0x02	@ 0002a5e8 data
.org 0x2a5ec
	.byte 0xa8,0x63,0x00,0x00	@ 0002a5ec data
