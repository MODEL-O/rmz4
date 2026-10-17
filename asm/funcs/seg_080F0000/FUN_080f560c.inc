@ FUN_080f560c  entry 0x080f560c  size 76
.thumb
.org 0xf560c
FUN_080f560c:
	push {r4, lr}	@ 000f560c 10b5
.org 0xf560e
	adds r4, r0, #0	@ 000f560e 041c
.org 0xf5610
	bl 0x1cc9c	@ 000f5610 27f744fb
.org 0xf5614
	ldrb r1, [r4, #10]	@ 000f5614 a17a
.org 0xf5616
	movs r0, #1	@ 000f5616 0120
.org 0xf5618
	orrs r0, r1	@ 000f5618 0843
.org 0xf561a
	movs r1, #2	@ 000f561a 0221
.org 0xf561c
	orrs r0, r1	@ 000f561c 0843
.org 0xf561e
	strb r0, [r4, #10]	@ 000f561e a072
.org 0xf5620
	ldr r1, [pc, #52]	@ 000f5620 0d49
.org 0xf5622
	ldrb r0, [r4, #16]	@ 000f5622 207c
.org 0xf5624
	lsls r0, r0, #1	@ 000f5624 4000
.org 0xf5626
	adds r0, r0, r1	@ 000f5626 4018
.org 0xf5628
	ldrh r1, [r0, #0]	@ 000f5628 0188
.org 0xf562a
	adds r0, r4, #0	@ 000f562a 201c
.org 0xf562c
	bl 0x1cf00	@ 000f562c 27f768fc
.org 0xf5630
	ldrb r1, [r4, #11]	@ 000f5630 e17a
.org 0xf5632
	movs r0, #8	@ 000f5632 0820
.org 0xf5634
	orrs r0, r1	@ 000f5634 0843
.org 0xf5636
	strb r0, [r4, #11]	@ 000f5636 e072
.org 0xf5638
	ldr r0, [pc, #32]	@ 000f5638 0848
.org 0xf563a
	str r0, [r4, #48]	@ 000f563a 2063
.org 0xf563c
	movs r0, #15	@ 000f563c 0f20
.org 0xf563e
	strh r0, [r4, #38]	@ 000f563e e084
.org 0xf5640
	adds r0, r4, #0	@ 000f5640 201c
.org 0xf5642
	adds r0, #180	@ 000f5642 b430
.org 0xf5644
	ldr r1, [pc, #24]	@ 000f5644 0649
.org 0xf5646
	str r1, [r0, #0]	@ 000f5646 0160
.org 0xf5648
	subs r0, #96	@ 000f5648 6038
.org 0xf564a
	bl 0xf57a4	@ 000f564a 00f0abf8
.org 0xf564e
	adds r4, #184	@ 000f564e b834
.org 0xf5650
	strb r0, [r4, #0]	@ 000f5650 2070
.org 0xf5652
	pop {r4}	@ 000f5652 10bc
.org 0xf5654
	pop {r0}	@ 000f5654 01bc
.org 0xf5656
	bx r0	@ 000f5656 0047
