@ FUN_080117f4  entry 0x080117f4  size 94
.thumb
.org 0x117f4
FUN_080117f4:
	push {r4, r5, r6, lr}	@ 000117f4 70b5
.org 0x117f6
	adds r5, r0, #0	@ 000117f6 051c
.org 0x117f8
	ldr r3, [pc, #88]	@ 000117f8 164b
.org 0x117fa
	ldr r1, [pc, #92]	@ 000117fa 1749
.org 0x117fc
	ldr r0, [pc, #92]	@ 000117fc 1748
.org 0x117fe
	adds r1, r1, r0	@ 000117fe 0918
.org 0x11800
	ldr r2, [r1, #0]	@ 00011800 0a68
.org 0x11802
	ldr r0, [pc, #92]	@ 00011802 1748
.org 0x11804
	muls r0, r2	@ 00011804 5043
.org 0x11806
	ldr r2, [pc, #92]	@ 00011806 174a
.org 0x11808
	adds r0, r0, r2	@ 00011808 8018
.org 0x1180a
	str r0, [r1, #0]	@ 0001180a 0860
.org 0x1180c
	lsrs r0, r0, #16	@ 0001180c 000c
.org 0x1180e
	movs r1, #31	@ 0001180e 1f21
.org 0x11810
	ands r0, r1	@ 00011810 0840
.org 0x11812
	lsls r0, r0, #1	@ 00011812 4000
.org 0x11814
	adds r0, r0, r3	@ 00011814 c018
.org 0x11816
	ldrh r1, [r0, #0]	@ 00011816 0188
.org 0x11818
	adds r0, r5, #0	@ 00011818 281c
.org 0x1181a
	adds r0, #104	@ 0001181a 6830
.org 0x1181c
	movs r6, #0	@ 0001181c 0026
.org 0x1181e
	strh r1, [r0, #0]	@ 0001181e 0180
.org 0x11820
	ldr r4, [pc, #68]	@ 00011820 114c
.org 0x11822
	ldr r0, [r4, #0]	@ 00011822 2068
.org 0x11824
	ldr r1, [pc, #68]	@ 00011824 1149
.org 0x11826
	adds r0, r0, r1	@ 00011826 4018
.org 0x11828
	movs r1, #128	@ 00011828 8021
.org 0x1182a
	lsls r1, r1, #7	@ 0001182a c901
.org 0x1182c
	bl 0x1ea4	@ 0001182c f0f73afb
.org 0x11830
	ldr r0, [r4, #0]	@ 00011830 2068
.org 0x11832
	ldr r2, [pc, #60]	@ 00011832 0f4a
.org 0x11834
	adds r0, r0, r2	@ 00011834 8018
.org 0x11836
	movs r1, #0	@ 00011836 0021
.org 0x11838
	bl 0x2208	@ 00011838 f0f7e6fc
.org 0x1183c
	adds r5, #106	@ 0001183c 6a35
.org 0x1183e
	strh r6, [r5, #0]	@ 0001183e 2e80
.org 0x11840
	ldr r1, [pc, #48]	@ 00011840 0c49
.org 0x11842
	ldr r0, [pc, #52]	@ 00011842 0d48
.org 0x11844
	adds r1, r1, r0	@ 00011844 0918
.org 0x11846
	ldrb r0, [r1, #0]	@ 00011846 0878
.org 0x11848
	adds r0, #1	@ 00011848 0130
.org 0x1184a
	strb r0, [r1, #0]	@ 0001184a 0870
.org 0x1184c
	pop {r4, r5, r6}	@ 0001184c 70bc
.org 0x1184e
	pop {r0}	@ 0001184e 01bc
.org 0x11850
	bx r0	@ 00011850 0047
