@ FUN_0807371c  entry 0x0807371c  size 88
.thumb
.org 0x7371c
FUN_0807371c:
	push {r4, r5, r6, r7, lr}	@ 0007371c f0b5
.org 0x7371e
	sub sp, #8	@ 0007371e 82b0
.org 0x73720
	ldr r2, [r0, #84]	@ 00073720 426d
.org 0x73722
	ldr r0, [r0, #88]	@ 00073722 806d
.org 0x73724
	ldr r1, [pc, #68]	@ 00073724 1149
.org 0x73726
	adds r3, r0, r1	@ 00073726 4318
.org 0x73728
	ldr r1, [pc, #68]	@ 00073728 1149
.org 0x7372a
	adds r4, r2, r1	@ 0007372a 5418
.org 0x7372c
	movs r7, #0	@ 0007372c 0027
.org 0x7372e
	ldr r1, [pc, #68]	@ 0007372e 1149
.org 0x73730
	adds r6, r0, r1	@ 00073730 4618
.org 0x73732
	adds r0, r4, #0	@ 00073732 201c
.org 0x73734
	adds r1, r6, #0	@ 00073734 311c
.org 0x73736
	str r2, [sp, #0]	@ 00073736 0092
.org 0x73738
	str r3, [sp, #4]	@ 00073738 0193
.org 0x7373a
	bl 0x7c7c	@ 0007373a 94f79ffa
.org 0x7373e
	lsls r0, r0, #16	@ 0007373e 0004
.org 0x73740
	ldr r2, [sp, #0]	@ 00073740 009a
.org 0x73742
	ldr r3, [sp, #4]	@ 00073742 019b
.org 0x73744
	cmp r0, #0	@ 00073744 0028
.org 0x73746
	bne.n 0x73778	@ 00073746 17d1
.org 0x73748
	movs r0, #128	@ 00073748 8020
.org 0x7374a
	lsls r0, r0, #5	@ 0007374a 4001
.org 0x7374c
	adds r6, r6, r0	@ 0007374c 3618
.org 0x7374e
	adds r7, #1	@ 0007374e 0137
.org 0x73750
	cmp r7, #1	@ 00073750 012f
.org 0x73752
	ble.n 0x73732	@ 00073752 eedd
.org 0x73754
	movs r0, #224	@ 00073754 e020
.org 0x73756
	lsls r0, r0, #4	@ 00073756 0001
.org 0x73758
	adds r1, r3, r0	@ 00073758 1918
.org 0x7375a
	adds r0, r4, #0	@ 0007375a 201c
.org 0x7375c
	bl 0x7c7c	@ 0007375c 94f78efa
.org 0x73760
	lsls r0, r0, #16	@ 00073760 0004
.org 0x73762
	cmp r0, #0	@ 00073762 0028
.org 0x73764
	bne.n 0x73778	@ 00073764 08d1
.org 0x73766
	movs r0, #0	@ 00073766 0020
.org 0x73768
	b.n 0x7377a	@ 00073768 07e0
.org 0x7376a
	.byte 0x00	@ 0007376a data
.org 0x7376b
	.byte 0x00	@ 0007376b data
.org 0x7376c
	.byte 0x00,0xf2,0xff,0xff	@ 0007376c data
.org 0x73770
	.byte 0x00,0xf6,0xff,0xff	@ 00073770 data
