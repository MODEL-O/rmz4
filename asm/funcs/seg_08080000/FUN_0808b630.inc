@ FUN_0808b630  entry 0x0808b630  size 132
.thumb
.org 0x8b630
FUN_0808b630:
	push {r4, lr}	@ 0008b630 10b5
.org 0x8b632
	adds r4, r0, #0	@ 0008b632 041c
.org 0x8b634
	ldrb r0, [r4, #15]	@ 0008b634 e07b
.org 0x8b636
	cmp r0, #0	@ 0008b636 0028
.org 0x8b638
	bne.n 0x8b648	@ 0008b638 06d1
.org 0x8b63a
	ldr r1, [pc, #120]	@ 0008b63a 1e49
.org 0x8b63c
	adds r0, r4, #0	@ 0008b63c 201c
.org 0x8b63e
	bl 0x1cf00	@ 0008b63e 91f75ffc
.org 0x8b642
	ldrb r0, [r4, #15]	@ 0008b642 e07b
.org 0x8b644
	adds r0, #1	@ 0008b644 0130
.org 0x8b646
	strb r0, [r4, #15]	@ 0008b646 e073
.org 0x8b648
	adds r0, r4, #0	@ 0008b648 201c
.org 0x8b64a
	bl 0x1cff0	@ 0008b64a 91f7d1fc
.org 0x8b64e
	adds r0, r4, #0	@ 0008b64e 201c
.org 0x8b650
	adds r0, #116	@ 0008b650 7430
.org 0x8b652
	ldr r3, [pc, #100]	@ 0008b652 194b
.org 0x8b654
	ldrb r1, [r4, #30]	@ 0008b654 a17f
.org 0x8b656
	lsls r1, r1, #8	@ 0008b656 0902
.org 0x8b658
	adds r2, r4, #0	@ 0008b658 221c
.org 0x8b65a
	adds r2, #112	@ 0008b65a 7032
.org 0x8b65c
	ldrb r2, [r2, #0]	@ 0008b65c 1278
.org 0x8b65e
	orrs r1, r2	@ 0008b65e 1143
.org 0x8b660
	ldr r2, [pc, #88]	@ 0008b660 164a
.org 0x8b662
	adds r1, r1, r2	@ 0008b662 8918
.org 0x8b664
	lsls r1, r1, #2	@ 0008b664 8900
.org 0x8b666
	adds r1, r1, r3	@ 0008b666 c918
.org 0x8b668
	adds r2, r4, #0	@ 0008b668 221c
.org 0x8b66a
	adds r2, #113	@ 0008b66a 7132
.org 0x8b66c
	ldrb r2, [r2, #0]	@ 0008b66c 1278
.org 0x8b66e
	lsls r2, r2, #24	@ 0008b66e 1206
.org 0x8b670
	asrs r2, r2, #24	@ 0008b670 1216
.org 0x8b672
	ldr r1, [r1, #0]	@ 0008b672 0968
.org 0x8b674
	lsls r2, r2, #2	@ 0008b674 9200
.org 0x8b676
	adds r2, r2, r1	@ 0008b676 5218
.org 0x8b678
	ldr r1, [r2, #0]	@ 0008b678 1168
.org 0x8b67a
	ldrb r2, [r1, #0]	@ 0008b67a 0a78
.org 0x8b67c
	lsls r1, r2, #1	@ 0008b67c 5100
.org 0x8b67e
	adds r1, r1, r2	@ 0008b67e 8918
.org 0x8b680
	lsls r1, r1, #3	@ 0008b680 c900
.org 0x8b682
	ldr r2, [pc, #60]	@ 0008b682 0f4a
.org 0x8b684
	adds r1, r1, r2	@ 0008b684 8918
.org 0x8b686
	bl 0x5784	@ 0008b686 7af77df8
.org 0x8b68a
	adds r0, r4, #0	@ 0008b68a 201c
.org 0x8b68c
	bl 0x8bbd8	@ 0008b68c 00f0a4fa
.org 0x8b690
	adds r1, r4, #0	@ 0008b690 211c
.org 0x8b692
	adds r1, #185	@ 0008b692 b931
.org 0x8b694
	ldrb r0, [r1, #0]	@ 0008b694 0878
.org 0x8b696
	cmp r0, #0	@ 0008b696 0028
.org 0x8b698
	beq.n 0x8b69e	@ 0008b698 01d0
.org 0x8b69a
	adds r0, #255	@ 0008b69a ff30
.org 0x8b69c
	strb r0, [r1, #0]	@ 0008b69c 0870
.org 0x8b69e
	adds r0, r4, #0	@ 0008b69e 201c
.org 0x8b6a0
	adds r0, #115	@ 0008b6a0 7330
.org 0x8b6a2
	ldrb r1, [r0, #0]	@ 0008b6a2 0178
.org 0x8b6a4
	cmp r1, #3	@ 0008b6a4 0329
.org 0x8b6a6
	bne.n 0x8b6ae	@ 0008b6a6 02d1
.org 0x8b6a8
	movs r0, #0	@ 0008b6a8 0020
.org 0x8b6aa
	strb r1, [r4, #14]	@ 0008b6aa a173
.org 0x8b6ac
	strb r0, [r4, #15]	@ 0008b6ac e073
.org 0x8b6ae
	pop {r4}	@ 0008b6ae 10bc
.org 0x8b6b0
	pop {r0}	@ 0008b6b0 01bc
.org 0x8b6b2
	bx r0	@ 0008b6b2 0047
