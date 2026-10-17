@ FUN_0800d584  entry 0x0800d584  size 174
.thumb
.org 0xd584
FUN_0800d584:
	push {r4, r5, r6, r7, lr}	@ 0000d584 f0b5
.org 0xd586
	mov r7, r8	@ 0000d586 4746
.org 0xd588
	push {r7}	@ 0000d588 80b4
.org 0xd58a
	sub sp, #8	@ 0000d58a 82b0
.org 0xd58c
	adds r7, r0, #0	@ 0000d58c 071c
.org 0xd58e
	ldr r0, [r7, #92]	@ 0000d58e f86d
.org 0xd590
	lsls r0, r0, #16	@ 0000d590 0004
.org 0xd592
	mov r8, r0	@ 0000d592 8046
.org 0xd594
	lsrs r1, r0, #16	@ 0000d594 010c
.org 0xd596
	ldr r3, [pc, #156]	@ 0000d596 274b
.org 0xd598
	ldr r2, [pc, #156]	@ 0000d598 274a
.org 0xd59a
	adds r0, r3, r2	@ 0000d59a 9818
.org 0xd59c
	ldrb r0, [r0, #0]	@ 0000d59c 0078
.org 0xd59e
	cmp r0, #0	@ 0000d59e 0028
.org 0xd5a0
	beq.n 0xd5ac	@ 0000d5a0 04d0
.org 0xd5a2
	ldr r2, [pc, #152]	@ 0000d5a2 264a
.org 0xd5a4
	lsls r1, r1, #8	@ 0000d5a4 0902
.org 0xd5a6
	ldrh r0, [r2, #0]	@ 0000d5a6 1088
.org 0xd5a8
	bics r0, r1	@ 0000d5a8 8843
.org 0xd5aa
	strh r0, [r2, #0]	@ 0000d5aa 1080
.org 0xd5ac
	ldr r1, [pc, #144]	@ 0000d5ac 2449
.org 0xd5ae
	adds r0, r3, r1	@ 0000d5ae 5818
.org 0xd5b0
	ldrh r0, [r0, #0]	@ 0000d5b0 0088
.org 0xd5b2
	cmp r0, #0	@ 0000d5b2 0028
.org 0xd5b4
	beq.n 0xd5fc	@ 0000d5b4 22d0
.org 0xd5b6
	movs r2, #0	@ 0000d5b6 0022
.org 0xd5b8
	mov r0, r8	@ 0000d5b8 4046
.org 0xd5ba
	lsrs r5, r0, #20	@ 0000d5ba 050d
.org 0xd5bc
	lsls r5, r5, #1	@ 0000d5bc 6d00
.org 0xd5be
	ldr r0, [pc, #132]	@ 0000d5be 2148
.org 0xd5c0
	adds r5, r5, r0	@ 0000d5c0 2d18
.org 0xd5c2
	ldrh r0, [r5, #0]	@ 0000d5c2 2888
.org 0xd5c4
	movs r4, #248	@ 0000d5c4 f824
.org 0xd5c6
	lsls r4, r4, #5	@ 0000d5c6 6401
.org 0xd5c8
	adds r1, r4, #0	@ 0000d5c8 211c
.org 0xd5ca
	ands r1, r0	@ 0000d5ca 0140
.org 0xd5cc
	lsls r1, r1, #3	@ 0000d5cc c900
.org 0xd5ce
	movs r0, #192	@ 0000d5ce c020
.org 0xd5d0
	lsls r0, r0, #19	@ 0000d5d0 c004
.org 0xd5d2
	adds r1, r1, r0	@ 0000d5d2 0918
.org 0xd5d4
	str r2, [sp, #0]	@ 0000d5d4 0092
.org 0xd5d6
	movs r6, #128	@ 0000d5d6 8026
.org 0xd5d8
	lsls r6, r6, #2	@ 0000d5d8 b600
.org 0xd5da
	ldr r2, [pc, #108]	@ 0000d5da 1b4a
.org 0xd5dc
	mov r0, sp	@ 0000d5dc 6846
.org 0xd5de
	bl 0x128be0	@ 0000d5de 1bf1fffa
.org 0xd5e2
	ldr r0, [pc, #104]	@ 0000d5e2 1a48
.org 0xd5e4
	ldr r0, [r0, #0]	@ 0000d5e4 0068
.org 0xd5e6
	ldr r1, [pc, #104]	@ 0000d5e6 1a49
.org 0xd5e8
	adds r0, r0, r1	@ 0000d5e8 4018
.org 0xd5ea
	ldrh r1, [r5, #0]	@ 0000d5ea 2988
.org 0xd5ec
	ands r4, r1	@ 0000d5ec 0c40
.org 0xd5ee
	lsls r4, r4, #3	@ 0000d5ee e400
.org 0xd5f0
	ldr r2, [pc, #96]	@ 0000d5f0 184a
.org 0xd5f2
	adds r4, r4, r2	@ 0000d5f2 a418
.org 0xd5f4
	adds r1, r4, #0	@ 0000d5f4 211c
.org 0xd5f6
	adds r2, r6, #0	@ 0000d5f6 321c
.org 0xd5f8
	bl 0x128be0	@ 0000d5f8 1bf1f2fa
.org 0xd5fc
	mov r0, r8	@ 0000d5fc 4046
.org 0xd5fe
	lsrs r3, r0, #20	@ 0000d5fe 030d
.org 0xd600
	lsls r3, r3, #2	@ 0000d600 9b00
.org 0xd602
	ldr r2, [pc, #84]	@ 0000d602 154a
.org 0xd604
	adds r4, r3, r2	@ 0000d604 9c18
.org 0xd606
	ldr r1, [r7, #52]	@ 0000d606 796b
.org 0xd608
	ldr r0, [r7, #68]	@ 0000d608 786c
.org 0xd60a
	muls r1, r0	@ 0000d60a 4143
.org 0xd60c
	asrs r1, r1, #8	@ 0000d60c 0912
.org 0xd60e
	ldr r0, [r7, #76]	@ 0000d60e f86c
.org 0xd610
	adds r0, r0, r1	@ 0000d610 4018
.org 0xd612
	strh r0, [r4, #0]	@ 0000d612 2080
.org 0xd614
	adds r2, #2	@ 0000d614 0232
.org 0xd616
	adds r3, r3, r2	@ 0000d616 9b18
.org 0xd618
	ldr r1, [r7, #56]	@ 0000d618 b96b
.org 0xd61a
	ldr r0, [r7, #72]	@ 0000d61a b86c
.org 0xd61c
	muls r1, r0	@ 0000d61c 4143
.org 0xd61e
	asrs r1, r1, #8	@ 0000d61e 0912
.org 0xd620
	ldr r0, [r7, #80]	@ 0000d620 386d
.org 0xd622
	adds r0, r0, r1	@ 0000d622 4018
.org 0xd624
	strh r0, [r3, #0]	@ 0000d624 1880
.org 0xd626
	add sp, #8	@ 0000d626 02b0
.org 0xd628
	pop {r3}	@ 0000d628 08bc
.org 0xd62a
	mov r8, r3	@ 0000d62a 9846
.org 0xd62c
	pop {r4, r5, r6, r7}	@ 0000d62c f0bc
.org 0xd62e
	pop {r0}	@ 0000d62e 01bc
.org 0xd630
	bx r0	@ 0000d630 0047
