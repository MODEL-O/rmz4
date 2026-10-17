@ FUN_080fa654  entry 0x080fa654  size 76
.thumb
.org 0xfa654
FUN_080fa654:
	push {r4, lr}	@ 000fa654 10b5
.org 0xfa656
	adds r4, r0, #0	@ 000fa656 041c
.org 0xfa658
	ldrb r0, [r4, #14]	@ 000fa658 a07b
.org 0xfa65a
	cmp r0, #0	@ 000fa65a 0028
.org 0xfa65c
	bne.n 0xfa684	@ 000fa65c 12d1
.org 0xfa65e
	ldr r1, [pc, #64]	@ 000fa65e 1049
.org 0xfa660
	adds r0, r4, #0	@ 000fa660 201c
.org 0xfa662
	bl 0x1cf00	@ 000fa662 22f74dfc
.org 0xfa666
	ldrb r1, [r4, #11]	@ 000fa666 e17a
.org 0xfa668
	movs r0, #8	@ 000fa668 0820
.org 0xfa66a
	orrs r0, r1	@ 000fa66a 0843
.org 0xfa66c
	strb r0, [r4, #11]	@ 000fa66c e072
.org 0xfa66e
	ldr r0, [pc, #52]	@ 000fa66e 0d48
.org 0xfa670
	str r0, [r4, #48]	@ 000fa670 2063
.org 0xfa672
	movs r0, #1	@ 000fa672 0120
.org 0xfa674
	strh r0, [r4, #38]	@ 000fa674 e084
.org 0xfa676
	adds r1, r4, #0	@ 000fa676 211c
.org 0xfa678
	adds r1, #184	@ 000fa678 b831
.org 0xfa67a
	ldr r0, [r4, #88]	@ 000fa67a a06d
.org 0xfa67c
	str r0, [r1, #0]	@ 000fa67c 0860
.org 0xfa67e
	ldrb r0, [r4, #14]	@ 000fa67e a07b
.org 0xfa680
	adds r0, #1	@ 000fa680 0130
.org 0xfa682
	strb r0, [r4, #14]	@ 000fa682 a073
.org 0xfa684
	adds r0, r4, #0	@ 000fa684 201c
.org 0xfa686
	bl 0x1cff0	@ 000fa686 22f7b3fc
.org 0xfa68a
	adds r0, r4, #0	@ 000fa68a 201c
.org 0xfa68c
	adds r0, #115	@ 000fa68c 7330
.org 0xfa68e
	ldrb r0, [r0, #0]	@ 000fa68e 0078
.org 0xfa690
	cmp r0, #3	@ 000fa690 0328
.org 0xfa692
	bne.n 0xfa69a	@ 000fa692 02d1
.org 0xfa694
	movs r0, #0	@ 000fa694 0020
.org 0xfa696
	strb r0, [r4, #13]	@ 000fa696 6073
.org 0xfa698
	strb r0, [r4, #14]	@ 000fa698 a073
.org 0xfa69a
	pop {r4}	@ 000fa69a 10bc
.org 0xfa69c
	pop {r0}	@ 000fa69c 01bc
.org 0xfa69e
	bx r0	@ 000fa69e 0047
