@ FUN_0801b66c  entry 0x0801b66c  size 116
.thumb
.org 0x1b66c
FUN_0801b66c:
	push {r4, lr}	@ 0001b66c 10b5
.org 0x1b66e
	sub sp, #8	@ 0001b66e 82b0
.org 0x1b670
	adds r4, r0, #0	@ 0001b670 041c
.org 0x1b672
	ldrb r2, [r4, #14]	@ 0001b672 a27b
.org 0x1b674
	cmp r2, #0	@ 0001b674 002a
.org 0x1b676
	bne.n 0x1b6a0	@ 0001b676 13d1
.org 0x1b678
	movs r0, #0	@ 0001b678 0020
.org 0x1b67a
	movs r1, #0	@ 0001b67a 0021
.org 0x1b67c
	str r0, [sp, #0]	@ 0001b67c 0090
.org 0x1b67e
	str r1, [sp, #4]	@ 0001b67e 0191
.org 0x1b680
	ldr r1, [pc, #92]	@ 0001b680 1749
.org 0x1b682
	ldr r0, [pc, #96]	@ 0001b682 1848
.org 0x1b684
	strh r0, [r1, #0]	@ 0001b684 0880
.org 0x1b686
	ldr r0, [pc, #96]	@ 0001b686 1848
.org 0x1b688
	strh r0, [r1, #2]	@ 0001b688 4880
.org 0x1b68a
	strh r2, [r4, #16]	@ 0001b68a 2282
.org 0x1b68c
	strh r2, [r4, #18]	@ 0001b68c 6282
.org 0x1b68e
	mov r0, sp	@ 0001b68e 6846
.org 0x1b690
	movs r1, #0	@ 0001b690 0021
.org 0x1b692
	movs r2, #0	@ 0001b692 0022
.org 0x1b694
	bl 0xf7558	@ 0001b694 dbf060ff
.org 0x1b698
	str r0, [r4, #108]	@ 0001b698 e066
.org 0x1b69a
	ldrb r0, [r4, #14]	@ 0001b69a a07b
.org 0x1b69c
	adds r0, #1	@ 0001b69c 0130
.org 0x1b69e
	strb r0, [r4, #14]	@ 0001b69e a073
.org 0x1b6a0
	ldrh r0, [r4, #18]	@ 0001b6a0 608a
.org 0x1b6a2
	adds r0, #8	@ 0001b6a2 0830
.org 0x1b6a4
	strh r0, [r4, #18]	@ 0001b6a4 6082
.org 0x1b6a6
	ldrh r0, [r4, #16]	@ 0001b6a6 208a
.org 0x1b6a8
	adds r0, #2	@ 0001b6a8 0230
.org 0x1b6aa
	strh r0, [r4, #16]	@ 0001b6aa 2082
.org 0x1b6ac
	ldr r1, [pc, #60]	@ 0001b6ac 0f49
.org 0x1b6ae
	lsls r0, r0, #24	@ 0001b6ae 0006
.org 0x1b6b0
	lsrs r0, r0, #23	@ 0001b6b0 c00d
.org 0x1b6b2
	adds r0, r0, r1	@ 0001b6b2 4018
.org 0x1b6b4
	movs r1, #0	@ 0001b6b4 0021
.org 0x1b6b6
	ldrsh r0, [r0, r1]	@ 0001b6b6 405e
.org 0x1b6b8
	movs r3, #128	@ 0001b6b8 8023
.org 0x1b6ba
	lsls r3, r3, #1	@ 0001b6ba 5b00
.org 0x1b6bc
	adds r0, r0, r3	@ 0001b6bc c018
.org 0x1b6be
	asrs r0, r0, #5	@ 0001b6be 4011
.org 0x1b6c0
	adds r0, #24	@ 0001b6c0 1830
.org 0x1b6c2
	asrs r0, r0, #2	@ 0001b6c2 8010
.org 0x1b6c4
	adds r0, #1	@ 0001b6c4 0130
.org 0x1b6c6
	str r0, [r4, #104]	@ 0001b6c6 a066
.org 0x1b6c8
	ldr r2, [pc, #20]	@ 0001b6c8 054a
.org 0x1b6ca
	movs r1, #31	@ 0001b6ca 1f21
.org 0x1b6cc
	ands r0, r1	@ 0001b6cc 0840
.org 0x1b6ce
	movs r3, #128	@ 0001b6ce 8023
.org 0x1b6d0
	lsls r3, r3, #5	@ 0001b6d0 5b01
.org 0x1b6d2
	adds r1, r3, #0	@ 0001b6d2 191c
.org 0x1b6d4
	orrs r0, r1	@ 0001b6d4 0843
.org 0x1b6d6
	strh r0, [r2, #2]	@ 0001b6d6 5080
.org 0x1b6d8
	add sp, #8	@ 0001b6d8 02b0
.org 0x1b6da
	pop {r4}	@ 0001b6da 10bc
.org 0x1b6dc
	pop {r0}	@ 0001b6dc 01bc
.org 0x1b6de
	bx r0	@ 0001b6de 0047
