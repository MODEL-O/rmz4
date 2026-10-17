@ FUN_080da650  entry 0x080da650  size 84
.thumb
.org 0xda650
FUN_080da650:
	push {r4, r5, r6, r7, lr}	@ 000da650 f0b5
.org 0xda652
	adds r6, r0, #0	@ 000da652 061c
.org 0xda654
	adds r7, r1, #0	@ 000da654 0f1c
.org 0xda656
	lsls r2, r2, #24	@ 000da656 1206
.org 0xda658
	lsrs r5, r2, #24	@ 000da658 150e
.org 0xda65a
	lsls r3, r3, #24	@ 000da65a 1b06
.org 0xda65c
	lsrs r4, r3, #24	@ 000da65c 1c0e
.org 0xda65e
	ldr r0, [pc, #68]	@ 000da65e 1148
.org 0xda660
	ldr r0, [r0, #0]	@ 000da660 0068
.org 0xda662
	bl 0x5500	@ 000da662 2af74dff
.org 0xda666
	adds r3, r0, #0	@ 000da666 031c
.org 0xda668
	cmp r3, #0	@ 000da668 002b
.org 0xda66a
	beq.n 0xda69c	@ 000da66a 17d0
.org 0xda66c
	adds r1, r3, #0	@ 000da66c 191c
.org 0xda66e
	adds r1, #37	@ 000da66e 2531
.org 0xda670
	movs r2, #0	@ 000da670 0022
.org 0xda672
	movs r0, #1	@ 000da672 0120
.org 0xda674
	strb r0, [r1, #0]	@ 000da674 0870
.org 0xda676
	ldr r0, [pc, #48]	@ 000da676 0c48
.org 0xda678
	movs r1, #36	@ 000da678 2421
.org 0xda67a
	strb r1, [r3, #9]	@ 000da67a 5972
.org 0xda67c
	adds r0, #144	@ 000da67c 9030
.org 0xda67e
	ldr r0, [r0, #0]	@ 000da67e 0068
.org 0xda680
	ldr r0, [r0, #0]	@ 000da680 0068
.org 0xda682
	str r0, [r3, #20]	@ 000da682 5861
.org 0xda684
	movs r0, #0	@ 000da684 0020
.org 0xda686
	strh r2, [r3, #32]	@ 000da686 1a84
.org 0xda688
	adds r1, r3, #0	@ 000da688 191c
.org 0xda68a
	adds r1, #34	@ 000da68a 2231
.org 0xda68c
	strb r0, [r1, #0]	@ 000da68c 0870
.org 0xda68e
	str r6, [r3, #40]	@ 000da68e 9e62
.org 0xda690
	ldr r0, [r7, #0]	@ 000da690 3868
.org 0xda692
	ldr r1, [r7, #4]	@ 000da692 7968
.org 0xda694
	str r0, [r3, #84]	@ 000da694 5865
.org 0xda696
	str r1, [r3, #88]	@ 000da696 9965
.org 0xda698
	strb r5, [r3, #16]	@ 000da698 1d74
.org 0xda69a
	strb r4, [r3, #17]	@ 000da69a 5c74
.org 0xda69c
	adds r0, r3, #0	@ 000da69c 181c
.org 0xda69e
	pop {r4, r5, r6, r7}	@ 000da69e f0bc
.org 0xda6a0
	pop {r1}	@ 000da6a0 02bc
.org 0xda6a2
	bx r1	@ 000da6a2 0847
