@ FUN_080d357c  entry 0x080d357c  size 84
.thumb
.org 0xd357c
FUN_080d357c:
	push {r4, r5, r6, r7, lr}	@ 000d357c f0b5
.org 0xd357e
	adds r7, r0, #0	@ 000d357e 071c
.org 0xd3580
	adds r5, r1, #0	@ 000d3580 0d1c
.org 0xd3582
	lsls r2, r2, #24	@ 000d3582 1206
.org 0xd3584
	lsrs r6, r2, #24	@ 000d3584 160e
.org 0xd3586
	ldr r0, [pc, #72]	@ 000d3586 1248
.org 0xd3588
	ldr r0, [r0, #0]	@ 000d3588 0068
.org 0xd358a
	bl 0x5500	@ 000d358a 31f7b9ff
.org 0xd358e
	adds r4, r0, #0	@ 000d358e 041c
.org 0xd3590
	cmp r4, #0	@ 000d3590 002c
.org 0xd3592
	beq.n 0xd35c8	@ 000d3592 19d0
.org 0xd3594
	adds r0, #37	@ 000d3594 2530
.org 0xd3596
	movs r2, #0	@ 000d3596 0022
.org 0xd3598
	movs r3, #1	@ 000d3598 0123
.org 0xd359a
	strb r3, [r0, #0]	@ 000d359a 0370
.org 0xd359c
	ldr r1, [pc, #52]	@ 000d359c 0d49
.org 0xd359e
	movs r0, #10	@ 000d359e 0a20
.org 0xd35a0
	strb r0, [r4, #9]	@ 000d35a0 6072
.org 0xd35a2
	ldr r0, [r1, #40]	@ 000d35a2 886a
.org 0xd35a4
	ldr r0, [r0, #0]	@ 000d35a4 0068
.org 0xd35a6
	str r0, [r4, #20]	@ 000d35a6 6061
.org 0xd35a8
	movs r1, #0	@ 000d35a8 0021
.org 0xd35aa
	strh r2, [r4, #32]	@ 000d35aa 2284
.org 0xd35ac
	adds r0, r4, #0	@ 000d35ac 201c
.org 0xd35ae
	adds r0, #34	@ 000d35ae 2230
.org 0xd35b0
	strb r1, [r0, #0]	@ 000d35b0 0170
.org 0xd35b2
	str r7, [r4, #40]	@ 000d35b2 a762
.org 0xd35b4
	ldr r0, [r5, #0]	@ 000d35b4 2868
.org 0xd35b6
	str r0, [r4, #116]	@ 000d35b6 6067
.org 0xd35b8
	ldr r0, [r5, #4]	@ 000d35b8 6868
.org 0xd35ba
	str r0, [r4, #120]	@ 000d35ba a067
.org 0xd35bc
	strb r6, [r4, #18]	@ 000d35bc a674
.org 0xd35be
	adds r0, r4, #0	@ 000d35be 201c
.org 0xd35c0
	adds r0, #124	@ 000d35c0 7c30
.org 0xd35c2
	strb r6, [r0, #0]	@ 000d35c2 0670
.org 0xd35c4
	strb r3, [r4, #16]	@ 000d35c4 2374
.org 0xd35c6
	strb r1, [r4, #17]	@ 000d35c6 6174
.org 0xd35c8
	adds r0, r4, #0	@ 000d35c8 201c
.org 0xd35ca
	pop {r4, r5, r6, r7}	@ 000d35ca f0bc
.org 0xd35cc
	pop {r1}	@ 000d35cc 02bc
.org 0xd35ce
	bx r1	@ 000d35ce 0847
