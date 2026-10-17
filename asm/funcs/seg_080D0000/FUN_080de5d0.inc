@ FUN_080de5d0  entry 0x080de5d0  size 120
.thumb
.org 0xde5d0
FUN_080de5d0:
	push {r4, r5, r6, lr}	@ 000de5d0 70b5
.org 0xde5d2
	adds r6, r0, #0	@ 000de5d2 061c
.org 0xde5d4
	ldr r4, [pc, #112]	@ 000de5d4 1c4c
.org 0xde5d6
	ldr r0, [r4, #0]	@ 000de5d6 2068
.org 0xde5d8
	bl 0x5500	@ 000de5d8 26f792ff
.org 0xde5dc
	adds r5, r0, #0	@ 000de5dc 051c
.org 0xde5de
	cmp r5, #0	@ 000de5de 002d
.org 0xde5e0
	beq.n 0xde60c	@ 000de5e0 14d0
.org 0xde5e2
	adds r1, r5, #0	@ 000de5e2 291c
.org 0xde5e4
	adds r1, #37	@ 000de5e4 2531
.org 0xde5e6
	movs r2, #0	@ 000de5e6 0022
.org 0xde5e8
	movs r0, #1	@ 000de5e8 0120
.org 0xde5ea
	strb r0, [r1, #0]	@ 000de5ea 0870
.org 0xde5ec
	ldr r0, [pc, #92]	@ 000de5ec 1748
.org 0xde5ee
	movs r1, #48	@ 000de5ee 3021
.org 0xde5f0
	strb r1, [r5, #9]	@ 000de5f0 6972
.org 0xde5f2
	adds r0, #192	@ 000de5f2 c030
.org 0xde5f4
	ldr r0, [r0, #0]	@ 000de5f4 0068
.org 0xde5f6
	ldr r0, [r0, #0]	@ 000de5f6 0068
.org 0xde5f8
	str r0, [r5, #20]	@ 000de5f8 6861
.org 0xde5fa
	movs r0, #0	@ 000de5fa 0020
.org 0xde5fc
	strh r2, [r5, #32]	@ 000de5fc 2a84
.org 0xde5fe
	adds r1, r5, #0	@ 000de5fe 291c
.org 0xde600
	adds r1, #34	@ 000de600 2231
.org 0xde602
	strb r0, [r1, #0]	@ 000de602 0870
.org 0xde604
	strb r0, [r5, #16]	@ 000de604 2874
.org 0xde606
	strb r0, [r5, #17]	@ 000de606 6874
.org 0xde608
	str r6, [r5, #40]	@ 000de608 ae62
.org 0xde60a
	str r6, [r5, #44]	@ 000de60a ee62
.org 0xde60c
	ldr r0, [r4, #0]	@ 000de60c 2068
.org 0xde60e
	bl 0x5500	@ 000de60e 26f777ff
.org 0xde612
	adds r4, r0, #0	@ 000de612 041c
.org 0xde614
	cmp r4, #0	@ 000de614 002c
.org 0xde616
	beq.n 0xde640	@ 000de616 13d0
.org 0xde618
	adds r0, #37	@ 000de618 2530
.org 0xde61a
	movs r3, #0	@ 000de61a 0023
.org 0xde61c
	movs r2, #1	@ 000de61c 0122
.org 0xde61e
	strb r2, [r0, #0]	@ 000de61e 0270
.org 0xde620
	ldr r0, [pc, #40]	@ 000de620 0a48
.org 0xde622
	movs r1, #48	@ 000de622 3021
.org 0xde624
	strb r1, [r4, #9]	@ 000de624 6172
.org 0xde626
	adds r0, #192	@ 000de626 c030
.org 0xde628
	ldr r0, [r0, #0]	@ 000de628 0068
.org 0xde62a
	ldr r0, [r0, #0]	@ 000de62a 0068
.org 0xde62c
	str r0, [r4, #20]	@ 000de62c 6061
.org 0xde62e
	movs r0, #0	@ 000de62e 0020
.org 0xde630
	strh r3, [r4, #32]	@ 000de630 2384
.org 0xde632
	adds r1, r4, #0	@ 000de632 211c
.org 0xde634
	adds r1, #34	@ 000de634 2231
.org 0xde636
	strb r0, [r1, #0]	@ 000de636 0870
.org 0xde638
	strb r2, [r4, #16]	@ 000de638 2274
.org 0xde63a
	strb r0, [r4, #17]	@ 000de63a 6074
.org 0xde63c
	str r5, [r4, #40]	@ 000de63c a562
.org 0xde63e
	str r6, [r4, #44]	@ 000de63e e662
.org 0xde640
	adds r0, r5, #0	@ 000de640 281c
.org 0xde642
	pop {r4, r5, r6}	@ 000de642 70bc
.org 0xde644
	pop {r1}	@ 000de644 02bc
.org 0xde646
	bx r1	@ 000de646 0847
