@ FUN_0800556c  entry 0x0800556c  size 52
.thumb
.org 0x556c
FUN_0800556c:
	push {r4, lr}	@ 0000556c 10b5
.org 0x556e
	adds r4, r0, #0	@ 0000556e 041c
.org 0x5570
	ldr r0, [pc, #44]	@ 00005570 0b48
.org 0x5572
	ldr r3, [r0, #0]	@ 00005572 0368
.org 0x5574
	ldr r2, [r3, #16]	@ 00005574 1a69
.org 0x5576
	cmp r2, #0	@ 00005576 002a
.org 0x5578
	beq.n 0x5598	@ 00005578 0ed0
.org 0x557a
	ldr r0, [r2, #0]	@ 0000557a 1068
.org 0x557c
	str r0, [r3, #16]	@ 0000557c 1861
.org 0x557e
	ldrh r0, [r3, #10]	@ 0000557e 5889
.org 0x5580
	subs r0, #1	@ 00005580 0138
.org 0x5582
	movs r1, #0	@ 00005582 0021
.org 0x5584
	strh r0, [r3, #10]	@ 00005584 5881
.org 0x5586
	ldr r0, [r4, #4]	@ 00005586 6068
.org 0x5588
	str r0, [r2, #4]	@ 00005588 5060
.org 0x558a
	str r4, [r2, #0]	@ 0000558a 1460
.org 0x558c
	ldr r0, [r4, #4]	@ 0000558c 6068
.org 0x558e
	str r2, [r0, #0]	@ 0000558e 0260
.org 0x5590
	str r2, [r4, #4]	@ 00005590 6260
.org 0x5592
	strh r1, [r2, #10]	@ 00005592 5181
.org 0x5594
	str r1, [r2, #12]	@ 00005594 d160
.org 0x5596
	str r1, [r2, #16]	@ 00005596 1161
.org 0x5598
	adds r0, r2, #0	@ 00005598 101c
.org 0x559a
	pop {r4}	@ 0000559a 10bc
.org 0x559c
	pop {r1}	@ 0000559c 02bc
.org 0x559e
	bx r1	@ 0000559e 0847
