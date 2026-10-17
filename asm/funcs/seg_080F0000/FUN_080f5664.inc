@ FUN_080f5664  entry 0x080f5664  size 84
.thumb
.org 0xf5664
FUN_080f5664:
	push {r4, r5, lr}	@ 000f5664 30b5
.org 0xf5666
	adds r4, r0, #0	@ 000f5666 041c
.org 0xf5668
	bl 0x1cc9c	@ 000f5668 27f718fb
.org 0xf566c
	ldrb r1, [r4, #10]	@ 000f566c a17a
.org 0xf566e
	movs r0, #1	@ 000f566e 0120
.org 0xf5670
	movs r5, #0	@ 000f5670 0025
.org 0xf5672
	orrs r0, r1	@ 000f5672 0843
.org 0xf5674
	movs r1, #2	@ 000f5674 0221
.org 0xf5676
	orrs r0, r1	@ 000f5676 0843
.org 0xf5678
	strb r0, [r4, #10]	@ 000f5678 a072
.org 0xf567a
	ldr r1, [pc, #60]	@ 000f567a 0f49
.org 0xf567c
	ldrb r0, [r4, #16]	@ 000f567c 207c
.org 0xf567e
	lsls r0, r0, #1	@ 000f567e 4000
.org 0xf5680
	adds r0, r0, r1	@ 000f5680 4018
.org 0xf5682
	ldrh r1, [r0, #0]	@ 000f5682 0188
.org 0xf5684
	adds r0, r4, #0	@ 000f5684 201c
.org 0xf5686
	bl 0x1cf00	@ 000f5686 27f73bfc
.org 0xf568a
	ldrb r1, [r4, #11]	@ 000f568a e17a
.org 0xf568c
	movs r0, #8	@ 000f568c 0820
.org 0xf568e
	orrs r0, r1	@ 000f568e 0843
.org 0xf5690
	strb r0, [r4, #11]	@ 000f5690 e072
.org 0xf5692
	ldr r0, [pc, #40]	@ 000f5692 0a48
.org 0xf5694
	str r0, [r4, #48]	@ 000f5694 2063
.org 0xf5696
	movs r0, #15	@ 000f5696 0f20
.org 0xf5698
	strh r0, [r4, #38]	@ 000f5698 e084
.org 0xf569a
	adds r0, r4, #0	@ 000f569a 201c
.org 0xf569c
	adds r0, #180	@ 000f569c b430
.org 0xf569e
	ldr r1, [pc, #32]	@ 000f569e 0849
.org 0xf56a0
	str r1, [r0, #0]	@ 000f56a0 0160
.org 0xf56a2
	subs r0, #96	@ 000f56a2 6038
.org 0xf56a4
	bl 0xf57a4	@ 000f56a4 00f07ef8
.org 0xf56a8
	adds r1, r4, #0	@ 000f56a8 211c
.org 0xf56aa
	adds r1, #184	@ 000f56aa b831
.org 0xf56ac
	strb r0, [r1, #0]	@ 000f56ac 0870
.org 0xf56ae
	adds r4, #194	@ 000f56ae c234
.org 0xf56b0
	strh r5, [r4, #0]	@ 000f56b0 2580
.org 0xf56b2
	pop {r4, r5}	@ 000f56b2 30bc
.org 0xf56b4
	pop {r0}	@ 000f56b4 01bc
.org 0xf56b6
	bx r0	@ 000f56b6 0047
