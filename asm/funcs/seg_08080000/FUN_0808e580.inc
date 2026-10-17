@ FUN_0808e580  entry 0x0808e580  size 170
.thumb
.org 0x8e580
FUN_0808e580:
	push {r4, r5, r6, r7, lr}	@ 0008e580 f0b5
.org 0x8e582
	mov r7, r8	@ 0008e582 4746
.org 0x8e584
	push {r7}	@ 0008e584 80b4
.org 0x8e586
	adds r4, r0, #0	@ 0008e586 041c
.org 0x8e588
	ldr r6, [r4, #40]	@ 0008e588 a66a
.org 0x8e58a
	ldrb r0, [r4, #17]	@ 0008e58a 607c
.org 0x8e58c
	mov r8, r0	@ 0008e58c 8046
.org 0x8e58e
	ldrb r5, [r4, #13]	@ 0008e58e 657b
.org 0x8e590
	adds r7, r5, #0	@ 0008e590 2f1c
.org 0x8e592
	ldrb r0, [r4, #15]	@ 0008e592 e07b
.org 0x8e594
	cmp r0, #0	@ 0008e594 0028
.org 0x8e596
	bne.n 0x8e5f8	@ 0008e596 2fd1
.org 0x8e598
	adds r1, r4, #0	@ 0008e598 211c
.org 0x8e59a
	adds r1, #84	@ 0008e59a 5431
.org 0x8e59c
	adds r0, r4, #0	@ 0008e59c 201c
.org 0x8e59e
	movs r2, #0	@ 0008e59e 0022
.org 0x8e5a0
	movs r3, #0	@ 0008e5a0 0023
.org 0x8e5a2
	bl 0xc01a0	@ 0008e5a2 31f0fdfd
.org 0x8e5a6
	adds r0, r4, #0	@ 0008e5a6 201c
.org 0x8e5a8
	bl 0x8e95c	@ 0008e5a8 00f0d8f9
.org 0x8e5ac
	ldr r1, [pc, #124]	@ 0008e5ac 1f49
.org 0x8e5ae
	adds r0, r4, #0	@ 0008e5ae 201c
.org 0x8e5b0
	bl 0x1cf00	@ 0008e5b0 8ef7a6fc
.org 0x8e5b4
	ldr r0, [r4, #84]	@ 0008e5b4 606d
.org 0x8e5b6
	ldr r1, [r6, #84]	@ 0008e5b6 716d
.org 0x8e5b8
	subs r0, r0, r1	@ 0008e5b8 401a
.org 0x8e5ba
	str r0, [r4, #100]	@ 0008e5ba 6066
.org 0x8e5bc
	ldr r0, [r4, #88]	@ 0008e5bc a06d
.org 0x8e5be
	ldr r1, [r6, #88]	@ 0008e5be b16d
.org 0x8e5c0
	subs r0, r0, r1	@ 0008e5c0 401a
.org 0x8e5c2
	str r0, [r4, #104]	@ 0008e5c2 a066
.org 0x8e5c4
	ldr r0, [pc, #104]	@ 0008e5c4 1a48
.org 0x8e5c6
	lsls r1, r5, #1	@ 0008e5c6 6900
.org 0x8e5c8
	adds r1, r1, r0	@ 0008e5c8 0918
.org 0x8e5ca
	ldrh r2, [r1, #0]	@ 0008e5ca 0a88
.org 0x8e5cc
	adds r0, r4, #0	@ 0008e5cc 201c
.org 0x8e5ce
	adds r0, #80	@ 0008e5ce 5030
.org 0x8e5d0
	strh r2, [r0, #0]	@ 0008e5d0 0280
.org 0x8e5d2
	ldrh r0, [r1, #0]	@ 0008e5d2 0888
.org 0x8e5d4
	adds r2, r4, #0	@ 0008e5d4 221c
.org 0x8e5d6
	adds r2, #82	@ 0008e5d6 5232
.org 0x8e5d8
	strh r0, [r2, #0]	@ 0008e5d8 1080
.org 0x8e5da
	ldrh r1, [r1, #0]	@ 0008e5da 0988
.org 0x8e5dc
	adds r0, r4, #0	@ 0008e5dc 201c
.org 0x8e5de
	adds r0, #184	@ 0008e5de b830
.org 0x8e5e0
	strh r1, [r0, #0]	@ 0008e5e0 0180
.org 0x8e5e2
	ldr r0, [pc, #80]	@ 0008e5e2 1448
.org 0x8e5e4
	adds r0, r5, r0	@ 0008e5e4 2818
.org 0x8e5e6
	ldrb r2, [r0, #0]	@ 0008e5e6 0278
.org 0x8e5e8
	adds r1, r4, #0	@ 0008e5e8 211c
.org 0x8e5ea
	adds r1, #36	@ 0008e5ea 2431
.org 0x8e5ec
	strb r2, [r1, #0]	@ 0008e5ec 0a70
.org 0x8e5ee
	ldrb r0, [r0, #0]	@ 0008e5ee 0078
.org 0x8e5f0
	strb r0, [r4, #18]	@ 0008e5f0 a074
.org 0x8e5f2
	ldrb r0, [r4, #15]	@ 0008e5f2 e07b
.org 0x8e5f4
	adds r0, #1	@ 0008e5f4 0130
.org 0x8e5f6
	strb r0, [r4, #15]	@ 0008e5f6 e073
.org 0x8e5f8
	adds r0, r4, #0	@ 0008e5f8 201c
.org 0x8e5fa
	bl 0x1cff0	@ 0008e5fa 8ef7f9fc
.org 0x8e5fe
	ldr r2, [pc, #56]	@ 0008e5fe 0e4a
.org 0x8e600
	lsls r3, r7, #3	@ 0008e600 fb00
.org 0x8e602
	adds r1, r3, r2	@ 0008e602 9918
.org 0x8e604
	mov r5, r8	@ 0008e604 4546
.org 0x8e606
	lsls r0, r5, #1	@ 0008e606 6800
.org 0x8e608
	subs r0, #1	@ 0008e608 0138
.org 0x8e60a
	ldr r1, [r1, #0]	@ 0008e60a 0968
.org 0x8e60c
	muls r1, r0	@ 0008e60c 4143
.org 0x8e60e
	ldr r0, [r6, #84]	@ 0008e60e 706d
.org 0x8e610
	adds r0, r0, r1	@ 0008e610 4018
.org 0x8e612
	str r0, [r4, #84]	@ 0008e612 6065
.org 0x8e614
	adds r2, #4	@ 0008e614 0432
.org 0x8e616
	adds r3, r3, r2	@ 0008e616 9b18
.org 0x8e618
	ldr r0, [r6, #88]	@ 0008e618 b06d
.org 0x8e61a
	ldr r1, [r3, #0]	@ 0008e61a 1968
.org 0x8e61c
	adds r0, r0, r1	@ 0008e61c 4018
.org 0x8e61e
	str r0, [r4, #88]	@ 0008e61e a065
.org 0x8e620
	pop {r3}	@ 0008e620 08bc
.org 0x8e622
	mov r8, r3	@ 0008e622 9846
.org 0x8e624
	pop {r4, r5, r6, r7}	@ 0008e624 f0bc
.org 0x8e626
	pop {r0}	@ 0008e626 01bc
.org 0x8e628
	bx r0	@ 0008e628 0047
