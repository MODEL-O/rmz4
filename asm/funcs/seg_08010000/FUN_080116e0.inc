@ FUN_080116e0  entry 0x080116e0  size 94
.thumb
.org 0x116e0
FUN_080116e0:
	push {r4, r5, r6, lr}	@ 000116e0 70b5
.org 0x116e2
	adds r5, r0, #0	@ 000116e2 051c
.org 0x116e4
	ldr r3, [pc, #88]	@ 000116e4 164b
.org 0x116e6
	ldr r1, [pc, #92]	@ 000116e6 1749
.org 0x116e8
	ldr r0, [pc, #92]	@ 000116e8 1748
.org 0x116ea
	adds r1, r1, r0	@ 000116ea 0918
.org 0x116ec
	ldr r2, [r1, #0]	@ 000116ec 0a68
.org 0x116ee
	ldr r0, [pc, #92]	@ 000116ee 1748
.org 0x116f0
	muls r0, r2	@ 000116f0 5043
.org 0x116f2
	ldr r2, [pc, #92]	@ 000116f2 174a
.org 0x116f4
	adds r0, r0, r2	@ 000116f4 8018
.org 0x116f6
	str r0, [r1, #0]	@ 000116f6 0860
.org 0x116f8
	lsrs r0, r0, #16	@ 000116f8 000c
.org 0x116fa
	movs r1, #31	@ 000116fa 1f21
.org 0x116fc
	ands r0, r1	@ 000116fc 0840
.org 0x116fe
	lsls r0, r0, #1	@ 000116fe 4000
.org 0x11700
	adds r0, r0, r3	@ 00011700 c018
.org 0x11702
	ldrh r1, [r0, #0]	@ 00011702 0188
.org 0x11704
	adds r0, r5, #0	@ 00011704 281c
.org 0x11706
	adds r0, #104	@ 00011706 6830
.org 0x11708
	movs r6, #0	@ 00011708 0026
.org 0x1170a
	strh r1, [r0, #0]	@ 0001170a 0180
.org 0x1170c
	ldr r4, [pc, #68]	@ 0001170c 114c
.org 0x1170e
	ldr r0, [r4, #0]	@ 0001170e 2068
.org 0x11710
	ldr r1, [pc, #68]	@ 00011710 1149
.org 0x11712
	adds r0, r0, r1	@ 00011712 4018
.org 0x11714
	movs r1, #128	@ 00011714 8021
.org 0x11716
	lsls r1, r1, #7	@ 00011716 c901
.org 0x11718
	bl 0x1ea4	@ 00011718 f0f7c4fb
.org 0x1171c
	ldr r0, [r4, #0]	@ 0001171c 2068
.org 0x1171e
	ldr r2, [pc, #60]	@ 0001171e 0f4a
.org 0x11720
	adds r0, r0, r2	@ 00011720 8018
.org 0x11722
	movs r1, #0	@ 00011722 0021
.org 0x11724
	bl 0x2208	@ 00011724 f0f770fd
.org 0x11728
	adds r5, #106	@ 00011728 6a35
.org 0x1172a
	strh r6, [r5, #0]	@ 0001172a 2e80
.org 0x1172c
	ldr r1, [pc, #48]	@ 0001172c 0c49
.org 0x1172e
	ldr r0, [pc, #52]	@ 0001172e 0d48
.org 0x11730
	adds r1, r1, r0	@ 00011730 0918
.org 0x11732
	ldrb r0, [r1, #0]	@ 00011732 0878
.org 0x11734
	adds r0, #1	@ 00011734 0130
.org 0x11736
	strb r0, [r1, #0]	@ 00011736 0870
.org 0x11738
	pop {r4, r5, r6}	@ 00011738 70bc
.org 0x1173a
	pop {r0}	@ 0001173a 01bc
.org 0x1173c
	bx r0	@ 0001173c 0047
