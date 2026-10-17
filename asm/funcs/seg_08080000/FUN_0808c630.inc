@ FUN_0808c630  entry 0x0808c630  size 148
.thumb
.org 0x8c630
FUN_0808c630:
	push {lr}	@ 0008c630 00b5
.org 0x8c632
	adds r3, r0, #0	@ 0008c632 031c
.org 0x8c634
	ldr r1, [r3, #40]	@ 0008c634 996a
.org 0x8c636
	ldrb r0, [r1, #12]	@ 0008c636 087b
.org 0x8c638
	cmp r0, #1	@ 0008c638 0128
.org 0x8c63a
	bls.n 0x8c6ac	@ 0008c63a 37d9
.org 0x8c63c
	adds r2, r3, #0	@ 0008c63c 1a1c
.org 0x8c63e
	adds r2, #182	@ 0008c63e b632
.org 0x8c640
	ldrb r0, [r2, #0]	@ 0008c640 1078
.org 0x8c642
	cmp r0, #255	@ 0008c642 ff28
.org 0x8c644
	bne.n 0x8c684	@ 0008c644 1ed1
.org 0x8c646
	ldrb r1, [r3, #10]	@ 0008c646 997a
.org 0x8c648
	movs r0, #254	@ 0008c648 fe20
.org 0x8c64a
	ands r0, r1	@ 0008c64a 0840
.org 0x8c64c
	movs r2, #0	@ 0008c64c 0022
.org 0x8c64e
	movs r1, #253	@ 0008c64e fd21
.org 0x8c650
	ands r0, r1	@ 0008c650 0840
.org 0x8c652
	strb r0, [r3, #10]	@ 0008c652 9872
.org 0x8c654
	adds r0, r3, #0	@ 0008c654 181c
.org 0x8c656
	adds r0, #140	@ 0008c656 8c30
.org 0x8c658
	str r2, [r0, #0]	@ 0008c658 0260
.org 0x8c65a
	adds r0, #4	@ 0008c65a 0430
.org 0x8c65c
	str r2, [r0, #0]	@ 0008c65c 0260
.org 0x8c65e
	adds r0, #4	@ 0008c65e 0430
.org 0x8c660
	strb r2, [r0, #0]	@ 0008c660 0270
.org 0x8c662
	ldrb r1, [r3, #10]	@ 0008c662 997a
.org 0x8c664
	movs r0, #251	@ 0008c664 fb20
.org 0x8c666
	ands r0, r1	@ 0008c666 0840
.org 0x8c668
	strb r0, [r3, #10]	@ 0008c668 9872
.org 0x8c66a
	ldr r1, [pc, #20]	@ 0008c66a 0549
.org 0x8c66c
	ldrb r0, [r3, #9]	@ 0008c66c 587a
.org 0x8c66e
	lsls r0, r0, #2	@ 0008c66e 8000
.org 0x8c670
	adds r0, r0, r1	@ 0008c670 4018
.org 0x8c672
	movs r1, #3	@ 0008c672 0321
.org 0x8c674
	str r1, [r3, #12]	@ 0008c674 d960
.org 0x8c676
	ldr r0, [r0, #0]	@ 0008c676 0068
.org 0x8c678
	ldr r0, [r0, #12]	@ 0008c678 c068
.org 0x8c67a
	str r0, [r3, #20]	@ 0008c67a 5861
.org 0x8c67c
	b.n 0x8c6ca	@ 0008c67c 25e0
.org 0x8c67e
	.byte 0x00	@ 0008c67e data
.org 0x8c67f
	.byte 0x00	@ 0008c67f data
.org 0x8c680
	.byte 0x40,0xdb,0x85,0x08	@ 0008c680 data
.org 0x8c684
	ldr r1, [pc, #32]	@ 0008c684 0849
.org 0x8c686
	ldrb r0, [r3, #9]	@ 0008c686 587a
.org 0x8c688
	lsls r0, r0, #2	@ 0008c688 8000
.org 0x8c68a
	adds r0, r0, r1	@ 0008c68a 4018
.org 0x8c68c
	movs r1, #2	@ 0008c68c 0221
.org 0x8c68e
	str r1, [r3, #12]	@ 0008c68e d960
.org 0x8c690
	ldr r0, [r0, #0]	@ 0008c690 0068
.org 0x8c692
	ldr r0, [r0, #8]	@ 0008c692 8068
.org 0x8c694
	str r0, [r3, #20]	@ 0008c694 5861
.org 0x8c696
	ldrb r0, [r2, #0]	@ 0008c696 1078
.org 0x8c698
	movs r1, #0	@ 0008c698 0021
.org 0x8c69a
	strb r0, [r3, #13]	@ 0008c69a 5873
.org 0x8c69c
	strb r1, [r3, #14]	@ 0008c69c 9973
.org 0x8c69e
	strb r1, [r3, #15]	@ 0008c69e d973
.org 0x8c6a0
	adds r0, r3, #0	@ 0008c6a0 181c
.org 0x8c6a2
	bl 0x8c8f8	@ 0008c6a2 00f029f9
.org 0x8c6a6
	b.n 0x8c6ca	@ 0008c6a6 10e0
.org 0x8c6a8
	.byte 0x40,0xdb,0x85,0x08	@ 0008c6a8 data
.org 0x8c6ac
	ldr r0, [r1, #44]	@ 0008c6ac c86a
.org 0x8c6ae
	cmp r0, #0	@ 0008c6ae 0028
.org 0x8c6b0
	beq.n 0x8c6ba	@ 0008c6b0 03d0
.org 0x8c6b2
	adds r0, r3, #0	@ 0008c6b2 181c
.org 0x8c6b4
	bl 0x1d1f4	@ 0008c6b4 90f79efd
.org 0x8c6b8
	b.n 0x8c6ca	@ 0008c6b8 07e0
.org 0x8c6ba
	ldr r0, [pc, #20]	@ 0008c6ba 0548
.org 0x8c6bc
	ldrb r1, [r3, #13]	@ 0008c6bc 597b
.org 0x8c6be
	lsls r1, r1, #2	@ 0008c6be 8900
.org 0x8c6c0
	adds r1, r1, r0	@ 0008c6c0 0918
.org 0x8c6c2
	ldr r1, [r1, #0]	@ 0008c6c2 0968
