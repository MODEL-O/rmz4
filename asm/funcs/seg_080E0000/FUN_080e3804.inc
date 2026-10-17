@ FUN_080e3804  entry 0x080e3804  size 86
.thumb
.org 0xe3804
FUN_080e3804:
	push {r4, r5, lr}	@ 000e3804 30b5
.org 0xe3806
	adds r5, r0, #0	@ 000e3806 051c
.org 0xe3808
	bl 0x1cc9c	@ 000e3808 39f748fa
.org 0xe380c
	ldrb r0, [r5, #16]	@ 000e380c 287c
.org 0xe380e
	cmp r0, #3	@ 000e380e 0328
.org 0xe3810
	bne.n 0xe381a	@ 000e3810 03d1
.org 0xe3812
	adds r1, r5, #0	@ 000e3812 291c
.org 0xe3814
	adds r1, #34	@ 000e3814 2231
.org 0xe3816
	movs r0, #1	@ 000e3816 0120
.org 0xe3818
	strb r0, [r1, #0]	@ 000e3818 0870
.org 0xe381a
	ldrb r1, [r5, #10]	@ 000e381a a97a
.org 0xe381c
	movs r0, #1	@ 000e381c 0120
.org 0xe381e
	orrs r0, r1	@ 000e381e 0843
.org 0xe3820
	movs r1, #2	@ 000e3820 0221
.org 0xe3822
	orrs r0, r1	@ 000e3822 0843
.org 0xe3824
	strb r0, [r5, #10]	@ 000e3824 a872
.org 0xe3826
	ldr r1, [pc, #52]	@ 000e3826 0d49
.org 0xe3828
	ldrb r0, [r5, #9]	@ 000e3828 687a
.org 0xe382a
	lsls r0, r0, #2	@ 000e382a 8000
.org 0xe382c
	adds r0, r0, r1	@ 000e382c 4018
.org 0xe382e
	movs r4, #1	@ 000e382e 0124
.org 0xe3830
	str r4, [r5, #12]	@ 000e3830 ec60
.org 0xe3832
	ldr r0, [r0, #0]	@ 000e3832 0068
.org 0xe3834
	ldr r0, [r0, #4]	@ 000e3834 4068
.org 0xe3836
	str r0, [r5, #20]	@ 000e3836 6861
.org 0xe3838
	ldr r1, [pc, #36]	@ 000e3838 0949
.org 0xe383a
	ldrb r0, [r5, #16]	@ 000e383a 287c
.org 0xe383c
	lsls r0, r0, #2	@ 000e383c 8000
.org 0xe383e
	adds r0, r0, r1	@ 000e383e 4018
.org 0xe3840
	ldr r1, [r0, #0]	@ 000e3840 0168
.org 0xe3842
	adds r0, r5, #0	@ 000e3842 281c
.org 0xe3844
	bl 0x128f80	@ 000e3844 45f09cfb
.org 0xe3848
	adds r0, r5, #0	@ 000e3848 281c
.org 0xe384a
	adds r0, #116	@ 000e384a 7430
.org 0xe384c
	strb r4, [r0, #0]	@ 000e384c 0470
.org 0xe384e
	adds r0, r5, #0	@ 000e384e 281c
.org 0xe3850
	bl 0xe3864	@ 000e3850 00f008f8
.org 0xe3854
	pop {r4, r5}	@ 000e3854 30bc
.org 0xe3856
	pop {r0}	@ 000e3856 01bc
.org 0xe3858
	bx r0	@ 000e3858 0047
