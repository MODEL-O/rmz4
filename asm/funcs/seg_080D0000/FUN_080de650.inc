@ FUN_080de650  entry 0x080de650  size 110
.thumb
.org 0xde650
FUN_080de650:
	push {r4, r5, r6, r7, lr}	@ 000de650 f0b5
.org 0xde652
	adds r4, r0, #0	@ 000de652 041c
.org 0xde654
	ldr r0, [r4, #40]	@ 000de654 a06a
.org 0xde656
	ldr r5, [r4, #44]	@ 000de656 e56a
.org 0xde658
	adds r6, r4, #0	@ 000de658 261c
.org 0xde65a
	adds r6, #116	@ 000de65a 7436
.org 0xde65c
	adds r7, r4, #0	@ 000de65c 271c
.org 0xde65e
	adds r7, #84	@ 000de65e 5437
.org 0xde660
	ldrb r0, [r0, #12]	@ 000de660 007b
.org 0xde662
	cmp r0, #0	@ 000de662 0028
.org 0xde664
	beq.n 0xde6b8	@ 000de664 28d0
.org 0xde666
	adds r0, r4, #0	@ 000de666 201c
.org 0xde668
	bl 0x1cc9c	@ 000de668 3ef718fb
.org 0xde66c
	ldrb r0, [r4, #10]	@ 000de66c a07a
.org 0xde66e
	movs r1, #1	@ 000de66e 0121
.org 0xde670
	orrs r1, r0	@ 000de670 0143
.org 0xde672
	strb r1, [r4, #10]	@ 000de672 a172
.org 0xde674
	str r6, [r4, #64]	@ 000de674 2664
.org 0xde676
	ldrb r0, [r4, #16]	@ 000de676 207c
.org 0xde678
	adds r0, #25	@ 000de678 1930
.org 0xde67a
	adds r1, r4, #0	@ 000de67a 211c
.org 0xde67c
	adds r1, #37	@ 000de67c 2531
.org 0xde67e
	strb r0, [r1, #0]	@ 000de67e 0870
.org 0xde680
	adds r0, r4, #0	@ 000de680 201c
.org 0xde682
	movs r1, #8	@ 000de682 0821
.org 0xde684
	bl 0x1d3d0	@ 000de684 3ef7a4fe
.org 0xde688
	adds r1, r7, #0	@ 000de688 391c
.org 0xde68a
	movs r2, #2	@ 000de68a 0222
.org 0xde68c
	ldr r0, [r5, #84]	@ 000de68c 686d
.org 0xde68e
	str r0, [r1, #0]	@ 000de68e 0860
.org 0xde690
	ldr r0, [r5, #88]	@ 000de690 a86d
.org 0xde692
	str r0, [r1, #4]	@ 000de692 4860
.org 0xde694
	adds r1, #8	@ 000de694 0831
.org 0xde696
	subs r2, #1	@ 000de696 013a
.org 0xde698
	cmp r2, #0	@ 000de698 002a
.org 0xde69a
	bge.n 0xde68c	@ 000de69a f7da
.org 0xde69c
	movs r0, #3	@ 000de69c 0320
.org 0xde69e
	strb r0, [r4, #18]	@ 000de69e a074
.org 0xde6a0
	ldr r1, [pc, #28]	@ 000de6a0 0749
.org 0xde6a2
	ldrb r0, [r4, #9]	@ 000de6a2 607a
.org 0xde6a4
	lsls r0, r0, #2	@ 000de6a4 8000
.org 0xde6a6
	adds r0, r0, r1	@ 000de6a6 4018
.org 0xde6a8
	movs r1, #1	@ 000de6a8 0121
.org 0xde6aa
	str r1, [r4, #12]	@ 000de6aa e160
.org 0xde6ac
	ldr r0, [r0, #0]	@ 000de6ac 0068
.org 0xde6ae
	ldr r0, [r0, #4]	@ 000de6ae 4068
.org 0xde6b0
	str r0, [r4, #20]	@ 000de6b0 6061
.org 0xde6b2
	adds r0, r4, #0	@ 000de6b2 201c
.org 0xde6b4
	bl 0xde6c4	@ 000de6b4 00f006f8
.org 0xde6b8
	pop {r4, r5, r6, r7}	@ 000de6b8 f0bc
.org 0xde6ba
	pop {r0}	@ 000de6ba 01bc
.org 0xde6bc
	bx r0	@ 000de6bc 0047
