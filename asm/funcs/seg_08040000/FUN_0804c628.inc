@ FUN_0804c628  entry 0x0804c628  size 204
.thumb
.org 0x4c628
FUN_0804c628:
	push {r4, r5, r6, r7, lr}	@ 0004c628 f0b5
.org 0x4c62a
	adds r5, r0, #0	@ 0004c62a 051c
.org 0x4c62c
	adds r4, r1, #0	@ 0004c62c 0c1c
.org 0x4c62e
	lsls r2, r2, #24	@ 0004c62e 1206
.org 0x4c630
	lsrs r7, r2, #24	@ 0004c630 170e
.org 0x4c632
	lsls r3, r3, #24	@ 0004c632 1b06
.org 0x4c634
	lsrs r6, r3, #24	@ 0004c634 1e0e
.org 0x4c636
	ldr r0, [pc, #64]	@ 0004c636 1048
.org 0x4c638
	ldr r0, [r0, #0]	@ 0004c638 0068
.org 0x4c63a
	bl 0x5500	@ 0004c63a b8f761ff
.org 0x4c63e
	adds r3, r0, #0	@ 0004c63e 031c
.org 0x4c640
	cmp r3, #0	@ 0004c640 002b
.org 0x4c642
	beq.n 0x4c70a	@ 0004c642 62d0
.org 0x4c644
	adds r0, r5, #0	@ 0004c644 281c
.org 0x4c646
	adds r0, #248	@ 0004c646 f830
.org 0x4c648
	ldrb r0, [r0, #0]	@ 0004c648 0078
.org 0x4c64a
	cmp r0, #0	@ 0004c64a 0028
.org 0x4c64c
	bne.n 0x4c688	@ 0004c64c 1cd1
.org 0x4c64e
	ldr r0, [pc, #44]	@ 0004c64e 0b48
.org 0x4c650
	movs r1, #45	@ 0004c650 2d21
.org 0x4c652
	strb r1, [r3, #9]	@ 0004c652 5972
.org 0x4c654
	adds r0, #180	@ 0004c654 b430
.org 0x4c656
	ldr r0, [r0, #0]	@ 0004c656 0068
.org 0x4c658
	ldr r0, [r0, #0]	@ 0004c658 0068
.org 0x4c65a
	str r0, [r3, #20]	@ 0004c65a 5861
.org 0x4c65c
	ldrb r1, [r3, #11]	@ 0004c65c d97a
.org 0x4c65e
	movs r0, #191	@ 0004c65e bf20
.org 0x4c660
	ands r0, r1	@ 0004c660 0840
.org 0x4c662
	strb r0, [r3, #11]	@ 0004c662 d872
.org 0x4c664
	adds r1, r3, #0	@ 0004c664 191c
.org 0x4c666
	adds r1, #37	@ 0004c666 2531
.org 0x4c668
	movs r0, #16	@ 0004c668 1020
.org 0x4c66a
	strb r0, [r1, #0]	@ 0004c66a 0870
.org 0x4c66c
	ldr r0, [pc, #16]	@ 0004c66c 0448
.org 0x4c66e
	ldrh r0, [r0, #0]	@ 0004c66e 0088
.org 0x4c670
	strh r0, [r3, #32]	@ 0004c670 1884
.org 0x4c672
	ldr r0, [pc, #16]	@ 0004c672 0448
.org 0x4c674
	ldrb r0, [r0, #0]	@ 0004c674 0078
.org 0x4c676
	b.n 0x4c6b0	@ 0004c676 1be0
.org 0x4c678
	.byte 0x88,0xed,0x02,0x02	@ 0004c678 data
.org 0x4c67c
	.byte 0xf8,0x39,0x85,0x08	@ 0004c67c data
.org 0x4c680
	.byte 0xfc,0x36,0x85,0x08	@ 0004c680 data
.org 0x4c684
	.byte 0x04,0x37,0x85,0x08	@ 0004c684 data
.org 0x4c688
	ldr r0, [pc, #72]	@ 0004c688 1248
.org 0x4c68a
	movs r1, #45	@ 0004c68a 2d21
.org 0x4c68c
	strb r1, [r3, #9]	@ 0004c68c 5972
.org 0x4c68e
	adds r0, #180	@ 0004c68e b430
.org 0x4c690
	ldr r0, [r0, #0]	@ 0004c690 0068
.org 0x4c692
	ldr r0, [r0, #0]	@ 0004c692 0068
.org 0x4c694
	str r0, [r3, #20]	@ 0004c694 5861
.org 0x4c696
	ldrb r1, [r3, #11]	@ 0004c696 d97a
.org 0x4c698
	movs r0, #191	@ 0004c698 bf20
.org 0x4c69a
	ands r0, r1	@ 0004c69a 0840
.org 0x4c69c
	strb r0, [r3, #11]	@ 0004c69c d872
.org 0x4c69e
	adds r1, r3, #0	@ 0004c69e 191c
.org 0x4c6a0
	adds r1, #37	@ 0004c6a0 2531
.org 0x4c6a2
	movs r0, #16	@ 0004c6a2 1020
.org 0x4c6a4
	strb r0, [r1, #0]	@ 0004c6a4 0870
.org 0x4c6a6
	ldr r0, [pc, #48]	@ 0004c6a6 0c48
.org 0x4c6a8
	ldrh r0, [r0, #2]	@ 0004c6a8 4088
.org 0x4c6aa
	strh r0, [r3, #32]	@ 0004c6aa 1884
.org 0x4c6ac
	ldr r0, [pc, #44]	@ 0004c6ac 0b48
.org 0x4c6ae
	ldrb r0, [r0, #1]	@ 0004c6ae 4078
.org 0x4c6b0
	subs r1, #3	@ 0004c6b0 0339
.org 0x4c6b2
	strb r0, [r1, #0]	@ 0004c6b2 0870
.org 0x4c6b4
	str r5, [r3, #40]	@ 0004c6b4 9d62
.org 0x4c6b6
	str r4, [r3, #44]	@ 0004c6b6 dc62
.org 0x4c6b8
	ldr r0, [r4, #84]	@ 0004c6b8 606d
.org 0x4c6ba
	ldr r1, [r4, #88]	@ 0004c6ba a16d
.org 0x4c6bc
	str r0, [r3, #84]	@ 0004c6bc 5865
.org 0x4c6be
	str r1, [r3, #88]	@ 0004c6be 9965
.org 0x4c6c0
	ldrb r0, [r4, #10]	@ 0004c6c0 a07a
.org 0x4c6c2
	lsrs r2, r0, #4	@ 0004c6c2 0209
.org 0x4c6c4
	movs r0, #1	@ 0004c6c4 0120
.org 0x4c6c6
	ands r2, r0	@ 0004c6c6 0240
.org 0x4c6c8
	cmp r2, #0	@ 0004c6c8 002a
.org 0x4c6ca
	beq.n 0x4c6e0	@ 0004c6ca 09d0
.org 0x4c6cc
	ldrb r1, [r3, #10]	@ 0004c6cc 997a
.org 0x4c6ce
	movs r0, #16	@ 0004c6ce 1020
.org 0x4c6d0
	orrs r0, r1	@ 0004c6d0 0843
.org 0x4c6d2
	b.n 0x4c6e6	@ 0004c6d2 08e0
.org 0x4c6d4
	.byte 0xf8,0x39,0x85,0x08	@ 0004c6d4 data
.org 0x4c6d8
	.byte 0xfc,0x36,0x85,0x08	@ 0004c6d8 data
.org 0x4c6dc
	.byte 0x04,0x37,0x85,0x08	@ 0004c6dc data
.org 0x4c6e0
	ldrb r1, [r3, #10]	@ 0004c6e0 997a
.org 0x4c6e2
	movs r0, #239	@ 0004c6e2 ef20
.org 0x4c6e4
	ands r0, r1	@ 0004c6e4 0840
.org 0x4c6e6
	strb r0, [r3, #10]	@ 0004c6e6 9872
.org 0x4c6e8
	adds r1, r2, #0	@ 0004c6e8 111c
.org 0x4c6ea
	adds r0, r3, #0	@ 0004c6ea 181c
.org 0x4c6ec
	adds r0, #76	@ 0004c6ec 4c30
.org 0x4c6ee
	strb r1, [r0, #0]	@ 0004c6ee 0170
.org 0x4c6f0
	movs r0, #74	@ 0004c6f0 4a20
.org 0x4c6f2
	adds r0, r0, r3	@ 0004c6f2 c018
