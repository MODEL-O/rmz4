@ FUN_080fe654  entry 0x080fe654  size 90
.thumb
.org 0xfe654
FUN_080fe654:
	push {r4, r5, r6, lr}	@ 000fe654 70b5
.org 0xfe656
	adds r6, r0, #0	@ 000fe656 061c
.org 0xfe658
	lsls r1, r1, #24	@ 000fe658 0906
.org 0xfe65a
	lsrs r5, r1, #24	@ 000fe65a 0d0e
.org 0xfe65c
	lsls r2, r2, #24	@ 000fe65c 1206
.org 0xfe65e
	lsrs r4, r2, #24	@ 000fe65e 140e
.org 0xfe660
	ldr r0, [pc, #76]	@ 000fe660 1348
.org 0xfe662
	ldr r0, [r0, #0]	@ 000fe662 0068
.org 0xfe664
	bl 0x5500	@ 000fe664 06f74cff
.org 0xfe668
	adds r3, r0, #0	@ 000fe668 031c
.org 0xfe66a
	cmp r3, #0	@ 000fe66a 002b
.org 0xfe66c
	beq.n 0xfe6a8	@ 000fe66c 1cd0
.org 0xfe66e
	adds r1, r3, #0	@ 000fe66e 191c
.org 0xfe670
	adds r1, #37	@ 000fe670 2531
.org 0xfe672
	movs r2, #0	@ 000fe672 0022
.org 0xfe674
	movs r0, #30	@ 000fe674 1e20
.org 0xfe676
	strb r0, [r1, #0]	@ 000fe676 0870
.org 0xfe678
	ldr r0, [pc, #56]	@ 000fe678 0e48
.org 0xfe67a
	movs r1, #48	@ 000fe67a 3021
.org 0xfe67c
	strb r1, [r3, #9]	@ 000fe67c 5972
.org 0xfe67e
	adds r0, #192	@ 000fe67e c030
.org 0xfe680
	ldr r0, [r0, #0]	@ 000fe680 0068
.org 0xfe682
	ldr r0, [r0, #0]	@ 000fe682 0068
.org 0xfe684
	str r0, [r3, #20]	@ 000fe684 5861
.org 0xfe686
	movs r0, #0	@ 000fe686 0020
.org 0xfe688
	strh r2, [r3, #32]	@ 000fe688 1a84
.org 0xfe68a
	adds r1, r3, #0	@ 000fe68a 191c
.org 0xfe68c
	adds r1, #34	@ 000fe68c 2231
.org 0xfe68e
	strb r0, [r1, #0]	@ 000fe68e 0870
.org 0xfe690
	ldrb r1, [r3, #11]	@ 000fe690 d97a
.org 0xfe692
	movs r0, #16	@ 000fe692 1020
.org 0xfe694
	orrs r0, r1	@ 000fe694 0843
.org 0xfe696
	strb r0, [r3, #11]	@ 000fe696 d872
.org 0xfe698
	ldrb r0, [r3, #28]	@ 000fe698 187f
.org 0xfe69a
	strb r0, [r3, #29]	@ 000fe69a 5877
.org 0xfe69c
	ldr r0, [r6, #0]	@ 000fe69c 3068
.org 0xfe69e
	ldr r1, [r6, #4]	@ 000fe69e 7168
.org 0xfe6a0
	str r0, [r3, #84]	@ 000fe6a0 5865
.org 0xfe6a2
	str r1, [r3, #88]	@ 000fe6a2 9965
.org 0xfe6a4
	strb r5, [r3, #16]	@ 000fe6a4 1d74
.org 0xfe6a6
	strb r4, [r3, #17]	@ 000fe6a6 5c74
.org 0xfe6a8
	pop {r4, r5, r6}	@ 000fe6a8 70bc
.org 0xfe6aa
	pop {r0}	@ 000fe6aa 01bc
.org 0xfe6ac
	bx r0	@ 000fe6ac 0047
