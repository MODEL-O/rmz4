@ FUN_080ab6b0  entry 0x080ab6b0  size 98
.thumb
.org 0xab6b0
FUN_080ab6b0:
	push {r4, r5, r6, r7, lr}	@ 000ab6b0 f0b5
.org 0xab6b2
	adds r6, r0, #0	@ 000ab6b2 061c
.org 0xab6b4
	adds r7, r1, #0	@ 000ab6b4 0f1c
.org 0xab6b6
	lsls r2, r2, #24	@ 000ab6b6 1206
.org 0xab6b8
	lsrs r5, r2, #24	@ 000ab6b8 150e
.org 0xab6ba
	lsls r3, r3, #24	@ 000ab6ba 1b06
.org 0xab6bc
	lsrs r4, r3, #24	@ 000ab6bc 1c0e
.org 0xab6be
	ldr r0, [pc, #84]	@ 000ab6be 1548
.org 0xab6c0
	ldr r0, [r0, #0]	@ 000ab6c0 0068
.org 0xab6c2
	bl 0x5500	@ 000ab6c2 59f71dff
.org 0xab6c6
	adds r3, r0, #0	@ 000ab6c6 031c
.org 0xab6c8
	cmp r3, #0	@ 000ab6c8 002b
.org 0xab6ca
	beq.n 0xab70a	@ 000ab6ca 1ed0
.org 0xab6cc
	adds r1, r3, #0	@ 000ab6cc 191c
.org 0xab6ce
	adds r1, #37	@ 000ab6ce 2531
.org 0xab6d0
	movs r2, #0	@ 000ab6d0 0022
.org 0xab6d2
	movs r0, #24	@ 000ab6d2 1820
.org 0xab6d4
	strb r0, [r1, #0]	@ 000ab6d4 0870
.org 0xab6d6
	ldr r0, [pc, #64]	@ 000ab6d6 1048
.org 0xab6d8
	movs r1, #72	@ 000ab6d8 4821
.org 0xab6da
	strb r1, [r3, #9]	@ 000ab6da 5972
.org 0xab6dc
	adds r1, #216	@ 000ab6dc d831
.org 0xab6de
	adds r0, r0, r1	@ 000ab6de 4018
.org 0xab6e0
	ldr r0, [r0, #0]	@ 000ab6e0 0068
.org 0xab6e2
	ldr r0, [r0, #0]	@ 000ab6e2 0068
.org 0xab6e4
	str r0, [r3, #20]	@ 000ab6e4 5861
.org 0xab6e6
	movs r0, #0	@ 000ab6e6 0020
.org 0xab6e8
	strh r2, [r3, #32]	@ 000ab6e8 1a84
.org 0xab6ea
	adds r1, r3, #0	@ 000ab6ea 191c
.org 0xab6ec
	adds r1, #34	@ 000ab6ec 2231
.org 0xab6ee
	strb r0, [r1, #0]	@ 000ab6ee 0870
.org 0xab6f0
	ldrb r1, [r3, #11]	@ 000ab6f0 d97a
.org 0xab6f2
	movs r0, #16	@ 000ab6f2 1020
.org 0xab6f4
	orrs r0, r1	@ 000ab6f4 0843
.org 0xab6f6
	strb r0, [r3, #11]	@ 000ab6f6 d872
.org 0xab6f8
	ldrb r0, [r3, #28]	@ 000ab6f8 187f
.org 0xab6fa
	strb r0, [r3, #29]	@ 000ab6fa 5877
.org 0xab6fc
	str r6, [r3, #40]	@ 000ab6fc 9e62
.org 0xab6fe
	ldr r0, [r7, #0]	@ 000ab6fe 3868
.org 0xab700
	ldr r1, [r7, #4]	@ 000ab700 7968
.org 0xab702
	str r0, [r3, #84]	@ 000ab702 5865
.org 0xab704
	str r1, [r3, #88]	@ 000ab704 9965
.org 0xab706
	strb r5, [r3, #16]	@ 000ab706 1d74
.org 0xab708
	strb r4, [r3, #17]	@ 000ab708 5c74
.org 0xab70a
	adds r0, r3, #0	@ 000ab70a 181c
.org 0xab70c
	pop {r4, r5, r6, r7}	@ 000ab70c f0bc
.org 0xab70e
	pop {r1}	@ 000ab70e 02bc
.org 0xab710
	bx r1	@ 000ab710 0847
