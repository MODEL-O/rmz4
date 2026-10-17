@ FUN_08011630  entry 0x08011630  size 94
.thumb
.org 0x11630
FUN_08011630:
	push {r4, r5, r6, lr}	@ 00011630 70b5
.org 0x11632
	adds r5, r0, #0	@ 00011632 051c
.org 0x11634
	ldr r3, [pc, #88]	@ 00011634 164b
.org 0x11636
	ldr r1, [pc, #92]	@ 00011636 1749
.org 0x11638
	ldr r0, [pc, #92]	@ 00011638 1748
.org 0x1163a
	adds r1, r1, r0	@ 0001163a 0918
.org 0x1163c
	ldr r2, [r1, #0]	@ 0001163c 0a68
.org 0x1163e
	ldr r0, [pc, #92]	@ 0001163e 1748
.org 0x11640
	muls r0, r2	@ 00011640 5043
.org 0x11642
	ldr r2, [pc, #92]	@ 00011642 174a
.org 0x11644
	adds r0, r0, r2	@ 00011644 8018
.org 0x11646
	str r0, [r1, #0]	@ 00011646 0860
.org 0x11648
	lsrs r0, r0, #16	@ 00011648 000c
.org 0x1164a
	movs r1, #31	@ 0001164a 1f21
.org 0x1164c
	ands r0, r1	@ 0001164c 0840
.org 0x1164e
	lsls r0, r0, #1	@ 0001164e 4000
.org 0x11650
	adds r0, r0, r3	@ 00011650 c018
.org 0x11652
	ldrh r1, [r0, #0]	@ 00011652 0188
.org 0x11654
	adds r0, r5, #0	@ 00011654 281c
.org 0x11656
	adds r0, #104	@ 00011656 6830
.org 0x11658
	movs r6, #0	@ 00011658 0026
.org 0x1165a
	strh r1, [r0, #0]	@ 0001165a 0180
.org 0x1165c
	ldr r4, [pc, #68]	@ 0001165c 114c
.org 0x1165e
	ldr r0, [r4, #0]	@ 0001165e 2068
.org 0x11660
	ldr r1, [pc, #68]	@ 00011660 1149
.org 0x11662
	adds r0, r0, r1	@ 00011662 4018
.org 0x11664
	movs r1, #128	@ 00011664 8021
.org 0x11666
	lsls r1, r1, #7	@ 00011666 c901
.org 0x11668
	bl 0x1ea4	@ 00011668 f0f71cfc
.org 0x1166c
	ldr r0, [r4, #0]	@ 0001166c 2068
.org 0x1166e
	ldr r2, [pc, #60]	@ 0001166e 0f4a
.org 0x11670
	adds r0, r0, r2	@ 00011670 8018
.org 0x11672
	movs r1, #0	@ 00011672 0021
.org 0x11674
	bl 0x2208	@ 00011674 f0f7c8fd
.org 0x11678
	adds r5, #106	@ 00011678 6a35
.org 0x1167a
	strh r6, [r5, #0]	@ 0001167a 2e80
.org 0x1167c
	ldr r1, [pc, #48]	@ 0001167c 0c49
.org 0x1167e
	ldr r0, [pc, #52]	@ 0001167e 0d48
.org 0x11680
	adds r1, r1, r0	@ 00011680 0918
.org 0x11682
	ldrb r0, [r1, #0]	@ 00011682 0878
.org 0x11684
	adds r0, #1	@ 00011684 0130
.org 0x11686
	strb r0, [r1, #0]	@ 00011686 0870
.org 0x11688
	pop {r4, r5, r6}	@ 00011688 70bc
.org 0x1168a
	pop {r0}	@ 0001168a 01bc
.org 0x1168c
	bx r0	@ 0001168c 0047
