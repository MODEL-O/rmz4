@ FUN_0811c55c  entry 0x0811c55c  size 180
.thumb
.org 0x11c55c
FUN_0811c55c:
	push {r4, r5, lr}	@ 0011c55c 30b5
.org 0x11c55e
	adds r5, r0, #0	@ 0011c55e 051c
.org 0x11c560
	ldr r0, [pc, #116]	@ 0011c560 1d48
.org 0x11c562
	adds r4, r5, r0	@ 0011c562 2c18
.org 0x11c564
	movs r0, #0	@ 0011c564 0020
.org 0x11c566
	strb r0, [r4, #25]	@ 0011c566 6076
.org 0x11c568
	ldr r1, [pc, #112]	@ 0011c568 1c49
.org 0x11c56a
	ldrb r0, [r5, #2]	@ 0011c56a a878
.org 0x11c56c
	lsls r0, r0, #2	@ 0011c56c 8000
.org 0x11c56e
	adds r0, r0, r1	@ 0011c56e 4018
.org 0x11c570
	ldr r1, [r0, #0]	@ 0011c570 0168
.org 0x11c572
	adds r0, r5, #0	@ 0011c572 281c
.org 0x11c574
	bl 0x128f80	@ 0011c574 0cf004fd
.org 0x11c578
	lsls r0, r0, #24	@ 0011c578 0006
.org 0x11c57a
	cmp r0, #0	@ 0011c57a 0028
.org 0x11c57c
	beq.n 0x11c58e	@ 0011c57c 07d0
.org 0x11c57e
	ldr r0, [pc, #96]	@ 0011c57e 1848
.org 0x11c580
	ldrb r1, [r5, #2]	@ 0011c580 a978
.org 0x11c582
	lsls r1, r1, #2	@ 0011c582 8900
.org 0x11c584
	adds r1, r1, r0	@ 0011c584 0918
.org 0x11c586
	ldr r1, [r1, #0]	@ 0011c586 0968
.org 0x11c588
	adds r0, r5, #0	@ 0011c588 281c
.org 0x11c58a
	bl 0x128f80	@ 0011c58a 0cf0f9fc
.org 0x11c58e
	ldrb r0, [r4, #27]	@ 0011c58e e07e
.org 0x11c590
	cmp r0, #0	@ 0011c590 0028
.org 0x11c592
	beq.n 0x11c598	@ 0011c592 01d0
.org 0x11c594
	movs r0, #3	@ 0011c594 0320
.org 0x11c596
	strb r0, [r5, #1]	@ 0011c596 6870
.org 0x11c598
	movs r0, #47	@ 0011c598 2f20
.org 0x11c59a
	bl 0x25d8	@ 0011c59a e6f61df8
.org 0x11c59e
	ldrb r0, [r4, #25]	@ 0011c59e 607e
.org 0x11c5a0
	cmp r0, #0	@ 0011c5a0 0028
.org 0x11c5a2
	beq.n 0x11c5e4	@ 0011c5a2 1fd0
.org 0x11c5a4
	ldrb r0, [r4, #26]	@ 0011c5a4 a07e
.org 0x11c5a6
	cmp r0, #49	@ 0011c5a6 3128
.org 0x11c5a8
	bne.n 0x11c5ca	@ 0011c5a8 0fd1
.org 0x11c5aa
	movs r0, #50	@ 0011c5aa 3220
.org 0x11c5ac
	strb r0, [r4, #26]	@ 0011c5ac a076
.org 0x11c5ae
	movs r0, #49	@ 0011c5ae 3120
.org 0x11c5b0
	bl 0x2624	@ 0011c5b0 e6f638f8
.org 0x11c5b4
	movs r0, #58	@ 0011c5b4 3a20
.org 0x11c5b6
	bl 0x2624	@ 0011c5b6 e6f635f8
.org 0x11c5ba
	movs r0, #48	@ 0011c5ba 3020
.org 0x11c5bc
	movs r1, #0	@ 0011c5bc 0021
.org 0x11c5be
	bl 0x249c	@ 0011c5be e5f66dff
.org 0x11c5c2
	movs r0, #50	@ 0011c5c2 3220
.org 0x11c5c4
	movs r1, #0	@ 0011c5c4 0021
.org 0x11c5c6
	bl 0x249c	@ 0011c5c6 e5f669ff
.org 0x11c5ca
	movs r0, #48	@ 0011c5ca 3020
.org 0x11c5cc
	bl 0x25d8	@ 0011c5cc e6f604f8
.org 0x11c5d0
	movs r0, #50	@ 0011c5d0 3220
.org 0x11c5d2
	bl 0x25d8	@ 0011c5d2 e6f601f8
.org 0x11c5d6
	b.n 0x11c616	@ 0011c5d6 1ee0
.org 0x11c5d8
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c5d8 data
.org 0x11c5dc
	.byte 0xe0,0x1d,0x88,0x08	@ 0011c5dc data
.org 0x11c5e0
	.byte 0xe8,0x1d,0x88,0x08	@ 0011c5e0 data
.org 0x11c5e4
	ldrb r0, [r4, #26]	@ 0011c5e4 a07e
.org 0x11c5e6
	cmp r0, #50	@ 0011c5e6 3228
.org 0x11c5e8
	bne.n 0x11c60a	@ 0011c5e8 0fd1
.org 0x11c5ea
	movs r0, #49	@ 0011c5ea 3120
.org 0x11c5ec
	strb r0, [r4, #26]	@ 0011c5ec a076
.org 0x11c5ee
	movs r0, #48	@ 0011c5ee 3020
.org 0x11c5f0
	bl 0x2624	@ 0011c5f0 e6f618f8
.org 0x11c5f4
	movs r0, #50	@ 0011c5f4 3220
.org 0x11c5f6
	bl 0x2624	@ 0011c5f6 e6f615f8
.org 0x11c5fa
	movs r0, #49	@ 0011c5fa 3120
.org 0x11c5fc
	movs r1, #0	@ 0011c5fc 0021
.org 0x11c5fe
	bl 0x249c	@ 0011c5fe e5f64dff
.org 0x11c602
	movs r0, #58	@ 0011c602 3a20
.org 0x11c604
	movs r1, #0	@ 0011c604 0021
.org 0x11c606
	bl 0x249c	@ 0011c606 e5f649ff
.org 0x11c60a
	movs r0, #49	@ 0011c60a 3120
.org 0x11c60c
	bl 0x25d8	@ 0011c60c e5f6e4ff
