@ FUN_080d380c  entry 0x080d380c  size 82
.thumb
.org 0xd380c
FUN_080d380c:
	push {r4, r5, r6, lr}	@ 000d380c 70b5
.org 0xd380e
	adds r6, r0, #0	@ 000d380e 061c
.org 0xd3810
	adds r4, r1, #0	@ 000d3810 0c1c
.org 0xd3812
	lsls r2, r2, #24	@ 000d3812 1206
.org 0xd3814
	lsrs r5, r2, #24	@ 000d3814 150e
.org 0xd3816
	ldr r0, [pc, #72]	@ 000d3816 1248
.org 0xd3818
	ldr r0, [r0, #0]	@ 000d3818 0068
.org 0xd381a
	bl 0x5500	@ 000d381a 31f771fe
.org 0xd381e
	adds r3, r0, #0	@ 000d381e 031c
.org 0xd3820
	cmp r3, #0	@ 000d3820 002b
.org 0xd3822
	beq.n 0xd3856	@ 000d3822 18d0
.org 0xd3824
	adds r1, r3, #0	@ 000d3824 191c
.org 0xd3826
	adds r1, #37	@ 000d3826 2531
.org 0xd3828
	movs r2, #0	@ 000d3828 0022
.org 0xd382a
	movs r0, #1	@ 000d382a 0120
.org 0xd382c
	strb r0, [r1, #0]	@ 000d382c 0870
.org 0xd382e
	ldr r1, [pc, #52]	@ 000d382e 0d49
.org 0xd3830
	movs r0, #11	@ 000d3830 0b20
.org 0xd3832
	strb r0, [r3, #9]	@ 000d3832 5872
.org 0xd3834
	ldr r0, [r1, #44]	@ 000d3834 c86a
.org 0xd3836
	ldr r0, [r0, #0]	@ 000d3836 0068
.org 0xd3838
	str r0, [r3, #20]	@ 000d3838 5861
.org 0xd383a
	movs r0, #0	@ 000d383a 0020
.org 0xd383c
	strh r2, [r3, #32]	@ 000d383c 1a84
.org 0xd383e
	adds r1, r3, #0	@ 000d383e 191c
.org 0xd3840
	adds r1, #34	@ 000d3840 2231
.org 0xd3842
	strb r0, [r1, #0]	@ 000d3842 0870
.org 0xd3844
	str r6, [r3, #40]	@ 000d3844 9e62
.org 0xd3846
	ldr r0, [r4, #0]	@ 000d3846 2068
.org 0xd3848
	str r0, [r3, #116]	@ 000d3848 5867
.org 0xd384a
	ldr r0, [r4, #4]	@ 000d384a 6068
.org 0xd384c
	str r0, [r3, #120]	@ 000d384c 9867
.org 0xd384e
	strb r5, [r3, #18]	@ 000d384e 9d74
.org 0xd3850
	adds r0, r3, #0	@ 000d3850 181c
.org 0xd3852
	adds r0, #124	@ 000d3852 7c30
.org 0xd3854
	strb r5, [r0, #0]	@ 000d3854 0570
.org 0xd3856
	adds r0, r3, #0	@ 000d3856 181c
.org 0xd3858
	pop {r4, r5, r6}	@ 000d3858 70bc
.org 0xd385a
	pop {r1}	@ 000d385a 02bc
.org 0xd385c
	bx r1	@ 000d385c 0847
