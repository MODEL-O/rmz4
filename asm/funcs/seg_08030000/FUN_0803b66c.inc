@ FUN_0803b66c  entry 0x0803b66c  size 188
.thumb
.org 0x3b66c
FUN_0803b66c:
	push {r4, r5, r6, r7, lr}	@ 0003b66c f0b5
.org 0x3b66e
	mov r7, r8	@ 0003b66e 4746
.org 0x3b670
	push {r7}	@ 0003b670 80b4
.org 0x3b672
	sub sp, #8	@ 0003b672 82b0
.org 0x3b674
	adds r5, r0, #0	@ 0003b674 051c
.org 0x3b676
	adds r4, r5, #0	@ 0003b676 2c1c
.org 0x3b678
	adds r4, #180	@ 0003b678 b434
.org 0x3b67a
	ldr r7, [r4, #0]	@ 0003b67a 2768
.org 0x3b67c
	bl 0x1cc9c	@ 0003b67c e1f70efb
.org 0x3b680
	adds r0, r5, #0	@ 0003b680 281c
.org 0x3b682
	bl 0x1ceec	@ 0003b682 e1f733fc
.org 0x3b686
	ldrb r1, [r5, #10]	@ 0003b686 a97a
.org 0x3b688
	movs r0, #1	@ 0003b688 0120
.org 0x3b68a
	orrs r0, r1	@ 0003b68a 0843
.org 0x3b68c
	movs r1, #2	@ 0003b68c 0221
.org 0x3b68e
	orrs r0, r1	@ 0003b68e 0843
.org 0x3b690
	strb r0, [r5, #10]	@ 0003b690 a872
.org 0x3b692
	movs r1, #162	@ 0003b692 a221
.org 0x3b694
	lsls r1, r1, #7	@ 0003b694 c901
.org 0x3b696
	adds r0, r5, #0	@ 0003b696 281c
.org 0x3b698
	bl 0x1cf00	@ 0003b698 e1f732fc
.org 0x3b69c
	movs r0, #26	@ 0003b69c 1a20
.org 0x3b69e
	bl 0x2b10	@ 0003b69e c7f737fa
.org 0x3b6a2
	ldr r0, [r5, #84]	@ 0003b6a2 686d
.org 0x3b6a4
	ldr r1, [r7, #84]	@ 0003b6a4 796d
.org 0x3b6a6
	subs r0, r0, r1	@ 0003b6a6 401a
.org 0x3b6a8
	str r0, [r4, #4]	@ 0003b6a8 6060
.org 0x3b6aa
	ldrb r1, [r5, #10]	@ 0003b6aa a97a
.org 0x3b6ac
	movs r0, #16	@ 0003b6ac 1020
.org 0x3b6ae
	ands r0, r1	@ 0003b6ae 0840
.org 0x3b6b0
	lsls r0, r0, #24	@ 0003b6b0 0006
.org 0x3b6b2
	lsrs r1, r0, #24	@ 0003b6b2 010e
.org 0x3b6b4
	cmp r1, #0	@ 0003b6b4 0029
.org 0x3b6b6
	beq.n 0x3b6c4	@ 0003b6b6 05d0
.org 0x3b6b8
	movs r0, #192	@ 0003b6b8 c020
.org 0x3b6ba
	lsls r0, r0, #3	@ 0003b6ba c000
.org 0x3b6bc
	str r0, [r5, #92]	@ 0003b6bc e865
.org 0x3b6be
	movs r0, #0	@ 0003b6be 0020
.org 0x3b6c0
	str r0, [r5, #96]	@ 0003b6c0 2866
.org 0x3b6c2
	b.n 0x3b6ca	@ 0003b6c2 02e0
.org 0x3b6c4
	ldr r0, [pc, #96]	@ 0003b6c4 1848
.org 0x3b6c6
	str r0, [r5, #92]	@ 0003b6c6 e865
.org 0x3b6c8
	str r1, [r5, #96]	@ 0003b6c8 2966
.org 0x3b6ca
	ldrb r1, [r5, #10]	@ 0003b6ca a97a
.org 0x3b6cc
	movs r0, #4	@ 0003b6cc 0420
.org 0x3b6ce
	movs r4, #0	@ 0003b6ce 0024
.org 0x3b6d0
	orrs r0, r1	@ 0003b6d0 0843
.org 0x3b6d2
	strb r0, [r5, #10]	@ 0003b6d2 a872
.org 0x3b6d4
	adds r6, r5, #0	@ 0003b6d4 2e1c
.org 0x3b6d6
	adds r6, #116	@ 0003b6d6 7436
.org 0x3b6d8
	ldr r0, [pc, #80]	@ 0003b6d8 1448
.org 0x3b6da
	mov r8, r0	@ 0003b6da 8046
.org 0x3b6dc
	adds r2, r5, #0	@ 0003b6dc 2a1c
.org 0x3b6de
	adds r2, #84	@ 0003b6de 5432
.org 0x3b6e0
	adds r0, r6, #0	@ 0003b6e0 301c
.org 0x3b6e2
	mov r1, r8	@ 0003b6e2 4146
.org 0x3b6e4
	movs r3, #1	@ 0003b6e4 0123
.org 0x3b6e6
	bl 0x5760	@ 0003b6e6 caf73bf8
.org 0x3b6ea
	str r5, [r6, #44]	@ 0003b6ea f562
.org 0x3b6ec
	str r4, [r6, #36]	@ 0003b6ec 7462
.org 0x3b6ee
	adds r0, r7, #0	@ 0003b6ee 381c
.org 0x3b6f0
	bl 0x3a4a8	@ 0003b6f0 fef7dafe
.org 0x3b6f4
	adds r0, #6	@ 0003b6f4 0630
.org 0x3b6f6
	lsls r0, r0, #24	@ 0003b6f6 0006
.org 0x3b6f8
	lsrs r4, r0, #24	@ 0003b6f8 040e
.org 0x3b6fa
	adds r0, r7, #0	@ 0003b6fa 381c
.org 0x3b6fc
	bl 0x38a78	@ 0003b6fc fdf7bcf9
.org 0x3b700
	lsls r0, r0, #24	@ 0003b700 0006
.org 0x3b702
	cmp r0, #0	@ 0003b702 0028
.org 0x3b704
	beq.n 0x3b70a	@ 0003b704 01d0
.org 0x3b706
	lsls r0, r4, #25	@ 0003b706 6006
.org 0x3b708
	lsrs r4, r0, #24	@ 0003b708 040e
.org 0x3b70a
	movs r3, #1	@ 0003b70a 0123
.org 0x3b70c
	negs r3, r3	@ 0003b70c 5b42
.org 0x3b70e
	str r3, [sp, #0]	@ 0003b70e 0093
.org 0x3b710
	str r3, [sp, #4]	@ 0003b710 0193
.org 0x3b712
	adds r0, r6, #0	@ 0003b712 301c
.org 0x3b714
	mov r1, r8	@ 0003b714 4146
.org 0x3b716
	adds r2, r4, #0	@ 0003b716 221c
.org 0x3b718
	bl 0x5794	@ 0003b718 caf73cf8
.org 0x3b71c
	add sp, #8	@ 0003b71c 02b0
.org 0x3b71e
	pop {r3}	@ 0003b71e 08bc
.org 0x3b720
	mov r8, r3	@ 0003b720 9846
.org 0x3b722
	pop {r4, r5, r6, r7}	@ 0003b722 f0bc
.org 0x3b724
	pop {r0}	@ 0003b724 01bc
.org 0x3b726
	bx r0	@ 0003b726 0047
