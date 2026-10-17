@ FUN_0801a67c  entry 0x0801a67c  size 84
.thumb
.org 0x1a67c
FUN_0801a67c:
	push {r4, r5, lr}	@ 0001a67c 30b5
.org 0x1a67e
	adds r3, r0, #0	@ 0001a67e 031c
.org 0x1a680
	ldrb r0, [r3, #14]	@ 0001a680 987b
.org 0x1a682
	ldr r5, [pc, #76]	@ 0001a682 134d
.org 0x1a684
	ldr r4, [pc, #76]	@ 0001a684 134c
.org 0x1a686
	cmp r0, #0	@ 0001a686 0028
.org 0x1a688
	bne.n 0x1a6b4	@ 0001a688 14d1
.org 0x1a68a
	ldr r1, [r3, #92]	@ 0001a68a d96d
.org 0x1a68c
	lsrs r1, r1, #4	@ 0001a68c 0909
.org 0x1a68e
	lsls r1, r1, #1	@ 0001a68e 4900
.org 0x1a690
	ldr r0, [pc, #68]	@ 0001a690 1148
.org 0x1a692
	adds r1, r1, r0	@ 0001a692 0918
.org 0x1a694
	ldrh r2, [r1, #0]	@ 0001a694 0a88
.org 0x1a696
	ldr r0, [pc, #68]	@ 0001a696 1148
.org 0x1a698
	ands r0, r2	@ 0001a698 1040
.org 0x1a69a
	movs r2, #2	@ 0001a69a 0222
.org 0x1a69c
	orrs r0, r2	@ 0001a69c 1043
.org 0x1a69e
	strh r0, [r1, #0]	@ 0001a69e 0880
.org 0x1a6a0
	ldr r0, [pc, #60]	@ 0001a6a0 0f48
.org 0x1a6a2
	strh r0, [r5, #0]	@ 0001a6a2 2880
.org 0x1a6a4
	ldr r0, [pc, #60]	@ 0001a6a4 0f48
.org 0x1a6a6
	adds r1, r4, r0	@ 0001a6a6 2118
.org 0x1a6a8
	movs r0, #16	@ 0001a6a8 1020
.org 0x1a6aa
	strb r0, [r1, #0]	@ 0001a6aa 0870
.org 0x1a6ac
	strh r0, [r5, #2]	@ 0001a6ac 6880
.org 0x1a6ae
	ldrb r0, [r3, #14]	@ 0001a6ae 987b
.org 0x1a6b0
	adds r0, #1	@ 0001a6b0 0130
.org 0x1a6b2
	strb r0, [r3, #14]	@ 0001a6b2 9873
.org 0x1a6b4
	ldr r0, [pc, #44]	@ 0001a6b4 0b48
.org 0x1a6b6
	adds r2, r4, r0	@ 0001a6b6 2218
.org 0x1a6b8
	ldrb r0, [r2, #0]	@ 0001a6b8 1078
.org 0x1a6ba
	movs r1, #31	@ 0001a6ba 1f21
.org 0x1a6bc
	ands r1, r0	@ 0001a6bc 0140
.org 0x1a6be
	ldrb r2, [r2, #0]	@ 0001a6be 1278
.org 0x1a6c0
	movs r0, #16	@ 0001a6c0 1020
.org 0x1a6c2
	subs r0, r0, r2	@ 0001a6c2 801a
.org 0x1a6c4
	lsls r0, r0, #8	@ 0001a6c4 0002
.org 0x1a6c6
	orrs r1, r0	@ 0001a6c6 0143
.org 0x1a6c8
	strh r1, [r5, #2]	@ 0001a6c8 6980
.org 0x1a6ca
	pop {r4, r5}	@ 0001a6ca 30bc
.org 0x1a6cc
	pop {r0}	@ 0001a6cc 01bc
.org 0x1a6ce
	bx r0	@ 0001a6ce 0047
