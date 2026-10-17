@ FUN_080af774  entry 0x080af774  size 76
.thumb
.org 0xaf774
FUN_080af774:
	push {r4, r5, lr}	@ 000af774 30b5
.org 0xaf776
	adds r4, r0, #0	@ 000af776 041c
.org 0xaf778
	ldrb r5, [r4, #14]	@ 000af778 a57b
.org 0xaf77a
	cmp r5, #0	@ 000af77a 002d
.org 0xaf77c
	bne.n 0xaf7a6	@ 000af77c 13d1
.org 0xaf77e
	movs r0, #20	@ 000af77e 1420
.org 0xaf780
	strb r0, [r4, #18]	@ 000af780 a074
.org 0xaf782
	ldrb r1, [r4, #17]	@ 000af782 617c
.org 0xaf784
	movs r2, #163	@ 000af784 a322
.org 0xaf786
	lsls r2, r2, #8	@ 000af786 1202
.org 0xaf788
	adds r0, r2, #0	@ 000af788 101c
.org 0xaf78a
	orrs r1, r0	@ 000af78a 0143
.org 0xaf78c
	adds r0, r4, #0	@ 000af78c 201c
.org 0xaf78e
	bl 0x1cf00	@ 000af78e 6df7b7fb
.org 0xaf792
	ldr r1, [r4, #44]	@ 000af792 e16a
.org 0xaf794
	cmp r1, #0	@ 000af794 0029
.org 0xaf796
	beq.n 0xaf7a0	@ 000af796 03d0
.org 0xaf798
	movs r0, #2	@ 000af798 0220
.org 0xaf79a
	strb r0, [r1, #13]	@ 000af79a 4873
.org 0xaf79c
	ldr r0, [r4, #44]	@ 000af79c e06a
.org 0xaf79e
	strb r5, [r0, #14]	@ 000af79e 8573
.org 0xaf7a0
	ldrb r0, [r4, #14]	@ 000af7a0 a07b
.org 0xaf7a2
	adds r0, #1	@ 000af7a2 0130
.org 0xaf7a4
	strb r0, [r4, #14]	@ 000af7a4 a073
.org 0xaf7a6
	adds r0, r4, #0	@ 000af7a6 201c
.org 0xaf7a8
	bl 0xaf84c	@ 000af7a8 00f050f8
.org 0xaf7ac
	lsls r0, r0, #24	@ 000af7ac 0006
.org 0xaf7ae
	cmp r0, #0	@ 000af7ae 0028
.org 0xaf7b0
	beq.n 0xaf7ba	@ 000af7b0 03d0
.org 0xaf7b2
	movs r1, #0	@ 000af7b2 0021
.org 0xaf7b4
	movs r0, #1	@ 000af7b4 0120
.org 0xaf7b6
	strb r0, [r4, #13]	@ 000af7b6 6073
.org 0xaf7b8
	strb r1, [r4, #14]	@ 000af7b8 a173
.org 0xaf7ba
	pop {r4, r5}	@ 000af7ba 30bc
.org 0xaf7bc
	pop {r0}	@ 000af7bc 01bc
.org 0xaf7be
	bx r0	@ 000af7be 0047
