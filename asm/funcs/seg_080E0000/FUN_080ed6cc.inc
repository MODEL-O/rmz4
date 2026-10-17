@ FUN_080ed6cc  entry 0x080ed6cc  size 94
.thumb
.org 0xed6cc
FUN_080ed6cc:
	push {r4, r5, r6, r7, lr}	@ 000ed6cc f0b5
.org 0xed6ce
	adds r6, r0, #0	@ 000ed6ce 061c
.org 0xed6d0
	adds r7, r3, #0	@ 000ed6d0 1f1c
.org 0xed6d2
	lsls r1, r1, #24	@ 000ed6d2 0906
.org 0xed6d4
	lsrs r5, r1, #24	@ 000ed6d4 0d0e
.org 0xed6d6
	lsls r2, r2, #24	@ 000ed6d6 1206
.org 0xed6d8
	lsrs r4, r2, #24	@ 000ed6d8 140e
.org 0xed6da
	ldr r0, [pc, #80]	@ 000ed6da 1448
.org 0xed6dc
	ldr r0, [r0, #0]	@ 000ed6dc 0068
.org 0xed6de
	bl 0x5500	@ 000ed6de 17f70fff
.org 0xed6e2
	adds r3, r0, #0	@ 000ed6e2 031c
.org 0xed6e4
	cmp r3, #0	@ 000ed6e4 002b
.org 0xed6e6
	beq.n 0xed722	@ 000ed6e6 1cd0
.org 0xed6e8
	adds r1, r3, #0	@ 000ed6e8 191c
.org 0xed6ea
	adds r1, #37	@ 000ed6ea 2531
.org 0xed6ec
	movs r2, #0	@ 000ed6ec 0022
.org 0xed6ee
	movs r0, #30	@ 000ed6ee 1e20
.org 0xed6f0
	strb r0, [r1, #0]	@ 000ed6f0 0870
.org 0xed6f2
	ldr r1, [pc, #60]	@ 000ed6f2 0f49
.org 0xed6f4
	movs r0, #15	@ 000ed6f4 0f20
.org 0xed6f6
	strb r0, [r3, #9]	@ 000ed6f6 5872
.org 0xed6f8
	ldr r0, [r1, #60]	@ 000ed6f8 c86b
.org 0xed6fa
	ldr r0, [r0, #0]	@ 000ed6fa 0068
.org 0xed6fc
	str r0, [r3, #20]	@ 000ed6fc 5861
.org 0xed6fe
	movs r0, #0	@ 000ed6fe 0020
.org 0xed700
	strh r2, [r3, #32]	@ 000ed700 1a84
.org 0xed702
	adds r1, r3, #0	@ 000ed702 191c
.org 0xed704
	adds r1, #34	@ 000ed704 2231
.org 0xed706
	strb r0, [r1, #0]	@ 000ed706 0870
.org 0xed708
	ldrb r1, [r3, #11]	@ 000ed708 d97a
.org 0xed70a
	movs r0, #16	@ 000ed70a 1020
.org 0xed70c
	orrs r0, r1	@ 000ed70c 0843
.org 0xed70e
	strb r0, [r3, #11]	@ 000ed70e d872
.org 0xed710
	ldrb r0, [r3, #28]	@ 000ed710 187f
.org 0xed712
	strb r0, [r3, #29]	@ 000ed712 5877
.org 0xed714
	ldr r0, [r6, #0]	@ 000ed714 3068
.org 0xed716
	ldr r1, [r6, #4]	@ 000ed716 7168
.org 0xed718
	str r0, [r3, #84]	@ 000ed718 5865
.org 0xed71a
	str r1, [r3, #88]	@ 000ed71a 9965
.org 0xed71c
	strb r5, [r3, #16]	@ 000ed71c 1d74
.org 0xed71e
	strb r4, [r3, #17]	@ 000ed71e 5c74
.org 0xed720
	str r7, [r3, #40]	@ 000ed720 9f62
.org 0xed722
	adds r0, r3, #0	@ 000ed722 181c
.org 0xed724
	pop {r4, r5, r6, r7}	@ 000ed724 f0bc
.org 0xed726
	pop {r1}	@ 000ed726 02bc
.org 0xed728
	bx r1	@ 000ed728 0847
