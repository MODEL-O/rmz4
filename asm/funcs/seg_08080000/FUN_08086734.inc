@ FUN_08086734  entry 0x08086734  size 84
.thumb
.org 0x86734
FUN_08086734:
	push {r4, r5, lr}	@ 00086734 30b5
.org 0x86736
	adds r4, r0, #0	@ 00086736 041c
.org 0x86738
	adds r0, #140	@ 00086738 8c30
.org 0x8673a
	movs r1, #0	@ 0008673a 0021
.org 0x8673c
	str r1, [r0, #0]	@ 0008673c 0160
.org 0x8673e
	adds r0, #4	@ 0008673e 0430
.org 0x86740
	str r1, [r0, #0]	@ 00086740 0160
.org 0x86742
	adds r0, #4	@ 00086742 0430
.org 0x86744
	strb r1, [r0, #0]	@ 00086744 0170
.org 0x86746
	ldrb r1, [r4, #10]	@ 00086746 a17a
.org 0x86748
	movs r0, #251	@ 00086748 fb20
.org 0x8674a
	ands r0, r1	@ 0008674a 0840
.org 0x8674c
	strb r0, [r4, #10]	@ 0008674c a072
.org 0x8674e
	adds r5, r4, #0	@ 0008674e 251c
.org 0x86750
	adds r5, #84	@ 00086750 5435
.org 0x86752
	movs r0, #1	@ 00086752 0120
.org 0x86754
	adds r1, r5, #0	@ 00086754 291c
.org 0x86756
	bl 0xd0c88	@ 00086756 4af097fa
.org 0x8675a
	ldr r2, [pc, #44]	@ 0008675a 0b4a
.org 0x8675c
	ldrh r1, [r2, #12]	@ 0008675c 9189
.org 0x8675e
	ldr r0, [pc, #44]	@ 0008675e 0b48
.org 0x86760
	cmp r1, r0	@ 00086760 8142
.org 0x86762
	bhi.n 0x86768	@ 00086762 01d8
.org 0x86764
	adds r0, r1, #1	@ 00086764 481c
.org 0x86766
	strh r0, [r2, #12]	@ 00086766 9081
.org 0x86768
	adds r0, r4, #0	@ 00086768 201c
.org 0x8676a
	adds r1, r5, #0	@ 0008676a 291c
.org 0x8676c
	bl 0x2abe0	@ 0008676c a4f738fa
.org 0x86770
	ldr r1, [pc, #28]	@ 00086770 0749
.org 0x86772
	ldrb r0, [r4, #9]	@ 00086772 607a
.org 0x86774
	lsls r0, r0, #2	@ 00086774 8000
.org 0x86776
	adds r0, r0, r1	@ 00086776 4018
.org 0x86778
	movs r1, #4	@ 00086778 0421
.org 0x8677a
	str r1, [r4, #12]	@ 0008677a e160
.org 0x8677c
	ldr r0, [r0, #0]	@ 0008677c 0068
.org 0x8677e
	ldr r0, [r0, #16]	@ 0008677e 0069
.org 0x86780
	str r0, [r4, #20]	@ 00086780 6061
.org 0x86782
	pop {r4, r5}	@ 00086782 30bc
.org 0x86784
	pop {r0}	@ 00086784 01bc
.org 0x86786
	bx r0	@ 00086786 0047
